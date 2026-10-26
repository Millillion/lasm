// Unit tests for the Phase 2 Node link driver (milestone C) pure-JavaScript
// parts: Python-compatible serialization, Wasm metadata extraction on small
// hand-made modules, glue assembly, settings and recipe handling. The byte
// gates against emcc recordings are scripts/link-driver/gate-link.mjs.
import assert from 'node:assert/strict';
import test from 'node:test';
import { pythonJsonDumps, pythonEquals, isIdentifier, universalNewlines, pythonSorted } from '../src/link-driver/python.mjs';
import { WasmModule, getWeakImports, Type } from '../src/link-driver/wasm.mjs';
import { extractMetadata, updateMetadata } from '../src/link-driver/metadata.mjs';
import { Settings, instantiateSettings } from '../src/link-driver/settings.mjs';
import { asmjsMangle, createAsmConsts, createEmJs, makeInvoke, makeWasm64Wrapper, createSending, createReceiving,
  assembleGlue, handleLicense, trimAsmConstBody, updateSettingsGlue, addUnexpectedExports, checkSupportedSettings,
  createPointerConversionWrappers } from '../src/link-driver/glue.mjs';
import { emscriptenResponseFile, shlexJoin, needsResponseFile, responseFileThreshold, parseLinkArguments, expandArguments, stubObject, linkerExports, addJsDependencies,
  prepareDceGraph, unusedFromMetadce, bundledNativeSigs, parseMinifiedNames } from '../src/link-driver/link.mjs';
import { bundledRecipe } from '../src/link-driver/compile.mjs';

// ---- A tiny Wasm module writer -------------------------------------------
const uleb = value => { const out = []; do { let byte = value & 0x7f; value >>>= 7; if (value) byte |= 0x80; out.push(byte); } while (value); return out; };
const sleb = value => {
  const out = []; let more = true; let big = BigInt(value);
  while (more) {
    let byte = Number(big & 0x7fn); big >>= 7n;
    if ((big === 0n && !(byte & 0x40)) || (big === -1n && byte & 0x40)) more = false; else byte |= 0x80;
    out.push(byte);
  }
  return out;
};
const name = text => { const bytes = [...Buffer.from(text)]; return [...uleb(bytes.length), ...bytes]; };
const section = (id, body) => [id, ...uleb(body.length), ...body];
const vector = items => [...uleb(items.length), ...items.flat()];
const custom = (title, body) => section(0, [...name(title), ...body]);
const i32 = value => [0x41, ...sleb(value), 0x0b];
const i64 = value => [0x42, ...sleb(value), 0x0b];

function testModule({ passive = false, mainWrapper = true } = {}) {
  const asmStrings = Buffer.from('{ return $0 + $1; }\0"arguments.length"\0');
  const emJs = Buffer.from('(int x, char *name)<::>{ return x; }\0');
  const data = Buffer.concat([asmStrings, emJs]);
  const base = 1024;
  const types = vector([[0x60, 0, 0], [0x60, 1, Type.I32, 1, Type.I32], [0x60, 2, Type.I64, Type.I32, 0]]);
  const imports = vector([
    [...name('env'), ...name('foo'), 0, 1],
    [...name('env'), ...name('invoke_vi'), 0, 2],
    [...name('env'), ...name('bar'), 0, 1],
    [...name('env'), ...name('__table_base'), 3, Type.I32, 0],
  ]);
  // Defined functions: 3 main (type 0), 4 original main (type 0), 5 start (type 0)
  const functions = vector([[0], [0], [0]]);
  const globals = vector([
    [Type.I32, 0, ...i32(base)], [Type.I32, 0, ...i32(base + asmStrings.length)],
    [Type.I64, 0, ...i64(base + asmStrings.length)], [Type.I32, 1, ...i32(5)],
  ]);
  const exports = vector([
    [...name('main'), 0, ...uleb(3)], [...name('__start_em_asm'), 3, 1], [...name('__stop_em_asm'), 3, 2],
    [...name('__em_js__bar'), 3, 3], [...name('memory'), 2, 0], [...name('counter'), 3, 4],
  ]);
  const body = code => { const bytes = [0, ...code]; return [...uleb(bytes.length), ...bytes]; };
  const mainCode = mainWrapper ? [0x10, 4, 0x0b] : [0x20, 0, 0x10, 0, 0x0b];
  // Start function: memory.init of segment 0 at `base` (constants dest, offset, size).
  const startCode = [0x41, ...sleb(base), 0x41, 0, 0x41, ...sleb(data.length), 0xfc, 0x08, 0, 0, 0xfc, 0x09, 0, 0x0b];
  const code = vector([body(mainCode), body([0x0b]), body(startCode)]);
  const segment = passive ? [1, ...uleb(data.length), ...data] : [0, ...i32(base), ...uleb(data.length), ...data];
  const features = [3, 0x2b, ...name('atomics'), 0x2b, ...name('memory64'), 0x2d, ...name('simd128')];
  const dylink = [4, ...uleb(name('env').length + name('foo').length + 2), 1, ...name('env'), ...name('foo'), 1];
  return Buffer.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, ...custom('dylink.0', dylink), ...section(1, types),
    ...section(2, imports), ...section(3, functions), ...section(5, vector([[0, 1]])), ...section(6, globals),
    ...section(7, exports), ...(passive ? section(8, uleb(5)) : []), ...section(10, code),
    ...section(11, vector([segment])), ...custom('target_features', features)]);
}

