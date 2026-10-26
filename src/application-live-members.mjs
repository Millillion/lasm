// Dev-profile fast link (docs/BENCHMARKS.md "Edit loop"). wasm-ld extracts
// archive members by symbol name before applying --wrap, so every link loads
// nearly all of Lean's library members (about 3,000) and then garbage-collects
// them: about 1.1 s per link. A dev rebuild instead links only the runtime
// members whose code or data the previous full link kept, as plain objects.
// The result is accepted only when its imports are a subset of that full
// link's: a symbol the edit newly needs from an omitted member would surface as
// a new import, and the build then links in full again.
import { closeSync, existsSync, mkdirSync, openSync, readFileSync, readSync, renameSync, writeFileSync } from 'node:fs';
import { basename, join } from 'node:path';

const latin1 = new TextDecoder('latin1');
const indexCache = new Map();

/** The ar symbol index of `archive`: symbol → member header offset; and member offset → name. */
export function archiveIndex(archive) {
  if (indexCache.has(archive)) return indexCache.get(archive);
  const fd = openSync(archive, 'r');
  try {
    const read = (position, length) => { const buffer = Buffer.alloc(length); readSync(fd, buffer, 0, length, position); return buffer; };
    if (latin1.decode(read(0, 8)) !== '!<arch>\n') throw new Error(`Not an ar archive: ${archive}`);
    const header = latin1.decode(read(8, 60)), name = header.slice(0, 16).trimEnd(), size = Number(header.slice(48, 58).trim());
    if (name !== '/' && name !== '/SYM64/') throw new Error(`No symbol index in ${archive}`);
    const data = read(68, size), width = name === '/' ? 4 : 8;
    const count = width === 4 ? data.readUInt32BE(0) : Number(data.readBigUInt64BE(0));
    const offsets = Array.from({ length: count }, (_, i) => width === 4 ? data.readUInt32BE(width + i * width) : Number(data.readBigUInt64BE(width + i * width)));
    const symbols = new Map();
    let at = width + count * width;
    for (let i = 0; i < count; i++) { const end = data.indexOf(0, at); symbols.set(latin1.decode(data.subarray(at, end)), offsets[i]); at = end + 1; }
    // Member names (for sections the index cannot attribute): walk the headers.
    const names = new Map();
    let position = 68 + size + (size % 2), longNames = '';
    for (;;) {
      const raw = read(position, 60);
      if (raw.length < 60 || raw[58] !== 0x60) break;
      const text = latin1.decode(raw);
      let member = text.slice(0, 16).trimEnd();
      const length = Number(text.slice(48, 58).trim());
      if (!Number.isFinite(length)) break;
      if (member === '//') longNames = latin1.decode(read(position + 60, length));
      else if (member !== '/' && member !== '/SYM64/') {
        if (/^\/\d+$/.test(member)) { const start = Number(member.slice(1)); member = longNames.slice(start, longNames.indexOf('\n', start)); }
        names.set(position, member.replace(/\/$/, ''));
      }
      position += 60 + length + (length % 2);
    }
    const result = { symbols, names };
    indexCache.set(archive, result);
    return result;
  } finally { closeSync(fd); }
}

/** Runtime members with live sections in a wasm-ld map: { archive: [offsets] }. */
export function liveMembers(mapText, archives) {
  const wanted = new Map(archives.map(archive => [archive, new Set()]));
  const unattributed = new Map();
  let region = '';
  for (const line of mapText.split('\n')) {
    const row = /^\s*(?:[0-9a-f]+|-)\s+[0-9a-f]+\s+[0-9a-f]+( +)(\S.*)$/.exec(line);
    if (!row) continue;
    const text = row[2];
    if (row[1].length === 1) { if (/^[A-Z]+(?:\(|$)/.test(text)) region = text.replace(/\(.*$/, ''); continue; }
    const match = /^(.*\.a)\(([^)]+)\):\((.+)\)$/.exec(text);
    if (!match || !wanted.has(match[1])) continue;
    const [, archive, member, section] = match;
    const { symbols, names } = archiveIndex(archive);
    const symbol = region === 'CODE' ? section : section.replace(/^\.(?:rodata|data|bss|tdata|tbss|data\.rel\.ro)\./, '');
    const offset = symbols.get(symbol);
    if (offset !== undefined && names.get(offset) === member) wanted.get(archive).add(offset);
    else { const key = archive + '\0' + member; if (!unattributed.has(key)) unattributed.set(key, { archive, member }); }
  }
  // Ambiguous member names (several Basic.o): every member of that name.
  for (const { archive, member } of unattributed.values())
    for (const [offset, name] of archiveIndex(archive).names) if (name === member) wanted.get(archive).add(offset);
  return Object.fromEntries([...wanted].map(([archive, offsets]) => [archive, [...offsets].sort((a, b) => a - b)]));
}

/** The member objects as files, extracted once per runtime into `directory`. */
export function memberFiles(members, directory) {
  mkdirSync(directory, { recursive: true });
  const files = [];
  for (const [archive, offsets] of Object.entries(members)) {
    let fd;
    try {
      for (const offset of offsets) {
        const file = join(directory, `${basename(archive, '.a')}-${offset}.lasm-member.o`);
        files.push(file);
        if (existsSync(file)) continue;
        fd ??= openSync(archive, 'r');
        const header = Buffer.alloc(60); readSync(fd, header, 0, 60, offset);
        const size = Number(latin1.decode(header).slice(48, 58).trim());
        const data = Buffer.alloc(size); readSync(fd, data, 0, size, offset + 60);
        const partial = `${file}.${process.pid}.partial`;
        writeFileSync(partial, data); renameSync(partial, file);
      }
    } finally { if (fd !== undefined) closeSync(fd); }
  }
  return files;
}

/** The module/name pairs a Wasm program imports, or undefined if this runtime cannot read it. */
export function wasmImports(file) {
  try { return WebAssembly.Module.imports(new WebAssembly.Module(readFileSync(file))).map(({ module, name, kind }) => `${module}\0${name}\0${kind}`).sort(); }
  catch { return undefined; }
}

export const isMemberFile = file => file.endsWith('.lasm-member.o');
