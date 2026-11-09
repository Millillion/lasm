// The atomics lowering of WASI programs (src/wasi/lower-atomics.mjs) as
// properties: on one thread the lowered module computes what the original
// computes, and it needs no threads proposal. Random programs of every atomic
// instruction run in V8 before and after lowering; modules of every other
// instruction kind (made with binaryen) must come out valid without atomics,
// which they cannot if the decoder misreads one instruction's immediates.
// binaryen is not a dependency: the modules it made are recorded in
// test/fixtures/lower-atomics-modules.json (by the text's SHA-256). With
// binaryen installed (`npm install --no-save binaryen@132.0.0`), missing ones
// are made and `LASM_UPDATE_LOWER_ATOMICS=1` records them, and validity is
// checked with the threads feature off; without it, V8 validates the output
// and the lowering must find no atomic instruction left in it.
import test, { after } from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { readFileSync, writeFileSync } from 'node:fs';
import { lowerAtomics, moduleImports, keepExports } from '../src/wasi/lower-atomics.mjs';
import { forAll } from './helpers/property.mjs';

const I32 = 0x7f, I64 = 0x7e;
const u32 = n => { const out = []; do { let b = n & 0x7f; n = Math.floor(n / 128); if (n) b |= 0x80; out.push(b); } while (n); return out; };
const u64 = n => { n = BigInt(n); const out = []; do { let b = Number(n & 0x7fn); n >>= 7n; if (n) b |= 0x80; out.push(b); } while (n); return out; };
const s64 = n => {
  n = BigInt(n); const out = [];
  for (;;) { const b = Number(n & 0x7fn); n >>= 7n; if ((n === 0n && !(b & 0x40)) || (n === -1n && (b & 0x40))) { out.push(b); return out; } out.push(b | 0x80); }
};
const section = (id, body) => [id, ...u32(body.length), ...body];
const vec = items => [...u32(items.length), ...items.flat()];
const name = s => vec([...new TextEncoder().encode(s)].map(b => [b]));
const header = [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0];

/** A module of `functions` ({ name, params, results, locals, code }) with one memory, exported. */
function moduleOf(functions, { memory64 = false, pages = 2, imports = [], custom = [] } = {}) {
  const types = functions.map(f => [0x60, ...vec(f.params.map(p => [p])), ...vec(f.results.map(p => [p]))]);
  return Uint8Array.from([...header,
    ...section(1, vec(types)),
    ...(imports.length ? section(2, vec(imports)) : []),
    ...section(3, vec(functions.map((_, i) => u32(i)))),
    ...section(5, vec([[memory64 ? 0x04 : 0x00, ...u32(pages)]])),
    ...section(7, vec([[...name('memory'), 0x02, 0x00], ...functions.map((f, i) => [...name(f.name), 0x00, ...u32(i + imports.filter(e => e.kind === 0).length)])])),
    ...section(10, vec(functions.map(f => { const body = [...vec((f.locals ?? []).map(([n, t]) => [...u32(n), t])), ...f.code, 0x0b]; return [...u32(body.length), ...body]; }))),
    ...custom.flatMap(([label, bytes]) => section(0, [...name(label), ...bytes]))]);
}
const instance = bytes => new WebAssembly.Instance(new WebAssembly.Module(bytes)).exports;

// Atomic widths in opcode order: [value type, log2 of the access size].
const widths = [[I32, 2], [I64, 3], [I32, 0], [I32, 1], [I64, 0], [I64, 1], [I64, 2]];
const interesting = [0n, 1n, -1n, 0x7fn, 0x80n, 0xffn, 0x100n, 0xffffn, 0x10000n, 0x7fffffffn, -0x80000000n, 0xffffffffn, 0x1_0000_0000n, -0x8000_0000_0000_0000n];

