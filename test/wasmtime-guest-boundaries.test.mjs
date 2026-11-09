// The guest-memory boundaries of the standalone Wasmtime host, each check on
// its own: guest transfers (src/wasmtime-guest-memory.mjs), console strings
// (src/wasmtime-console.mjs), WASI fd_write (src/wasmtime-wasi-stdio.mjs) and
// the file imports (src/wasmtime-file-imports.mjs). Guest memory is a buffer
// here, seen through bounded views as the native window is.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readGuestBytes, writeGuestBytes } from '../src/wasmtime-guest-memory.mjs';
import { readConsoleString, invokeConsoleImport } from '../src/wasmtime-console.mjs';
import { writeWasiStdio } from '../src/wasmtime-wasi-stdio.mjs';
import { invokeFileImport } from '../src/wasmtime-file-imports.mjs';
import { forAll } from './helpers/property.mjs';

const MAX_U64 = (1n << 64n) - 1n;
/** A guest memory of `size` bytes and its bounded view; views are recorded. */
function memory(size) {
  const bytes = new Uint8Array(size), views = [];
  const view = (offset, length) => { views.push([offset, length]); return new DataView(bytes.buffer, Number(offset), length); };
  return { bytes, views, view, memoryBytes: BigInt(size) };
}

test('guest memory: offsets, lengths and sizes are exact uint64 values', () => {
  const m = memory(16);
  for (const [field, value, message] of [['offset', 1.5, 'Guest offset must be an exact integer'], ['offset', 2 ** 53, 'Guest offset must be an exact integer'],
    ['offset', '1', 'Guest offset must be an exact integer'], ['offset', -1, 'Guest offset must fit uint64'], ['offset', 1n << 64n, 'Guest offset must fit uint64'],
    ['length', -1n, 'Transfer length must fit uint64'], ['length', null, 'Transfer length must be an exact integer'],
    ['memoryBytes', -2n, 'Guest memory size must fit uint64'], ['memoryBytes', 1e300, 'Guest memory size must be an exact integer']]) {
    const input = { offset: 0n, length: 0n, memoryBytes: m.memoryBytes, view: m.view, [field]: value };
    assert.throws(() => readGuestBytes(input), { message }, `${field} ${value}`);
  }
  // The largest uint64 memory size is a valid size.
  assert.equal(readGuestBytes({ offset: MAX_U64, length: 0n, memoryBytes: MAX_U64, view: m.view }).length, 0);
  assert.equal(readGuestBytes({ offset: 2 ** 53 - 1, length: 0, memoryBytes: MAX_U64, view: m.view }).length, 0);
  // Spans: exactly to the end, and one byte past it.
  assert.equal(readGuestBytes({ offset: 10, length: 6, memoryBytes: 16n, view: m.view }).length, 6);
  for (const [offset, length] of [[10, 7], [17, 0], [0, 17]])
    assert.throws(() => readGuestBytes({ offset, length, memoryBytes: 16n, view: m.view }), { message: 'Transfer exceeds guest memory' });
  assert.throws(() => readGuestBytes({ offset: 0n, length: 1n << 54n, memoryBytes: 1n << 60n, view: m.view }), { message: 'Transfer length exceeds exact JavaScript indexing' });
  assert.throws(() => writeGuestBytes({ offset: 0, bytes: [1], memoryBytes: 16n, view: m.view }), { message: 'A guest write requires bytes' });
  // A view of another span, or not a view at all.
  for (const view of [() => new Uint8Array(3), () => [0, 0, 0, 0], () => new DataView(new ArrayBuffer(5))])
    assert.throws(() => readGuestBytes({ offset: 0, length: 4, memoryBytes: 16n, view }), { message: 'Guest view must match its requested span' });
});

