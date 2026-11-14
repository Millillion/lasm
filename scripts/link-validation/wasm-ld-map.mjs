// Translation validation of wasm-ld (ROADMAP M5, docs/proposals/IRREDUCIBLE.md §5):
// a linked module checked against the map wasm-ld wrote for it (-Map=FILE).
//
// wasm-ld is trusted to link; this checks, from the two outputs alone, that what
// it says it did is what the module holds:
//   - sections: the map's sections are the module's, in order, at the stated
//     file offsets and sizes; no section the map does not list, and no custom
//     section outside the expected set;
//   - code: one map entry per defined function, in index order, each at its
//     stated offset with its stated size (its size field and body), the entries
//     contiguous from the section's count to its end; each function symbol on
//     its function's offset and size; the name section, when present, names
//     each function as the map does;
//   - data: every output segment the module carries is a data segment at the
//     stated offset with the stated size; its address is the map's (an active
//     segment's offset expression, or the memory.init that __wasm_init_memory
//     runs for a passive one); zero-filled segments (.bss) are not in the file
//     and are the memory.fill of __wasm_init_memory when there is one; input
//     chunks lie inside their segment, in order, without overlap, at the file
//     offset their address implies; data symbols inside their chunk; segments
//     do not overlap each other and fit the initial memory;
//   - globals: each map global's index exists, appears once and, with a name
//     section, carries the map's name;
//   - symbols: an export whose name is a map symbol (a function or a global)
//     refers to the function or global that symbol is defined on.
// Relocation values (that each relocation site holds the index or address of
// the symbol it names) need the input objects; they are the next slice
// (docs/TESTING.md#wasm-ld-against-its-map).
//
// The map's quirk, modelled here: wasm-ld 24 prints a function's or a data
// chunk's offset as its output section's offset plus its offset in the section's
// body, without the section header (the id and the size field) in between
// (lld/wasm/MapFile.cpp). Section rows are the header's own file offset and the
// section's whole size. The file offset of a chunk is therefore the map's plus
// the length of its section's header.
//
// This reader is independent of src/link-driver/wasm.mjs on purpose: the
// checker should not share a bug with the code it checks.

const MAGIC = [0x00, 0x61, 0x73, 0x6d, 0x01, 0x00, 0x00, 0x00];
export const sectionNames = ['CUSTOM', 'TYPE', 'IMPORT', 'FUNCTION', 'TABLE', 'MEMORY', 'GLOBAL', 'EXPORT', 'START',
  'ELEM', 'CODE', 'DATA', 'DATACOUNT', 'TAG'];
const sectionIds = Object.fromEntries(sectionNames.map((name, id) => [name, id]));
// The custom sections a Lasm link may carry: wasm-ld's own (name, producers,
// target_features) and Emscripten's dylink.0 (a MAIN_MODULE). DWARF (.debug_*)
// only when the link keeps debug information (Lasm links pass --strip-debug).
export const defaultCustomSections = Object.freeze(['name', 'producers', 'target_features', 'dylink.0']);

class Reader {
  constructor(bytes, offset = 0, end = bytes.length) { this.bytes = bytes; this.offset = offset; this.end = end; }
  byte() {
    if (this.offset >= this.end) throw new Error(`unexpected end at 0x${this.offset.toString(16)}`);
    return this.bytes[this.offset++];
  }
  // LEB128 as BigInt (64-bit addresses and constants), then narrowed where safe.
  ulebBig() {
    let result = 0n, shift = 0n, byte;
    do { byte = this.byte(); result |= BigInt(byte & 0x7f) << shift; shift += 7n; } while (byte & 0x80);
    return result;
  }
  slebBig() {
    let result = 0n, shift = 0n, byte;
    do { byte = this.byte(); result |= BigInt(byte & 0x7f) << shift; shift += 7n; } while (byte & 0x80);
    if (byte & 0x40) result -= 1n << shift;
    return result;
  }
  uleb() {
    const value = this.ulebBig();
    if (value > BigInt(Number.MAX_SAFE_INTEGER)) throw new Error(`LEB128 value too large at 0x${this.offset.toString(16)}`);
    return Number(value);
  }
  name() {
    const length = this.uleb();
    if (this.offset + length > this.end) throw new Error('name past the end');
    const text = new TextDecoder('utf-8', { fatal: true }).decode(this.bytes.subarray(this.offset, this.offset + length));
    this.offset += length;
    return text;
  }
  limits() {
    const flags = this.byte(), min = this.ulebBig();
    const max = flags & 1 ? this.ulebBig() : null;
    // Custom page sizes (flag 0x08) carry a page-size exponent.
    const pageLog2 = flags & 0x08 ? this.uleb() : 16;
    return { flags, min, max, shared: !!(flags & 2), memory64: !!(flags & 4), pageLog2 };
  }
}

