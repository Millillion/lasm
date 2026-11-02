// The Node link driver's Wasm reader and metadata extraction
// (src/link-driver/wasm.mjs, src/link-driver/metadata.mjs: ports of
// Emscripten's tools/webassembly.py and tools/extract_metadata.py) on small
// hand-built modules: every section and entry kind they read, and every
// malformed input they must refuse as the Python reader does.
import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { WasmModule, InvalidWasmError, getWeakImports, typeToSig, Type, OpCode, ExternType, SecType } from '../src/link-driver/wasm.mjs';
import { extractMetadata, updateMetadata, getConstExprValue, readWasm } from '../src/link-driver/metadata.mjs';

const uleb = value => { const out = []; let big = BigInt(value); do { let byte = Number(big & 0x7fn); big >>= 7n; if (big) byte |= 0x80; out.push(byte); } while (big); return out; };
const sleb = value => {
  const out = []; let big = BigInt(value);
  for (;;) {
    const byte = Number(big & 0x7fn); big >>= 7n;
    if ((big === 0n && !(byte & 0x40)) || (big === -1n && byte & 0x40)) { out.push(byte); return out; }
    out.push(byte | 0x80);
  }
};
const name = text => { const bytes = [...Buffer.from(text)]; return [...uleb(bytes.length), ...bytes]; };
const section = (id, body) => [id, ...uleb(body.length), ...body];
const vector = items => [...uleb(items.length), ...items.flat()];
const custom = (title, body) => section(0, [...name(title), ...body]);
const header = [0, 0x61, 0x73, 0x6d, 1, 0, 0, 0];
const i32 = value => [0x41, ...sleb(value), 0x0b];
const I32 = 0x7f, I64 = 0x7e;

/** A module from its parts; each part is optional. */
function wasm({ first = [], types, imports, functions, tables, memory, globals, exports, start, code, data, after = [] }) {
  return Buffer.from([...header, ...first,
    ...(types ? section(1, vector(types)) : []), ...(imports ? section(2, vector(imports)) : []), ...(functions ? section(3, vector(functions.map(uleb))) : []),
    ...(tables ? section(4, vector(tables)) : []), ...(memory ? section(5, vector(memory)) : []), ...(globals ? section(6, vector(globals)) : []),
    ...(exports ? section(7, vector(exports)) : []), ...(start !== undefined ? section(8, uleb(start)) : []),
    ...(code ? section(10, vector(code.map(body => [...uleb(body.length), ...body]))) : []), ...(data ? section(11, vector(data)) : []), ...after]);
}
const fn = (params, results) => [0x60, ...vector(params.map(p => [p])), ...vector(results.map(r => [r]))];
const body = (code, locals = []) => [...vector(locals.map(([count, type]) => [...uleb(count), type])), ...code];

test('the reader takes a bare header and refuses anything shorter or different', () => {
  const empty = new WasmModule(Buffer.from(header));
  assert.deepEqual(empty.sections(), []);
  assert.equal(empty.getSection(SecType.TYPE), null);
  assert.equal(empty.getCustomSection('x'), null);
  assert.deepEqual([empty.getTypes(), empty.getExports(), empty.getImports(), empty.getGlobals(), empty.getFunctions(), empty.getFunctionTypes()], [[], [], [], [], [], []]);
  assert.equal(empty.getStart(), null);
  assert.equal(empty.getTargetFeatures().size, 0);
  assert.throws(() => empty.getSegments(), error => error instanceof InvalidWasmError && error.message === 'The module has no data section');
  assert.throws(() => new WasmModule(Buffer.from(header.slice(0, 7))), error => error.message === 'module is not a valid wasm file');
  assert.throws(() => new WasmModule([0, 0x61, 0x73, 0x6d, 2, 0, 0, 0], 'x.wasm'), error => error.message === 'x.wasm is not a valid wasm file');
  assert.equal(new WasmModule(Uint8Array.from(header)).bytes.length, 8);
});