// ∀ offset length, read (write m offset bytes) offset length = bytes, through windows of at most 64 KiB
test('guest memory: transfers go through 64 KiB windows, in order', () => {
  forAll(g => ({ offset: g.int(0, 3000), length: g.pick([0, 1, 65535, 65536, 65537, 131072, 140000]) }), ({ offset, length }) => {
    const m = memory(150000);
    const bytes = Uint8Array.from({ length }, (_, i) => (i * 7 + offset) & 0xff);
    writeGuestBytes({ offset: BigInt(offset), bytes, memoryBytes: m.memoryBytes, view: m.view });
    assert.deepEqual(m.bytes.subarray(offset, offset + length), bytes);
    const windows = m.views.splice(0);
    assert.deepEqual(windows, Array.from({ length: Math.ceil(length / 65536) }, (_, i) => [BigInt(offset + i * 65536), Math.min(65536, length - i * 65536)]));
    const read = readGuestBytes({ offset, length, memoryBytes: m.memoryBytes, view: m.view });
    assert.ok(Buffer.isBuffer(read));
    assert.deepEqual(new Uint8Array(read), bytes);
    assert.deepEqual(m.views, windows);
  }, { runs: 30 });
});

// The SDK's short-string decoder (Emscripten's UTF8ToString for at most 16 bytes).
function sdkShort(bytes, length) {
  let text = '';
  for (let i = 0; i < length;) {
    let u0 = bytes[i++];
    if (!(u0 & 0x80)) { text += String.fromCharCode(u0); continue; }
    const u1 = (bytes[i++] ?? 0) & 63;
    if ((u0 & 0xe0) === 0xc0) { text += String.fromCharCode(((u0 & 31) << 6) | u1); continue; }
    const u2 = (bytes[i++] ?? 0) & 63;
    u0 = (u0 & 0xf0) === 0xe0 ? ((u0 & 15) << 12) | (u1 << 6) | u2 : ((u0 & 7) << 18) | (u1 << 12) | (u2 << 6) | ((bytes[i++] ?? 0) & 63);
    if (u0 < 0x10000) text += String.fromCharCode(u0);
    else { const ch = u0 - 0x10000; text += String.fromCharCode(0xd800 | (ch >> 10), 0xdc00 | (ch & 0x3ff)); }
  }
  return text;
}
// ∀ s ≤ 16 bytes, read s = sdkShort s; ∀ s > 16 bytes, read s = utf8 s
test('console strings: the SDK decoder up to 16 bytes, UTF-8 beyond; NUL ends them', () => {
  forAll(g => g.array(g.int(0, 40), () => g.pick([0x41, 0x7f, 0xc3, 0xa9, 0xe2, 0x82, 0xac, 0xf0, 0x90, 0x80, 0xff, 0x80, 0xbf, 0x0a])), raw => {
    const m = memory(64);
    m.bytes.set(raw, 8);
    const length = raw.length, text = readConsoleString({ pointer: 8n, memoryBytes: m.memoryBytes, view: m.view });
    assert.equal(text, length > 16 ? new TextDecoder().decode(Uint8Array.from(raw)) : sdkShort(m.bytes.subarray(8), length));
  }, { runs: 300 });
  const m = memory(64);
  // Exactly 16 bytes with a malformed sequence: the short decoder, not TextDecoder.
  m.bytes.set([0xc3, 0x28, ...Buffer.from('abcdefghijklmn')], 0);
  assert.equal(readConsoleString({ pointer: 0n + 0n, memoryBytes: 64n, view: (o, l) => m.view(o, l) }), '');
  m.bytes.set([0x41, 0xc3, 0x28, ...Buffer.from('bcdefghijklmn')], 0);
  assert.equal(readConsoleString({ pointer: 0n, memoryBytes: 64n, view: m.view }), '', 'pointer 0 is the empty string');
  const n = memory(64);
  n.bytes.set([0x41, 0xc3, 0x28, ...Buffer.from('bcdefghijklmn')], 4);
  assert.equal(readConsoleString({ pointer: 4n, memoryBytes: 64n, view: n.view }), sdkShort(n.bytes.subarray(4), 16));
  assert.notEqual(sdkShort(n.bytes.subarray(4), 16), new TextDecoder().decode(n.bytes.subarray(4, 20)));
  // U+10000, the first supplementary code point, as a surrogate pair.
  const s = memory(32);
  s.bytes.set([0xf0, 0x90, 0x80, 0x80], 4);
  assert.equal(readConsoleString({ pointer: 4n, memoryBytes: 32n, view: s.view }), '\u{10000}');
  s.bytes.set([0xef, 0xbf, 0xbf, 0], 4);
  assert.equal(readConsoleString({ pointer: 4n, memoryBytes: 32n, view: s.view }), '￿');
  // A string that runs to the end of memory, and one longer than a window.
  const e = memory(8);
  e.bytes.set(Buffer.from('abcd'), 4);
  assert.equal(readConsoleString({ pointer: 4n, memoryBytes: 8n, view: e.view }), 'abcd');
  const big = memory(200000);
  big.bytes.fill(0x61, 10, 150010);
  assert.equal(readConsoleString({ pointer: 10n, memoryBytes: 200000n, view: big.view }).length, 150000);
  assert.ok(big.views.every(([, length]) => length <= 65536));
  assert.throws(() => readConsoleString({ pointer: 9n, memoryBytes: 8n, view: e.view }), { message: 'Transfer exceeds guest memory' });
  assert.throws(() => readConsoleString({ pointer: 0n + 4n, memoryBytes: 8n, view: () => new Uint8Array(1) }), { message: 'Console view must match its span' });
});

