// The edge profile's controller (src/edge/edge-pre.js), the Emscripten pre-JS
// between the JavaScript host and the single-threaded Lean runtime, run as the
// built program runs it: in a script scope beside the module's own globals
// (HEAPU8, stackSave, the exports), here stand-ins. Lean is played by the
// stand-in exports, which call the controller as runtime/edge.cpp does.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';

const source = readFileSync(new URL('../src/edge/edge-pre.js', import.meta.url), 'utf8');
const INT64_MIN = -(2n ** 63n);
const tick = () => new Promise(resolve => setTimeout(resolve, 0));
// Under mutation testing the script shares the test's mutant switch and coverage.
const instrumentation = () => ({ process, ...(globalThis.__stryker__ ? { __stryker__: globalThis.__stryker__ } : {}) });

/** A controller in a fresh script scope. */
function load({ jspi = true, suspending = true, embedder = jspi, Asyncify, globals = {} } = {}) {
  const memory = new ArrayBuffer(65536);
  let next = 1024;
  const engine = Object.assign(Object.create(WebAssembly), suspending ? { Suspending: function Suspending(fn) { this.fn = fn; }, promising: f => async () => f() } : { Suspending: undefined });
  const freed = [];
  let sp = 5000;
  const context = {
    Module: { lasmEdgeJspi: embedder }, globalThis: { WebAssembly: engine },
    HEAPU8: new Uint8Array(memory), HEAPU32: new Uint32Array(memory), BigInt, Number, Error, TextEncoder, DataView, Object, String, Math, queueMicrotask,
    _malloc: n => { const p = next; next += Math.ceil(n / 8) * 8 + 8; return p; }, _free: p => freed.push(p),
    stackSave: () => sp, stackRestore: value => { context.restored.push(value); sp = value; }, restored: [],
    ...(Asyncify ? { Asyncify } : {}), ...globals, ...instrumentation(),
  };
  runInNewContext(source, context);
  const controller = context.Module.lasmEdge;
  const host = { requests: [], released: [], pendingCount: 0, answer: () => ({ error: false, bytes: new Uint8Array(0) }),
    request(...args) { this.requests.push(args); return this.answer(...args); }, pending() { return this.pendingCount > 0; },
    release(handle) { this.released.push(handle); } };
  controller.attach(host);
  return { controller, context, host, engine, freed, setSp: value => { sp = value; } };
}

test('edge-pre: JSPI is used where the engine has it and the embedder allows it, else the wrappers are identities', () => {
  const real = load();
  assert.equal(real.context.WebAssembly, real.engine, 'the engine itself');
  assert.equal(real.controller.jspi, true);
  for (const options of [{ suspending: false }, { jspi: false }, { suspending: false, jspi: false }]) {
    const { context, controller, engine } = load(options);
    assert.notEqual(context.WebAssembly, engine);
    assert.equal(Object.getPrototypeOf(context.WebAssembly), engine, 'every other engine API is the engine\'s');
    const f = () => 1;
    assert.equal(context.WebAssembly.Suspending(f), f);
    assert.equal(context.WebAssembly.promising(f), f);
    assert.equal(context.WebAssembly.Suspending.name, 'Suspending');
    assert.equal(controller.jspi, false, JSON.stringify(options));
  }
  // An Asyncify build can always suspend; one without Asyncify data cannot.
  assert.equal(load({ suspending: false, jspi: false, Asyncify: { currData: null } }).controller.jspi, true);
  assert.equal(load({ suspending: false, jspi: false, Asyncify: {} }).controller.jspi, false);
  // Decided when first needed, then kept.
  const late = load({ suspending: false, jspi: false });
  assert.equal(late.controller.jspi, false);
  late.context.Asyncify = { currData: null };
  assert.equal(late.controller.jspi, false);
  const early = load({ suspending: false, jspi: false });
  early.context.Asyncify = { currData: null };
  assert.equal(early.controller.jspi, true, 'Asyncify is defined after the pre-JS runs, before the first use');
});

