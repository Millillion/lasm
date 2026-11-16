// src/tar.mjs: Lasm's tar reader and writer (docs/proposals/IRREDUCIBLE.md item 14).
// The fuzz target test/fuzz/targets/tar.mjs compares the reader with Python's tarfile.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, symlinkSync, lstatSync, readlinkSync, rmSync, existsSync, statSync, utimesSync, chmodSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { Readable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { gzipSync, zstdCompressSync, gunzipSync } from 'node:zlib';
import { TarParser, parseTar, decompressorsFor, readTar, listTar, extractTar, extractTarFile, fileSink,
  tarHeader, tarBytes, packTar, directoryEntries, writeTar } from '../src/tar.mjs';

const posix = process.platform !== 'win32';
const scratch = t => { const d = mkdtempSync(join(tmpdir(), 'lasm-tar-')); t.after(() => rmSync(d, { recursive: true, force: true })); return d; };

/** Every entry, with its bytes, of an in-memory archive fed in `step`-byte chunks. */
function read(bytes, step = bytes.length || 1) {
  const entries = [];
  const parser = new TarParser(entry => {
    const chunks = [];
    entries.push(entry);
    return { data: chunk => chunks.push(Buffer.from(chunk)), end: () => { entry.data = Buffer.concat(chunks).toString('latin1'); } };
  });
  for (let at = 0; at < bytes.length; at += step) parser.write(bytes.subarray(at, at + step));
  parser.end();
  return entries;
}
const refuses = (bytes, pattern) => assert.throws(() => read(bytes), error => error.code === 'LASM_TAR_INVALID' && pattern.test(error.message));

/** A raw 512-byte header: fields as given (strings or bytes), checksum computed unless `checksum` is set. */
function raw({ name = 'f', mode = '0000644\0', uid = '0000000\0', gid = '0000000\0', size = 0, mtime = '00000000000\0', flag = '0',
  link = '', magic = 'ustar\x0000', prefix = '', devmajor = '', devminor = '', checksum, signed = false } = {}) {
  const h = Buffer.alloc(512);
  const put = (value, at, length) => (typeof value === 'string' ? Buffer.from(value, 'latin1') : Buffer.from(value)).copy(h, at, 0, length);
  put(Buffer.from(name), 0, 100); put(mode, 100, 8); put(uid, 108, 8); put(gid, 116, 8);
  put(typeof size === 'number' ? size.toString(8).padStart(11, '0') + '\0' : size, 124, 12); put(mtime, 136, 12);
  put(flag, 156, 1); put(Buffer.from(link), 157, 100); put(magic, 257, 8); put(devmajor, 329, 8); put(devminor, 337, 8);
  put(Buffer.from(prefix), 345, 155);
  h.fill(0x20, 148, 156);
  let sum = 0;
  for (const byte of h) sum += signed && byte > 127 ? byte - 256 : byte;
  put(checksum ?? (sum.toString(8).padStart(6, '0') + '\0 '), 148, 8);
  return h;
}
const pad = n => Buffer.alloc((512 - n % 512) % 512);
const body = data => { const b = Buffer.from(data); return Buffer.concat([b, pad(b.length)]); };
const end = Buffer.alloc(1024);
const archive = (...parts) => Buffer.concat([...parts, end]);
const pax = (...records) => {
  const text = records.map(([k, v]) => {
    const rest = ` ${k}=${v}\n`, n = Buffer.byteLength(rest);
    let length = n + String(n).length;
    if (String(length).length !== String(n).length) length++;
    return length + rest;
  }).join('');
  return Buffer.from(text);
};

test('reads ustar entries: files, directories, links, devices, modes, times, owners', () => {
  const entries = read(archive(
    raw({ name: 'dir/', flag: '5', mode: '0000755\0' }),
    raw({ name: 'dir/a', size: 3, mode: '0000755\0', mtime: '00000000017\0', uid: '0000012\0', gid: '0000013\0' }), body('abc'),
    raw({ name: 'dir/s', flag: '2', link: 'a', mode: '0000777\0' }),
    raw({ name: 'dir/h', flag: '1', link: 'dir/a' }),
    raw({ name: 'c', flag: '3', devmajor: '0000001\0', devminor: '0000003\0' }), raw({ name: 'b', flag: '4' }), raw({ name: 'p', flag: '6' }),
    raw({ name: 'old', flag: '\0', size: 1 }), body('o'), raw({ name: 'olddir/', flag: '\0' }), raw({ name: 'cont', flag: '7', size: 2 }), body('cc'),
  ));
  assert.deepEqual(entries.map(e => [e.path, e.type, e.mode, e.size, e.linkpath, e.data]), [
    ['dir/', 'Directory', 0o755, 0, '', ''], ['dir/a', 'File', 0o755, 3, '', 'abc'], ['dir/s', 'SymbolicLink', 0o777, 0, 'a', ''],
    ['dir/h', 'Link', 0o644, 0, 'dir/a', ''], ['c', 'CharacterDevice', 0o644, 0, '', ''], ['b', 'BlockDevice', 0o644, 0, '', ''],
    ['p', 'FIFO', 0o644, 0, '', ''], ['old', 'File', 0o644, 1, '', 'o'], ['olddir/', 'Directory', 0o644, 0, '', ''], ['cont', 'File', 0o644, 2, '', 'cc']]);
  assert.deepEqual([entries[1].mtime, entries[1].uid, entries[1].gid], [15, 10, 11]);
  // A regular file ('0') named with a trailing slash stays a file; only the old '\0' flag makes it a directory.
  assert.equal(read(archive(raw({ name: 'x/', flag: '0' })))[0].type, 'File');
});

