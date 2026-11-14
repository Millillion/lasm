// Lasm's tar reader and writer: exactly the archive features Lasm reads and
// writes, in place of the `tar` npm package (docs/proposals/IRREDUCIBLE.md,
// item 14). Fuzzed against Python's tarfile (test/fuzz/targets/tar.mjs).
//
// Reading: POSIX ustar headers (the 155-byte prefix only under the `ustar\0`
// magic), pax extended headers (`path`, `linkpath`, `size`, `mtime`; a global
// header may carry none of the first three, and is otherwise ignored), GNU long names and
// link names (`L`, `K`), base-256 numbers, signed or unsigned checksums.
// Entries are regular files (`0`, `\0`, `7`), directories, symbolic links, hard
// links, devices and FIFOs; the last three are reported for callers to refuse.
// Everything else is refused: a bad checksum, an unknown entry type, a sparse
// file, data on an entry that cannot have any, a name that is not UTF-8, a pax
// record that does not parse or is empty, an extended header not padded with NULs, an archive that ends before its end-of-archive
// block. Where several extended headers name one field, the first wins, as in
// Python's tarfile.
//
// Writing: ustar, with a pax header for a path or link that does not fit (or is
// not ASCII), and a size or time too large for its field.
import { closeSync, createReadStream, createWriteStream, futimesSync, linkSync, lstatSync, mkdirSync, openSync, readdirSync,
  readlinkSync, readSync, realpathSync, symlinkSync, unlinkSync, writeSync } from 'node:fs';
