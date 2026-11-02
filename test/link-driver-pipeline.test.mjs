// The Node link driver's pipeline (src/link-driver/link.mjs linkWithNode) end
// to end with a stand-in toolchain: every recorded step of the probe, final and
// edge links of the bundled recipes runs against a fake `execute` that plays
// wasm-ld, llvm-objcopy, Binaryen and Emscripten's JavaScript tools. The tests
// check what each tool is asked to do, the files the driver writes between the
// steps and the program it delivers. The byte gates against real emcc
// recordings are scripts/link-driver/gate-link.mjs.
import assert from 'node:assert/strict';
import test from 'node:test';
import { mkdtempSync, mkdirSync, readFileSync, readdirSync, writeFileSync, existsSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import path, { join } from 'node:path';
import { linkWithNode, jsStepCache, linkTemporaryDirectory, removeTemporary, bundledNativeSigs, parseLinkArguments,
  expandArguments, emscriptenResponseFile, linkModes, stubObject, addJsDependencies, linkerExports, prepareDceGraph,
  unusedFromMetadce, parseMinifiedNames, needsResponseFile, shlexJoin } from '../src/link-driver/link.mjs';
import { bundledRecipe } from '../src/link-driver/compile.mjs';
import { runtimeExecutable, scriptPrefix } from '../src/js-runtime.mjs';

const edgeRecipe = () => JSON.parse(readFileSync(new URL('../src/link-driver/recipe-emscripten-6.0.9-edge.json', import.meta.url), 'utf8'));

// ---- A Wasm module as wasm-ld would leave it -----------------------------
const uleb = value => { const out = []; do { let byte = value & 0x7f; value >>>= 7; if (value) byte |= 0x80; out.push(byte); } while (value); return out; };
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
const I32 = 0x7f, I64 = 0x7e;

/** A linked program: main (a wrapper of the original main), the stack end,
 * an EM_ASM string, an EM_JS function, a JS library dependency, imports
 * (one of them weak) and the target features the settings require. */
function programModule({ features = ['atomics', 'memory64'], invoke = false } = {}) {
  const asm = Buffer.from('{ out($0); }\0'), deps = Buffer.from('$helper,jsfn\0'), emJs = Buffer.from('(int x)<::>{ return x + 1; }\0');
  const data = Buffer.concat([asm, deps, emJs]), base = 1024;
  const types = vector([[0x60, 0, 0], [0x60, 1, I32, 1, I32], [0x60, 2, I64, I32, 0]]);
  const imports = vector([
    [...name('env'), ...name('foo'), 0, 1],
    [...name('env'), ...name(invoke ? 'invoke_vi' : 'other'), 0, 2],
    [...name('env'), ...name('emjs_add'), 0, 1],
    [...name('wasi_snapshot_preview1'), ...name('fd_write'), 0, 1],
  ]);
  // Functions 4 main, 5 original main, 6 emscripten_stack_get_end, 7 malloc.
  const functions = vector([[0], [0], [0], [1]]);
  const globals = vector([
    [I32, 0, 0x41, ...sleb(base), 0x0b], [I32, 0, 0x41, ...sleb(base + asm.length), 0x0b],
    [I32, 0, 0x41, ...sleb(base + asm.length), 0x0b], [I32, 0, 0x41, ...sleb(base + asm.length + deps.length), 0x0b],
    [I32, 0, 0x41, ...sleb(base + asm.length + deps.length), 0x0b], [I32, 1, 0x41, 7, 0x0b], [I64, 0, 0x42, ...sleb(4096), 0x0b],
  ]);
  const exports = vector([
    [...name('main'), 0, 4], [...name('emscripten_stack_get_end'), 0, 6], [...name('malloc'), 0, 7],
    [...name('__start_em_asm'), 3, 0], [...name('__stop_em_asm'), 3, 1], [...name('__start_em_lib_deps'), 3, 2],
    [...name('__stop_em_lib_deps'), 3, 3], [...name('__em_js__emjs_add'), 3, 4], [...name('counter'), 3, 5],
    [...name('table_size'), 3, 6], [...name('memory'), 2, 0],
  ]);
  const body = code => { const bytes = [0, ...code]; return [...uleb(bytes.length), ...bytes]; };
  const code = vector([body([0x10, 5, 0x0b]), body([0x0b]), body([0x0b]), body([0x20, 0, 0x0b])]);
  const segment = [0, 0x41, ...sleb(base), 0x0b, ...uleb(data.length), ...data];
  const dylinkImports = [1, ...name('env'), ...name('foo'), 1];
  const dylink = [4, ...uleb(dylinkImports.length), ...dylinkImports];
  const featureBytes = [features.length, ...features.flatMap(feature => [0x2b, ...name(feature)])];
  return Buffer.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, ...custom('dylink.0', dylink), ...section(1, types),
    ...section(2, imports), ...section(3, functions), ...section(5, vector([[0, 1]])), ...section(6, globals),
    ...section(7, exports), ...section(10, code), ...section(11, vector([segment])), ...custom('target_features', featureBytes)]);
}

// ---- The stand-in toolchain -------------------------------------------------
const emscripten = path.resolve('/em');
const license = '/**\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */\n';
const forwarded = { warnings: true, librarySymbols: ['_jsfn', 'helper'], nativeAliases: { aliasMain: 'main' }, extraExports: ['_malloc'],
  ATINITS: 'initHook();', ATMAINS: 'mainHook();', ATEXITS: 'exitHook();' };
const graph = [
  { name: 'emcc$export$main', export: 'main', reaches: [] },
  { name: 'emcc$export$malloc', export: 'malloc' },
  { name: 'emcc$export$unusedExport', export: 'unusedExport' },
  { name: 'emcc$export$__em_js__x', export: '__em_js__x' },
  { name: 'emcc$import$foo', import: ['env', 'foo'] },
  { name: 'emcc$import$fd_write', import: ['env', 'fd_write'] },
];

