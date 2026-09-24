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
const error = Buffer.alloc(4096), message = () => error.toString('utf8').split('\0')[0];
const byteLength = 2 ** 32 + 2 * 65536;
function backend(probe) {
  return { byteLength, atomic(offset, width, operation, value, comparison) {
    const result = [0];
    assert.equal(access(probe, offset, width, operation, value, comparison, result), 0);
    return BigInt(result[0]);
  } };
}
function wasm(probe, name, offset, value = 0n) {
  const result = [0];
  assert.equal(invoke(probe, name, offset, value, 0n, result, error, error.length), 0, message());
  return BigInt(result[0]);
}
function outcome(action) {
  try { return { returned: action() }; }
  catch (error) { return { thrown: error.constructor.name }; }
}

if (!isMainThread) {
  const { probe, mode, offset, width } = workerData;
  parentPort.once('message', () => {
    if (mode === 'wasm') wasm(probe, 'add' + width * 8, offset, 10000n);
    else {
      const bridge = createNativeAtomicViews(backend(probe));
      const span = bridge.view(width === 8 ? BigInt64Array : Int32Array, offset, 1);
      try { for (let i = 0; i < 10000; i++) bridge.atomics.add(span, 0, width === 8 ? 1n : 1); }
      finally { bridge.close(); }
    }
    parentPort.postMessage({ completed: true });
  });
  parentPort.postMessage({ ready: true });
} else {
  const probe = create(error, error.length); assert.ok(probe, message());
  const bridge = createNativeAtomicViews(backend(probe));
  const live = new Set(), groups = [];
  let comparisons = 0, rejectionControls = 0;
  function equal(a, b, label) { assert.deepEqual(a, b, label); comparisons++; }
  function worker(task) {
    const child = new Worker(fileURLToPath(import.meta.url), {
      workerData: { libraryPath, probe: ffi.address(probe), ...task },
    });
    live.add(child);
    let ready, readyFail, complete, fail, received;
    const initialized = new Promise((resolve, reject) => { ready = resolve; readyFail = reject; });
    const completed = new Promise((resolve, reject) => { complete = resolve; fail = reject; });
    initialized.catch(() => {}); completed.catch(() => {});
    const timer = setTimeout(() => { const e = new Error('Native atomic worker deadline'); readyFail(e); fail(e); }, 10000);
    child.on('message', value => { if (value.ready) ready(); else received = value; });
    child.once('error', e => { readyFail(e); fail(e); });
    child.once('exit', code => {
      live.delete(child); clearTimeout(timer);
      if (code !== 0 || !received?.completed) {
        const e = new Error('Native atomic worker exited without success: ' + code); readyFail(e); fail(e);
      } else complete();
    });
    return { initialized, completed, go: () => child.postMessage({ go: true }) };
  }
  try {
    for (const base of [0, 2 ** 32]) {
      for (const [slot, Type] of [Int8Array, Uint8Array, Int16Array, Uint16Array,
        Int32Array, Uint32Array, BigInt64Array, BigUint64Array].entries()) {
        const width = Type.BYTES_PER_ELEMENT, big = width === 8;
        const offset = base + 1024 + slot * 128;
        const span = bridge.view(Type, offset, 2);
        const ref = new Type(new SharedArrayBuffer(width * 2));
        const zero = big ? 0n : 0, one = big ? 1n : 1;
        const values = big ? [0n, -1n, 1n, 2n ** 63n, 2n ** 64n + 3n, -(2n ** 64n) - 5n,
          '18446744073709551617', true, false, Object(-7n), 1, undefined, null, Symbol('bad')]
          : [0, -0, 1, -1, 255, 256, 65535, 2 ** 31, 2 ** 32 + 3, -(2 ** 32) - 5,
            1.75, -1.75, NaN, Infinity, -Infinity, undefined, null, '257', true,
            Object(-7), 1n, Symbol('bad')];
        let actions = 0;
        const verify = (name, index, args, label) => {
          equal(outcome(() => bridge.atomics[name](span, index, ...args)),
            outcome(() => Atomics[name](ref, index, ...args)), label);
          for (let i = 0; i < 2; i++) {
            equal(bridge.atomics.load(span, i), Atomics.load(ref, i), label + ': bits');
            equal(wasm(probe, 'read' + width * 8, offset + i * width),
              BigInt.asUintN(width * 8, BigInt(Atomics.load(ref, i))), label + ': Wasm bits');
          }
          actions++;
        };
        bridge.atomics.store(span, 0, zero); bridge.atomics.store(span, 1, zero);
        for (const name of ['store', 'add', 'sub', 'and', 'or', 'xor', 'exchange', 'compareExchange'])
          for (const value of values)
            verify(name, 0, name === 'compareExchange' ? [value, one] : [value], Type.name + '/' + name);
        for (const index of [undefined, NaN, -0, -0.9, 0.9, 1.9, '1', -1, 2, Infinity,
          -Infinity, Number.MAX_SAFE_INTEGER + 1, 0n, Symbol('bad')])
          verify('load', index, [], Type.name + '/index');
        for (const bad of big ? [1, null, Symbol('bad')] : [1n, Symbol('bad')])
          verify('compareExchange', 0, [zero, bad], Type.name + '/invalid-replacement');

        // Independent executions reveal validation/coercion order and duplicate
        // coercions. Both callbacks mutate the same observed guest/reference cell.
        for (const mode of ['recursive-index', 'recursive-value', 'compare-order', 'index-throw',
          'value-throw', 'comparison-throw', 'replacement-throw', 'invalid-index', 'primitive-hook']) {
          function observe(atomics, view) {
            atomics.store(view, 0, zero); atomics.store(view, 1, zero);
            const log = [];
            const input = (label, value, throws = false, mutation = false) => ({
              valueOf() {
                log.push(label);
                if (throws) throw new SyntaxError('intentional coercion');
                if (mutation) atomics.store(view, 0, one);
                return value;
              },
            });
            const index = input('index', mode === 'invalid-index' ? 2 : 0,
              mode === 'index-throw', mode === 'recursive-index');
            const value = mode === 'primitive-hook' ? { [Symbol.toPrimitive](hint) { log.push(hint); return one; } }
              : input('value', zero, mode === 'value-throw', mode === 'recursive-value');
            const result = mode.includes('comparison') || mode.includes('replacement') || mode === 'compare-order'
              ? outcome(() => atomics.compareExchange(view, index,
                input('expected', zero, mode === 'comparison-throw'),
                input('replacement', one, mode === 'replacement-throw', true)))
              : outcome(() => atomics.add(view, index, value));
            return { log, result, stored: atomics.load(view, 0) };
          }
          equal(observe(bridge.atomics, span), observe(Atomics, ref), Type.name + '/' + mode);
          actions++;
        }
        groups.push({ base, type: Type.name, width, actions });
      }
      for (const width of [4, 8]) {
        const offset = base + 4096 + width * 16;
        const span = bridge.view(width === 8 ? BigInt64Array : Int32Array, offset, 1);
        bridge.atomics.store(span, 0, width === 8 ? 0n : 0);
        const first = worker({ mode: 'facade', offset, width });
        const second = worker({ mode: 'wasm', offset, width });
        await Promise.all([first.initialized, second.initialized]); first.go(); second.go();
        await Promise.all([first.completed, second.completed]);
        equal(bridge.atomics.load(span, 0), width === 8 ? 20000n : 20000, 'concurrent result');
        equal(wasm(probe, 'read' + width * 8, offset), 20000n, 'concurrent Wasm result');
        groups.push({ base, width, kind: 'facade-and-Wasm-workers', increments: 20000 });
      }
    }
    for (const args of [[Float32Array, 0, 1], [Uint8ClampedArray, 0, 1], [Int32Array, 1, 1],
      [Int32Array, -4, 1], [Int32Array, byteLength, 1], [Int32Array, 0, -1],
      [Int32Array, 0, Infinity], [Int32Array, Number.MAX_SAFE_INTEGER + 1, 0]]) {
      assert.throws(() => bridge.view(...args)); rejectionControls++;
    }
    const empty = bridge.view(Int32Array, byteLength, 0);
    assert.throws(() => bridge.atomics.load(empty, 0), RangeError); rejectionControls++;
    const span = bridge.view(Int32Array, 4096, 1);
    assert.throws(() => Atomics.load(span, 0), TypeError); rejectionControls++;
    assert.throws(() => bridge.atomics.load({ ...span }, 0), TypeError); rejectionControls++;
    for (const name of ['wait', 'waitAsync', 'notify']) {
      assert.throws(() => bridge.atomics[name](span, 0, 0, 0), /not implemented/); rejectionControls++;
    }
    const ordinary = new Int32Array(new SharedArrayBuffer(4));
    equal(bridge.atomics.store(ordinary, 0, -37), -37, 'ordinary SAB fallback');
    equal(bridge.atomics.load(ordinary, 0), -37, 'ordinary SAB read');
    const isolated = createNativeAtomicViews({ byteLength: 4, atomic() { throw new Error('Must not enter native code'); } });
    const dying = isolated.view(Int32Array, 0, 1);
    assert.throws(() => isolated.atomics.store(dying, 0, { valueOf() { isolated.close(); return 0; } }), /released/);
    rejectionControls++;
    bridge.close();
    assert.throws(() => bridge.atomics.load(span, 0), /released/); rejectionControls++;
    equal(bridge.atomics.load(ordinary, 0), -37, 'close does not disable unrelated native Atomics');
    console.log(JSON.stringify({ scope: 'Nine scalar JS Atomics operations on branded sparse native spans; waits, general heap views, shipping backend and Lean acceptance remain separate',
      engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
      version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
      accessibleGuestBytes: byteLength, touchedGuestCells: 36, groups, comparisons, rejectionControls }));
  } finally {
    bridge.close();
    await Promise.all([...live].map(child => child.terminate()));
    destroy(probe);
  }
}