function lebLength(bytes, offset) {
  let length = 0;
  while (bytes[offset + length] & 0x80) length++;
  return length + 1;
}

// A constant expression: its value when it is a single i32/i64.const, else null.
function constExpr(r) {
  const values = [];
  let constant = true;
  for (;;) {
    const op = r.byte();
    if (op === 0x0b) break;
    if (op === 0x41 || op === 0x42) values.push(r.slebBig());
    else if (op === 0x23) { r.uleb(); constant = false; }
    else if (op === 0xd2) { r.uleb(); constant = false; }
    else if (op === 0xd0) { r.slebBig(); constant = false; }
    else if ([0x6a, 0x6b, 0x6c, 0x7c, 0x7d, 0x7e].includes(op)) constant = false;
    else throw new Error(`unsupported constant expression opcode 0x${op.toString(16)}`);
  }
  return constant && values.length === 1 ? values[0] : null;
}

/** The structure of a module that the map describes. */
export function readModule(bytes) {
  if (bytes.length < 8 || MAGIC.some((b, i) => bytes[i] !== b)) throw new Error('not a WebAssembly module (version 1)');
  const sections = [];
  const module = { sections, imports: { func: 0, table: 0, memory: [], global: 0, tag: 0 }, functionTypes: 0,
    memories: [], globals: 0, exports: [], code: null, data: null, names: null, dataCount: null };
  let offset = 8;
  while (offset < bytes.length) {
    const r = new Reader(bytes, offset);
    const id = r.byte();
    if (!sectionNames[id]) throw new Error(`unknown section id ${id} at 0x${offset.toString(16)}`);
    const size = r.uleb(), contentStart = r.offset, end = contentStart + size;
    if (end > bytes.length) throw new Error(`section ${sectionNames[id]} at 0x${offset.toString(16)} runs past the end of the module`);
    const section = { id, kind: sectionNames[id], start: offset, headerLength: contentStart - offset, contentStart, end };
    const body = new Reader(bytes, contentStart, end);
    if (id === 0) { section.custom = body.name(); section.kind = `CUSTOM(${section.custom})`; section.payload = body.offset; }
    sections.push(section);
    offset = end;
  }
  const one = id => {
    const found = sections.filter(s => s.id === id);
    if (found.length > 1) throw new Error(`more than one ${sectionNames[id]} section`);
    return found[0];
  };
  const imports = one(2);
  if (imports) {
    const r = new Reader(bytes, imports.contentStart, imports.end);
    for (let n = r.uleb(); n > 0; n--) {
      r.name(); r.name();
      const kind = r.byte();
      if (kind === 0) { r.uleb(); module.imports.func++; }
      else if (kind === 1) { r.slebBig(); r.limits(); module.imports.table++; }
      else if (kind === 2) module.imports.memory.push(r.limits());
      else if (kind === 3) { r.slebBig(); r.byte(); module.imports.global++; }
      else if (kind === 4) { r.byte(); r.uleb(); module.imports.tag++; }
      else throw new Error(`unknown import kind ${kind}`);
    }
  }
  const functions = one(3);
  if (functions) module.functionTypes = new Reader(bytes, functions.contentStart, functions.end).uleb();
  const memory = one(5);
  if (memory) {
    const r = new Reader(bytes, memory.contentStart, memory.end);
    for (let n = r.uleb(); n > 0; n--) module.memories.push(r.limits());
  }
  const globals = one(6);
  if (globals) module.globals = new Reader(bytes, globals.contentStart, globals.end).uleb();
  const exports = one(7);
  if (exports) {
    const r = new Reader(bytes, exports.contentStart, exports.end);
    for (let n = r.uleb(); n > 0; n--) {
      const name = r.name(), kind = r.byte(), index = r.uleb();
      module.exports.push({ name, kind: ['func', 'table', 'memory', 'global', 'tag'][kind] ?? `kind ${kind}`, index });
    }
  }
  const dataCount = one(12);
  if (dataCount) module.dataCount = new Reader(bytes, dataCount.contentStart, dataCount.end).uleb();
  const code = one(10);
  if (code) {
    const r = new Reader(bytes, code.contentStart, code.end);
    const count = r.uleb(), bodies = [];
    module.code = { section: code, count, countLength: r.offset - code.contentStart, bodies };
    for (let i = 0; i < count; i++) {
      const start = r.offset, size = r.uleb(), bodyStart = r.offset;
      if (bodyStart + size > code.end) throw new Error(`function ${i} runs past the code section`);
      bodies.push({ start, bodyStart, end: bodyStart + size });
      r.offset = bodyStart + size;
    }
    if (r.offset !== code.end) throw new Error('the code section has bytes after its last function');
  }
  const data = one(11);
  if (data) {
    const r = new Reader(bytes, data.contentStart, data.end);
    const count = r.uleb(), segments = [];
    module.data = { section: data, count, segments };
    for (let i = 0; i < count; i++) {
      const start = r.offset, flags = r.uleb();
      let address = null, passive = false, memoryIndex = 0;
      if (flags === 1) passive = true;
      else {
        if (flags === 2) memoryIndex = r.uleb();
        else if (flags !== 0) throw new Error(`data segment ${i}: unknown flags ${flags}`);
        address = constExpr(r);
      }
      const size = r.uleb(), contentStart = r.offset;
      if (contentStart + size > data.end) throw new Error(`data segment ${i} runs past the data section`);
      segments.push({ index: i, start, contentStart, size, passive, address, memoryIndex });
      r.offset = contentStart + size;
    }
    if (r.offset !== data.end) throw new Error('the data section has bytes after its last segment');
  }
  const name = sections.find(s => s.custom === 'name');
  if (name) module.names = readNames(bytes, name);
  return module;
}

