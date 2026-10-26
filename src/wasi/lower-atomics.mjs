// Lowers WebAssembly atomic instructions to ordinary memory instructions in a
// single-threaded module (docs/WASI.md). Lasm's WASI programs reuse the
// standard-library archives of the Node runtime, compiled with -pthread, so
// Lean's reference counting of objects shared with tasks uses atomics. The
// WASI program has one thread and unshared memory, so plain loads and stores
// are equivalent, and the module then needs no threads proposal: Wasmtime,
// Wasmer, Viceroy (Fastly Compute) and Node's node:wasi all accept it.
//
// Atomic loads and stores become plain ones with the same memory argument;
// read-modify-write and compare-exchange instructions become calls to small
// appended functions; fences are removed. memory.atomic.wait traps (on one
// thread it could never be woken) and memory.atomic.notify returns 0.
// Every instruction is decoded, so an unknown opcode fails the build instead
// of being copied wrongly.

class Reader {
  constructor(bytes, at = 0) { this.bytes = bytes; this.at = at; }
  byte() { if (this.at >= this.bytes.length) throw new Error('Unexpected end of WebAssembly module'); return this.bytes[this.at++]; }
  u32() { let result = 0, shift = 0, b; do { b = this.byte(); result += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80); return result; }
  u64() { let result = 0n, shift = 0n, b; do { b = this.byte(); result |= BigInt(b & 0x7f) << shift; shift += 7n; } while (b & 0x80); return result; }
  skipLeb() { while (this.byte() & 0x80); }
  slice(n) { if (this.at + n > this.bytes.length) throw new Error('Unexpected end of WebAssembly module'); const s = this.bytes.subarray(this.at, this.at + n); this.at += n; return s; }
}
const u32 = value => { const out = []; do { let b = value & 0x7f; value = Math.floor(value / 128); if (value) b |= 0x80; out.push(b); } while (value); return out; };
const s64 = value => {
  value = BigInt(value);
  const out = [];
  for (;;) {
    const b = Number(value & 0x7fn); value >>= 7n;
    if ((value === 0n && !(b & 0x40)) || (value === -1n && (b & 0x40))) { out.push(b); return out; }
    out.push(b | 0x80);
  }
};
const vector = items => [...u32(items.length), ...items.flat()];
// Concatenates byte arrays and small number arrays without spreading large ones.
class Bytes {
  constructor() { this.parts = []; this.length = 0; }
  push(...values) { if (values.length) { this.parts.push(Uint8Array.from(values)); this.length += values.length; } }
  append(bytes) { this.parts.push(bytes); this.length += bytes.length; }
  result() { const out = new Uint8Array(this.length); let at = 0; for (const p of this.parts) { out.set(p, at); at += p.length; } return out; }
}

// Atomic loads and stores: their plain counterparts.
const plain = { 0x10: 0x28, 0x11: 0x29, 0x12: 0x2d, 0x13: 0x2f, 0x14: 0x31, 0x15: 0x33, 0x16: 0x35,
  0x17: 0x36, 0x18: 0x37, 0x19: 0x3a, 0x1a: 0x3b, 0x1b: 0x3c, 0x1c: 0x3d, 0x1d: 0x3e };
// Read-modify-write widths, in opcode order within each operation:
// [value type, plain load, plain store, mask for compare-exchange].
const I32 = 0x7f, I64 = 0x7e;
const widths = [[I32, 0x28, 0x36, null], [I64, 0x29, 0x37, null], [I32, 0x2d, 0x3a, 0xff], [I32, 0x2f, 0x3b, 0xffff],
  [I64, 0x31, 0x3c, 0xffn], [I64, 0x33, 0x3d, 0xffffn], [I64, 0x35, 0x3e, 0xffffffffn]];
// Binary operation per type: add, sub, and, or, xor (xchg stores the operand).
const operations = { add: [0x6a, 0x7c], sub: [0x6b, 0x7d], and: [0x71, 0x83], or: [0x72, 0x84], xor: [0x73, 0x85] };
const rmwNames = ['add', 'sub', 'and', 'or', 'xor', 'xchg', 'cmpxchg'];

