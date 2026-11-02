// The glue generation of the Node link driver (src/link-driver/glue.mjs, a
// port of emscripten.py and js_manipulation.py) and its settings
// (src/link-driver/settings.mjs), branch by branch: which settings select which
// glue, and the exact JavaScript each produces.
import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import path, { join } from 'node:path';
import { isInternalGlobal, isInternalSymbol, asmjsMangle, isCSymbol, demangleCSymbolName, requiredSettings, checkSupportedSettings,
  updateSettingsGlue, addUnexpectedExports, trimAsmConstBody, createAsmConsts, funcTypeToSig, createEmJs, makeInvoke, makeWasm64Wrapper,
  createPointerConversionWrappers, createReceiving, createSending, createModule, applyStaticCodeHooks, assembleGlue, handleLicense } from '../src/link-driver/glue.mjs';
import { Settings, instantiateSettings, settingsPlaceholders, readSettingsDefaults } from '../src/link-driver/settings.mjs';
import { Type, ExternType } from '../src/link-driver/wasm.mjs';

/** A settings view over plain values; unknown keys fail as the recipe's would. */
const settingsOf = values => ({ get: key => { if (!(key in values)) throw new Error(`missing ${key}`); return values[key]; }, set(key, value) { values[key] = value; }, values });

test('internal symbols keep their names; C symbols get an underscore', () => {
  for (const name of ['__start_em_asm', '__stop_em_asm', '__start_em_js', '__stop_em_js', '__start_em_lib_deps', '__stop_em_lib_deps', '__em_lib_deps',
    '__em_lib_deps_x', '__em_js__f'])
    assert.ok(isInternalGlobal(name) && isInternalSymbol(name) && asmjsMangle(name) === name, name);
  for (const name of ['__asyncify_data', '__asyncify_state', '__indirect_function_table', 'memory', 'dynCall_vi', 'orig$main']) {
    assert.ok(!isInternalGlobal(name) && isInternalSymbol(name), name);
    assert.equal(asmjsMangle(name), name);
  }
  for (const name of ['x__em_js__', 'x__em_lib_deps', 'xdynCall_', 'xorig$', 'start_em_asm', '__start_em', 'main2', 'memory1'])
    assert.ok(!isInternalSymbol(name) && asmjsMangle(name) === '_' + name, name);
  assert.equal(asmjsMangle('__main_argc_argv'), '_main');
  assert.ok(isCSymbol('_x') && !isCSymbol('x_'));
  assert.equal(demangleCSymbolName('_malloc'), 'malloc');
  assert.equal(demangleCSymbolName('helper'), '$helper');
});

const supportedValues = () => ({ ...structuredClone(requiredSettings), MAIN_MODULE: 2, MEMORY64: 1 });

test('settings outside the recorded configuration are refused by name', () => {
  checkSupportedSettings(settingsOf(supportedValues()));
  assert.equal(requiredSettings.WASM_BIGINT, 1);
  assert.equal(requiredSettings.WASM, 1);
  // A truthy value where the recording has 0, and a different number where it has one.
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), ASYNCIFY: 1 })), error => error.message === 'The Node link driver does not implement ASYNCIFY=1');
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), ASYNCIFY: 1 }), { ASYNCIFY: 2 }), /does not implement ASYNCIFY=1/);
  checkSupportedSettings(settingsOf({ ...supportedValues(), ASYNCIFY: 2 }), { ASYNCIFY: 2 });
  checkSupportedSettings(settingsOf({ ...supportedValues(), ASYNCIFY_ADD: ['x'] }), { ASYNCIFY_ADD: ['y'] });
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), BINARYEN_EXTRA_PASSES: '--x' })), /does not implement BINARYEN_EXTRA_PASSES="--x"/);
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), WASM_BIGINT: 0 })), /does not implement WASM_BIGINT=0/);
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), WASM_BIGINT: 2 })), /does not implement WASM_BIGINT=2/);
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), MAIN_MODULE: 1 })),
    error => error.message === 'The Node link driver implements only MAIN_MODULE=2 here');
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), MEMORY64: 2 })),
    error => error.message === 'The Node link driver implements only MEMORY64=1 here');
  checkSupportedSettings(settingsOf({ ...supportedValues(), MAIN_MODULE: 0, MEMORY64: 2 }), { MAIN_MODULE: 0, MEMORY64: 2 });
  assert.throws(() => checkSupportedSettings(settingsOf({ ...supportedValues(), MAIN_MODULE: 2, MEMORY64: 2 }), { MAIN_MODULE: 0, MEMORY64: 2 }),
    /only MAIN_MODULE=0 here/);
});

/** Settings and metadata for update_settings_glue. */
function glueCase(values = {}, metadata = {}) {
  const settings = settingsOf({ FORCE_FILESYSTEM: 0, INCLUDE_FULL_LIBRARY: 0, MAIN_MODULE: 0, FILESYSTEM: 1, SYSCALLS_REQUIRE_FILESYSTEM: 1,
    SIDE_MODULE_IMPORTS: [], DEFAULT_LIBRARY_FUNCS_TO_INCLUDE: [], WEAK_IMPORTS: [], WASM_EXPORTS: [], HAVE_EM_ASM: 0, ASYNCIFY: 0, PTHREADS: 0,
    MEMORY64: 0, PROXY_TO_PTHREAD: 0, STANDALONE_WASM: 0, HAS_MAIN: 0, MINIMAL_RUNTIME: 0, MAIN_READS_PARAMS: 0, STACK_OVERFLOW_CHECK: 0,
    SIDE_MODULE: 0, ...values });
  const data = { imports: [], allExports: [], emAsmConsts: new Map(), features: [], mainReadsParams: false, functionExports: new Map(), jsDeps: [], ...metadata };
  return { settings, values: settings.values, features: () => updateSettingsGlue(settings, data, ['weak']) };
}