// The name section's function (1) and global (7) names; a malformed name
// section is reported, not fatal (it is a custom section).
function readNames(bytes, section) {
  const result = { functions: new Map(), globals: new Map(), error: null };
  try {
    const r = new Reader(bytes, section.payload, section.end);
    while (r.offset < section.end) {
      const id = r.byte(), size = r.uleb(), end = r.offset + size;
      if (id === 1 || id === 7) {
        const map = id === 1 ? result.functions : result.globals;
        for (let n = r.uleb(); n > 0; n--) { const index = r.uleb(); map.set(index, r.name()); }
      }
      r.offset = end;
    }
  } catch (error) { result.error = error.message; }
  return result;
}

const ROW = /^\s*(-|[0-9a-f]+) +([0-9a-f]+) +([0-9a-f]+) (.*)$/;
const HEADER = /^ *Addr +Off +Size +Out +In +Symbol *$/;

/** wasm-ld's map (lld/wasm/MapFile.cpp): sections; under CODE the functions
 * and their symbols; under DATA the output segments, their input chunks and
 * their symbols; under GLOBAL the globals by index. */
export function parseMap(text) {
  const lines = text.split(/\r?\n/);
  if (!HEADER.test(lines[0] ?? '')) throw new Error('not a wasm-ld map (header)');
  const sections = [];
  let section = null, segment = null, chunk = null;
  for (let n = 1; n < lines.length; n++) {
    const line = lines[n];
    if (!line.trim()) continue;
    const row = ROW.exec(line);
    if (!row) throw new Error(`map line ${n + 1}: not a map row: ${JSON.stringify(line.slice(0, 200))}`);
    const address = row[1] === '-' ? null : BigInt('0x' + row[1]);
    const offset = Number.parseInt(row[2], 16), size = Number.parseInt(row[3], 16);
    const indent = row[4].length - row[4].trimStart().length, name = row[4].trimStart();
    const entry = { line: n + 1, address, offset, size, name };
    if (indent === 0) {
      if (section?.kind === 'DATA' && address !== null) {
        segment = { ...entry, chunks: [] };
        section.segments.push(segment); chunk = null;
        continue;
      }
      if (address !== null) throw new Error(`map line ${n + 1}: a section row with an address`);
      section = { ...entry, kind: name, functions: [], segments: [], globals: [] };
      sections.push(section); segment = null; chunk = null;
    } else if (indent === 8) {
      if (!section) throw new Error(`map line ${n + 1}: a row before any section`);
      if (section.kind === 'CODE') { chunk = { ...entry, symbols: [] }; section.functions.push(chunk); }
      else if (section.kind === 'DATA') {
        if (!segment) throw new Error(`map line ${n + 1}: a data chunk before any segment`);
        chunk = { ...entry, symbols: [] }; segment.chunks.push(chunk);
      } else if (section.kind === 'GLOBAL') section.globals.push(entry);
      else throw new Error(`map line ${n + 1}: an entry under ${section.kind}`);
    } else if (indent === 16) {
      if (!chunk) throw new Error(`map line ${n + 1}: a symbol outside any chunk`);
      chunk.symbols.push(entry);
    } else throw new Error(`map line ${n + 1}: unexpected indentation ${indent}`);
  }
  return { sections };
}