/** Returns the module with atomics lowered, or the same bytes when it has none. */
export function lowerAtomics(input) {
  const bytes = input instanceof Uint8Array ? input : new Uint8Array(input);
  if (bytes[0] !== 0 || bytes[1] !== 0x61 || bytes[2] !== 0x73 || bytes[3] !== 0x6d || bytes[4] !== 1) throw new Error('Not a WebAssembly module');
  const sections = [];
  for (const r = new Reader(bytes, 8); r.at < bytes.length;) {
    const id = r.byte(), size = r.u32();
    sections.push({ id, body: r.slice(size) });
  }
  const section = id => sections.find(s => s.id === id);
  // Address type: memory64 (limits flag 4) or 32-bit.
  let address = I32;
  const memories = section(5);
  if (memories) { const r = new Reader(memories.body); if (r.u32() && (r.byte() & 4)) address = I64; }
  const typeSection = section(1), functionSection = section(3), codeSection = section(10);
  if (!codeSection) return bytes;
  let importedFunctions = 0;
  if (section(2)) {
    const r = new Reader(section(2).body);
    for (let n = r.u32(); n--;) {
      r.slice(r.u32()); r.slice(r.u32());
      const kind = r.byte();
      if (kind === 0) { r.u32(); importedFunctions++; }
      else if (kind === 1) { r.byte(); limits(r); }
      else if (kind === 2) limits(r);
      else if (kind === 3) { r.byte(); r.byte(); }
      else if (kind === 4) { r.byte(); r.u32(); }
      else throw new Error(`Unknown import kind ${kind}`);
    }
  }
  const types = new Reader(typeSection.body), typeCount = types.u32();
  const functions = new Reader(functionSection.body), definedCount = functions.u32();
  const typeIndices = []; for (let i = 0; i < definedCount; i++) typeIndices.push(functions.u32());

  // Helpers appended on demand: key -> { index, type, body }.
  const helpers = new Map(), newTypes = [];
  const typeOf = (params, results) => {
    const encoded = [0x60, ...vector(params.map(p => [p])), ...vector(results.map(p => [p]))];
    const key = encoded.join(',');
    let index = newTypes.findIndex(t => t.key === key);
    if (index < 0) { newTypes.push({ key, encoded }); index = newTypes.length - 1; }
    return typeCount + index;
  };
  const helper = (key, params, results, locals, code) => {
    if (!helpers.has(key)) helpers.set(key, { index: importedFunctions + definedCount + helpers.size, type: typeOf(params, results), locals, code });
    return helpers.get(key).index;
  };
  const add = address === I64 ? 0x7c : 0x6a;
  // Effective address: local 0 (address) + last parameter (offset).
  const effective = offsetLocal => [0x20, 0, 0x20, offsetLocal, add, 0x21, 0];
  function rmwHelper(name, width) {
    const [type, load, store, mask] = widths[width];
    if (name === 'cmpxchg') {
      // (address, expected, replacement, offset) -> old
      return helper(`cmpxchg${width}`, [address, type, type, address], [type], [[1, type]], [
        ...effective(3), 0x20, 0, load, 0, 0, 0x21, 4,
        0x20, 4, 0x20, 1, ...(mask === null ? [] : type === I32 ? [0x41, ...s64(mask), 0x71] : [0x42, ...s64(mask), 0x83]),
        type === I32 ? 0x46 : 0x51, 0x04, 0x40, 0x20, 0, 0x20, 2, store, 0, 0, 0x0b, 0x20, 4]);
    }
    // (address, value, offset) -> old
    const update = name === 'xchg' ? [0x20, 1] : [0x20, 3, 0x20, 1, operations[name][type === I32 ? 0 : 1]];
    return helper(`${name}${width}`, [address, type, address], [type], [[1, type]], [
      ...effective(2), 0x20, 0, load, 0, 0, 0x21, 3, 0x20, 0, ...update, store, 0, 0, 0x20, 3]);
  }

  let changed = false;
  const code = new Reader(codeSection.body);
  const bodies = code.u32();
  if (bodies !== definedCount) throw new Error('Function and code section counts differ');
  const rewritten = [];
  for (let f = 0; f < bodies; f++) {
    const size = code.u32(), end = code.at + size, r = new Reader(code.bytes, code.at);
    const body = new Bytes();
    const start = r.at;
    for (let groups = r.u32(); groups--;) { r.u32(); valueType(r); }
    body.append(code.bytes.subarray(start, r.at));
    let copied = r.at;
    while (r.at < end) {
      const at = r.at, op = r.byte();
      if (op !== 0xfe) { skipInstruction(r, op); continue; }
      const sub = r.u32();
      body.append(code.bytes.subarray(copied, at));
      changed = true;
      if (sub === 0x03) { r.byte(); copied = r.at; continue; } // atomic.fence
      const memargStart = r.at; memarg(r); const memargBytes = [...code.bytes.subarray(memargStart, r.at)];
      const offset = memargOffset(memargBytes);
      if (plain[sub] !== undefined) body.push(plain[sub], ...memargBytes);
      else if (sub >= 0x1e && sub <= 0x4e) {
        const name = rmwNames[Math.floor((sub - 0x1e) / 7)], width = (sub - 0x1e) % 7;
        body.push(address === I64 ? 0x42 : 0x41, ...s64(offset), 0x10, ...u32(rmwHelper(name, width)));
      } else if (sub === 0x00) {
        // memory.atomic.notify (address, count) -> 0 woken
        body.push(address === I64 ? 0x42 : 0x41, ...s64(offset), 0x10, ...u32(helper('notify', [address, I32, address], [I32], [], [0x41, 0])));
      } else if (sub === 0x01 || sub === 0x02) {
        // memory.atomic.wait (address, expected, timeout): nothing can wake it.
        const type = sub === 0x01 ? I32 : I64;
        body.push(address === I64 ? 0x42 : 0x41, ...s64(offset), 0x10, ...u32(helper(`wait${type}`, [address, type, I64, address], [I32], [], [0x00])));
      } else throw new Error(`Unknown atomic instruction 0xfe ${sub}`);
      copied = r.at;
    }
    body.append(code.bytes.subarray(copied, end));
    rewritten.push(body.result());
    code.at = end;
  }
  if (!changed) return bytes;
  for (const h of helpers.values()) {
    const fn = [...vector(h.locals.map(([n, t]) => [...u32(n), t])), ...h.code, 0x0b];
    rewritten.push(Uint8Array.from(fn));
  }
  const codeBytes = new Bytes();
  codeBytes.push(...u32(rewritten.length));
  for (const b of rewritten) { codeBytes.push(...u32(b.length)); codeBytes.append(b); }
  const replaced = new Map([
    [1, Uint8Array.from([...u32(typeCount + newTypes.length), ...typeSection.body.subarray(types.at), ...newTypes.flatMap(t => t.encoded)])],
    [3, Uint8Array.from([...u32(definedCount + helpers.size), ...typeIndices.flatMap(u32), ...[...helpers.values()].flatMap(h => u32(h.type))])],
    [10, codeBytes.result()],
  ]);
  const out = new Bytes();
  out.append(bytes.subarray(0, 8));
  for (const s of sections) {
    const body = replaced.get(s.id) ?? s.body;
    out.push(s.id, ...u32(body.length));
    out.append(body);
  }
  return out.result();
}