/** A fake execFileSync. `calls` records [tool, script or first argument, argv, options]. */
function toolchain({ module = programModule(), metadce = 'unused: emcc$import$foo\nunused: emcc$export$unusedExport\nunused: emcc$export$__em_js__x\n',
  minified = 'foo => a\nfd_write => b\n', wrapper = 'export default function Module() {\n"<<< INNER_JS_CODE >>>"\n}\n', glueText } = {}) {
  const calls = [], snapshots = {};
  const execute = (program, argv, options) => {
    const isNode = program === runtimeExecutable;
    const args = isNode ? argv.slice(scriptPrefix().length) : argv;
    const tool = path.win32.basename(isNode ? args[0] : program).replace(/\.exe$/, '');
    calls.push({ tool, program, args, options });
    const out = args.indexOf('-o') >= 0 ? args[args.indexOf('-o') + 1] : undefined;
    switch (tool) {
      case 'compiler.mjs':
        if (args.includes('--symbols-only')) return JSON.stringify({ deps: { jsfn: ['malloc'], $helper: ['free'], none: [] },
          extraLibraryFuncs: ['jsfn'], asyncFuncs: ['sleepAsync'] });
        snapshots.glueSettings = JSON.parse(options.input);
        return glueText ?? `${license}// glue ${snapshots.glueSettings.TARGET_JS_NAME}\r\nPRE\n// EMSCRIPTEN_END_FUNCS\n<<< ATINITS >>>\n<<< ATMAINS >>>\n<<< ATEXITS >>>\n//FORWARDED_DATA:${JSON.stringify(forwarded)}`;
      case 'acorn-optimizer.mjs': {
        const pass = args[2];
        if (pass === 'emitDCEGraph') { snapshots.dceInfo = readFileSync(args[1], 'utf8'); return options.encoding === 'utf8' ? JSON.stringify(graph) : Buffer.from('not captured'); }
        if (pass === 'applyDCEGraphRemovals' || pass === 'applyImportAndExportNameChanges') snapshots[pass] = readFileSync(args[1], 'utf8');
        const input = readFileSync(args[1], 'utf8');
        writeFileSync(out, `${pass === 'applyDCEGraphRemovals' || pass === 'applyImportAndExportNameChanges' ? input.slice(0, input.indexOf('// EXTRA_INFO:')) : input}// ${pass}\n`);
        return Buffer.alloc(0);
      }
      case 'preprocessor.mjs':
        snapshots.modularize = { cwd: options.cwd, input: JSON.parse(options.input), encoding: options.encoding };
        assert.deepEqual(options.stdio, ['pipe', 'pipe', 'inherit']);
        return options.encoding === 'utf8' ? wrapper : Buffer.from(wrapper);
      default: break;
    }
    if (tool === 'wasm-ld') {
      const list = args.length === 1 && args[0].startsWith('@') ? readFileSync(args[0].slice(1), 'utf8').trim().split('\n') : args;
      snapshots.wasmLd = list;
      snapshots.stub = readFileSync(list[2], 'utf8');
      writeFileSync(list[list.indexOf('-o') + 1], module);
      return Buffer.alloc(0);
    }
    if (tool === 'wasm-metadce') {
      snapshots.graph = JSON.parse(readFileSync(args[0].slice('--graph-file='.length), 'utf8'));
      return options.encoding === 'utf8' ? metadce : Buffer.from('not captured');
    }
    if (tool === 'wasm-opt' && options.encoding) return minified;
    return Buffer.alloc(0);
  };
  return { execute, calls, snapshots };
}

function fixture(mode, { recipe = mode.startsWith('edge') ? edgeRecipe() : bundledRecipe(), exportsList = ['_main', '_malloc', '_missing'], inputs = [] } = {}) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-link-pipeline-'));
  const spec = recipe.link.modes[mode];
  const exportsFile = join(directory, 'exports.json'), pre = join(directory, 'pre.js'), library = join(directory, 'library.js');
  writeFileSync(exportsFile, JSON.stringify(exportsList) + '\r\n');
  writeFileSync(pre, '// pre\n'); writeFileSync(library, '// library\n');
  const dist = join(directory, 'dist'); mkdirSync(dist);
  const output = join(dist, `program${spec.output ?? '.cjs'}`), map = join(directory, `${mode}.map`);
  const object = join(directory, 'module-0.o'); writeFileSync(object, 'object');
  const args = [object, ...inputs, '-Wl,--wrap=lean_initialize', `-Wl,-Map=${map}`,
    ...spec.emccFlags.map(flag => flag === '-sEXPORTED_FUNCTIONS=@<exports>' ? `-sEXPORTED_FUNCTIONS=@${exportsFile}` : flag),
    '-Wl,--start-group', join(directory, 'libLean.a'), '-Wl,--end-group', '--pre-js', pre, '--js-library', library, '-o', output];
  const temp = join(directory, 'temp');
  const sdk = { driver: emscripten, prefix: path.resolve('/sdk'), env: { LASM_TEST: '1' }, identity: 'test-tools' };
  return { directory, recipe, args, output, map, temp, sdk, object, exportsFile, pre, library, cleanup: () => rmSync(directory, { recursive: true, force: true }) };
}

const run = (f, mode, options = {}) => {
  const tools = toolchain(options.tools);
  const warnings = [];
  const result = linkWithNode({ recipe: f.recipe, mode, args: f.args, sdk: f.sdk, cache: path.resolve('/cache'), temp: f.temp,
    nativeSigs: bundledNativeSigs(f.recipe), execute: tools.execute, warn: message => warnings.push(message), ...options.link });
  return { ...tools, result, warnings };
};

