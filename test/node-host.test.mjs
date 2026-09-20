import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

// Direct adapter checks for durations that cannot be exercised in real time.
test('IO.sleep preserves durations beyond one Node timeout instead of clamping to 1ms', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  let done = false;
  const pending = host.request(35, 0, 2_147_483_652n, new Uint8Array()).then(result => { done = true; return result; });
  t.mock.timers.tick(2_147_483_647);
  await Promise.resolve();
  assert.equal(done, false);
  assert.equal(host.stats().resources, 1);
  t.mock.timers.tick(5);
  assert.equal((await pending).error, false);
  assert.equal(host.stats().resources, 0);
});

test('runtime teardown cancels sleeps and releases their Node timers', async () => {
  const host = createNodeRuntimeHost();
  const pending = host.request(35, 0, 60_000n, new Uint8Array());
  assert.equal(host.stats().resources, 1);
  host.close();
  const result = await pending;
  assert.equal(result.error, true);
  assert.equal(result.bytes.readBigUInt64LE(0), 10n); // cancellation
  assert.equal(host.stats().resources, 0);
  host.close();
});

test('completion readiness preserves the result for its consuming Lean thread', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  const id = host.start(35, 0, 20n, new Uint8Array());
  let completed = false;
  const ready = host.whenReady(id).then(value => { completed = true; return value; });
  await Promise.resolve();
  assert.equal(completed, false);
  t.mock.timers.tick(20);
  const result = await ready;
  assert.equal(result.error, false);
  assert.deepEqual(await host.request(90, id), result);
  assert.throws(() => host.whenReady(id), /Unknown asynchronous host request/);
});

test('Std.Async timers preserve UInt64 delays and reset without overflowing Node timeouts', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  const call = (op, id = 0, arg = 0n) => host.request(op, id, arg, new Uint8Array());
  const id = Number(call(70, 0, 2_147_483_652n).bytes.readBigUInt64LE());
  call(71, id);
  let done = false;
  const pending = call(72, id).then(r => { done = true; return r; });
  t.mock.timers.tick(2_147_483_647); await Promise.resolve();
  assert.equal(done, false);
  t.mock.timers.tick(5);
  assert.equal((await pending).error, false);
  host.release(id);
  const huge = Number(call(70, 0, 0xffffffffffffffffn).bytes.readBigUInt64LE());
  call(71, huge);
  const waiting = call(72, huge);
  t.mock.timers.tick(2_147_483_647);
  call(73, huge);
  host.release(huge);
  assert.equal((await waiting).error, true);
  assert.equal(host.stats().resources, 0);
});

test('a synchronous exit during request startup leaves no pending result', () => {
  const host = createNodeRuntimeHost();
  try {
    assert.throws(() => host.start(30, 0, 7n, new Uint8Array()), { name: 'LeanExit', code: 7 });
    assert.throws(() => host.whenReady(1), /Unknown asynchronous host request/);
    const next = host.start(23, 0, 0n, new Uint8Array());
    assert.equal(host.request(90, next).error, false);
  } finally { host.close(); }
});