function limits(r) { const flags = r.byte(); if (flags & 4) { r.u64(); if (flags & 1) r.u64(); } else { r.u32(); if (flags & 1) r.u32(); } }
function heapType(r) { const b = r.bytes[r.at]; if (b >= 0x69 && b <= 0x74 || b === 0x40) { r.at++; return; } r.u64(); }
function valueType(r) { const b = r.byte(); if (b === 0x63 || b === 0x64) heapType(r); }
function blockType(r) {
  const b = r.bytes[r.at];
  if (b === 0x40 || (b >= 0x7b && b <= 0x7f) || b === 0x70 || b === 0x6f) { r.at++; return; }
  if (b === 0x63 || b === 0x64) { r.at++; heapType(r); return; }
  r.u64(); // s33 type index
}
function memarg(r) { const align = r.u32(); if (align & 0x40) r.u32(); r.u64(); }
function memargOffset(bytes) {
  const r = new Reader(Uint8Array.from(bytes)); const align = r.u32(); if (align & 0x40) r.u32(); return r.u64();
}
function skipInstruction(r, op) {
  if (op <= 0x01 || op === 0x05 || op === 0x0b || op === 0x0f || op === 0x1a || op === 0x1b || (op >= 0x45 && op <= 0xc4) || op === 0xd1 || op === 0xd3 || op === 0xd4) return;
  switch (op) {
  case 0x02: case 0x03: case 0x04: case 0x06: blockType(r); return;
  case 0x07: case 0x08: case 0x09: case 0x0c: case 0x0d: case 0x10: case 0x12: case 0x14: case 0x15: case 0x18: case 0xd2: case 0xd5: case 0xd6:
  case 0x20: case 0x21: case 0x22: case 0x23: case 0x24: case 0x25: case 0x26: r.u32(); return;
  case 0x19: case 0x0a: return;
  case 0x0e: for (let n = r.u32(); n--;) r.u32(); r.u32(); return;
  case 0x11: case 0x13: r.u32(); r.u32(); return;
  case 0x1c: for (let n = r.u32(); n--;) valueType(r); return;
  case 0x1f: { blockType(r); for (let n = r.u32(); n--;) { const kind = r.byte(); if (kind < 2) r.u32(); r.u32(); } return; }
  case 0x3f: case 0x40: r.u32(); return;
  case 0x41: r.skipLeb(); return;
  case 0x42: r.skipLeb(); return;
  case 0x43: r.slice(4); return;
  case 0x44: r.slice(8); return;
  case 0xd0: heapType(r); return;
  case 0xfc: {
    const sub = r.u32();
    if (sub <= 7) return;
    if (sub === 8 || sub === 10 || sub === 12 || sub === 14) { r.u32(); r.u32(); return; }
    if (sub === 9 || sub === 11 || sub === 13 || (sub >= 15 && sub <= 17)) { r.u32(); return; }
    throw new Error(`Unknown instruction 0xfc ${sub}`);
  }
  default:
    if (op >= 0x28 && op <= 0x3e) { memarg(r); return; }
    throw new Error(`Unsupported WebAssembly instruction 0x${op.toString(16)} (SIMD and GC instructions are not expected in Lasm programs)`);
  }
}

/** The module's imports: [{ module, name, kind }] (kind 0 function, 1 table, 2 memory, 3 global, 4 tag). */
export function moduleImports(input) {
  const bytes = input instanceof Uint8Array ? input : new Uint8Array(input);
  const decoder = new TextDecoder();
  const result = [];
  for (const r = new Reader(bytes, 8); r.at < bytes.length;) {
    const id = r.byte(), size = r.u32(), end = r.at + size;
    if (id === 2) {
      for (let n = r.u32(); n--;) {
        const module = decoder.decode(r.slice(r.u32())), name = decoder.decode(r.slice(r.u32()));
        const kind = r.byte();
        if (kind === 0) r.u32();
        else if (kind === 1) { r.byte(); limits(r); }
        else if (kind === 2) limits(r);
        else if (kind === 3) { r.byte(); r.byte(); }
        else if (kind === 4) { r.byte(); r.u32(); }
        else throw new Error(`Unknown import kind ${kind}`);
        result.push({ module, name, kind });
      }
    }
    r.at = end;
  }
  return result;
}