test('the final link runs every recorded step with the program\'s inputs and delivers the glue', () => {
  const f = fixture('final', { inputs: [] });
  try {
    const intermediates = join(f.directory, 'intermediates');
    const { calls, snapshots, result, warnings } = run(f, 'final', { link: { intermediates } });
    assert.deepEqual(calls.map(call => call.tool), ['compiler.mjs', 'wasm-ld', 'llvm-objcopy', 'wasm-emscripten-finalize', 'compiler.mjs',
      'wasm-opt', 'acorn-optimizer.mjs', 'acorn-optimizer.mjs', 'acorn-optimizer.mjs', 'wasm-metadce', 'acorn-optimizer.mjs', 'acorn-optimizer.mjs']);
    const wasm = f.output.replace(/\.cjs$/, '.wasm');
    assert.deepEqual(result, { wasm, js: f.output, map: f.map, requiredExports: ['_malloc', '_missing', '_emjs_add', '_counter', '_table_size', '_main'] });
    // Every tool runs with the SDK's environment, the recorded timeout, hidden windows.
    for (const call of calls) {
      assert.equal(call.options.env, f.sdk.env);
      assert.equal(call.options.timeout, 1800_000);
      assert.equal(call.options.windowsHide, true);
      assert.equal(call.options.maxBuffer, 512 * 1024 * 1024);
    }
    // Emscripten's tools: by the compiler's own runtime, below the SDK's Emscripten.
    assert.equal(calls[0].program, runtimeExecutable);
    assert.equal(calls[0].args[0], join(emscripten, 'tools', 'compiler.mjs'));
    assert.equal(calls[1].program, join(f.sdk.prefix, 'bin', 'wasm-ld'));
    // The symbols step reads the settings on stdin and its output is captured.
    const symbolsSettings = JSON.parse(calls[0].options.input);
    assert.deepEqual(symbolsSettings.USER_EXPORTS, ['_main', '_malloc', '_missing']);
    assert.deepEqual(symbolsSettings.EXPORTED_FUNCTIONS, ['_malloc', '_missing']);
    assert.deepEqual(symbolsSettings.PRE_JS_FILES, [f.pre]);
    assert.equal(calls[0].options.encoding, 'utf8');
    assert.deepEqual(calls[0].options.stdio, ['pipe', 'pipe', 'inherit']);
    // Uncaptured tools inherit the given stdio and get no input.
    assert.deepEqual(calls[2].options.stdio, ['ignore', 'pipe', 'inherit']);
    assert.equal(calls[2].options.encoding, undefined);
    // wasm-ld: the stub library of JS symbols, the export lists and the inputs in order.
    assert.equal(snapshots.stub, '#STUB\njsfn: malloc\nnone: ');
    const exportsAt = snapshots.wasmLd.indexOf('--strip-debug') + 1, ifDefinedAt = snapshots.wasmLd.indexOf('--export-if-defined=__start_em_asm');
    const exported = snapshots.wasmLd.slice(exportsAt, ifDefinedAt);
    // The C exports the program asked for, the recorded required exports, then the JS library's dependencies.
    assert.deepEqual(exported.slice(0, 3), ['--export=malloc', '--export=missing', '--export=__stack_pointer']);
    assert.equal(exported.at(-1), '--export=malloc');
    assert.ok(!exported.includes('--export=main') && !exported.includes('--export=free'));
    assert.deepEqual(snapshots.wasmLd.slice(ifDefinedAt, ifDefinedAt + 9).at(-3), '--export-if-defined=main');
    const inputsAt = snapshots.wasmLd.indexOf(f.object);
    assert.deepEqual(snapshots.wasmLd.slice(inputsAt, inputsAt + 4), [f.object, '--wrap=lean_initialize', `-Map=${f.map}`, join(f.directory, 'libLean.a')]);
    assert.ok(snapshots.wasmLd.includes(`-L${join(path.resolve('/cache'), 'sysroot', 'lib', 'wasm64-emscripten', 'pic')}`));
    assert.equal(snapshots.wasmLd[1], wasm);
    // The glue settings: names of the target, Wasm exports, features and main.
    const glue = snapshots.glueSettings;
    assert.equal(glue.TARGET_BASENAME, 'program');
    assert.equal(glue.TARGET_JS_NAME, 'program.cjs');
    assert.equal(glue.WASM_BINARY_FILE, 'program.wasm');
    assert.deepEqual(glue.WASM_EXPORTS, ['main', 'emscripten_stack_get_end', 'malloc', '__start_em_asm', '__stop_em_asm', '__start_em_lib_deps',
      '__stop_em_lib_deps', 'emjs_add', 'counter', 'table_size', 'memory']);
    assert.equal(glue.HAS_MAIN, true);
    assert.deepEqual(glue.WEAK_IMPORTS, ['foo']);
    assert.ok(!glue.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE.includes('$getWasmTableEntry'));
    assert.ok(glue.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE.includes('$helper') && glue.DEFAULT_LIBRARY_FUNCS_TO_INCLUDE.includes('jsfn'));
    assert.deepEqual(glue.EM_JS_SNIPPETS, ['function emjs_add(x) { return x + 1; }', "emjs_add.sig = 'ii';", '($0) => { out($0); }']);
    // Binaryen gets the module's features.
    const wasmOpt = calls[5].args;
    assert.deepEqual(wasmOpt.slice(-3), ['--mvp-features', '--enable-threads', '--enable-memory64']);
    assert.ok(wasmOpt.includes('-Oz'));
    // The DCE graph: roots for requested exports, WASI imports moved to their module.
    assert.equal(snapshots.graph.find(item => item.export === 'main').root, true);
    assert.equal(snapshots.graph.find(item => item.export === 'malloc').root, true);
    assert.equal(snapshots.graph.find(item => item.export === 'unusedExport').root, undefined);
    assert.deepEqual(snapshots.graph.find(item => item.name === 'emcc$import$fd_write').import, ['wasi_snapshot_preview1', 'fd_write']);
    assert.ok(snapshots.dceInfo.endsWith('// EXTRA_INFO: {"exports": [["_main", "main"], ["_emscripten_stack_get_end", "emscripten_stack_get_end"], '
      + '["_malloc", "malloc"], ["__start_em_asm", "__start_em_asm"], ["__stop_em_asm", "__stop_em_asm"], ["__start_em_lib_deps", "__start_em_lib_deps"], '
      + '["__stop_em_lib_deps", "__stop_em_lib_deps"], ["_emjs_add", "emjs_add"], ["_counter", "counter"], ["_table_size", "table_size"], ["memory", "memory"]]}'));
    assert.ok(snapshots.applyDCEGraphRemovals.endsWith('// EXTRA_INFO: {"unusedImports": ["foo"], "unusedExports": ["unusedExport"]}'));
    // Each JS pass reads the previous pass's output, named as emcc names it.
    const passes = calls.filter(call => call.tool === 'acorn-optimizer.mjs');
    assert.equal(passes[0].args[1], join(f.temp, 'program.js'));
    assert.equal(passes[0].args.at(-1), join(f.temp, 'program.jso1.js'));
    assert.equal(passes[1].args[1], join(f.temp, 'program.jso1.js'));
    assert.equal(passes[2].args[1], join(f.temp, 'emcc_acorn_info_2.js'));
    assert.equal(passes[3].args[1], join(f.temp, 'emcc_acorn_info_removals_2.js'));
    assert.equal(passes[4].args[1], join(f.temp, 'program.jso3.js'));
    assert.equal(calls[9].args[0], `--graph-file=${join(f.temp, 'emcc_dce_graph.json')}`);
    // The delivered glue: Emscripten's license removed, LF line endings, every pass applied.
    const js = readFileSync(f.output, 'utf8');
    assert.ok(js.startsWith('// glue program.cjs\nPRE\nvar ASM_CONSTS = {\n'), js.slice(0, 200));
    assert.ok(!js.includes('@license') && !js.includes('\r'));
    assert.ok(js.endsWith('// Begin ATINITS hooks\n  initHook();\n  // End ATINITS hooks\n// Begin ATMAINS hooks\n  mainHook();\n  // End ATMAINS hooks\n'
      + '// Begin ATEXITS hooks\n  exitHook();\n  // End ATEXITS hooks\n// growableHeap\n// AJSDCE\n// applyDCEGraphRemovals\n// AJSDCE\n'), js.slice(-400));
    assert.ok(js.includes("_main = Module['_main'] = aliasMain = wasmExports['main'];"), 'aliases follow their export');
    // Warnings: the JS compiler's, and the exported symbol nothing defines.
    assert.deepEqual(warnings, ['warnings in JS library compilation [-Wjs-compiler]', 'undefined exported symbol: "_missing" [-Wundefined]']);
    // EMCC_DEBUG intermediates, in emcc's order and names.
    assert.deepEqual(readdirSync(intermediates).sort(), ['emcc-00-settings.json', 'emcc-01-base.wasm', 'emcc-02-strip.wasm',
      'emcc-03-wasm-emscripten-finalize.wasm', 'emcc-04-settings.json', 'emcc-05-original.js', 'emcc-06-wasm-opt.wasm', 'emcc-07-byn.wasm',
      'emcc-08-growableHeap.js', 'emcc-09-preclean.js', 'emcc-10-preclean.wasm', 'emcc-11-AJSDCE.js', 'emcc-12-wasm-metadce.wasm',
      'emcc-13-applyDCEGraphRemovals.js', 'emcc-14-AJSDCE.js', 'emcc-15-postclean.js', 'emcc-16-postclean.wasm']);
    assert.deepEqual(JSON.parse(readFileSync(join(intermediates, 'emcc-00-settings.json'), 'utf8')), symbolsSettings);
    assert.equal(readFileSync(join(intermediates, 'emcc-05-original.js'), 'utf8').split('\n')[0], '/**');
    assert.deepEqual(readFileSync(join(intermediates, 'emcc-01-base.wasm')), programModule());
  } finally { f.cleanup(); }
});

