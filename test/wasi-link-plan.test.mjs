// The WASI link plan (src/wasi/wasi-link.mjs linkWasiProgram) with a stand-in
// toolchain (test/fixtures/link-stand-ins): which sources clang compiles and
// how, which objects and archives wasm-ld links with which flags, the atomics
// lowering and export trimming, wasm-opt's passes, the import check and the
// wasi-http component. The real link is checked by .github/workflows/wasi.yml.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { linkWasiProgram, wasiLinkSettings, wasiSources, allowedImportModules, checkWasiModule } from '../src/wasi/wasi-link.mjs';
import { moduleImports } from '../src/wasi/lower-atomics.mjs';
import { extractCore } from '../src/wasi/wasi-component.mjs';
import { responseFile } from '../src/platform.mjs';
import { fastlyGlueSource, wasiHttpGlueSource, glueLinkFlags } from '../src/lasm-library.mjs';
import { installTools, wasmObject, archive, temporaryDirectory, programModule } from './fixtures/link-stand-ins/toolchain.mjs';

const posix = process.platform !== 'win32';
const here = fileURLToPath(new URL('../src/wasi/', import.meta.url));
const exportNames = bytes => { const module = new WebAssembly.Module(bytes); return WebAssembly.Module.exports(module).map(e => e.name).sort(); };

/** A Node build's kept link directory and the runtimes the WASI link reads. */
function fixture({ objects: extra = [] } = {}) {
  const base = temporaryDirectory('lasm-wasi-plan-');
  const tools = installTools(join(base, 'toolchain'));
  const toolchain = { prefix: tools.prefix, cache: join(base, 'toolchain-cache'), env: { ...process.env, LASM_STAND_IN_SDK: '1' } };
  const linkWork = join(base, 'link'), out = join(base, 'out');
  mkdirSync(linkWork, { recursive: true });
  const object = (name, spec) => { const file = join(linkWork, name); mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, wasmObject(spec)); return file; };
  const main = object('module-0.o', { functions: [{ name: '__main_argc_argv', refs: ['fd_write'] }], imports: { fd_write: 'wasi_snapshot_preview1' } });
  const jsGlue = object('lasm-js.o', { functions: [{ name: 'lasm_js_available' }, { name: 'js_glue', refs: ['js_call'] }], imports: { js_call: 'bad_module' } });
  const fetchGlue = object('lasm-fetch.o', { functions: [{ name: 'lasm_fetch_platform' }] });
  const marker = object('reachability.o', { functions: [{ name: 'lasm_lookup_lean_symbol' }] });
  const member = object('libInit-112.lasm-member.o', { functions: [{ name: 'initialize_Init' }] });
  // A path the response file must quote and escape; names that only contain the glue markers.
  const second = object(join('with "quote" and space', 'module-1.o'), { functions: [{ name: 'l_helper', refs: ['random_get'] }, { name: 'xlasm_js_available' },
    { name: 'lasm_fetch_platform_x' }], imports: { random_get: 'wasi_snapshot_preview1' } });
  const extras = extra.map(([name, spec]) => object(name, spec));
  // Lasm.JS's Node glue comes with its wraps, which the WASI link drops with it.
  writeFileSync(join(linkWork, 'link.rsp'), responseFile([main, jsGlue, ...glueLinkFlags, '-Wl,--wrap=initialize_Main', marker, fetchGlue, member, second, ...extras,
    '-Oz', '-Wl,-Map=' + join(linkWork, 'final.map'), '-sMEMORY64=1', '/runtime/lib/libInit.a', 'program.cjs']));
  const nodeRuntime = { directory: join(base, 'node-runtime'), manifest: { libraries: ['lib/libInit.a', 'lib/liblasmsymbols.a', 'lib/libleanrt.a', 'lib/libLake.a'] } };
  const edge = { sysroot: { cache: join(base, 'edge-cache'), directory: 'wasm64-emscripten' },
    libraries: { 'libleanrt.a': join(base, 'edge', 'libleanrt.a'), 'libInit.a': join(base, 'edge', 'libInit.a') } };
  return { base, tools, toolchain, linkWork, out, nodeRuntime, edge, objects: { main, jsGlue, fetchGlue, marker, member, second, extras } };
}