test('the filesystem is dropped when no import needs it', () => {
  const syscalls = (imports, values) => { const c = glueCase(values, { imports }); c.features(); return c.values.SYSCALLS_REQUIRE_FILESYSTEM; };
  assert.equal(syscalls(['foo', 'fd_write', 'fd_seek', 'fd_close', 'fd_fdstat_get', '__syscall_ioctl']), 0);
  assert.equal(syscalls([]), 0);
  for (const name of ['fd_read', 'path_open', '__syscall_openat', 'fd_pwrite']) assert.equal(syscalls(['fd_write', name]), 1, name);
  assert.equal(syscalls(['foo'], { SIDE_MODULE_IMPORTS: ['_fd_read'] }), 1, 'side-module imports count, by their C name');
  assert.equal(syscalls(['fd_read'], { FILESYSTEM: 0 }), 0);
  assert.equal(syscalls(['fd_write'], { FORCE_FILESYSTEM: 1 }), 1);
  assert.equal(syscalls(['fd_write'], { INCLUDE_FULL_LIBRARY: 1 }), 1);
  assert.equal(syscalls(['fd_write'], { MAIN_MODULE: 1 }), 1);
  assert.equal(syscalls(['fd_write'], { MAIN_MODULE: 2 }), 0);
});

test('update_settings_glue: library functions, exports, main and features', () => {
  const c = glueCase({ DEFAULT_LIBRARY_FUNCS_TO_INCLUDE: ['$z', 'b', 'b'], WEAK_IMPORTS: ['w0'] },
    { imports: ['a', 'exported', 'b'], allExports: ['exported', 'main'], features: ['--enable-bulk-memory'], jsDeps: ['$x,$y', '$w'] });
  assert.deepEqual(c.features(), ['--mvp-features', '--enable-bulk-memory']);
  assert.deepEqual(c.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, ['$z', 'a', 'b', '$exitJS', '$handleException', '$x', '$y', '$w']);
  assert.deepEqual(c.values.WEAK_IMPORTS, ['w0'], 'weak imports are read for MAIN_MODULE only');
  assert.deepEqual(c.values.WASM_EXPORTS, ['exported', 'main']);
  assert.equal(c.values.HAVE_EM_ASM, false);
  assert.equal(c.values.HAS_MAIN, true);
  assert.equal(c.values.MAIN_READS_PARAMS, false);
  // EM_ASM constants, or MAIN_MODULE, need the EM_ASM glue.
  const asm = glueCase({}, { emAsmConsts: new Map([[1, 'x']]) }); asm.features();
  assert.equal(asm.values.HAVE_EM_ASM, true);
  const main = glueCase({ MAIN_MODULE: 2 }); main.features();
  assert.equal(main.values.HAVE_EM_ASM, true);
  assert.deepEqual(main.values.WEAK_IMPORTS, ['weak']);
  // main from the exports, the original main, PROXY_TO_PTHREAD or STANDALONE_WASM; none: no exit glue.
  for (const [values, metadata, hasMain] of [[{}, { allExports: ['__main_argc_argv'] }, true], [{ PROXY_TO_PTHREAD: 1 }, {}, true],
    [{ STANDALONE_WASM: 1 }, {}, true], [{}, { allExports: ['mainly'] }, false]]) {
    const item = glueCase(values, metadata); item.features();
    assert.equal(item.values.HAS_MAIN, hasMain, JSON.stringify(values) + JSON.stringify(metadata));
    assert.equal(item.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE.includes('$exitJS'), hasMain);
  }
  const minimal = glueCase({ MINIMAL_RUNTIME: 1 }, { allExports: ['main'] }); minimal.features();
  assert.deepEqual(minimal.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, []);
  // A main that reads its parameters needs the argument glue, by pointer size.
  const reads = glueCase({}, { allExports: ['main'], mainReadsParams: true }); reads.features();
  assert.deepEqual(reads.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, ['$exitJS', '$handleException', '$stringToUTF8OnStack', '$HEAPU32']);
  assert.equal(reads.values.MAIN_READS_PARAMS, true);
  const reads64 = glueCase({ MEMORY64: 1 }, { allExports: ['main'], mainReadsParams: true, features: ['--enable-memory64'] }); reads64.features();
  assert.equal(reads64.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE.at(-1), '$HEAPU64');
  const standalone = glueCase({ STANDALONE_WASM: 1 }, { mainReadsParams: true }); standalone.features();
  assert.deepEqual(standalone.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, ['$exitJS', '$handleException', '$HEAPU32']);
  const noMain = glueCase({}, { mainReadsParams: true }); noMain.features();
  assert.deepEqual(noMain.values.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE, ['$stringToUTF8OnStack']);
  // Feature assertions.
  assert.throws(() => glueCase({ PTHREADS: 1 }).features(), error => error.message === 'assertion failed: threads feature');
  glueCase({ PTHREADS: 1 }, { features: ['--enable-threads'] }).features();
  assert.throws(() => glueCase({ MEMORY64: 2 }).features(), error => error.message === 'assertion failed: memory64 feature');
  assert.deepEqual(glueCase({ ASYNCIFY: 2 }).features(), ['--mvp-features', '--enable-reference-types']);
  assert.deepEqual(glueCase({ ASYNCIFY: 1 }).features(), ['--mvp-features']);
  assert.throws(() => glueCase({ STACK_OVERFLOW_CHECK: 1 }).features(), error => error.message === 'assertion failed: emscripten_stack_get_end is not exported');
  glueCase({ STACK_OVERFLOW_CHECK: 1, SIDE_MODULE: 1 }).features();
  glueCase({ STACK_OVERFLOW_CHECK: 1 }, { functionExports: new Map([['emscripten_stack_get_end', {}]]) }).features();
});

