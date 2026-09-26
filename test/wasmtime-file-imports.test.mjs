import assert from 'node:assert/strict';
import { test } from 'node:test';
import { invokeFileImport } from '../src/wasmtime-file-imports.mjs';

// Use a sparse high-address window, not a multi-GiB allocation, to exercise the
// memory64 ABI independently of the native implementation.
function guest(base = 0n, capacity = 8192) {
  const bytes = Buffer.alloc(capacity, 0xaa), calls = [];
  const read = (address, length) => bytes.subarray(Number(address - base), Number(address - base) + length);
  const write = (address, source) => Buffer.from(source).copy(bytes, Number(address - base));
  return { bytes, calls, invoke(kind, args, response) {
    return invokeFileImport({ kind, args: args.map(BigInt), memoryBytes: base + BigInt(capacity), read, write,
      request: value => { calls.push(value); return typeof response === 'function' ? response(value) : response; } });
  } };
}

test('openat preserves raw filename bytes, signed directory and varargs mode above 4 GiB', () => {
  const base = 2n ** 32n, g = guest(base);
  Buffer.from([47, 255, 128, 0]).copy(g.bytes, 20); g.bytes.writeUInt32LE(0o640, 400);
  assert.equal(g.invoke(17, [-100, base + 20n, 64, base + 400n], { errno: 0, fd: 8 }), 8);
  assert.deepEqual(g.calls, [{ operation: 'openat', directory: -100, path: Buffer.from([47, 255, 128]), flags: 64, mode: 0o640 }]);
});

test('openat checks all memory spans and path termination before host effects', () => {
  const g = guest(); g.bytes.fill(65);
  assert.equal(g.invoke(17, [-100, 8192, 0, 0]), -21);
  assert.equal(g.invoke(17, [-100, 8000, 0, 0]), -21);
  assert.equal(g.invoke(17, [-100, 0, 0, 0]), -37);
  g.bytes[0] = 0;
  assert.equal(g.invoke(17, [-100, 0, 64, 8190]), -21);
  assert.deepEqual(g.calls, []);
});

test('openat finds a terminator across scanner chunks and returns syscall errno polarity', () => {
  const g = guest(); g.bytes.fill(65, 0, 257); g.bytes[257] = 0;
  assert.equal(g.invoke(17, [-100, 0, 0, 0], { errno: 44 }), -44);
  assert.equal(g.calls[0].path.length, 257);
});

test('stat copies exactly the pinned 104-byte layout at a high guest address', () => {
  const base = 2n ** 32n, g = guest(base), result = Buffer.from(Array.from({ length: 104 }, (_, index) => index));
  assert.equal(g.invoke(18, [9, base + 100n], { errno: 0, bytes: result }), 0);
  assert.deepEqual(g.bytes.subarray(100, 204), result);
  assert.equal(g.bytes[99], 0xaa); assert.equal(g.bytes[204], 0xaa);
  assert.deepEqual(g.calls, [{ operation: 'stat', fd: 9 }]);
});

test('stat does not call host or mutate guest output on invalid memory or native failure', () => {
  const g = guest();
  assert.equal(g.invoke(18, [9, 8180]), -21); assert.equal(g.calls.length, 0);
  assert.equal(g.invoke(18, [9, 0], { errno: 8 }), -8);
  assert.ok(g.bytes.every(byte => byte === 0xaa));
});

test('read scatters a short native read and reports a 64-bit byte count', () => {
  const base = 2n ** 32n, g = guest(base);
  for (const [index, address, length] of [[0, 100, 3], [1, 200, 4], [2, 300, 2]]) {
    g.bytes.writeBigUInt64LE(base + BigInt(address), index * 16);
    g.bytes.writeBigUInt64LE(BigInt(length), index * 16 + 8);
  }
  assert.equal(g.invoke(19, [7, base, 3, base + 400n], { errno: 0, bytes: Buffer.from('hello') }), 0);
  assert.deepEqual(g.calls, [{ operation: 'read', fd: 7, length: 9 }]);
  assert.equal(g.bytes.subarray(100, 103).toString(), 'hel');
  assert.equal(g.bytes.subarray(200, 202).toString(), 'lo');
  assert.equal(g.bytes[202], 0xaa); assert.equal(g.bytes[300], 0xaa);
  assert.equal(g.bytes.readBigUInt64LE(400), 5n);
});

test('read validates every vector and output count before moving the host file cursor', () => {
  const g = guest(); g.bytes.writeBigUInt64LE(200n); g.bytes.writeBigUInt64LE(2n, 8);
  g.bytes.writeBigUInt64LE(8191n, 16); g.bytes.writeBigUInt64LE(2n, 24);
  assert.equal(g.invoke(19, [7, 0, 2, 400]), 21);
  assert.equal(g.invoke(19, [7, 0, 1, 8188]), 21);
  assert.equal(g.invoke(19, [7, 8190, 1, 400]), 21);
  assert.deepEqual(g.calls, []);
});

test('read rejects excessive vector counts before decoding guest memory', () => {
  const g = guest();
  assert.equal(g.invoke(19, [7, 0, 1025, 400]), 28);
  assert.deepEqual(g.calls, []);
});

test('read preserves buffers on EOF or error, with positive WASI errno', () => {
  const g = guest(); g.bytes.writeBigUInt64LE(200n); g.bytes.writeBigUInt64LE(2n, 8);
  assert.equal(g.invoke(19, [7, 0, 1, 400], { errno: 8 }), 8);
  assert.equal(g.bytes[400], 0xaa);
  assert.equal(g.invoke(19, [7, 0, 1, 400], { errno: 0, bytes: Buffer.alloc(0) }), 0);
  assert.equal(g.bytes[200], 0xaa); assert.equal(g.bytes.readBigUInt64LE(400), 0n);
});

test('seek preserves signed 64-bit offsets and returned positions', () => {
  const g = guest();
  assert.equal(g.invoke(20, [8, 2n ** 64n - 3n, 2, 100], { errno: 0, offset: 2n ** 54n + 1n }), 0);
  assert.deepEqual(g.calls, [{ operation: 'seek', fd: 8, offset: -3n, whence: 2 }]);
  assert.equal(g.bytes.readBigInt64LE(100), 2n ** 54n + 1n);
});

test('seek validates output and preserves guest bytes on native failure', () => {
  const g = guest();
  assert.equal(g.invoke(20, [8, 0, 0, 8190]), 21); assert.equal(g.calls.length, 0);
  assert.equal(g.invoke(20, [8, 0, 0, 100], { errno: 70 }), 70); assert.equal(g.bytes[100], 0xaa);
});

test('close uses signed descriptor and positive WASI errno; unknown imports remain errors', () => {
  const g = guest(); assert.equal(g.invoke(21, [0xffffffff], { errno: 8 }), 8);
  assert.deepEqual(g.calls, [{ operation: 'close', fd: -1 }]);
  assert.throws(() => g.invoke(22, []), /Unimplemented file import/);
});