test('a probe link stops after wasm-ld or hands its command to the caller', () => {
  const f = fixture('probe');
  try {
    const mapped = run(f, 'probe', { link: { mapOnly: true } });
    assert.equal(mapped.result, undefined);
    assert.deepEqual(mapped.calls.map(call => call.tool), ['compiler.mjs', 'wasm-ld']);
    assert.ok(existsSync(f.output.replace(/\.cjs$/, '.wasm')));
    assert.ok(!existsSync(f.output), 'no glue for a map-only probe');
    const command = run(f, 'probe', { link: { mapOnly: 'command' } });
    assert.deepEqual(command.calls.map(call => call.tool), ['compiler.mjs']);
    assert.equal(command.result.program, join(f.sdk.prefix, 'bin', 'wasm-ld'));
    assert.equal(command.result.env, f.sdk.env);
    assert.equal(command.result.args[1], f.output.replace(/\.cjs$/, '.wasm'));
    assert.ok(command.result.args.includes('--export=malloc'));
    // A full probe link: no wasm-opt and no DCE, only the glue's growableHeap pass.
    const full = run(f, 'probe');
    assert.deepEqual(full.calls.map(call => call.tool), ['compiler.mjs', 'wasm-ld', 'llvm-objcopy', 'wasm-emscripten-finalize', 'compiler.mjs', 'acorn-optimizer.mjs']);
    assert.ok(readFileSync(f.output, 'utf8').endsWith('// growableHeap\n'));
    // Only the final and edge links have a dev profile.
    assert.throws(() => run(f, 'probe', { link: { optimize: false } }), /Only the final and edge links have an unoptimized/);
  } finally { f.cleanup(); }
});

test('wasm-ld gets a response file once its command line passes emcc\'s limit', { skip: process.platform === 'win32' && 'Windows quoting of the stand-in\'s paths' }, () => {
  const inputs = Array.from({ length: 120 }, (_, index) => `/objects/a-rather-long-directory-name/for-many-objects/object-${index}.o`);
  const f = fixture('probe', { inputs });
  try {
    const { calls, snapshots } = run(f, 'probe', { link: { mapOnly: true } });
    const wasmLd = calls[1].args;
    assert.equal(wasmLd.length, 1);
    assert.equal(wasmLd[0], '@' + join(f.temp, 'wasm-ld.rsp'));
    assert.equal(readFileSync(join(f.temp, 'wasm-ld.rsp'), 'utf8'), emscriptenResponseFile(snapshots.wasmLd));
    assert.ok(snapshots.wasmLd.includes(inputs[119]));
  } finally { f.cleanup(); }
});

test('the dev profile of the final link leaves out Binaryen\'s size passes', () => {
  const f = fixture('final');
  try {
    const intermediates = join(f.directory, 'intermediates');
    const { calls } = run(f, 'final', { link: { optimize: false, intermediates } });
    assert.deepEqual(calls.map(call => call.tool === 'acorn-optimizer.mjs' ? call.args[2] : call.tool),
      ['compiler.mjs', 'wasm-ld', 'llvm-objcopy', 'wasm-emscripten-finalize', 'compiler.mjs', 'growableHeap']);
    assert.ok(readFileSync(f.output, 'utf8').endsWith('// growableHeap\n'));
    assert.ok(!readdirSync(intermediates).some(name => /preclean|postclean/.test(name)));
  } finally { f.cleanup(); }
});

