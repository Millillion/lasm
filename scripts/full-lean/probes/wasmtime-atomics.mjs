// Native atomic access to sparse memory64 backing; not a shipping backend.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';

const ffi = createRequire(import.meta.url)('koffi');
const libraryPath = isMainThread ? process.argv[2] : workerData.libraryPath;
const library = ffi.load(libraryPath);
const create = library.func('void *lasm_probe_atomics_new(char *error, size_t capacity)');
const destroy = library.func('void lasm_probe_delete(void *probe)');
const access = library.func('int lasm_probe_atomic(void *probe, uint64_t offset, uint32_t width, uint32_t operation, uint64_t value, uint64_t comparison, _Out_ uint64_t *result)');
const invoke = library.func('int lasm_probe_atomic_wasm(void *probe, str name, uint64_t offset, uint64_t value, int64_t timeout, _Out_ uint64_t *result, char *error, size_t capacity)');
const error = Buffer.alloc(4096), message = () => error.toString('utf8').split('\0')[0];
function atomic(probe, offset, width, operation, value = 0n, comparison = 0n) {
  const result = [0]; assert.equal(access(probe, offset, width, operation, value, comparison, result), 0);
  return BigInt(result[0]);
}
function wasm(probe, name, offset, value = 0n, timeout = 0n) {
  const result = [0]; assert.equal(invoke(probe, name, offset, value, timeout, result, error, error.length), 0, message());
  return BigInt(result[0]);
}

