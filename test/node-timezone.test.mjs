import test from 'node:test';
import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { createNodeRuntimeHost } from '../src/node-host.mjs';
import { nativeWindowsTimeZone } from '../src/native-windows-timezone.mjs';

test('Windows-only timezone calls preserve native POSIX errors, including UTC',
  { skip: process.platform === 'win32' }, async t => {
    const host = createNodeRuntimeHost({ leanVersion: '4.34.0' }); t.after(() => host.close());
    for (const name of ['UTC', 'America/New_York', 'UTC\0ignored', 'a'.repeat(300)])
      for (const initial of [0, 1]) {
        const result = await host.request(180, initial, BigInt.asUintN(64, -2147483648n), Buffer.from(name));
        assert.equal(result.error, true);
        assert.equal(result.bytes.readBigUInt64LE(), 4n);
        assert.equal(result.bytes.readBigUInt64LE(8), BigInt(constants.errno.EINVAL));
        assert.equal(result.bytes.subarray(16).toString(), 'failed to get timezone, its windows only.');
      }
    const local = await host.request(181, 0, 0n, Buffer.alloc(0));
    assert.equal(local.error, true);
    assert.equal(local.bytes.readBigUInt64LE(), 4n);
    assert.equal(local.bytes.readBigUInt64LE(8), BigInt(constants.errno.EINVAL));
    assert.equal(local.bytes.subarray(16).toString(), 'timezone retrieval is Windows-only');
  });

test('timezone transport preserves negative seconds, UTF-8 names, absent transitions and errors', async t => {
  const database = nativeWindowsTimeZone();
  t.mock.method(database, 'nextTransition', (name, timestamp, initial) => {
    assert.deepEqual(name, Buffer.from('named\0zone'));
    assert.equal(timestamp, BigInt.asUintN(64, -123n));
    if (!initial) return null;
    return { timestamp: -1n, offset: -18000, isDST: false, name: Buffer.from('été'), abbreviation: Buffer.from('EST') };
  });
  t.mock.method(database, 'localIdentifier', timestamp => {
    assert.equal(timestamp, 42n);
    return Buffer.from('America/New_York');
  });
  const host = createNodeRuntimeHost({ leanVersion: '4.34.0' }); t.after(() => host.close());
  const result = await host.request(180, 1, BigInt.asUintN(64, -123n), Buffer.from('named\0zone'));
  assert.equal(result.error, false);
  assert.deepEqual(Array.from({ length: 5 }, (_, i) => result.bytes.readBigInt64LE(i * 8)), [1n, -1n, -18000n, 0n, 5n]);
  assert.equal(result.bytes.subarray(40, 45).toString(), 'été');
  assert.equal(result.bytes.subarray(45).toString(), 'EST');
  assert.deepEqual((await host.request(180, 0, BigInt.asUintN(64, -123n), Buffer.from('named\0zone'))).bytes,
    Buffer.alloc(8));
  assert.equal((await host.request(181, 0, 42n, Buffer.alloc(0))).bytes.toString(), 'America/New_York');
});