const settingsOf = values => ({ get: key => { if (!(key in values)) throw new Error(`missing ${key}`); return values[key]; }, set(key, value) { values[key] = value; }, values });

// ---- Python compatibility ------------------------------------------------
test('Python json.dumps formats are reproduced', () => {
  const value = { b: [1, 'é\u007f', []], a: true, c: {}, 'Z': null, emoji: '\u{1F600}' };
  assert.equal(pythonJsonDumps(value, { indent: 2, sortKeys: true }),
    '{\n  "Z": null,\n  "a": true,\n  "b": [\n    1,\n    "\\u00e9\\u007f",\n    []\n  ],\n  "c": {},\n  "emoji": "\\ud83d\\ude00"\n}');
  assert.equal(pythonJsonDumps({ exports: [['_a', 'a']] }), '{"exports": [["_a", "a"]]}');
  assert.throws(() => pythonJsonDumps({ x: 0.5 }), /Unsupported number/);
  assert.ok(pythonEquals(true, 1) && pythonEquals([false], [0]) && !pythonEquals('1', 1));
  assert.ok(isIdentifier('$foo_1') && !isIdentifier('1foo') && !isIdentifier('a-b'));
  assert.equal(universalNewlines('a\r\nb\rc\n'), 'a\nb\nc\n');
  assert.deepEqual(pythonSorted(['b', 'B', '_a', '$x']), ['$x', 'B', '_a', 'b']);
});

// ---- Wasm metadata -------------------------------------------------------
test('metadata extraction reads exports, imports, EM_ASM, EM_JS and features', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  assert.deepEqual([...metadata.functionExports.keys()], ['main']);
  assert.deepEqual(metadata.allExports, ['main', '__start_em_asm', '__stop_em_asm', 'bar', 'memory', 'counter']);
  assert.deepEqual([...metadata.emAsmConsts], [[1024, '{ return $0 + $1; }'], [1044, '"arguments.length"']]);
  assert.deepEqual([...metadata.emJsFuncs], [['bar', '(int x, char *name)<::>{ return x; }']]);
  assert.deepEqual(metadata.features, ['--enable-threads', '--enable-memory64']);
  assert.equal(metadata.mainReadsParams, false);
  assert.deepEqual(metadata.imports, ['foo', 'bar', '__table_base']);
  assert.deepEqual(metadata.invokeFuncs, ['invoke_vi']);
  assert.deepEqual([...metadata.emJsFuncTypes], [['bar', { params: [Type.I32], returns: [Type.I32] }]]);
  assert.deepEqual(metadata.otherExports.map(([entry, global]) => [entry.name, global?.mutable ?? null]),
    [['__start_em_asm', 0], ['__stop_em_asm', 0], ['__em_js__bar', 0], ['memory', null], ['counter', 1]]);
  assert.equal(extractMetadata(testModule({ mainWrapper: false }), { STANDALONE_WASM: 0 }).mainReadsParams, true);
  assert.equal(extractMetadata(testModule(), { STANDALONE_WASM: 1 }).mainReadsParams, true);
  assert.deepEqual(getWeakImports(new WasmModule(testModule())), ['foo']);
  const updated = updateMetadata(testModule(), { ...metadata, imports: [] });
  assert.deepEqual(updated.imports, ['foo', 'bar', '__table_base']);
});

