import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';
import { MessageChannel, receiveMessageOnPort } from 'node:worker_threads';

// Op 94 starts an asynchronous host operation and registers its completion in
// one call (runtime/node-async.cpp begin_request). The completion long poll
// (op 92) then carries the result, so there is no separate finish call (op 90).
const prelude = readFileSync(new URL('../scripts/full-lean/host-pre.js', import.meta.url), 'utf8');

function mainThread(host) {
  const memory = new SharedArrayBuffer(64);
  const Module = {};
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module, wasmMemory: { buffer: memory },
    Atomics, Int32Array, Uint8Array, Buffer, lasmFullHost: Promise.resolve(host), process });
  const channel = new MessageChannel();
  let sequence = 0, first = true;
  const call = async (operation, handle, input) => {
    const bytes = new Uint8Array(input);
    const id = ++sequence;
    await Module.lasmFullHostRequest({ kind: 'request', operation, handle, argument: 0n, byteBuffer: bytes.buffer,
      byteOffset: 0, byteLength: bytes.length, signalPointer: 0, thread: 1, sequence: id, channelId: 1,
      ...(first ? { port: channel.port2 } : {}) });
    first = false;
    const reply = receiveMessageOnPort(channel.port1).message;
    assert.equal(reply.sequence, id);
    if (reply.failure) throw new Error(reply.failure);
    return { error: reply.error, bytes: Buffer.from(reply.byteBuffer, reply.byteOffset, reply.byteLength) };
  };
  return { call, close: () => channel.port1.close() };
}
const u64 = (...values) => Buffer.concat(values.map(v => { const b = Buffer.alloc(8); b.writeBigUInt64LE(BigInt(v)); return b; }));
const begin = (op, arg, { check, kind = 3, promise = 0x1000, resource = 0x2000, data = Buffer.alloc(0) }) =>
  Buffer.concat([u64(promise, resource, kind, check ? 1 : 0, op, arg), data]);
const failure = (code, message) => ({ error: true, bytes: Buffer.concat([u64(9, code), Buffer.from(message)]) });

test('one call starts the operation; the completion carries the echoed header and the result', async () => {
  const seen = [];
  let finish;
  const host = { request(op, id, arg, bytes, context) {
    seen.push({ op, id, arg, bytes: Buffer.from(bytes), fiber: context.fiber });
    return new Promise(resolve => { finish = resolve; });
  } };
  const { call, close } = mainThread(host);
  const started = await call(94, 7, begin(56, 65536n, { check: true, kind: 2, data: Buffer.from('in') }));
  assert.deepEqual(started, { error: false, bytes: Buffer.alloc(0) });
  assert.deepEqual(seen, [{ op: 56, id: 7, arg: 65536n, bytes: Buffer.from('in'), fiber: 1 }]);
  const completion = call(92, 0, []);
  finish({ error: false, bytes: Buffer.from('payload') });
  const packet = (await completion).bytes;
  assert.deepEqual(packet, Buffer.concat([u64(0x1000, 0x2000, 2, 0), Buffer.from('payload')]));
  close();
});

test('with check, a synchronous startup failure is returned and nothing is registered', async () => {
  const host = { request: () => failure(32, 'broken pipe') };
  const { call, close } = mainThread(host);
  const started = await call(94, 3, begin(59, 1n, { check: true }));
  assert.equal(started.error, true);
  assert.deepEqual(started.bytes, failure(32, 'broken pipe').bytes);
  // The next completion belongs to a later request, not the failed start.
  host.request = () => Promise.resolve({ error: false, bytes: Buffer.from([1]) });
  await call(94, 3, begin(57, 0n, { check: true, promise: 0x3000 }));
  const packet = (await call(92, 0, [])).bytes;
  assert.equal(packet.readBigUInt64LE(0), 0x3000n);
  close();
});

test('without check, synchronous and cancellation failures resolve through the completion in order', async () => {
  const pending = [];
  const host = { request(op) {
    if (op === 72) return failure(10, 'operation canceled');
    return new Promise(resolve => pending.push(resolve));
  } };
  const { call, close } = mainThread(host);
  assert.equal((await call(94, 4, begin(115, 0n, { check: false, promise: 0xa }))).error, false);
  assert.equal((await call(94, 5, begin(72, 1n, { check: false, promise: 0xb, kind: 4 }))).error, false);
  // Synchronous results complete first; asynchronous ones as they settle.
  const second = (await call(92, 0, [])).bytes;
  assert.equal(second.readBigUInt64LE(0), 0xbn);
  assert.equal(second.readBigUInt64LE(16), 4n);
  assert.equal(second.readBigUInt64LE(24), 1n);
  assert.equal(second.readBigUInt64LE(32 + 8), 10n); // ECANCELED: the runtime drops the promise
  pending[0](failure(11, 'resource busy'));
  const first = (await call(92, 0, [])).bytes;
  assert.equal(first.readBigUInt64LE(0), 0xan);
  assert.equal(first.readBigUInt64LE(24), 1n);
  assert.deepEqual(first.subarray(32), failure(11, 'resource busy').bytes);
  close();
});

test('an unexpected host rejection reaches the completion thread as a failure', async () => {
  const host = { request: () => Promise.reject(new Error('host defect')) };
  const { call, close } = mainThread(host);
  await call(94, 1, begin(56, 0n, { check: true }));
  await assert.rejects(call(92, 0, []), /host defect/);
  close();
});