test('the edge links: JSPI with a modularized ES module, Asyncify with minified names', () => {
  for (const mode of ['edge', 'edge-asyncify']) {
    const f = fixture(mode);
    try {
      const intermediates = join(f.directory, 'intermediates');
      const { calls, snapshots, result } = run(f, mode, { link: { intermediates } });
      assert.equal(result.js, f.output);
      assert.ok(f.output.endsWith('.mjs'));
      assert.equal(result.wasm, f.output.replace(/\.mjs$/, '.wasm'));
      const tools = calls.map(call => call.tool === 'acorn-optimizer.mjs' ? call.args[2] : call.tool);
      assert.equal(tools.includes('wasm-emscripten-finalize'), mode === 'edge-asyncify', 'only the Asyncify link finalizes');
      assert.deepEqual(tools.slice(-4), mode === 'edge'
        ? ['applyDCEGraphRemovals', 'AJSDCE', 'preprocessor.mjs', '--minify-whitespace']
        : ['wasm-opt', 'applyImportAndExportNameChanges', 'preprocessor.mjs', '--minify-whitespace']);
      // The modularize wrapper: preprocessed in Emscripten's src with the settings, then minified.
      assert.equal(snapshots.modularize.cwd, join(emscripten, 'src'));
      assert.equal(snapshots.modularize.encoding, 'utf8');
      assert.equal(snapshots.modularize.input.TARGET_JS_NAME, 'program.mjs');
      const minify = calls.at(-1);
      assert.equal(minify.tool, 'acorn-optimizer.mjs');
      assert.deepEqual(minify.args.slice(1), [join(f.temp, 'modularize.js'), '--minify-whitespace', '--export-es6', '-o', join(f.temp, 'modularize.min.js')]);
      const js = readFileSync(f.output, 'utf8');
      assert.ok(js.startsWith('export default function Module() {\n// glue program.mjs\nPRE\n'), js.slice(0, 120));
      assert.ok(js.endsWith('\n}\n// --minify-whitespace\n'), js.slice(-200));
      // JSPI (ASYNCIFY=2) adds reference types for Binaryen.
      const wasmOpt = calls.find(call => call.tool === 'wasm-opt');
      assert.equal(wasmOpt.args.includes('--enable-reference-types'), mode === 'edge');
      if (mode === 'edge-asyncify') {
        assert.ok(snapshots.applyImportAndExportNameChanges.endsWith('// EXTRA_INFO: {"mapping": {"foo": "a", "fd_write": "b"}}'));
        assert.ok(js.includes('// applyImportAndExportNameChanges\n'));
        assert.ok(readdirSync(intermediates).some(name => name.endsWith('-applyImportAndExportNameChanges.js')));
      }
      assert.ok(readdirSync(intermediates).some(name => name.endsWith('-modularized.js')));
      assert.ok(readdirSync(intermediates).some(name => name.endsWith('---minify-whitespace.js')));
    } finally { f.cleanup(); }
  }
});

test('the edge dev profile keeps the memory64 lowering without -Oz', () => {
  const f = fixture('edge');
  try {
    const { calls } = run(f, 'edge', { link: { optimize: false } });
    const tools = calls.map(call => call.tool === 'acorn-optimizer.mjs' ? call.args[2] : call.tool);
    assert.deepEqual(tools, ['compiler.mjs', 'wasm-ld', 'llvm-objcopy', 'compiler.mjs', 'wasm-opt', 'preprocessor.mjs', '--minify-whitespace']);
    const wasmOpt = calls[4].args;
    assert.ok(wasmOpt.includes('--memory64-lowering') && !wasmOpt.includes('-Oz'));
    const recorded = edgeRecipe().link.modes.edge.pipeline.find(step => step.kind === 'wasm-opt').args;
    const wasm = f.output.replace(/\.mjs$/, '.wasm');
    assert.deepEqual(wasmOpt, expandArguments(recorded.filter(arg => arg !== '-Oz'),
      { wasm, features: ['--mvp-features', '--enable-threads', '--enable-memory64', '--enable-reference-types'] }));
  } finally { f.cleanup(); }
});

test('the pipeline rejects recipes and outputs it cannot follow', () => {
  const variants = [
    [recipe => { recipe.link.modes.final.pipeline.splice(2, 1); }, /final link recipe expects finalize where the driver runs strip/],
    [recipe => { recipe.link.modes.final.pipeline.splice(7, 1); }, /DCE graph step must follow a minify step/],
    [recipe => { recipe.link.modes.final.pipeline.splice(10, 1); }, /must remove the DCE graph results/],
    [recipe => { recipe.link.modes.final.pipeline.push({ kind: 'shell', program: 'node', args: [] }); }, /Unknown link-driver step shell/],
    [recipe => { recipe.link.modes.final.pipeline.length = 1; }, /expects no step where the driver runs wasm-ld/],
  ];
  for (const [change, error] of variants) {
    const recipe = structuredClone(bundledRecipe()); change(recipe);
    const f = fixture('final', { recipe });
    try { assert.throws(() => run(f, 'final'), error); } finally { f.cleanup(); }
  }
  const asyncify = structuredClone(edgeRecipe());
  const steps = asyncify.link.modes['edge-asyncify'].pipeline;
  steps.splice(steps.findIndex(step => step.pass === 'applyImportAndExportNameChanges'), 1);
  const f = fixture('edge-asyncify', { recipe: asyncify });
  try { assert.throws(() => run(f, 'edge-asyncify'), /must apply the minified names/); } finally { f.cleanup(); }
  const g = fixture('edge');
  try { assert.throws(() => run(g, 'edge', { tools: { wrapper: 'no pattern' } }), /expected to find pattern in input JS: "<<< INNER_JS_CODE >>>"/); }
  finally { g.cleanup(); }
  const h = fixture('final', { exportsList: ['_free'] });
  try { assert.throws(() => run(h, 'final'), /without _main/); } finally { h.cleanup(); }
  const k = fixture('final');
  try {
    writeFileSync(k.exportsFile, '_main,_free');
    assert.throws(() => run(k, 'final'), /only JSON export lists/);
    writeFileSync(k.exportsFile, '["_main", 1]');
    assert.throws(() => run(k, 'final'), /Invalid export list/);
    writeFileSync(k.exportsFile, '{"_main": 1}');
    assert.throws(() => run(k, 'final'), /only JSON export lists/);
  } finally { k.cleanup(); }
  // A module without the features the settings imply is refused.
  const m = fixture('final');
  try { assert.throws(() => run(m, 'final', { tools: { module: programModule({ features: ['memory64'] }) } }), /threads feature/); }
  finally { m.cleanup(); }
});

