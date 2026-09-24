// Small private-helper feasibility experiment; not a Lasm engine adapter.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';

const ffi = createRequire(import.meta.url)('koffi');
const libraryPath = isMainThread ? process.argv[2] : workerData.libraryPath;
const library = ffi.load(libraryPath);
const callbackType = ffi.proto('int64_t ProbeCallback(int64_t value)');
const create = library.func('void *lasm_probe_new(char *error, size_t size)');
const destroy = library.func('void lasm_probe_delete(void *probe)');
const execute = library.func('int lasm_probe_run(void *probe, int64_t value, ProbeCallback *callback, _Out_ int64_t *result, char *error, size_t size)');
const peek = library.func('uint64_t lasm_probe_peek(void *probe)');
const memory = library.func('int lasm_probe_memory(void *probe, _Out_ uint64_t fields[4])');
const grow = library.func('int lasm_probe_grow_one_page(void *probe, char *error, size_t size)');
const error = Buffer.alloc(4096);
const message = () => error.toString('utf8').split('\0')[0];
function run(probe, value) {
  const calls = [], result = [0];
  const callback = input => { calls.push(Number(input)); return Number(input) + 1; };
  assert.equal(execute(probe, value, callback, result, error, error.length), 0, message());
  assert.deepEqual(calls, [value]);
  assert.equal(Number(result[0]), (value + 1) * 2);
  return { value, result: Number(result[0]), callbacks: calls };
}
function describe(probe) {
  const values = [0, 0, 0, 0];
  assert.equal(memory(probe, values), 0);
  return values.map(Number);
}
if (!isMainThread) {
  const result = run(workerData.probe, 41);
  parentPort.postMessage({ ...result, memory: describe(workerData.probe), threadPeek: Number(peek(workerData.probe)) });
} else {
  let worker;
  const probe = create(error, error.length);
  assert.ok(probe, message());
  try {
    const before = describe(probe);
    assert.deepEqual(before, [1, 1, 131072, 65536]);
    const first = run(probe, 11);
    const address = ffi.address(probe);
    worker = new Worker(fileURLToPath(import.meta.url), { workerData: { libraryPath, probe: address } });
    const second = await new Promise((resolve, reject) => {
      let received = false;
      worker.once('message', value => { received = true; resolve(value); });
      worker.once('error', reject);
      worker.once('exit', code => { if (!received) reject(new Error('Worker exited before response: ' + code)); });
    });
    assert.equal(second.result, 84); assert.equal(second.threadPeek, 42);
    assert.deepEqual(second.memory, before);
    assert.equal(Number(peek(probe)), 42, 'Native shared memory survives JavaScript isolate boundary');
    await worker.terminate(); worker = undefined;
    assert.equal(grow(probe, error, error.length), 0, message());
    const after = describe(probe);
    assert.deepEqual(after, [1, 1, 131072, 131072]);
    const third = run(probe, 99);
    assert.equal(Number(peek(probe)), 100);
    console.log(JSON.stringify({ engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      before, after, first, second, third, peakGuestBytes: 131072,
      scope: 'Private helper executes tiny memory64/atomic/exception/host-callback module across JS isolates; no Lean or large-memory acceptance claim' }));
  } finally {
    if (worker) await worker.terminate();
    destroy(probe);
  }
}