test('passive data segments are located through the start function', () => {
  const metadata = extractMetadata(testModule({ passive: true }), { STANDALONE_WASM: 0 });
  assert.deepEqual([...metadata.emAsmConsts.values()], ['{ return $0 + $1; }', '"arguments.length"']);
  assert.equal(metadata.emJsFuncs.get('bar'), '(int x, char *name)<::>{ return x; }');
});

test('invalid modules are rejected like the Python reader', () => {
  assert.throws(() => new WasmModule(Buffer.from('not wasm')), /not a valid wasm file/);
  const truncated = testModule().subarray(0, 40);
  assert.throws(() => extractMetadata(truncated, { STANDALONE_WASM: 0 }));
});

// ---- Glue ----------------------------------------------------------------
test('EM_ASM constants, EM_JS functions and wrappers match emscripten.py', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  assert.deepEqual(createAsmConsts(metadata), [[1024, '($0, $1) => { return $0 + $1; }'], [1044, 'function() { arguments.length }']]);
  assert.equal(trimAsmConstBody(' ({ (a) }) '), 'a');
  assert.equal(trimAsmConstBody('"{ \\"x\\" }"'), 'x');
  assert.deepEqual(createEmJs(settingsOf({ MAIN_MODULE: 2 }), metadata), ['function bar(x,name) { return x; }', "bar.sig = 'ii';"]);
  assert.equal(makeInvoke(settingsOf({ MEMORY64: 1 }), 'jip'),
    'function invoke_jip(index,a1,a2) {\n  var sp = stackSave();\n  try {\n    return getWasmTableEntry(Number(index))(a1,a2);\n'
    + '  } catch(e) {\n    stackRestore(sp);\n    if (!(e instanceof EmscriptenEH)) throw e;\n    _setThrew(1, 0);\n    return 0n;\n  }\n}');
  assert.equal(makeWasm64Wrapper('pp_P'), '  var makeWrapper_pp_P = (f) => (a0, a1, a2) => Number(f(BigInt(a0), a1, BigInt(a2 ? a2 : 0)));\n');
  const wrappers = createPointerConversionWrappers(settingsOf({ SIGNATURE_CONVERSIONS: ['main:_pp'] }), metadata, { malloc: 'pp' });
  assert.match(wrappers, /var makeWrapper__pp = \(f\) => \(a0, a1\) => f\(BigInt\(a0\), BigInt\(a1\)\);/);
  assert.match(wrappers, /wasmExports\['main'\] = makeWrapper__pp\(wasmExports\['main'\]\);\n {2}return wasmExports;\n}$/);
});

test('import and export assembly follows emscripten.py ordering and naming', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  const settings = settingsOf({ IMPORTED_MEMORY: 1, EXPORTED_FUNCTIONS: ['_main', '_jsOnly'], SIDE_MODULE_IMPORTS: [],
    MAYBE_CLOSURE_COMPILER: 1, ASSERTIONS: 0, EXPORT_KEEPALIVE: 1, DECLARE_ASM_MODULE_EXPORTS: 1, MEMORY64: 1,
    EXPORTED_RUNTIME_METHODS: ['aliasName'], MINIMAL_RUNTIME: 0 });
  assert.equal(createSending(settings, metadata, ['_jsOnly']), '{\n  /** @export */\n  __table_base: ___table_base,\n'
    + '  /** @export */\n  bar,\n  /** @export */\n  foo: _foo,\n  /** @export */\n  invoke_vi,\n  /** @export */\n  jsOnly: _jsOnly,\n'
    + '  /** @export */\n  memory: wasmMemory\n}');
  const others = metadata.otherExports.filter(([entry]) => entry.name === 'counter' || entry.name === 'memory');
  assert.equal(createReceiving(settings, { functionExports: metadata.functionExports, otherExports: others,
    librarySymbols: [], aliases: { aliasName: 'main' }, extraJsExports: new Set() }),
  "\n// Imports from the Wasm binary.\nvar _main,\n  memory,\n  _counter,\n  aliasName;\n\n\n"
    + "function assignWasmExports(wasmExports) {\n  _main = Module['_main'] = aliasName = Module['aliasName'] = wasmExports['main'];\n"
    + "  memory = wasmExports['memory'];\n  _counter = wasmExports['counter'];\n}");
  assert.equal(asmjsMangle('__main_argc_argv'), '_main');
  assert.equal(asmjsMangle('dynCall_vi'), 'dynCall_vi');
});

