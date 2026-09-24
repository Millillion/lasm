// Blocking synchronization component; all equal-value waits have finite limits.
import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { fileURLToPath } from 'node:url';
import { createNativeAtomicViews } from '../native-atomic-views.mjs';

const ffi = createRequire(import.meta.url)('koffi');
const libraryPath = isMainThread ? process.argv[2] : workerData.libraryPath;
const library = ffi.load(libraryPath);
const create = library.func('void *lasm_probe_atomics_new(char *error, size_t capacity)');
const destroy = library.func('void lasm_probe_delete(void *probe)');
const access = library.func('int lasm_probe_atomic(void *probe, uint64_t offset, uint32_t width, uint32_t operation, uint64_t value, uint64_t comparison, _Out_ uint64_t *result)');
const invoke = library.func('int lasm_probe_atomic_wasm(void *probe, str name, uint64_t offset, uint64_t value, int64_t timeout, _Out_ uint64_t *result, char *error, size_t capacity)');
const wait = library.func('int lasm_probe_atomic_wait(void *probe, uint64_t offset, uint32_t width, uint64_t value, int64_t timeout, _Out_ uint64_t *result, char *error, size_t capacity)');
const error = Buffer.alloc(4096), message = () => error.toString('utf8').split('\0')[0];
const byteLength = 2 ** 32 + 2 * 65536;
function wasm(probe, name, offset, value = 0n, timeout = 0n) {
  const result = [0];
  assert.equal(invoke(probe, name, offset, value, timeout, result, error, error.length), 0, message());
  return Number(result[0]);
}
function adapter(probe) {
  return createNativeAtomicViews({ byteLength,
    atomic(offset, width, operation, value, comparison) {
      const result = [0];
      assert.equal(access(probe, offset, width, operation, value, comparison, result), 0);
      return BigInt(result[0]);
    },
    wait(offset, width, expected, milliseconds) {
      // The prototype boundary is signed nanoseconds. Do not silently shorten
      // a larger finite duration; extending that transport remains open.
      const nanos = milliseconds === Infinity ? -1n : BigInt(Math.floor(milliseconds * 1e6));
      if (nanos > 2n ** 63n - 1n) throw new RangeError('Prototype wait duration exceeds signed nanoseconds');
      const result = [0];
      assert.equal(wait(probe, offset, width, expected, nanos, result, error, error.length), 0, message());
      return Number(result[0]);
    },
    notify(offset, count) {
      return wasm(probe, 'notify', offset, BigInt(Math.min(count, 0xffffffff)));
    },
  });
}
function outcome(action) {
  try { return { returned: action() }; }
  catch (error) { return { thrown: error.constructor.name }; }
}