test('numbers: octal between spaces and NULs, empty as zero, base-256; modes keep their permission bits', () => {
  const entry = fields => read(archive(raw(fields), ...(fields.data ? [body(fields.data)] : [])))[0];
  assert.equal(entry({ size: '  3 \0\0\0\0\0\0\0\0', data: 'abc' }).size, 3);
  assert.equal(entry({ size: '\0\0\0\0\0\0\0\0\0\0\0\0' }).size, 0);
  assert.equal(entry({ size: '            ' }).size, 0);
  assert.equal(entry({ size: [0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5], data: 'abcde' }).size, 5);
  assert.equal(entry({ size: [0x80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0], data: 'x'.repeat(256) }).size, 256);
  assert.equal(entry({ mtime: [0x80, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0] }).mtime, 65536);
  assert.equal(entry({ mode: '0107755\0' }).mode, 0o7755);
  assert.equal(entry({ mode: '7' }).mode, 7);
  for (const size of ['00000000009\0', '0000000 001\0', '-0000000001\0', '0000000000x\0', '+0000000001\0'])
    refuses(archive(raw({ size })), /a size is not a number/);
  refuses(archive(raw({ size: [0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe] })), /a size is negative/);
  refuses(archive(raw({ size: [0x80, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] })), /a size is too large/);
  refuses(archive(raw({ mode: 'rw-r--r-' })), /a mode is not a number/);
  refuses(archive(raw({ uid: 'root\0' })), /a uid is not a number/);
  refuses(archive(raw({ gid: 'wheel\0' })), /a gid is not a number/);
  refuses(archive(raw({ mtime: 'yesterday\0' })), /a time is not a number/);
  refuses(archive(raw({ devmajor: 'x' })), /a device number is not a number/);
  refuses(archive(raw({ devminor: 'y' })), /a device number is not a number/);
});

test('checksums: unsigned or signed sums; anything else is refused', () => {
  const high = { name: 'h\u00e9' };
  assert.equal(read(archive(raw(high)))[0].path, 'hé');
  assert.equal(read(archive(raw({ ...high, signed: true })))[0].path, 'hé');
  const good = raw();
  const sum = good.toString('latin1', 148, 154);
  refuses(archive(raw({ checksum: (parseInt(sum, 8) + 1).toString(8).padStart(6, '0') + '\0 ' })), /checksum does not match/);
  refuses(archive(raw({ checksum: 'zzzzzz\0 ' })), /the checksum is not a number/);
  const flipped = raw(); flipped[0] ^= 1;
  refuses(archive(flipped), /checksum does not match/);
});

test('the ustar prefix joins the name only under the POSIX magic', () => {
  assert.equal(read(archive(raw({ name: 'name', prefix: 'some/dir' })))[0].path, 'some/dir/name');
  assert.equal(read(archive(raw({ name: 'name', prefix: 'some/dir', magic: 'ustar  \0' })))[0].path, 'name');
  assert.equal(read(archive(raw({ name: 'name', prefix: 'some/dir', magic: '\0\0\0\0\0\0\0\0' })))[0].path, 'name');
  assert.equal(read(archive(raw({ name: 'name', prefix: '', magic: 'ustar\x0000' })))[0].path, 'name');
});

test('names: UTF-8, NUL-terminated; anything else is refused', () => {
  assert.equal(read(archive(raw({ name: 'a\0b' })))[0].path, 'a');
  assert.equal(read(archive(raw({ name: 'x'.repeat(100) })))[0].path, 'x'.repeat(100));
  refuses(archive(raw({ name: Buffer.from([0x66, 0xff]) })), /not UTF-8/);
  refuses(archive(raw({ link: Buffer.from([0xc3]), flag: '2' })), /not UTF-8/);
  refuses(archive(raw({ name: 'n', prefix: Buffer.from([0xed, 0xa0, 0x80]) })), /not UTF-8/);
});

