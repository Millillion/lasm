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
const { memory, rpcSource, script } = workerData;
let next = 1024, nestedOnce = false;
const context = vm.createContext({ ENVIRONMENT_IS_PTHREAD: true, require, process, Atomics, BigInt, Number, Error, TextDecoder, TextEncoder,
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

function run(host, script) {
  const memory = new SharedArrayBuffer(4 * 1024 * 1024);
  const Module = { lasmLeanVersion: '4.35.0' };
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module, wasmMemory: { buffer: memory }, Atomics, Int32Array, Uint8Array,
    DataView, BigUint64Array, Buffer, process, lasmFullHost: Promise.resolve(host) };
  runInNewContext(prelude, context);
  return new Promise((resolve, reject) => {
    const worker = new Worker(workerSource, { eval: true, workerData: { memory, rpcSource, script } });
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

test('many sequential calls keep one slot per depth', async () => {
  const host = { request: op => (op % 2 ? { error: false, bytes: Buffer.from([op & 255]) } : Promise.resolve({ error: false, bytes: Buffer.from([op & 255]) })) };
  const results = await run(host, `
    // Ordinary operation numbers only (37 loads a native helper; 91-95 are the async protocol).
    let ok = 0; for (let i = 100; i < 2100; i++) { const r = lasmFullRPC.call('request', i, 0, 0n, 0, 0); if (r.length === 1 && HEAPU8[r.pointer] === (i & 255)) ok++; }
    [ok, lasmFullRPC.slots.length]`);
  assert.deepEqual(results, [2000, 1]);
});
