// Phase 7.1 prototype: relink a Lasm Node build's kept objects (LASM_KEEP_LINK_WORK)
// as an edge-profile program: no pthreads, wasm64 code lowered to 32-bit memory
// (MEMORY64=2), the cooperative runtime objects (runtime/edge.cpp and the
// lean-4.35.0-edge.patch sources), the pure-JS host, an ES module for
// workerd/Deno/Bun. Run inside scripts/full-lean/run-bounded.mjs + base-pages.py.
//   node link-edge.mjs WORK_DIR EDGE_RUNTIME RUNTIME_BUNDLE OUT_DIR [--jspi|--asyncify|--sync] [--memory 64|32]
//   EDGE_RUNTIME: a directory with lib/libleanrt.a, lib/libleancpp.a and lib/liblasmhost.a
//   (edge-runtime.yml's artifact), or with the separately compiled objects
//   object.o mutex.o thread.o node-*.o edge.o (local iteration).
//     [--initial-mib N] [--stack-mib N] [--opt -Oz] [--malloc mimalloc|dlmalloc]
import { readFileSync, writeFileSync, mkdirSync, existsSync } from 'node:fs';
import { join, resolve, dirname, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { provisionSdk } from '../../src/managed-sdk.mjs';
import { execFileSync } from 'node:child_process';

const here = dirname(fileURLToPath(import.meta.url));
const argv = process.argv.slice(2);
const option = (name, fallback) => { const i = argv.indexOf(name); return i < 0 ? fallback : argv[i + 1]; };
const [work, objects, bundle, out] = argv.slice(0, 4).map(p => resolve(p));
const mode = argv.includes('--asyncify') ? 'asyncify' : argv.includes('--sync') ? 'sync' : 'jspi';
const opt = option('--opt', '-Oz'), malloc = option('--malloc', 'mimalloc');
const initial = Number(option('--initial-mib', '16')), stack = Number(option('--stack-mib', '8'));
const memory64 = option('--memory', '32') === '64' ? 1 : 2;
const read = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));
const rsp = read(join(work, 'link.rsp'));
// Application objects and initializer wraps; lasm_js.c's object (the module
// that defines lasm_js_available) is replaced by the edge glue.
const kept = [...rsp.filter(arg => arg.endsWith('.o') || arg.startsWith('-Wl,--wrap=')), '-Wl,--wrap=lean_io_mark_end_initialization'];
const sdk = await provisionSdk({ log: () => {} });
const defines = file => execFileSync(join(sdk.prefix, 'bin', 'llvm-nm'), ['--defined-only', file], { encoding: 'utf8', maxBuffer: 64 << 20 });
const inputs = kept.filter(arg => !(arg.endsWith('.o') && /\blasm_js_available\b/.test(defines(arg) ?? '')));
const edgeArchives = existsSync(join(objects, 'lib/libleanrt.a'));
const runtimeObjects = edgeArchives ? [] : ['object', 'mutex', 'thread', 'node-io', 'node-async', 'node-system', 'edge'].map(n => join(objects, n + '.o'));
mkdirSync(out, { recursive: true });
// The Lasm.JS edge glue, compiled with the application's C flags.
const jsGlue = [];
if (inputs.length !== kept.length) {
  const glue = join(out, 'lasm_js_edge.o');
  sdk.execute('emcc', ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-fwasm-exceptions', '-sMEMORY64=1', '-ffp-contract=off', '-fPIC',
    '-ffunction-sections', '-fdata-sections', '-I', join(bundle, 'include'), '-c', join(here, 'runtime/lasm_js_edge.c'), '-o', glue],
    { stdio: 'inherit', env: { ...sdk.env, EMCC_CORES: '1' } });
  jsGlue.push(glue);
}
const exportsList = JSON.parse(readFileSync(join(work, 'exports.json'), 'utf8')).filter(name => !name.startsWith('_lasm_js_'));
const exportsFile = join(out, 'exports-edge.json');
writeFileSync(exportsFile, JSON.stringify([...new Set([...exportsList, '_lasm_edge_pump', ...(jsGlue.length ? ['_lasm_js_edge_sync'] : [])])]));
const edgeLibrary = name => edgeArchives && ['leanrt', 'leancpp', 'lasmhost'].includes(name) ? join(objects, 'lib', `lib${name}.a`) : join(bundle, 'lib', `lib${name}.a`);
const libraries = ['Init', 'Std', 'Lean', 'LeanExport', 'Lake', 'leancpp', 'leanrt', ...(edgeArchives ? ['lasmhost'] : []), 'uv'].map(edgeLibrary);
const args = [...inputs, ...jsGlue, ...runtimeObjects, opt, '-g1', '--output-eol=linux', '-fwasm-exceptions', `-sMEMORY64=${memory64}`,
  `-sMALLOC=${malloc}`, `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sMODULARIZE=1', '-sEXPORT_ES6=1', '-sENVIRONMENT=web',
  '-sEXIT_RUNTIME=0', '-sFILESYSTEM=0', '-sALLOW_MEMORY_GROWTH=1', `-sINITIAL_MEMORY=${initial * 1048576}`,
  `-sMAXIMUM_MEMORY=${memory64 === 1 ? 4294967296 : 2147483648}`, `-sSTACK_SIZE=${stack * 1048576}`,
  '-sEXPORTED_RUNTIME_METHODS=callMain,HEAPU8,HEAPU32', '-sDYNAMIC_EXECUTION=0', '-sINCOMING_MODULE_JS_API=instantiateWasm,noInitialRun,print,printErr,lasmEdgeJspi,onAbort',
  '-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE=$stackSave,$stackRestore', '-Wl,--export-if-defined=__cpp_exception', '-Wno-experimental', `-Wl,-Map=${join(out, 'program.map')}`,
  '-Wl,--start-group', ...libraries, '-Wl,--end-group',
  '--pre-js', join(work, 'application-pre.js'), '--pre-js', join(here, 'runtime/edge-pre.js'), '--js-library', join(here, 'runtime/edge-library.js'),
  ...(mode === 'jspi' ? ['-sJSPI', "-sJSPI_EXPORTS=['lasm_edge_pump','main']"] : []),
  ...(mode === 'asyncify' ? ['-sASYNCIFY', "-sASYNCIFY_EXPORTS=['lasm_edge_pump','main']", '-sASYNCIFY_STACK_SIZE=1048576'] : []),
  '-o', join(out, 'program.mjs')];
writeFileSync(join(out, 'link-args.json'), JSON.stringify({ mode, memory64, args }, null, 1));
const started = Date.now();
try { sdk.execute('em++', args, { stdio: 'inherit', timeout: 3_600_000, env: { ...sdk.env, BINARYEN_CORES: '1', EMCC_CORES: '1' } }); }
catch (error) { console.error(`link failed (${mode})`); process.exit(error.status ?? 1); }
console.log(JSON.stringify({ mode, memory64, seconds: (Date.now() - started) / 1000, out }));