test('keepalive exports become requested exports; an exported main must be a user export', () => {
  const values = { EXPORTED_FUNCTIONS: ['_a'], REQUIRED_EXPORTS: ['b'], EXPORT_IF_DEFINED: ['c'], USER_EXPORTS: ['_main', '_a'] };
  const requested = new Set();
  const added = addUnexpectedExports(settingsOf(values), { allExports: ['a', 'b', 'c', 'd', 'kept', 'memory', 'dynCall_v', '__main_argc_argv'] },
    { js: ['d'] }, requested);
  assert.deepEqual(added, ['_kept', '_main', '_main']);
  assert.deepEqual([...requested], ['_kept', '_main']);
  assert.deepEqual(values.EXPORTED_FUNCTIONS, ['_a', '_kept', '_main', '_main']);
  assert.deepEqual(addUnexpectedExports(settingsOf({ ...values, EXPORTED_FUNCTIONS: [] }), { allExports: ['b'] }, {}, new Set()), []);
  assert.throws(() => addUnexpectedExports(settingsOf({ ...values, USER_EXPORTS: ['_a'] }), { allExports: ['main'] }, {}, new Set()),
    error => error.message === 'assertion failed: _main is a user export');
});

test('EM_ASM bodies lose matching quotes and brackets only', () => {
  assert.equal(trimAsmConstBody('((a))'), 'a');
  assert.equal(trimAsmConstBody('{{a}}'), 'a');
  assert.equal(trimAsmConstBody('(a)(b)'), '(a)(b)');
  assert.equal(trimAsmConstBody('{a}{b}'), '{a}{b}');
  assert.equal(trimAsmConstBody('(a)+(b)'), '(a)+(b)');
  assert.equal(trimAsmConstBody('"a" + "b"'), 'a" + "b');
  for (const body of ['"', '(', '{', 'a"', '"a', '(a', 'a)', '{a', 'a}']) assert.equal(trimAsmConstBody(body), body);
  assert.equal(trimAsmConstBody('()'), '');
  assert.equal(trimAsmConstBody('(()'), '(()');
  assert.equal(trimAsmConstBody('{{}'), '{{}');
  assert.equal(trimAsmConstBody(' "( { x } )" '), 'x');
});

test('EM_ASM constants: arity from $N, sorted by address', () => {
  assert.deepEqual(createAsmConsts({ emAsmConsts: new Map([[2000, '$16'], [100, 'f($2)'], [1000, 'arguments[0]']]) }),
    [[100, '($0, $1, $2) => { f($2) }'], [1000, 'function() { arguments[0] }'], [2000, '($0, $1) => { $16 }']]);
  assert.deepEqual(createAsmConsts({ emAsmConsts: new Map([[1, '$15']]) }), [[1, '($0, $1, $2, $3, $4, $5, $6, $7, $8, $9, $10, $11, $12, $13, $14, $15) => { $15 }']]);
});

test('EM_JS functions: arguments, signatures and their checks', () => {
  assert.equal(funcTypeToSig({ params: [Type.I64, Type.F32, Type.F64], returns: [] }), 'vjfd');
  assert.throws(() => funcTypeToSig({ params: [], returns: [Type.I32, Type.I32] }), error => error.message === 'assertion failed: One return type expected.');
  const metadata = { emJsFuncs: new Map([['f', '(int a, char* b,)<::>{ return a; }'], ['g', '(void)<::>{}'], ['h', '<::>{}'], ['k', '()<::>{}']]),
    emJsFuncTypes: new Map([['f', { params: [Type.I32, Type.I64], returns: [Type.I32] }], ['h', { params: [], returns: [] }]]) };
  const plain = ['function f(a,b) { return a; }', 'function g() {}', 'function h() {}', 'function k() {}'];
  assert.deepEqual(createEmJs(settingsOf({ MAIN_MODULE: 0, ASYNCIFY: 0 }), metadata), plain);
  assert.deepEqual(createEmJs(settingsOf({ MAIN_MODULE: 0, ASYNCIFY: 1 }), metadata), plain);
  const signed = ['function f(a,b) { return a; }', "f.sig = 'iij';", 'function g() {}', 'function h() {}', "h.sig = 'v';", 'function k() {}'];
  assert.deepEqual(createEmJs(settingsOf({ MAIN_MODULE: 0, ASYNCIFY: 2 }), metadata), signed);
  assert.deepEqual(createEmJs(settingsOf({ MAIN_MODULE: 1, ASYNCIFY: 0 }), metadata), signed);
  assert.throws(() => createEmJs(settingsOf({ MAIN_MODULE: 0, ASYNCIFY: 0 }), { emJsFuncs: new Map([['x', '(int a){}']]), emJsFuncTypes: new Map() }),
    error => error.message === 'assertion failed: EM_JS separator');
});