test('pax headers: path, linkpath, size and mtime; the first extended header wins', () => {
  const long = 'p/'.repeat(80) + 'file';
  const x = records => { const data = pax(...records); return [raw({ name: 'PaxHeader', flag: 'x', size: data.length }), body(data)]; };
  const [file, link, sized] = read(archive(
    ...x([['path', long], ['mtime', '1700000000.75'], ['uid', '7'], ['comment', 'ignored'], ['ctime', 'x']]), raw({ name: 'short', size: 1, mtime: '00000000005\0' }), body('a'),
    ...x([['linkpath', 'l'.repeat(200)]]), raw({ name: 'lnk', flag: '2', link: 'short' }),
    ...x([['size', '2']]), raw({ name: 'sized', size: 0 }), body('zz'),
  ));
  assert.deepEqual([file.path, file.mtime, file.uid, file.data], [long, 1700000000, 0, 'a']);
  assert.deepEqual([link.path, link.linkpath], ['lnk', 'l'.repeat(200)]);
  assert.deepEqual([sized.size, sized.data], [2, 'zz']);
  // Two extended headers (pax or GNU) for one entry: the first one's value wins.
  const first = read(archive(...x([['path', 'one']]), ...x([['path', 'two'], ['linkpath', 'kept']]), raw({ name: 'header', flag: '2', link: 'h' })))[0];
  assert.deepEqual([first.path, first.linkpath], ['one', 'kept']);
  const gnuFirst = read(archive(raw({ name: '././@LongLink', flag: 'L', size: 4 }), body('gnu\0'), ...x([['path', 'pax']]), raw({ name: 'h' })))[0];
  assert.equal(gnuFirst.path, 'gnu');
  // Negative and fractional times.
  assert.equal(read(archive(...x([['mtime', '-1.5']]), raw()))[0].mtime, -2);
  assert.equal(read(archive(...x([['mtime', '12']]), raw()))[0].mtime, 12);
  assert.equal(read(archive(...x([['mtime', '12.']]), raw()))[0].mtime, 12);
  // An extended header applies to the next entry only.
  assert.deepEqual(read(archive(...x([['path', 'once']]), raw({ name: 'a' }), raw({ name: 'b' }))).map(e => e.path), ['once', 'b']);
  // An empty pax header changes nothing.
  assert.equal(read(archive(raw({ name: 'PaxHeader', flag: 'x', size: 0 }), raw({ name: 'plain' })))[0].path, 'plain');
});

test('pax records that do not parse, are empty or are not supported are refused', () => {
  const x = data => archive(raw({ name: 'PaxHeader', flag: 'x', size: Buffer.byteLength(data) }), body(data), raw());
  refuses(x('8 path=a\n'), /wrong length/);
  refuses(x('11 path=a\n'), /wrong length/);
  refuses(x('10 path=ab'), /wrong length/);
  refuses(x('path=a\n'), /no length/);
  refuses(x(' 9 path=a\n'), /no length/);
  refuses(x('0123456789012345678901 a=b\n'), /no length/);
  refuses(x('08 a=bcd\n'), /not a number/);
  refuses(x('8 patha\n'), /no key/);
  refuses(x('6 =ab\n'), /no key/);
  refuses(x('5 a=\n2'), /no length/);
  refuses(x('3 \n'), /no key/);
  refuses(x('2 \n'), /wrong length/);
  refuses(archive(raw({ name: 'PaxHeader', flag: 'x', size: 9 }), body(Buffer.from([0x39, 0x20, 0x70, 0x3d, 0xff, 0xfe, 0xfd, 0xfc, 0x0a])), raw()), /not UTF-8/);
  for (const key of ['GNU.sparse.size', 'GNU.sparse.map', 'hdrcharset']) refuses(x(pax([key, '1']).toString()), new RegExp(`unsupported pax record ${key.replace(/\./g, '\\.')}`));
  for (const key of ['path', 'linkpath', 'size', 'mtime']) refuses(x(pax([key, '']).toString()), new RegExp(`pax ${key} is empty`));
  for (const value of ['1.5', '-1', '0x10', ' 1', '99999999999999999999']) refuses(x(pax(['size', value]).toString()), /pax size is not a number/);
  refuses(x(pax(['mtime', 'soon']).toString()), /pax mtime is not a number/);
  refuses(x(pax(['mtime', '1e5']).toString()), /pax mtime is not a number/);
  refuses(x(pax(['path', 'a\0b']).toString()), /pax path holds NUL/);
  refuses(x(pax(['linkpath', 'a\0b']).toString()), /pax linkpath holds NUL/);
});

test('global pax headers are ignored, and may not set a path, link or size', () => {
  const g = records => { const data = pax(...records); return [raw({ name: 'pax_global_header', flag: 'g', size: data.length }), body(data)]; };
  assert.deepEqual(read(archive(...g([['comment', 'commit abc'], ['mtime', '5']]), raw({ name: 'a' }), raw({ name: 'b' }))).map(e => [e.path, e.mtime]), [['a', 0], ['b', 0]]);
  for (const key of ['path', 'linkpath', 'size']) refuses(archive(...g([[key, '1']]), raw()), new RegExp(`global pax header sets ${key}`));
});

test('GNU long names and link names', () => {
  const name = 'n'.repeat(300), link = 'l'.repeat(150);
  const [entry] = read(archive(raw({ name: '././@LongLink', flag: 'L', size: name.length + 1 }), body(name + '\0'),
    raw({ name: '././@LongLink', flag: 'K', size: link.length + 1 }), body(link + '\0'), raw({ name: 'short', flag: '2', link: 'x' })));
  assert.deepEqual([entry.path, entry.linkpath], [name, link]);
  assert.equal(read(archive(raw({ flag: 'L', size: 4 }), body('a\0b\0'), raw()))[0].path, 'a');
  refuses(archive(raw({ flag: 'L', size: 3 }), body('abc'), raw()), /not NUL-terminated/);
  refuses(archive(raw({ flag: 'K', size: 0 }), raw()), /not NUL-terminated/);
  refuses(archive(raw({ flag: 'L', size: 2 }), body(Buffer.from([0xff, 0])), raw()), /not UTF-8/);
});