test('metadce results that remove nothing skip the removal pass; MAIN_MODULE keeps the memory and table', () => {
  const f = fixture('final');
  try {
    const { calls, result } = run(f, 'final', { tools: { metadce: 'unused: emcc$import$wasmMemory\nunused: emcc$export$__em_js__x\nother line\n' } });
    const passes = calls.filter(call => call.tool === 'acorn-optimizer.mjs').map(call => call.args[2]);
    assert.deepEqual(passes, ['growableHeap', 'AJSDCE', 'emitDCEGraph', 'AJSDCE']);
    assert.ok(readFileSync(result.js, 'utf8').endsWith('// growableHeap\n// AJSDCE\n// AJSDCE\n'));
  } finally { f.cleanup(); }
});

test('the default warning goes to standard error only when emcc\'s would', t => {
  const f = fixture('probe');
  try {
    const written = [];
    t.mock.method(process.stderr, 'write', text => { written.push(String(text)); return true; });
    const tools = toolchain();
    linkWithNode({ recipe: f.recipe, mode: 'probe', args: f.args, sdk: f.sdk, cache: '/cache', temp: f.temp, nativeSigs: {}, execute: tools.execute,
      stdio: ['ignore', 'pipe', 'pipe'] });
    assert.deepEqual(written, []);
    linkWithNode({ recipe: f.recipe, mode: 'probe', args: f.args, sdk: f.sdk, cache: '/cache', temp: f.temp, nativeSigs: {}, execute: tools.execute });
    assert.deepEqual(written, ['emcc: warning: warnings in JS library compilation [-Wjs-compiler]\n',
      'emcc: warning: undefined exported symbol: "_missing" [-Wundefined]\n']);
    assert.deepEqual(tools.calls.at(-1).options.stdio, ['ignore', 'pipe', 'inherit']);
  } finally { f.cleanup(); }
});

test('Windows links join the system library and Emscripten paths with backslashes', () => {
  const f = fixture('probe');
  // Elsewhere a Windows-joined temp path is a relative file name: written inside the fixture.
  const cwd = process.cwd();
  process.chdir(f.directory);
  try {
    const tools = toolchain();
    const command = linkWithNode({ recipe: f.recipe, mode: 'probe', args: f.args, sdk: { ...f.sdk, driver: 'C:\\em', prefix: 'C:\\sdk' }, cache: 'C:\\cache',
      temp: f.temp, nativeSigs: {}, execute: tools.execute, platform: 'win32', warn: () => {}, mapOnly: 'command' });
    assert.equal(command.program, 'C:\\sdk\\bin\\wasm-ld.exe');
    assert.ok(command.args.includes('-LC:\\cache\\sysroot\\lib\\wasm64-emscripten\\pic'), command.args.join(' '));
    assert.equal(tools.calls[0].args[0], 'C:\\em\\tools\\compiler.mjs');
    assert.deepEqual(JSON.parse(tools.calls[0].options.input).JS_LIBRARIES.at(-1), f.library);
  } finally { process.chdir(cwd); f.cleanup(); }
});

test('the JavaScript step cache keys by content and restores the build\'s own directories', () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-step-cache-'));
  try {
    const pre = join(directory, 'build-1', 'pre.js');
    mkdirSync(dirname(pre), { recursive: true }); writeFileSync(pre, 'pre');
    const store = new Map();
    const stepCache = { get: key => store.get(key), set: (key, text) => store.set(key, text) };
    const recipe = bundledRecipe(), sdk = { identity: 'tools', driver: '/em' };
    assert.equal(jsStepCache({ recipe, sdk, stepCache: undefined, volatile: [], files: [] }), undefined);
    const first = jsStepCache({ recipe, sdk, stepCache, volatile: [join(directory, 'build-1'), '', undefined], files: [pre], platform: 'linux' });
    const entry = { kind: 'acorn', pass: 'AJSDCE', program: 'node', args: ['x'] };
    const key = first.key(entry, `input in ${join(directory, 'build-1')}`);
    assert.match(key, /^[0-9a-f]{64}$/);
    assert.equal(first.get(key), undefined);
    first.set(key, `var file = "${join(directory, 'build-1', 'a.wasm')}"; var json = ${JSON.stringify(join(directory, 'build-1'))};`);
    const stored = [...store.values()][0];
    assert.ok(!stored.includes(directory), 'stored output names no build directory');
    assert.equal(first.get(key), `var file = "${join(directory, 'build-1', 'a.wasm')}"; var json = ${JSON.stringify(join(directory, 'build-1'))};`);
    // Another build directory with the same files: the same key, its own paths restored.
    const pre2 = join(directory, 'build-2', 'pre.js');
    mkdirSync(dirname(pre2), { recursive: true }); writeFileSync(pre2, 'pre');
    const second = jsStepCache({ recipe, sdk, stepCache, volatile: [join(directory, 'build-2')], files: [pre2], platform: 'linux' });
    const key2 = second.key(entry, `input in ${join(directory, 'build-2')}`);
    assert.equal(key2, key);
    assert.equal(second.get(key2), `var file = "${join(directory, 'build-2', 'a.wasm')}"; var json = ${JSON.stringify(join(directory, 'build-2'))};`);
    // Anything that changes the step changes the key.
    assert.notEqual(second.key({ ...entry, pass: 'growableHeap' }, `input in ${join(directory, 'build-2')}`), key);
    assert.notEqual(second.key({ ...entry, args: ['y'] }, `input in ${join(directory, 'build-2')}`), key);
    assert.notEqual(second.key(entry, 'other input'), key);
    const inputFile = join(directory, 'build-2', 'in.js'); writeFileSync(inputFile, 'code');
    assert.notEqual(second.key(entry, `input in ${join(directory, 'build-2')}`, inputFile), key);
    writeFileSync(pre2, 'changed');
    assert.notEqual(jsStepCache({ recipe, sdk, stepCache, volatile: [join(directory, 'build-2')], files: [pre2], platform: 'linux' })
      .key(entry, `input in ${join(directory, 'build-2')}`), key);
    assert.notEqual(jsStepCache({ recipe, sdk: { ...sdk, identity: 'other' }, stepCache, volatile: [join(directory, 'build-2')], files: [pre2], platform: 'linux' })
      .key(entry, 'x'), jsStepCache({ recipe, sdk, stepCache, volatile: [join(directory, 'build-2')], files: [pre2], platform: 'linux' }).key(entry, 'x'));
    assert.notEqual(jsStepCache({ recipe, sdk, stepCache, volatile: [], files: [], platform: 'win32' }).key(entry, 'x'),
      jsStepCache({ recipe, sdk, stepCache, volatile: [], files: [], platform: 'linux' }).key(entry, 'x'));
    // A nested directory is replaced as a whole before its parent.
    const nested = jsStepCache({ recipe, sdk, stepCache, volatile: [directory, join(directory, 'build-1')], files: [], platform: 'linux' });
    nested.set('k', join(directory, 'build-1', 'x'));
    assert.equal(nested.get('k'), join(directory, 'build-1', 'x'));
    assert.equal(store.get('k'), `\u0001lasm-v0\u0001${path.sep}x`);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});