/** A random straight-line program of atomic instructions on base + offset (both aligned). */
function atomicProgram(g, memory64) {
  const address = [0x20, 0];
  const constant = (type) => {
    let value = g.next() < 0.6 ? g.pick(interesting) : BigInt(g.int(-(2 ** 31), 2 ** 31 - 1)) * BigInt(g.int(1, 3));
    value = type === I32 ? BigInt.asIntN(32, value) : BigInt.asIntN(64, value);
    return [type === I32 ? 0x41 : 0x42, ...s64(value)];
  };
  const memarg = log2 => {
    const size = 2 ** log2;
    const offset = g.pick([0, size, 8 * g.int(0, 20), 64, 128, 8192 + 8 * g.int(0, 10), 65536 + 8 * g.int(0, 4)]);
    return [log2, ...u32(offset)];
  };
  const toI64 = type => (type === I32 ? [0xad] : []);
  // acc = acc * 31 + value
  const accumulate = [0x20, 1, 0x42, 31, 0x7e, 0x7c, 0x21, 1];
  const code = [], kinds = [];
  for (let n = g.int(1, 14); n--;) {
    const kind = g.pick(['load', 'store', 'rmw', 'cmpxchg', 'fence', 'notify']);
    const w = g.int(0, 6), [type, log2] = widths[w];
    kinds.push(kind);
    if (kind === 'load') code.push(...address, 0xfe, 0x10 + w, ...memarg(log2), ...toI64(type), ...accumulate);
    else if (kind === 'store') code.push(...address, ...constant(type), 0xfe, 0x17 + w, ...memarg(log2));
    else if (kind === 'rmw') code.push(...address, ...constant(type), 0xfe, ...u32(0x1e + 7 * g.int(0, 5) + w), ...memarg(log2), ...toI64(type), ...accumulate);
    else if (kind === 'cmpxchg') {
      // The expected value is the current one, sometimes changed in bits the
      // access ignores (it matches) or in bits it compares (it does not).
      const m = memarg(log2), bits = 8 * 2 ** log2;
      const k = g.pick([0n, 0n, 1n, bits < (type === I32 ? 32 : 64) ? 1n << BigInt(bits) : 1n << BigInt(bits - 1), 0x80n]);
      code.push(...address, ...address, 0xfe, 0x10 + w, ...m, type === I32 ? 0x41 : 0x42, ...s64(BigInt.asIntN(type === I32 ? 32 : 64, k)), type === I32 ? 0x73 : 0x85,
        ...constant(type), 0xfe, ...u32(0x48 + w), ...m, ...toI64(type), ...accumulate);
    } else if (kind === 'fence') code.push(0xfe, 0x03, 0x00);
    else code.push(...address, 0x41, g.int(0, 3), 0xfe, 0x00, ...memarg(2), 0xad, ...accumulate);
  }
  code.push(0x20, 1);
  return { kinds, bytes: moduleOf([{ name: 'run', params: [memory64 ? I64 : I32], results: [I64], locals: [[1, I64]], code }], { memory64 }),
    base: 8 * g.int(0, 128), seed: g.int(0, 2 ** 31) };
}
/** The program's result and its whole memory afterwards, from the same initial memory. */
function execute(bytes, base, seed, memory64) {
  const e = instance(bytes), memory = new Uint8Array(e.memory.buffer);
  let x = seed >>> 0 || 1;
  for (let i = 0; i < 4096; i++) { x ^= x << 13; x >>>= 0; x ^= x >>> 17; x ^= x << 5; x >>>= 0; memory[i] = x & 0xff; memory[8192 + i] = x >>> 8 & 0xff; memory[65536 + i] = x >>> 16 & 0xff; }
  const result = e.run(memory64 ? BigInt(base) : base);
  return { result, memory: Buffer.from(memory) };
}

// ∀ p : atomic program, run (lower p) = run p ∧ memory (lower p) = memory p ∧ ¬ hasAtomics (lower p)
for (const memory64 of [false, true]) {
  test(`lowerAtomics: random atomic programs compute the same result and memory (${memory64 ? 'memory64' : '32-bit memory'})`, () => {
    forAll(g => atomicProgram(g, memory64), ({ bytes, base, seed }) => {
      const lowered = lowerAtomics(bytes);
      assert.notEqual(lowered, bytes);
      assert.ok(WebAssembly.validate(bytes) && WebAssembly.validate(lowered), 'the original and lowered modules are valid');
      // Lowering it again changes nothing: no atomic instruction is left.
      assert.equal(lowerAtomics(lowered), lowered);
      const before = execute(bytes, base, seed, memory64), after = execute(lowered, base, seed, memory64);
      assert.equal(after.result, before.result);
      assert.ok(after.memory.equals(before.memory), 'the same memory');
    }, { runs: 150, seed: memory64 ? 64 : 32 });
  });
}

test('lowerAtomics: helpers are shared per operation and width, and their types per signature', () => {
  // add and sub of i32 share a signature; two adds share one helper; an i64 add has its own.
  const code = [0x20, 0, 0x41, 1, 0xfe, 0x1e, 2, 0, 0x1a, 0x20, 0, 0x41, 1, 0xfe, 0x1e, 2, 4, 0x1a,
    0x20, 0, 0x41, 1, 0xfe, 0x25, 2, 0, 0x1a, 0x20, 0, 0x42, 1, 0xfe, 0x1f, 3, 8, 0x1a];
  const bytes = moduleOf([{ name: 'f', params: [I32], results: [], code }]);
  const lowered = lowerAtomics(bytes);
  const module = new WebAssembly.Module(lowered);
  assert.deepEqual(WebAssembly.Module.exports(module).map(e => e.name), ['memory', 'f']);
  const counts = sectionCounts(lowered);
  assert.equal(counts[3], 1 + 3, 'one function and three helpers (add32, sub32, add64)');
  assert.equal(counts[10], 1 + 3);
  assert.equal(counts[1], 1 + 2, 'two new types: (i32, i32, i32) -> i32 and (i32, i64, i32) -> i64');
  const e = new WebAssembly.Instance(module).exports, view = new DataView(e.memory.buffer);
  e.f(16);
  assert.deepEqual([view.getUint32(16, true), view.getUint32(20, true), view.getBigUint64(24, true)], [1 - 1 >>> 0, 1, 1n]);
});