if (!isMainThread) {
  const { probe, mode, width, offset, iterations } = workerData;
  parentPort.once('message', () => {
    let result;
    if (mode === 'wait') result = wasm(probe, 'wait' + width * 8, offset, 0n, 2_000_000_000n);
    else if (mode === 'wasm-add') result = wasm(probe, 'add' + width * 8, offset, BigInt(iterations));
    else {
      assert.equal(mode, 'host-add');
      for (let i = 0; i < iterations; i++) atomic(probe, offset, width, 2, 1n);
      result = atomic(probe, offset, width, 0);
    }
    parentPort.postMessage({ result: result.toString() });
  });
  parentPort.postMessage({ ready: true });
} else {
  const probe = create(error, error.length); assert.ok(probe, message());
  const live = new Set(), checks = [];
  function worker(task) {
    const child = new Worker(fileURLToPath(import.meta.url), {
      workerData: { libraryPath, probe: ffi.address(probe), ...task },
    });
    live.add(child);
    let ready, failReady, finish, fail, received;
    const initialized = new Promise((resolve, reject) => { ready = resolve; failReady = reject; });
    const completed = new Promise((resolve, reject) => { finish = resolve; fail = reject; });
    completed.catch(() => {});
    const timer = setTimeout(() => { failReady(new Error('Atomic worker deadline')); fail(new Error('Atomic worker deadline')); }, 10_000);
    child.on('message', value => { if (value.ready) ready(); else received = value; });
    child.once('error', err => { failReady(err); fail(err); });
    child.once('exit', code => {
      live.delete(child); clearTimeout(timer);
      if (code !== 0 || !received) { const err = new Error('Atomic worker exited without result: ' + code); failReady(err); fail(err); }
      else finish(received);
    });
    return { initialized, completed, go: () => child.postMessage({ go: true }) };
  }
  try {
    for (const base of [0, 2 ** 32]) {
      for (const width of [1, 2, 4, 8]) {
        const offset = base + width * 16;
        const Type = ({ 1: Uint8Array, 2: Uint16Array, 4: Uint32Array, 8: BigUint64Array })[width];
        const reference = new Type(new SharedArrayBuffer(width));
        const js = value => width === 8 ? value : Number(value);
        const maximum = (1n << BigInt(width * 8)) - 1n;
        const sequence = [['store', 1, maximum], ['add', 2, 1n], ['sub', 3, 1n],
          ['store', 1, 251n], ['add', 2, 253n], ['sub', 3, 507n],
          ['and', 4, 0x1234n], ['or', 5, 0x80n], ['xor', 6, 0x5an], ['exchange', 7, 44n],
          ['compareExchange', 8, 55n, 44n], ['compareExchange', 8, 66n, 44n]];
        for (const [name, op, value, comparison = 0n] of sequence) {
          const before = name === 'compareExchange' ? Atomics.compareExchange(reference, 0, js(comparison), js(value))
            : Atomics[name](reference, 0, js(value));
          const actual = atomic(probe, offset, width, op, value, comparison);
          // The primitive store reports stored bits; the future JS facade must
          // implement Atomics.store's distinct converted-input return value.
          const context = JSON.stringify({ offset, width, name, value: String(value), comparison: String(comparison) });
          if (name !== 'store') assert.equal(actual, BigInt(before), context + ': returned value');
          assert.equal(atomic(probe, offset, width, 0), BigInt(Atomics.load(reference, 0)), context + ': stored value');
          assert.equal(wasm(probe, 'read' + width * 8, offset), BigInt(Atomics.load(reference, 0)), context + ': Wasm read');
        }
        checks.push({ kind: 'scalar-native-js-and-wasm', offset, width, operations: sequence.length });
      }
      for (const width of [4, 8]) {
        const offset = base + 256 + width * 16;
        atomic(probe, offset, width, 1, 0n);
        assert.equal(wasm(probe, 'wait' + width * 8, offset, 1n, 0n), 1n);
        assert.equal(wasm(probe, 'wait' + width * 8, offset, 0n, 1_000_000n), 2n);
        const pending = worker({ mode: 'wait', width, offset }); await pending.initialized; pending.go();
        const deadline = Date.now() + 1500;
        let notified = 0n;
        while (!notified && Date.now() < deadline) {
          notified = wasm(probe, 'notify', offset, 1n);
          if (!notified) await new Promise(resolve => setTimeout(resolve, 2));
        }
        assert.equal(notified, 1n); assert.deepEqual(await pending.completed, { result: '0' });
        checks.push({ kind: 'wait-notify', offset, width, notEqual: 1, timeout: 2, awakened: 0 });
        atomic(probe, offset, width, 1, 0n);
        const first = worker({ mode: 'host-add', offset, width, iterations: 10000 });
        const second = worker({ mode: 'wasm-add', offset, width, iterations: 10000 });
        await Promise.all([first.initialized, second.initialized]); first.go(); second.go();
        await Promise.all([first.completed, second.completed]);
        assert.equal(atomic(probe, offset, width, 0), 20000n);
        assert.equal(wasm(probe, 'read' + width * 8, offset), 20000n);
        checks.push({ kind: 'two-worker-native-and-wasm-add', offset, width, increments: 20000 });
      }
    }
    for (const [offset, width, operation] of [[1n, 8, 0], [2n ** 64n - 1n, 8, 0],
      [BigInt(2 ** 32 + 2 * 65536), 4, 0], [0n, 3, 0], [0n, 4, 9]])
      assert.equal(access(probe, offset, width, operation, 0, 0, [0]), 2);
    for (const [name, offset, value, timeout] of [
      ['read64', 1n, 0n, 0n], ['read64', 2n ** 64n - 1n, 0n, 0n],
      ['unknown', 0n, 0n, 0n], ['wait64', 0n, 0n, 5_000_000_001n],
      ['add64', 0n, 200001n, 0n],
    ]) assert.equal(invoke(probe, name, offset, value, timeout, [0], error, error.length), 2);
    console.log(JSON.stringify({ scope: 'Sparse memory64 host atomic primitives and Wasm wait/notify; no full JS Atomics facade or Lean application integration',
      engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      accessibleGuestBytes: 2 ** 32 + 2 * 65536, touchedCells: 12, checks,
      invalidNativeAddressesAndOperationsRejected: 5, invalidWasmInputsRejected: 5 }));
  } finally {
    await Promise.all([...live].map(child => child.terminate()));
    destroy(probe);
  }
}