test('the WASI link compiles the host, links the application objects with the edge runtime and optimizes', { skip: !posix }, () => {
  const f = fixture();
  const result = linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out });
  const program = join(f.out, 'main.wasm');
  assert.deepEqual(result, { program, bytes: readFileSync(program).length });
  // 1. The WASI host and Lasm.Fetch's WASI glue, compiled as the application objects are.
  const sysroot = join(f.toolchain.cache, 'sysroot');
  const compiled = f.tools.calls('clang');
  assert.deepEqual(compiled.map(args => args[args.indexOf('-c') + 1]), ['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_fetch_wasi.c'].map(name => join(here, name)));
  assert.deepEqual(compiled[0], ['-target', 'wasm64-unknown-emscripten', `--sysroot=${sysroot}`, '-Xclang', '-iwithsysroot/include/compat',
    '-O2', '-DNDEBUG', '-DLEAN_EMSCRIPTEN', '-DLASM_WASI_MAXIMUM_MEMORY=2048',
    '-ffunction-sections', '-fdata-sections', `-ffile-prefix-map=${here}=lasm/`, '-I', join(f.nodeRuntime.directory, 'include'), '-I', here,
    '-c', join(here, 'lasm_wasi.c'), '-o', join(f.out, 'lasm_wasi.o')]);
  for (const name of ['lasm_wasi', 'lasm_wasi_libc', 'lasm_fetch_wasi']) assert.ok(existsSync(join(f.out, `${name}.o`)));
  // 2. Only application objects (no lookup marker, runtime members or JavaScript glue) and the wraps.
  const MiB = 1048576;
  const expected = ['-o', join(f.out, 'linked.wasm'), f.objects.main, '--wrap=initialize_Main', f.objects.second,
    ...['lasm_wasi', 'lasm_wasi_libc', 'lasm_fetch_wasi'].map(name => join(f.out, `${name}.o`)),
    '--wrap=lean_io_mark_end_initialization', '--wrap=__cxa_throw',
    f.edge.libraries['libInit.a'], f.edge.libraries['libleanrt.a'], join(f.nodeRuntime.directory, 'lib', 'libLake.a'),
    `-L${join(f.edge.sysroot.cache, 'sysroot', 'lib', 'wasm64-emscripten')}`,
    '-lc_optz', '-lstubs', '-lnoexit', '-lc', '-lmimalloc', '-lclang_rt.builtins-legacysjlj', '-lc++-legacyexcept', '-lc++abi-legacyexcept', '-lunwind-legacyexcept',
    '-mwasm64', '--no-entry', '--stack-first', '-z', `stack-size=${8 * MiB}`, `--initial-memory=${16 * MiB}`, `--max-memory=${2048 * MiB}`, '--table-base=1'];
  assert.deepEqual(f.tools.calls('wasm-ld'), [expected]);
  assert.deepEqual(JSON.parse(readFileSync(join(f.out, 'link-args.json'), 'utf8')), { target: 'wasi', settings: wasiLinkSettings.wasi, args: expected });
  assert.match(readFileSync(join(f.out, 'link-args.json'), 'utf8'), /^\{\n "target": "wasi",\n "settings": \{\n  "stackMiB": 8,/);
  assert.ok(readFileSync(join(f.out, 'link-args.json'), 'utf8').endsWith('}\n'));
  // 3–4. Lowered, then optimized from the lowered module into the program.
  assert.deepEqual(f.tools.calls('wasm-opt'), [['--enable-bulk-memory', '--enable-bulk-memory-opt', '--enable-nontrapping-float-to-int', '--enable-sign-ext',
    '--enable-mutable-globals', '--enable-exception-handling', '--enable-memory64', '--enable-multivalue', '--enable-reference-types',
    '--enable-call-indirect-overlong', '--strip-eh', '--memory64-lowering', '--table64-lowering', '-Oz',
    '--strip-debug', '--strip-producers', '--strip-target-features', join(f.out, 'lowered.wasm'), '-o', program]]);
  // Every export of a plain WASI command stays; its imports are the host's.
  assert.deepEqual(exportNames(readFileSync(program)), ['_start', 'cabi_realloc', 'lasm_extra', 'memory', 'wasi:http/incoming-handler@0.2.12#handle']);
  assert.deepEqual(moduleImports(readFileSync(program)).map(i => `${i.module}.${i.name}`), ['wasi_snapshot_preview1.fd_write', 'wasi_snapshot_preview1.random_get']);
  assert.deepEqual(readFileSync(join(f.out, 'lowered.wasm')), readFileSync(program));
});