test('extended headers: bounded, NUL-padded and followed by an entry', () => {
  refuses(archive(raw({ name: 'PaxHeader', flag: 'x', size: 1024 * 1024 + 1 })), /extended header is too large/);
  const data = pax(['path', 'p']);
  const dirty = Buffer.concat([data, Buffer.alloc(512 - data.length, 0x20)]);
  refuses(archive(raw({ name: 'PaxHeader', flag: 'x', size: data.length }), dirty, raw()), /not padded with NULs/);
  refuses(archive(raw({ name: 'PaxHeader', flag: 'x', size: data.length }), body(data)), /extended header has no entry/);
  refuses(archive(raw({ flag: 'L', size: 2 }), body('a\0')), /extended header has no entry/);
});

test('entry types: unknown, sparse and data-bearing non-files are refused', () => {
  for (const flag of ['S', 'D', 'M', 'N', 'V', 'A', 'z', '8', '9']) refuses(archive(raw({ flag })), /unsupported entry type/);
  for (const [flag, type] of [['5', 'Directory'], ['2', 'SymbolicLink'], ['1', 'Link'], ['3', 'CharacterDevice'], ['4', 'BlockDevice'], ['6', 'FIFO']])
    refuses(archive(raw({ flag, size: 1 }), body('x')), new RegExp(`a ${type} entry has data`));
  refuses(archive(raw({ flag: '\0', name: 'd/', size: 1 }), body('x')), /a Directory entry has data/);
});

test('the end of the archive: a zero block ends it, anything after is ignored, and it must be there', () => {
  assert.deepEqual(read(Buffer.concat([raw({ name: 'a' }), Buffer.alloc(512)])).map(e => e.path), ['a']);
  assert.deepEqual(read(Buffer.concat([raw({ name: 'a' }), Buffer.alloc(512), Buffer.from('garbage after the end')])).map(e => e.path), ['a']);
  assert.deepEqual(read(end), []);
  refuses(raw({ name: 'a' }), /ends before its end-of-archive block/);
  refuses(Buffer.alloc(0), /ends before its end-of-archive block/);
  refuses(Buffer.concat([raw({ name: 'a', size: 600 }), Buffer.alloc(600)]), /ends before/);
  refuses(Buffer.concat([raw({ name: 'a', size: 10 }), Buffer.alloc(10)]), /ends before/);
  refuses(Buffer.alloc(100), /ends before/);
});

test('chunking never changes what is read', () => {
  const bytes = tarBytes([{ path: 'a', data: 'x'.repeat(1000) }, { path: 'd/', type: 'Directory' }, { path: 'l'.repeat(200), data: 'long' },
    { path: 'é/ü', data: Buffer.alloc(513, 7) }, { path: 's', type: 'SymbolicLink', linkpath: 'k'.repeat(120) }]);
  const whole = read(bytes);
  for (const step of [1, 7, 511, 512, 513, 4096]) assert.deepEqual(read(bytes, step), whole);
  assert.deepEqual(whole.map(e => [e.path, e.type, e.size]), [['a', 'File', 1000], ['d/', 'Directory', 0], ['l'.repeat(200), 'File', 4],
    ['é/ü', 'File', 513], ['s', 'SymbolicLink', 0]]);
  assert.equal(whole[4].linkpath, 'k'.repeat(120));
});

test('sinks: data then end for each entry; a failure aborts the open one and stops reading', () => {
  const calls = [];
  const parser = new TarParser(entry => entry.path === 'skip' ? undefined
    : { data: chunk => calls.push(['data', entry.path, chunk.length]), end: () => calls.push(['end', entry.path]), abort: () => calls.push(['abort', entry.path]) });
  const bytes = tarBytes([{ path: 'skip', data: 'zzz' }, { path: 'a', data: 'abc' }, { path: 'empty' }, { path: 'b', data: 'x'.repeat(600) }]);
  parser.write(bytes.subarray(0, 512 * 6 + 100));
  assert.deepEqual(calls, [['data', 'a', 3], ['end', 'a'], ['end', 'empty'], ['data', 'b', 100]]);
  parser.abort();
  assert.deepEqual(calls.at(-1), ['abort', 'b']);
  parser.write(bytes.subarray(512 * 6 + 100));
  assert.equal(calls.length, 5, 'nothing is read after abort');
  parser.end();
  // abort with no open entry, and a sink without abort.
  new TarParser(() => undefined).abort();
  const quiet = new TarParser(() => ({ data() {}, end() {} }));
  quiet.write(bytes.subarray(0, 512 * 3 + 1));
  quiet.abort();
  // An exception in onEntry or a sink is the read's error.
  assert.throws(() => new TarParser(() => { throw new Error('no thanks'); }).write(bytes), /no thanks/);
  assert.throws(() => new TarParser(() => ({ data() { throw new Error('disk full'); }, end() {} })).write(bytes), /disk full/);
});

test('parseTar is a pipeline stage; it aborts the open entry when the stream fails', async () => {
  const bytes = tarBytes([{ path: 'a', data: 'abc' }]);
  const seen = [];
  await pipeline(Readable.from([bytes.subarray(0, 100), bytes.subarray(100)]), parseTar(entry => { seen.push(entry.path); }));
  assert.deepEqual(seen, ['a']);
  let aborted = false;
  const long = tarBytes([{ path: 'a', data: 'x'.repeat(100) }]);
  await assert.rejects(pipeline(Readable.from([long.subarray(0, 520)]), parseTar(() => ({ data() {}, end() {}, abort() { aborted = true; } }))), /ends before/);
  assert.ok(aborted);
});

