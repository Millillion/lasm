// Translation validation of wasm-ld, second part: relocations
// (docs/TESTING.md#wasm-ld-against-its-map). Every function wasm-ld copied from
// an input object is checked against that object's own body:
//   - every byte outside the object's relocation sites is unchanged;
//   - every relocation site holds a value the map and the module attribute to
//     the symbol the relocation names: a function index whose function carries
//     that symbol (or an import of that name), a table slot holding such a
//     function, a memory address that is the symbol's address in the map plus
//     the addend, a global of that name, a type with the same signature, a
//     table or tag that exists.
// Symbols are resolved as wasm-ld resolves them, by name: a local symbol within
// its own object, --wrap=NAME's references to NAME as __wrap_NAME and to
// __real_NAME as NAME, an undefined weak symbol with no definition as 0. A
// relocation this cannot decide (a name wasm-ld renamed, a symbol the map does
// not list) is counted as unattributed, not as an error; a value that the map
// attributes to a different symbol is an error.
//
// The objects are wasm object files ("linking" and "reloc.*" sections,
// https://github.com/WebAssembly/tool-conventions/blob/main/Linking.md) read
// directly or from ar archives, with the reader below (no LLVM tool).
import { readModule, parseMap } from './wasm-ld-map.mjs';

class Reader {
  constructor(bytes, offset = 0, end = bytes.length) { this.bytes = bytes; this.offset = offset; this.end = end; }
  byte() { if (this.offset >= this.end) throw new Error('unexpected end'); return this.bytes[this.offset++]; }
  ulebBig() { let r = 0n, s = 0n, b; do { b = this.byte(); r |= BigInt(b & 0x7f) << s; s += 7n; } while (b & 0x80); return r; }
  slebBig() { let r = 0n, s = 0n, b; do { b = this.byte(); r |= BigInt(b & 0x7f) << s; s += 7n; } while (b & 0x80); if (b & 0x40) r -= 1n << s; return r; }
  uleb() { return Number(this.ulebBig()); }
  name() { const n = this.uleb(); const t = new TextDecoder().decode(this.bytes.subarray(this.offset, this.offset + n)); this.offset += n; return t; }
}

/** The members of an ar archive (GNU or BSD names): [{ name, start, end }]. */
export function readArchive(bytes) {
  const magic = '!<arch>\n';
  if (new TextDecoder().decode(bytes.subarray(0, 8)) !== magic) throw new Error('not an ar archive');
  const members = [];
  let offset = 8, longNames = null;
  while (offset + 60 <= bytes.length) {
    const header = new TextDecoder('latin1').decode(bytes.subarray(offset, offset + 60));
    let name = header.slice(0, 16).trimEnd();
    const size = Number.parseInt(header.slice(48, 58).trim(), 10);
    let start = offset + 60;
    if (name === '//') longNames = new TextDecoder().decode(bytes.subarray(start, start + size));
    else if (name !== '/' && name !== '/SYM64/' && name !== '__.SYMDEF' && name !== '__.SYMDEF SORTED') {
      let length = size;
      if (/^\/\d+$/.test(name) && longNames !== null) {
        const at = Number(name.slice(1));
        name = longNames.slice(at, longNames.indexOf('\n', at)).replace(/\/$/, '');
      } else if (name.startsWith('#1/')) {
        const n = Number(name.slice(3));
        name = new TextDecoder().decode(bytes.subarray(start, start + n)).replace(/\0+$/, '');
        start += n; length -= n;
      } else name = name.replace(/\/$/, '');
      members.push({ name, start, end: start + length });
    }
    offset += 60 + size + (size % 2);
  }
  return members;
}