test('edge-pre: a synchronous host call copies its input, answers with the response length and hands the bytes over once', () => {
  const { controller, context, host } = load();
  context.HEAPU8.set([1, 2, 3, 4], 100);
  host.answer = () => ({ error: false, bytes: Uint8Array.of(9, 8, 7) });
  assert.equal(controller.call(5, 6, 7n, 100, 3), 3n);
  context.HEAPU8[100] = 99;
  assert.deepEqual(host.requests.map(([op, handle, arg, bytes]) => [op, handle, arg, [...bytes]]), [[5, 6, 7n, [1, 2, 3]]], 'a copy of the input');
  assert.throws(() => controller.copy(200, 2), /Mismatched Lean host response size/);
  assert.throws(() => controller.copy(200, 3), /Mismatched Lean host response size/, 'a failed copy consumes the response');
  assert.equal(controller.call(5, 6, 7n, 100, 3), 3n);
  controller.copy(200, 3);
  assert.deepEqual([...context.HEAPU8.subarray(200, 204)], [9, 8, 7, 0]);
  assert.throws(() => controller.copy(200, 3), /Mismatched/, 'only once');
  // No input: an empty array, whatever the pointer. An error result: -(length + 1).
  host.answer = () => ({ error: true, bytes: new Uint8Array(0) });
  assert.equal(controller.call(1, 0, 0n, 100, 0), -1n);
  assert.equal(host.requests.at(-1)[3].length, 0);
  context.HEAPU8[300] = 5;
  controller.copy(300, 0);
  assert.equal(context.HEAPU8[300], 5, 'an empty response writes nothing');
  host.answer = () => ({ error: true, bytes: Uint8Array.of(1, 2) });
  assert.equal(controller.call(1, 0, 0n, 0, 0), -3n);
  controller.release(42);
  assert.deepEqual(host.released, [42]);
  assert.throws(() => controller.fail('Lean said no'), { message: 'Lean said no' });
});

test('edge-pre: an asynchronous host call suspends Lean when it can; its result is taken when ready', async () => {
  const { controller, context, host } = load();
  let resolve, reject;
  const answers = [new Promise(r => { resolve = r; }), new Promise((_, r) => { reject = r; }), Promise.reject('plain')];
  host.answer = () => answers.shift();
  const seen = [];
  let finish;
  context.callMain = () => {
    seen.push(controller.canSuspend());
    seen.push(controller.call(1, 0, 0n, 0, 0), controller.callReady());
    seen.push(controller.call(2, 0, 0n, 0, 0), controller.call(3, 0, 0n, 0, 0));
    return new Promise(r => { finish = r; });
  };
  const running = controller.main(['a']);
  assert.deepEqual(seen, [true, INT64_MIN, false, INT64_MIN, INT64_MIN]);
  await tick();
  // The innermost call is the last; it settled first here (a rejection with a plain value).
  assert.equal(controller.callReady(), true);
  const plain = controller.takeCall();
  const bytes = new Uint8Array(-Number(plain) - 1);
  controller.copy(400, bytes.length);
  const view = new DataView(context.HEAPU8.buffer, 400, bytes.length);
  assert.equal(view.getBigUint64(0, true), 18n, 'a Lean IO error: other error');
  assert.equal(new TextDecoder().decode(context.HEAPU8.subarray(416, 400 + bytes.length)), 'plain');
  assert.equal(controller.callReady(), false, 'the next one has not settled');
  reject(new Error('refused — ü'));
  await tick();
  assert.equal(controller.callReady(), true);
  const failed = controller.takeCall();
  controller.copy(500, -Number(failed) - 1);
  assert.equal(new TextDecoder().decode(context.HEAPU8.subarray(516, 500 + -Number(failed) - 1)), 'refused — ü');
  resolve({ error: false, bytes: Uint8Array.of(4, 5) });
  await tick();
  assert.equal(controller.takeCall(), 2n);
  controller.copy(600, 2);
  assert.deepEqual([...context.HEAPU8.subarray(600, 602)], [4, 5]);
  assert.equal(controller.callReady(), false, 'none left');
  finish(7);
  assert.equal(await running, 7);
});

