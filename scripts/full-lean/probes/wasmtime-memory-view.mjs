// A view of the existing sparse native mapping; never copy/fill/transfer it.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';

const ffi = createRequire(import.meta.url)('koffi');
const libraryPath = isMainThread ? process.argv[2] : workerData.libraryPath;
const profile = isMainThread ? process.argv[3] : workerData.profile;
assert.ok(['whole', 'window'].includes(profile));
const library = ffi.load(libraryPath);
const create = library.func('void *lasm_probe_new(char *error, size_t size)');
const destroy = library.func('void lasm_probe_delete(void *probe)');
const data = library.func('void *lasm_probe_memory_data(void *probe)');
const window = library.func('void *lasm_probe_memory_window(void *probe, uint64_t offset, size_t length)');
const peek = library.func('uint64_t lasm_probe_peek(void *probe)');
const callback = ffi.proto('int64_t MemoryViewCallback(int64_t value)');
const execute = library.func('int lasm_probe_run(void *probe, int64_t value, MemoryViewCallback *callback, _Out_ int64_t *result, char *error, size_t size)');
const offset = 2 ** 32, length = offset + 2 * 65536;
const viewLength = profile === 'whole' ? length : 8;
const viewIndex = profile === 'whole' ? offset : 0;
const error = Buffer.alloc(4096), message = () => error.toString('utf8').split('\0')[0];

function view(probe) {
  // Koffi's reviewed CreateView uses N-API's external ArrayBuffer constructor.
  // The accessible native range already exists; this does not allocate 4 GiB.
  let pointer = data(probe);
  if (profile === 'window') {
    const range = window(probe, offset, viewLength);
    assert.ok(range); assert.equal(ffi.address(range) - ffi.address(pointer), BigInt(offset));
    assert.equal(window(probe, length, 8), null, 'Reject a view beyond accessible memory');
    assert.equal(window(probe, offset, 65537), null, 'Reject a view beyond the reviewed window size');
    pointer = range;
  }
  const buffer = ffi.view(pointer, viewLength);
  assert.equal(buffer.byteLength, viewLength);
  assert.equal(buffer instanceof ArrayBuffer, true);
  assert.equal(buffer instanceof SharedArrayBuffer, false);
  const bytes = new Uint8Array(buffer), words = new BigUint64Array(buffer), values = new DataView(buffer);
  assert.equal(bytes.length, viewLength); assert.equal(words.length, viewLength / 8);
  assert.equal(values.byteLength, viewLength);
  return { buffer, bytes, words, values };
}
function run(probe, value) {
  const result = [0], calls = [];
  assert.equal(execute(probe, value, input => { calls.push(Number(input)); return Number(input) + 1; },
    result, error, error.length), 0, message());
  assert.deepEqual(calls, [value]); assert.equal(Number(result[0]), (value + 1) * 2);
  return Number(result[0]);
}

if (!isMainThread) {
  const probe = workerData.probe, memory = view(probe);
  assert.equal(memory.values.getBigUint64(viewIndex, true), 33n);
  // Parent and child do not access this cell concurrently; messages order the
  // handoff. This is not a claim of SharedArrayBuffer/Atomics semantics.
  memory.words[viewIndex / 8] = 41n;
  assert.equal(Number(peek(probe)), 41);
  const result = run(probe, 41);
  assert.equal(memory.values.getBigUint64(viewIndex, true), 42n);
  parentPort.postMessage({ result, byteLength: memory.buffer.byteLength, value: 42 });
} else {
  const probe = create(error, error.length); assert.ok(probe, message());
  let worker, memory;
  try {
    memory = view(probe);
    assert.equal(run(probe, 11), 24);
    assert.equal(memory.values.getBigUint64(viewIndex, true), 12n);
    memory.words[viewIndex / 8] = 33n;
    assert.equal(Number(peek(probe)), 33);
    worker = new Worker(fileURLToPath(import.meta.url), { workerData: { libraryPath, probe: ffi.address(probe), profile } });
    let received;
    const result = await new Promise((resolve, reject) => {
      const timer = setTimeout(() => reject(new Error('Memory-view worker deadline')), 15_000);
      worker.once('message', value => { received = value; });
      worker.once('error', failure => { clearTimeout(timer); reject(failure); });
      worker.once('exit', code => {
        clearTimeout(timer);
        if (code !== 0 || !received) reject(new Error('Worker exited without its verified result: ' + code));
        else resolve(received);
      });
    });
    worker = undefined;
    assert.deepEqual(result, { result: 84, byteLength: viewLength, value: 42 });
    assert.equal(memory.values.getBigUint64(viewIndex, true), 42n);
    assert.equal(memory.bytes[viewIndex], 42);
    assert.equal(Number(peek(probe)), 42);
    console.log(JSON.stringify({ engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      profile, accessibleGuestBytes: length, byteLength: viewLength, dataOffset: offset, touchedBytes: 8, worker: result,
      externalBuffer: true, sharedArrayBuffer: false,
      scope: 'Ordered JavaScript/native/Wasm access to one sparse high-address cell; no copying, bulk allocation, JS atomic synchronization, or Lean execution' }));
  } finally {
    if (worker) await worker.terminate();
    memory = undefined;
    // No surviving worker or accessible view may be used after this point.
    destroy(probe);
  }
}
