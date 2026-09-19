import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';

for (const [family, address] of [[4, '127.0.0.1'], [6, '::1']]) {
  test(`UDP IPv${family} preserves datagram boundaries, peeking, truncation, and cancellation`, { timeout: 10_000 }, async t => {
    const host = createNodeRuntimeHost();
    t.after(() => host.close());
    const call = async (op, id = 0, arg = 0, bytes = Buffer.alloc(0)) => {
      const result = await host.request(op, id, BigInt(arg), bytes);
      assert.equal(result.error, false, result.bytes.subarray(16).toString());
      return result.bytes;
    };
    const receiver = Number((await call(100)).readBigUInt64LE());
    const sender = Number((await call(100)).readBigUInt64LE());
    await call(101, receiver, 0, Buffer.concat([numbers(family, 0), Buffer.from(address)]));
    const destination = await call(108, receiver);
    await call(102, sender, 0, destination);
    const senderAddress = await call(108, sender);
    assert.deepEqual(await call(107, sender), destination);
    const peek = call(105, receiver);
    await call(103, sender, 1, Buffer.concat([numbers(0), Buffer.from([0, 255, 128, 13, 10])]));
    await peek;
    const first = await call(104, receiver, 3);
    const addressLength = Number(first.readBigUInt64LE());
    assert.deepEqual(first.subarray(8, 8 + addressLength), senderAddress);
    assert.deepEqual(first.subarray(8 + addressLength), Buffer.from([0, 255, 128]));
    // The remainder belongs to the discarded datagram, not a subsequent read.
    const second = call(104, receiver, 100);
    await call(103, sender, 1, numbers(0)); // An empty datagram is still a datagram.
    const empty = await second;
    assert.equal(empty.length, 8 + Number(empty.readBigUInt64LE()));
    const waiting = host.start(104, receiver, 64n, Buffer.alloc(0));
    await call(106, receiver);
    const cancelled = await host.whenReady(waiting);
    assert.equal(cancelled.error, true);
    assert.equal(cancelled.bytes.readBigUInt64LE(), 10n);
    assert.deepEqual(await host.request(90, waiting), cancelled);
  });
}