test('edge-pre: a call that must wait where Lean cannot suspend fails, as a Lean IO error for Lasm.JS awaits', async () => {
  const unhandled = [];
  const listener = reason => unhandled.push(reason);
  process.on('unhandledRejection', listener);
  try {
    for (const options of [{ jspi: false }, { jspi: true }]) {
      const { controller, context, host } = load(options);
      host.answer = () => Promise.reject(new Error('late'));
      const reason = options.jspi ? 'outside a Lean entry' : 'this Lean instance runs without JSPI';
      // Outside main (idle) a JSPI build cannot suspend either.
      const run = f => options.jspi ? f() : (context.callMain = f, controller.main([]));
      for (const op of [199, 220, 72]) {
        assert.throws(() => run(() => controller.call(op, 0, 0n, 0, 0)), new RegExp(`Lean host operation ${op} must wait, and this Lean code cannot suspend \\(${options.jspi ? 'inside a synchronous JavaScript callback' : reason}\\)`));
        if (!options.jspi) assert.match(controller.stopped.message, /must wait/);
        if (!options.jspi) break;
      }
      const fresh = load(options);
      fresh.host.answer = () => Promise.reject(new Error('late'));
      for (const op of [200, 205, 219]) {
        let answer;
        const call = () => { answer = fresh.controller.call(op, 0, 0n, 0, 0); };
        if (options.jspi) call(); else { fresh.context.callMain = call; fresh.controller.main([]); }
        const bytes = new Uint8Array(-Number(answer) - 1);
        fresh.controller.copy(1000, bytes.length);
        assert.equal(new TextDecoder().decode(fresh.context.HEAPU8.subarray(1016, 1000 + bytes.length)),
          `Lean host operation ${op} completes asynchronously and cannot be waited for here (${options.jspi ? 'inside a synchronous JavaScript callback' : reason}); await it in Async instead`);
      }
      assert.equal(fresh.controller.stopped, null);
    }
    await tick(); await tick();
    assert.deepEqual(unhandled, [], 'the abandoned promises are handled');
  } finally { process.off('unhandledRejection', listener); }
});

test('edge-pre: wait suspends until the host has work, and notify resumes it or pumps an idle runtime', async () => {
  const { controller, context, host } = load();
  let pumps = 0;
  context._lasm_edge_pump = () => { pumps++; return 0; };
  // Idle: notify pumps at once.
  controller.notify();
  assert.equal(pumps, 1);
  // Running: notify waits for Lean's next poll.
  let waited;
  context.callMain = () => {
    controller.notify();
    waited = controller.wait();
    controller.notify(); // suspended now: resumes it
    return waited;
  };
  const running = controller.main([]);
  assert.equal(pumps, 1, 'not pumped while Lean runs');
  assert.equal(await waited, 1);
  assert.equal(await running, 1);
  // A wait with work already pending resumes at once.
  host.pendingCount = 1;
  context.callMain = () => controller.wait();
  context._lasm_edge_pump = () => { pumps++; host.pendingCount = 0; return 0; };
  assert.equal(await controller.main([]), 1);
  assert.equal(pumps, 2, 'pending work after an entry is pumped when it ends');
  // A wait while a suspended call is ready resumes at once too.
  host.answer = () => Promise.resolve({ error: false, bytes: new Uint8Array(0) });
  context.callMain = async () => {
    controller.call(1, 0, 0n, 0, 0);
    await tick();
    return controller.wait();
  };
  assert.equal(await controller.main([]), 1);
  // wake without a waiter does nothing.
  controller.wake();
});

test('edge-pre: pump runs Lean only when it is idle and the instance has not stopped', async () => {
  const { controller, context, host } = load();
  const calls = [];
  context._lasm_edge_pump = () => { calls.push('pump'); return 0; };
  let inside;
  context.callMain = () => { controller.pump(); inside = calls.length; return 0; };
  assert.equal(controller.main([]), 0);
  assert.equal(inside, 0, 'not while running');
  controller.pump();
  assert.deepEqual(calls, ['pump']);
  // A pump whose entry fails is reported to the listeners, never thrown.
  const stops = [];
  controller.onStop(error => stops.push(error.message));
  context._lasm_edge_pump = () => { throw new Error('trap in pump'); };
  controller.pump();
  assert.deepEqual(stops, ['trap in pump']);
  context._lasm_edge_pump = () => { calls.push('after stop'); return 0; };
  controller.pump();
  assert.deepEqual(calls, ['pump'], 'a stopped instance is not pumped');
  // An asynchronous pump that fails is handled too.
  const other = load();
  other.context._lasm_edge_pump = () => Promise.reject(new Error('async trap'));
  const errors = [];
  other.controller.onStop(error => errors.push(error.message));
  other.controller.pump();
  await tick();
  assert.deepEqual(errors, ['async trap']);
  assert.equal(host.requests.length, 0);
});