test('console imports: kinds 11 to 16 are log, error, warn, trace, out and err', () => {
  const m = memory(32);
  m.bytes.set(Buffer.from('hi'), 4);
  const calls = [];
  const target = Object.fromEntries(['log', 'error', 'warn', 'trace'].map(name => [name, text => calls.push([name, text])]));
  for (let kind = 11; kind <= 16; kind++)
    invokeConsoleImport({ kind, pointer: 4n, memoryBytes: 32n, view: m.view, console: target, out: text => calls.push(['out', text]), err: text => calls.push(['err', text]) });
  assert.deepEqual(calls, [['log', 'hi'], ['error', 'hi'], ['warn', 'hi'], ['trace', 'hi'], ['out', 'hi'], ['err', 'hi']]);
  // out and err default to the console's log and error.
  calls.length = 0;
  invokeConsoleImport({ kind: 15, pointer: 4n, memoryBytes: 32n, view: m.view, console: target });
  invokeConsoleImport({ kind: 16, pointer: 4n, memoryBytes: 32n, view: m.view, console: target });
  assert.deepEqual(calls, [['log', 'hi'], ['error', 'hi']]);
  for (const kind of [10, 17, 11.5, '11', undefined])
    assert.throws(() => invokeConsoleImport({ kind, pointer: 4n, memoryBytes: 32n, view: m.view, console: target }), { message: 'Unknown Emscripten console import' });
});

