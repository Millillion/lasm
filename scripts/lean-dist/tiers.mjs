// Pure helpers for the tiered Lean distribution: member classification,
// native import inspection and a deterministic tar/zstd writer. The product
// installer never imports this file; it consumes the published archives.
import { createReadStream } from 'node:fs';
import { createHash } from 'node:crypto';
import { Readable, Writable } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { createZstdCompress, constants } from 'node:zlib';

/** Module data Lean reads while importing, and the sources Lasm resolves. */
export const moduleDataPattern = /\.(?:olean|olean\.private|olean\.server|ir|ir\.sig)$/;

/** Data split. Every piece stays well below the ~150 MB package ceiling. */
export const dataLayout = Object.freeze({
  core: Object.freeze([
    Object.freeze({ piece: 'core-init', prefixes: Object.freeze(['Init']) }),
    Object.freeze({ piece: 'core-std', prefixes: Object.freeze(['Std']) }),
  ]),
  extended: Object.freeze([
    Object.freeze({ piece: 'ext-meta', prefixes: Object.freeze(['Lean.Meta']) }),
    Object.freeze({ piece: 'ext-elab', prefixes: Object.freeze(['Lean.Elab']) }),
    // Everything else: the remaining Lean modules, Lake, LakeMain, LeanIR, LeanChecker.
    Object.freeze({ piece: 'ext-rest', prefixes: Object.freeze([]) }),
  ]),
  // leanc's own module is only used by the excluded leanc driver. It is also
  // the one module whose data differs between upstream platform archives.
  excludedRoots: Object.freeze(['Leanc']),
});
export const dataPieces = [...dataLayout.core, ...dataLayout.extended].map(entry => entry.piece);
export const coreModuleRoots = Object.freeze(dataLayout.core.flatMap(entry => entry.prefixes));

/** Module name of a module-data or Lean source member, or null. */
export function moduleOf(path) {
  let rest;
  if (path.startsWith('lib/lean/')) {
    rest = path.slice('lib/lean/'.length);
    if (!moduleDataPattern.test(rest)) return null;
    rest = rest.replace(moduleDataPattern, '');
  } else if (path.startsWith('src/lean/')) {
    rest = path.slice('src/lean/'.length);
    if (!rest.endsWith('.lean')) return null;
    rest = rest.slice(0, -'.lean'.length);
    // Lake's sources are installed under src/lean/lake, its own search root.
    if (rest.startsWith('lake/')) rest = rest.slice('lake/'.length);
  } else return null;
  // Data file names keep their dots (e.g. Init.olean.private already removed).
  if (!rest || rest.split('/').some(part => !part || part === '.' || part === '..')) return null;
  return rest.split('/').join('.');
}

const within = (module, prefix) => module === prefix || module.startsWith(prefix + '.');

/** The data piece holding a member, null for non-data, or 'excluded'. */
export function dataPieceOf(path, layout = dataLayout) {
  const module = moduleOf(path);
  if (module === null) return null;
  const root = module.split('.')[0];
  if (layout.excludedRoots.includes(root)) return 'excluded';
  for (const entry of [...layout.core, ...layout.extended])
    if (entry.prefixes.some(prefix => within(module, prefix))) return entry.piece;
  return layout.extended.find(entry => !entry.prefixes.length).piece;
}

export function platformFamily(platform) {
  const family = platform.split('-')[0];
  if (!['linux', 'darwin', 'win32'].includes(family)) throw new Error(`Unsupported Lean platform ${platform}`);
  return family;
}

/** Executables Lasm runs, and the Lake plugin it loads with --plugin. */
export function binaryRoots(platform) {
  const family = platformFamily(platform);
  if (family === 'win32') return ['bin/lean.exe', 'bin/lake.exe', 'bin/leanir.exe', 'bin/cadical.exe', 'bin/libLake_shared.dll'];
  const library = family === 'darwin' ? 'dylib' : 'so';
  return ['bin/lean', 'bin/lake', 'bin/leanir', 'bin/cadical', `lib/lean/libLake_shared.${library}`];
}

/** Archive members worth staging before the import closure is known. */
export function binaryCandidate(path, platform) {
  const family = platformFamily(platform);
  if (['LICENSE', 'LICENSES'].includes(path)) return true;
  if (path === 'lib/libuv.a') return true; // only read for its version string
  if (family === 'win32') return /^bin\/[^/]+$/.test(path);
  return /^bin\/[^/]+$/.test(path) || /^lib\/(?:lean\/)?[^/]+\.(?:so|dylib)(?:\.[0-9.]+)?$/.test(path);
}