test('LEB128, strings and limits read as the Python reader reads them', () => {
  const reader = bytes => new WasmModule(Buffer.from([...header, ...bytes]));
  const at = (bytes, read) => { const module = reader(bytes); module.seek(8); return [read(module), module.tell()]; };
  assert.deepEqual(at(uleb(624485), m => m.readUleb()), [624485, 11]);
  assert.deepEqual(at(sleb(-123456), m => m.readSleb()), [-123456, 11]);
  assert.deepEqual(at(sleb(-1), m => m.readSleb()), [-1, 9]);
  assert.deepEqual(at(sleb(63), m => m.readSleb()), [63, 9]);
  assert.deepEqual(at(sleb(64), m => m.readSleb()), [64, 10]);
  assert.deepEqual(at(sleb(-64), m => m.readSleb()), [-64, 9]);
  assert.deepEqual(at(uleb(2 ** 40), m => m.readUleb()), [2 ** 40, 14]);
  assert.equal(at(uleb(Number.MAX_SAFE_INTEGER), m => m.readUleb())[0], Number.MAX_SAFE_INTEGER);
  assert.equal(at(sleb(Number.MIN_SAFE_INTEGER), m => m.readSleb())[0], Number.MIN_SAFE_INTEGER);
  assert.throws(() => at(uleb(2 ** 53), m => m.readUleb()), /outside the supported range/);
  assert.throws(() => at(sleb(-(2 ** 53)), m => m.readSleb()), /outside the supported range/);
  assert.throws(() => at([0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f], m => m.readUleb()), error => error.message === 'Wasm integer outside the supported range');
  assert.throws(() => at([0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40], m => m.readSleb()), /outside the supported range/);
  assert.throws(() => at([0x80], m => m.readUleb()), error => error.message === 'Unexpected end of Wasm module');
  assert.deepEqual(at([...name('é!'), 9], m => m.readString()), ['é!', 12]);
  assert.throws(() => at([5, 0x61], m => m.readString()), error => error.message === 'Unexpected end of Wasm module');
  assert.deepEqual(at([1, 0x61], m => m.readString()), ['a', 10]);
  assert.throws(() => at([1, 0xff], m => m.readString()), TypeError, 'invalid UTF-8 is refused');
  assert.deepEqual(at([1, 2, 300 & 0x7f | 0x80, 2], m => m.readLimits()), [{ flags: 1, initial: 2, maximum: 300 }, 12]);
  assert.deepEqual(at([0, 2, 7], m => m.readLimits()), [{ flags: 0, initial: 2, maximum: 0 }, 10]);
  assert.throws(() => at([0x41], m => m.readType()), error => error instanceof InvalidWasmError && error.message === '65 is not a valid Type');
  const module = reader([1, 2, 3]);
  module.seek(9); module.skip(2);
  assert.equal(module.tell(), 11);
  assert.throws(() => module.readByte(), /Unexpected end/);
  assert.deepEqual([...module.readAt(9, 2)], [2, 3]);
});

test('init expressions: constants, globals, additions, null references', () => {
  const reader = bytes => { const module = new WasmModule(Buffer.from([...header, ...bytes])); module.seek(8); return module.readInit(); };
  assert.deepEqual(reader([0x23, 3, 0x41, ...sleb(-5), 0x6a, 0x42, ...sleb(7), 0x7c, 0xd0, 0x70, 0x0b]),
    [[0x23, [3]], [0x41, [-5]], [0x6a, []], [0x42, [7]], [0x7c, []], [0xd0, [0x70]], [0x0b, []]]);
  assert.throws(() => reader([0x10, 0x0b]), error => error.message === 'unexpected opcode 16');
  assert.throws(() => reader([0x99, 0x0b]), error => error.message === 'unexpected opcode 0x99');
  assert.equal(getConstExprValue([[OpCode.END, []]]), 0);
  assert.equal(getConstExprValue([[OpCode.GLOBAL_GET, [1]], [OpCode.I64_CONST, [9]], [OpCode.END, []]]), 9);
  assert.equal(getConstExprValue([[OpCode.I32_CONST, [0]], [OpCode.END, []]]), 0);
  assert.throws(() => getConstExprValue([[OpCode.I32_CONST, [1]]]), error => error.message === 'assertion failed: constant expression without END');
  assert.throws(() => getConstExprValue([]), /without END/);
  assert.throws(() => getConstExprValue([[OpCode.I32_CONST, [1, 2]], [OpCode.END, []]]), error => error.message === 'assertion failed: constant immediates');
  assert.throws(() => getConstExprValue([[OpCode.I32_ADD, []], [OpCode.END, []]]), error => error.message === 'unexpected opcode in const expr: 106');
});