/** A WASI fd_write over a buffer memory. */
function wasi(memoryBytes = 256n) {
  const bytes = Buffer.alloc(256), seen = [];
  const at = value => Number(value);
  return { bytes, seen, input: { fd: 1, iovs: 16n, count: 0n, nwritten: 64n, memoryBytes,
    read: (address, length) => bytes.subarray(at(address), at(address) + Number(length)), write: (address, data) => bytes.set(data, at(address)),
    sink: (fd, data) => { seen.push([fd, Buffer.from(data).toString()]); return { errno: 0, written: data.length }; } } };
}
test('WASI fd_write: ranges, overflow, empty vectors and the sink\'s result', () => {
  const w = wasi();
  w.bytes.write('hello', 128);
  w.bytes.writeBigUInt64LE(128n, 16); w.bytes.writeBigUInt64LE(5n, 24);
  w.bytes.writeBigUInt64LE(200n, 32); w.bytes.writeBigUInt64LE(0n, 40);
  assert.equal(writeWasiStdio({ ...w.input, count: 2n }), 0);
  assert.deepEqual(w.seen, [[1, 'hello']]);
  assert.equal(w.bytes.readBigUInt64LE(64), 5n);
  // An empty vector at an address outside memory is still checked; one at the end is fine.
  w.bytes.writeBigUInt64LE(256n, 32);
  assert.equal(writeWasiStdio({ ...w.input, count: 2n }), 0);
  w.bytes.writeBigUInt64LE(257n, 32);
  assert.equal(writeWasiStdio({ ...w.input, count: 2n }), 21);
  // The table and the result word exactly at the end, and one byte past it.
  assert.equal(writeWasiStdio({ ...w.input, iovs: 240n, count: 1n, nwritten: 248n, read: (a, l) => a === 240n ? Buffer.alloc(16) : w.input.read(a, l) }), 0);
  assert.equal(writeWasiStdio({ ...w.input, iovs: 241n, count: 1n }), 21);
  assert.equal(writeWasiStdio({ ...w.input, nwritten: 249n, count: 1n }), 21);
  assert.equal(writeWasiStdio({ ...w.input, count: -1n }), 21);
  assert.equal(writeWasiStdio({ ...w.input, count: MAX_U64 / 16n + 1n }), 21);
  // Vectors whose lengths add up past 2^64 - 1: EOVERFLOW.
  const huge = wasi(MAX_U64);
  huge.bytes.writeBigUInt64LE(0n, 16); huge.bytes.writeBigUInt64LE(1n << 63n, 24);
  huge.bytes.writeBigUInt64LE(0n, 32); huge.bytes.writeBigUInt64LE(1n << 63n, 40);
  assert.equal(writeWasiStdio({ ...huge.input, count: 2n }), 61);
  huge.bytes.writeBigUInt64LE((1n << 63n) - 1n, 40);
  assert.throws(() => writeWasiStdio({ ...huge.input, count: 2n }), { message: 'Output exceeds this host Buffer capacity' });
  // The sink's errno is the result; its count must be what it wrote at most.
  w.bytes.writeBigUInt64LE(200n, 32); w.bytes.writeBigUInt64LE(0n, 40);
  for (const [result, expected] of [[{ errno: 29, written: 0 }, 29], [{ errno: 0xffff, written: 0 }, 0xffff], [{ errno: 0, written: 0 }, 0], [{ errno: 0, written: 5 }, 0]])
    assert.equal(writeWasiStdio({ ...w.input, count: 2n, sink: () => result }), expected, JSON.stringify(result));
  for (const result of [{ errno: -1, written: 0 }, { errno: 0x10000, written: 0 }, { errno: 1.5, written: 0 }, { errno: 0, written: 6 }, { errno: 0, written: -1 }])
    assert.throws(() => writeWasiStdio({ ...w.input, count: 2n, sink: () => result }), { code: 'ERR_ASSERTION' }, JSON.stringify(result));
  assert.throws(() => writeWasiStdio({ ...w.input, count: 2n, sink: () => ({ errno: 0, written: 6 }) }), { message: 'The sink must report its actual write count' });
  // Reads that return other spans, and descriptors other than 1 and 2.
  assert.throws(() => writeWasiStdio({ ...w.input, count: 1n, read: (a, l) => a === 16n ? Buffer.alloc(15) : w.input.read(a, l) }), { code: 'ERR_ASSERTION' });
  assert.throws(() => writeWasiStdio({ ...w.input, count: 1n, read: (a, l) => a === 16n ? w.input.read(a, l) : [1, 2, 3, 4, 5] }), { code: 'ERR_ASSERTION' });
  assert.throws(() => writeWasiStdio({ ...w.input, count: 1n, read: (a, l) => a === 16n ? w.input.read(a, l) : Buffer.alloc(4) }), { code: 'ERR_ASSERTION' });
  for (const fd of [0, 3]) assert.throws(() => writeWasiStdio({ ...w.input, fd }), { message: `Unimplemented private WASI output descriptor: ${fd}` });
  assert.equal(writeWasiStdio({ ...w.input, fd: 2, count: 0n }), 0);
  assert.deepEqual(w.seen.at(-1), [2, '']);
});