const cString = (bytes, offset) => {
  if (offset < 0 || offset >= bytes.length) throw new Error('Native import string is outside the file');
  const end = bytes.indexOf(0, offset);
  if (end < 0) throw new Error('Unterminated native import string');
  return bytes.toString('latin1', offset, end);
};

function elfImports(bytes) {
  if (bytes[4] !== 2 || bytes[5] !== 1) throw new Error('Only 64-bit little-endian ELF files are supported');
  const phoff = Number(bytes.readBigUInt64LE(0x20)), phentsize = bytes.readUInt16LE(0x36), phnum = bytes.readUInt16LE(0x38);
  const segments = [];
  for (let i = 0; i < phnum; i++) {
    const at = phoff + i * phentsize;
    segments.push({ type: bytes.readUInt32LE(at), offset: Number(bytes.readBigUInt64LE(at + 8)),
      vaddr: Number(bytes.readBigUInt64LE(at + 0x10)), filesz: Number(bytes.readBigUInt64LE(at + 0x20)) });
  }
  const dynamic = segments.find(segment => segment.type === 2);
  if (!dynamic) return { needed: [], runpath: [] };
  const entries = [];
  let strtab;
  for (let at = dynamic.offset; at + 16 <= dynamic.offset + dynamic.filesz; at += 16) {
    const tag = Number(bytes.readBigInt64LE(at)), value = Number(bytes.readBigUInt64LE(at + 8));
    if (tag === 0) break;
    if (tag === 5) strtab = value; else entries.push([tag, value]);
  }
  const load = segments.find(segment => segment.type === 1 && strtab >= segment.vaddr && strtab < segment.vaddr + segment.filesz);
  if (strtab === undefined || !load) throw new Error('ELF dynamic string table is not mapped');
  const base = strtab - load.vaddr + load.offset;
  const strings = tag => entries.filter(entry => entry[0] === tag).map(entry => cString(bytes, base + entry[1]));
  return { needed: strings(1), runpath: [...strings(15), ...strings(29)] };
}

function machoImports(bytes) {
  const magic = bytes.readUInt32BE(0);
  if (magic === 0xcafebabe) {
    const needed = new Set();
    for (let i = 0, count = bytes.readUInt32BE(4); i < count; i++) {
      const at = 8 + i * 20, offset = bytes.readUInt32BE(at + 8), size = bytes.readUInt32BE(at + 12);
      for (const name of machoImports(bytes.subarray(offset, offset + size)).needed) needed.add(name);
    }
    return { needed: [...needed].sort(), runpath: [] };
  }
  if (bytes.readUInt32LE(0) !== 0xfeedfacf) throw new Error('Only 64-bit Mach-O files are supported');
  const count = bytes.readUInt32LE(16), needed = [], runpath = [];
  for (let i = 0, at = 32; i < count; i++) {
    const command = bytes.readUInt32LE(at), size = bytes.readUInt32LE(at + 4);
    if ([0xc, 0x20, 0x80000018, 0x8000001f, 0x80000023].includes(command)) needed.push(cString(bytes, at + bytes.readUInt32LE(at + 8)));
    if (command === 0x8000001c) runpath.push(cString(bytes, at + bytes.readUInt32LE(at + 8)));
    if (size < 8) throw new Error('Malformed Mach-O load command');
    at += size;
  }
  return { needed, runpath };
}

function peImports(bytes) {
  const pe = bytes.readUInt32LE(0x3c);
  if (bytes.toString('latin1', pe, pe + 4) !== 'PE\0\0') throw new Error('Malformed PE file');
  const sections = bytes.readUInt16LE(pe + 6), optionalSize = bytes.readUInt16LE(pe + 20), optional = pe + 24;
  const magic = bytes.readUInt16LE(optional);
  const directories = optional + (magic === 0x20b ? 112 : magic === 0x10b ? 96 : NaN);
  if (Number.isNaN(directories)) throw new Error('Unsupported PE optional header');
  const imageBase = magic === 0x20b ? Number(bytes.readBigUInt64LE(optional + 24)) : bytes.readUInt32LE(optional + 28);
  const table = [];
  for (let i = 0, at = optional + optionalSize; i < sections; i++, at += 40)
    table.push({ size: Math.max(bytes.readUInt32LE(at + 8), bytes.readUInt32LE(at + 16)),
      address: bytes.readUInt32LE(at + 12), raw: bytes.readUInt32LE(at + 20) });
  const offset = rva => {
    const section = table.find(entry => rva >= entry.address && rva < entry.address + entry.size);
    if (!section) throw new Error('PE address is outside every section');
    return rva - section.address + section.raw;
  };
  const directory = index => ({ rva: bytes.readUInt32LE(directories + index * 8), size: bytes.readUInt32LE(directories + index * 8 + 4) });
  const needed = [];
  const imports = directory(1);
  if (imports.rva) for (let at = offset(imports.rva); ; at += 20) {
    const name = bytes.readUInt32LE(at + 12);
    if (!name && !bytes.readUInt32LE(at) && !bytes.readUInt32LE(at + 16)) break;
    needed.push(cString(bytes, offset(name)));
  }
  const delayed = directory(13);
  if (delayed.rva) for (let at = offset(delayed.rva); ; at += 32) {
    const attributes = bytes.readUInt32LE(at), name = bytes.readUInt32LE(at + 4);
    if (!name) break;
    needed.push(cString(bytes, offset(attributes & 1 ? name : name - imageBase)));
  }
  return { needed, runpath: [] };
}