// Relocation types (llvm/BinaryFormat/WasmRelocs.def) and their fields.
export const relocTypes = {
  0: ['FUNCTION_INDEX_LEB', 'uleb5', 'function'], 1: ['TABLE_INDEX_SLEB', 'sleb5', 'table'], 2: ['TABLE_INDEX_I32', 'i32', 'table'],
  3: ['MEMORY_ADDR_LEB', 'uleb5', 'memory'], 4: ['MEMORY_ADDR_SLEB', 'sleb5', 'memory'], 5: ['MEMORY_ADDR_I32', 'i32', 'memory'],
  6: ['TYPE_INDEX_LEB', 'uleb5', 'type'], 7: ['GLOBAL_INDEX_LEB', 'uleb5', 'global'], 8: ['FUNCTION_OFFSET_I32', 'i32', 'other'],
  9: ['SECTION_OFFSET_I32', 'i32', 'other'], 10: ['TAG_INDEX_LEB', 'uleb5', 'tag'], 11: ['MEMORY_ADDR_REL_SLEB', 'sleb5', 'other'],
  12: ['TABLE_INDEX_REL_SLEB', 'sleb5', 'other'], 13: ['GLOBAL_INDEX_I32', 'i32', 'global'], 14: ['MEMORY_ADDR_LEB64', 'uleb10', 'memory'],
  15: ['MEMORY_ADDR_SLEB64', 'sleb10', 'memory'], 16: ['MEMORY_ADDR_I64', 'i64', 'memory'], 17: ['MEMORY_ADDR_REL_SLEB64', 'sleb10', 'other'],
  18: ['TABLE_INDEX_SLEB64', 'sleb10', 'table'], 19: ['TABLE_INDEX_I64', 'i64', 'table'], 20: ['TABLE_NUMBER_LEB', 'uleb5', 'tablenumber'],
  21: ['MEMORY_ADDR_TLS_SLEB', 'sleb5', 'tls'], 22: ['FUNCTION_OFFSET_I64', 'i64', 'other'], 23: ['MEMORY_ADDR_LOCREL_I32', 'i32', 'other'],
  24: ['TABLE_INDEX_REL_SLEB64', 'sleb10', 'other'], 25: ['MEMORY_ADDR_TLS_SLEB64', 'sleb10', 'tls'], 26: ['FUNCTION_INDEX_I32', 'i32', 'function'],
};
const hasAddend = new Set([3, 4, 5, 8, 9, 11, 14, 15, 16, 17, 21, 22, 23, 25]);
const width = { uleb5: 5, sleb5: 5, uleb10: 10, sleb10: 10, i32: 4, i64: 8 };

function readValueType(r) {
  const b = r.byte();
  if (b === 0x63 || b === 0x64) return `ref${b === 0x63 ? ' null' : ''} ${r.slebBig()}`;
  return b;
}
function readSignatures(bytes, section) {
  const r = new Reader(bytes, section.contentStart, section.end), types = [];
  for (let n = r.uleb(); n > 0; n--) {
    let form = r.byte();
    if (form === 0x4e) { r.uleb(); form = r.byte(); } // a recursion group of one
    if (form !== 0x60) { types.push(null); continue; } // only function types are compared
    const params = []; for (let k = r.uleb(); k > 0; k--) params.push(readValueType(r));
    const results = []; for (let k = r.uleb(); k > 0; k--) results.push(readValueType(r));
    types.push(JSON.stringify([params, results], (_, v) => typeof v === 'bigint' ? v.toString() : v));
  }
  return types;
}