/** A guest memory for the file imports; `request` records the host requests. */
function files(size = 8192, answer = () => ({ errno: 0 })) {
  const bytes = Buffer.alloc(size), requests = [];
  return { bytes, requests, input: (kind, args) => ({ kind, args, memoryBytes: BigInt(size),
    read: (address, length) => bytes.subarray(Number(address), Number(address) + length), write: (address, data) => bytes.set(data, Number(address)),
    request: request => { requests.push(request); return answer(request); } }) };
}
test('file imports: openat reads the path in chunks up to NUL, within memory and 4096 bytes', () => {
  const f = files(8192, () => ({ errno: 0, fd: 9 }));
  f.bytes.write('dir/file.txt\0', 100);
  f.bytes.writeUInt32LE(0o640, 200);
  assert.equal(invokeFileImport(f.input(17, [3n, 100n, 0x241n, 200n])), 9);
  assert.deepEqual(f.requests.at(-1), { operation: 'openat', directory: 3, path: Buffer.from('dir/file.txt'), flags: 0x241, mode: 0o640 });
  // AT_FDCWD (-100 as an unsigned 64-bit value), no mode pointer, an empty path.
  f.bytes[300] = 0;
  assert.equal(invokeFileImport(f.input(17, [BigInt.asUintN(64, -100n), 300n, BigInt.asUintN(64, -1n), 0n])), 9);
  assert.deepEqual(f.requests.at(-1), { operation: 'openat', directory: -100, path: Buffer.alloc(0), flags: -1, mode: 0 });
  // A path across chunk boundaries (256 bytes) and up to 4095 bytes.
  for (const length of [255, 256, 257, 4095]) {
    f.bytes.fill(0x61, 1000, 1000 + length); f.bytes[1000 + length] = 0;
    assert.equal(invokeFileImport(f.input(17, [0n, 1000n, 0n, 0n])), 9);
    assert.equal(f.requests.at(-1).path.length, length);
  }
  // 4096 bytes without NUL: ENAMETOOLONG; the path reaching the end of memory: EFAULT.
  f.bytes.fill(0x61, 1000, 1000 + 4097);
  assert.equal(invokeFileImport(f.input(17, [0n, 1000n, 0n, 0n])), -37);
  f.bytes.fill(0x61, 8000, 8192);
  assert.equal(invokeFileImport(f.input(17, [0n, 8000n, 0n, 0n])), -21);
  const count = f.requests.length;
  for (const args of [[0n, 8192n, 0n, 0n], [0n, 100n, 0n, 8189n], [0n, 9000n, 0n, 0n]]) assert.equal(invokeFileImport(f.input(17, args)), -21);
  assert.equal(f.requests.length, count, 'no request for a bad span');
  assert.equal(invokeFileImport(f.input(17, [0n, 100n, 0n, 8188n])), 9, 'a mode word that ends at the end of memory');
  // An error is returned negated.
  const e = files(512, () => ({ errno: 44 }));
  e.bytes.write('x\0', 10);
  assert.equal(invokeFileImport(e.input(17, [0n, 10n, 0n, 0n])), -44);
  // A short memory: the chunk never reads past its end.
  const s = files(20, () => ({ errno: 0, fd: 4 }));
  s.bytes.write('abc\0', 16);
  assert.equal(invokeFileImport(s.input(17, [0n, 16n, 0n, 0n])), 4);
});

