// The WASI link (docs/WASI.md): the Node build's application objects relinked
// with the edge runtime's single-threaded Lean runtime and Lasm's C WASI host
// into a standard wasi_snapshot_preview1 command module, with no JavaScript.
//
//   1. clang compiles the WASI host (lasm_wasi.c, lasm_wasi_libc.c) and
//      Lasm.Fetch's WASI glue (lasm_fetch_wasi.c; Fastly's host calls with
//      --target fastly) for wasm64, as the application objects are.
//   2. wasm-ld links them with the objects, the standard-library archives of
//      the Node runtime, the edge runtime's three archives and its
//      single-threaded Emscripten system libraries. Lasm.JS's and Lasm.Fetch's
//      JavaScript glue objects are replaced by the WASI ones.
//   3. lower-atomics.mjs turns the archives' atomics into plain memory
//      instructions (one thread, unshared memory).
//   4. wasm-opt strips exception handling (a C++ throw ends the program, see
//      lasm_wasi.c), lowers memory and tables to 32 bits and optimizes (-Oz).
//
// The tools are the managed link toolchain's (clang, wasm-ld, llvm-nm,
// wasm-opt): no Emscripten SDK, Python or WASI SDK.
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { basename, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { executableName } from '../platform.mjs';
import { emscriptenResponseFile } from '../link-driver/link.mjs';
import { testUnoptimized } from '../test-switches.mjs';
import { lowerAtomics, moduleImports, keepExports } from './lower-atomics.mjs';
import { componentize, httpHandlerExport } from './wasi-component.mjs';

const here = fileURLToPath(new URL('./', import.meta.url));
export const wasiSources = ['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_fetch_wasi.c', 'lasm_wasi_http.c', 'lasm_wasi.h', 'wasi-link.mjs', 'lower-atomics.mjs',
  'wasi-component.mjs', 'component/proxy-template.wasm'];

/** Link settings per WASI target, part of the program's cache identity. The
 * C shadow stack holds Lean's address-taken locals; recursion depth is
 * bounded by the engine's own Wasm stack first (docs/WASI.md). */
export const wasiLinkSettings = Object.freeze({
  wasi: Object.freeze({ stackMiB: 8, initialMiB: 16, maximumMiB: 2048, optimize: '-Oz' }),
  fastly: Object.freeze({ stackMiB: 1, initialMiB: 4, maximumMiB: 2048, optimize: '-Oz' }),
  'wasi-http': Object.freeze({ stackMiB: 1, initialMiB: 4, maximumMiB: 2048, optimize: '-Oz' }),
});
// The C sources and defines of each target.
const targetSources = { wasi: ['lasm_fetch_wasi.c'], fastly: ['lasm_fetch_wasi.c'], 'wasi-http': ['lasm_wasi_http.c'] };
const targetDefines = { wasi: [], fastly: ['-DLASM_WASI_FASTLY'], 'wasi-http': ['-DLASM_WASI_HTTP'] };
// Emscripten's single-threaded system libraries, from the edge runtime.
const systemLibraries = ['c_optz', 'stubs', 'noexit', 'c', 'mimalloc', 'clang_rt.builtins-legacysjlj', 'c++-legacyexcept',
  'c++abi-legacyexcept', 'unwind-legacyexcept'];
// wasm-opt input features: what the wasm64 objects use before lowering.
const inputFeatures = ['--enable-bulk-memory', '--enable-bulk-memory-opt', '--enable-nontrapping-float-to-int', '--enable-sign-ext',
  '--enable-mutable-globals', '--enable-exception-handling', '--enable-memory64', '--enable-multivalue', '--enable-reference-types',
  '--enable-call-indirect-overlong'];
/** Import modules each target's program may use. */
export const allowedImportModules = Object.freeze({
  wasi: ['wasi_snapshot_preview1'],
  fastly: ['wasi_snapshot_preview1', 'fastly_abi', 'fastly_http_req', 'fastly_http_body', 'fastly_http_resp', 'fastly_async_io',
    'fastly_config_store', 'fastly_secret_store', 'fastly_kv_store'],
  'wasi-http': ['wasi_snapshot_preview1', 'wasi:http/types@0.2.12', 'wasi:http/outgoing-handler@0.2.12', 'wasi:io/poll@0.2.12',
    'wasi:io/streams@0.2.12', 'wasi:io/error@0.2.12', 'wasi:clocks/monotonic-clock@0.2.12'],
});

const readResponse = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));

/** toolchain: provisionLinkToolchain()'s result; linkWork: the Node build's
 * kept link directory (link.rsp, objects); out: a work directory. Returns the
 * path of the linked program (out/main.wasm). */