/** A wasm object file: its functions' bodies, symbols, code relocations and types. */
export function readObject(bytes) {
  const module = readModule(bytes);
  const object = { bytes, module, types: [], imports: { func: [], global: [], table: [], tag: [] }, symbols: [], relocations: [], dataSegments: [] };
  const typeSection = module.sections.find(s => s.id === 1);
  if (typeSection) object.types = readSignatures(bytes, typeSection);
  const importSection = module.sections.find(s => s.id === 2);
  if (importSection) {
    const r = new Reader(bytes, importSection.contentStart, importSection.end);
    for (let n = r.uleb(); n > 0; n--) {
      const mod = r.name(), field = r.name(), kind = r.byte();
      if (kind === 0) object.imports.func.push({ module: mod, field, type: r.uleb() });
      else if (kind === 1) { r.slebBig(); const f = r.byte(); r.ulebBig(); if (f & 1) r.ulebBig(); object.imports.table.push({ module: mod, field }); }
      else if (kind === 2) { const f = r.byte(); r.ulebBig(); if (f & 1) r.ulebBig(); if (f & 8) r.uleb(); }
      else if (kind === 3) { r.byte(); r.byte(); object.imports.global.push({ module: mod, field }); }
      else if (kind === 4) { r.byte(); r.uleb(); object.imports.tag.push({ module: mod, field }); }
    }
  }
  const functionSection = module.sections.find(s => s.id === 3);
  object.functionTypes = [];
  if (functionSection) { const r = new Reader(bytes, functionSection.contentStart, functionSection.end); for (let n = r.uleb(); n > 0; n--) object.functionTypes.push(r.uleb()); }
  const linking = module.sections.find(s => s.custom === 'linking');
  if (!linking) throw new Error('not a relocatable object (no linking section)');
  const r = new Reader(bytes, linking.payload, linking.end);
  r.uleb(); // version
  while (r.offset < linking.end) {
    const type = r.byte(), size = r.uleb(), end = r.offset + size;
    if (type === 8) {
      for (let n = r.uleb(); n > 0; n--) {
        const kind = r.byte(), flags = r.uleb(), symbol = { kind, flags, undefined: !!(flags & 0x10), local: !!(flags & 2), weak: !!(flags & 1), tls: !!(flags & 0x100) };
        if (kind === 0 || kind === 2 || kind === 4 || kind === 5) {
          symbol.index = r.uleb();
          if (!symbol.undefined || flags & 0x40) symbol.name = r.name();
          else {
            const list = kind === 0 ? object.imports.func : kind === 2 ? object.imports.global : kind === 4 ? object.imports.tag : object.imports.table;
            symbol.name = list[symbol.index]?.field;
          }
        } else if (kind === 1) {
          symbol.name = r.name();
          if (!symbol.undefined) { symbol.segment = r.uleb(); symbol.offset = r.ulebBig(); symbol.size = r.ulebBig(); }
        } else if (kind === 3) symbol.section = r.uleb();
        object.symbols.push(symbol);
      }
    }
    r.offset = end;
  }
  const codeIndex = module.sections.findIndex(s => s.id === 10);
  for (const section of module.sections.filter(s => s.custom?.startsWith('reloc.'))) {
    const rr = new Reader(bytes, section.payload, section.end);
    const target = rr.uleb();
    if (target !== codeIndex) continue;
    for (let n = rr.uleb(); n > 0; n--) {
      const type = rr.uleb(), offset = rr.uleb(), index = rr.uleb();
      object.relocations.push({ type, offset, index, addend: hasAddend.has(type) ? rr.slebBig() : 0n });
    }
  }
  object.relocations.sort((a, b) => a.offset - b.offset);
  return object;
}

function readField(bytes, at, kind) {
  const r = new Reader(bytes, at);
  if (kind.startsWith('uleb')) return r.ulebBig();
  if (kind.startsWith('sleb')) return r.slebBig();
  const view = new DataView(bytes.buffer, bytes.byteOffset + at, kind === 'i32' ? 4 : 8);
  return kind === 'i32' ? BigInt(view.getUint32(0, true)) : view.getBigUint64(0, true);
}

