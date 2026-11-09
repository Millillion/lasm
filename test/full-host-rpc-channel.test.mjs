import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';
import { Worker } from 'node:worker_threads';

// Lean→host calls use one shared-memory slot per Lean thread and nesting depth
// (host-library.js $lasmFullRPC, host-pre.js lasmFullServe). These tests run the
// actual worker-side object in a real worker thread against the actual
// main-thread prelude, over one SharedArrayBuffer standing in for Wasm memory.
const prelude = readFileSync(new URL('../scripts/full-lean/host-pre.js', import.meta.url), 'utf8');
const library = readFileSync(new URL('../scripts/full-lean/host-library.js', import.meta.url), 'utf8');
const rpcSource = library.slice(library.indexOf('  $lasmFullRPC: {') + '  $lasmFullRPC: '.length, library.indexOf('  lasm_node_call__deps'))
  .trimEnd().replace(/,$/, '');

// The worker evaluates $lasmFullRPC with Emscripten's globals: heap views, a
// bump allocator, and a futex wait that is a plain Atomics.wait (Emscripten's
// also services the pthread mailbox; here a script can run a nested call).
const workerSource = `
const { parentPort, workerData } = require('node:worker_threads');
const vm = require('node:vm');
const { memory, rpcSource, script, listed } = workerData;
let next = 1024, nestedOnce = false;
// Programs with Lasm.JS export lasm_js_host_wait (library/c/lasm_js.c): one listed wait for the reply word.
const hostWaits = [];
const Module = listed ? { _lasm_js_host_wait: ready => { hostWaits.push(ready); Atomics.wait(new Int32Array(memory), Number(ready) / 4, 0); } } : {};
const context = vm.createContext({ ENVIRONMENT_IS_PTHREAD: true, require, process, performance, Atomics, BigInt, Number, Error, TextDecoder, TextEncoder, Module, hostWaits,
  HEAP32: new Int32Array(memory), HEAPU32: new Uint32Array(memory), HEAPU64: new BigUint64Array(memory), HEAPU8: new Uint8Array(memory),
  _malloc: size => { const p = next; next += Math.ceil(Number(size) / 16) * 16; return p; },
  _free: () => {}, _pthread_self: () => 77,
  _emscripten_futex_wait: (address, value, timeout) => {
    if (context.nested && !nestedOnce) { nestedOnce = true; context.nested(); }
    Atomics.wait(new Int32Array(memory), address / 4, value, timeout === Infinity ? undefined : timeout);
  } });
vm.runInContext('var lasmFullRPC = ' + rpcSource + ';', context);
const results = vm.runInContext(script, context);
parentPort.postMessage({ done: results });
`;

function run(host, script, { listed = false, setup } = {}) {
  const memory = new SharedArrayBuffer(4 * 1024 * 1024);
  const Module = { lasmLeanVersion: '4.35.0' };
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module, wasmMemory: { buffer: memory }, Atomics, Int32Array, Uint8Array,
    DataView, BigUint64Array, Buffer, process, performance, setImmediate, lasmFullHost: Promise.resolve(host) };
  runInNewContext(prelude, context);
  setup?.(context);
  return new Promise((resolve, reject) => {
    const worker = new Worker(workerSource, { eval: true, workerData: { memory, rpcSource, script, listed } });
    worker.on('message', message => {
      if (message.cmd === 9) Module[message.handler](...message.args);
      else { resolve(message.done); worker.terminate(); }
    });
    worker.on('error', reject);
  });
}

test('synchronous and asynchronous calls reply in place, with Lean error status and request fields', async () => {
  const seen = [];
  const host = { request(op, id, arg, bytes, context) {
    seen.push([op, id, arg, Buffer.from(bytes).toString(), context.fiber]);
    if (op === 1) return { error: false, bytes: Buffer.from('sync') };
    if (op === 2) return Promise.resolve({ error: true, bytes: Buffer.from('async error') });
    return { error: false, bytes: Buffer.alloc(0) };
  } };
  const results = await run(host, `
    const input = 600; HEAPU8.set(new TextEncoder().encode('payload'), input);
    const read = r => [r.error, new TextDecoder().decode(HEAPU8.slice(r.pointer, r.pointer + r.length))];
    [read(lasmFullRPC.call('request', 1, 5, 2n ** 63n, input, 7)), read(lasmFullRPC.call('request', 2, 6, 0n, 0, 0)),
     read(lasmFullRPC.call('request', 3, 0, 0n, 0, 0)), lasmFullRPC.slots.length]`);
  assert.deepEqual(results, [[false, 'sync'], [true, 'async error'], [false, ''], 1]);
  assert.deepEqual(seen, [[1, 5, 2n ** 63n, 'payload', 77], [2, 6, 0n, '', 77], [3, 0, 0n, '', 77]]);
});