test('files: plain, gzip and zstd are recognised by their first bytes', async t => {
  const dir = scratch(t), bytes = tarBytes([{ path: 'a', data: 'abc' }]);
  const files = { plain: bytes, gz: gzipSync(bytes), zst: zstdCompressSync(bytes) };
  for (const [name, data] of Object.entries(files)) {
    writeFileSync(join(dir, name), data);
    const entries = await listTar(join(dir, name));
    assert.deepEqual(entries.map(e => [e.path, e.data.toString()]), [['a', 'abc']], name);
  }
  assert.deepEqual(decompressorsFor(join(dir, 'plain')), []);
  assert.equal(decompressorsFor(join(dir, 'gz')).length, 1);
  assert.equal(decompressorsFor(join(dir, 'zst')).length, 1);
  for (const [name, data] of [['empty', Buffer.alloc(0)], ['one', Buffer.from([0x1f])], ['gzip-only', Buffer.from([0x1f, 0x8b])], ['zstd-short', Buffer.from([0x28, 0xb5, 0x2f])]]) {
    writeFileSync(join(dir, name), data);
    assert.equal(decompressorsFor(join(dir, name)).length, name === 'gzip-only' ? 1 : 0, name);
  }
  // A zstd magic needs all four bytes: 0x28b52ffd and nothing else.
  writeFileSync(join(dir, 'near'), Buffer.from([0x28, 0xb5, 0x2f, 0xfe]));
  assert.deepEqual(decompressorsFor(join(dir, 'near')), []);
  writeFileSync(join(dir, 'gzip-near'), Buffer.from([0x1f, 0x8c, 0, 0]));
  assert.deepEqual(decompressorsFor(join(dir, 'gzip-near')), []);
  writeFileSync(join(dir, 'gzip-swapped'), Buffer.from([0x8b, 0x1f, 0, 0]));
  assert.deepEqual(decompressorsFor(join(dir, 'gzip-swapped')), []);
  const seen = [];
  await readTar(join(dir, 'gz'), entry => { seen.push(entry.path); });
  assert.deepEqual(seen, ['a']);
});

test('extractTar: files with their modes and times, directories, then links; strip and filter', async t => {
  const dir = scratch(t), out = join(dir, 'out');
  const file = join(dir, 'a.tar');
  writeFileSync(file, tarBytes([
    { path: 'root/', type: 'Directory' }, { path: './root/bin/run', data: '#!', mode: 0o777, mtime: 1000 },
    { path: 'root/data', data: 'data', mode: 0o640, mtime: 2000 },
    { path: 'root/alias', type: 'SymbolicLink', linkpath: 'data' }, { path: 'root/hard', type: 'Link', linkpath: 'root/data' },
    { path: 'root/later/link', type: 'SymbolicLink', linkpath: '../data' },
    { path: 'root/skipped', data: 'no' }, { path: 'root', type: 'Directory' }, { path: 'root/empty/', type: 'Directory' }]));
  await extractTarFile(file, { cwd: out, strip: 1, filter: path => path !== 'root/skipped' });
  assert.equal(readFileSync(join(out, 'bin/run'), 'utf8'), '#!');
  assert.equal(readFileSync(join(out, 'data'), 'utf8'), 'data');
  assert.equal(readFileSync(join(out, 'hard'), 'utf8'), 'data');
  assert.ok(lstatSync(join(out, 'empty')).isDirectory());
  assert.equal(existsSync(join(out, 'skipped')), false);
  assert.equal(statSync(join(out, 'bin/run')).mtimeMs, 1_000_000);
  assert.equal(statSync(join(out, 'data')).mtimeMs, 2_000_000);
  if (posix) {
    assert.equal(statSync(join(out, 'bin/run')).mode & 0o777, 0o755);
    assert.equal(statSync(join(out, 'data')).mode & 0o700, 0o600);
    assert.equal(readlinkSync(join(out, 'alias')), 'data');
    assert.equal(readlinkSync(join(out, 'later/link')), '../data');
    assert.equal(statSync(join(out, 'hard')).ino, statSync(join(out, 'data')).ino);
  }
  // Without strip; a filter sees the entry; links replace earlier entries; files replace files.
  const again = join(dir, 'again'), types = [];
  await extractTarFile(file, { cwd: again, filter: (path, entry) => { types.push(entry.type); return true; } });
  assert.equal(readFileSync(join(again, 'root/data'), 'utf8'), 'data');
  assert.ok(types.includes('SymbolicLink') && types.includes('Link'));
  await extractTarFile(file, { cwd: again });
  assert.equal(readFileSync(join(again, 'root/hard'), 'utf8'), 'data');
  // A file over an existing directory is an error.
  writeFileSync(join(dir, 'clash.tar'), tarBytes([{ path: 'root/data/', type: 'Directory' }]));
  const clash = join(dir, 'clash'); mkdirSync(join(clash, 'x'), { recursive: true });
  writeFileSync(join(dir, 'over.tar'), tarBytes([{ path: 'x', data: 'file' }]));
  await assert.rejects(extractTarFile(join(dir, 'over.tar'), { cwd: clash }), /EISDIR|EEXIST|EPERM/);
});

