import assert from 'node:assert/strict';
import test from 'node:test';
import { createHash } from 'node:crypto';
import { readGuestBytes, writeGuestBytes } from '../scripts/full-lean/probes/wasmtime-guest-memory.mjs';

function memory(length) {
  const base = 2n ** 32n + 11n;
  const storage = Buffer.alloc(length + 6, 0xa5), calls = [];
  const view = (offset, size) => {
    const index = Number(offset - base);
    assert.ok(index >= 0 && index + size <= length);
    calls.push({ offset, size });
    return new DataView(storage.buffer, storage.byteOffset + 3 + index, size);
  };
  return { base, storage, calls, view, memoryBytes: base + BigInt(length) };
}

test('high-address transfers cross view boundaries without touching adjacent bytes', () => {
  const length = 65536 + 7, m = memory(length);
  const bytes = Buffer.alloc(length);
  for (let i = 0; i < length; i++) bytes[i] = i % 251;
  writeGuestBytes({ ...m, offset: m.base, bytes });
  assert.deepEqual(m.calls.map(c => c.size), [65536, 7]);
  assert.deepEqual(m.storage.subarray(0, 3), Buffer.alloc(3, 0xa5));
  assert.deepEqual(m.storage.subarray(-3), Buffer.alloc(3, 0xa5));
  m.calls.length = 0;
  assert.deepEqual(readGuestBytes({ ...m, offset: m.base, length }), bytes);
  assert.deepEqual(m.calls.map(c => c.offset), [m.base, m.base + 65536n]);
});

test('invalid complete spans fail before creating views or partially writing', () => {
  const m = memory(65536 + 2), before = Buffer.from(m.storage);
  assert.throws(() => writeGuestBytes({ ...m, offset: m.base + 1n, bytes: Buffer.alloc(65536 + 2) }), /exceeds guest memory/);
  assert.throws(() => readGuestBytes({ ...m, offset: m.base, length: 2n ** 40n }), /exceeds guest memory/);
  assert.deepEqual(m.calls, []);
  assert.deepEqual(m.storage, before);
  for (const offset of [-1n, 1n << 64n, Number.MAX_SAFE_INTEGER + 1, 0.5, '1']) {
    assert.throws(() => readGuestBytes({ ...m, offset, length: 1 }), /uint64|exact integer/);
  }
  assert.deepEqual(m.calls, []);
});

test('empty transfers accept the memory endpoint and reject out-of-range pointers', () => {
  const m = memory(7);
  assert.equal(readGuestBytes({ ...m, offset: m.memoryBytes, length: 0 }).length, 0);
  writeGuestBytes({ ...m, offset: m.memoryBytes, bytes: Buffer.alloc(0) });
  assert.throws(() => readGuestBytes({ ...m, offset: m.memoryBytes + 1n, length: 0 }), /exceeds guest memory/);
  assert.deepEqual(m.calls, []);
});

test('a transfer beyond 64 MiB retains every byte using only short guest views', () => {
  const length = 64 * 1024 ** 2 + 1, block = Buffer.alloc(65536, 0x97), calls = [];
  const expected = createHash('sha256');
  for (let i = 0; i < 1024; i++) expected.update(block);
  expected.update(block.subarray(0, 1));
  const result = readGuestBytes({ offset: 0n, length, memoryBytes: BigInt(length), view(offset, size) {
    calls.push({ offset, size });
    return new DataView(block.buffer, block.byteOffset, size);
  } });
  assert.equal(result.length, length);
  assert.equal(createHash('sha256').update(result).digest('hex'), expected.digest('hex'));
  assert.equal(calls.length, 1025);
  assert.deepEqual(calls.at(-1), { offset: 64n * 1024n ** 2n, size: 1 });
});
