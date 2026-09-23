import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtemp, writeFile, readFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { fork } from 'node:child_process';
import { withApplicationLock } from '../src/application-lock.mjs';

const fixture = fileURLToPath(new URL('./fixtures/application-lock.mjs', import.meta.url));
async function setup(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-lock-'));
  const lock = join(directory, 'build.lock'), value = join(directory, 'counter');
  await writeFile(value, '0');
  const children = new Set();
  t.after(async () => {
    const remaining = [...children];
    for (const child of remaining) child.kill('SIGKILL');
    await Promise.allSettled(remaining.map(child => child.completed));
    await rm(directory, { recursive: true, force: true });
  });
  const launch = mode => {
    const child = fork(fixture, [lock, value, mode], { execArgv: ['--max-old-space-size=64'], silent: true });
    children.add(child);
    let stderr = '';
    child.stderr.on('data', bytes => { stderr += bytes; });
    child.completed = new Promise((resolve, reject) => {
      child.once('error', reject);
      child.once('exit', (code, signal) => { children.delete(child); resolve({ code, signal, stderr }); });
    });
    return child;
  };
  return { lock, value, launch };
}

test('separate build processes cannot interleave updates under the OS lock', { timeout: 15_000 }, async t => {
  const { value, launch } = await setup(t);
  const children = [launch('increment'), launch('increment'), launch('increment')];
  for (const child of children) assert.deepEqual(await child.completed, { code: 0, signal: null, stderr: '' });
  assert.equal(await readFile(value, 'utf8'), '15');
});

test('an interrupted owner releases its lock without PID files, stale timeouts or manual cleanup', { timeout: 15_000 }, async t => {
  const { lock, launch } = await setup(t);
  const child = launch('hold');
  await Promise.race([
    new Promise(resolve => child.once('message', message => { assert.equal(message, 'locked'); resolve(); })),
    child.completed.then(result => { throw new Error('Owner exited before acquisition: ' + JSON.stringify(result)); }),
  ]);
  let entered = false;
  const waiting = withApplicationLock(lock, async () => { entered = true; return 42; });
  await new Promise(resolve => setTimeout(resolve, 100));
  assert.equal(entered, false);
  child.kill('SIGKILL'); await child.completed;
  assert.equal(await waiting, 42);
});

test('exceptions release a build lock for the next operation', async t => {
  const { lock } = await setup(t);
  await assert.rejects(withApplicationLock(lock, () => { throw new Error('compile failed'); }), /compile failed/);
  assert.equal(await withApplicationLock(lock, () => 'recovered'), 'recovered');
});