// The output's import names, element slots and type signatures.
function outputTables(bytes, module) {
  const result = { funcImports: [], globalImports: [], elem: new Map(), types: [] };
  const importSection = module.sections.find(s => s.id === 2);
  if (importSection) {
    const r = new Reader(bytes, importSection.contentStart, importSection.end);
    for (let n = r.uleb(); n > 0; n--) {
      r.name(); const field = r.name(), kind = r.byte();
      if (kind === 0) { r.uleb(); result.funcImports.push(field); }
      else if (kind === 1) { r.slebBig(); const f = r.byte(); r.ulebBig(); if (f & 1) r.ulebBig(); }
      else if (kind === 2) { const f = r.byte(); r.ulebBig(); if (f & 1) r.ulebBig(); if (f & 8) r.uleb(); }
      else if (kind === 3) { r.byte(); r.byte(); result.globalImports.push(field); }
      else if (kind === 4) { r.byte(); r.uleb(); }
    }
  }
  const typeSection = module.sections.find(s => s.id === 1);
  if (typeSection) result.types = readSignatures(bytes, typeSection);
  result.functionTypes = [];
  const functionSection = module.sections.find(s => s.id === 3);
  if (functionSection) { const r = new Reader(bytes, functionSection.contentStart, functionSection.end); for (let n = r.uleb(); n > 0; n--) result.functionTypes.push(r.uleb()); }
  const elem = module.sections.find(s => s.id === 9);
  if (elem) {
    const r = new Reader(bytes, elem.contentStart, elem.end);
    for (let n = r.uleb(); n > 0; n--) {
      const flags = r.uleb();
      if (flags !== 0 && flags !== 2 && flags !== 4) { result.elemUnread = `element segment flags ${flags}`; break; }
      if (flags === 2) r.uleb();
      // Offset expression: a single i32/i64.const.
      const op = r.byte(); let base = null;
      if (op === 0x41 || op === 0x42) base = r.slebBig(); else { result.elemUnread = `element offset opcode 0x${op.toString(16)}`; break; }
      if (r.byte() !== 0x0b) { result.elemUnread = 'element offset expression'; break; }
      if (flags === 2) r.byte();
      for (let k = 0, count = r.uleb(); k < count; k++) {
        if (flags === 4) { const o = r.byte(); if (o === 0xd2) { result.elem.set(base + BigInt(k), r.uleb()); r.byte(); } else { r.slebBig(); r.byte(); } }
        else result.elem.set(base + BigInt(k), r.uleb());
      }
    }
  }
  return result;
}

const inName = chunk => { const m = /^(.*):\((.*)\)$/.exec(chunk.name); return m ? { file: m[1], name: m[2] } : null; };

/** Checks the relocations of every function the map attributes to an input
 * object. `objectBytes(file)` returns the bytes of a map input file (an object
 * path, or `archive(member)`), or null when it is not available. */