test('the JS compiler output is completed with constants, module code and hooks', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  const settings = settingsOf({ ASSERTIONS: 1, INCOMING_MODULE_JS_API: ['a'], ALL_INCOMING_MODULE_JS_API: ['a', 'b'],
    MAIN_MODULE: 2, IMPORTED_MEMORY: 0, EXPORTED_FUNCTIONS: [], SIDE_MODULE_IMPORTS: [], MAYBE_CLOSURE_COMPILER: 0,
    EXPORT_KEEPALIVE: 1, DECLARE_ASM_MODULE_EXPORTS: 1, MEMORY64: 0, PTHREADS: 1, WASM_WORKERS: 0, SUPPORT_LONGJMP: 'wasm',
    DISABLE_EXCEPTION_CATCHING: 1, HAS_MAIN: 1, MINIMAL_RUNTIME: 0, EXIT_RUNTIME: 0, EXPORTED_RUNTIME_METHODS: [], ASYNCIFY: 0 });
  const forwarded = { warnings: false, librarySymbols: [], nativeAliases: {}, extraExports: [], ATINITS: 'init();', ATMAINS: '' };
  const noInvokes = { ...metadata, invokeFuncs: [] };
  const glue = assembleGlue(settings, noInvokes, `PRE\n// EMSCRIPTEN_END_FUNCS\n<<< ATINITS >>>\n<<< ATMAINS >>>\n<<< ATEXITS >>>\r\n//FORWARDED_DATA:${JSON.stringify(forwarded)}`,
    { asmConsts: [[1, 'a'], [2, 'b']], emJsFuncs: ['function bar() {}'], nativeSigs: {}, extraJsExports: new Set() });
  assert.ok(glue.startsWith("PRE\nfunction checkIncomingModuleAPI() {\n  ignoredModuleProp('b');\n}\nvar ASM_CONSTS = {\n  1: a,  \n 2: b\n};\nfunction bar() {}\n"));
  assert.ok(glue.includes('  var wasmImports;\n  function assignWasmImports() {\n    wasmImports = {\n    __table_base: ___table_base,\n    bar,\n    foo: _foo\n  };\n  }\n\n// Begin'));
  assert.ok(glue.endsWith('\n// Begin ATINITS hooks\n  init();\n  // End ATINITS hooks\n// No ATMAINS hooks\n<<< ATEXITS >>>\n'));
  assert.deepEqual(settings.values.ALIASES, []);
  assert.throws(() => assembleGlue(settings, noInvokes, 'no marker', { asmConsts: [], emJsFuncs: [], nativeSigs: {}, extraJsExports: new Set() }),
    /forwarded data/);
});

test('ASYNCIFY=1 glue: the asyncify exports join the function exports, as emscript adds them', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  const settings = settingsOf({ ASSERTIONS: 0, INCOMING_MODULE_JS_API: [], ALL_INCOMING_MODULE_JS_API: [],
    MAIN_MODULE: 0, IMPORTED_MEMORY: 0, EXPORTED_FUNCTIONS: [], SIDE_MODULE_IMPORTS: [], MAYBE_CLOSURE_COMPILER: 0,
    EXPORT_KEEPALIVE: 1, DECLARE_ASM_MODULE_EXPORTS: 1, MEMORY64: 0, PTHREADS: 0, WASM_WORKERS: 0, SUPPORT_LONGJMP: 'wasm',
    DISABLE_EXCEPTION_CATCHING: 1, HAS_MAIN: 1, MINIMAL_RUNTIME: 0, EXIT_RUNTIME: 0, EXPORTED_RUNTIME_METHODS: [], ASYNCIFY: 1 });
  const forwarded = { warnings: false, librarySymbols: [], nativeAliases: {}, extraExports: [] };
  const asyncify = { ...metadata, invokeFuncs: [], functionExports: new Map(metadata.functionExports) };
  const glue = assembleGlue(settings, asyncify, `PRE\n// EMSCRIPTEN_END_FUNCS\n//FORWARDED_DATA:${JSON.stringify(forwarded)}`,
    { asmConsts: [], emJsFuncs: [], nativeSigs: {}, extraJsExports: new Set() });
  assert.deepEqual([...asyncify.functionExports.keys()].slice(-4), ['asyncify_start_unwind', 'asyncify_stop_unwind', 'asyncify_start_rewind', 'asyncify_stop_rewind']);
  assert.deepEqual(asyncify.functionExports.get('asyncify_start_unwind'), { params: [0x7f], returns: [] });
  assert.ok(glue.includes("_asyncify_start_unwind = wasmExports['asyncify_start_unwind'];"));
});