test('sections, types, imports of every kind, exports, globals and the start function', () => {
  const module = new WasmModule(wasm({
    types: [fn([I32, I64], [I32]), fn([], [])],
    imports: [[...name('env'), ...name('f'), 0, 1], [...name('env'), ...name('mem'), 2, 1, 1, 4], [...name('env'), ...name('tab'), 1, 0x70, 0, 2],
      [...name('env'), ...name('g'), 3, I32, 1], [...name('env'), ...name('tag'), 4, 0, 1]],
    functions: [0, 1], globals: [[I64, 0, 0x42, 5, 0x0b], [I32, 1, ...i32(-3)]],
    exports: [[...name('a'), 0, 1], [...name('b'), 0, 2], [...name('t'), 4, 0], [...name('g2'), 3, 2]], start: 2,
    code: [body([0x0b], [[2, I32]]), body([0x0b])], after: custom('trailing', [1, 2]),
  }));
  assert.deepEqual(module.sections().map(s => [s.type, s.name]), [[1, null], [2, null], [3, null], [6, null], [7, null], [8, null], [10, null], [0, 'trailing']]);
  assert.deepEqual(module.getTypes(), [{ params: [I32, I64], returns: [I32] }, { params: [], returns: [] }]);
  assert.deepEqual(module.getImports(), [{ kind: 0, module: 'env', field: 'f', type: 1 }, { kind: 2, module: 'env', field: 'mem', type: null },
    { kind: 1, module: 'env', field: 'tab', type: -16 }, { kind: 3, module: 'env', field: 'g', type: -1 }, { kind: 4, module: 'env', field: 'tag', type: 1 }]);
  assert.equal(module.numImportedFuncs(), 1);
  assert.equal(module.numImportedGlobals(), 1);
  assert.deepEqual(module.getExports(), [{ name: 'a', kind: 0, index: 1 }, { name: 'b', kind: 0, index: 2 }, { name: 't', kind: 4, index: 0 }, { name: 'g2', kind: 3, index: 2 }]);
  assert.deepEqual(module.getGlobals(), [{ type: I64, mutable: 0, init: [[0x42, [5]], [0x0b, []]] }, { type: I32, mutable: 1, init: [[0x41, [-3]], [0x0b, []]] }]);
  assert.equal(module.getStart(), 2);
  assert.deepEqual(module.getFunctionTypes(), [0, 1]);
  const functions = module.getFunctions();
  assert.equal(functions.length, 2);
  assert.equal(functions[1].offset, functions[0].offset + functions[0].size + 1);
  assert.deepEqual(module.getFunction(2), functions[1]);
  assert.deepEqual(module.getFunctionType(0), { params: [], returns: [] });
  assert.deepEqual(module.getFunctionType(1), { params: [I32, I64], returns: [I32] });
  assert.deepEqual(module.getGlobal(2), module.getGlobals()[1]);
  assert.throws(() => module.getFunction(0), error => error.message === 'Function 0 is imported');
  assert.throws(() => module.getFunction(3), error => error.message === 'No function 3');
  assert.throws(() => module.getGlobal(0), error => error.message === 'Global 0 is imported');
  assert.throws(() => module.getGlobal(3), error => error.message === 'No global 3');
  assert.throws(() => module.getFunctionType(9), error => error.message === 'No type for function 9');
  assert.equal(module.getCustomSection('trailing').size, 1 + 8 + 2);
  assert.equal(module.getSection(SecType.EXPORT), module.sections()[4]);
  // Repeated reads come from the first parse.
  assert.equal(module.getImports(), module.getImports());
  assert.equal(module.importsByKind(ExternType.FUNC), module.importsByKind(ExternType.FUNC));
});

test('malformed sections are refused with the Python reader\'s messages', () => {
  const fails = (parts, read, message) => assert.throws(() => read(new WasmModule(wasm(parts))), error => error.message === message, message);
  fails({ after: [14, 0] }, m => m.sections(), '14 is not a valid SecType');
  fails({ types: [[0x5f, 0, 0]] }, m => m.getTypes(), 'Unsupported Wasm type form');
  fails({ exports: [[...name('x'), 5, 0]] }, m => m.getExports(), '5 is not a valid ExternType');
  fails({ imports: [[...name('m'), ...name('x'), 5, 0]] }, m => m.getImports(), '5 is not a valid ExternType');
  fails({ first: custom('target_features', [1, 0x2a, ...name('x')]) }, m => m.getTargetFeatures(), '42 is not a valid TargetFeaturePrefix');
});

