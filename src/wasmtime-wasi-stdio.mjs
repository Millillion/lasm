// Private memory64 diagnostic adapter. Only the two captured standard output
// descriptors exist here; general WASI descriptor ownership is still pending.
import assert from 'node:assert/strict';
import { constants as bufferConstants } from 'node:buffer';

const EFAULT = 21, EOVERFLOW = 61, MAX_U64 = (1n << 64n) - 1n;
const transferCapacity = BigInt(Math.min(bufferConstants.MAX_LENGTH, Number.MAX_SAFE_INTEGER));

export function writeWasiStdio({ fd, iovs, count, nwritten, memoryBytes, read, write, sink }) {
  assert.ok(fd === 1 || fd === 2, `Unimplemented private WASI output descriptor: ${fd}`);
  iovs = BigInt(iovs); count = BigInt(count); nwritten = BigInt(nwritten); memoryBytes = BigInt(memoryBytes);
  const inRange = (offset, length) => offset >= 0n && length >= 0n && offset <= memoryBytes && length <= memoryBytes - offset;
  // Pointers and size_t are eight bytes in this SDK's wasm64 ABI. Check the
  // complete table and output pointer before touching any guest bytes or sink.
  if (count < 0n || count > MAX_U64 / 16n || !inRange(iovs, count * 16n) || !inRange(nwritten, 8n)) return EFAULT;
  assert.ok(count * 16n <= transferCapacity, 'Iovec table exceeds this host Buffer capacity');
  const vectors = [];
  let total = 0n;
  for (let index = 0n; index < count; index++) {
    const entry = Buffer.from(read(iovs + index * 16n, 16));
    assert.equal(entry.length, 16);
    const address = entry.readBigUInt64LE(), length = entry.readBigUInt64LE(8);
    if (!inRange(address, length)) return EFAULT;
    if (length > MAX_U64 - total) return EOVERFLOW;
    total += length; vectors.push({ address, length });
  }
  assert.ok(total <= transferCapacity, 'Output exceeds this host Buffer capacity');
  const bytes = Buffer.alloc(Number(total));
  let cursor = 0;
  for (const vector of vectors) {
    if (!vector.length) continue;
    const data = read(vector.address, Number(vector.length));
    assert.ok(data instanceof Uint8Array && data.byteLength === Number(vector.length));
    bytes.set(data, cursor); cursor += data.byteLength;
  }
  // A single scatter/gather write keeps ordering and byte boundaries intact:
  // no UTF-8 decoding, line splitting, extra newline or swallowed write error.
  const result = sink(fd, bytes);
  assert.ok(Number.isInteger(result.errno) && result.errno >= 0 && result.errno <= 0xffff);
  if (result.errno) return result.errno;
  const written = BigInt(result.written);
  assert.ok(written >= 0n && written <= total, 'The sink must report its actual write count');
  const output = Buffer.alloc(8); output.writeBigUInt64LE(written); write(nwritten, output);
  return 0;
}
