import assert from 'node:assert/strict';
import test from 'node:test';
import { writeWasiStdio } from '../scripts/full-lean/probes/wasmtime-wasi-stdio.mjs';

function fixture(base = 0n) {
  const memory = Buffer.alloc(256, 0), seen = [];
  const offset = value => Number(BigInt(value) - base);
  const input = { fd: 2, iovs: base + 16n, count: 2n, nwritten: base + 64n, memoryBytes: base + 256n,
    read: (address, length) => memory.subarray(offset(address), offset(address) + Number(length)),
    write: (address, bytes) => memory.set(bytes, offset(address)),
    sink: (fd, bytes) => { seen.push({ fd, bytes }); return { errno: 0, written: bytes.length }; } };
  memory.writeBigUInt64LE(base + 128n, 16); memory.writeBigUInt64LE(3n, 24);
  memory.writeBigUInt64LE(base + 144n, 32); memory.writeBigUInt64LE(2n, 40);
  memory.set([0, 0xce, 0xbb], 128); memory.set([0xff, 10], 144);
  return { input, memory, seen };
}
test('scatter/gather preserves raw bytes across pointers above 4 GiB', () => {
  const { input, memory, seen } = fixture(4n * 1024n ** 3n);
  assert.equal(writeWasiStdio(input), 0);
  assert.deepEqual(seen, [{ fd: 2, bytes: Buffer.from([0, 0xce, 0xbb, 0xff, 10]) }]);
  assert.equal(memory.readBigUInt64LE(64), 5n);
});
test('invalid iovec, table and result ranges have no output side effects', () => {
  for (const corrupt of [f => { f.input.iovs = 250n; }, f => { f.input.nwritten = 250n; },
    f => { f.input.count = 1n << 63n; }, f => { f.memory.writeBigUInt64LE(257n, 32); }]) {
    const f = fixture(); corrupt(f); const before = Buffer.from(f.memory);
    assert.equal(writeWasiStdio(f.input), 21);
    assert.deepEqual(f.seen, []); assert.deepEqual(f.memory, before);
  }
});
test('partial writes retain the actual count; errors do not claim bytes written', () => {
  const { input, memory } = fixture(); input.sink = () => ({ errno: 0, written: 2 });
  assert.equal(writeWasiStdio(input), 0); assert.equal(memory.readBigUInt64LE(64), 2n);
  input.sink = () => ({ errno: 64 }); // WASI EPIPE
  assert.equal(writeWasiStdio(input), 64); assert.equal(memory.readBigUInt64LE(64), 2n);
});
test('empty writes stay empty and unsupported descriptors fail explicitly', () => {
  const { input, memory, seen } = fixture(); input.count = 0n;
  assert.equal(writeWasiStdio(input), 0); assert.equal(memory.readBigUInt64LE(64), 0n);
  assert.equal(seen[0].bytes.length, 0);
  assert.throws(() => writeWasiStdio({ ...input, fd: 10 }), /Unimplemented private WASI output descriptor/);
});