test('extractTar refuses unsafe paths, escaping links and devices, and closes the open file', async t => {
  const dir = scratch(t);
  let n = 0;
  const attempt = async (entries, options = {}) => {
    const file = join(dir, `t${n++}.tar`);
    writeFileSync(file, Buffer.isBuffer(entries) ? entries : tarBytes(entries));
    return extractTarFile(file, { cwd: join(dir, `o${n}`), ...options });
  };
  for (const path of ['../x', 'a/../../x', '/etc/x', 'a//b', 'a/./b', 'C:/x', 'c:x', 'a\\b', '.', './', ''])
    await assert.rejects(attempt([{ path, data: 'x' }]), /unsafe path/, path);
  await assert.rejects(attempt([{ path: 'a', data: 'x' }, { path: 'h', type: 'Link', linkpath: '../a' }]), /unsafe path/);
  await assert.rejects(attempt([{ path: 's', type: 'SymbolicLink', linkpath: '' }]), /unsafe link/);
  await assert.rejects(attempt([{ path: 'r/a', data: 'x' }, { path: 'r/h', type: 'Link', linkpath: 'r' }], { strip: 1 }), /unsafe hard link/);
  for (const type of ['CharacterDevice', 'BlockDevice', 'FIFO']) await assert.rejects(attempt([{ path: 'dev', type }]), new RegExp(`unsupported entry ${type}`));
  // Only entries left after strip are written; one with nothing left is skipped.
  await attempt([{ path: 'top', type: 'Directory' }, { path: 'top/x', data: 'kept' }], { strip: 1 });
  assert.equal(readFileSync(join(dir, `o${n}`, 'x'), 'utf8'), 'kept');
  await attempt([{ path: 'a/b', data: 'deep' }], { strip: 5 });
  assert.equal(existsSync(join(dir, `o${n}`, 'a')), false);
  if (posix) {
    // A link already in the target cannot redirect a write, and a hard link cannot leave it.
    const outside = join(dir, 'outside'); mkdirSync(outside);
    const target = join(dir, 'target'); mkdirSync(target);
    symlinkSync(outside, join(target, 'escape'));
    writeFileSync(join(dir, 'esc.tar'), tarBytes([{ path: 'escape/x', data: 'x' }]));
    await assert.rejects(extractTarFile(join(dir, 'esc.tar'), { cwd: target }), /leaves the extraction root/);
    assert.equal(existsSync(join(outside, 'x')), false);
    writeFileSync(join(outside, 'secret'), 's');
    writeFileSync(join(dir, 'hl.tar'), tarBytes([{ path: 'h', type: 'Link', linkpath: 'escape/secret' }]));
    await assert.rejects(extractTarFile(join(dir, 'hl.tar'), { cwd: target }), /hard link leaves the extraction root/);
    // A symbolic link to an existing link target is replaced, not followed.
    writeFileSync(join(dir, 'sl.tar'), tarBytes([{ path: 'escape', type: 'SymbolicLink', linkpath: 'elsewhere' }]));
    await extractTarFile(join(dir, 'sl.tar'), { cwd: target });
    assert.equal(readlinkSync(join(target, 'escape')), 'elsewhere');
  }
  // A truncated archive fails, and the file being written is closed (it can be removed on Windows).
  const whole = tarBytes([{ path: 'big', data: 'x'.repeat(5000) }]);
  await assert.rejects(attempt(whole.subarray(0, 512 + 1000)), /ends before/);
  rmSync(join(dir, `o${n}`), { recursive: true });
});

test('fileSink writes a new file and refuses an existing one', async t => {
  const dir = scratch(t);
  const sink = fileSink(join(dir, 'f'), 0o600);
  sink.data(Buffer.from('ab')); sink.data(Buffer.from('c')); sink.end();
  assert.equal(readFileSync(join(dir, 'f'), 'utf8'), 'abc');
  if (posix) assert.equal(statSync(join(dir, 'f')).mode & 0o777, 0o600);
  assert.throws(() => fileSink(join(dir, 'f')), /EEXIST/);
  fileSink(join(dir, 'g')).abort();
  assert.equal(readFileSync(join(dir, 'g'), 'utf8'), '');
  const plain = fileSink(join(dir, 'h')); plain.end();
  if (posix) assert.equal(statSync(join(dir, 'h')).mode & 0o022, 0);
});

