import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

function fixture(t) {
  const host = createNodeRuntimeHost({ leanVersion: '4.34.1' });
  t.after(() => host.close());
  const request = (op, id = 0, arg = 0, bytes = Buffer.alloc(0)) => host.request(op, id, BigInt(arg), bytes);
  const start = (op, id, arg = 0, bytes = Buffer.alloc(0)) => {
    const token = host.start(op, id, BigInt(arg), bytes);
    return { token, result: host.request(93, token) };
  };
  const finish = async operation => {
    assert.equal(operation.result.error, false);
    await host.whenReady(operation.token);
    return host.request(90, operation.token);
  };
  const success = async (op, id, arg, bytes) => {
    const result = await request(op, id, arg, bytes);
    assert.equal(result.error, false, result.bytes.subarray(16).toString());
    return result.bytes;
  };
  const allocate = async () => Number((await success(50)).readBigUInt64LE());
  const pair = async () => {
    const server = await allocate(), client = await allocate();
    await success(51, server, 0, Buffer.concat([numbers(4, 0), Buffer.from('127.0.0.1')]));
    await success(52, server, 8);
    const accepting = start(53, server);
    await success(65, client, 0, await success(62, server));
    const accepted = await finish(accepting);
    assert.equal(accepted.error, false);
    return { client, peer: Number(accepted.bytes.readBigUInt64LE()) };
  };
  return { host, request, start, finish, success, allocate, pair };
}

function error(result, message) {
  assert.equal(result?.then, undefined, 'Startup inspection must remain synchronous');
  assert.equal(result.error, true);
  assert.equal(result.bytes.subarray(16).toString(), message);
  assert.ok(result.bytes.readBigInt64LE(8) > 0n, 'Lean stores the corresponding positive error number');
}

test('empty TCP vectors succeed while disconnected reads, writes and shutdown fail at startup', async t => {
  const f = fixture(t), socket = await f.allocate();
  assert.equal((await f.finish(f.start(59, socket, 0))).error, false);
  for (const bytes of [Buffer.alloc(0), Buffer.from('x')])
    error(f.start(59, socket, 1, bytes).result, process.platform === 'win32' ? 'broken pipe' : 'bad file descriptor');
  for (const [op, size] of [[56, 0], [56, 1], [57, 0], [60, 0]])
    error(f.start(op, socket, size).result, 'socket is not connected');
});

test('competing TCP reads fail at startup without replacing the cancellable first read', { timeout: 10_000 }, async t => {
  const f = fixture(t), { client } = await f.pair();
  for (const first of [56, 57]) {
    const pending = f.start(first, client, 1);
    assert.equal(pending.result.error, false);
    error(f.start(56, client, 1).result, 'connection already in progress');
    error(f.start(57, client).result, 'connection already in progress');
    await f.success(58, client);
    const cancelled = await f.finish(pending);
    assert.equal(cancelled.error, true);
    assert.equal(cancelled.bytes.readBigUInt64LE(), 10n);
  }
});

test('a zero-capacity TCP read waits for readiness, fails asynchronously and preserves the payload', { timeout: 10_000 }, async t => {
  const f = fixture(t), { client, peer } = await f.pair();
  const operation = f.start(56, client, 0);
  assert.equal(operation.result.error, false);
  let settled = false;
  const ready = f.host.whenReady(operation.token).then(result => { settled = true; return result; });
  await Promise.resolve();
  assert.equal(settled, false);
  await f.success(59, peer, 1, Buffer.from('payload'));
  error(await ready, 'no buffer space available');
  assert.deepEqual(f.host.request(93, operation.token), { error: false, bytes: Buffer.alloc(0) });
  error(await f.finish(operation), 'no buffer space available');
  assert.equal((await f.success(56, client, 7)).toString(), 'payload');
});

test('completed TCP shutdown rejects further writes but preserves reverse traffic and empty vectors', { timeout: 10_000 }, async t => {
  const f = fixture(t), { client, peer } = await f.pair();
  assert.equal((await f.finish(f.start(59, client, 1))).error, false);
  await f.success(59, client, 1, Buffer.from('request'));
  assert.equal((await f.finish(f.start(60, client))).error, false);
  assert.equal((await f.success(56, peer, 7)).toString(), 'request');
  assert.equal((await f.success(56, peer, 1)).length, 0);
  await f.success(59, peer, 1, Buffer.from('reply'));
  await f.success(60, peer);
  assert.equal((await f.success(56, client, 5)).toString(), 'reply');
  assert.equal((await f.success(56, client, 1)).length, 0);
  if (process.platform !== 'win32') {
    error(await f.finish(f.start(56, client, 0)), 'no buffer space available');
    assert.equal((await f.success(57, client)).readBigUInt64LE(), 1n);
    assert.equal((await f.success(56, client, 1)).length, 0);
  }
  error(f.start(60, client).result, 'socket is not connected');
  assert.equal((await f.finish(f.start(59, client, 0))).error, false);
  error(f.start(59, client, 1).result, 'broken pipe');
  error(f.start(59, client, 1, Buffer.from('x')).result, 'broken pipe');
});