if (!isMainThread) {
  const { probe, mode, offset, width } = workerData;
  parentPort.once('message', () => {
    let result;
    if (mode === 'wasm') result = ['ok', 'not-equal', 'timed-out'][wasm(probe, 'wait' + width * 8,
      offset, 0n, 2_000_000_000n)];
    else {
      const bridge = adapter(probe), span = bridge.view(width === 8 ? BigInt64Array : Int32Array, offset, 1);
      try { result = bridge.atomics.wait(span, 0, width === 8 ? 0n : 0, 2000); }
      finally { bridge.close(); }
    }
    parentPort.postMessage({ result });
  });
  parentPort.postMessage({ ready: true });
} else {
  const probe = create(error, error.length); assert.ok(probe, message());
  const bridge = adapter(probe), live = new Set(), checks = [];
  let comparisons = 0;
  function equal(actual, expected, context) { assert.deepEqual(actual, expected, context); comparisons++; }
  function worker(task) {
    const child = new Worker(fileURLToPath(import.meta.url), {
      workerData: { libraryPath, probe: ffi.address(probe), ...task },
    });
    live.add(child);
    let ready, readyFail, complete, fail, received;
    const initialized = new Promise((resolve, reject) => { ready = resolve; readyFail = reject; });
    const completed = new Promise((resolve, reject) => { complete = resolve; fail = reject; });
    initialized.catch(() => {}); completed.catch(() => {});
    const timer = setTimeout(() => { const e = new Error('Atomic wait worker deadline'); readyFail(e); fail(e); }, 10000);
    child.on('message', value => { if (value.ready) ready(); else received = value; });
    child.once('error', e => { readyFail(e); fail(e); });
    child.once('exit', code => {
      live.delete(child); clearTimeout(timer);
      if (code !== 0 || !received) { const e = new Error('Wait worker exited: ' + code); readyFail(e); fail(e); }
      else complete(received.result);
    });
    return { initialized, completed, go: () => child.postMessage({ go: true }) };
  }
  async function eventuallyNotify(notify) {
    const deadline = Date.now() + 1500;
    while (Date.now() < deadline) {
      const result = notify();
      if (result) return result;
      await new Promise(resolve => setTimeout(resolve, 2));
    }
    throw new Error('A waiter did not register before the finite deadline');
  }
  try {
    for (const base of [0, 2 ** 32]) for (const Type of [Int32Array, BigInt64Array]) {
      const width = Type.BYTES_PER_ELEMENT, big = width === 8, offset = base + 8192 + width * 16;
      const span = bridge.view(Type, offset, 1), ref = new Type(new SharedArrayBuffer(width));
      const zero = big ? 0n : 0, one = big ? 1n : 1;
      bridge.atomics.store(span, 0, zero);
      let actions = 0;
      // Mismatch returns promptly even for infinite timeouts; matching controls
      // below only use finite timeouts. No unbounded blocking control is started.
      for (const timeout of [undefined, NaN, Infinity, -Infinity, -1, 0, 0.01, 1, '0', null, true, 1n, Symbol('bad')]) {
        equal(outcome(() => bridge.atomics.wait(span, 0, one, timeout)),
          outcome(() => Atomics.wait(ref, 0, one, timeout)), Type.name + '/mismatch-timeout'); actions++;
      }
      for (const timeout of [-Infinity, -10, -0, 0.01, 1]) {
        equal(bridge.atomics.wait(span, 0, zero, timeout), Atomics.wait(ref, 0, zero, timeout), Type.name + '/finite-timeout'); actions++;
      }
      for (const value of big ? [-1n, 2n ** 64n, '-1', false, 1, undefined, null, Symbol('bad')]
        : [-1, 2 ** 32, NaN, Infinity, undefined, null, '-1', false, 1n, Symbol('bad')]) {
        equal(outcome(() => bridge.atomics.wait(span, 0, value, 0)),
          outcome(() => Atomics.wait(ref, 0, value, 0)), Type.name + '/expected-conversion'); actions++;
      }
      for (const count of [undefined, NaN, Infinity, -Infinity, -1, -0, 0.9, 1.9, 2 ** 32 + 1,
        '2', null, true, 1n, Symbol('bad')]) {
        equal(outcome(() => bridge.atomics.notify(span, 0, count)),
          outcome(() => Atomics.notify(ref, 0, count)), Type.name + '/notify-count'); actions++;
      }
      for (const mode of ['wait-order', 'notify-order', 'index-throw', 'value-throw', 'timeout-throw',
        'count-throw', 'invalid-index', 'timeout-mutation']) {
        function observe(atomics, view) {
          atomics.store(view, 0, zero);
          const log = [];
          const input = (label, value, throws = false) => ({ valueOf() {
            log.push(label);
            if (throws) throw new SyntaxError('intentional conversion failure');
            if (mode === 'timeout-mutation' && label === 'timeout') atomics.store(view, 0, one);
            return value;
          } });
          const index = input('index', mode === 'invalid-index' ? 1 : 0, mode === 'index-throw');
          const result = mode.includes('notify') || mode.includes('count')
            ? outcome(() => atomics.notify(view, index, input('count', 0, mode === 'count-throw')))
            : outcome(() => atomics.wait(view, index, input('value', zero, mode === 'value-throw'),
              input('timeout', 0, mode === 'timeout-throw')));
          return { log, result, stored: atomics.load(view, 0) };
        }
        equal(observe(bridge.atomics, span), observe(Atomics, ref), Type.name + '/' + mode); actions++;
      }
      checks.push({ kind: 'wait-notify-semantics', base, width, actions });
      for (const mode of ['facade', 'wasm']) {
        bridge.atomics.store(span, 0, zero);
        const pending = worker({ mode, offset, width }); await pending.initialized; pending.go();
        const notified = await eventuallyNotify(() => mode === 'facade'
          ? wasm(probe, 'notify', offset, 1n) : bridge.atomics.notify(span, 0, 1));
        equal(notified, 1, 'one cross-boundary waiter'); equal(await pending.completed, 'ok', 'cross-boundary wake');
        checks.push({ kind: 'cross-boundary-wake', base, width, waiter: mode });
      }
      // Two waiters share one Wasmtime queue, including mixed 32/64 wait widths
      // at the same byte address. notify's count is observable across both.
      bridge.atomics.store(span, 0, zero);
      const first = worker({ mode: 'facade', offset, width });
      const second = worker({ mode: 'wasm', offset, width: width === 8 ? 4 : width });
      await Promise.all([first.initialized, second.initialized]); first.go(); second.go();
      equal(await eventuallyNotify(() => bridge.atomics.notify(span, 0, 1)), 1, 'notify exactly one');
      equal(bridge.atomics.notify(span, 0, 0), 0, 'zero does not wake remaining waiter');
      equal(await eventuallyNotify(() => bridge.atomics.notify(span, 0)), 1, 'notify remaining waiter');
      equal(await first.completed, 'ok'); equal(await second.completed, 'ok');
      checks.push({ kind: 'two-waiter-count-and-mixed-width', base, width });
    }
    let rejectionControls = 0;
    for (const Type of [Int8Array, Uint8Array, Int16Array, Uint16Array, Uint32Array, BigUint64Array]) {
      const span = bridge.view(Type, 12288, 1), ref = new Type(new SharedArrayBuffer(Type.BYTES_PER_ELEMENT));
      for (const name of ['wait', 'notify']) {
        const log = [], index = { valueOf() { log.push('index'); return 0; } };
        equal(outcome(() => bridge.atomics[name](span, index, 0, 0)), outcome(() => Atomics[name](ref, index, 0, 0)));
        equal(log, [], 'non-waitable type rejected before index'); rejectionControls++;
      }
    }
    for (const [offset, width, timeout] of [[1n, 8, 0n], [0n, 2, 0n], [0n, 4, -2n],
      [BigInt(byteLength), 4, 0n]]) {
      equal(wait(probe, offset, width, 0n, timeout, [0], error, error.length), 2); rejectionControls++;
    }
    const span = bridge.view(Int32Array, 12288, 1);
    for (const name of ['wait', 'notify']) {
      const guarded = createNativeAtomicViews({ byteLength: 4, atomic() {},
        wait() { throw new Error('Must not enter released wait'); }, notify() { throw new Error('Must not enter released notify'); } });
      const view = guarded.view(Int32Array, 0, 1), closes = { valueOf() { guarded.close(); return 0; } };
      assert.throws(() => name === 'wait' ? guarded.atomics.wait(view, 0, 0, closes)
        : guarded.atomics.notify(view, 0, closes), /released/); rejectionControls++;
    }
    assert.throws(() => bridge.atomics.waitAsync(span, 0, 0, 0), /not implemented/); rejectionControls++;
    console.log(JSON.stringify({ scope: 'Blocking native-span wait/notify semantics and Wasm queue interoperability; async waits and full runtime integration remain open',
      engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      accessibleGuestBytes: byteLength, checks, comparisons, rejectionControls,
      limitation: 'Prototype signed-nanosecond transport rejects finite timeouts above its range; no full JS Atomics compatibility claim' }));
  } finally {
    bridge.close(); await Promise.all([...live].map(child => child.terminate())); destroy(probe);
  }
}