test('target features keep their prefixes in section order', () => {
  const module = new WasmModule(wasm({ first: custom('target_features', [3, 0x2b, ...name('atomics'), 0x2d, ...name('simd128'), 0x2b, ...name('bulk-memory')]) }));
  assert.deepEqual([...module.getTargetFeatures()], [['atomics', 0x2b], ['simd128', 0x2d], ['bulk-memory', 0x2b]]);
});

test('data segments: active and passive, with their offsets', () => {
  const module = new WasmModule(wasm({ data: [[0, ...i32(16), 2, 7, 8], [1, 3, 1, 2, 3], [1, 0]] }));
  const segments = module.getSegments();
  assert.deepEqual(segments.map(({ index, flags, init, size }) => ({ index, flags, init, size })), [
    { index: 0, flags: 0, init: [[0x41, [16]], [0x0b, []]], size: 2 }, { index: 1, flags: 1, init: null, size: 3 },
    { index: 2, flags: 1, init: null, size: 0 }]);
  assert.deepEqual([...module.readAt(segments[1].offset, 3)], [1, 2, 3]);
});

test('the dylink sections: legacy, every dylink.0 subsection, and weak imports', () => {
  const legacy = new WasmModule(wasm({ first: custom('dylink', [8, 2, 3, 1, 2, ...name('liba.so'), ...name('libb.so')]) }));
  assert.deepEqual(legacy.parseDylinkSection(), { needed: ['liba.so', 'libb.so'], exportInfo: new Map(), importInfo: new Map(), runtimePaths: [],
    memSize: 8, memAlign: 2, tableSize: 3, tableAlign: 1 });
  const sub = (type, bytes) => [type, ...uleb(bytes.length), ...bytes];
  const dylink = [...sub(1, [16, 3, 4, 0]), ...sub(2, [1, ...name('libc.so')]), ...sub(3, [2, ...name('e1'), 1, ...name('e2'), 0]),
    ...sub(4, [3, ...name('env'), ...name('weak'), 1, ...name('env'), ...name('strong'), 0, ...name('GOT.mem'), ...name('both'), 0x11]),
    ...sub(5, [1, ...name('$ORIGIN')]), ...sub(9, [1, 2, 3]), ...sub(4, [1, ...name('env'), ...name('global'), 3])];
  const module = new WasmModule(wasm({ first: custom('dylink.0', dylink) }));
  const info = module.parseDylinkSection();
  assert.deepEqual(info, { needed: ['libc.so'], exportInfo: new Map([['e1', 1], ['e2', 0]]),
    importInfo: new Map([['env', new Map([['weak', 1], ['strong', 0], ['global', 3]])], ['GOT.mem', new Map([['both', 0x11]])]]),
    runtimePaths: ['$ORIGIN'], memSize: 16, memAlign: 3, tableSize: 4, tableAlign: 0 });
  assert.deepEqual(getWeakImports(module), ['weak', 'both']);
  const malformed = new WasmModule(wasm({ first: custom('dylink.0', [2, 4, 1, ...name('x'), 0]) }));
  assert.throws(() => malformed.parseDylinkSection(), error => error.message === 'Malformed dylink.0 subsection');
  for (const first of [custom('other', []), section(1, vector([]))])
    assert.throws(() => new WasmModule(wasm({ first })).parseDylinkSection(), error => error.message === 'error parsing shared library');
  assert.throws(() => new WasmModule(Buffer.from(header)).parseDylinkSection(), /error parsing shared library/);
});

test('signature letters of the Wasm value types', () => {
  assert.deepEqual([Type.I32, Type.I64, Type.F32, Type.F64, Type.EXTERNREF, Type.VOID].map(typeToSig), ['i', 'j', 'f', 'd', 'e', 'v']);
  assert.throws(() => typeToSig(Type.V128), error => error.message === `No signature letter for Wasm type ${Type.V128}`);
});

// ---- Metadata ------------------------------------------------------------
/** A module whose EM_ASM strings, JS dependencies and EM_JS live in data at
 * `base`; `segments` lets them be passive (placed by the start function). */
