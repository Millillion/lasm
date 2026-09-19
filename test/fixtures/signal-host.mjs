import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';
const host = createNodeRuntimeHost();
try {
  async function call(op, id = 0, argument = 0n) {
    const r = await host.request(op, id, argument, Buffer.alloc(0));
    assert.equal(r.error, false, r.bytes.subarray(16).toString()); return r.bytes;
  }
  const handle = Number((await call(160, 10, 1n)).readBigUInt64LE());
  const first = await call(161, handle);
  assert.deepEqual(await call(161, handle), first);
  let id = host.start(162, handle, 0n, Buffer.alloc(0));
  process.kill(process.pid, 'SIGUSR1');
  await host.whenReady(id);
  assert.equal((await host.request(90, id)).bytes.readBigUInt64LE(), BigInt(constants.signals.SIGUSR1));
  assert.notDeepEqual(await call(161, handle), first);
  id = host.start(162, handle, 0n, Buffer.alloc(0));
  await call(164, handle);
  await host.whenReady(id);
  const cancelled = await host.request(90, id);
  assert.equal(cancelled.error, true); assert.equal(cancelled.bytes.readBigUInt64LE(), 10n);
  await call(161, handle);
  id = host.start(162, handle, 0n, Buffer.alloc(0));
  process.kill(process.pid, 'SIGUSR1');
  await host.whenReady(id);
  assert.equal((await host.request(90, id)).error, false);
  await call(163, handle);
  assert.equal(process.listenerCount('SIGUSR1'), 0);
  const once = Number((await call(160, 12)).readBigUInt64LE());
  const generation = await call(161, once);
  id = host.start(162, once, 0n, Buffer.alloc(0));
  process.kill(process.pid, 'SIGUSR2');
  await host.whenReady(id);
  assert.equal((await host.request(90, id)).bytes.readBigUInt64LE(), BigInt(constants.signals.SIGUSR2));
  assert.deepEqual(await call(161, once), generation);
  assert.equal(process.listenerCount('SIGUSR2'), 0);
  const invalid = Number((await call(160, 999)).readBigUInt64LE());
  const result = await host.request(161, invalid, 0n, Buffer.alloc(0));
  assert.equal(result.error, true); assert.equal(result.bytes.readBigUInt64LE(), 4n);
  console.log('signal delivery, cancellation, and listener cleanup passed');
} finally { host.close(); }