test('link temporary directories are private, inside the build directory, and removable', () => {
  const work = mkdtempSync(join(tmpdir(), 'lasm-link-temp-'));
  try {
    const first = linkTemporaryDirectory(work, 'final'), second = linkTemporaryDirectory(work, 'final');
    assert.notEqual(first, second);
    if (process.platform !== 'win32') assert.equal(path.dirname(first), work);
    assert.match(path.basename(first), /^node-link-final-/);
    writeFileSync(join(first, 'file'), 'x');
    removeTemporary(first);
    assert.equal(existsSync(first), false);
    removeTemporary(first);
    removeTemporary(second);
  } finally { rmSync(work, { recursive: true, force: true }); }
});

test('link argument parsing: options, map, outputs and the recorded flag set', () => {
  const recipe = bundledRecipe();
  const flags = recipe.link.modes.probe.emccFlags.map(flag => flag === '-sEXPORTED_FUNCTIONS=@<exports>' ? '-sEXPORTED_FUNCTIONS=@/b/e.json' : flag);
  const base = ['/b/a.o', '-Wl,-Map=/b/m.map,--wrap=x', ...flags, '--pre-js', '/p1.js', '--pre-js', '/p2.js', '--js-library', '/l.js', '-o', '/b/p.cjs'];
  const parsed = parseLinkArguments(recipe, 'probe', base);
  assert.deepEqual(parsed.preJs, ['/p1.js', '/p2.js']);
  assert.deepEqual(parsed.jsLibraries, ['/l.js']);
  assert.equal(parsed.output, '/b/p.cjs');
  assert.deepEqual(parsed.inputs, ['/b/a.o', '-Map=/b/m.map', '--wrap=x']);
  assert.equal(parsed.flags.length, flags.length);
  assert.ok(parsed.flags.includes('-sEXPORTED_FUNCTIONS=@<exports>'));
  assert.throws(() => parseLinkArguments(recipe, 'probe', [...base, '-o']), /Option -o requires an argument/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', [...base, '-Wl,-Map=/b/other.map']), /Repeated link map/);
  assert.throws(() => parseLinkArguments(recipe, 'edge', base), /has no edge link/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', base.filter(arg => arg !== '/b/p.cjs' && arg !== '-o').concat(['-o', '/b/p.mjs'])), /needs -o FILE\.cjs/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', base.filter(arg => !arg.startsWith('-sEXPORTED_FUNCTIONS'))), /no recording|needs -o/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', base.filter(arg => !arg.startsWith('-Wl,-Map'))), /needs -o FILE/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', [...base, '--js-library', '/l2.js']), /one --js-library/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', base.filter((arg, i) => arg !== '--pre-js' && base[i - 1] !== '--pre-js')), /--pre-js/);
  assert.throws(() => parseLinkArguments(recipe, 'probe', [...base, '/b/x.so']), /Unrecorded link input \/b\/x\.so/);
  assert.deepEqual(parseLinkArguments(recipe, 'probe', [...base, '/b/libx.a']).inputs.at(-1), '/b/libx.a');
  // Without a recipe (recipe derivation), any flags parse.
  const free = parseLinkArguments(undefined, 'final', ['-g', '-sEXPORTED_FUNCTIONS=@/e.json', '-Wl,-Map=/m', '--pre-js', '/p', '--js-library', '/l', '-o', '/o.cjs']);
  assert.deepEqual(free.flags, ['-g', '-sEXPORTED_FUNCTIONS=@<exports>']);
  assert.deepEqual(linkModes, ['probe', 'final']);
});

test('argument templates: list, path and embedded placeholders', () => {
  const values = { wasm: '/o/p.wasm', inputs: ['a.o'], syslib: '/s/lib', graph: '/t/g.json', features: ['--mvp-features'], emscripten: '/em' };
  assert.deepEqual(expandArguments(['--graph-file=<graph>', '--graph-file=<syslib>/x/y.json', '<syslib>', '<features>', 'pre<wasm>post', '<inputs>x'], { ...values, inputs: 'one' }, 'linux'),
    ['--graph-file=/t/g.json', '--graph-file=/s/lib/x/y.json', '/s/lib', '--mvp-features', 'pre/o/p.wasmpost', 'onex']);
  assert.throws(() => expandArguments(['<inputs>/x'], values, 'linux'), /Unresolved link-driver placeholder <inputs> in <inputs>\/x/);
  assert.throws(() => expandArguments(['-L<features>'], values, 'linux'), /Unresolved/);
  assert.deepEqual(expandArguments(['plain', '<emscripten>/a/b'], values), ['plain', path.join('/em', 'a', 'b')]);
});