test('Fastly and wasi-http targets: their defines, sources, memory and allowed imports', { skip: !posix }, () => {
  const f = fixture({ objects: [['fastly.o', { functions: [{ name: 'fastly_send', refs: ['send'] }], imports: { send: 'fastly_http_req' } }]] });
  linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, target: 'fastly' });
  const compiled = f.tools.calls('clang');
  assert.deepEqual(compiled.map(args => args.at(-3)), ['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_fetch_wasi.c'].map(name => join(here, name)));
  for (const args of compiled) assert.deepEqual(args.slice(8, 10), ['-DLASM_WASI_MAXIMUM_MEMORY=2048', '-DLASM_WASI_FASTLY']);
  const [link] = f.tools.calls('wasm-ld');
  assert.deepEqual(link.slice(-6), ['--stack-first', '-z', 'stack-size=1048576', '--initial-memory=4194304', '--max-memory=2147483648', '--table-base=1']);
  // The same objects are rejected for plain WASI: no WASI host provides Fastly's calls.
  const g = fixture({ objects: [['fastly.o', { functions: [{ name: 'fastly_send', refs: ['send'] }], imports: { send: 'fastly_http_req' } }]] });
  assert.throws(() => linkWasiProgram({ toolchain: g.toolchain, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out }),
    { message: 'The WASI link left imports no WASI host provides: fastly_http_req.send (internal error)' });

  const h = fixture({ objects: [['http.o', { functions: [{ name: 'handle', refs: ['new_fields', 'now'] }],
    imports: { new_fields: 'wasi:http/types@0.2.12', now: 'wasi:clocks/monotonic-clock@0.2.12' } }]] });
  const result = linkWasiProgram({ toolchain: h.toolchain, nodeRuntime: h.nodeRuntime, edge: h.edge, linkWork: h.linkWork, out: h.out, target: 'wasi-http' });
  const compiledHttp = h.tools.calls('clang');
  // Every wasi-http program links Lasm.WASI.Http's glue with its host imports (all of them referenced).
  assert.deepEqual(compiledHttp.map(args => args.at(-3)), [...['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_wasi_http.c'].map(name => join(here, name)),
    join(here, '../../library/c/lasm_wasi_http_bindings.c')]);
  assert.equal(compiledHttp[2][9], '-DLASM_WASI_HTTP');
  assert.ok(compiledHttp[3].includes('-DLASM_WASI_HTTP'));
  const core = join(h.out, 'core.wasm'), program = join(h.out, 'main.wasm');
  const component = readFileSync(program);
  assert.deepEqual(result, { program, core, bytes: component.length });
  // The component holds the core module, which exports only what its world exports.
  assert.deepEqual(extractCore(component), new Uint8Array(readFileSync(core)));
  assert.deepEqual(exportNames(readFileSync(core)), ['cabi_realloc', 'memory', 'wasi:http/incoming-handler@0.2.12#handle']);
  assert.deepEqual(exportNames(readFileSync(join(h.out, 'lowered.wasm'))), exportNames(readFileSync(core)));

  // Without the component: the core module is the program.
  const k = fixture();
  const plain = linkWasiProgram({ toolchain: k.toolchain, nodeRuntime: k.nodeRuntime, edge: k.edge, linkWork: k.linkWork, out: k.out, target: 'wasi-http', component: false });
  assert.deepEqual(plain, { program: join(k.out, 'main.wasm'), bytes: readFileSync(join(k.out, 'main.wasm')).length });
  assert.equal(existsSync(join(k.out, 'core.wasm')), false);
  assert.deepEqual(exportNames(readFileSync(plain.program)), ['cabi_realloc', 'memory', 'wasi:http/incoming-handler@0.2.12#handle']);
});

test('LASM_TEST_UNOPTIMIZED runs only the lowering passes', { skip: !posix }, () => {
  const f = fixture();
  const previous = process.env.LASM_TEST_UNOPTIMIZED;
  process.env.LASM_TEST_UNOPTIMIZED = '1';
  try { linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out }); }
  finally { if (previous === undefined) delete process.env.LASM_TEST_UNOPTIMIZED; else process.env.LASM_TEST_UNOPTIMIZED = previous; }
  const [opt] = f.tools.calls('wasm-opt');
  assert.equal(opt[13], '-O0');
  assert.ok(!opt.includes('-Oz'));
});