/** Shared libraries named by an executable or library's own load commands. */
export function nativeImports(bytes, platform) {
  const family = platformFamily(platform);
  if (family === 'linux') {
    if (bytes.readUInt32BE(0) !== 0x7f454c46) throw new Error('Expected an ELF file');
    return elfImports(bytes);
  }
  if (family === 'darwin') return machoImports(bytes);
  if (bytes.toString('latin1', 0, 2) !== 'MZ') throw new Error('Expected a PE file');
  return peImports(bytes);
}

/** Map a load-command name to an archive member, or null for an OS library. */
export function resolveImport(name, platform, has) {
  const family = platformFamily(platform);
  if (family === 'win32') {
    const lower = name.toLowerCase();
    return has.find(member => member.toLowerCase() === 'bin/' + lower) ?? null;
  }
  if (family === 'darwin') {
    if (!/^@(?:rpath|loader_path|executable_path)\//.test(name)) return null;
    name = name.slice(name.lastIndexOf('/') + 1);
  }
  if (name.includes('/')) return null;
  for (const directory of ['lib/lean/', 'lib/']) if (has.includes(directory + name)) return directory + name;
  return null;
}

/** Deterministic tar stream: sorted members, fixed owners, mtime and modes. */
export const fixedMtime = 946684800; // 2000-01-01T00:00:00Z

function octal(value, width) {
  const text = value.toString(8);
  if (text.length > width - 1) throw new Error('Tar numeric field overflow');
  return text.padStart(width - 1, '0') + '\0';
}

function splitUstar(name) {
  const bytes = Buffer.byteLength(name);
  if (bytes <= 100) return { name, prefix: '' };
  for (let i = name.length - 1; i > 0; i--) {
    if (name[i] !== '/') continue;
    const prefix = name.slice(0, i), rest = name.slice(i + 1);
    if (Buffer.byteLength(prefix) <= 155 && Buffer.byteLength(rest) <= 100 && rest) return { name: rest, prefix };
  }
  return null;
}

function header({ name, mode, size = 0, type, linkname = '' }) {
  const block = Buffer.alloc(512);
  const split = splitUstar(name);
  if (!split) throw new Error('Name requires an extended header');
  block.write(split.name, 0, 100, 'utf8');
  block.write(octal(mode, 8), 100, 'ascii');
  block.write(octal(0, 8), 108, 'ascii');
  block.write(octal(0, 8), 116, 'ascii');
  block.write(octal(size, 12), 124, 'ascii');
  block.write(octal(fixedMtime, 12), 136, 'ascii');
  block.fill(0x20, 148, 156);
  block.write(type, 156, 1, 'ascii');
  block.write(linkname, 157, 100, 'utf8');
  block.write('ustar\0', 257, 'ascii');
  block.write('00', 263, 'ascii');
  block.write(octal(0, 8), 329, 'ascii');
  block.write(octal(0, 8), 337, 'ascii');
  block.write(split.prefix, 345, 155, 'utf8');
  let sum = 0;
  for (const byte of block) sum += byte;
  block.write(sum.toString(8).padStart(6, '0') + '\0 ', 148, 'ascii');
  return block;
}

const padding = size => Buffer.alloc((512 - size % 512) % 512);

function paxRecord(key, value) {
  const body = ` ${key}=${value}\n`;
  let length = Buffer.byteLength(body);
  for (;;) {
    const total = String(length).length + Buffer.byteLength(body);
    if (total === length) break;
    length = total;
  }
  return length + body;
}

/** Validates members, adds missing parent directories and sorts by UTF-8 bytes. */
export function normalizeMembers(root, members) {
  if (!/^[a-zA-Z0-9][a-zA-Z0-9._-]*$/.test(root)) throw new Error(`Invalid archive root ${root}`);
  const all = new Map();
  for (const member of members) {
    const parts = member.path.split('/');
    if (!member.path || parts.some(part => !part || part === '.' || part === '..') || /[\\\0]/.test(member.path))
      throw new Error(`Unsafe archive member ${member.path}`);
    if (all.has(member.path)) throw new Error(`Duplicate archive member ${member.path}`);
    if (!['file', 'symlink', 'directory'].includes(member.type)) throw new Error(`Unsupported member type ${member.type}`);
    if (member.type === 'symlink' && (!member.target || member.target.startsWith('/') || /[\\\0]/.test(member.target)))
      throw new Error(`Unsafe symlink ${member.path}`);
    all.set(member.path, member);
    for (let i = 1; i < parts.length; i++) {
      const parent = parts.slice(0, i).join('/');
      if (!all.has(parent)) all.set(parent, { path: parent, type: 'directory' });
      else if (all.get(parent).type !== 'directory') throw new Error(`Archive member ${parent} is not a directory`);
    }
  }
  const sorted = [{ path: '', type: 'directory' }, ...[...all.values()].sort((a, b) => Buffer.compare(Buffer.from(a.path), Buffer.from(b.path)))];
  return sorted.map(member => ({ ...member, archivePath: member.path ? root + '/' + member.path : root }));
}

async function* tarBlocks(root, members, open) {
  for (const member of normalizeMembers(root, members)) {
    const name = member.archivePath + (member.type === 'directory' ? '/' : '');
    const type = member.type === 'directory' ? '5' : member.type === 'symlink' ? '2' : '0';
    const mode = member.type === 'file' ? (member.executable ? 0o755 : 0o644) : member.type === 'symlink' ? 0o777 : 0o755;
    const linkname = member.target ?? '';
    const size = member.type === 'file' ? member.size : 0;
    if (!splitUstar(name) || Buffer.byteLength(linkname) > 100) {
      const records = Buffer.from((splitUstar(name) ? '' : paxRecord('path', name))
        + (Buffer.byteLength(linkname) > 100 ? paxRecord('linkpath', linkname) : ''));
      yield header({ name: 'PaxHeaders/' + createHash('sha256').update(name).digest('hex').slice(0, 32), mode: 0o644, size: records.length, type: 'x' });
      yield records; yield padding(records.length);
    }
    const short = splitUstar(name) ? name : 'PaxHeaders/long/' + createHash('sha256').update(name).digest('hex');
    yield header({ name: short, mode, size, type, linkname: Buffer.byteLength(linkname) > 100 ? '' : linkname });
    if (member.type === 'file') {
      let seen = 0;
      for await (const chunk of open(member)) { seen += chunk.length; yield chunk; }
      if (seen !== size) throw new Error(`Archive member changed while packing: ${member.path}`);
      yield padding(size);
    }
  }
  yield Buffer.alloc(1024);
}

/** zstd parameters. A 2^27 window is Node's default decompression limit. */
export function zstdParameters({ level = 19, windowLog = 27, long = true } = {}) {
  return {
    [constants.ZSTD_c_compressionLevel]: level,
    [constants.ZSTD_c_windowLog]: windowLog,
    [constants.ZSTD_c_enableLongDistanceMatching]: long ? 1 : 0,
    [constants.ZSTD_c_checksumFlag]: 1,
    [constants.ZSTD_c_nbWorkers]: 0,
  };
}

/** Writes a deterministic tar.zst to `sink`; returns sizes and SHA-256. */
export async function packArchive(root, members, { sink, open = member => createReadStream(member.source), zstd } = {}) {
  const hash = createHash('sha256');
  let bytes = 0, tarBytes = 0;
  const counter = async function* (source) { for await (const chunk of source) { tarBytes += chunk.length; yield chunk; } };
  const measure = async function* (source) {
    for await (const chunk of source) { hash.update(chunk); bytes += chunk.length; yield chunk; }
  };
  const destination = sink ?? new Writable({ write(chunk, encoding, done) { done(); } });
  await pipeline(Readable.from(tarBlocks(root, members, open)), counter,
    createZstdCompress({ params: zstdParameters(zstd) }), measure, destination);
  return { sha256: hash.digest('hex'), bytes, tarBytes };
}