test('edge-pre: a failing entry stops the instance: listeners hear it once, the stack is restored, later calls fail with the cause', async () => {
  const { controller, context, setSp } = load();
  const heard = [];
  controller.onStop(() => { throw new Error('a listener that throws'); });
  controller.onStop(error => heard.push(error));
  setSp(9000);
  context.callMain = () => { setSp(-16); throw 'not an Error'; };
  assert.throws(() => controller.main([]), error => error instanceof context.Error && error.message === 'not an Error');
  assert.equal(heard.length, 1);
  assert.equal(controller.stopped, heard[0]);
  assert.deepEqual({ ...controller.stoppedStack }, { top: 9000, pointer: 2 ** 32 - 16 });
  assert.deepEqual(context.restored, [9000]);
  assert.throws(() => controller.main([]), heard[0]);
  assert.throws(() => controller.syncCall(1, new Uint8Array(1)), heard[0]);
  controller.close('later');
  assert.equal(controller.stopped, heard[0], 'close keeps the first cause');
  assert.equal(heard.length, 1);
  // A rejected promising entry stops it the same way.
  const other = load();
  const seen = [];
  other.controller.onStop(error => seen.push(error.message));
  other.context.callMain = () => Promise.reject(new Error('async failure'));
  await assert.rejects(other.controller.main([]), /async failure/);
  assert.deepEqual(seen, ['async failure']);
  assert.equal(other.controller.stopped.message, 'async failure');
  // The stack top is the highest pointer seen entering Lean.
  const third = load();
  third.context.callMain = () => 0;
  for (const value of [100, 7000, 300]) { third.setSp(value); third.controller.main([]); }
  third.context.callMain = () => { throw new Error('x'); };
  third.setSp(50);
  assert.throws(() => third.controller.main([]));
  assert.deepEqual({ ...third.controller.stoppedStack }, { top: 7000, pointer: 50 });
});

test('edge-pre: close ends the instance without a failure report; initialized reaches the host when it listens', () => {
  const { controller, host } = load();
  const heard = [];
  controller.onStop(error => heard.push(error));
  assert.equal(controller.stopped, null);
  assert.equal(controller.stoppedStack, null);
  controller.close();
  assert.equal(controller.stopped.message, 'The Lean instance was closed');
  assert.deepEqual(heard, []);
  assert.throws(() => controller.main([]), /The Lean instance was closed/);
  const other = load();
  other.controller.close('unmounted');
  assert.equal(other.controller.stopped.message, 'unmounted');
  controller.initialized();
  let ready = 0;
  host.initialized = () => { ready++; };
  controller.initialized();
  assert.equal(ready, 1);
});

test('edge-pre: an Asyncify entry that unwinds completes with whenDone', async () => {
  const Asyncify = { currData: null, whenDone: () => Promise.resolve(11) };
  const { controller, context, host } = load({ suspending: false, jspi: false, Asyncify });
  context.callMain = () => { Asyncify.currData = {}; return undefined; };
  const result = controller.main([]);
  assert.equal(typeof result.then, 'function');
  Asyncify.currData = null;
  assert.equal(await result, 11);
  // A plain return: the value itself.
  context.callMain = () => 3;
  assert.equal(controller.main([]), 3);
  assert.equal(host.requests.length, 0);
});

test('edge-pre: a synchronous JavaScript → Lean call passes the payload, returns the result and pumps once afterwards', async () => {
  const { controller, context, freed } = load();
  const calls = [];
  let pumps = 0;
  context._lasm_edge_pump = () => { pumps++; return 0; };
  context._lasm_js_edge_sync = (fn, input, length, size) => {
    calls.push([fn, typeof input, [...context.HEAPU8.subarray(Number(input), Number(input) + Number(length))], typeof size, controller.canSuspend()]);
    context.HEAPU8.set([7, 7, 7], 3000);
    context.HEAPU32[Number(size) >> 2] = 3;
    return 3000n;
  };
  const result = controller.syncCall(4, Uint8Array.of(1, 2));
  assert.deepEqual([...result], [7, 7, 7]);
  context.HEAPU8[3000] = 0;
  assert.equal(result[0], 7, 'a copy');
  assert.deepEqual(calls, [[4, 'bigint', [1, 2], 'bigint', false]]);
  assert.equal(freed.length, 2, 'the input and the size are freed');
  controller.syncCall(5, new Uint8Array(0));
  assert.equal(calls[1][0], 5);
  assert.equal(pumps, 0, 'not yet');
  await tick();
  assert.equal(pumps, 1, 'one pump for both calls, after the JavaScript that called them');
  assert.equal(controller.canSuspend(), false, 'idle again');
  // Inside a Lean entry the state stays running and nothing is scheduled.
  context.callMain = () => { controller.syncCall(6, Uint8Array.of(0)); return controller.canSuspend(); };
  assert.equal(controller.main([]), true, 'Lean may suspend again once the callback returned');
  await tick();
  assert.equal(pumps, 1);
  // A callback that traps stops the instance.
  context._lasm_js_edge_sync = () => { throw new Error('trap in callback'); };
  assert.throws(() => controller.syncCall(7, Uint8Array.of(0)), /trap in callback/);
  assert.equal(controller.stopped.message, 'trap in callback');
});
