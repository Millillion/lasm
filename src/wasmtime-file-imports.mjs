import assert from 'node:assert/strict';
import { constants as bufferConstants } from 'node:buffer';

// Integers and pointers follow the pinned SDK's memory64 ABI. Validate every
// guest span before asking the host to move a descriptor's position or bytes.
export function invokeFileImport({ kind, args, memoryBytes, read, write, request }) {
  if (!Number.isInteger(kind) || kind < 17 || kind > 21) throw new Error(`Unimplemented file import: ${kind}`);
  const [a, b, c, d] = args.map(BigInt);
  memoryBytes = BigInt(memoryBytes);
  const range = (offset, length) => offset >= 0n && length >= 0n && offset <= memoryBytes && length <= memoryBytes - offset;
  const fd = Number(BigInt.asIntN(32, a));
  if (kind === 17) {
    if (!range(b, 1n) || d && !range(d, 4n)) return -21;
    const pieces = []; let offset = b, remaining = 4096;
    while (remaining && offset < memoryBytes) {
      const bytes = Buffer.from(read(offset, Number([256n, BigInt(remaining), memoryBytes - offset].reduce((x, y) => x < y ? x : y))));
      const end = bytes.indexOf(0);
      if (end >= 0) {
        pieces.push(bytes.subarray(0, end));
        const result = request({ operation: 'openat', directory: fd, path: Buffer.concat(pieces),
          flags: Number(BigInt.asIntN(32, c)), mode: d ? Buffer.from(read(d, 4)).readUInt32LE() : 0 });
        return result.errno ? -result.errno : result.fd;
      }
      pieces.push(bytes); offset += BigInt(bytes.length); remaining -= bytes.length;
    }
    return remaining ? -21 : -37;
  }
  if (kind === 18) {
    if (!range(b, 104n)) return -21;
    const result = request({ operation: 'stat', fd });
    if (result.errno) return -result.errno;
    assert.equal(result.bytes.byteLength, 104); write(b, result.bytes); return 0;
  }
  if (kind === 19) {
    // The native Linux readv boundary uses IOV_MAX=1024. Check before walking
    // guest vectors so malformed counts cannot allocate an unbounded JS list.
    if (c < 0n || c > 1024n) return 28;
    if (!range(b, c * 16n) || !range(d, 8n)) return 21;
    const vectors = []; let total = 0n;
    for (let index = 0n; index < c; index++) {
      const vector = Buffer.from(read(b + index * 16n, 16));
      const address = vector.readBigUInt64LE(), length = vector.readBigUInt64LE(8);
      if (!range(address, length)) return 21;
      total += length; vectors.push({ address, length });
    }
    if (total > BigInt(bufferConstants.MAX_LENGTH) || total > BigInt(Number.MAX_SAFE_INTEGER)) return 61;
    const result = request({ operation: 'read', fd, length: Number(total) });
    if (result.errno) return result.errno;
    assert.ok(result.bytes instanceof Uint8Array && result.bytes.byteLength <= Number(total));
    let position = 0;
    for (const { address, length } of vectors) {
      const count = Math.min(Number(length), result.bytes.byteLength - position);
      if (count) write(address, result.bytes.subarray(position, position + count));
      position += count;
    }
    const count = Buffer.alloc(8); count.writeBigUInt64LE(BigInt(position)); write(d, count); return 0;
  }
  if (kind === 20) {
    if (!range(d, 8n)) return 21;
    const result = request({ operation: 'seek', fd, offset: BigInt.asIntN(64, b), whence: Number(c) });
    if (result.errno) return result.errno;
    const position = Buffer.alloc(8); position.writeBigInt64LE(BigInt(result.offset)); write(d, position); return 0;
  }
  if (kind === 21) return request({ operation: 'close', fd }).errno;
  throw new Error(`Unimplemented file import: ${kind}`);
}