test('a reply larger than the slot buffer grows it once and is copied whole', async () => {
  const big = Buffer.alloc(200_000, 7); big[0] = 1; big[big.length - 1] = 9;
  const host = { request: op => ({ error: false, bytes: op === 1 ? big : Buffer.from([op]) }) };
  const results = await run(host, `
    const a = lasmFullRPC.call('request', 1, 0, 0n, 0, 0);
    const first = [a.length, HEAPU8[a.pointer], HEAPU8[a.pointer + a.length - 1], HEAPU8[a.pointer + 1000]];
    const b = lasmFullRPC.call('request', 1, 0, 0n, 0, 0);
    const c = lasmFullRPC.call('request', 2, 0, 0n, 0, 0);
    [first, b.pointer === a.pointer, b.length, HEAPU8[c.pointer], Number(HEAPU64[(lasmFullRPC.slots[0] + 56) / 8])]`);
  assert.deepEqual(results, [[200_000, 1, 9, 7], true, 200_000, 2, 200_000]);
});

test('host failures throw on the Lean thread; release and start use their kinds', async () => {
  const host = {
    request: () => { throw new Error('host defect'); },
    releaseAsync: id => new Promise(resolve => setTimeout(() => { host.released = id; resolve(); }, 5)),
    start: () => 4242,
  };
  const results = await run(host, `
    let message; try { lasmFullRPC.call('request', 1, 0, 0n, 0, 0); } catch (e) { message = e.message; }
    const released = lasmFullRPC.call('release', 0, 9, 0n, 0, 0);
    const started = lasmFullRPC.call('start', 35, 0, 1n, 0, 0);
    [message.split('\\n')[0], released.error, released.length, Number(HEAPU64[started.pointer / 8])]`);
  assert.deepEqual(results, ['Error: host defect', false, 0, 4242]);
  assert.equal(host.released, 9);
});

test('a call nested inside the wait uses the next depth slot and both get their replies', async () => {
  let release;
  const host = { request(op) {
    if (op === 1) return new Promise(resolve => { release = () => resolve({ error: false, bytes: Buffer.from('outer') }); });
    setTimeout(() => release(), 5);
    return { error: false, bytes: Buffer.from('inner') };
  } };
  const results = await run(host, `
    const read = r => new TextDecoder().decode(HEAPU8.slice(r.pointer, r.pointer + r.length));
    let inner;
    nested = () => { inner = read(lasmFullRPC.call('request', 2, 0, 0n, 0, 0)); };
    const outer = read(lasmFullRPC.call('request', 1, 0, 0n, 0, 0));
    [outer, inner, lasmFullRPC.slots.length, lasmFullRPC.depth]`);
  assert.deepEqual(results, ['outer', 'inner', 2, 0]);
});

test('with Lasm.JS, a call waits for its reply through lasm_js_host_wait (listed), rechecking the reply word', async () => {
  const host = { request: op => (op === 1 ? { error: false, bytes: Buffer.from('now') }
    : new Promise(resolve => setTimeout(() => resolve({ error: false, bytes: Buffer.from('later') }), 20))) };
  const results = await run(host, `
    const read = r => new TextDecoder().decode(HEAPU8.slice(r.pointer, r.pointer + r.length));
    const a = read(lasmFullRPC.call('request', 1, 0, 0n, 0, 0)), b = read(lasmFullRPC.call('request', 2, 0, 0n, 0, 0));
    [a, b, hostWaits.every(ready => typeof ready === 'bigint' && ready === BigInt(lasmFullRPC.slots[0] + 4)), hostWaits.length > 0]`, { listed: true });
  assert.deepEqual(results, ['now', 'later', true, true]);
});

