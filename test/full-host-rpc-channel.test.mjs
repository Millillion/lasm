import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createContext, runInContext, runInNewContext } from 'node:vm';
import { MessageChannel, receiveMessageOnPort } from 'node:worker_threads';

// Lean pthreads never return to their worker event loop, so a MessagePort they
// close never finishes closing. Host calls must reuse one reply channel per
// worker isolate and route replies by sequence number.
const prelude = readFileSync(new URL('../scripts/full-lean/host-pre.js', import.meta.url), 'utf8');
const library = readFileSync(new URL('../scripts/full-lean/host-library.js', import.meta.url), 'utf8');

function mainThread(host) {
  const memory = new SharedArrayBuffer(64);
  const Module = {};
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module, wasmMemory: { buffer: memory },
    Atomics, Int32Array, Uint8Array, lasmFullHost: Promise.resolve(host), process });
  return { Module, signal: new Int32Array(memory) };
}
const request = (fields, sequence, signalPointer = 0) => ({ kind: 'request', operation: 1, handle: 0, argument: 0n,
  byteBuffer: new ArrayBuffer(0), byteOffset: 0, byteLength: 0, signalPointer, thread: 1, sequence, ...fields });

test('the main thread keeps one unreferenced reply port per worker and tags replies', async () => {
  const pending = [];
  const { Module, signal } = mainThread({
    request: operation => new Promise(resolve => pending.push(() => resolve({ error: false, bytes: Buffer.from([operation]) }))),
  });
  const first = new MessageChannel(), second = new MessageChannel();
  let unrefs = 0;
  const unref = first.port2.unref.bind(first.port2);
  first.port2.unref = () => { unrefs++; unref(); };
  // Two workers, interleaved, answered out of order.
  const calls = [
    Module.lasmFullHostRequest(request({ port: first.port2, channelId: 7, operation: 11 }, 1, 0)),
    Module.lasmFullHostRequest(request({ port: second.port2, channelId: 8, operation: 21 }, 1, 4)),
    Module.lasmFullHostRequest(request({ channelId: 7, operation: 12 }, 2, 8)),
  ];
  await new Promise(resolve => setImmediate(resolve));
  assert.equal(pending.length, 3);
  for (const index of [2, 1, 0]) pending[index]();
  await Promise.all(calls);
  assert.equal(unrefs, 1);
  const replies = port => { const out = []; let packet; while ((packet = receiveMessageOnPort(port))) out.push(packet.message); return out; };
  const firstReplies = replies(first.port1), secondReplies = replies(second.port1);
  assert.deepEqual(firstReplies.map(r => [r.sequence, new Uint8Array(r.byteBuffer, r.byteOffset, r.byteLength)[0]]).sort(), [[1, 11], [2, 12]]);
  assert.deepEqual(secondReplies.map(r => [r.sequence, new Uint8Array(r.byteBuffer, r.byteOffset, r.byteLength)[0]]), [[1, 21]]);
  assert.deepEqual([...signal.subarray(0, 3)], [1, 1, 1]);
  first.port1.close(); second.port1.close();
});

test('a host failure is still delivered on the reused port with its sequence', async () => {
  const { Module } = mainThread({ request: async () => { throw new Error('host operation failed'); } });
  const channel = new MessageChannel();
  await Module.lasmFullHostRequest(request({ port: channel.port2, channelId: 3 }, 9));
  const reply = receiveMessageOnPort(channel.port1).message;
  assert.equal(reply.sequence, 9);
  assert.match(reply.failure, /host operation failed/);
  channel.port1.close();
});

// Worker side: evaluate the actual $lasmFullRPC object with a simulated main
// thread that answers inside the futex wait, as the real one does.
function workerThread({ onRequest }) {
  const memory = new SharedArrayBuffer(4096), heap = new Uint8Array(memory);
  let next = 64, channels = 0;
  const posted = [];
  class CountingChannel extends MessageChannel { constructor() { super(); channels++; } }
  const threads = { MessageChannel: CountingChannel, receiveMessageOnPort, threadId: 42,
    parentPort: { postMessage(message, transfer) { posted.push({ message: message.args[0], transfer }); } } };
  const body = library.slice(library.indexOf('  $lasmFullRPC: {') + '  $lasmFullRPC: '.length, library.indexOf('  lasm_node_call__deps'))
    .replace("{{{ to64('4') }}}", '4').trimEnd().replace(/,$/, '');
  const context = createContext({ ENVIRONMENT_IS_PTHREAD: true, require: name => { assert.equal(name, 'node:worker_threads'); return threads; },
    process: { env: {} }, wasmMemory: { buffer: memory }, HEAPU8: heap, Atomics, Int32Array, Uint8Array, Map, Number,
    _malloc: () => { next += 8; return next; }, _free: () => {}, _pthread_self: () => 1n,
    _emscripten_futex_wait: pointer => onRequest(posted, pointer, memory) });
  runInContext(`var lasmFullRPC = ${body};`, context);
  return { rpc: runInContext('lasmFullRPC', context), posted, channels: () => channels };
}
function answer(entry, memory, value) {
  const port = entry.port;
  port.postMessage({ sequence: entry.message.sequence, error: false, byteBuffer: new Uint8Array([value]).buffer, byteOffset: 0, byteLength: 1 });
  const signal = new Int32Array(memory, entry.message.signalPointer, 1);
  Atomics.store(signal, 0, 1);
}

test('worker calls create one channel, transfer it once and route nested replies by sequence', () => {
  let port, nested = false, worker;
  worker = workerThread({ onRequest(posted, pointer, memory) {
    for (const entry of posted) if (entry.message.port) port = entry.message.port;
    const open = posted.filter(entry => !entry.answered);
    if (!open.length) return;
    // While the first call waits, a serviced mailbox task makes a nested call.
    if (open.length === 1 && open[0].message.operation === 1 && !nested) {
      nested = true;
      const inner = worker.rpc.call('request', 2, 0, 0n, 0, 0);
      assert.equal(inner.bytes[0], 2);
      return;
    }
    // Answer the outer call first: the nested call must still get its own reply.
    for (const entry of [...open].sort((a, b) => a.message.sequence - b.message.sequence)) {
      entry.port = port; entry.answered = true; answer(entry, memory, entry.message.operation);
    }
  } });
  const outer = worker.rpc.call('request', 1, 0, 0n, 0, 0);
  assert.equal(outer.bytes[0], 1);
  // Operation 37 also loads the native thread-id helper; it is not needed here.
  for (let operation = 3; operation < 50; operation++) if (operation !== 37)
    assert.equal(worker.rpc.call('request', operation, 0, 0n, 0, 0).bytes[0], operation);
  assert.equal(worker.channels(), 1);
  assert.equal(worker.posted.filter(entry => entry.message.port).length, 1);
  assert.equal(worker.posted[0].transfer.length, 2);
  assert.ok(worker.posted.slice(1).every(entry => entry.transfer.length === 1 && entry.message.channelId === 42));
  assert.equal(worker.rpc.replies.size, 0);
  port.close();
});
