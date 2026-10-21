// Minimal reader for relocatable Wasm objects (the LLVM "linking" ABI,
// https://github.com/WebAssembly/tool-conventions/blob/main/Linking.md) and the
// ar archives that hold them. It reports, per defined function, the symbols its
// code references in order. Lasm uses it only for Lean module initializers;
// linking decisions are always confirmed by wasm-ld itself.
import { readFileSync } from 'node:fs';

const decoder = new TextDecoder('utf-8');

class Reader {
  constructor(bytes, offset = 0, end = bytes.length) { this.bytes = bytes; this.offset = offset; this.end = end; }
  byte() { if (this.offset >= this.end) throw new Error('Truncated Wasm object'); return this.bytes[this.offset++]; }
  u32() {
    let result = 0, shift = 0, byte;
    do { byte = this.byte(); result += (byte & 0x7f) * 2 ** shift; shift += 7; } while (byte & 0x80);
    return result;
  }
  // Addends only need to be skipped; keep them as approximate numbers.
  s64() { let byte; do byte = this.byte(); while (byte & 0x80); return 0; }
  string() { const length = this.u32(); const value = decoder.decode(this.bytes.subarray(this.offset, this.offset + length)); this.offset += length; return value; }
  skip(count) { this.offset += count; if (this.offset > this.end) throw new Error('Truncated Wasm object'); }
  limits() { const flags = this.u32(); this.u32(); if (flags & 1) this.u32(); }
}

const relocationsWithAddend = new Set([3, 4, 5, 8, 9, 11, 14, 15, 16, 17, 21, 22, 23, 25]);
const SYMBOL_UNDEFINED = 0x10, SYMBOL_EXPLICIT_NAME = 0x40, SYMBOL_BINDING_LOCAL = 0x2;

/** Parse one relocatable Wasm object. Returns its symbols and, for each defined
 * function symbol, the ordered list of symbol indices its body references. */
export function parseWasmObject(bytes) {
  if (bytes.length < 8 || bytes[0] !== 0 || bytes[1] !== 0x61 || bytes[2] !== 0x73 || bytes[3] !== 0x6d)
    throw new Error('Not a Wasm object');
  const reader = new Reader(bytes, 8);
  const functionImports = [], globalImports = [], tableImports = [], tagImports = [];
  let codeStart = -1, bodies = [], symbols = [], codeSection = -1, sectionIndex = 0;
  const relocations = [];
  while (reader.offset < reader.end) {
    const id = reader.byte(), size = reader.u32(), start = reader.offset, end = start + size;
    const section = new Reader(bytes, start, end);
    if (id === 2) {
      for (let count = section.u32(); count > 0; count--) {
        section.string(); const field = section.string(); const kind = section.byte();
        if (kind === 0) { section.u32(); functionImports.push(field); }
        else if (kind === 1) { section.byte(); section.limits(); tableImports.push(field); }
        else if (kind === 2) section.limits();
        else if (kind === 3) { section.byte(); section.byte(); globalImports.push(field); }
        else if (kind === 4) { section.byte(); section.u32(); tagImports.push(field); }
        else throw new Error('Unknown Wasm import kind');
      }
    } else if (id === 10) {
      codeSection = sectionIndex; codeStart = start;
      for (let count = section.u32(); count > 0; count--) {
        const length = section.u32(); bodies.push([section.offset - start, section.offset - start + length]); section.skip(length);
      }
    } else if (id === 0) {
      const name = section.string();
      if (name === 'linking') {
        if (section.u32() !== 2) throw new Error('Unsupported Wasm linking metadata version');
        while (section.offset < end) {
          const type = section.byte(), length = section.u32(), next = section.offset + length;
          if (type === 8) {
            for (let count = section.u32(); count > 0; count--) {
              const kind = section.byte(), flags = section.u32();
              const symbol = { kind, flags, undefined: !!(flags & SYMBOL_UNDEFINED), local: !!(flags & SYMBOL_BINDING_LOCAL) };
              if (kind === 1) {
                symbol.name = section.string();
                if (!symbol.undefined) { section.u32(); section.u32(); section.u32(); }
              } else if (kind === 3) { symbol.index = section.u32(); symbol.name = ''; }
              else {
                symbol.index = section.u32();
                if (!symbol.undefined || flags & SYMBOL_EXPLICIT_NAME) symbol.name = section.string();
                else symbol.name = (kind === 0 ? functionImports : kind === 2 ? globalImports : kind === 4 ? tagImports : tableImports)[symbol.index] ?? '';
              }
              symbols.push(symbol);
            }
          }
          section.offset = next;
        }
      } else if (name.startsWith('reloc.')) {
        const target = section.u32();
        const entries = [];
        for (let count = section.u32(); count > 0; count--) {
          const type = section.byte(), offset = section.u32(), index = section.u32();
          if (relocationsWithAddend.has(type)) section.s64();
          entries.push([offset, index]);
        }
        relocations.push({ target, entries });
      }
    }
    reader.offset = end; sectionIndex++;
  }
  const references = new Map();
  const code = relocations.find(item => item.target === codeSection);
  if (code && codeStart >= 0) {
    // Defined function symbols map to code bodies after the imported functions.
    const bodyOf = new Map();
    symbols.forEach((symbol, index) => {
      if (symbol.kind === 0 && !symbol.undefined && symbol.index >= functionImports.length) bodyOf.set(symbol.index - functionImports.length, index);
    });
    const sorted = [...code.entries].sort((a, b) => a[0] - b[0]);
    let body = 0;
    for (const [offset, index] of sorted) {
      while (body < bodies.length && bodies[body][1] <= offset) body++;
      if (body >= bodies.length) break;
      const owner = bodyOf.get(body);
      if (owner === undefined) continue;
      if (!references.has(owner)) references.set(owner, []);
      references.get(owner).push(index);
    }
  }
  return { symbols, references };
}

/** Members of a GNU or BSD ar archive, as [name, bytes] pairs (symbol tables skipped). */
export function* archiveMembers(bytes) {
  if (decoder.decode(bytes.subarray(0, 8)) !== '!<arch>\n') throw new Error('Not an ar archive');
  let offset = 8, longNames = '';
  while (offset + 60 <= bytes.length) {
    const header = decoder.decode(bytes.subarray(offset, offset + 60));
    let name = header.slice(0, 16).trimEnd();
    const size = Number(header.slice(48, 58).trim());
    let data = bytes.subarray(offset + 60, offset + 60 + size);
    offset += 60 + size + (size % 2);
    if (name === '/' || name === '/SYM64/' || name === '__.SYMDEF' || name === '__.SYMDEF SORTED') continue;
    if (name === '//') { longNames = decoder.decode(data); continue; }
    if (/^\/\d+$/.test(name)) { const start = Number(name.slice(1)); name = longNames.slice(start, longNames.indexOf('\n', start)); }
    else if (name.startsWith('#1/')) {
      const length = Number(name.slice(3)); name = decoder.decode(data.subarray(0, length)).replace(/\0+$/, ''); data = data.subarray(length);
    }
    yield [name.replace(/\/$/, ''), data];
  }
}

/** Every relocatable Wasm object in the given object and archive files. */
export function* wasmObjects(files) {
  for (const file of files) {
    const bytes = readFileSync(file);
    if (decoder.decode(bytes.subarray(0, 8)) === '!<arch>\n') {
      for (const [name, data] of archiveMembers(bytes))
        if (data[0] === 0 && data[1] === 0x61) yield { file, member: name, object: parseWasmObject(data) };
    } else yield { file, member: null, object: parseWasmObject(bytes) };
  }
}