test('many sequential calls keep one slot per depth', async () => {
  const host = { request: op => (op % 2 ? { error: false, bytes: Buffer.from([op & 255]) } : Promise.resolve({ error: false, bytes: Buffer.from([op & 255]) })) };
  const results = await run(host, `
    // Ordinary operation numbers only (37 loads a native helper; 91-95 are the async protocol).
    let ok = 0; for (let i = 100; i < 2100; i++) { const r = lasmFullRPC.call('request', i, 0, 0n, 0, 0); if (r.length === 1 && HEAPU8[r.pointer] === (i & 255)) ok++; }
    [ok, lasmFullRPC.slots.length]`);
  assert.deepEqual(results, [2000, 1]);
});

// Regression (found by the host bridge model, docs/TESTING.md): inside a
// synchronous Lasm.JS callback Node's main thread serves the callback thread's
// host calls inline. A call made by work proxied to that thread while it waits
// in a host call (Emscripten's dynamic-library synchronization) uses the next
// depth's slot, which the main thread neither served nor knew (its registration
// message waits for the event loop): the callback hung. The main thread now
// follows each slot's link to the next depth's slot and serves it too.
test('inside a synchronous callback, a host call nested in the callback thread’s wait is served inline', async () => {
  const memory = new SharedArrayBuffer(4 * 1024 * 1024);
  const Module = { lasmLeanVersion: '4.35.0' };
  const host = { request: op => ({ error: false, bytes: Buffer.from(op === 2 ? 'inner' : 'outer') }) };
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module, wasmMemory: { buffer: memory }, Atomics, Int32Array, Uint8Array,
    DataView, BigUint64Array, Buffer, process, performance, setImmediate, lasmFullHost: Promise.resolve(host) };
  runInNewContext(prelude, context);
  // Words below the worker's allocator (1024): doorbell 512, ready 516, go 520, done 524.
  const i32 = new Int32Array(memory);
  const script = `
    const read = r => new TextDecoder().decode(HEAPU8.slice(r.pointer, r.pointer + r.length));
    const first = read(lasmFullRPC.call('request', 1, 0, 0n, 0, 0));   // registers depth 0 (event loop running)
    lasmFullRPC.doorbell = 512;                                          // lasm_js_sync_setup
    Atomics.store(HEAP32, 516 / 4, 1); Atomics.notify(HEAP32, 516 / 4);
    while (Atomics.load(HEAP32, 520 / 4) === 0) Atomics.wait(HEAP32, 520 / 4, 0);
    let inner;
    nested = () => { inner = read(lasmFullRPC.call('request', 2, 0, 0n, 0, 0)); };
    const outer = read(lasmFullRPC.call('request', 1, 0, 0n, 0, 0));
    Atomics.store(HEAP32, 524 / 4, 1); Atomics.add(HEAP32, 512 / 4, 1); Atomics.notify(HEAP32, 512 / 4);
    [first, outer, inner, lasmFullRPC.slots.length]`;
  const worker = new Worker(workerSource, { eval: true, workerData: { memory, rpcSource, script } });
  const result = new Promise((resolve, reject) => {
    worker.on('message', message => { if (message.cmd === 9) Module[message.handler](...message.args); else resolve(message.done); });
    worker.on('error', reject);
  });
  try {
    while (Atomics.load(i32, 516 / 4) === 0) await new Promise(resolve => setTimeout(resolve, 5));
    const [slot] = [...context.lasmFullSlots.keys()];
    // The callback: this thread blocks (no event loop) and serves inline, as syncFunction does.
    Atomics.store(i32, 520 / 4, 1); Atomics.notify(i32, 520 / 4);
    const deadline = performance.now() + 3000;
    let bell = Atomics.load(i32, 512 / 4);
    while (Atomics.load(i32, 524 / 4) === 0) {
      if (performance.now() > deadline) throw new Error('the nested host call was never served');
      Atomics.wait(i32, 512 / 4, bell, 10);
      bell = Atomics.load(i32, 512 / 4);
      context.lasmFullServeSync(slot);
    }
    assert.deepEqual(await result, ['outer', 'outer', 'inner', 2]);
    // The nested slot was recorded inline; its registration then starts its server without serving it again.
    const nestedSlot = Number(new DataView(memory).getBigUint64(slot + 96, true));
    assert.ok(context.lasmFullSlots.has(nestedSlot));
    await new Promise(resolve => setTimeout(resolve, 20));
    assert.equal(context.lasmFullSlots.get(nestedSlot).registered, undefined);
    assert.equal(context.lasmFullSlots.get(nestedSlot).sequence, 1);
    // Only the first request went through the asynchronous server: nothing was served twice.
    assert.equal(context.lasmFullServed, 1);
  } finally { await worker.terminate(); }
});