/** The item counts of a module's vector sections, by section id. */
function sectionCounts(bytes) {
  const counts = {};
  for (let at = 8; at < bytes.length;) {
    const id = bytes[at++]; let size = 0, shift = 0, b;
    do { b = bytes[at++]; size += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
    if (id !== 0) { let n = 0, s = 0, c, p = at; do { c = bytes[p++]; n += (c & 0x7f) * 2 ** s; s += 7; } while (c & 0x80); counts[id] = n; }
    at += size;
  }
  return counts;
}

test('lowerAtomics: memory.atomic.wait traps (nothing can wake it) and notify wakes no one, as on unshared memory', () => {
  const fns = [
    { name: 'wait32', params: [I32], results: [I32], code: [0x20, 0, 0x41, 0, 0x42, 0, 0xfe, 0x01, 2, 4] },
    { name: 'wait64', params: [I32], results: [I32], code: [0x20, 0, 0x42, 0, 0x42, 0, 0xfe, 0x02, 3, 8] },
    { name: 'notify', params: [I32], results: [I32], code: [0x20, 0, 0x41, 5, 0xfe, 0x00, 2, 0x80, 0x01] },
  ];
  for (const memory64 of [false, true]) {
    const original = moduleOf(fns.map(f => ({ ...f, params: [memory64 ? I64 : I32] })), { memory64 });
    const lowered = lowerAtomics(original);
    assert.ok(WebAssembly.validate(lowered));
    for (const bytes of [original, lowered]) {
      const e = instance(bytes), at = memory64 ? 64n : 64;
      assert.throws(() => e.wait32(at), WebAssembly.RuntimeError);
      assert.throws(() => e.wait64(at), WebAssembly.RuntimeError);
      assert.equal(e.notify(at), 0);
    }
  }
});

test('lowerAtomics: a memarg with a memory index keeps its offset', () => {
  // align | 0x40, memory 0, offset 300 (multi-memory encoding).
  const fns = [{ name: 'f', params: [I32], results: [I32], code: [0x20, 0, 0x41, 7, 0xfe, 0x17, 0x42, 0x00, ...u32(300), 0x20, 0, 0x41, 2, 0xfe, 0x1e, 0x42, 0x00, ...u32(300), 0x1a,
    0x20, 0, 0x28, 0x42, 0x00, ...u32(300)] }];
  const original = moduleOf(fns);
  const lowered = lowerAtomics(original);
  assert.equal(lowerAtomics(lowered), lowered);
  assert.equal(instance(lowered).f(8), 9);
  assert.equal(instance(original).f(8), 9);
});

test('lowerAtomics: modules without atomics are returned as they are', () => {
  const plain = moduleOf([{ name: 'f', params: [I32], results: [I32], code: [0x20, 0, 0x28, 2, 0] }]);
  assert.equal(lowerAtomics(plain), plain);
  // An ArrayBuffer is read as bytes; without a code section nothing is decoded.
  const noCode = Uint8Array.from([...header, ...section(5, vec([[0x00, 1]]))]);
  assert.deepEqual(lowerAtomics(noCode.buffer), noCode);
  const lowered = lowerAtomics(moduleOf([{ name: 'f', params: [I32], results: [I32], code: [0x20, 0, 0xfe, 0x10, 2, 0] }]).buffer);
  assert.ok(lowered instanceof Uint8Array && WebAssembly.validate(lowered));
  // Sections after the code section (custom ones such as names) are kept.
  const custom = moduleOf([{ name: 'f', params: [I32], results: [I32], code: [0x20, 0, 0xfe, 0x10, 2, 0] }], { custom: [['name', [1, 2, 3]], ['lasm.notices', [9]]] });
  const kept = lowerAtomics(custom);
  assert.deepEqual(WebAssembly.Module.customSections(new WebAssembly.Module(kept), 'lasm.notices').map(b => [...new Uint8Array(b)]), [[9]]);
  assert.deepEqual(kept.subarray(kept.length - 16), custom.subarray(custom.length - 16));
});

test('lowerAtomics: malformed and unsupported modules fail naming the problem', () => {
  assert.throws(() => lowerAtomics(Uint8Array.from([0, 0x61, 0x73, 0x6e, 1, 0, 0, 0])), /Not a WebAssembly module/);
  for (const at of [0, 1, 2, 3, 4]) {
    const bytes = moduleOf([{ name: 'f', params: [], results: [], code: [] }]);
    bytes[at] ^= 0x10;
    assert.throws(() => lowerAtomics(bytes), /Not a WebAssembly module/, `byte ${at}`);
  }
  const good = moduleOf([{ name: 'f', params: [I32], results: [I32], code: [0x20, 0, 0xfe, 0x10, 2, 0] }]);
  assert.throws(() => lowerAtomics(good.subarray(0, good.length - 3)), /Unexpected end of WebAssembly module/);
  // A section whose size LEB runs past the end; a section longer than the module.
  assert.throws(() => lowerAtomics(Uint8Array.from([...header, 1, 0x80])), /Unexpected end of WebAssembly module/);
  assert.throws(() => lowerAtomics(Uint8Array.from([...header, 1, 5, 0, 0])), /Unexpected end of WebAssembly module/);
  // A function body longer than its code section.
  assert.throws(() => lowerAtomics(Uint8Array.from([...header, ...section(1, vec([[0x60, 0, 0]])), ...section(3, vec([[0]])), ...section(10, [1, 6, 0, 0x01, 0x01])])),
    /Unexpected end of WebAssembly module/);
  const atomic = sub => moduleOf([{ name: 'f', params: [I32], results: [], code: [0x20, 0, 0x41, 0, 0xfe, ...u32(sub), 2, 0] }]);
  assert.throws(() => lowerAtomics(atomic(0x4f)), /Unknown atomic instruction 0xfe 79/);
  assert.throws(() => lowerAtomics(atomic(0x04)), /Unknown atomic instruction 0xfe 4/);
  assert.throws(() => lowerAtomics(moduleOf([{ name: 'f', params: [], results: [], code: [0xfc, 18, 0, 0xfe, 0x03, 0] }])), /Unknown instruction 0xfc 18/);
  assert.throws(() => lowerAtomics(moduleOf([{ name: 'f', params: [], results: [], code: [0xfd, 12, 0xfe, 0x03, 0] }])),
    /Unsupported WebAssembly instruction 0xfd \(SIMD and GC/);
  assert.throws(() => lowerAtomics(moduleOf([{ name: 'f', params: [], results: [], code: [0xfb, 1, 0xfe, 0x03, 0] }])), /Unsupported WebAssembly instruction 0xfb/);
  // Opcodes no proposal assigns, below the memory instructions.
  for (const op of [0x16, 0x17, 0x1d, 0x1e, 0x27])
    assert.throws(() => lowerAtomics(moduleOf([{ name: 'f', params: [], results: [], code: [op, 0, 0, 0xfe, 0x03, 0] }])), new RegExp(`Unsupported WebAssembly instruction 0x${op.toString(16)}`));
  // A code section with more bodies than the function section declares.
  const mismatched = Uint8Array.from([...header, ...section(1, vec([[0x60, 0, 0]])), ...section(3, vec([[0]])),
    ...section(10, vec([[2, 0, 0x0b], [2, 0, 0x0b]]))]);
  assert.throws(() => lowerAtomics(mismatched), /Function and code section counts differ/);
  const badImport = Uint8Array.from([...header, ...section(1, vec([[0x60, 0, 0]])), ...section(2, vec([[...name('m'), ...name('x'), 5, 0]])),
    ...section(3, vec([[0]])), ...section(10, vec([[2, 0, 0x0b]]))]);
  assert.throws(() => lowerAtomics(badImport), /Unknown import kind 5/);
  assert.throws(() => moduleImports(badImport), /Unknown import kind 5/);
});

// Modules of every other instruction kind: binaryen writes them, the lowering
// decodes every instruction, and its output must be valid without atomics.
const binaryen = await import('binaryen').then(m => m.default, () => null);
const F = binaryen?.Features ?? { Atomics: 0 };
const features = binaryen ? F.Atomics | F.MutableGlobals | F.NontrappingFPToInt | F.BulkMemory | F.SignExt | F.ExceptionHandling | F.TailCall | F.ReferenceTypes
  | F.Multivalue | F.GC | F.BulkMemoryOpt | F.Memory64 : 0;
const fixtureFile = new URL('./fixtures/lower-atomics-modules.json', import.meta.url);
const recorded = JSON.parse(readFileSync(fixtureFile, 'utf8'));
let added = 0;
after(() => {
  if (added && process.env.LASM_UPDATE_LOWER_ATOMICS === '1')
    writeFileSync(fixtureFile, '{\n' + Object.keys(recorded).sort().map(key => `${JSON.stringify(key)}: ${JSON.stringify(recorded[key])}`).join(',\n') + '\n}\n');
});
function binary(text) {
  const key = createHash('sha256').update(text).digest('hex');
  if (recorded[key]) return new Uint8Array(Buffer.from(recorded[key], 'base64'));
  assert.ok(binaryen, 'no recorded module for this text: install binaryen and run with LASM_UPDATE_LOWER_ATOMICS=1');
  const module = binaryen.parseText(text);
  try {
    module.setFeatures(features);
    assert.ok(module.validate(), 'the test module is valid');
    const bytes = module.emitBinary();
    recorded[key] = Buffer.from(bytes).toString('base64');
    added++;
    return bytes;
  } finally { module.dispose(); }
}
function validWithout(bytes, without) {
  if (!binaryen) return WebAssembly.validate(bytes) && lowerAtomics(bytes) === bytes;
  let module;
  try { module = binaryen.readBinary(bytes, features & ~without); }
  catch { return false; }
  try { module.setFeatures(features & ~without); return !!module.validate(); } finally { module.dispose(); }
}
// Stack-neutral statements, of every instruction encoding the decoder knows;
// their constants and offsets hold 0xfe bytes, which a misread takes for an atomic prefix.
const statements = a => [
  '(nop)',
  '(block $b (loop $l (br_if $l (i32.eqz (i32.const 1))) (br $b)))',
  '(drop (block (result i32) (i32.const 254)))',
  '(tuple.drop 2 (block (type $pair) (tuple.make 2 (i32.const 1) (i32.const 254))))',
  '(if (local.get 0) (then (nop)) (else (unreachable)))',
  '(drop (if (result i64) (i32.const 1) (then (i64.const 254)) (else (i64.const -254))))',
  '(drop (call $id (i32.const 254)))',
  '(drop (call $imp (i32.const 1)))',
  '(drop (call_indirect $tbl (type $t) (i32.const 0) (i32.const 0)))',
  '(drop (call_ref $t (i32.const 1) (ref.func $id)))',
  '(drop (ref.is_null (ref.null func)))',
  '(drop (ref.as_non_null (ref.func $id)))',
  '(drop (ref.eq (ref.null eq) (ref.null eq)))',
  '(drop (block $nn (result (ref $t)) (br_on_non_null $nn (ref.func $id)) (unreachable)))',
  '(block $z (drop (br_on_null $z (ref.func $id))))',
  '(drop (select (i32.const 1) (i32.const 2) (i32.const 0)))',
  '(drop (select (result funcref) (ref.null func) (ref.func $id) (i32.const 0)))',
  '(local.set 1 (f64.const 0x1.efefefefefefep+0))',
  '(drop (local.tee 1 (f64.const -0x1.fefefep+1)))',
  '(drop (f32.const 0x1.fdfdfcp+0))',
  '(drop (i64.const -0x7efefefefefefefe))',
  '(global.set $g (global.get $gi))',
  '(drop (table.get $t2 (i32.const 0)))',
  '(table.set $t2 (i32.const 0) (ref.null func))',
  '(drop (memory.size))',
  `(drop (memory.grow (${a}.const 0)))`,
  `(memory.fill (${a}.const 0) (i32.const 254) (${a}.const 0))`,
  `(memory.copy (${a}.const 0) (${a}.const 0) (${a}.const 0))`,
  `(memory.init $d (${a}.const 0) (i32.const 0) (i32.const 0))`,
  '(data.drop $d)',
  '(table.init $t2 $e2 (i32.const 0) (i32.const 0) (i32.const 0))',
  '(elem.drop $e2)',
  '(table.copy $t2 $t2 (i32.const 0) (i32.const 0) (i32.const 0))',
  '(drop (table.size $t2))',
  '(drop (table.grow $t2 (ref.null func) (i32.const 0)))',
  '(table.fill $t2 (i32.const 0) (ref.null func) (i32.const 0))',
  '(drop (i32.trunc_sat_f64_s (local.get 1)))',
  '(drop (i64.trunc_sat_f32_u (f32.const 1)))',
  '(drop (i64.extend32_s (i64.const 254)))',
  '(try (do (throw $e (i32.const 254))) (catch $e (drop (pop i32))) (catch_all (rethrow 0)))',
  '(try (do (nop)) (delegate 0))',
  '(drop (block $out (result i32) (try_table (catch $e $out) (throw $e (i32.const 1))) (i32.const 0)))',
  '(drop (block $ref (result exnref) (try_table (catch_all_ref $ref) (nop)) (ref.null exn)))',
  '(block $x (throw_ref (block $exn (result exnref) (try_table (catch_all_ref $exn) (br $x)) (unreachable))))',
  `(drop (i32.load8_u offset=254 (${a}.const 0)))`,
  `(i64.store32 offset=65534 align=2 (${a}.const 0) (i64.const 254))`,
  '(block $bt (br_table $bt $bt $bt (local.get 0)))',
];
const atomicsOf = a => [
  `(drop (i32.atomic.rmw.add offset=254 (${a}.const 0) (i32.const 254)))`,
  `(drop (i64.atomic.rmw8.cmpxchg_u offset=8 (${a}.const 0) (i64.const 254) (i64.const 3)))`,
  `(i32.atomic.store16 offset=65534 (${a}.const 0) (i32.const 1))`,
  '(atomic.fence)',
  `(drop (memory.atomic.notify (${a}.const 0) (i32.const 1)))`,
  `(drop (memory.atomic.wait64 (${a}.const 0) (i64.const 0) (i64.const 0)))`,
];
function kitchenSink(memory64, chosen) {
  const a = memory64 ? 'i64' : 'i32';
  return `(module
 (type $t (func (param i32) (result i32)))
 (type $pair (func (result i32 i32)))
 (import "env" "f" (func $imp (param i32) (result i32)))
 (import "env" "tbl" (table $tbl 1 funcref))
 (import "env" "t64" (table $tbl64 i64 1 2 funcref))
 (import "env" "g" (global $gi i32))
 (import "env" "gm" (global $gm (mut i64)))
 (import "env" "tag" (tag $e (param i32)))
 (memory ${memory64 ? 'i64 ' : ''}2 3)
 (table $t2 2 funcref)
 (global $g (mut i32) (i32.const 0))
 (data $d "hello")
 (elem $e2 func $id)
 (elem declare func $id)
 (func $id (type $t) (local.get 0))
 (func $tail (param i32) (result i32) (return_call $id (local.get 0)))
 (func $tail2 (param i32) (result i32) (return_call_indirect $tbl (type $t) (local.get 0) (i32.const 0)))
 (func $tail3 (param i32) (result i32) (return_call_ref $t (local.get 0) (ref.func $id)))
 (func $f (export "f") (param i32) (result i32) (local f64) (local (ref null $t))
  ${chosen.join('\n  ')}
  (i32.const 0)))`;
}

// ∀ s : list of statements of every kind, ∀ i : atomic instructions placed between them,
//   valid (lower (module s i)) without threads ∧ lower (module s []) = module s []
for (const memory64 of [false, true]) {
  test(`lowerAtomics decodes every other instruction kind exactly (${memory64 ? 'memory64' : '32-bit memory'})`, () => {
    const all = statements(memory64 ? 'i64' : 'i32'), atomics = atomicsOf(memory64 ? 'i64' : 'i32');
    // Without atomics: the same bytes, after decoding every instruction.
    const plain = binary(kitchenSink(memory64, all));
    assert.equal(lowerAtomics(plain), plain);
    forAll(g => {
      const chosen = [];
      for (const statement of g.array(g.int(1, 12), () => g.pick(all))) { chosen.push(statement); if (g.next() < 0.7) chosen.push(g.pick(atomics)); }
      chosen.push(g.pick(atomics));
      return chosen;
    }, chosen => {
      const bytes = binary(kitchenSink(memory64, chosen));
      const lowered = lowerAtomics(bytes);
      assert.notEqual(lowered, bytes, 'the test module uses atomics');
      assert.ok(validWithout(lowered, F.Atomics), 'the lowered module is valid without atomics');
      assert.equal(lowerAtomics(lowered), lowered);
    }, { runs: 60, seed: memory64 ? 7 : 3 });
    // Every statement, each followed by an atomic.
    const each = all.flatMap((statement, i) => [statement, atomics[i % atomics.length]]);
    assert.ok(validWithout(lowerAtomics(binary(kitchenSink(memory64, each))), F.Atomics));
  });
}

test('moduleImports: every import kind, with names, past the other sections', () => {
  const imports = [
    [...name('wasi_snapshot_preview1'), ...name('fd_write'), 0x00, 0],
    [...name('env'), ...name('table'), 0x01, 0x70, 0x01, 1, 10],
    [...name('env'), ...name('memory'), 0x02, 0x01, 1, ...u32(300)],
    [...name('env'), ...name('memory64'), 0x02, 0x05, ...u64(1), ...u64(2n ** 40n)],
    [...name('env'), ...name('table64'), 0x01, 0x70, 0x04, ...u64(1)],
    [...name('env'), ...name('global'), 0x03, I64, 1],
    [...name('env'), ...name('tag'), 0x04, 0, 0],
    [...name('ünï'), ...name('ç'), 0x00, 0],
  ];
  const bytes = Uint8Array.from([...header, ...section(1, vec([[0x60, 0, 0]])), ...section(2, vec(imports)), ...section(0, [...name('x'), 2, 3])]);
  assert.deepEqual(moduleImports(bytes), [
    { module: 'wasi_snapshot_preview1', name: 'fd_write', kind: 0 }, { module: 'env', name: 'table', kind: 1 },
    { module: 'env', name: 'memory', kind: 2 }, { module: 'env', name: 'memory64', kind: 2 }, { module: 'env', name: 'table64', kind: 1 },
    { module: 'env', name: 'global', kind: 3 }, { module: 'env', name: 'tag', kind: 4 }, { module: 'ünï', name: 'ç', kind: 0 }]);
  assert.deepEqual(moduleImports(bytes.buffer), moduleImports(bytes));
  assert.deepEqual(moduleImports(Uint8Array.from(header)), []);
  // lowerAtomics counts only the imported functions before its helpers.
  const withImports = Uint8Array.from([...header, ...section(1, vec([[0x60, 1, I32, 1, I32], [0x60, 0, 0]])), ...section(2, vec([
    [...name('env'), ...name('f'), 0x00, 0], [...name('env'), ...name('t'), 0x01, 0x70, 0x00, 1], [...name('env'), ...name('g'), 0x03, I32, 0],
    [...name('env'), ...name('h'), 0x00, 0], [...name('env'), ...name('tag'), 0x04, 0, 1], [...name('env'), ...name('mem2'), 0x02, 0x01, 1, ...u32(300)], [...name('env'), ...name('t64'), 0x01, 0x70, 0x05, ...u64(1), ...u64(9)]])),
  ...section(3, vec([[0]])), ...section(5, vec([[0x00, 1]])), ...section(7, vec([[...name('f'), 0x00, 2], [...name('memory'), 0x02, 0]])),
  ...section(10, vec([(body => [...u32(body.length), ...body])([0, 0x20, 0, 0x41, 3, 0xfe, 0x1e, 2, 0, 0x0b])]))]);
  const lowered = lowerAtomics(withImports);
  const env = { f: x => x, h: x => x, t: new WebAssembly.Table({ initial: 1, element: 'anyfunc' }), g: new WebAssembly.Global({ value: 'i32' }, 0),
    tag: new WebAssembly.Tag({ parameters: [] }), mem2: new WebAssembly.Memory({ initial: 1, maximum: 300 }), t64: new WebAssembly.Table({ initial: 1n, maximum: 9n, element: 'anyfunc', address: 'i64' }) };
  const e = new WebAssembly.Instance(new WebAssembly.Module(lowered), { env }).exports;
  new DataView(e.memory.buffer).setUint32(16, 4, true);
  assert.equal(e.f(16), 4);
  assert.equal(new DataView(e.memory.buffer).getUint32(16, true), 7);
});

test('keepExports keeps the accepted exports in order and every other section as it was', () => {
  const fns = ['a', 'b', 'c', 'd'].map((n, i) => ({ name: n, params: [], results: [I32], code: [0x41, 10 + i] }));
  const bytes = moduleOf(fns, { custom: [['after', [1, 2]]] });
  const kept = keepExports(bytes, n => n === 'd' || n === 'b' || n === 'memory');
  const module = new WebAssembly.Module(kept);
  assert.deepEqual(WebAssembly.Module.exports(module).map(e => e.name), ['memory', 'b', 'd']);
  const e = new WebAssembly.Instance(module).exports;
  assert.deepEqual([e.b(), e.d()], [11, 13]);
  assert.deepEqual(WebAssembly.Module.customSections(module, 'after').map(b => [...new Uint8Array(b)]), [[1, 2]]);
  assert.deepEqual(keepExports(bytes, () => true), bytes);
  assert.deepEqual(keepExports(bytes.buffer, () => true), bytes);
  assert.deepEqual(WebAssembly.Module.exports(new WebAssembly.Module(keepExports(bytes, () => false))), []);
  // A name longer than 127 bytes (a two-byte length).
  const long = 'x'.repeat(200);
  const named = moduleOf([{ name: long, params: [], results: [], code: [] }]);
  assert.deepEqual(WebAssembly.Module.exports(new WebAssembly.Module(keepExports(named, n => n === long))).map(e => e.name), [long]);
});

// Instruction streams of every encoding the decoder knows, with random
// immediates (multi-byte indices, constants and memargs, 0xfe bytes inside
// them), atomics among them, and local declarations of every value type. The
// bodies need not be valid: the lowering reads instructions, it does not type
// them. Expected output: each atomic replaced as docs/WASI.md describes, every
// other byte kept, helper functions numbered after the imported and defined ones.
const rmwKeys = ['add', 'sub', 'and', 'or', 'xor', 'xchg', 'cmpxchg'];
const plainOf = { 0x10: 0x28, 0x11: 0x29, 0x12: 0x2d, 0x13: 0x2f, 0x14: 0x31, 0x15: 0x33, 0x16: 0x35, 0x17: 0x36, 0x18: 0x37, 0x19: 0x3a, 0x1a: 0x3b, 0x1b: 0x3c, 0x1c: 0x3d, 0x1d: 0x3e };
function streamGenerators(g) {
  const big = () => g.pick([0, 1, 63, 64, 127, 128, 254, 16383, 16384, 0xfe, 0x7e00 + g.int(0, 255), g.int(0, 2 ** 31)]);
  const heapType = () => g.next() < 0.5 ? [g.int(0x69, 0x74)] : s64(big());
  const valueType = () => g.next() < 0.6 ? [g.pick([0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x70, 0x6f])] : [g.pick([0x63, 0x64]), ...heapType()];
  const blockType = () => { const k = g.int(0, 3); return k === 0 ? [0x40] : k === 1 ? [g.pick([0x7f, 0x7e, 0x7d, 0x7c, 0x7b, 0x70, 0x6f])] : k === 2 ? [g.pick([0x63, 0x64]), ...heapType()] : s64(big()); };
  const memarg = () => { const align = g.int(0, 3), memory = g.next() < 0.2; const offset = big(); return { bytes: [...u32(align | (memory ? 0x40 : 0)), ...(memory ? u32(0) : []), ...u64(offset)], offset }; };
  const plain = () => {
    const k = g.int(0, 19);
    if (k === 0) return [g.pick([0x00, 0x01, 0x05, 0x0b, 0x0f, 0x1a, 0x1b, 0xd1, 0xd3, 0xd4, 0x19, 0x0a])];
    if (k === 1) return [g.int(0x45, 0xc4)];
    if (k === 2) return [g.pick([0x02, 0x03, 0x04, 0x06]), ...blockType()];
    if (k === 3) return [g.pick([0x07, 0x08, 0x09, 0x0c, 0x0d, 0x10, 0x12, 0x14, 0x15, 0x18, 0xd2, 0xd5, 0xd6, 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26]), ...u32(big())];
    if (k === 4) { const n = g.int(0, 4); return [0x0e, ...u32(n), ...g.array(n, () => u32(big())).flat(), ...u32(big())]; }
    if (k === 5) return [g.pick([0x11, 0x13]), ...u32(big()), ...u32(big())];
    if (k === 6) { const n = g.int(0, 3); return [0x1c, ...u32(n), ...g.array(n, valueType).flat()]; }
    if (k === 7) { const n = g.int(0, 3); return [0x1f, ...blockType(), ...u32(n), ...g.array(n, () => { const kind = g.int(0, 3); return [kind, ...(kind < 2 ? u32(big()) : []), ...u32(big())]; }).flat()]; }
    if (k === 8) return [g.pick([0x3f, 0x40]), ...u32(g.int(0, 2))];
    if (k === 9) return [0x41, ...s64(BigInt.asIntN(32, BigInt(big()) * BigInt(g.pick([1, -1]))))];
    if (k === 10) return [0x42, ...s64(BigInt(big()) * BigInt(g.pick([1, -1, 1 << 20])))];
    if (k === 11) return [0x43, ...g.array(4, () => g.pick([0xfe, 0x00, g.int(0, 255)]))];
    if (k === 12) return [0x44, ...g.array(8, () => g.pick([0xfe, 0x00, g.int(0, 255)]))];
    if (k === 13) return [0xd0, ...heapType()];
    if (k === 14) { const sub = g.int(0, 17); return [0xfc, ...u32(sub), ...([8, 10, 12, 14].includes(sub) ? [...u32(big()), ...u32(big())] : sub > 7 ? u32(big()) : [])]; }
    return [g.int(0x28, 0x3e), ...memarg().bytes];
  };
  const atomic = memory64 => {
    const k = g.int(0, 4);
    if (k === 0) return { bytes: [0xfe, 0x03, 0x00], lowered: () => [] };
    const sub = k === 1 ? g.int(0x10, 0x1d) : k === 2 ? g.int(0x1e, 0x4e) : k === 3 ? 0x00 : g.pick([0x01, 0x02]);
    const m = memarg();
    const bytes = [0xfe, ...u32(sub), ...m.bytes];
    if (k === 1) return { bytes, lowered: () => [plainOf[sub], ...m.bytes] };
    const key = k === 2 ? rmwKeys[Math.floor((sub - 0x1e) / 7)] + (sub - 0x1e) % 7 : sub === 0 ? 'notify' : `wait${sub === 1 ? I32 : I64}`;
    return { bytes, key, lowered: index => [memory64 ? 0x42 : 0x41, ...s64(m.offset), 0x10, ...u32(index(key))] };
  };
  const locals = () => g.array(g.int(0, 4), () => [...u32(g.pick([1, 2, 0x28, 0x41, 0x7f, 0xfe, 300, g.int(0, 70)])), ...valueType()]);
  return { plain, atomic, locals };
}
function codeBodies(bytes) {
  for (let at = 8; at < bytes.length;) {
    const id = bytes[at++]; let size = 0, shift = 0, b;
    do { b = bytes[at++]; size += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
    if (id === 10) {
      const bodies = []; let p = at, n = 0; shift = 0;
      do { b = bytes[p++]; n += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
      for (let i = 0; i < n; i++) { let s = 0, sh = 0; do { b = bytes[p++]; s += (b & 0x7f) * 2 ** sh; sh += 7; } while (b & 0x80); bodies.push([...bytes.subarray(p, p + s)]); p += s; }
      return bodies;
    }
    at += size;
  }
  return [];
}
// ∀ bodies b of instructions i₁…iₙ, code (lower (module b)) = [i₁'…iₙ' | b] ++ helpers,
//   where i' = i for every non-atomic i and the documented replacement otherwise
for (const memory64 of [false, true]) {
  test(`lowerAtomics copies every other instruction exactly and replaces each atomic (${memory64 ? 'memory64' : '32-bit memory'})`, () => {
    forAll(g => {
      const gen = streamGenerators(g);
      const imported = g.int(0, 3);
      const functions = g.array(g.int(1, 4), () => ({ locals: gen.locals(), parts: g.array(g.int(0, 25), () => g.next() < 0.35 ? gen.atomic(memory64) : { bytes: gen.plain() }) }));
      if (!functions.some(f => f.parts.some(p => p.lowered))) functions[0].parts.push(gen.atomic(memory64));
      return { imported, functions, types: g.pick([1, 3, 200]) };
    }, ({ imported, functions, types }) => {
      const imports = [...Array.from({ length: imported }, (_, i) => [...name('env'), ...name('f' + i), 0x00, 0]), [...name('env'), ...name('g'), 0x03, I32, 0]];
      const bodies = functions.map(f => [...vec(f.locals), ...f.parts.flatMap(p => p.bytes), 0x0b]);
      const module = Uint8Array.from([...header, ...section(1, vec(Array.from({ length: types }, () => [0x60, 0, 0]))), ...section(2, vec(imports)),
        ...section(3, vec(functions.map(() => [0]))), ...section(5, vec([[memory64 ? 0x04 : 0x00, 1]])),
        ...section(10, vec(bodies.map(b => [...u32(b.length), ...b])))]);
      const keys = [];
      const index = key => { if (!keys.includes(key)) keys.push(key); return imported + functions.length + keys.indexOf(key); };
      const expected = functions.map(f => [...vec(f.locals), ...f.parts.flatMap(p => p.lowered ? p.lowered(index) : p.bytes), 0x0b]);
      const lowered = lowerAtomics(module);
      const out = codeBodies(lowered);
      assert.equal(out.length, functions.length + keys.length, 'one helper per operation and width');
      assert.deepEqual(out.slice(0, functions.length), expected);
      assert.deepEqual(sectionCounts(lowered)[3], functions.length + keys.length);
    }, { runs: 300, seed: memory64 ? 640 : 320 });
  });
}