test('minified import and export names: both wasm-opt formats, in order', () => {
  assert.deepEqual(parseMinifiedNames('env.foo => a\nbar => b\n'), { 'env.foo': 'a', bar: 'b' });
  const mapping = parseMinifiedNames(JSON.stringify({ imports: [['env', 'lasm_edge_wait', 'a'], ['wasi', 'fd_write', 'b']], exports: [['main', 'c'], ['memory', 'd']] }));
  assert.deepEqual(Object.entries(mapping), [['lasm_edge_wait', 'a'], ['fd_write', 'b'], ['main', 'c'], ['memory', 'd']]);
  assert.throws(() => parseMinifiedNames(JSON.stringify({ imports: [['env', 'x', 'a']], exports: [['x', 'b']] })), /must be unique/);
  assert.deepEqual(parseMinifiedNames(''), {});
});

test('license blocks are removed unless the license is requested', () => {
  const js = '/**\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */\ncode();\n  /**\n * @license\n * Copyright 2019 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */ more();\n';
  assert.equal(handleLicense(settingsOf({ EMIT_EMSCRIPTEN_LICENSE: 0 }), js), 'code();\n  more();\n');
  assert.ok(handleLicense(settingsOf({ EMIT_EMSCRIPTEN_LICENSE: 1 }), js).startsWith('/**\n * @license\n * Copyright 2010'));
});

// ---- Settings ------------------------------------------------------------
test('settings files keep only non-default values, as Settings.external_dict', () => {
  const defaults = { HAS_MAIN: false, LIST: [], USE_PTHREADS: 0, KEEP: 1 };
  const settings = new Settings({ USE_PTHREADS: 0, KEEP: 2, OTHER: 'x' }, defaults);
  settings.set('HAS_MAIN', true); settings.set('LIST', []); settings.set('KEEP', 1);
  assert.equal(settings.serialize(), '{\n  "HAS_MAIN": true,\n  "OTHER": "x",\n  "USE_PTHREADS": 0\n}');
  assert.throws(() => settings.get('UNKNOWN'), /no value or default/);
  const template = { USER_EXPORTS: '<user-exports>', EXPORTED_FUNCTIONS: '<exported-functions>', PRE_JS_FILES: '<pre-js>',
    JS_LIBRARIES: ['<emscripten>/src/lib/libpthread.js', '<js-library>'] };
  assert.deepEqual(instantiateSettings(template, { userExports: ['_free', '_main'], preJs: ['C:\\p.js'], jsLibrary: 'C:\\l.js',
    emscripten: 'C:\\em', platform: 'win32' }), { USER_EXPORTS: ['_free', '_main'], EXPORTED_FUNCTIONS: ['_free'],
    PRE_JS_FILES: ['C:\\p.js'], JS_LIBRARIES: ['C:\\em\\src\\lib\\libpthread.js', 'C:\\l.js'] });
  assert.throws(() => instantiateSettings(template, { userExports: ['_free'], preJs: [], jsLibrary: 'x', emscripten: '/e' }), /without _main/);
});