// After a synchronous Lasm.JS call the main thread watches the slot briefly for
// the thread's next request (host-pre.js lasmFullWatch) instead of waiting for
// the event loop, except after calls whose work ends in promise reactions.
test('only synchronous Lasm.JS operations are watched for a next request', () => {
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module: {}, performance };
  runInNewContext(prelude, context);
  const spinnable = context.lasmFullSpinnable;
  for (const op of [200, 201, 202, 203, 204, 206, 210, 211, 213, 219]) assert.equal(spinnable(0, op, 0n), true, `op ${op}`);
  for (const op of [205, 214]) {
    assert.equal(spinnable(0, op, 8n | 1n), true, `op ${op}`);
    assert.equal(spinnable(0, op, 16n), false, `op ${op} settling a Lean promise`);
    assert.equal(spinnable(0, op, 16n | 8n), false, `op ${op} settling a Lean promise`);
  }
  for (const op of [207, 208, 209, 199, 220, 3, 92, 94]) assert.equal(spinnable(0, op, 0n), false, `op ${op}`);
  for (const kind of [1, 2, 3]) assert.equal(spinnable(kind, 205, 0n), false, `kind ${kind}`);
});

test('the watch sees a new request at once, gives up after its window, then rests for a few calls', () => {
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module: {}, performance };
  runInNewContext(prelude, context);
  const i32 = new Int32Array(new SharedArrayBuffer(16)), slot = { sequence: 4 };
  i32[1] = 5;
  assert.equal(context.lasmFullWatch(slot, i32, 1), true);
  i32[1] = 4;
  const t0 = performance.now();
  assert.equal(context.lasmFullWatch(slot, i32, 1), false);
  assert.ok(performance.now() - t0 >= context.lasmFullSpinMs);
  assert.equal(slot.cooling, context.lasmFullSpinCooling);
  i32[1] = 5;
  for (let k = context.lasmFullSpinCooling; k > 0; k--) assert.equal(context.lasmFullWatch(slot, i32, 1), false);
  assert.equal(slot.cooling, 0);
  assert.equal(context.lasmFullWatch(slot, i32, 1), true);
});

test('nothing is watched while other threads make host calls too', () => {
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module: {}, performance };
  runInNewContext(prelude, context);
  const a = {}, b = {}, crowd = context.lasmFullCrowdMs;
  assert.equal(context.lasmFullCrowded(a, 100), false);
  assert.equal(context.lasmFullCrowded(a, 100.5), false);
  // b, 0.5 ms after a: crowded until crowd ms after a's last call.
  assert.equal(context.lasmFullCrowded(b, 101), true);
  assert.equal(context.lasmFullCrowded(b, 100.5 + crowd - 0.1), true);
  assert.equal(context.lasmFullCrowded(b, 100.5 + crowd + 0.1), false);
  assert.equal(context.lasmFullCrowded(a, 100.5 + crowd + 0.2), true);
});

test('a thread calling JavaScript in a tight loop is served in order, and the event loop still runs (burst yields)', async () => {
  // A watch that never gives up: only the burst limit lets the timer run.
  let served = 0, timerFired = false;
  const host = { request() {
    if (served++ === 0) setTimeout(() => { timerFired = true; }, 2);
    return { error: false, bytes: Buffer.from(timerFired ? [1] : [0]) };
  } };
  const results = await run(host, `
    let ok = 0, sawTimer = false, i = 0;
    for (; i < 400000 && !sawTimer; i++) { const r = lasmFullRPC.call('request', 205, 0, 8n, 0, 0); if (r.length === 1) ok++; sawTimer = HEAPU8[r.pointer] === 1; }
    [ok === i, sawTimer]`, { setup: context => { context.lasmFullSpinMs = 200; } });
  assert.deepEqual(results, [true, true]);
  assert.ok(served > 0);
});
