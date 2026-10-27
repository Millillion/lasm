import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';

// Op 94 starts an asynchronous host operation and registers its completion in
// one call (runtime/node-async.cpp begin_request). The completion long poll
// (op 92, or op 95 for every queued completion at once) then carries the
// result, so there is no separate finish call (op 90).
const prelude = readFileSync(new URL('../scripts/full-lean/host-pre.js', import.meta.url), 'utf8');

function mainThread(host) {
  const context = { ENVIRONMENT_IS_PTHREAD: false, Module: {}, wasmMemory: { buffer: new SharedArrayBuffer(64) },
    Atomics, Int32Array, Uint8Array, DataView, BigUint64Array, Buffer, setTimeout, lasmFullHost: Promise.resolve(host), process };
  runInNewContext(prelude, context);
  // The transport (test/full-host-rpc-channel.test.mjs) delivers exactly this result.
  const call = async (operation, handle, input) => {
    const result = await context.lasmFullDispatch(host, 0, operation, handle, 0n, new Uint8Array(input), { fiber: 1 });
    if (result.failure) throw new Error(result.failure);
    return { error: result.error, bytes: Buffer.from(result.bytes) };
  };
  return { call, close: () => {} };
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

test('the batched poll returns every queued completion in order, and a failure alone', async () => {
  const pending = [];
  const host = { request: () => new Promise(resolve => pending.push(resolve)) };
  const { call } = mainThread(host);
  for (const promise of [0xa, 0xb, 0xc]) await call(94, 1, begin(56, 0n, { check: true, promise }));
  const waiting = call(95, 0, []);
  pending[1]({ error: false, bytes: Buffer.from('b') });
  const records = bytes => { const out = []; for (let o = 0; o < bytes.length;) { const n = Number(bytes.readBigUInt64LE(o)); out.push(bytes.subarray(o + 8, o + 8 + n)); o += 8 + n; } return out; };
  const first = records((await waiting).bytes);
  assert.deepEqual(first.map(r => [r.readBigUInt64LE(0), r.subarray(32).toString()]), [[0xbn, 'b']]);
  pending[2]({ error: false, bytes: Buffer.from('c') });
  pending[0]({ error: true, bytes: Buffer.from('a') });
  await new Promise(resolve => setImmediate(resolve));
  const second = records((await call(95, 0, [])).bytes);
  assert.deepEqual(second.map(r => [r.readBigUInt64LE(0), r.readBigUInt64LE(24), r.subarray(32).toString()]), [[0xcn, 0n, 'c'], [0xan, 1n, 'a']]);
  host.request = () => Promise.reject(new Error('host defect'));
  await call(94, 1, begin(56, 0n, { check: true }));
  host.request = () => Promise.resolve({ error: false, bytes: Buffer.from('d') });
  await call(94, 1, begin(56, 0n, { check: true, promise: 0xd }));
  await new Promise(resolve => setImmediate(resolve));
  await assert.rejects(call(95, 0, []), /host defect/);
  assert.equal(records((await call(95, 0, [])).bytes)[0].readBigUInt64LE(0), 0xdn);
});

test('a cancel call diverts its handle\'s cancelled completions to the cancelling thread (op 96)', async () => {
  const cancelled = { error: true, bytes: Buffer.concat([u64(10, 0), Buffer.from('Operation cancelled')]) };
  const waits = new Map();
  const host = { request(op, id) {
    if (op === 53 || op === 56) return new Promise(resolve => waits.set(id, resolve));
    if (op === 55) { waits.get(id)(cancelled); return { error: false, bytes: Buffer.alloc(0) }; }
    return { error: false, bytes: Buffer.alloc(0) };
  } };
  const { call, close } = mainThread(host);
  await call(94, 7, begin(53, 0n, { check: true, kind: 1, promise: 0x10, resource: 0x20 }));
  await call(94, 8, begin(56, 64n, { check: true, kind: 2, promise: 0x30, resource: 0x40 }));
  await call(55, 7, []);
  // Released by the cancelling thread: promise, resource and kind; nothing else.
  assert.deepEqual((await call(96, 7, [])).bytes, u64(0x10, 0x20, 1));
  assert.deepEqual((await call(96, 7, [])).bytes, Buffer.alloc(0));
  // A cancellation without a cancel call on its handle stays a completion.
  waits.get(8)(cancelled);
  const packet = (await call(92, 0, [])).bytes;
  assert.equal(packet.readBigUInt64LE(0), 0x30n);
  assert.equal(packet.readBigUInt64LE(32), 10n);
  close();
});
