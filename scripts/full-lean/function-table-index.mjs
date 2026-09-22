// Index the pinned compiler's initial function table without instantiating it.
// Reading every slot through JavaScript creates hundreds of thousands of Wasm
// function wrappers per worker. Export/import metadata identifies the entries
// needed by the loader; unknown functions retain Emscripten's complete scan.
import { openSync, closeSync, fstatSync, readSync, createReadStream, readFileSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';

class Reader {
  constructor(bytes) { this.bytes = bytes; this.offset = 0; }
  byte() {
    if (this.offset === this.bytes.length) throw new Error('Truncated Wasm section');
    return this.bytes[this.offset++];
  }
  integer(bits = 32, signed = false) {
    let value = 0n, shift = 0n;
    for (let i = 0; i < Math.ceil(bits / 7); i++) {
      const byte = this.byte();
      value |= BigInt(byte & 127) << shift; shift += 7n;
      if (!(byte & 128)) {
        if (signed && byte & 64) value -= 1n << shift;
        const minimum = signed ? -(1n << BigInt(bits - 1)) : 0n;
        const maximum = (1n << BigInt(bits - (signed ? 1 : 0))) - 1n;
        if (value < minimum || value > maximum || value < BigInt(Number.MIN_SAFE_INTEGER)
            || value > BigInt(Number.MAX_SAFE_INTEGER)) throw new Error('Unsupported Wasm integer');
        return Number(value);
      }
    }
    throw new Error('Oversized Wasm LEB integer');
  }
  string() {
    const size = this.integer(), end = this.offset + size;
    if (end > this.bytes.length) throw new Error('Truncated Wasm name');
    const value = new TextDecoder('utf-8', { fatal: true }).decode(this.bytes.subarray(this.offset, end));
    this.offset = end; return value;
  }
  done() { if (this.offset !== this.bytes.length) throw new Error('Unread Wasm section bytes'); }
}

function sections(path) {
  const fd = openSync(path, 'r'), size = fstatSync(fd).size, selected = new Map();
  let offset = 0;
  const read = count => {
    if (offset + count > size) throw new Error('Truncated Wasm file');
    const bytes = Buffer.alloc(count);
    let done = 0;
    while (done < count) {
      const n = readSync(fd, bytes, done, count - done, offset + done);
      if (!n) throw new Error('Truncated Wasm file');
      done += n;
    }
    offset += count; return bytes;
  };
  try {
    if (!read(8).equals(Buffer.from([0, 97, 115, 109, 1, 0, 0, 0]))) throw new Error('Invalid Wasm header');
    while (offset < size) {
      const kind = read(1)[0], length = [];
      do {
        if (length.length === 5) throw new Error('Oversized Wasm section length');
        length.push(read(1)[0]);
      } while (length.at(-1) & 128);
      const count = new Reader(Buffer.from(length)).integer();
      if (offset + count > size) throw new Error('Truncated Wasm section');
      if ([2, 7, 9].includes(kind)) {
        if (selected.has(kind) || count > 64 * 1024 ** 2) throw new Error('Unsupported Wasm metadata section');
        selected.set(kind, new Reader(read(count)));
      } else offset += count; // Skip code/data rather than buffering a huge compiler.
    }
    return selected;
  } finally { closeSync(fd); }
}

export async function readFunctionTableIndex(path) {
  const source = sections(path), imports = [], exports = [], segments = [], positions = new Map();
  const input = source.get(2);
  if (input) {
    for (let i = 0, count = input.integer(); i < count; i++) {
      const module = input.string(), name = input.string(), kind = input.byte();
      if (kind === 0) {
        if (!['env', 'wasi_snapshot_preview1'].includes(module)) throw new Error(`Unsupported function import namespace: ${module}`);
        input.integer(); imports.push({ module, name, index: imports.length });
      } else if (kind === 1 || kind === 2) {
        if (kind === 1 && input.byte() !== 0x70) throw new Error('Unsupported table reference type');
        const flags = input.integer();
        if (flags & ~7) throw new Error('Unsupported Wasm limits');
        input.integer(flags & 4 ? 64 : 32);
        if (flags & 1) input.integer(flags & 4 ? 64 : 32);
      } else if (kind === 3) {
        if (![0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x70, 0x6f].includes(input.byte()) || input.byte() > 1)
          throw new Error('Unsupported imported global');
      } else if (kind === 4) {
        if (input.byte() !== 0) throw new Error('Unsupported imported tag');
        input.integer();
      } else throw new Error('Unsupported Wasm import kind');
    }
    input.done();
  }
  const output = source.get(7), exportProperties = Object.create(null);
  if (output) {
    const names = new Set();
    for (let i = 0, count = output.integer(); i < count; i++) {
      const name = output.string(), kind = output.byte(), index = output.integer();
      if (names.has(name)) throw new Error('Duplicate Wasm export');
      names.add(name);
      exportProperties[name] = true;
      if (kind === 0) exports.push({ name, index });
      if (name === '__indirect_function_table' && (kind !== 1 || index !== 0)) throw new Error('Unsupported main function table');
    }
    output.done();
  }
  const wanted = new Set([...exports, ...imports].map(entry => entry.index));
  const elements = source.get(9);
  let initialTableEntries = 0;
  if (elements) {
    for (let i = 0, count = elements.integer(); i < count; i++) {
      const flags = elements.integer();
      if (flags !== 0 && flags !== 2) throw new Error('Only active function-index segments are supported');
      const table = flags === 2 ? elements.integer() : 0;
      const opcode = elements.byte();
      if (table !== 0 || ![0x41, 0x42].includes(opcode)) throw new Error('Unsupported table offset expression');
      const offset = elements.integer(opcode === 0x42 ? 64 : 32, true);
      if (offset < initialTableEntries || elements.byte() !== 0x0b || flags === 2 && elements.byte() !== 0)
        throw new Error('Unsupported overlapping, unordered, or non-function table segment');
      const size = elements.integer();
      if (offset + size > 0xffffffff) throw new Error('Unsupported function table size');
      segments.push({ table, offset, count: size, offsetBits: opcode === 0x42 ? 64 : 32 });
      for (let slot = offset; slot < offset + size; slot++) {
        const index = elements.integer();
        if (wanted.has(index)) positions.set(index, slot); // Preserve the original scan's highest index.
      }
      initialTableEntries = offset + size;
    }
    elements.done();
  }
  const hash = createHash('sha256');
  for await (const bytes of createReadStream(path)) hash.update(bytes);
  // Use JavaScript's own property ordering, including integer-like export names.
  // The runtime already has these names in instance.exports. Repeating hundreds
  // of thousands of long Lean symbols in each worker's glue wastes memory.
  const exportOrdinals = new Map(Object.keys(exportProperties).map((name, ordinal) => [name, ordinal]));
  return { version: 2, wasmSha256: hash.digest('hex'), initialTableEntries, segments,
    exportCount: exportOrdinals.size,
    functionExports: exports.length, functionImports: imports.length,
    exportSeeds: exports.filter(entry => positions.has(entry.index))
      .map(entry => [entry.name, positions.get(entry.index), exportOrdinals.get(entry.name)]),
    importSeeds: imports.filter(entry => positions.has(entry.index)).map(entry => [entry.module, entry.name, positions.get(entry.index)]) };
}

// This function is emitted into Emscripten's scope, where the referenced loader
// state lives. It has the same public result and complete-scan fallback.
function indexedFunctionAddress(func) {
  if (!functionsInTableMap) {
    functionsInTableMap = new WeakMap();
    lasmKnownUnindexedExports = new WeakSet();
    if (Number(wasmTable.length) < lasmInitialFunctionTable.initialTableEntries)
      throw new Error('Lasm function table is shorter than its verified metadata');
    var exportNames = Object.keys(lasmMainExports);
    if (exportNames.length !== lasmInitialFunctionTable.exportCount)
      throw new Error('Lasm export count differs from verified metadata');
    for (var [ordinal, index] of lasmInitialFunctionTable.exportSeeds) {
      var name = exportNames[ordinal];
      var value = lasmMainExports[name];
      if (getWasmTableEntry(index) !== value) throw new Error('Lasm function table metadata mismatch: ' + name);
      functionsInTableMap.set(value, Math.max(functionsInTableMap.get(value) || 0, index));
    }
    for (var [module, name, index] of lasmInitialFunctionTable.importSeeds) {
      var value = wasmImports[name];
      // Ordinary JS imports acquire Wasm wrappers; already-exported Wasm
      // functions can retain their identity when imported into this instance.
      if (getWasmTableEntry(index) === value)
        functionsInTableMap.set(value, Math.max(functionsInTableMap.get(value) || 0, index));
    }
    for (var value of [...Object.values(lasmMainExports), ...Object.values(wasmImports)]) {
      if (typeof value === 'function' && !functionsInTableMap.has(value)) lasmKnownUnindexedExports.add(value);
    }
    // A DSO may already have extended the table before the first lookup.
    updateTableMap(lasmInitialFunctionTable.initialTableEntries,
      Number(wasmTable.length) - lasmInitialFunctionTable.initialTableEntries);
  }
  if (!lasmTableMapComplete && !functionsInTableMap.has(func) && !lasmKnownUnindexedExports.has(func)) {
    lasmTableMapComplete = true;
    updateTableMap(0, Number(wasmTable.length));
  }
  return functionsInTableMap.get(func) || 0;
}

export function transformFunctionTable(glue, index) {
  if (glue.includes('var lasmInitialFunctionTable =')) throw new Error('Function table was already indexed');
  const pattern = /var getFunctionAddress = func => \{[\s\S]*?\n\};/g;
  const matches = [...glue.matchAll(pattern)];
  if (matches.length !== 1) throw new Error('Generated function-address lookup drift');
  const normalized = matches[0][0].replace(/\/\/[^\n]*/g, '').replace(/\s/g, '').replace('newWeakMap;', 'newWeakMap();');
  const expected = 'vargetFunctionAddress=func=>{if(!functionsInTableMap){functionsInTableMap=newWeakMap();updateTableMap(0,Number(wasmTable.length));}returnfunctionsInTableMap.get(func)||0;};';
  if (normalized !== expected && normalized !== expected.replace('Number(wasmTable.length)', 'wasmTable.length'))
    throw new Error('Unexpected Emscripten function-address semantics');
  const original = '    wasmExports = instance.exports;';
  if (glue.split(original).length !== 2) throw new Error('Generated main-instance initialization drift');
  if (index.version !== 2 || !Number.isInteger(index.exportCount) || index.exportCount < 0
      || index.exportSeeds.some(([name, slot, ordinal]) => typeof name !== 'string'
        || !Number.isInteger(slot) || slot < 0 || !Number.isInteger(ordinal)
        || ordinal < 0 || ordinal >= index.exportCount))
    throw new Error('Function table metadata mismatch: regenerate the version 2 index');
  const runtime = { initialTableEntries: index.initialTableEntries, exportCount: index.exportCount,
    exportSeeds: index.exportSeeds.map(([, slot, ordinal]) => [ordinal, slot]), importSeeds: index.importSeeds };
  const replacement = `var lasmInitialFunctionTable = ${JSON.stringify(runtime)};\nvar lasmMainExports;\nvar lasmKnownUnindexedExports;\nvar lasmTableMapComplete = false;\nvar getFunctionAddress = ${indexedFunctionAddress.toString()};`;
  return glue.replace(original, original + '\n    lasmMainExports = wasmExports;').replace(pattern, () => replacement);
}

export async function indexFunctionTable(wasmPath, javascriptPath) {
  const index = await readFunctionTableIndex(wasmPath);
  const glue = transformFunctionTable(readFileSync(javascriptPath, 'utf8'), index);
  writeFileSync(javascriptPath, glue);
  return index;
}