test('WASI link errors: unknown target, no system libraries, tool failures with and without --verbose', { skip: !posix }, () => {
  const f = fixture();
  const options = { toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out };
  assert.throws(() => linkWasiProgram({ ...options, target: 'wasi-p3' }), { message: 'Unknown WASI target wasi-p3' });
  assert.throws(() => linkWasiProgram({ ...options, edge: { ...f.edge, sysroot: undefined } }),
    { message: 'This edge runtime has no system libraries; the WASI link needs them' });
  assert.deepEqual(f.tools.calls(), [], 'nothing runs before the checks');
  f.tools.fail('wasm-ld', 'wasm-ld: error: stand-in failure\n');
  // Quiet: the tool's diagnostics are captured for the error reporter.
  assert.throws(() => linkWasiProgram(options), error => /stand-in failure/.test(String(error.stderr)));
  // --verbose: they reach the terminal instead.
  assert.throws(() => linkWasiProgram({ ...options, verbose: true }), error => error.stderr == null && error.status === 1);
});

test('Lasm.Fastly glue: --target fastly compiles it with its host imports in place of the Node build\'s copy; other targets keep that copy', { skip: !posix }, () => {
  const glue = ['lasm-fastly.o', { functions: [{ name: 'lasm_fastly_bindings' }, { name: 'lasm_fastly_http_req_new' }] }];
  const f = fixture({ objects: [glue] });
  linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, target: 'fastly' });
  const compiled = f.tools.calls('clang');
  const fastly = compiled.find(args => args.includes(fastlyGlueSource));
  assert.ok(fastly && fastly.includes('-DLASM_WASI_FASTLY'), 'the glue is compiled with its host imports');
  assert.equal(fastly[fastly.indexOf('-o') + 1], join(f.out, 'lasm_fastly.o'));
  const [link] = f.tools.calls('wasm-ld');
  assert.ok(!link.includes(f.objects.extras[0]), 'the Node build\'s copy is dropped');
  assert.ok(link.includes(join(f.out, 'lasm_fastly.o')));
  // Plain WASI keeps the Node build's copy (its calls fail with $unsupported) and compiles nothing more.
  const g = fixture({ objects: [glue] });
  linkWasiProgram({ toolchain: g.toolchain, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out });
  assert.ok(!g.tools.calls('clang').some(args => args.includes(fastlyGlueSource)));
  assert.ok(g.tools.calls('wasm-ld')[0].includes(g.objects.extras[0]));
  // A Fastly program without Lasm.Fastly compiles no glue.
  const h = fixture();
  linkWasiProgram({ toolchain: h.toolchain, nodeRuntime: h.nodeRuntime, edge: h.edge, linkWork: h.linkWork, out: h.out, target: 'fastly' });
  assert.ok(!h.tools.calls('clang').some(args => args.includes(fastlyGlueSource)));
});

// The host glue's compile line, exactly: the target, the sysroot, its compat headers, the release
// defines, the host's own define, sections for --gc-sections, the runtime's headers, one object.
const glueCompile = (f, define, source, object) => ['-target', 'wasm64-unknown-emscripten', `--sysroot=${join(f.toolchain.cache, 'sysroot')}`,
  '-Xclang', '-iwithsysroot/include/compat', '-O2', '-DNDEBUG', '-DLEAN_EMSCRIPTEN', define, '-ffunction-sections', '-fdata-sections',
  '-I', join(f.nodeRuntime.directory, 'include'), '-c', source, '-o', object];

