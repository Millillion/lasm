// Private helper transfers use short views, including above the 4 GiB address
// boundary. Validate the complete span before allocating or changing any bytes.
import assert from 'node:assert/strict';
import { constants as bufferConstants } from 'node:buffer';

const MAX_U64 = (1n << 64n) - 1n;
const WINDOW_BYTES = 64 * 1024;

function unsigned(value, label) {
  assert.ok(typeof value === 'bigint' || typeof value === 'number' && Number.isSafeInteger(value),
    `${label} must be an exact integer`);
  const result = BigInt(value);
  assert.ok(result >= 0n && result <= MAX_U64, `${label} must fit uint64`);
  return result;
}

function range(offset, length, memoryBytes) {
  offset = unsigned(offset, 'Guest offset');
  length = unsigned(length, 'Transfer length');
  memoryBytes = unsigned(memoryBytes, 'Guest memory size');
  assert.ok(offset <= memoryBytes && length <= memoryBytes - offset, 'Transfer exceeds guest memory');
  assert.ok(length <= BigInt(Number.MAX_SAFE_INTEGER), 'Transfer length exceeds exact JavaScript indexing');
  return { offset, length: Number(length) };
}

function bytesInWindow(view, offset, length) {
  const result = view(offset, length);
  assert.ok(ArrayBuffer.isView(result) && result.byteLength === length, 'Guest view must match its requested span');
  return new Uint8Array(result.buffer, result.byteOffset, result.byteLength);
}

export function readGuestBytes({ offset, length, memoryBytes, view }) {
  const span = range(offset, length, memoryBytes);
  assert.ok(span.length <= bufferConstants.MAX_LENGTH, 'Transfer exceeds this host Buffer capacity');
  const result = Buffer.alloc(span.length);
  for (let cursor = 0; cursor < span.length; cursor += WINDOW_BYTES) {
    const size = Math.min(WINDOW_BYTES, span.length - cursor);
    result.set(bytesInWindow(view, span.offset + BigInt(cursor), size), cursor);
  }
  return result;
}

export function writeGuestBytes({ offset, bytes, memoryBytes, view }) {
  assert.ok(bytes instanceof Uint8Array, 'A guest write requires bytes');
  const span = range(offset, bytes.byteLength, memoryBytes);
  for (let cursor = 0; cursor < span.length; cursor += WINDOW_BYTES) {
    const size = Math.min(WINDOW_BYTES, span.length - cursor);
    bytesInWindow(view, span.offset + BigInt(cursor), size).set(bytes.subarray(cursor, cursor + size));
  }
}