export function linkWasiProgram({ toolchain, nodeRuntime, edge, linkWork, out, target = 'wasi', verbose = false, component = true }) {
  const settings = wasiLinkSettings[target];
  if (!settings) throw new Error(`Unknown WASI target ${target}`);
  if (!edge.sysroot) throw new Error('This edge runtime has no system libraries; the WASI link needs them');
  const tool = name => join(toolchain.prefix, 'bin', executableName(name));
  const stdio = verbose ? ['ignore', 'inherit', 'inherit'] : ['ignore', 'pipe', 'pipe'];
  const run = (name, args) => execFileSync(tool(name), args, { env: toolchain.env, stdio, timeout: 1_800_000, maxBuffer: 256 << 20, windowsHide: true });
  mkdirSync(out, { recursive: true });

  // 1. The WASI host and Lasm.Fetch glue.
  const sysroot = join(toolchain.cache, 'sysroot');
  const objects = [];
  for (const source of ['lasm_wasi.c', 'lasm_wasi_libc.c', ...targetSources[target]]) {
    const object = join(out, source.replace(/\.c$/, '.o'));
    run('clang', ['-target', 'wasm64-unknown-emscripten', `--sysroot=${sysroot}`, '-Xclang', '-iwithsysroot/include/compat',
      '-O2', '-DNDEBUG', '-DLEAN_EMSCRIPTEN', `-DLASM_WASI_MAXIMUM_MEMORY=${settings.maximumMiB}`, ...targetDefines[target],
      '-ffunction-sections', '-fdata-sections', '-ffile-prefix-map=' + here + '=lasm/', '-I', join(nodeRuntime.directory, 'include'), '-I', here,
      '-c', join(here, source), '-o', object]);
    objects.push(object);
  }

  // 2. The link. Lasm.JS's and Lasm.Fetch's JavaScript glue objects are replaced.
  const rsp = readResponse(join(linkWork, 'link.rsp'));
  const nm = file => execFileSync(tool('llvm-nm'), ['--defined-only', '--just-symbol-name', file],
    { encoding: 'utf8', maxBuffer: 64 << 20, windowsHide: true });
  // A seeded dev link (src/application-link.mjs) also lists the lookup marker
  // reachability.o and the Node runtime's archive members
  // (application-live-members.mjs, *.lasm-member.o) in place of its archives:
  // the WASI link uses the edge runtime's archives instead, so both are dropped,
  // as in src/edge/edge-link.mjs. Kept, a Node dev build followed by
  // `lasm build --target wasi --dev` failed with duplicate host symbols.
  const inputs = rsp.filter(arg => arg.endsWith('.o') && basename(arg) !== 'reachability.o' && !arg.endsWith('.lasm-member.o') || arg.startsWith('-Wl,--wrap='))
    .filter(arg => !(arg.endsWith('.o') && /^(?:lasm_js_available|lasm_fetch_platform)$/m.test(nm(arg))))
    .map(arg => arg.startsWith('-Wl,') ? arg.slice(4) : arg);
  const archive = name => edge.libraries[`lib${name}.a`] ?? join(nodeRuntime.directory, 'lib', `lib${name}.a`);
  const libraries = nodeRuntime.manifest.libraries.map(file => file.replace(/^lib\/lib(.+)\.a$/, '$1'))
    .filter(name => name !== 'lasmsymbols').map(archive);
  const linked = join(out, 'linked.wasm'), program = join(out, 'main.wasm');
  const MiB = 1048576;
  const linkArgs = ['-o', linked, ...inputs, ...objects, '--wrap=lean_io_mark_end_initialization', '--wrap=__cxa_throw', ...libraries,
    `-L${join(edge.sysroot.cache, 'sysroot', 'lib', edge.sysroot.directory)}`, ...systemLibraries.map(name => `-l${name}`),
    '-mwasm64', '--no-entry', '--stack-first', '-z', `stack-size=${settings.stackMiB * MiB}`,
    `--initial-memory=${settings.initialMiB * MiB}`, `--max-memory=${settings.maximumMiB * MiB}`, '--table-base=1'];
  writeFileSync(join(out, 'link-args.json'), JSON.stringify({ target, settings, args: linkArgs }, null, 1) + '\n');
  // Windows limits a command line to 32,767 characters, which the inputs of a
  // larger program exceed (ENAMETOOLONG): pass them in a response file there.
  if (process.platform === 'win32') {
    const responseFile = join(out, 'wasm-ld.rsp');
    writeFileSync(responseFile, emscriptenResponseFile(linkArgs, 'win32'));
    run('wasm-ld', ['@' + responseFile]);
  } else run('wasm-ld', linkArgs);

  // 3. Atomics to plain memory instructions.
  const lowered = join(out, 'lowered.wasm');
  let loweredBytes = lowerAtomics(readFileSync(linked));
  // A component's core module exports what its world exports, and nothing else.
  if (target === 'wasi-http') loweredBytes = keepExports(loweredBytes, name => ['memory', 'cabi_realloc', httpHandlerExport].includes(name));
  writeFileSync(lowered, loweredBytes);

  // 4. No exception handling, 32-bit memory and tables, optimized.
  // LASM_TEST_UNOPTIMIZED (src/test-switches.mjs): the lowering passes only.
  run('wasm-opt', [...inputFeatures, '--strip-eh', '--memory64-lowering', '--table64-lowering', testUnoptimized() ? '-O0' : settings.optimize,
    '--strip-debug', '--strip-producers', '--strip-target-features', lowered, '-o', program]);

  const bytes = readFileSync(program);
  checkWasiModule(bytes, target);
  if (target === 'wasi-http' && component) {
    // The core module spliced into the wasi-http component (the proxy adapter included).
    const core = join(out, 'core.wasm');
    writeFileSync(core, bytes);
    const component = componentize(bytes);
    writeFileSync(program, component);
    return { program, core, bytes: component.length };
  }
  return { program, bytes: bytes.length };
}

/** The program must import nothing but the target's host interfaces. */
export function checkWasiModule(bytes, target) {
  const allowed = new Set(allowedImportModules[target]);
  const unexpected = moduleImports(bytes).filter(i => !allowed.has(i.module));
  if (unexpected.length)
    throw new Error(`The WASI link left imports no WASI host provides: ${unexpected.map(i => `${i.module}.${i.name}`).join(', ')} (internal error)`);
}