// The memory.init and memory.fill operations of __wasm_init_memory, with their
// operands when they are constants: a small stack interpreter over the
// instructions wasm-ld generates there (lld/wasm/Writer.cpp createInitMemoryFunction).
export function initMemoryOperations(bytes, body) {
  const r = new Reader(bytes, body.bodyStart, body.end);
  for (let groups = r.uleb(); groups > 0; groups--) { r.uleb(); r.byte(); }
  const stack = [], inits = [], fills = [];
  const pop = (n = 1) => { const values = stack.splice(Math.max(0, stack.length - n), n); while (values.length < n) values.unshift(null); return values; };
  const push = value => stack.push(value);
  const memarg = () => { const align = r.uleb(); if (align & 0x40) r.uleb(); r.ulebBig(); };
  const blockType = () => { const b = r.bytes[r.offset]; if (b === 0x40 || (b >= 0x6f && b <= 0x7f)) r.offset++; else r.slebBig(); };
  // 0xFE (threads) instructions wasm-ld emits here: [pops, pushes].
  const atomics = { 0x00: [2, 1], 0x01: [3, 1], 0x02: [3, 1], 0x10: [1, 1], 0x11: [1, 1], 0x17: [2, 0], 0x18: [2, 0],
    0x1e: [2, 1], 0x1f: [2, 1], 0x48: [3, 1], 0x49: [3, 1] };
  while (r.offset < body.end) {
    const op = r.byte();
    if (op === 0x02 || op === 0x03) blockType();
    else if (op === 0x04) { pop(); blockType(); }
    else if (op === 0x05 || op === 0x0b || op === 0x00 || op === 0x01 || op === 0x0f) { /* control, no operands kept */ }
    else if (op === 0x0c) r.uleb();
    else if (op === 0x0d) { pop(); r.uleb(); }
    else if (op === 0x0e) { pop(); for (let n = r.uleb() + 1; n > 0; n--) r.uleb(); }
    else if (op === 0x1a) pop();
    else if (op === 0x1b) { pop(3); push(null); }
    else if (op === 0x20) { r.uleb(); push(null); }
    else if (op === 0x21) { r.uleb(); pop(); }
    else if (op === 0x22) { r.uleb(); pop(); push(null); }
    else if (op === 0x23) { r.uleb(); push(null); }
    else if (op === 0x24) { r.uleb(); pop(); }
    else if (op === 0x41 || op === 0x42) push(r.slebBig());
    else if (op === 0x45 || op === 0x50) { pop(); push(null); }
    else if ((op >= 0x46 && op <= 0x4f) || (op >= 0x51 && op <= 0x5a) || op === 0x6a || op === 0x7c) { pop(2); push(null); }
    else if (op === 0xfc) {
      const sub = r.uleb();
      if (sub === 8) { const segment = r.uleb(); r.uleb(); const [dest, offset, size] = pop(3); inits.push({ segment, dest, offset, size }); }
      else if (sub === 9) r.uleb();
      else if (sub === 10) { r.uleb(); r.uleb(); pop(3); }
      else if (sub === 11) { r.uleb(); const [dest, value, size] = pop(3); fills.push({ dest, value, size }); }
      else return { inits, fills, unread: `0xfc ${sub}` };
    } else if (op === 0xfe) {
      const sub = r.uleb();
      if (sub === 0x03) { r.byte(); continue; }
      const effect = atomics[sub];
      if (!effect) return { inits, fills, unread: `0xfe ${sub}` };
      memarg(); pop(effect[0]); if (effect[1]) push(null);
    } else return { inits, fills, unread: `0x${op.toString(16)}` };
  }
  return { inits, fills, unread: null };
}