test('tarHeader: ustar fields, the prefix split, and pax for what does not fit', () => {
  const h = tarHeader({ path: 'a/b', mode: 0o755, size: 10, mtime: 99, type: 'File' });
  assert.equal(h.length, 512);
  assert.equal(h.toString('latin1', 0, 3), 'a/b');
  assert.equal(h.toString('latin1', 100, 108), '0000755\0');
  assert.equal(h.toString('latin1', 108, 116), '0000000\0');
  assert.equal(h.toString('latin1', 124, 136), '00000000012\0');
  assert.equal(h.toString('latin1', 136, 148), '00000000143\0');
  assert.equal(h.toString('latin1', 156, 157), '0');
  assert.equal(h.toString('latin1', 257, 265), 'ustar\x0000');
  assert.equal(h.toString('latin1', 154, 156), '\0 ');
  // Defaults: a file 0644, a directory 0755, time 0.
  assert.equal(tarHeader({ path: 'f' }).toString('latin1', 100, 108), '0000644\0');
  assert.equal(tarHeader({ path: 'd/', type: 'Directory' }).toString('latin1', 100, 108), '0000755\0');
  assert.equal(tarHeader({ path: 'd/', type: 'Directory' }).toString('latin1', 156, 157), '5');
  assert.equal(tarHeader({ path: 'f', mode: 0o107644 }).toString('latin1', 100, 108), '0007644\0');
  for (const [type, flag] of [['Link', '1'], ['SymbolicLink', '2'], ['CharacterDevice', '3'], ['BlockDevice', '4'], ['FIFO', '6'], ['x', 'x']])
    assert.equal(tarHeader({ path: 'n', type }).toString('latin1', 156, 157), flag);
  assert.throws(() => tarHeader({ path: 'n', type: 'Socket' }), /Unknown tar entry type/);
  assert.throws(() => tarHeader({ path: 'n', type: 7 }), /Unknown tar entry type/);
  // 100 bytes fit the name; 101 split at a slash into prefix and name.
  assert.equal(tarHeader({ path: 'x'.repeat(100) }).length, 512);
  const split = tarHeader({ path: 'd'.repeat(150) + '/' + 'n'.repeat(100) });
  assert.equal(split.length, 512);
  assert.equal(split.toString('latin1', 345, 495), 'd'.repeat(150));
  assert.equal(split.toString('latin1', 0, 100), 'n'.repeat(100));
  const at155 = tarHeader({ path: 'd'.repeat(155) + '/n' });
  assert.equal(at155.length, 512);
  assert.equal(read(Buffer.concat([at155, end]))[0].path, 'd'.repeat(155) + '/n');
  // No slash in the right place, a prefix over 155, a trailing slash only, non-ASCII, long links, huge sizes and times: pax.
  for (const entry of [{ path: 'x'.repeat(101) }, { path: 'd'.repeat(156) + '/n' }, { path: 'd'.repeat(120) + '/' }, { path: 'é' },
    { path: 'n', type: 'SymbolicLink', linkpath: 'l'.repeat(101) }, { path: 'n', type: 'SymbolicLink', linkpath: 'é' },
    { path: 'n', size: 0o77777777777 + 1 }, { path: 'n', mtime: 0o77777777777 + 1 }, { path: 'n', mtime: -5 }])
    assert.equal(tarHeader(entry).length, 1536, JSON.stringify(entry).slice(0, 80));
  assert.equal(tarHeader({ path: 'n', size: 0o77777777777 }).length, 512);
  assert.equal(tarHeader({ path: 'n', mtime: 0o77777777777 }).length, 512);
  assert.equal(tarHeader({ path: 'n', type: 'SymbolicLink', linkpath: 'l'.repeat(100) }).length, 512);
  assert.equal(tarHeader({ path: 'a\x7f' }).length, 1536);
  assert.equal(tarHeader({ path: 'a\x1f' }).length, 1536);
  assert.equal(tarHeader({ path: 'a ~' }).length, 512);
});

test('the writer round-trips through the reader: every name length around the field edges, links, times', () => {
  const entries = [];
  for (const length of [1, 99, 100, 101, 154, 155, 156, 255, 256, 257, 300]) {
    entries.push({ path: 'f'.repeat(length), data: String(length), mode: 0o600, mtime: length });
    entries.push({ path: 'd'.repeat(Math.max(1, length - 50)) + '/' + 'g'.repeat(Math.min(length, 100)), data: 'nested' });
  }
  entries.push({ path: 'ünï/cødé', data: 'utf8' }, { path: 'dir/', type: 'Directory', mode: 0o700 },
    { path: 'lnk', type: 'SymbolicLink', linkpath: 't'.repeat(300) }, { path: 'hard', type: 'Link', linkpath: 'f' },
    { path: 'big-time', mtime: 2 ** 40, data: '' }, { path: 'old', mtime: -100 });
  const back = read(tarBytes(entries));
  assert.deepEqual(back.map(e => [e.path, e.type, e.data, e.linkpath]),
    entries.map(e => [e.path, e.type ?? 'File', e.data === undefined ? '' : Buffer.from(e.data).toString('latin1'), e.linkpath ?? '']));
  assert.deepEqual(back.map(e => e.mode), entries.map(e => e.mode ?? (e.type === 'Directory' ? 0o755 : 0o644)));
  assert.deepEqual(back.map(e => e.mtime), entries.map(e => e.mtime ?? 0));
  // Every pax record length is right, whatever the digits.
  for (const length of [90, 91, 92, 93, 94, 95, 96, 990, 991, 992, 993, 994, 995, 996, 997])
    assert.equal(read(tarBytes([{ path: 'p'.repeat(length) }]))[0].path, 'p'.repeat(length), String(length));
  // A pax header's own size is 0 for an empty record set (never written) and its name is fixed.
  const withPax = tarHeader({ path: 'é' });
  assert.equal(withPax.toString('latin1', 0, 14), '././@PaxHeader');
  assert.equal(withPax.toString('latin1', 156, 157), 'x');
  assert.equal(withPax.toString('latin1', 1024, 1025), '_');
  assert.deepEqual([...tarBytes([]).values()].filter(Boolean), []);
  assert.equal(tarBytes([]).length, 1024);
  assert.equal(tarBytes([{ path: 'a', data: 'x' }]).length, 512 * 4);
  assert.equal(tarBytes([{ path: 'a', data: 'x'.repeat(512) }]).length, 512 * 4);
});