test('JS symbol bookkeeping: Asyncify imports, stub entries and linker export kinds', () => {
  const values = { REQUIRED_EXPORTS: [], DEFAULT_LIBRARY_FUNCS_TO_INCLUDE: [], EXPORTED_RUNTIME_METHODS: [], EXPORTED_FUNCTIONS: ['_main', 'jsOnly'],
    EXPORT_IF_DEFINED: [], ERROR_ON_UNDEFINED_SYMBOLS: 0, ASYNCIFY: 1, ASYNCIFY_IMPORTS: ['env.invoke_*'], ASYNCIFY_IMPORTS_EXCEPT_JS_LIBS: [] };
  const settings = { get: key => values[key], set: (key, value) => { values[key] = value; } };
  const jsSyms = addJsDependencies(settings, { deps: { main: ['x'], extra: ['y'], toString: [] }, extraLibraryFuncs: ['extra', 'absent'], asyncFuncs: ['sleep', 'wait'] });
  assert.deepEqual(values.REQUIRED_EXPORTS, ['y', 'x']);
  assert.deepEqual(values.ASYNCIFY_IMPORTS_EXCEPT_JS_LIBS, ['env.invoke_*']);
  assert.deepEqual(values.ASYNCIFY_IMPORTS, ['env.invoke_*', '*.sleep', '*.wait']);
  // Without -sERROR_ON_UNDEFINED_SYMBOLS every export is only if defined; a JS-defined
  // C symbol and non-C names are not exported from Wasm.
  assert.deepEqual(linkerExports(settings, jsSyms), { exports: ['--export-if-defined=y', '--export-if-defined=x'], exportIfDefined: [] });
  assert.deepEqual(linkerExports(settings, {}).exports, ['--export-if-defined=main', '--export-if-defined=y', '--export-if-defined=x']);
  assert.equal(stubObject({}), '#STUB');
  // ASYNCIFY off: the import lists stay.
  const off = { ...values, ASYNCIFY: 0, ASYNCIFY_IMPORTS: ['a'], ASYNCIFY_IMPORTS_EXCEPT_JS_LIBS: ['b'], REQUIRED_EXPORTS: [] };
  addJsDependencies({ get: key => off[key], set: (key, value) => { off[key] = value; } }, { deps: {}, extraLibraryFuncs: [], asyncFuncs: ['s'] });
  assert.deepEqual([off.ASYNCIFY_IMPORTS, off.ASYNCIFY_IMPORTS_EXCEPT_JS_LIBS], [['a'], ['b']]);
});

test('metadce graph roots: EXPORT_ALL, side-module imports and the unused list', () => {
  const values = { SIDE_MODULE_IMPORTS: ['_sideFn'], EXPORT_ALL: 1, WASI_MODULE_NAME: 'wasi', MAIN_MODULE: 0, DECLARE_ASM_MODULE_EXPORTS: 0 };
  const settings = { get: key => values[key] };
  const graph = [{ name: 'emcc$export$a', export: 'a' }, { name: 'emcc$import$sideFn', import: ['env', 'sideFn'] },
    { name: 'emcc$import$clock_time_get', import: ['env', 'clock_time_get'] }, { name: 'emcc$import$other', import: ['env', 'other'] }];
  const { importNames, exportNames } = prepareDceGraph(settings, graph, new Set(), new Set());
  assert.equal(graph[0].root, true);
  assert.equal(graph[1].root, true);
  assert.equal(graph[3].root, undefined);
  assert.deepEqual(graph[2].import, ['wasi', 'clock_time_get']);
  assert.deepEqual(graph[3].import, ['env', 'other']);
  assert.deepEqual([...importNames], [['emcc$import$sideFn', 'sideFn'], ['emcc$import$clock_time_get', 'clock_time_get'], ['emcc$import$other', 'other']]);
  assert.deepEqual([...exportNames], [['emcc$export$a', 'a']]);
  // Exports are kept when the module does not declare them; MAIN_MODULE 0 reports wasmMemory.
  assert.deepEqual(unusedFromMetadce(settings, 'unused: emcc$export$a\r\nunused:   emcc$import$other  \nunused: emcc$import$wasmMemory\n x unused: emcc$import$sideFn',
    new Map([...importNames, ['emcc$import$wasmMemory', 'memory']]), exportNames), { unusedImports: ['other', 'memory'], unusedExports: [] });
  const extra = { SIDE_MODULE_IMPORTS: [], EXPORT_ALL: 0, WASI_MODULE_NAME: 'w' };
  const roots = [{ name: 'e1', export: 'kept' }, { name: 'e2', export: 'dropped' }];
  prepareDceGraph({ get: key => extra[key] }, roots, new Set(), new Set(['_kept']));
  assert.deepEqual(roots.map(item => item.root), [true, undefined]);
});

test('minified-name output is validated line by line', () => {
  assert.deepEqual(parseMinifiedNames('header\n  env.x => a  \n\n'), { 'env.x': 'a' });
  assert.throws(() => parseMinifiedNames('a => b => c\n'), /Unexpected minified-name line a => b => c/);
  assert.throws(() => parseMinifiedNames('a => b\na => c\n'), /imports must be unique/);
  assert.throws(() => parseMinifiedNames('12 => b\n'), /Unsupported minified name 12/);
  assert.throws(() => parseMinifiedNames('0 => b\n'), /Unsupported minified name 0/);
  assert.deepEqual(parseMinifiedNames('012 => b\n'), { '012': 'b' });
  assert.throws(() => parseMinifiedNames(JSON.stringify({ imports: [], exports: [['e', 'a'], ['e', 'b']] })), /exports must be unique/);
  assert.equal(Object.getPrototypeOf(parseMinifiedNames('')), Object.prototype);
});

test('response-file quoting and the shell length emcc measures', () => {
  assert.equal(emscriptenResponseFile([]), '');
  assert.equal(emscriptenResponseFile(['a', 'b c'], 'linux'), 'a\n"b c"\n');
  assert.equal(emscriptenResponseFile(["a'b"], 'darwin'), "a\\'b\n");
  assert.equal(shlexJoin(['a=b', 'x@y%z+:,./-', 'a b', 'a$b']), "a=b x@y%z+:,./- 'a b' 'a$b'");
  assert.equal(needsResponseFile(['é'.repeat(6998)]), false, 'characters (quoted), not bytes');
  assert.equal(needsResponseFile(['é'.repeat(6999)]), true);
});

test('the native signature table must match the recipe\'s digest', () => {
  const recipe = structuredClone(bundledRecipe());
  const sigs = bundledNativeSigs(recipe);
  assert.equal(bundledNativeSigs(recipe), sigs, 'read once');
  recipe.link.nativeSigs.file = 'recipe-emscripten-6.0.9.json';
  assert.throws(() => bundledNativeSigs(recipe), /link-driver data file recipe-emscripten-6\.0\.9\.json does not match the recipe/);
});

function dirname(file) { return path.dirname(file); }