const hex = value => '0x' + value.toString(16);
const tlsSegment = name => name === '.tdata' || name === '.tbss' || name.startsWith('.tdata.') || name.startsWith('.tbss.');

/** Every way the module and its map disagree (an empty list: they agree), and
 * what was checked. */
export function checkLink(bytes, mapText, { customSections = defaultCustomSections, maxProblems = 200 } = {}) {
  const problems = [];
  const problem = text => { if (problems.length < maxProblems) problems.push(text); else if (problems.length === maxProblems) problems.push('… more problems not listed'); };
  const stats = { sections: 0, functions: 0, functionSymbols: 0, segments: 0, bssSegments: 0, chunks: 0, dataSymbols: 0,
    globals: 0, exportsResolved: 0, exportsUnnamed: 0, namesChecked: 0, initMemory: null };
  let module, map;
  try { module = readModule(bytes); } catch (error) { return { problems: [`module: ${error.message}`], stats }; }
  try { map = parseMap(mapText); } catch (error) { return { problems: [`map: ${error.message}`], stats }; }

  // Sections: the same list, at the same offsets, with the same sizes.
  const ours = module.sections, theirs = map.sections;
  if (ours.length !== theirs.length) problem(`sections: the module has ${ours.length}, the map lists ${theirs.length}`);
  for (let i = 0; i < Math.max(ours.length, theirs.length); i++) {
    const s = ours[i], m = theirs[i];
    if (!s || !m) { problem(`section ${i}: ${s ? `${s.kind} in the module only` : `${m.name} in the map only`}`); continue; }
    if (s.kind !== m.name) problem(`section ${i}: the module has ${s.kind}, the map ${m.name}`);
    if (s.start !== m.offset) problem(`section ${s.kind}: at ${hex(s.start)}, the map says ${hex(m.offset)}`);
    if (s.end - s.start !== m.size) problem(`section ${s.kind}: ${hex(s.end - s.start)} bytes, the map says ${hex(m.size)}`);
    stats.sections++;
  }
  for (const s of ours) if (s.id === 0 && !customSections.includes(s.custom)) problem(`unexpected custom section ${JSON.stringify(s.custom)}`);
  const mapSection = kind => theirs.find(m => m.kind === kind);

  // Code: one entry per defined function, contiguous, sizes and bodies as stated.
  const code = module.code, mapCode = mapSection('CODE');
  const functionIndex = new Map(); // map chunk -> function index
  const symbolFunctions = new Map(); // symbol name -> [function index]
  if (code && mapCode) {
    const header = code.section.headerLength;
    if (code.count !== module.functionTypes) problem(`code: ${code.count} bodies, the function section declares ${module.functionTypes}`);
    if (mapCode.functions.length !== code.count) problem(`code: the module has ${code.count} functions, the map lists ${mapCode.functions.length}`);
    let expected = code.section.contentStart + code.countLength;
    mapCode.functions.forEach((f, i) => {
      const at = f.offset + header, body = code.bodies[i];
      if (at !== expected) problem(`function ${i} (${f.name}, map line ${f.line}): at ${hex(at)}, ${hex(expected)} expected after the one before`);
      if (body) {
        if (body.start !== at) problem(`function ${i} (${f.name}): the module's body ${i} starts at ${hex(body.start)}, the map says ${hex(at)}`);
        if (body.end - body.start !== f.size) problem(`function ${i} (${f.name}): ${hex(body.end - body.start)} bytes with its size field, the map says ${hex(f.size)}`);
      }
      expected = at + f.size;
      const index = module.imports.func + i;
      functionIndex.set(f, index);
      for (const s of f.symbols) {
        stats.functionSymbols++;
        if (s.offset !== f.offset || s.size !== f.size) problem(`function symbol ${s.name} (map line ${s.line}): at ${hex(s.offset)} size ${hex(s.size)}, its function at ${hex(f.offset)} size ${hex(f.size)}`);
        if (s.address !== null) problem(`function symbol ${s.name} (map line ${s.line}): has an address`);
        (symbolFunctions.get(s.name) ?? symbolFunctions.set(s.name, []).get(s.name)).push(index);
      }
      if (module.names?.functions.size) {
        const named = module.names.functions.get(index), inName = /:\((.*)\)$/.exec(f.name)?.[1];
        if (named !== undefined) {
          stats.namesChecked++;
          if (named !== inName && !f.symbols.some(s => s.name === named)) problem(`function ${index}: the name section calls it ${JSON.stringify(named)}, the map ${f.name}`);
        }
      }
      stats.functions++;
    });
    if (expected !== code.section.end) problem(`code: the map's functions end at ${hex(expected)}, the section at ${hex(code.section.end)}`);
  } else if (code || mapCode) problem(`code: ${code ? 'the map lists no CODE section' : 'the module has no code section'}`);

  // Data: emitted segments in order; zero-filled ones checked against memory.fill.
  const data = module.data, mapData = mapSection('DATA');
  let operations = null;
  const initChunk = mapCode?.functions.find(f => f.name === '<internal>:(__wasm_init_memory)');
  if (initChunk && code) {
    const body = code.bodies[mapCode.functions.indexOf(initChunk)];
    if (body) {
      try { operations = initMemoryOperations(bytes, body); } catch (error) { problem(`__wasm_init_memory: ${error.message}`); }
      if (operations?.unread) problem(`__wasm_init_memory: an instruction the checker does not read (${operations.unread})`);
      stats.initMemory = operations && { inits: operations.inits.length, fills: operations.fills.length };
    }
  }
  const memory = module.memories[0] ?? module.imports.memory[0];
  const memoryBytes = memory ? memory.min << BigInt(memory.pageLog2) : null;
  const placed = [];
  if (data && mapData) {
    const header = data.section.headerLength;
    const emitted = mapData.segments.filter(s => s.offset !== mapData.offset);
    const zeroed = mapData.segments.filter(s => s.offset === mapData.offset);
    if (module.dataCount !== null && module.dataCount !== data.count) problem(`data: DATACOUNT says ${module.dataCount}, the section has ${data.count}`);
    if (emitted.length !== data.count) problem(`data: the module has ${data.count} segments, the map lists ${emitted.length} in the file`);
    emitted.forEach((m, i) => {
      const s = data.segments[i];
      stats.segments++;
      if (!s) return;
      if (s.start !== m.offset + header) problem(`segment ${m.name} (map line ${m.line}): the module's segment ${i} starts at ${hex(s.start)}, the map says ${hex(m.offset + header)}`);
      if (s.size !== m.size) problem(`segment ${m.name}: ${hex(s.size)} bytes, the map says ${hex(m.size)}`);
      if (!s.passive) {
        if (s.address === null) problem(`segment ${m.name}: its offset is not a constant`);
        else if (s.address !== m.address) problem(`segment ${m.name}: placed at ${hex(s.address)}, the map says ${hex(m.address)}`);
      } else if (operations) {
        const inits = operations.inits.filter(o => o.segment === i);
        if (!inits.length) problem(`segment ${m.name}: passive, and __wasm_init_memory never initializes it`);
        for (const o of inits) {
          if (o.dest !== null && o.dest !== m.address) problem(`segment ${m.name}: __wasm_init_memory copies it to ${hex(o.dest)}, the map says ${hex(m.address)}`);
          if (o.offset !== null && o.offset !== 0n) problem(`segment ${m.name}: __wasm_init_memory copies from offset ${o.offset}`);
          if (o.size !== null && o.size !== BigInt(m.size)) problem(`segment ${m.name}: __wasm_init_memory copies ${o.size} bytes, the map says ${m.size}`);
        }
      }
      for (const c of m.chunks) {
        const into = c.address - m.address;
        if (c.offset !== m.offset + (s.contentStart - s.start) + Number(into)) problem(`chunk ${c.name} (map line ${c.line}): at ${hex(c.offset)}, its address puts it at ${hex(m.offset + (s.contentStart - s.start) + Number(into))}`);
      }
    });
    if (operations) {
      const fills = operations.fills.filter(f => f.dest !== null);
      for (const m of zeroed) {
        if (tlsSegment(m.name)) continue;
        stats.bssSegments++;
        if (!fills.length) continue;
        if (!fills.some(f => f.dest === m.address && f.size === BigInt(m.size) && f.value === 0n)) problem(`segment ${m.name} (map line ${m.line}): not in the file, and no memory.fill of ${hex(m.size)} zero bytes at ${hex(m.address)}`);
      }
      for (const f of fills) if (!zeroed.some(m => f.dest === m.address && f.size === BigInt(m.size))) problem(`__wasm_init_memory fills ${f.size} bytes at ${hex(f.dest)}, which is no zero-filled segment of the map`);
      for (const o of operations.inits) if (o.segment >= data.count) problem(`__wasm_init_memory initializes segment ${o.segment}, which does not exist`);
    } else stats.bssSegments += zeroed.filter(m => !tlsSegment(m.name)).length;
  } else if (data || mapData?.segments.some(s => s.offset !== mapData.offset)) problem(`data: ${data ? 'the map lists no DATA section' : 'the module has no data section'}`);
  for (const m of mapData?.segments ?? []) {
    const end = m.address + BigInt(m.size), tls = tlsSegment(m.name);
    placed.push({ name: m.name, start: m.address, end });
    if (memoryBytes !== null && end > memoryBytes) problem(`segment ${m.name}: ends at ${hex(end)}, past the initial memory (${hex(memoryBytes)} bytes)`);
    let previous = m.address;
    for (const c of m.chunks) {
      stats.chunks++;
      const cEnd = c.address + BigInt(c.size);
      if (c.address < previous) problem(`chunk ${c.name} (map line ${c.line}): at ${hex(c.address)}, before the end of the chunk before it (${hex(previous)})`);
      if (cEnd > end) problem(`chunk ${c.name} (map line ${c.line}): ends at ${hex(cEnd)}, past its segment ${m.name} (${hex(end)})`);
      previous = cEnd;
      for (const s of c.symbols) {
        stats.dataSymbols++;
        // A TLS symbol's address is its offset in the thread's block.
        const at = tls ? m.address + s.address : s.address;
        if (at < c.address || at + BigInt(s.size) > cEnd) problem(`data symbol ${s.name} (map line ${s.line}): ${hex(at)}..${hex(at + BigInt(s.size))}, outside its chunk ${hex(c.address)}..${hex(cEnd)}`);
        if (c.offset && s.offset - c.offset !== Number(at - c.address)) problem(`data symbol ${s.name} (map line ${s.line}): at file offset ${hex(s.offset)}, its address puts it at ${hex(c.offset + Number(at - c.address))}`);
      }
    }
  }
  placed.sort((a, b) => (a.start < b.start ? -1 : a.start > b.start ? 1 : 0));
  for (let i = 1; i < placed.length; i++)
    if (placed[i].start < placed[i - 1].end) problem(`segments ${placed[i - 1].name} and ${placed[i].name} overlap`);

  // Globals: indices that exist, once each, named as the name section names them.
  const totalGlobals = module.imports.global + module.globals;
  const globalByName = new Map(), seen = new Set();
  for (const g of mapSection('GLOBAL')?.globals ?? []) {
    stats.globals++;
    const index = Number(g.address);
    if (g.address === null || index >= totalGlobals) problem(`global ${g.name} (map line ${g.line}): index ${g.address ?? '-'}, the module has ${totalGlobals} globals`);
    if (seen.has(index)) problem(`global index ${index} listed twice in the map`);
    seen.add(index); globalByName.set(g.name, index);
    const named = module.names?.globals.get(index);
    if (named !== undefined && named !== g.name) problem(`global ${index}: the name section calls it ${JSON.stringify(named)}, the map ${g.name}`);
  }
  if (module.names?.error) problem(`name section: ${module.names.error}`);

  // Exports resolve to the definitions the map gives their names.
  const functionCount = module.imports.func + module.functionTypes;
  for (const e of module.exports) {
    if (e.kind === 'func') {
      if (e.index >= functionCount) { problem(`export ${e.name}: function ${e.index} does not exist`); continue; }
      const defined = symbolFunctions.get(e.name);
      if (!defined) { stats.exportsUnnamed++; continue; }
      if (!defined.includes(e.index)) problem(`export ${e.name}: function ${e.index}, the map defines ${e.name} as function ${defined.join(', ')}`);
      else stats.exportsResolved++;
    } else if (e.kind === 'global') {
      if (e.index >= totalGlobals) { problem(`export ${e.name}: global ${e.index} does not exist`); continue; }
      if (!globalByName.has(e.name)) { stats.exportsUnnamed++; continue; }
      if (globalByName.get(e.name) !== e.index) problem(`export ${e.name}: global ${e.index}, the map gives it index ${globalByName.get(e.name)}`);
      else stats.exportsResolved++;
    }
  }
  return { problems, stats };
}

export { sectionIds };