test('glue settings update and keepalive exports follow emscripten.py', () => {
  const metadata = extractMetadata(testModule(), { STANDALONE_WASM: 0 });
  const values = { FORCE_FILESYSTEM: 1, INCLUDE_FULL_LIBRARY: 0, MAIN_MODULE: 2, DEFAULT_LIBRARY_FUNCS_TO_INCLUDE: ['$x', 'foo'],
    WEAK_IMPORTS: [], WASM_EXPORTS: [], HAVE_EM_ASM: 0, PTHREADS: 1, MEMORY64: 1, PROXY_TO_PTHREAD: 1, STANDALONE_WASM: 0,
    HAS_MAIN: 0, MINIMAL_RUNTIME: 0, MAIN_READS_PARAMS: 0, STACK_OVERFLOW_CHECK: 0, SIDE_MODULE: 0,
    EXPORTED_FUNCTIONS: ['_free'], REQUIRED_EXPORTS: [], EXPORT_IF_DEFINED: ['main'], USER_EXPORTS: ['_free', '_main'], ASYNCIFY: 0 };
  const features = updateSettingsGlue(settingsOf(values), metadata, ['foo']);
  assert.deepEqual(features, ['--mvp-features', '--enable-threads', '--enable-memory64']);
  // JSPI (ASYNCIFY=2, the edge link) adds reference types, as emscripten.py does.
  assert.deepEqual(updateSettingsGlue(settingsOf({ ...structuredClone(values), ASYNCIFY: 2 }), metadata, ['foo']),
    ['--mvp-features', '--enable-threads', '--enable-memory64', '--enable-reference-types']);
  assert.deepEqual(values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, ['$x', '__table_base', 'foo', '$exitJS', '$handleException', '$stringToUTF8OnStack', '$HEAPU64']);
  assert.equal(values.HAS_MAIN, true);
  assert.deepEqual(values.WEAK_IMPORTS, ['foo']);
  const requested = new Set(['_free']);
  assert.deepEqual(addUnexpectedExports(settingsOf(values), metadata, { jsfn: ['counter'] }, requested), ['_bar', '_main']);
  assert.deepEqual(values.EXPORTED_FUNCTIONS, ['_free', '_bar', '_main']);
  assert.ok(requested.has('_bar') && requested.has('_main'));
  assert.throws(() => checkSupportedSettings({ get: key => key === 'SIDE_MODULE' ? 1 : 0 }), /does not implement SIDE_MODULE/);
});

// ---- Link orchestration helpers -----------------------------------------
test('response files use Emscripten quoting on each platform', () => {
  assert.equal(emscriptenResponseFile(['-o', "a b'c", 'C:\\x"y'], 'linux'), "-o\n\"a b\\'c\"\nC:\\\\x\\\"y\n");
  assert.equal(emscriptenResponseFile(["it's", 'C:\\dir name\\a.o'], 'win32'), "it's\n\"C:\\\\dir name\\\\a.o\"\n");
});