import { dirname, join, posix, relative, isAbsolute, resolve, sep } from 'node:path';
import { Readable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { createGunzip, createGzip, createZstdDecompress } from 'node:zlib';

const block = 512;
const maximumMetaBytes = 1024 * 1024;
const utf8 = new TextDecoder('utf-8', { fatal: true });
const types = { '0': 'File', '\0': 'File', '7': 'File', '1': 'Link', '2': 'SymbolicLink', '3': 'CharacterDevice',
  '4': 'BlockDevice', '5': 'Directory', '6': 'FIFO' };
const flags = { File: '0', Link: '1', SymbolicLink: '2', CharacterDevice: '3', BlockDevice: '4', Directory: '5', FIFO: '6' };
const paxFields = ['path', 'linkpath', 'size', 'mtime'];

const fail = message => { throw Object.assign(new Error(`Invalid tar archive: ${message}`), { code: 'LASM_TAR_INVALID' }); };

function text(bytes) {
  const end = bytes.indexOf(0);
  try { return utf8.decode(end < 0 ? bytes : bytes.subarray(0, end)); } catch { return fail('a name is not UTF-8'); }
}

/** A numeric header field: octal digits between spaces (NUL-terminated), or base-256. */
function number(bytes, what) {
  if (bytes[0] === 0x80) {
    let value = 0;
    for (const byte of bytes.subarray(1)) value = value * 256 + byte;
    if (!Number.isSafeInteger(value)) fail(`${what} is too large`);
    return value;
  }
  if (bytes[0] === 0xff) fail(`${what} is negative`);
  const end = bytes.indexOf(0), field = String.fromCharCode(...(end < 0 ? bytes : bytes.subarray(0, end)));
  if (!/^ *[0-7]* *$/.test(field)) fail(`${what} is not a number`);
  const digits = field.trim();
  return digits ? parseInt(digits, 8) : 0;
}

function checksumMatches(header) {
  const stored = number(header.subarray(148, 156), 'the checksum');
  let unsigned = 0, signed = 0;
  for (let i = 0; i < block; i++) {
    const byte = i >= 148 && i < 156 ? 0x20 : header[i];
    unsigned += byte; signed += byte > 127 ? byte - 256 : byte;
  }
  return stored === unsigned || stored === signed;
}

/** pax records: "<length> <key>=<value>\n", covering the data exactly. */
function paxRecords(data) {
  const records = new Map();
  let at = 0;
  while (at < data.length) {
    const space = data.indexOf(0x20, at);
    if (space < 0 || space === at || space - at > 20) fail('a pax record has no length');
    const digits = data.toString('latin1', at, space);
    if (!/^[1-9][0-9]*$/.test(digits)) fail('a pax record length is not a number');
    const end = at + Number(digits);
    if (end > data.length || end <= space + 1 || data[end - 1] !== 0x0a) fail('a pax record has a wrong length');
    const record = data.subarray(space + 1, end - 1), equals = record.indexOf(0x3d);
    if (equals <= 0) fail('a pax record has no key');
    let key, value;
    try { key = utf8.decode(record.subarray(0, equals)); value = utf8.decode(record.subarray(equals + 1)); } catch { fail('a pax record is not UTF-8'); }
    records.set(key, value);
    at = end;
  }
  for (const key of records.keys()) if (key.startsWith('GNU.sparse.') || key === 'hdrcharset') fail(`unsupported pax record ${key}`);
  return records;
}

function paxNumber(value, what) {
  if (!/^[0-9]+$/.test(value) || !Number.isSafeInteger(Number(value))) fail(`pax ${what} is not a number`);
  return Number(value);
}

/** An incremental tar reader. `onEntry(entry)` gets each entry ({ path, type,
 * mode, size, mtime (seconds), linkpath, uid, gid }) and may return a sink
 * ({ data(chunk), end(), abort() }) for its bytes; errors it throws end the
 * read. Feed it with `write(bytes)` and finish with `end()`, which throws when
 * the archive was incomplete; after a failure, `abort()` tells the open sink. */
export class TarParser {
  #onEntry; #header = Buffer.alloc(block); #headerBytes = 0;
  #remaining = 0; #padding = 0; #sink = null; #meta = null; #pending = {}; #done = false;

  constructor(onEntry) { this.#onEntry = onEntry; }

  write(chunk) {
    let at = 0;
    while (at < chunk.length && !this.#done) {
      if (this.#remaining > 0) {
        const piece = chunk.subarray(at, at + Math.min(this.#remaining, chunk.length - at));
        at += piece.length; this.#remaining -= piece.length;
        if (this.#meta) this.#meta.chunks.push(piece);
        else this.#sink?.data(piece);
        if (this.#remaining === 0) this.#finishData();
      } else if (this.#padding > 0) {
        const skip = Math.min(this.#padding, chunk.length - at);
        at += skip; this.#padding -= skip;
      } else {
        const take = Math.min(block - this.#headerBytes, chunk.length - at);
        chunk.copy(this.#header, this.#headerBytes, at, at + take);
        at += take; this.#headerBytes += take;
        if (this.#headerBytes === block) { this.#headerBytes = 0; this.#readHeader(); }
      }
    }
  }

  end() {
    if (!this.#done) fail('the archive ends before its end-of-archive block');
  }

  abort() {
    const sink = this.#sink;
    this.#sink = null; this.#done = true;
    sink?.abort?.();
  }

  #readHeader() {
    const header = this.#header;
    if (header.every(byte => byte === 0)) {
      if (Object.keys(this.#pending).length) fail('an extended header has no entry');
      this.#done = true; return;
    }
    if (!checksumMatches(header)) fail('a header checksum does not match');
    const flag = String.fromCharCode(header[156]);
    const size = number(header.subarray(124, 136), 'a size');
    if (flag === 'x' || flag === 'g' || flag === 'L' || flag === 'K') {
      if (size > maximumMetaBytes) fail('an extended header is too large');
      // The padding is read with the data, and must be NULs.
      this.#meta = { flag, size, chunks: [] };
      this.#remaining = size + (block - size % block) % block;
      if (this.#remaining === 0) this.#finishData();
      return;
    }
    let type = types[flag];
    if (!type) fail(`unsupported entry type ${JSON.stringify(flag)}`);
    const name = text(header.subarray(0, 100));
    if (flag === '\0' && name.endsWith('/')) type = 'Directory';
    const ustar = header.toString('latin1', 257, 263) === 'ustar\0';
    const prefix = ustar ? text(header.subarray(345, 500)) : '';
    const pending = this.#pending;
    this.#pending = {};
    for (const at of [329, 337]) number(header.subarray(at, at + 8), 'a device number');
    const entry = {
      path: pending.path ?? (prefix ? `${prefix}/${name}` : name),
      type,
      mode: number(header.subarray(100, 108), 'a mode') & 0o7777,
      uid: number(header.subarray(108, 116), 'a uid'),
      gid: number(header.subarray(116, 124), 'a gid'),
      size: pending.size ?? size,
      mtime: pending.mtime ?? number(header.subarray(136, 148), 'a time'),
      linkpath: pending.linkpath ?? text(header.subarray(157, 257)),
    };
    if (type !== 'File' && entry.size !== 0) fail(`a ${type} entry has data`);
    this.#sink = this.#onEntry(entry) ?? null;
    this.#remaining = entry.size; this.#padding = (block - entry.size % block) % block;
    if (entry.size === 0) this.#finishData();
  }

  #finishData() {
    if (!this.#meta) { const sink = this.#sink; this.#sink = null; sink?.end(); return; }
    const { flag, size, chunks } = this.#meta, all = Buffer.concat(chunks), data = all.subarray(0, size);
    this.#meta = null;
    if (!all.subarray(size).every(byte => byte === 0)) fail('an extended header is not padded with NULs');
    const set = (key, value) => { if (!(key in this.#pending)) this.#pending[key] = value; };
    if (flag === 'L' || flag === 'K') {
      if (data.length === 0 || data[data.length - 1] !== 0) fail('a GNU long name is not NUL-terminated');
      set(flag === 'L' ? 'path' : 'linkpath', text(data));
      return;
    }
    const records = paxRecords(data);
    if (flag === 'g') {
      for (const key of ['path', 'linkpath', 'size']) if (records.has(key)) fail(`a global pax header sets ${key}`);
      return;
    }
    for (const key of paxFields) {
      const value = records.get(key);
      if (value === undefined) continue;
      if (value === '') fail(`pax ${key} is empty`);
      if (key === 'path' || key === 'linkpath') { if (value.includes('\0')) fail(`pax ${key} holds NUL`); set(key, value); }
      else if (key === 'mtime') { if (!/^-?[0-9]+(\.[0-9]*)?$/.test(value)) fail('pax mtime is not a number'); set(key, Math.floor(Number(value))); }
      else set(key, paxNumber(value, key));
    }
  }
}

/** A sink (for TarParser's onEntry) writing an entry's bytes to a new file, synchronously. */
export function fileSink(path, mode = 0o644) {
  const fd = openSync(path, 'wx', mode);
  return { data: chunk => writeSync(fd, chunk), end: () => closeSync(fd), abort: () => closeSync(fd) };
}

/** A pipeline stage reading a tar stream (already decompressed) with `onEntry`. */
export function parseTar(onEntry) {
  return async function (chunks) { await feed(new TarParser(onEntry), chunks); };
}

async function feed(parser, chunks) {
  try {
    for await (const chunk of chunks) parser.write(chunk);
    parser.end();
  } catch (error) { parser.abort(); throw error; }
}

/** The decompressors a tar file needs, from its first bytes: gzip, zstd or none. */
export function decompressorsFor(file) {
  const head = Buffer.alloc(4), fd = openSync(file, 'r');
  let length;
  try { length = readSync(fd, head, 0, 4, 0); } finally { closeSync(fd); }
  if (length >= 2 && head[0] === 0x1f && head[1] === 0x8b) return [createGunzip()];
  if (length === 4 && head.readUInt32LE(0) === 0xfd2fb528) return [createZstdDecompress()];
  return [];
}

/** Reads a tar, tar.gz or tar.zst file with `onEntry` (see TarParser). */
export async function readTar(file, onEntry) {
  await pipeline(createReadStream(file), ...decompressorsFor(file), parseTar(onEntry));
}

/** Every entry of a tar file (any compression), with its bytes as `data`. */
export async function listTar(file) {
  const entries = [];
  await readTar(file, entry => {
    const chunks = [];
    entries.push(entry);
    return { data: chunk => chunks.push(chunk), end: () => { entry.data = Buffer.concat(chunks); } };
  });
  return entries;
}

const inside = (root, path) => { const rel = relative(root, path); return rel === '' || (!rel.startsWith('..') && !isAbsolute(rel)); };

/** A pipeline stage extracting a tar stream under `cwd`: regular files (their
 * modes, less group and other write, and times), directories, then symbolic
 * and hard links once every file is written, so no link can redirect a write.
 * `filter(path, entry)` picks entries by their archive path; `strip` drops
 * leading components. Absolute paths, `..`, hard links leaving `cwd`, writes
 * through a link already in `cwd`, and devices are refused. */
export function extractTar({ cwd, strip = 0, filter = () => true }) {
  return async function (chunks) {
    mkdirSync(cwd, { recursive: true });
    const root = realpathSync(cwd), checked = new Set([root]), links = [];
    const directory = path => {
      if (checked.has(path)) return;
      mkdirSync(path, { recursive: true });
      if (!inside(root, realpathSync(path))) fail(`a directory leaves the extraction root: ${path}`);
      checked.add(path);
    };
    const target = name => {
      const parts = name.replace(/^(\.\/)+/, '').replace(/\/+$/, '').split('/');
      if (!parts.every(part => part && part !== '.' && part !== '..' && !part.includes('\\')) || /^[A-Za-z]:/.test(parts[0])) fail(`unsafe path ${JSON.stringify(name)}`);
      const kept = parts.slice(strip);
      return kept.length ? join(root, ...kept) : null;
    };
    const parser = new TarParser(entry => {
      if (!filter(entry.path, entry)) return;
      const path = target(entry.path);
      if (!path) return;
      if (entry.type === 'Directory') { directory(path); return; }
      if (entry.type === 'SymbolicLink' || entry.type === 'Link') { links.push({ ...entry, target: path }); return; }
      if (entry.type !== 'File') fail(`unsupported entry ${entry.type}: ${entry.path}`);
      directory(dirname(path));
      let fd;
      try { fd = openSync(path, 'wx', entry.mode & 0o755 | 0o600); }
      catch (error) {
        if (error.code !== 'EEXIST' || lstatSync(path).isDirectory()) throw error;
        unlinkSync(path); fd = openSync(path, 'wx', entry.mode & 0o755 | 0o600);
      }
      return {
        data: chunk => writeSync(fd, chunk),
        end: () => { try { futimesSync(fd, entry.mtime, entry.mtime); } finally { closeSync(fd); } },
        abort: () => closeSync(fd),
      };
    });
    await feed(parser, chunks);
    const replace = path => { try { if (!lstatSync(path).isDirectory()) unlinkSync(path); } catch (error) { if (error.code !== 'ENOENT') throw error; } };
    for (const entry of links.filter(entry => entry.type === 'SymbolicLink')) {
      directory(dirname(entry.target));
      if (entry.linkpath.includes('\0') || !entry.linkpath) fail(`unsafe link ${entry.path}`);
      replace(entry.target);
      symlinkSync(entry.linkpath, entry.target);
    }
    for (const entry of links.filter(entry => entry.type === 'Link')) {
      const source = target(entry.linkpath);
      if (!source) fail(`unsafe hard link ${entry.path}`);
      directory(dirname(entry.target));
      if (!inside(root, realpathSync(source))) fail(`a hard link leaves the extraction root: ${entry.path}`);
      replace(entry.target);
      linkSync(source, entry.target);
    }
  };
}

/** Extracts a tar, tar.gz or tar.zst file (see extractTar). */
export async function extractTarFile(file, options) {
  await pipeline(createReadStream(file), ...decompressorsFor(file), extractTar(options));
}

// Writing.

function field(buffer, offset, length, value) {
  const digits = Math.trunc(value).toString(8);
  if (digits.length > length - 1) return false;
  buffer.write(digits.padStart(length - 1, '0') + '\0', offset, length, 'latin1');
  return true;
}

/** ustar name and prefix for a path, or null when it needs a pax header. */
function split(path) {
  const bytes = Buffer.from(path);
  if (bytes.length !== path.length || /[^\x20-\x7e]/.test(path)) return null;
  if (bytes.length <= 100) return { name: path, prefix: '' };
  for (let at = path.indexOf('/'); at >= 0; at = path.indexOf('/', at + 1)) {
    if (at <= 155 && path.length - at - 1 <= 100 && path.length - at - 1 > 0) return { name: path.slice(at + 1), prefix: path.slice(0, at) };
  }
  return null;
}

function rawHeader({ name, prefix = '', flag, mode = 0, size = 0, mtime = 0, linkpath = '' }) {
  const header = Buffer.alloc(block);
  header.write(name, 0, 100, 'utf8');
  field(header, 100, 8, mode); field(header, 108, 8, 0); field(header, 116, 8, 0);
  field(header, 124, 12, size); field(header, 136, 12, mtime);
  header.write(flag, 156, 1, 'latin1');
  header.write(linkpath, 157, 100, 'utf8');
  header.write('ustar\x0000', 257, 8, 'latin1');
  header.write(prefix, 345, 155, 'utf8');
  header.fill(0x20, 148, 156);
  let sum = 0;
  for (const byte of header) sum += byte;
  header.write(sum.toString(8).padStart(6, '0') + '\0 ', 148, 8, 'latin1');
  return header;
}

const padding = size => Buffer.alloc((block - size % block) % block);

/** The header blocks (with a pax header when needed) for one entry: { path
 * (a directory's ends with "/"), type (TarParser's names), mode, size, mtime
 * (seconds), linkpath }. */
export function tarHeader({ path, type = 'File', mode = type === 'Directory' ? 0o755 : 0o644, size = 0, mtime = 0, linkpath = '' }) {
  const flag = flags[type] ?? type;
  if (typeof flag !== 'string' || flag.length !== 1) throw new TypeError(`Unknown tar entry type ${type}`);
  const pax = [];
  const name = path;
  let parts = split(name);
  if (!parts) { pax.push(['path', name]); parts = { name: Buffer.from(name).subarray(0, 100).toString('latin1').replace(/[^\x20-\x7e]/g, '_'), prefix: '' }; }
  let link = linkpath;
  if (link && (Buffer.byteLength(link) > 100 || /[^\x20-\x7e]/.test(link))) { pax.push(['linkpath', link]); link = ''; }
  if (size > 0o77777777777) pax.push(['size', String(size)]);
  if (mtime > 0o77777777777 || mtime < 0) pax.push(['mtime', String(Math.trunc(mtime))]);
  const main = rawHeader({ ...parts, flag, mode: mode & 0o7777, size: size > 0o77777777777 ? 0 : size,
    mtime: mtime > 0o77777777777 || mtime < 0 ? 0 : mtime, linkpath: link });
  if (!pax.length) return main;
  const data = Buffer.concat(pax.map(([key, value]) => {
    const body = ` ${key}=${value}\n`, bytes = Buffer.byteLength(body);
    let length = bytes + String(bytes).length;
    if (String(length).length !== String(bytes).length) length++;
    return Buffer.from(length + body);
  }));
  return Buffer.concat([rawHeader({ name: '././@PaxHeader', flag: 'x', mode: 0o644, size: data.length }), data, padding(data.length), main]);
}

const endBlocks = () => Buffer.alloc(2 * block);

/** A whole tar archive, in memory, from entries with their bytes as `data`. */
export function tarBytes(entries) {
  const parts = [];
  for (const entry of entries) {
    const data = entry.data === undefined ? Buffer.alloc(0) : Buffer.from(entry.data);
    parts.push(tarHeader({ ...entry, size: data.length }), data, padding(data.length));
  }
  parts.push(endBlocks());
  return Buffer.concat(parts);
}

/** A tar stream, from entries whose bytes are `data` or the file at `file`. */
export async function* packTar(entries) {
  for await (const entry of entries) {
    if (entry.file === undefined) { yield tarBytes([entry]).subarray(0, -2 * block); continue; }
    yield tarHeader(entry);
    let written = 0;
    for await (const chunk of createReadStream(entry.file)) { written += chunk.length; yield chunk; }
    if (written !== entry.size) throw new Error(`${entry.file} changed while it was archived`);
    yield padding(entry.size);
  }
  yield endBlocks();
}

/** Entries for `names` under `cwd` (directories with their contents, sorted,
 * unless `recurse` is false): regular files, directories and symbolic links,
 * with their modes and times (or `mtime`, a Date, for all). */
export function* directoryEntries(cwd, names, { recurse = true, mtime } = {}) {
  for (const name of names) {
    const file = join(cwd, ...name.split(/[\\/]/)), info = lstatSync(file);
    const path = name.split(sep).join('/').replace(/\/+$/, '');
    const time = Math.floor((mtime ?? info.mtime).getTime() / 1000), mode = info.mode & 0o7777;
    if (info.isDirectory()) {
      yield { path: path + '/', type: 'Directory', mode, mtime: time };
      if (recurse) yield* directoryEntries(cwd, readdirSync(file).sort().map(child => posix.join(path, child)), { recurse, mtime });
    } else if (info.isSymbolicLink()) yield { path, type: 'SymbolicLink', mode, mtime: time, linkpath: readlinkSync(file) };
    else if (info.isFile()) yield { path, type: 'File', mode, mtime: time, size: info.size, file };
    else throw new Error(`Cannot archive ${file}: not a file, directory or symbolic link`);
  }
}

/** Writes a tar (or, with `gzip`: true or a level, tar.gz) file from entries. */
export async function writeTar(file, entries, { gzip } = {}) {
  const stages = gzip ? [createGzip(gzip === true ? {} : { level: gzip })] : [];
  await pipeline(Readable.from(packTar(entries)), ...stages, createWriteStream(resolve(file)));
}