test('packTar streams files from disk and refuses one that changed; directoryEntries lists a tree', async t => {
  const dir = scratch(t), src = join(dir, 'src');
  mkdirSync(join(src, 'tree/sub'), { recursive: true });
  writeFileSync(join(src, 'tree/b'), 'bee'); writeFileSync(join(src, 'tree/a'), 'a'.repeat(700)); writeFileSync(join(src, 'tree/sub/c'), '');
  writeFileSync(join(src, 'top'), 'top');
  if (posix) { symlinkSync('b', join(src, 'tree/link')); chmodSync(join(src, 'tree/b'), 0o750); }
  utimesSync(join(src, 'top'), 1234, 1234);
  const listed = [...directoryEntries(src, ['tree', 'top'])];
  assert.deepEqual(listed.map(e => [e.path, e.type]), [['tree/', 'Directory'], ['tree/a', 'File'], ['tree/b', 'File'],
    ...(posix ? [['tree/link', 'SymbolicLink']] : []), ['tree/sub/', 'Directory'], ['tree/sub/c', 'File'], ['top', 'File']]);
  assert.equal(listed.at(-1).mtime, 1234);
  assert.equal(listed.find(e => e.path === 'tree/a').size, 700);
  if (posix) {
    assert.equal(listed.find(e => e.path === 'tree/link').linkpath, 'b');
    assert.equal(listed.find(e => e.path === 'tree/b').mode, 0o750);
  }
  assert.deepEqual([...directoryEntries(src, ['tree/'], { recurse: false })].map(e => e.path), ['tree/']);
  assert.ok([...directoryEntries(src, ['tree'], { mtime: new Date(5000) })].every(e => e.mtime === 5));
  const fixed = [...directoryEntries(src, ['top'], { mtime: new Date(0) })];
  assert.equal(fixed[0].mtime, 0);
  if (posix) {
    const { execFileSync } = await import('node:child_process');
    try { execFileSync('mkfifo', [join(src, 'fifo')]); } catch { /* no mkfifo */ }
    if (existsSync(join(src, 'fifo'))) assert.throws(() => [...directoryEntries(src, ['fifo'])], /not a file, directory or symbolic link/);
  }
  for (const gzip of [undefined, true, 1]) {
    const file = join(dir, `out-${gzip}.tar`);
    await writeTar(file, directoryEntries(src, ['tree', 'top']), { gzip });
    const bytes = readFileSync(file);
    assert.equal(bytes[0] === 0x1f && bytes[1] === 0x8b, !!gzip);
    const back = await listTar(file);
    assert.deepEqual(back.map(e => e.path), listed.map(e => e.path));
    assert.equal(back.find(e => e.path === 'tree/a').data.toString(), 'a'.repeat(700));
    assert.equal(back.find(e => e.path === 'tree/b').data.toString(), 'bee');
  }
  // Level 9 and level 1 make different (valid) gzip streams of one archive.
  await writeTar(join(dir, 'l1'), directoryEntries(src, ['tree']), { gzip: 1 });
  await writeTar(join(dir, 'l9'), directoryEntries(src, ['tree']), { gzip: 9 });
  assert.ok(gunzipSync(readFileSync(join(dir, 'l1'))).equals(gunzipSync(readFileSync(join(dir, 'l9')))));
  // In-memory and on-disk entries mix; a file whose size changed is refused.
  const chunks = [];
  for await (const chunk of packTar([{ path: 'mem', data: 'm' }, { path: 'disk', file: join(src, 'top'), size: 3 }])) chunks.push(chunk);
  assert.deepEqual(read(Buffer.concat(chunks)).map(e => [e.path, e.data]), [['mem', 'm'], ['disk', 'top']]);
  await assert.rejects(async () => { for await (const _ of packTar([{ path: 'disk', file: join(src, 'top'), size: 4 }])); }, /changed while it was archived/);
  await assert.rejects(async () => { for await (const _ of packTar([{ path: 'disk', file: join(src, 'top'), size: 2 }])); }, /changed while it was archived/);
});

test('the reader agrees with Python\'s tarfile on archives GNU tar writes, when both are installed', async t => {
  const { spawnSync } = await import('node:child_process');
  const python = ['python3', 'python'].find(name => spawnSync(name, ['-c', 'import tarfile'], { stdio: 'ignore' }).status === 0);
  const gnu = spawnSync('tar', ['--version'], { encoding: 'utf8' }).stdout?.includes('GNU tar');
  if (!python || !gnu) { t.skip('needs Python and GNU tar'); return; }
  const dir = scratch(t), src = join(dir, 'src'), deep = 'd'.repeat(120);
  mkdirSync(join(src, deep, deep), { recursive: true });
  writeFileSync(join(src, deep, deep, 'f.txt'), 'hi\n'); writeFileSync(join(src, 'é ü.txt'), 'x'); writeFileSync(join(src, 'empty'), '');
  symlinkSync('é ü.txt', join(src, 'link'));
  const { compare } = await import('./fuzz/targets/tar.mjs');
  for (const format of ['gnu', 'posix', 'oldgnu']) {
    const file = join(dir, `${format}.tar`);
    assert.equal(spawnSync('tar', [`--format=${format}`, '-cf', file, '-C', src, '.']).status, 0);
    const verdict = await compare(readFileSync(file), python);
    assert.equal(verdict.ours, 'accepted', format);
    assert.equal(verdict.same, true, format);
  }
});
