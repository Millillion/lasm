import test from 'node:test';
import assert from 'node:assert/strict';
import { subscribe, unsubscribe } from 'node:diagnostics_channel';
import { mkdtemp, writeFile, rm } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { setTimeout as sleep } from 'node:timers/promises';
import { nativeFiles } from '../src/native-files.mjs';

// Server MVP soak regression. Std.Http reads /etc/localtime (open, read, read,
// close) for every response's Date header. The file pool retired idle workers
// after 1 s and kept at most two, so concurrent or spaced requests created a
// new worker for many operations; each create/terminate cycle leaked native
// Koffi memory (~1.3 KiB per request on Linux/macOS servers). Workers must be
// reused across bursts and idle gaps, bounded by the peak concurrency.
test('file workers are reused across concurrent bursts and idle gaps', async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-file-churn-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const path = join(directory, 'localtime');
  await writeFile(path, Buffer.alloc(2048, 7));
  let created = 0;
  const count = () => { created++; };
  subscribe('worker_threads', count);
  t.after(() => unsubscribe('worker_threads', count));
  const files = nativeFiles(), concurrency = 8;
  const burst = rounds => Promise.all(Array.from({ length: concurrency }, async () => {
    for (let i = 0; i < rounds; i++) {
      const file = await files.open(path, 0);
      try {
        assert.equal((await files.read(file, 65536)).length, 2048);
        assert.equal((await files.read(file, 65536)).length, 0);
      } finally { await files.closeAsync(file); }
    }
  }));
  await burst(25);
  const afterFirst = created;
  assert.ok(afterFirst <= concurrency, `${afterFirst} workers for ${concurrency} concurrent callers`);
  await sleep(1500); // longer than the former 1 s idle retirement
  await burst(25);
  assert.equal(created, afterFirst, 'idle workers are reused after a pause');
});
