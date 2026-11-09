// Decoding of operation 144's interface list, and libuv's 17-byte address form.
import assert from 'node:assert/strict';

export function decode(bytes) {
  let offset = 8;
  const take = length => { const value = bytes.subarray(offset, offset + length); offset += length; return value; };
  const interfaces = Array.from({ length: Number(bytes.readBigUInt64LE()) }, () => {
    const name = take(Number(take(8).readBigUInt64LE())).toString();
    return { name, physical: [...take(6)], loopback: take(1)[0], address: [...take(17)], netmask: [...take(17)] };
  });
  assert.equal(offset, bytes.length);
  return interfaces;
}
export const ip = (family, text) => {
  const result = Buffer.alloc(17); result[0] = family;
  if (family === 4) text.split('.').forEach((part, i) => { result[1 + i] = Number(part); });
  else {
    const [head, tail = ''] = text.split('::');
    const groups = [...head.split(':').filter(Boolean), ...Array(8 - head.split(':').filter(Boolean).length - tail.split(':').filter(Boolean).length).fill('0'), ...tail.split(':').filter(Boolean)];
    groups.forEach((group, i) => result.writeUInt16BE(parseInt(group, 16), 1 + 2 * i));
  }
  return [...result];
};
