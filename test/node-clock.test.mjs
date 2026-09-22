import test from 'node:test';
import assert from 'node:assert/strict';
import { nativeClock, posixWallTime, windowsWallTime } from '../src/native-clock.mjs';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

test('POSIX wall time preserves libc++ microseconds on both sides of the epoch', () => {
  for (const [seconds, nanos, expected] of [
    [0, 999, 0n], [0, 1000, 1000n], [1, 123456789, 1123456000n],
    [-1, 999999999, -1000n], [-1, 1, -1000000000n], [-2, 500000000, -1500000000n],
  ]) assert.equal(posixWallTime(seconds, nanos), expected);
});

test('Windows FILETIME conversion retains integer precision and native rounding', () => {
  const epoch = 116444736000000000n;
  for (const [offset, expected] of [
    [0n, 0n], [1n, 0n], [9n, 0n], [10n, 1000n], [-1n, 0n], [-10n, -1000n],
    [17900660919396150n, 1790066091939615000n],
  ]) assert.equal(windowsWallTime(epoch + offset), expected);
});

test('wall-clock requests use the system clock independently of JavaScript Date', async t => {
  const before = BigInt(Date.now()) * 1_000_000n;
  t.mock.method(Date, 'now', () => 0);
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  const result = await host.request(27, 0, 0n, Buffer.alloc(0));
  assert.equal(result.error, false);
  const value = result.bytes.readBigInt64LE() * 1_000_000_000n + result.bytes.readBigInt64LE(8);
  assert.ok(value >= before - 1_000_000n);
  assert.equal(value % 1000n, 0n);
  assert.ok(value < before + 10_000_000_000n);
});

test('wall-clock transport preserves negative values and backward adjustments', async t => {
  const values = [1000001000n, -1000n, -1500000000n, 999000n];
  t.mock.method(nativeClock(), 'now', () => values.shift());
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  for (const [seconds, nanos] of [[1n, 1000n], [0n, -1000n], [-1n, -500000000n], [0n, 999000n]]) {
    const result = await host.request(27, 0, 0n, Buffer.alloc(0));
    assert.equal(result.error, false);
    assert.deepEqual([result.bytes.readBigInt64LE(), result.bytes.readBigInt64LE(8)], [seconds, nanos]);
  }
});

test('clock errors retain the IO error envelope instead of manufacturing a timestamp', async t => {
  t.mock.method(nativeClock(), 'now', () => { throw Object.assign(new Error('clock unavailable'), { code: 'EIO', errno: 5, nativeMessage: true }); });
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  const result = await host.request(27, 0, 0n, Buffer.alloc(0));
  assert.equal(result.error, true);
  assert.equal(result.bytes.readBigUInt64LE(), 13n);
  assert.equal(result.bytes.readBigInt64LE(8), 5n);
  assert.equal(result.bytes.subarray(16).toString(), 'clock unavailable');
});