export function checkRelocations(bytes, mapText, { objectBytes, wraps = [], maxProblems = 200 } = {}) {
  const problems = [];
  const problem = text => { if (problems.length < maxProblems) problems.push(text); else if (problems.length === maxProblems) problems.push('… more problems not listed'); };
  const stats = { functions: 0, functionsMissingInput: 0, relocations: 0, attributed: 0, unattributed: 0, byKind: {} };
  const module = readModule(bytes), map = parseMap(mapText), out = outputTables(bytes, module);
  if (out.elemUnread) problem(`element section: ${out.elemUnread}`);
  const code = map.sections.find(s => s.kind === 'CODE'), data = map.sections.find(s => s.kind === 'DATA');
  const globals = map.sections.find(s => s.kind === 'GLOBAL')?.globals ?? [];
  const wrapped = new Set(wraps);
  const countOf = id => { const section = module.sections.find(x => x.id === id); return section ? new Reader(bytes, section.contentStart, section.end).uleb() : 0; };
  const tables = module.imports.table + countOf(4), tags = module.imports.tag + countOf(13);
  // Function index -> its map chunk; symbol name -> function indices; per file.
  const functionAt = new Map(), functionsNamed = new Map(), dataNamed = new Map();
  const push = (map, key, value) => (map.get(key) ?? map.set(key, []).get(key)).push(value);
  (code?.functions ?? []).forEach((f, i) => {
    const index = module.imports.func + i, from = inName(f);
    functionAt.set(index, { chunk: f, file: from?.file });
    for (const s of f.symbols) push(functionsNamed, s.name, { index, file: from?.file });
  });
  for (const segment of data?.segments ?? []) for (const c of segment.chunks) {
    const tls = /^\.t(data|bss)/.test(segment.name), file = inName(c)?.file;
    for (const s of c.symbols) push(dataNamed, s.name, { address: s.address, tls, file });
  }
  const globalNamed = new Map(globals.map(g => [g.name, Number(g.address)]));
  const objects = new Map();
  const objectOf = file => {
    if (!objects.has(file)) {
      let object = null;
      try { const b = objectBytes(file); object = b ? readObject(b) : null; } catch (error) { object = { error: error.message }; }
      objects.set(file, object);
    }
    return objects.get(file);
  };
  const resolvedName = symbol => {
    if (!symbol.undefined) return symbol.name;
    if (wrapped.has(symbol.name)) return `__wrap_${symbol.name}`;
    if (symbol.name?.startsWith('__real_') && wrapped.has(symbol.name.slice(7))) return symbol.name.slice(7);
    return symbol.name;
  };
  const decide = (kind, ok, text) => {
    stats.byKind[kind] ??= { attributed: 0, unattributed: 0, wrong: 0 };
    if (ok === true) { stats.attributed++; stats.byKind[kind].attributed++; }
    else if (ok === false) { stats.byKind[kind].wrong++; problem(text); }
    else { stats.unattributed++; stats.byKind[kind].unattributed++; }
  };

  (code?.functions ?? []).forEach((f, i) => {
    const from = inName(f);
    if (!from || from.file === '<internal>' || from.file.startsWith('<')) return;
    const object = objectOf(from.file);
    if (!object) { stats.functionsMissingInput++; return; }
    if (object.error) { problem(`${from.file}: ${object.error}`); return; }
    // The object's function of that name (defined function symbols).
    const candidates = object.symbols.filter(s => s.kind === 0 && !s.undefined && s.name === from.name);
    const indices = [...new Set(candidates.map(s => s.index))];
    if (indices.length !== 1) { stats.functionsMissingInput++; return; }
    const local = indices[0] - object.imports.func.length, body = object.module.code?.bodies[local];
    const outBody = module.code.bodies[i];
    if (!body || !outBody) { problem(`function ${f.name}: no body ${local} in its object`); return; }
    stats.functions++;
    const base = object.module.code.section.contentStart, inStart = body.start, inEnd = body.end;
    const relocs = object.relocations.filter(r => base + r.offset >= inStart && base + r.offset < inEnd);
    if (inEnd - inStart !== outBody.end - outBody.start) { problem(`function ${f.name}: ${outBody.end - outBody.start} bytes, its input ${inEnd - inStart}`); return; }
    const delta = outBody.start - inStart;
    let cursor = inStart;
    const where = r => `function ${f.name} at +${base + r.offset - inStart} (${relocTypes[r.type]?.[0] ?? r.type})`;
    for (const r of relocs) {
      const at = base + r.offset, [typeName, field, kind] = relocTypes[r.type] ?? [String(r.type), null, 'unknown'];
      if (!field) { problem(`${where(r)}: unknown relocation type`); continue; }
      for (let p = cursor; p < at; p++) if (bytes[p + delta] !== objectBytesAt(object, p)) { problem(`function ${f.name}: byte +${p - inStart} changed outside any relocation`); break; }
      cursor = at + width[field];
      stats.relocations++;
      const value = readField(bytes, at + delta, field);
      const symbol = kind === 'type' ? null : object.symbols[r.index];
      if (kind !== 'type' && !symbol) { problem(`${where(r)}: symbol ${r.index} does not exist`); continue; }
      const name = symbol && resolvedName(symbol);
      const sameFile = entries => (symbol.local ? entries.filter(e => e.file === from.file) : entries);
      if (kind === 'function' || kind === 'table') {
        let index = value;
        if (kind === 'table') {
          if (value === 0n && symbol.undefined && symbol.weak) { decide(typeName, true); continue; }
          if (!out.elem.has(value)) { decide(typeName, false, `${where(r)}: table slot ${value} holds no function`); continue; }
          index = BigInt(out.elem.get(value));
        }
        const n = Number(index);
        const defined = functionAt.get(n);
        if (defined) {
          const named = sameFile(functionsNamed.get(name) ?? []);
          if ((defined.chunk.symbols.some(s => s.name === name) || inName(defined.chunk)?.name === name) && (!symbol.local || defined.file === from.file)) decide(typeName, true);
          else if (named.length) decide(typeName, false, `${where(r)}: function ${n} (${defined.chunk.name}), the map defines ${name} as function ${named.map(e => e.index).join(', ')}`);
          else decide(typeName, null);
        } else if (n < module.imports.func) decide(typeName, out.funcImports[n] === name ? true : (functionsNamed.has(name) ? false : null),
          `${where(r)}: import ${n} (${out.funcImports[n]}), the map defines ${name}`);
        else decide(typeName, false, `${where(r)}: function ${n} does not exist`);
      } else if (kind === 'memory' || kind === 'tls') {
        const entries = sameFile(dataNamed.get(name) ?? []).filter(e => e.tls === (kind === 'tls'));
        const want = BigInt.asUintN(64, value) , matches = entries.some(e => BigInt.asUintN(64, e.address + r.addend) === want);
        if (matches) decide(typeName, true);
        else if (symbol.undefined && symbol.weak && !entries.length && BigInt.asUintN(64, r.addend) === want) decide(typeName, true);
        else if (entries.length) decide(typeName, false, `${where(r)}: address ${value}, the map puts ${name}${r.addend ? ` + ${r.addend}` : ''} at ${entries.map(e => e.address + r.addend).join(', ')}`);
        else decide(typeName, null);
      } else if (kind === 'global') {
        const n = Number(value);
        if (globalNamed.has(name)) decide(typeName, globalNamed.get(name) === n, `${where(r)}: global ${n}, the map gives ${name} index ${globalNamed.get(name)}`);
        else if (n < out.globalImports.length) decide(typeName, out.globalImports[n] === name ? true : null);
        else decide(typeName, null);
      } else if (kind === 'type') {
        const want = object.types[r.index], got = out.types[Number(value)];
        decide(typeName, want !== undefined && got === want, `${where(r)}: type ${value} ${got}, the object's type ${r.index} is ${want}`);
      } else if (kind === 'tablenumber') decide(typeName, Number(value) < tables, `${where(r)}: table ${value}, the module has ${tables}`);
      else if (kind === 'tag') decide(typeName, Number(value) < tags, `${where(r)}: tag ${value}, the module has ${tags}`);
      else decide(typeName, null);
    }
    for (let p = cursor; p < inEnd; p++) if (bytes[p + delta] !== objectBytesAt(object, p)) { problem(`function ${f.name}: byte +${p - inStart} changed outside any relocation`); break; }
  });
  return { problems, stats };
}
const objectBytesAt = (object, p) => object.bytes[p];

/** objectBytes for checkRelocations: a map input `archive(member)` read from
 * the archive, an object from `copies` (original path -> copied file) or its path. */
export function inputReader(readFile, copies = {}) {
  const archives = new Map();
  return file => {
    const member = /^(.*\.a)\(([^()]+)\)$/.exec(file);
    if (member) {
      const [, archive, name] = member;
      if (!archives.has(archive)) {
        let entry = null;
        try { const bytes = readFile(archive); entry = { bytes, members: readArchive(bytes) }; } catch { entry = null; }
        archives.set(archive, entry);
      }
      const entry = archives.get(archive);
      if (!entry) return null;
      const found = entry.members.filter(m => m.name === name);
      // Two members of one name: which one wasm-ld took is not in the map.
      return found.length === 1 ? entry.bytes.subarray(found[0].start, found[0].end) : null;
    }
    try { return readFile(copies[file] ?? file); } catch { return null; }
  };
}