test('file imports: stat, readv, seek and close with their ranges and errors', () => {
  const stat = Buffer.alloc(104, 3);
  const f = files(8192, request => request.operation === 'stat' ? (request.fd === 7 ? { errno: 8 } : { errno: 0, bytes: stat })
    : request.operation === 'read' ? (request.fd === 7 ? { errno: 8 } : { errno: 0, bytes: Buffer.from('abcdefgh').subarray(0, Math.min(8, request.length)) })
      : request.operation === 'seek' ? (request.fd === 7 ? { errno: 70 } : { errno: 0, offset: request.offset + 1n }) : { errno: request.fd === 7 ? 8 : 0 });
  assert.equal(invokeFileImport(f.input(18, [3n, 1000n])), 0);
  assert.deepEqual(f.bytes.subarray(1000, 1104), stat);
  assert.equal(invokeFileImport(f.input(18, [7n, 1000n])), -8);
  assert.equal(invokeFileImport(f.input(18, [3n, 8192n - 104n])), 0);
  assert.equal(invokeFileImport(f.input(18, [3n, 8192n - 103n])), -21);
  // readv scatters what was read over the vectors and writes the count.
  f.bytes.writeBigUInt64LE(2000n, 100); f.bytes.writeBigUInt64LE(3n, 108);
  f.bytes.writeBigUInt64LE(2100n, 116); f.bytes.writeBigUInt64LE(0n, 124);
  f.bytes.writeBigUInt64LE(2200n, 132); f.bytes.writeBigUInt64LE(10n, 140);
  assert.equal(invokeFileImport(f.input(19, [3n, 100n, 3n, 300n])), 0);
  assert.deepEqual(f.requests.at(-1), { operation: 'read', fd: 3, length: 13 });
  assert.equal(f.bytes.subarray(2000, 2003).toString(), 'abc');
  assert.equal(f.bytes.subarray(2200, 2206).toString(), 'defgh\0');
  assert.equal(f.bytes.readBigUInt64LE(300), 8n);
  assert.equal(invokeFileImport(f.input(19, [7n, 100n, 1n, 300n])), 8, 'readv errors are positive');
  assert.equal(invokeFileImport(f.input(19, [3n, 100n, 0n, 300n])), 0);
  assert.equal(f.bytes.readBigUInt64LE(300), 0n);
  for (const count of [-1n, 1025n]) assert.equal(invokeFileImport(f.input(19, [3n, 100n, count, 300n])), 28);
  const wide = files(32768, () => ({ errno: 0, bytes: Buffer.alloc(0) }));
  assert.equal(invokeFileImport(wide.input(19, [3n, 100n, 1024n, 20000n])), 0, 'IOV_MAX vectors (empty ones here)');
  assert.equal(invokeFileImport(f.input(19, [3n, 8192n - 15n, 1n, 300n])), 21);
  assert.equal(invokeFileImport(f.input(19, [3n, 100n, 1n, 8192n - 7n])), 21);
  f.bytes.writeBigUInt64LE(8190n, 100); f.bytes.writeBigUInt64LE(3n, 108);
  assert.equal(invokeFileImport(f.input(19, [3n, 100n, 1n, 300n])), 21, 'a vector past the end of memory');
  f.bytes.writeBigUInt64LE(8189n, 100);
  assert.equal(invokeFileImport(f.input(19, [3n, 100n, 1n, 300n])), 0, 'a vector to the end of memory');
  // Totals beyond a Buffer: EOVERFLOW, before any request.
  const big = { ...f.input(19, [3n, 0n, 2n, 300n]), memoryBytes: MAX_U64, read: (address) => { const v = Buffer.alloc(16); v.writeBigUInt64LE(0n); v.writeBigUInt64LE(address === 0n ? 1n << 52n : 1n << 52n, 8); return v; } };
  const before = f.requests.length;
  assert.equal(invokeFileImport(big), 61);
  assert.equal(f.requests.length, before);
  // A host that returns more than asked for is a bug.
  const liar = files(512, () => ({ errno: 0, bytes: Buffer.alloc(4) }));
  liar.bytes.writeBigUInt64LE(200n, 0); liar.bytes.writeBigUInt64LE(3n, 8);
  assert.throws(() => invokeFileImport(liar.input(19, [3n, 0n, 1n, 100n])), { code: 'ERR_ASSERTION' });
  const notBytes = files(512, () => ({ errno: 0, bytes: [1] }));
  notBytes.bytes.writeBigUInt64LE(200n, 0); notBytes.bytes.writeBigUInt64LE(3n, 8);
  assert.throws(() => invokeFileImport(notBytes.input(19, [3n, 0n, 1n, 100n])), { code: 'ERR_ASSERTION' });
  // seek: a signed offset, the whence, the new position written.
  assert.equal(invokeFileImport(f.input(20, [3n, BigInt.asUintN(64, -5n), 2n, 400n])), 0);
  assert.deepEqual(f.requests.at(-1), { operation: 'seek', fd: 3, offset: -5n, whence: 2 });
  assert.equal(f.bytes.readBigInt64LE(400), -4n);
  assert.equal(invokeFileImport(f.input(20, [7n, 0n, 0n, 400n])), 70);
  assert.equal(invokeFileImport(f.input(20, [3n, 0n, 0n, 8192n - 7n])), 21);
  assert.equal(invokeFileImport(f.input(20, [3n, 0n, 0n, 8192n - 8n])), 0);
  // close: the host's errno.
  assert.equal(invokeFileImport(f.input(21, [3n])), 0);
  assert.equal(invokeFileImport(f.input(21, [7n])), 8);
  assert.deepEqual(f.requests.at(-1), { operation: 'close', fd: 7 });
  // A descriptor is a signed 32-bit value.
  invokeFileImport(f.input(21, [0x1_0000_0003n]));
  assert.equal(f.requests.at(-1).fd, 3);
  for (const kind of [16, 22, 17.5, '17']) assert.throws(() => invokeFileImport(f.input(kind, [0n])), { message: `Unimplemented file import: ${kind}` });
});
