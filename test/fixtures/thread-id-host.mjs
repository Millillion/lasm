import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { Worker, isMainThread, parentPort } from 'node:worker_threads';
import nativeThreadId from '../../src/thread-id.cjs';

if (isMainThread) {
  const main = nativeThreadId();
  assert.ok(main > 0n);
  assert.equal(nativeThreadId(), main);
  if (process.platform === 'linux') assert.equal(main, BigInt(process.pid));
  const workers = Array.from({ length: 3 }, () => new Worker(new URL(import.meta.url)));
  try {
    const ids = await Promise.all(workers.map(worker => new Promise((resolve, reject) => {
      worker.once('message', resolve); worker.once('error', reject);
    })));
    assert.equal(new Set([main, ...ids]).size, 4);
    for (const id of ids) {
      assert.ok(id > 0n);
      if (process.platform === 'linux') assert.ok(existsSync(`/proc/self/task/${id}`));
    }
    console.log('native thread IDs are stable and identify each live OS thread');
  } finally { await Promise.all(workers.map(worker => worker.terminate())); }
} else {
  parentPort.on('message', () => {});
  parentPort.postMessage(nativeThreadId());
}