test('host glue: Lasm.Fastly and Lasm.WASI.Http are compiled with exactly their host build line', { skip: !posix }, () => {
  const fastlyGlue = ['lasm-fastly.o', { functions: [{ name: 'lasm_fastly_bindings' }, { name: 'lasm_fastly_http_req_new' }] }];
  const f = fixture({ objects: [fastlyGlue, ['prefixed.o', { functions: [{ name: 'my_lasm_fastly_bindings' }] }],
    ['suffixed.o', { functions: [{ name: 'lasm_fastly_bindings_v2' }] }]] });
  linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out, target: 'fastly' });
  assert.deepEqual(f.tools.calls('clang').filter(args => args.includes(fastlyGlueSource)),
    [glueCompile(f, '-DLASM_WASI_FASTLY', fastlyGlueSource, join(f.out, 'lasm_fastly.o'))]);
  const [fastlyLink] = f.tools.calls('wasm-ld');
  assert.ok(!fastlyLink.includes(f.objects.extras[0]), 'the Node build\'s copy is dropped');
  for (const kept of [f.objects.main, ...f.objects.extras.slice(1)]) assert.ok(fastlyLink.includes(kept), kept);

  // wasi-http: the Node build's copy of the glue is dropped, the program's other objects stay, and the
  // glue is compiled from library/c with its host imports, even when the program never names it.
  const httpGlue = ['lasm-wasi-http.o', { functions: [{ name: 'lasm_wasi_http_bindings' }, { name: 'lasm_wasi_http_types_new_fields' }] }];
  // Only an object defining exactly `lasm_wasi_http_bindings` is the glue, not one whose names merely contain it.
  const lookalikes = [['prefixed.o', { functions: [{ name: 'my_lasm_wasi_http_bindings' }] }],
    ['suffixed.o', { functions: [{ name: 'lasm_wasi_http_bindings_v2' }] }]];
  const h = fixture({ objects: [httpGlue, ...lookalikes] });
  linkWasiProgram({ toolchain: h.toolchain, nodeRuntime: h.nodeRuntime, edge: h.edge, linkWork: h.linkWork, out: h.out, target: 'wasi-http' });
  const object = join(h.out, 'lasm_wasi_http_bindings.o');
  assert.deepEqual(h.tools.calls('clang').filter(args => args.includes(wasiHttpGlueSource)), [glueCompile(h, '-DLASM_WASI_HTTP', wasiHttpGlueSource, object)]);
  const [httpLink] = h.tools.calls('wasm-ld');
  assert.ok(!httpLink.includes(h.objects.extras[0]), 'the Node build\'s copy is dropped');
  assert.ok(httpLink.includes(object), 'the host build of the glue is linked');
  assert.ok(httpLink.includes(h.objects.main), 'the program\'s own objects stay');
  for (const kept of h.objects.extras.slice(1)) assert.ok(httpLink.includes(kept), kept);
  const k = fixture();
  linkWasiProgram({ toolchain: k.toolchain, nodeRuntime: k.nodeRuntime, edge: k.edge, linkWork: k.linkWork, out: k.out, target: 'wasi-http' });
  assert.deepEqual(k.tools.calls('clang').filter(args => args.includes(wasiHttpGlueSource)),
    [glueCompile(k, '-DLASM_WASI_HTTP', wasiHttpGlueSource, join(k.out, 'lasm_wasi_http_bindings.o'))]);
  // Other WASI targets never compile it, and keep whatever copy the program has.
  for (const target of [undefined, 'fastly']) {
    const g = fixture({ objects: [httpGlue] });
    linkWasiProgram({ toolchain: g.toolchain, nodeRuntime: g.nodeRuntime, edge: g.edge, linkWork: g.linkWork, out: g.out, target });
    assert.ok(!g.tools.calls('clang').some(args => args.includes(wasiHttpGlueSource)), String(target));
    assert.ok(g.tools.calls('wasm-ld')[0].includes(g.objects.extras[0]), String(target));
  }
});