function metadataModule({ functionImports = 0, mainBody = [0x10, 1, 0x0b], mainLocals = [], startBody, passive = false, extraExports = [], imports = [], features = [], strings } = {}) {
  const asm = Buffer.from('{ return 1; }\0"$0"\0'), deps = Buffer.from('$a,$b\0\0'), emJs = Buffer.from('(void)<::>{ x("\\\\n"); }\0');
  const data = strings ?? Buffer.concat([Buffer.from('pad\0'), asm, deps, emJs]);
  const base = 1000, asmAt = base + 4, depsAt = asmAt + asm.length, emJsAt = depsAt + deps.length;
  const types = [fn([], []), fn([I32], [I32])];
  const functions = [0, 0, ...(startBody ? [0, 0] : [])];
  const code = [body(mainBody, mainLocals), body([0x0b]), ...(startBody ? [body(startBody), body([0x41, ...sleb(base), 0x41, 0, 0x41, ...sleb(data.length), 0xfc, 0x08, 1, 0, 0x0b])] : [])];
  const imported = functionImports;
  return wasm({ types, imports, functions, memory: [[0, 1]],
    globals: [[I32, 0, ...i32(asmAt)], [I32, 0, ...i32(depsAt)], [I32, 0, ...i32(depsAt)], [I32, 0, ...i32(emJsAt)], [I32, 0, ...i32(emJsAt)]],
    exports: [[...name('main'), 0, imported], [...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1], [...name('__start_em_lib_deps'), 3, 2],
      [...name('__stop_em_lib_deps'), 3, 3], [...name('__em_js__js_fn'), 3, 4], [...name('memory'), 2, 0], ...extraExports],
    ...(startBody ? { start: imported + 2 } : {}),
    code, data: passive ? [[1, ...uleb(4), 0, 0, 0, 0], [1, ...uleb(data.length), ...data]] : [[0, ...i32(base), ...uleb(data.length), ...data]],
    after: features.length ? custom('target_features', [features.length, ...features.flatMap(([prefix, feature]) => [prefix, ...name(feature)])]) : [] });
}

test('metadata: strings by address, EM_JS bodies and JS library dependencies', () => {
  const metadata = extractMetadata(metadataModule(), {});
  assert.deepEqual([...metadata.emAsmConsts], [[1004, '{ return 1; }'], [1018, '"$0"']]);
  assert.deepEqual(metadata.jsDeps, ['$a,$b']);
  assert.deepEqual([...metadata.emJsFuncs], [['js_fn', '(void)<::>{ x("\\n"); }']]);
  assert.deepEqual(metadata.allExports, ['main', '__start_em_asm', '__stop_em_asm', '__start_em_lib_deps', '__stop_em_lib_deps', 'js_fn', 'memory']);
  assert.deepEqual([...metadata.functionExports.keys()], ['main']);
  assert.deepEqual(metadata.otherExports.map(([entry, global]) => [entry.name, global?.type ?? null]),
    [['__start_em_asm', I32], ['__stop_em_asm', I32], ['__start_em_lib_deps', I32], ['__stop_em_lib_deps', I32], ['__em_js__js_fn', I32], ['memory', null]]);
  assert.equal(metadata.mainReadsParams, false);
  // A section with only one of its bounds exported has no strings.
  const half = extractMetadata(metadataModule({ extraExports: [] }).subarray(0), {});
  assert.equal(half.emAsmConsts.size, 2);
  // Passive segments are found through the start function's memory.init.
  const startBody = [0x02, 0x40, 0x01, 0x1a, 0x0b, 0x41, 0, 0x22, 0, 0x21, 0, 0x20, 0, 0x23, 0, 0x24, 0, 0x6a, 0x7c, 0x0c, 0, 0x0e, 2, 0, 0, 0,
    0x42, 1, 0x1a, 0xfc, 0x0b, 0, 0xfc, 0x09, 0, 0xfe, 0x00, 2, 0, 0xfe, 0x01, 2, 0, 0xfe, 0x02, 3, 0, 0xfe, 0x17, 2, 0, 0xfe, 0x48, 2, 0, 0x10, 3, 0x0b];
  const passive = extractMetadata(metadataModule({ passive: true, startBody }), {});
  assert.deepEqual([...passive.emAsmConsts], [...metadata.emAsmConsts]);
  assert.deepEqual([...passive.emJsFuncs], [...metadata.emJsFuncs]);
  for (const [bad, message] of [[[0x45, 0x0b], 'assertion failed: unknown: 69'], [[0xfc, 0x0a, 0, 0, 0x0b], 'assertion failed: unknown: 10'],
    [[0xfe, 0x10, 2, 0, 0x0b], 'assertion failed: unknown: 16'], [[0xfc, 0x0b, 1, 0x0b], 'assertion failed: memory index']])
    assert.throws(() => extractMetadata(metadataModule({ passive: true, startBody: bad }), {}), error => error.message === message, message);
  const badInit = metadataModule({ passive: true, startBody: [0x10, 3, 0x0b] });
  // memory.init with memory index 1 in the called function.
  const index = badInit.lastIndexOf(Buffer.from([0xfc, 0x08, 1, 0, 0x0b]));
  badInit[index + 3] = 1;
  assert.throws(() => extractMetadata(badInit, {}), error => error.message === 'assertion failed: memory index');
});

