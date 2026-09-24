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
// Pass explicitly sized storage; a C pointer parameter does not carry an array
// length, and Koffi correctly rejects array syntax in a function prototype.
const memory = library.func('int lasm_probe_memory(void *probe, void *fields)');
const grow = library.func('int lasm_probe_grow_one_page(void *probe, char *error, size_t size)');
const wait = library.func('int lasm_probe_wait(void *probe, _Out_ int64_t *result, char *error, size_t size)');
const notify = library.func('int lasm_probe_notify(void *probe, _Out_ int64_t *result, char *error, size_t size)');
const legacy = library.func('int lasm_probe_legacy_exception(void *probe, const uint8_t *bytes, size_t length, char *error, size_t size)');
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
  const values = Buffer.alloc(4 * 8);
  assert.equal(memory(probe, values), 0);
  return Array.from({ length: 4 }, (_, index) => Number(values.readBigUInt64LE(index * 8)));
}
function atomic(action, probe) {
  const result = [0];
  assert.equal(action(probe, result, error, error.length), 0, message());
  return Number(result[0]);
}
if (!isMainThread) {
  const result = run(workerData.probe, 41);
  parentPort.postMessage({ phase: 'ready', ...result, memory: describe(workerData.probe), threadPeek: Number(peek(workerData.probe)) });
  // Block in an actual Wasm atomic wait on this worker's independent Store.
  parentPort.postMessage({ phase: 'waited', result: atomic(wait, workerData.probe) });
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
    let readyResolve, readyReject, waitResolve, waitReject, messages = 0;
    const ready = new Promise((resolve, reject) => { readyResolve = resolve; readyReject = reject; });
    const waited = new Promise((resolve, reject) => { waitResolve = resolve; waitReject = reject; });
    // Waited is consumed below after the initial message, including errors.
    waited.catch(() => {});
    const fail = error => { readyReject(error); waitReject(error); };
    worker.on('message', value => {
      if (value.phase === 'ready' && messages++ === 0) readyResolve(value);
      else if (value.phase === 'waited' && messages++ === 1) waitResolve(value);
      else fail(new Error('Unexpected probe worker message'));
    });
    worker.once('error', fail);
    worker.once('exit', code => { if (messages !== 2) fail(new Error('Worker exited before response: ' + code)); });
    const second = await ready;
    assert.equal(second.result, 84); assert.equal(second.threadPeek, 42);
    assert.deepEqual(second.memory, before);
    assert.equal(Number(peek(probe)), 42, 'Native shared memory survives JavaScript isolate boundary');
    let notified = 0, attempts = 0;
    const deadline = performance.now() + 3000;
    while (!notified && performance.now() < deadline) {
      notified = atomic(notify, probe); attempts++;
      if (!notified) await new Promise(resolve => setTimeout(resolve, 1));
    }
    assert.equal(notified, 1, 'Wake one real Wasm waiter from a different JavaScript isolate');
    const waiting = await waited;
    assert.equal(waiting.result, 0, 'Wasm wait must wake normally, rather than time out');
    await worker.terminate(); worker = undefined;
    assert.equal(grow(probe, error, error.length), 0, message());
    const after = describe(probe);
    assert.deepEqual(after, [1, 1, 131072, 131072]);
    const third = run(probe, 99);
    assert.equal(Number(peek(probe)), 100);
    // A 52-byte legacy try/catch control, independently instantiated by the
    // stock JS engine before assessing the helper. Avoid a WAT parser's syntax
    // rejection being mistaken for rejection of valid compiled bytecode.
    const legacyBytes = Uint8Array.of(
      0, 97, 115, 109, 1, 0, 0, 0,
      1, 9, 2, 0x60, 0, 1, 0x7e, 0x60, 1, 0x7e, 0,
      3, 2, 1, 0,
      13, 3, 1, 0, 1,
      7, 7, 1, 3, 114, 117, 110, 0, 0,
      10, 13, 1, 11, 0, 0x06, 0x7e, 0x42, 7, 0x08, 0, 0x07, 0, 0x0b, 0x0b,
    );
    assert.ok(WebAssembly.validate(legacyBytes), 'Independent stock-engine legacy-bytecode validation');
    const legacyNative = (await WebAssembly.instantiate(legacyBytes)).instance.exports.run();
    assert.equal(legacyNative, 7n);
    error.fill(0);
    const legacyStatus = legacy(probe, legacyBytes, legacyBytes.length, error, error.length);
    assert.notEqual(legacyStatus, 2);
    const legacyException = { stockEngineResult: Number(legacyNative), accepted: legacyStatus === 0, diagnostic: message() };
    console.log(JSON.stringify({ engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      before, after, first, second, third, concurrentWait: { notified, attempts, waitResult: waiting.result },
      legacyException, peakGuestBytes: 131072,
      scope: 'Private helper executes tiny memory64/atomic/exception/host-callback module across JS isolates; no Lean or large-memory acceptance claim' }));
  } finally {
    if (worker) await worker.terminate();
    destroy(probe);
  }
}