test('WASI targets: settings, the sources of the cache identity, and the host interfaces each one may import', () => {
  const MiB = { stackMiB: 1, initialMiB: 4, maximumMiB: 2048, optimize: '-Oz' };
  assert.deepEqual(wasiLinkSettings, { wasi: { stackMiB: 8, initialMiB: 16, maximumMiB: 2048, optimize: '-Oz' }, fastly: MiB, 'wasi-http': MiB });
  // Every file the WASI link reads is part of the program's cache identity.
  assert.deepEqual(wasiSources, ['lasm_wasi.c', 'lasm_wasi_libc.c', 'lasm_fetch_wasi.c', 'lasm_wasi_http.c', 'lasm_wasi.h', 'wasi-link.mjs', 'lower-atomics.mjs',
    'wasi-component.mjs', 'component/proxy-template.wasm', 'lasm_wasi_http_imports.h', '../../library/c/lasm_fastly.c',
    '../../library/c/lasm_wasi_http_bindings.c']);
  for (const name of wasiSources) assert.ok(existsSync(join(here, name)), name);
  const accepts = (target, module) => { try { checkWasiModule(programModule([[module, 'f']]), target); return true; } catch { return false; } };
  // Lasm.Fastly binds every witx module (library/c/lasm_fastly.c).
  const fastly = ['wasi_snapshot_preview1', 'fastly_abi', 'fastly_http_req', 'fastly_http_body', 'fastly_http_resp', 'fastly_async_io',
    'fastly_config_store', 'fastly_secret_store', 'fastly_kv_store', 'fastly_geo', 'fastly_http_cache', 'fastly_acl'];
  const http = ['wasi_snapshot_preview1', 'wasi:http/types@0.2.12', 'wasi:http/outgoing-handler@0.2.12', 'wasi:io/poll@0.2.12',
    'wasi:io/streams@0.2.12', 'wasi:io/error@0.2.12', 'wasi:clocks/monotonic-clock@0.2.12'];
  for (const module of fastly) assert.ok(accepts('fastly', module), module);
  for (const module of http) assert.ok(accepts('wasi-http', module), module);
  for (const module of [...fastly, ...http].filter(module => module !== 'wasi_snapshot_preview1')) assert.ok(!accepts('wasi', module), module);
  assert.ok(accepts('wasi', 'wasi_snapshot_preview1') && !accepts('fastly', 'wasi:io/poll@0.2.12') && !accepts('wasi-http', 'fastly_abi'));
  assert.ok(!accepts('fastly', 'env') && !accepts('fastly', 'fastly') && !accepts('fastly', 'xfastly_abi'));
  // Every module the generated glue imports is one the fastly target accepts.
  const glue = readFileSync(join(here, '../../library/c/lasm_fastly.c'), 'utf8');
  const glueModules = new Set([...glue.matchAll(/import_module\("([^"]+)"\)/g)].map(m => m[1]));
  assert.ok(glueModules.size > 20);
  for (const module of glueModules) assert.ok(accepts('fastly', module), module);
  // And every module Lasm.WASI.Http's glue imports is one the wasi-http target accepts.
  const httpGlue = readFileSync(join(here, '../../library/c/lasm_wasi_http_bindings.c'), 'utf8');
  const httpModules = new Set([...httpGlue.matchAll(/import_module\("([^"]+)"\)/g)].map(m => m[1]));
  assert.equal(httpModules.size, 6);
  for (const module of httpModules) assert.ok(accepts('wasi-http', module), module);
  assert.deepEqual(Object.keys(allowedImportModules), ['wasi', 'fastly', 'wasi-http']);
  assert.throws(() => checkWasiModule(programModule([['env', 'a'], ['env', 'b'], ['wasi_snapshot_preview1', 'c']]), 'wasi'),
    { message: 'The WASI link left imports no WASI host provides: env.a, env.b (internal error)' });
});

test('on Windows the wasm-ld arguments go through a response file', { skip: !posix }, () => {
  const f = fixture();
  for (const name of ['clang', 'llvm-nm', 'wasm-ld', 'wasm-opt']) writeFileSync(join(f.tools.prefix, 'bin', name + '.exe'), readFileSync(join(f.tools.prefix, 'bin', name)), { mode: 0o755 });
  const platform = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { value: 'win32' });
  try { linkWasiProgram({ toolchain: f.toolchain, nodeRuntime: f.nodeRuntime, edge: f.edge, linkWork: f.linkWork, out: f.out }); }
  finally { Object.defineProperty(process, 'platform', platform); }
  const responseFile = join(f.out, 'wasm-ld.rsp');
  const recorded = JSON.parse(readFileSync(join(f.out, 'link-args.json'), 'utf8')).args;
  assert.deepEqual(f.tools.calls('wasm-ld'), [recorded], 'the stand-in reads the response file back');
  assert.ok(readFileSync(responseFile, 'utf8').includes('"' + f.objects.second.replaceAll('\\', '\\\\').replaceAll('"', '\\"') + '"'));
  assert.equal(readFileSync(join(f.out, 'link-args.json'), 'utf8').includes('wasm-ld.rsp'), false);
});