test('invoke wrappers and wasm64 pointer wrappers', () => {
  assert.equal(makeInvoke(settingsOf({ MEMORY64: 0 }), 'v'),
    'function invoke_v(index) {\n  var sp = stackSave();\n  try {\n    getWasmTableEntry(index)();\n  } catch(e) {\n    stackRestore(sp);\n'
    + '    if (!(e instanceof EmscriptenEH)) throw e;\n    _setThrew(1, 0);\n  }\n}');
  assert.match(makeInvoke(settingsOf({ MEMORY64: 0 }), 'iii'), /function invoke_iii\(index,a1,a2\) \{\n.*\n  try \{\n    return getWasmTableEntry\(index\)\(a1,a2\);\n/s);
  assert.ok(!makeInvoke(settingsOf({ MEMORY64: 0 }), 'ii').includes('0n'));
  assert.equal(makeWasm64Wrapper('vP'), '  var makeWrapper_vP = (f) => (a0) => f(BigInt(a0 ? a0 : 0));\n');
  assert.equal(makeWasm64Wrapper('_p'), '  var makeWrapper__p = (f) => (a0) => f(BigInt(a0));\n');
  assert.throws(() => makeWasm64Wrapper('i_'), error => error.message === 'assertion failed: wasm64 wrapper without pointers');
  assert.throws(() => makeWasm64Wrapper('_pi'), error => error.message === 'assertion failed: signature letter i');
});

test('pointer conversion wrappers: native signatures, settings, ASan helpers and dynCalls', () => {
  const functionExports = new Map([['malloc', { params: [Type.I64], returns: [Type.I64] }], ['free', { params: [Type.I64], returns: [] }],
    ['__asan_loadN', { params: [], returns: [] }], ['__asan_storeN', { params: [], returns: [] }], ['calloc', { params: [Type.I64], returns: [Type.I64] }], ['dynCall_vip', { params: [Type.I64, Type.I32, Type.I64], returns: [] }],
    ['dynCall_ii', { params: [Type.I32, Type.I32], returns: [] }], ['custom', { params: [], returns: [] }], ['plain', { params: [], returns: [] }]]);
  const text = createPointerConversionWrappers(settingsOf({ SIGNATURE_CONVERSIONS: ['custom:p_'] }), { functionExports }, { malloc: 'pp', free: '_p', calloc: 'pp' });
  assert.equal(text, `
// Argument name here must shadow the \`wasmExports\` global so
// that it is recognised by metadce and minify-import-export-names
// passes.
function applySignatureConversions(wasmExports) {
  // First, make a copy of the incoming exports object
  wasmExports = Object.assign({}, wasmExports);
  var makeWrapper_pp = (f) => (a0) => Number(f(BigInt(a0)));
  var makeWrapper__p = (f) => (a0) => f(BigInt(a0));
  var makeWrapper__pp = (f) => (a0, a1) => f(BigInt(a0), BigInt(a1));
  var makeWrapper__p_p = (f) => (a0, a1, a2) => f(BigInt(a0), a1, BigInt(a2));
  var makeWrapper_p_ = (f) => (a0) => Number(f(a0));

  wasmExports['malloc'] = makeWrapper_pp(wasmExports['malloc']);
  wasmExports['free'] = makeWrapper__p(wasmExports['free']);
  wasmExports['__asan_loadN'] = makeWrapper__pp(wasmExports['__asan_loadN']);
  wasmExports['__asan_storeN'] = makeWrapper__pp(wasmExports['__asan_storeN']);
  wasmExports['calloc'] = makeWrapper_pp(wasmExports['calloc']);
  wasmExports['dynCall_vip'] = makeWrapper__p_p(wasmExports['dynCall_vip']);
  wasmExports['custom'] = makeWrapper_p_(wasmExports['custom']);
  return wasmExports;
}`);
});

const exportsOf = entries => new Map(entries.map(([name, params = []]) => [name, { params, returns: [] }]));
const global = (name, mutable) => [{ name, kind: ExternType.GLOBAL }, { mutable }];

test('receiving the Wasm exports: declarations, module exports, aliases and globals', () => {
  const base = { ASSERTIONS: 0, EXPORT_KEEPALIVE: 1, EXPORTED_FUNCTIONS: ['_kept', '_odd-name'], DECLARE_ASM_MODULE_EXPORTS: 1,
    EXPORTED_RUNTIME_METHODS: ['runtimeAlias'], MINIMAL_RUNTIME: 0, MEMORY64: 0 };
  const functionExports = exportsOf([['__wasm_call_ctors'], ['kept', [Type.I32]], ['odd-name'], ['hidden-name'], ['dynCall_vi'], ['plain']]);
  const otherExports = [global('constant', 0), global('variable', 1), [{ name: 'memory', kind: ExternType.MEMORY }, null]];
  const receive = (values, more = {}) => createReceiving(settingsOf({ ...base, ...values }), { functionExports, otherExports,
    librarySymbols: ['dynCalls'], aliases: { alias1: 'plain', runtimeAlias: 'plain' }, extraJsExports: new Set(['_plain']), ...more });
  assert.equal(receive({}), "\n// Imports from the Wasm binary.\nvar _kept,\n  dynCall_vi,\n  _plain,\n  _constant,\n  _variable,\n  memory,\n  alias1,\n  runtimeAlias;\n\n"
    + "\nfunction assignWasmExports(wasmExports) {\n  _kept = Module['_kept'] = wasmExports['kept'];\n  Module['_odd-name'] = wasmExports['odd-name'];\n"
    + "  dynCall_vi = dynCalls['vi'] = wasmExports['dynCall_vi'];\n  _plain = Module['_plain'] = alias1 = runtimeAlias = Module['runtimeAlias'] = wasmExports['plain'];\n"
    + "  _constant = wasmExports['constant'].value;\n  _variable = wasmExports['variable'];\n  memory = wasmExports['memory'];\n}");
  // MEMORY64 globals are numbers; without dynCalls, no table entry.
  const wide = receive({ MEMORY64: 1 }, { librarySymbols: [] });
  assert.ok(wide.includes("  _constant = Number(wasmExports['constant'].value);\n"));
  assert.ok(wide.includes("  dynCall_vi = wasmExports['dynCall_vi'];\n"));
  // Without EXPORT_KEEPALIVE only the JS library's extra exports reach Module.
  const quiet = receive({ EXPORT_KEEPALIVE: 0 });
  assert.ok(quiet.includes("  _kept = wasmExports['kept'];\n") && !quiet.includes('odd-name'));
  assert.equal(receive({ DECLARE_ASM_MODULE_EXPORTS: 0 }), '');
  assert.equal(createReceiving(settingsOf({ ...base, EXPORT_KEEPALIVE: 0 }), { functionExports: exportsOf([['odd-name']]), otherExports: [], librarySymbols: [],
    aliases: {}, extraJsExports: new Set() }), '\n// Imports from the Wasm binary.\n\nfunction assignWasmExports(wasmExports) {\n}');
  assert.throws(() => receive({}, { aliases: { a: 'absent' } }), error => error.message === 'assertion failed: expected alias target (absent) to be exported');
});

test('receiving with ASSERTIONS: early-access guards, export checks and debug wrappers', () => {
  const functionExports = exportsOf([['kept', [Type.I32, Type.I32]], ['odd-name'], ['emscripten_stack_get_base'], ['__trap'], ['pthread_self'], ['plain'],
    ['__asan_x'], ['_emscripten_stack_y'], ['__lsan_z'], ['emscripten_get_sbrk_ptr']]);
  const values = { ASSERTIONS: 1, EXPORT_KEEPALIVE: 1, EXPORTED_FUNCTIONS: ['_kept', '_odd-name'], DECLARE_ASM_MODULE_EXPORTS: 1,
    EXPORTED_RUNTIME_METHODS: [], MINIMAL_RUNTIME: 0, MEMORY64: 0 };
  const text = createReceiving(settingsOf(values), { functionExports, otherExports: [global('g', 0)], librarySymbols: [], aliases: {}, extraJsExports: new Set() });
  const lines = text.split('\n');
  assert.deepEqual(lines.slice(0, 13), ['', '// Imports from the Wasm binary.', "var _kept = Module['_kept'] = makeInvalidEarlyAccess('_kept');",
    "Module['_odd-name'] = makeInvalidEarlyAccess('_odd-name');", "var _emscripten_stack_get_base = makeInvalidEarlyAccess('_emscripten_stack_get_base');",
    "var ___trap = makeInvalidEarlyAccess('___trap');", "var _pthread_self = makeInvalidEarlyAccess('_pthread_self');", "var _plain = makeInvalidEarlyAccess('_plain');",
    "var ___asan_x = makeInvalidEarlyAccess('___asan_x');", "var __emscripten_stack_y = makeInvalidEarlyAccess('__emscripten_stack_y');",
    "var ___lsan_z = makeInvalidEarlyAccess('___lsan_z');", "var _emscripten_get_sbrk_ptr = makeInvalidEarlyAccess('_emscripten_get_sbrk_ptr');",
    "var _g = makeInvalidEarlyAccess('_g');"]);
  assert.ok(text.includes("  assert(typeof wasmExports['kept'] != 'undefined', 'missing Wasm export: kept');\n"));
  assert.ok(text.includes("  _kept = Module['_kept'] = createExportWrapper('kept', wasmExports['kept'], 2);\n"));
  assert.ok(text.includes("  _plain = createExportWrapper('plain', wasmExports['plain'], 0);\n"));
  for (const name of ['emscripten_stack_get_base', '__trap', 'pthread_self', '__asan_x', '_emscripten_stack_y', '__lsan_z', 'emscripten_get_sbrk_ptr'])
    assert.ok(text.includes(` = wasmExports['${name}'];\n`), name);
  assert.ok(text.includes("  _g = wasmExports['g'].value;\n"));
  // MINIMAL_RUNTIME has no debug wrappers.
  const minimal = createReceiving(settingsOf({ ...values, MINIMAL_RUNTIME: 1 }), { functionExports, otherExports: [], librarySymbols: [], aliases: {}, extraJsExports: new Set() });
  assert.ok(!minimal.includes('createExportWrapper'));
  // A symbol neither declared nor exported gets no guard.
  const hidden = createReceiving(settingsOf({ ...values, EXPORT_KEEPALIVE: 0 }), { functionExports: exportsOf([['odd-name']]), otherExports: [], librarySymbols: [],
    aliases: {}, extraJsExports: new Set() });
  assert.equal(hidden, "\n// Imports from the Wasm binary.\n\nfunction assignWasmExports(wasmExports) {\n  assert(typeof wasmExports['odd-name'] != 'undefined', 'missing Wasm export: odd-name');\n}");
});

test('sending the imports: names, library symbols the Wasm does not define, closure annotations', () => {
  const metadata = { invokeFuncs: [], imports: ['b', 'emjs', 'A'], emJsFuncs: new Map([['emjs', '']]), functionExports: new Map([['defined', {}]]) };
  const values = { IMPORTED_MEMORY: 0, EXPORTED_FUNCTIONS: ['_libFn', '_defined', 'notC', '_absent'], SIDE_MODULE_IMPORTS: ['_sideFn'], MAYBE_CLOSURE_COMPILER: 0 };
  assert.equal(createSending(settingsOf(values), metadata, ['_libFn', '_defined', 'notC', '_sideFn']),
    '{\n  A: _A,\n  b: _b,\n  emjs,\n  libFn: _libFn,\n  sideFn: _sideFn\n}');
  assert.equal(createSending(settingsOf({ ...values, EXPORTED_FUNCTIONS: [], SIDE_MODULE_IMPORTS: [] }), { ...metadata, imports: [] }, []), '{\n  \n}');
});

test('the module part of the glue: imports per threading, invokes and wrappers', () => {
  const metadata = { invokeFuncs: ['invoke_v'], imports: ['f'], emJsFuncs: new Map(), functionExports: new Map([['malloc', { params: [Type.I64], returns: [Type.I64] }]]) };
  const values = { ASSERTIONS: 0, EXPORT_KEEPALIVE: 0, EXPORTED_FUNCTIONS: [], DECLARE_ASM_MODULE_EXPORTS: 0, EXPORTED_RUNTIME_METHODS: [], MINIMAL_RUNTIME: 0,
    MEMORY64: 0, IMPORTED_MEMORY: 0, SIDE_MODULE_IMPORTS: [], MAYBE_CLOSURE_COMPILER: 0, PTHREADS: 0, WASM_WORKERS: 0, SUPPORT_LONGJMP: 'emscripten',
    DISABLE_EXCEPTION_CATCHING: 1, SIGNATURE_CONVERSIONS: [] };
  const parts = { functionExports: metadata.functionExports, otherExports: [], librarySymbols: [], aliases: {}, extraJsExports: new Set(), nativeSigs: { malloc: 'pp' } };
  assert.equal(createModule(settingsOf(values), metadata, parts), `var wasmImports = {\n  f: _f,\n  invoke_v\n};\n\n${makeInvoke(settingsOf(values), 'v')}\n`);
  const workers = createModule(settingsOf({ ...values, WASM_WORKERS: 1 }), metadata, parts);
  assert.ok(workers.startsWith('  var wasmImports;\n  function assignWasmImports() {\n    wasmImports = {\n    f: _f,\n    invoke_v\n  };\n  }\n\n'));
  const catching = createModule(settingsOf({ ...values, SUPPORT_LONGJMP: 'wasm', DISABLE_EXCEPTION_CATCHING: 0 }), metadata, parts);
  assert.ok(catching.includes('function invoke_v('));
  assert.throws(() => createModule(settingsOf({ ...values, SUPPORT_LONGJMP: 'wasm' }), metadata, parts),
    error => error.message === 'assertion failed: invoke_ functions exported but exceptions and longjmp are both disabled');
  const none = createModule(settingsOf({ ...values, SUPPORT_LONGJMP: 'wasm' }), { ...metadata, invokeFuncs: [] }, parts);
  assert.equal(none, 'var wasmImports = {\n  f: _f\n};\n');
  const wide = createModule(settingsOf({ ...values, MEMORY64: 1, SUPPORT_LONGJMP: 'wasm' }), { ...metadata, invokeFuncs: [] }, parts);
  assert.ok(wide.endsWith("wasmExports['malloc'] = makeWrapper_pp(wasmExports['malloc']);\n  return wasmExports;\n}\n"));
});

test('static code hooks are injected per runtime shape', () => {
  const code = '<<< ATMODULES >>>|<<< ATPRERUNS >>>|<<< ATINITS >>>|<<< ATPOSTCTORS >>>|<<< ATMAINS >>>|<<< ATPOSTRUNS >>>|<<< ATEXITS >>>|<<< ATINITS >>>';
  const hooks = { ATMODULES: 'm', ATPRERUNS: '', ATINITS: 'i', ATPOSTCTORS: 'c', ATMAINS: 'x', ATPOSTRUNS: 'r', ATEXITS: 'e' };
  const inject = values => applyStaticCodeHooks(settingsOf({ HAS_MAIN: 1, MINIMAL_RUNTIME: 0, EXIT_RUNTIME: 1, ...values }), hooks, code);
  assert.equal(inject({}), '// Begin ATMODULES hooks\n  m\n  // End ATMODULES hooks|// No ATPRERUNS hooks|// Begin ATINITS hooks\n  i\n  // End ATINITS hooks|'
    + '// Begin ATPOSTCTORS hooks\n  c\n  // End ATPOSTCTORS hooks|// Begin ATMAINS hooks\n  x\n  // End ATMAINS hooks|// Begin ATPOSTRUNS hooks\n  r\n  // End ATPOSTRUNS hooks|'
    + '// Begin ATEXITS hooks\n  e\n  // End ATEXITS hooks|// Begin ATINITS hooks\n  i\n  // End ATINITS hooks');
  assert.ok(inject({ HAS_MAIN: 0 }).includes('|<<< ATMAINS >>>|// Begin ATPOSTRUNS'));
  assert.ok(inject({ EXIT_RUNTIME: 0 }).includes('|<<< ATEXITS >>>|'));
  const minimal = inject({ HAS_MAIN: 0, MINIMAL_RUNTIME: 1 });
  assert.ok(minimal.includes('|<<< ATMAINS >>>|<<< ATPOSTRUNS >>>|<<< ATEXITS >>>|'));
  assert.ok(inject({ MINIMAL_RUNTIME: 1 }).includes('// Begin ATPOSTRUNS hooks'));
});

test('assembling the glue: forwarded data, markers, constants and the Asyncify exports', () => {
  const values = { ASSERTIONS: 0, INCOMING_MODULE_JS_API: [], ALL_INCOMING_MODULE_JS_API: [], MAIN_MODULE: 0, IMPORTED_MEMORY: 0, EXPORTED_FUNCTIONS: [],
    SIDE_MODULE_IMPORTS: [], MAYBE_CLOSURE_COMPILER: 0, EXPORT_KEEPALIVE: 0, DECLARE_ASM_MODULE_EXPORTS: 1, MEMORY64: 0, PTHREADS: 0, WASM_WORKERS: 0,
    SUPPORT_LONGJMP: 'wasm', DISABLE_EXCEPTION_CATCHING: 1, HAS_MAIN: 0, MINIMAL_RUNTIME: 0, EXIT_RUNTIME: 0, EXPORTED_RUNTIME_METHODS: [], ASYNCIFY: 0 };
  const metadata = () => ({ invokeFuncs: [], imports: [], emJsFuncs: new Map(), functionExports: new Map(),
    otherExports: [global('__em_js__x', 0), global('__start_em_asm', 0), global('visible', 0)] });
  const forwarded = data => `//FORWARDED_DATA:${JSON.stringify({ warnings: false, librarySymbols: [], nativeAliases: {}, extraExports: [], ...data })}`;
  const assemble = (text, more = {}, settings = settingsOf({ ...values })) => {
    const warnings = [], extraJsExports = new Set();
    const glue = assembleGlue(settings, more.metadata ?? metadata(), text, { asmConsts: more.asmConsts ?? [], emJsFuncs: more.emJsFuncs ?? [], nativeSigs: {},
      extraJsExports, warn: message => warnings.push(message) });
    return { glue, warnings, extraJsExports, settings };
  };
  const plain = assemble(`A\n// EMSCRIPTEN_END_FUNCS\nB\n${forwarded({ extraExports: ['_x', '_y'] })}`);
  assert.equal(plain.glue, "A\n\n// Imports from the Wasm binary.\nvar _visible;\n\n\nfunction assignWasmExports(wasmExports) {\n  _visible = wasmExports['visible'].value;\n}"
    + '\n\nvar wasmImports = {\n  \n};\n\nB\n');
  assert.deepEqual(plain.warnings, []);
  assert.deepEqual([...plain.extraJsExports], ['_x', '_y']);
  assert.deepEqual(plain.settings.values.ALIASES, []);
  const withAliases = assemble(`A\n// EMSCRIPTEN_END_FUNCS\n${forwarded({ nativeAliases: { a: 'visible', b: 'visible' } })}`);
  assert.deepEqual(withAliases.settings.values.ALIASES, ['a', 'b']);
  // Without EM_ASM constants or MAIN_MODULE, no ASM_CONSTS table; EM_JS functions follow it.
  const consts = assemble(`A\n// EMSCRIPTEN_END_FUNCS\n${forwarded({})}`, { asmConsts: [[8, 'f']], emJsFuncs: ['function g() {}', 'function h() {}'] });
  assert.ok(consts.glue.startsWith('A\nvar ASM_CONSTS = {\n  8: f\n};\nfunction g() {}\nfunction h() {}\n\n// Imports'));
  const main = assemble(`A\n// EMSCRIPTEN_END_FUNCS\n${forwarded({})}`, {}, settingsOf({ ...values, MAIN_MODULE: 2 }));
  assert.ok(main.glue.startsWith('A\nvar ASM_CONSTS = {\n  \n};\n\n// Imports'));
  // Markers.
  assert.throws(() => assemble('A\n// EMSCRIPTEN_END_FUNCS\nno data'), error => error.message === 'Did not receive forwarded data in pre output - process failed?');
  assert.throws(() => assemble(forwarded({})), error => error.message === 'The JS compiler output must contain one EMSCRIPTEN_END_FUNCS marker');
  assert.throws(() => assemble(`// EMSCRIPTEN_END_FUNCS\n// EMSCRIPTEN_END_FUNCS\n${forwarded({})}`), /one EMSCRIPTEN_END_FUNCS marker/);
  // ASSERTIONS: the incoming-module check lists ignored properties.
  const checked = assemble(`A\n// EMSCRIPTEN_END_FUNCS\n${forwarded({})}`, {},
    settingsOf({ ...values, ASSERTIONS: 1, INCOMING_MODULE_JS_API: ['b'], ALL_INCOMING_MODULE_JS_API: ['a', 'b', 'c'] }));
  assert.ok(checked.glue.startsWith("A\nfunction checkIncomingModuleAPI() {\n  ignoredModuleProp('a');\n  ignoredModuleProp('c');\n}\n"));
  // Only ASYNCIFY=1 adds the asyncify exports.
  for (const [asyncify, added] of [[1, true], [2, false], [0, false]]) {
    const data = metadata();
    assemble(`A\n// EMSCRIPTEN_END_FUNCS\n${forwarded({})}`, { metadata: data }, settingsOf({ ...values, ASYNCIFY: asyncify }));
    assert.deepEqual([...data.functionExports.keys()], added ? ['asyncify_start_unwind', 'asyncify_stop_unwind', 'asyncify_start_rewind', 'asyncify_stop_rewind'] : []);
    if (added) {
      assert.deepEqual(data.functionExports.get('asyncify_start_rewind'), { params: [Type.I32], returns: [] });
      assert.deepEqual(data.functionExports.get('asyncify_stop_rewind'), { params: [], returns: [] });
      assert.deepEqual(data.functionExports.get('asyncify_stop_unwind'), { params: [], returns: [] });
    }
  }
});

test('Emscripten license blocks: every form emcc removes, and nothing else', () => {
  const settings = settingsOf({ EMIT_EMSCRIPTEN_LICENSE: 0 });
  for (const block of ['/**\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */\n',
    '/*\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */',
    '/** Copyright 2015 The Emscripten Authors SPDX-License-Identifier: MIT */  ',
    '/** @license Copyright 2015 The Emscripten Authors SPDX-License-Identifier: MIT */',
    '/**Copyright 2015 The Emscripten Authors SPDX-License-Identifier: MIT*/',
    '/**@license Copyright 2015 The Emscripten Authors\nSPDX-License-Identifier: MIT\n Copyright 2016 The Emscripten Authors SPDX-License-Identifier: MIT*/\n'])
    assert.equal(handleLicense(settings, `a;${block}b;`), 'a;b;', JSON.stringify(block));
  for (const kept of ['/**\n * Copyright 2020 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n *\n * Copyright 2021 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */',
    '/** Copyright 2010 Someone Else SPDX-License-Identifier: MIT */', '/** @license MIT */', '/* Copyright X The Emscripten Authors SPDX-License-Identifier: MIT */'])
    assert.equal(handleLicense(settings, kept), kept);
  assert.equal(handleLicense(settingsOf({ EMIT_EMSCRIPTEN_LICENSE: 1 }), 'x'), '/**\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */\nx');
});

test('settings: values, defaults, pinned and internal settings', () => {
  assert.deepEqual(settingsPlaceholders, { USER_EXPORTS: '<user-exports>', EXPORTED_FUNCTIONS: '<exported-functions>', PRE_JS_FILES: '<pre-js>' });
  const settings = new Settings({ A: 1, PINNED: 0, SIDE_MODULE_IMPORTS: ['x'], EXTRA: 'e' }, { A: 0, PINNED: 0, B: [1], SIDE_MODULE_IMPORTS: [] });
  assert.ok(settings.has('A') && settings.has('B') && settings.has('EXTRA') && !settings.has('C'));
  assert.equal(settings.get('B')[0], 1);
  assert.throws(() => settings.set('C', 1), error => error.message === 'The link-driver recipe has no default for setting C');
  settings.set('EXTRA', 'f');
  settings.set('B', [1]);
  // Only non-default values are written, except those recorded at their default; never internal ones.
  assert.deepEqual(settings.external(), { A: 1, PINNED: 0, EXTRA: 'f' });
  settings.set('A', 0);
  settings.set('B', [2]);
  assert.deepEqual(settings.external(), { PINNED: 0, EXTRA: 'f', B: [2] });
  assert.equal(settings.serialize(), '{\n  "B": [\n    2\n  ],\n  "EXTRA": "f",\n  "PINNED": 0\n}');
  // The external values are copied.
  const external = { L: [1] };
  const copy = new Settings(external, {});
  copy.get('L').push(2);
  assert.deepEqual(external.L, [1]);
});

test('settings templates: placeholders, Emscripten paths and nesting', () => {
  const template = { USER_EXPORTS: '<user-exports>', NESTED: { list: ['<pre-js>', '<emscripten>/src/x.js'], flag: true, n: 1 }, LIB: '<js-library>', NULL: null };
  assert.deepEqual(instantiateSettings(template, { userExports: ['_main'], preJs: ['/p.js'], jsLibrary: '/l.js', emscripten: '/em', platform: 'linux' }),
    { USER_EXPORTS: ['_main'], NESTED: { list: [['/p.js'], '/em/src/x.js'], flag: true, n: 1 }, LIB: '/l.js', NULL: null });
  assert.throws(() => instantiateSettings({ X: '<unknown>' }, { userExports: ['_main'], preJs: [], jsLibrary: '', emscripten: '/em' }),
    error => error.message === 'Unknown settings placeholder <unknown>');
  assert.throws(() => instantiateSettings({ X: '<other-thing>/x' }, { userExports: ['_main'], preJs: [], jsLibrary: '', emscripten: '/em' }), /Unknown settings placeholder/);
  assert.deepEqual(instantiateSettings({ X: 'a<b>', Y: 'x<emscripten>/y' }, { userExports: ['_main'], preJs: [], jsLibrary: '', emscripten: '/em' }),
    { X: 'a<b>', Y: 'x<emscripten>/y' });
  assert.deepEqual(instantiateSettings({ X: '<emscripten>/a/b' }, { userExports: ['_main'], preJs: [], jsLibrary: '', emscripten: '/em' }), { X: path.join('/em', 'a', 'b') });
  assert.throws(() => instantiateSettings({}, { userExports: ['main'], preJs: [], jsLibrary: '', emscripten: '/em' }),
    error => error.message === 'The Node link driver has no recording for applications without _main in EXPORTED_FUNCTIONS');
});

test('settings defaults are read from Emscripten\'s settings files', () => {
  const emscripten = mkdtempSync(join(tmpdir(), 'lasm-settings-'));
  try {
    mkdirSync(join(emscripten, 'src'));
    writeFileSync(join(emscripten, 'src', 'settings.js'), 'var A = 1;\nvar LIST = [1, "x"];\nvar OBJ = { k: true };\n');
    writeFileSync(join(emscripten, 'src', 'settings_internal.js'), 'var B = "b";\nvar A = 2;\n');
    assert.deepEqual(readSettingsDefaults(emscripten), { A: 2, LIST: [1, 'x'], OBJ: { k: true }, B: 'b' });
    assert.equal(Object.getPrototypeOf(readSettingsDefaults(emscripten).LIST), Array.prototype, 'plain values, not the context\'s');
  } finally { rmSync(emscripten, { recursive: true, force: true }); }
});