test('metadata: segments are located by address, at their exact bounds', () => {
  // Two active segments; the strings start at the second one's first byte.
  const strings = Buffer.from('{ a; }\0');
  const module = wasm({ types: [fn([], [])], functions: [0], memory: [[0, 1]], code: [body([0x0b])],
    globals: [[I32, 0, ...i32(108)], [I32, 0, ...i32(108 + strings.length)], [I32, 0, ...i32(107)]],
    exports: [[...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1], [...name('__em_js__f'), 3, 2]],
    data: [[0, ...i32(100), 8, ...Buffer.from('(i)<::>x')], [0, ...i32(108), ...uleb(strings.length), ...strings]] });
  const metadata = extractMetadata(module, {});
  assert.deepEqual([...metadata.emAsmConsts], [[108, '{ a; }']]);
  assert.equal(metadata.emJsFuncs.get('f'), '', 'a string without a NUL ends one byte before its segment does (Python slicing)');
  const missing = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(50)], [I32, 0, ...i32(51)]],
    exports: [[...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1]], data: [[0, ...i32(100), 1, 0]] });
  assert.throws(() => extractMetadata(missing, {}), error => error.message === 'assertion failed: unable to find segment for address: 50');
  const after = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(101)], [I32, 0, ...i32(102)]],
    exports: [[...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1]], data: [[0, ...i32(100), 1, 0]] });
  assert.throws(() => extractMetadata(after, {}), /unable to find segment for address: 101/);
  const noStart = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(101)], [I32, 0, ...i32(102)]],
    exports: [[...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1]], data: [[1, 1, 0]] });
  assert.throws(() => extractMetadata(noStart, {}), error => error.message === 'assertion failed: passive segments without a start function');
  // Only one bound: no strings, and no segment lookup.
  const oneBound = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(5)]], exports: [[...name('__start_em_asm'), 3, 0]], data: [[0, ...i32(100), 1, 0]] });
  assert.equal(extractMetadata(oneBound, {}).emAsmConsts.size, 0);
  const otherBound = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(5)]], exports: [[...name('__stop_em_asm'), 3, 0]], data: [[0, ...i32(100), 1, 0]] });
  assert.equal(extractMetadata(otherBound, {}).emAsmConsts.size, 0);
  // Negative i32 addresses are unsigned.
  const high = wasm({ types: [fn([], [])], memory: [[0, 1]], globals: [[I32, 0, ...i32(-16)], [I32, 0, ...i32(-14)]],
    exports: [[...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1]], data: [[0, ...i32(-16), 2, 0x61, 0]] });
  assert.deepEqual([...extractMetadata(high, {}).emAsmConsts], [[2 ** 32 - 16, 'a']]);
});