test('link arguments must match the recorded flags; inputs keep their order', () => {
  const recipe = bundledRecipe();
  const flags = recipe.link.modes.final.emccFlags.map(flag => flag === '-sEXPORTED_FUNCTIONS=@<exports>' ? '-sEXPORTED_FUNCTIONS=@/b/exports.json' : flag);
  const args = ['/b/module-0.o', '-Wl,--wrap=lean_initialize', '-Wl,-Map=/b/final.map', ...flags, '-Wl,--start-group', '/r/libA.a',
    '-Wl,--end-group', '--pre-js', '/p.js', '--js-library', '/l.js', '-o', '/b/dist/program.cjs'];
  const parsed = parseLinkArguments(recipe, 'final', args);
  assert.deepEqual(parsed.inputs, ['/b/module-0.o', '--wrap=lean_initialize', '-Map=/b/final.map', '/r/libA.a']);
  assert.equal(parsed.exportsFile, '/b/exports.json');
  assert.equal(parsed.mapFile, '/b/final.map');
  assert.throws(() => parseLinkArguments(recipe, 'final', [...args, '-g']), /no recording for these final link flags/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', args), /no recording for these probe link flags/);
  assert.throws(() => parseLinkArguments(recipe, 'final', [...args, 'x.c']), /Unrecorded link input/);
});

test('argument templates expand lists and platform paths', () => {
  const values = { emscripten: 'C:\\em', syslib: 'C:\\c\\lib', wasm: 'C:\\o\\p.wasm', inputs: ['a.o', 'b.a'], features: ['--mvp-features'] };
  assert.deepEqual(expandArguments(['<emscripten>/tools/compiler.mjs', '-L<syslib>', '-L<emscripten>/src/lib', '<syslib>/crt1.o',
    '<inputs>', '<wasm>', '-o', '<wasm>', '<features>'], values, 'win32'),
  ['C:\\em\\tools\\compiler.mjs', '-LC:\\c\\lib', '-LC:\\em\\src\\lib', 'C:\\c\\lib\\crt1.o', 'a.o', 'b.a', 'C:\\o\\p.wasm', '-o', 'C:\\o\\p.wasm', '--mvp-features']);
  assert.throws(() => expandArguments(['<missing>'], values, 'linux'), /Unresolved link-driver placeholder/);
});

test('JS symbol dependencies become linker exports and the stub library', () => {
  const values = { REQUIRED_EXPORTS: ['malloc'], DEFAULT_LIBRARY_FUNCS_TO_INCLUDE: ['$x'], EXPORTED_RUNTIME_METHODS: ['y'],
    EXPORTED_FUNCTIONS: ['_free', '_jsFn', '_free'], EXPORT_IF_DEFINED: ['main', 'main'], ERROR_ON_UNDEFINED_SYMBOLS: 1, ASYNCIFY: 0 };
  const settings = settingsOf(values);
  const jsSyms = addJsDependencies(settings, { deps: { $x: ['calloc'], $y: ['strlen'], jsFn: ['free'], none: [] }, extraLibraryFuncs: [] });
  assert.deepEqual(values.REQUIRED_EXPORTS, ['malloc', 'calloc', 'strlen', 'free']);
  assert.deepEqual(values.EXPORTED_FUNCTIONS, ['_free', '_jsFn']);
  assert.deepEqual(linkerExports(settings, jsSyms), { exports: ['--export=free', '--export=malloc', '--export=calloc', '--export=strlen', '--export=free'],
    exportIfDefined: ['--export-if-defined=main'] });
  assert.equal(stubObject({ $x: ['a'], jsFn: ['free', 'malloc'], none: [] }), '#STUB\njsFn: free,malloc\nnone: ');
});

test('the metadce graph gets roots and WASI modules; unused names are mapped back', () => {
  const settings = settingsOf({ SIDE_MODULE_IMPORTS: [], EXPORT_ALL: 0, WASI_MODULE_NAME: 'wasi_snapshot_preview1', MAIN_MODULE: 2, DECLARE_ASM_MODULE_EXPORTS: 1 });
  const graph = [{ name: 'emcc$export$main', export: 'main', reaches: [] }, { name: 'emcc$export$other', export: 'other' },
    { name: 'emcc$import$fd_write', import: ['env', 'fd_write'] }, { name: 'emcc$import$wasmMemory', import: ['env', 'memory'] }];
  const { importNames, exportNames } = prepareDceGraph(settings, graph, new Set(['_main']), new Set());
  assert.equal(graph[0].root, true);
  assert.equal(graph[1].root, undefined);
  assert.deepEqual(graph[2].import, ['wasi_snapshot_preview1', 'fd_write']);
  assert.equal(pythonJsonDumps(graph[0], { indent: 2 }), '{\n  "name": "emcc$export$main",\n  "export": "main",\n  "reaches": [],\n  "root": true\n}');
  assert.deepEqual(unusedFromMetadce(settings, 'unused: emcc$export$other\nunused: emcc$import$fd_write\nunused: emcc$import$wasmMemory\nother\n',
    importNames, exportNames), { unusedImports: ['fd_write'], unusedExports: ['other'] });
});

test('the bundled recipe has both link modes and its native signature table', () => {
  const recipe = bundledRecipe();
  for (const mode of ['probe', 'final']) {
    const kinds = recipe.link.modes[mode].pipeline.map(step => step.kind);
    assert.deepEqual(kinds.slice(0, 5), ['symbols', 'wasm-ld', 'strip', 'finalize', 'glue']);
  }
  assert.deepEqual(recipe.link.modes.final.pipeline.slice(5).map(step => step.pass ?? step.kind),
    ['wasm-opt', 'growableHeap', 'AJSDCE', 'emitDCEGraph', 'metadce', 'applyDCEGraphRemovals', 'AJSDCE']);
  assert.ok(recipe.link.modes.probe.emccFlags.includes('-O0') && recipe.link.modes.final.emccFlags.includes('-Oz'));
  const sigs = bundledNativeSigs(recipe);
  assert.equal(Object.keys(sigs).length, recipe.link.nativeSigs.entries);
  assert.equal(sigs.malloc, 'pp');
});

test('wasm-ld gets a response file only where emcc would use one', () => {
  assert.equal(shlexJoin(['/sdk/bin/wasm-ld', '-o', 'a b', "it's", '', '--export=_main', 'C:\\x.o', 'λ']),
    `/sdk/bin/wasm-ld -o 'a b' 'it'"'"'s' '' --export=_main 'C:\\x.o' 'λ'`);
  assert.equal(needsResponseFile(['wasm-ld', 'x'.repeat(responseFileThreshold - 8)]), false);
  assert.equal(needsResponseFile(['wasm-ld', 'x'.repeat(responseFileThreshold - 7)]), true);
});
