// Private Emscripten console bridge. Match the pinned SDK's UTF8ToString,
// including its <=16-byte decoder and the distinct console/out/err sinks.
// The short-string decoding algorithm is adapted from Emscripten libstrings.js:
// Copyright 2020 The Emscripten Authors. SPDX-License-Identifier: MIT.
import assert from 'node:assert/strict';
import { constants as bufferConstants } from 'node:buffer';
import { readGuestBytes } from './wasmtime-guest-memory.mjs';

const decoder = new TextDecoder('utf8');
const methods = ['log', 'error', 'warn', 'trace', 'out', 'err'];

export function readConsoleString({ pointer, memoryBytes, view }) {
  // Reuse exact uint64 and complete-span validation before opening any view.
  readGuestBytes({ offset: pointer, length: 0, memoryBytes, view });
  pointer = BigInt(pointer); memoryBytes = BigInt(memoryBytes);
  if (!pointer) return '';
  let length = 0n;
  while (pointer + length < memoryBytes) {
    const remaining = memoryBytes - pointer - length;
    const size = Number(remaining < 65536n ? remaining : 65536n);
    const window = view(pointer + length, size);
    assert.ok(ArrayBuffer.isView(window) && window.byteLength === size, 'Console view must match its span');
    const bytes = new Uint8Array(window.buffer, window.byteOffset, size);
    const end = bytes.indexOf(0);
    length += BigInt(end < 0 ? size : end);
    assert.ok(length <= BigInt(bufferConstants.MAX_LENGTH), 'Console string exceeds this host Buffer capacity');
    if (end >= 0) break;
  }
  if (length > 16n) return decoder.decode(readGuestBytes({ offset: pointer, length, memoryBytes, view }));
  // The SDK's short decoder can read up to three trailing bytes after a
  // malformed lead byte, even beyond the first NUL. Preserve those bytes;
  // reads beyond the end of the heap behave as undefined (bitwise zero).
  const remaining = memoryBytes - pointer;
  const bytes = readGuestBytes({ offset: pointer, length: remaining < length + 3n ? remaining : length + 3n,
    memoryBytes, view });
  let text = '';
  for (let index = 0; index < Number(length);) {
    let first = bytes[index++];
    if (!(first & 0x80)) { text += String.fromCharCode(first); continue; }
    const second = bytes[index++] & 63;
    if ((first & 0xe0) === 0xc0) { text += String.fromCharCode(((first & 31) << 6) | second); continue; }
    const third = bytes[index++] & 63;
    first = (first & 0xf0) === 0xe0 ? ((first & 15) << 12) | (second << 6) | third
      : ((first & 7) << 18) | (second << 12) | (third << 6) | (bytes[index++] & 63);
    if (first < 0x10000) text += String.fromCharCode(first);
    else {
      const value = first - 0x10000;
      text += String.fromCharCode(0xd800 | (value >> 10), 0xdc00 | (value & 1023));
    }
  }
  return text;
}

export function invokeConsoleImport({ kind, pointer, memoryBytes, view,
  console: targetConsole = globalThis.console,
  out = text => targetConsole.log(text), err = text => targetConsole.error(text) }) {
  assert.ok(Number.isInteger(kind) && kind >= 11 && kind <= 16, 'Unknown Emscripten console import');
  const text = readConsoleString({ pointer, memoryBytes, view });
  const method = methods[kind - 11];
  if (method === 'out') out(text);
  else if (method === 'err') err(text);
  else targetConsole[method](text);
}
