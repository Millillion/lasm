// Small differential diagnostic: invoke with the selected stock engine inside
// scripts/full-lean/run-bounded.mjs. It reserves a 64 MiB OS worker stack and
// distinguishes that reservation from the engine's Wasm execution-stack limit.
import assert from 'node:assert/strict';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { hasResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

if (isMainThread) {
  if (!hasResourceGuard()) throw new Error('Run this diagnostic inside the resource guard');
  for (const setFlag of [false, true]) {
    if (setFlag) (await import('node:v8')).setFlagsFromString('--stack-size=61440');
    const row = await new Promise((resolve, reject) => {
      const worker = new Worker(new URL(import.meta.url), {
        resourceLimits: { stackSizeMb: 64 }, workerData: { setFlag },
      });
      worker.on('message', resolve); worker.on('error', reject);
    });
    console.log(JSON.stringify(row));
  }
} else {
  // recurse(n) = n, with a non-tail recursive call and no heap allocation.
  const body = [0, 0x20,0,0x45,0x04,0x7f,0x41,0,0x05,0x20,0,0x41,1,0x6b,0x10,0,0x41,1,0x6a,0x0b,0x0b];
  const bytes = new Uint8Array([0,97,115,109,1,0,0,0,
    1,6,1,0x60,1,0x7f,1,0x7f,3,2,1,0,
    7,11,1,7,...Buffer.from('recurse'),0,0,
    10,body.length+2,1,body.length,...body]);
  const { instance } = await WebAssembly.instantiate(bytes);
  assert.equal(instance.exports.recurse(100), 100);
  const outcomes = {};
  for (const kind of ['ordinary', 'promising']) {
    try {
      const fn = kind === 'ordinary' ? instance.exports.recurse : WebAssembly.promising(instance.exports.recurse);
      outcomes[kind] = await fn(100_000);
    } catch (error) { outcomes[kind] = String(error); }
  }
  parentPort.postMessage({ engine: process.versions.deno ?? process.version, smallControl: 100, ...workerData, outcomes });
}