test('metadata: whether main reads its parameters', () => {
  const reads = (options, settings = {}) => extractMetadata(metadataModule(options), settings).mainReadsParams;
  assert.equal(reads({}), false);
  assert.equal(reads({}, { STANDALONE_WASM: 1 }), true);
  assert.equal(reads({ mainBody: [0x20, 0, 0x21, 0, 0x10, 1, 0x0f, 0x0b], mainLocals: [[1, I32], [2, I64]] }), false, 'locals, local.get/set and return are allowed');
  assert.equal(reads({ mainBody: [0x41, 0, 0x1a, 0x0b] }), true, 'any other instruction');
  assert.equal(reads({ mainBody: [0x45, 0x0b] }), true, 'an unknown instruction');
  assert.throws(() => reads({ mainBody: [0x0f] }), error => error.message === 'assertion failed: main wrapper does not end with END');
  // A call to a function that takes parameters is the original main itself.
  const withParams = wasm({ types: [fn([], []), fn([I32], [])], functions: [0, 1], code: [body([0x41, 0, 0x10, 1, 0x0b]), body([0x0b])],
    exports: [[...name('main'), 0, 0]] });
  assert.equal(extractMetadata(withParams, {}).mainReadsParams, true);
  const callsVoid = wasm({ types: [fn([], []), fn([I32], [])], functions: [0, 0], code: [body([0x10, 1, 0x0b]), body([0x0b])],
    exports: [[...name('__main_argc_argv'), 0, 0]] });
  assert.equal(extractMetadata(callsVoid, {}).mainReadsParams, false);
  const noMain = wasm({ types: [fn([], [])], functions: [0], code: [body([0x0b])], exports: [[...name('start'), 0, 0]] });
  assert.equal(extractMetadata(noMain, {}).mainReadsParams, false);
  const globalMain = wasm({ types: [fn([], [])], globals: [[I32, 0, ...i32(0)]], exports: [[...name('main'), 3, 0]] });
  assert.equal(extractMetadata(globalMain, {}).mainReadsParams, false);
});

test('metadata: imports, invokes, EM_JS signatures and features', () => {
  const imports = [[...name('env'), ...name('invoke_vi'), 0, 1], [...name('env'), ...name('js_fn'), 0, 1], [...name('env'), ...name('plain'), 0, 0],
    [...name('env'), ...name('mem'), 2, 0, 1], [...name('env'), ...name('tab'), 1, 0x70, 0, 1], [...name('env'), ...name('tag'), 4, 0, 0]];
  const features = [[0x2b, 'atomics'], [0x2b, 'simd128'], [0x2b, 'nontrapping-fptoint'], [0x2d, 'memory64'], [0x2b, 'bulk-memory']];
  const metadata = extractMetadata(metadataModule({ imports, features, functionImports: 3 }), {});
  assert.deepEqual(metadata.imports, ['js_fn', 'plain', 'tag']);
  assert.deepEqual(metadata.invokeFuncs, ['invoke_vi']);
  assert.deepEqual([...metadata.emJsFuncTypes], [['js_fn', { params: [I32], returns: [I32] }]]);
  assert.deepEqual(metadata.features, ['--enable-threads', '--enable-simd', '--enable-nontrapping-float-to-int', '--enable-bulk-memory']);
  // A function export named like an EM_JS global is not an EM_JS function.
  const named = extractMetadata(metadataModule({ extraExports: [[...name('__em_js__other'), 0, 0]] }), {});
  assert.deepEqual([...named.emJsFuncs.keys()], ['js_fn']);
  assert.ok(named.functionExports.has('__em_js__other'));
  // update_metadata re-reads exports and imports only.
  const updated = updateMetadata(metadataModule({ imports, functionImports: 3 }), { emJsFuncs: new Map(), emAsmConsts: 'kept' });
  assert.equal(updated.emAsmConsts, 'kept');
  assert.deepEqual(updated.imports, ['js_fn', 'plain', 'tag']);
  const globals = updateMetadata(wasm({ types: [fn([], [])], imports: [[...name('env'), ...name('g'), 3, I32, 0], [...name('env'), ...name('m'), 2, 0, 1],
    [...name('GOT.mem'), ...name('h'), 3, I64, 1]] }), { emJsFuncs: new Map() });
  assert.deepEqual(globals.imports, ['g', 'h']);
  assert.deepEqual([globals.invokeFuncs, globals.allExports, globals.otherExports, [...globals.functionExports]], [[], [], [], []]);
  assert.equal(updated.emJsFuncTypes.size, 0);
  assert.deepEqual(updated.allExports.at(-2), 'js_fn');
  const directory = mkdtempSync(join(tmpdir(), 'lasm-read-wasm-'));
  try {
    writeFileSync(join(directory, 'm.wasm'), Buffer.from(header));
    assert.deepEqual(readWasm(join(directory, 'm.wasm')), Buffer.from(header));
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
