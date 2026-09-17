import { expect, test } from 'vitest';
import { mkdtemp, readFile, rm, writeFile } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { trackHostOperations } from '../host-operations.mjs';

test.each([false, true])('host drain awaits late filesystem completion, including rejection=%s', async reject => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-host-drain-'));
  const entered = Promise.withResolvers();
  const release = Promise.withResolvers();
  const controller = new AbortController();
  const { host, drain } = trackHostOperations({
    async writeBytes(path, bytes, { signal }) {
      entered.resolve();
      // Deliberately model a host operation already past its cancellation point.
      await release.promise;
      await writeFile(join(directory, path), bytes);
      if (reject) throw signal.reason;
    },
  });
  try {
    const aborted = new Promise(resolve => controller.signal.addEventListener('abort', () => resolve('guest cancelled'), { once: true }));
    const writing = host.writeBytes('value', Buffer.from('settled'), { signal: controller.signal });
    const guest = Promise.race([writing, aborted]);
    await entered.promise;
    controller.abort(new Error('cancelled'));
    expect(await guest).toBe('guest cancelled');
    let drained = false;
    const cleanup = drain().then(() => { drained = true; });
    await new Promise(resolve => setImmediate(resolve));
    expect(drained).toBe(false);
    release.resolve();
    await cleanup;
    expect(await readFile(join(directory, 'value'), 'utf8')).toBe('settled');
    expect(drained).toBe(true);
    await expect(drain()).resolves.toBeUndefined();
  } finally {
    release.resolve();
    await drain();
    await rm(directory, { recursive: true, force: true });
  }
});
