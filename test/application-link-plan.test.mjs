// The application link plan (src/application-link.mjs linkApplication) with a
// stand-in toolchain (test/fixtures/link-stand-ins): what is compiled with which
// flags, the runtime initialization plan and its probe links, the requirements
// check and the application policy, the delivered link's inputs, the object
// stores, link failures, and the loader transformations of the delivered glue.
// This file drives the 'emcc' link driver (emcc and em++ in-process);
// test/application-link-node.test.mjs drives the 'node' link driver. Real builds
// are checked by the integration and platform workflows.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync, utimesSync } from 'node:fs';
import { join, basename } from 'node:path';
import { runInNewContext } from 'node:vm';
import { linkApplication, selectedLinkDriver, configurableThreadPool, initializerStubs, archiveUnitCache, shippedAnalysisDirectory,
  linkDrivers, buildProfiles, defaultLinkDriver, readStoreEntry, writeStoreEntry, relabelPreJs, sharedStoreLimits } from '../src/application-link.mjs';
import { responseFile } from '../src/platform.mjs';
import { compactInitializerWrappers } from '../src/edge/edge-initializers.mjs';
import { project, emccSdk, nodeSdk, writeRuntime, mainModule, helperModule, specializedIdentity } from './fixtures/link-stand-ins/application.mjs';
import { expandResponseFiles } from './fixtures/link-stand-ins/toolchain.mjs';

const posix = process.platform !== 'win32';
const root = new URL('../', import.meta.url).pathname;
const compileFlags = runtime => ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN',
  '-sMEMORY64=1', '-ffunction-sections', '-fdata-sections', '-I', join(runtime.directory, 'include')];
const linkFlags = (p, { memoryMode = 1, exportsFile = join(p.work, 'exports.json'), output = join(p.dist, 'program.cjs') } = {}) => ['--output-eol=linux', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`, '-sMALLOC=mimalloc',
  '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
  '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
  '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2',
  '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
  `-sMAXIMUM_MEMORY=${memoryMode === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
  '-Wno-experimental', '-Wno-pthreads-mem-growth', '-Wl,--start-group',
  ...p.runtime.manifest.libraries.map(name => join(p.runtime.directory, name)), '-Wl,--end-group',
  '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'), '--pre-js', join(p.work, 'application-pre.js'), '--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
  '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', output];
const readResponse = file => expandResponseFiles(['@' + file]);

function build(p, options = {}) {
  const { sdk } = options.sdk ? options : emccSdk(p.base);
  return linkApplication({ sources: p.sources, sdk: options.sdk?.sdk ?? sdk, runtime: p.runtime, work: p.work, dist: p.dist, leanVersion: '4.35.0',
    memoryMode: 1, verbose: false, linkDriver: 'emcc', ...options, ...(options.sdk ? { sdk: options.sdk.sdk } : {}) });
}
const withEnv = async (values, run) => {
  const previous = Object.fromEntries(Object.keys(values).map(key => [key, process.env[key]]));
  Object.assign(process.env, values);
  try { return await run(); }
  finally { for (const [key, value] of Object.entries(previous)) if (value === undefined) delete process.env[key]; else process.env[key] = value; }
};

test('a release build: compiled modules, the initialization plan, the requirements check and the delivered link', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(p.base);
  const stages = [], timings = {};
  const started = performance.now();
  const requirements = await build(p, { sdk: toolchain, progress: item => stages.push(item.stage), timings });
  const elapsed = performance.now() - started;
  assert.deepEqual(requirements, { mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false,
    specializedInitialization: true, initializationPlan: { units: 4, kept: 3, skipped: 1 } });
  assert.deepEqual(stages, ['Compiling application module 1 of 2', 'Compiling application module 2 of 2', 'Preparing application symbols',
    'Planning runtime initialization', 'Checking required runtime code', 'Linking application and Lean runtime', 'Preparing the application launcher']);
  assert.ok(timings['final link'] > 0 && timings['final link'] < elapsed && Object.keys(timings).length === 1);
  const compiles = toolchain.calls.filter(call => call.tool === 'emcc');
  // Every module is compiled as recorded; Lasm's generated C as well.
  assert.deepEqual(compiles[0], { tool: 'emcc', args: [...compileFlags(p.runtime), '-c', p.sources[0], '-o', join(p.work, 'module-0.o')],
    options: { stdio: ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024 } });
  assert.deepEqual(compiles.slice(1, 4).map(call => basename(call.args.at(-3))), ['Helper.c', 'reachability.c', 'initialization.c']);
  assert.equal(readFileSync(join(p.work, 'reachability.c'), 'utf8'), 'void *lasm_lookup_lean_symbol(const char *name) { (void)name; return 0; }\n');
  assert.match(readFileSync(join(p.work, 'initialization.c'), 'utf8'), /__wrap_lean_initialize/);
  for (const call of compiles) assert.deepEqual(call.args.slice(0, 11), compileFlags(p.runtime));
  // Exports: the C entry points and the program's own C exports.
  assert.equal(readFileSync(join(p.work, 'exports.json'), 'utf8'), '["_free","_main","_malloc"]\n');
  assert.equal(readFileSync(join(p.work, 'initializers-exports.json'), 'utf8'), '["_main","_malloc","_free"]\n');
  assert.equal(readFileSync(join(p.work, 'application-pre.js'), 'utf8'), 'Module.lasmLeanVersion = "4.35.0";\n');
  // The plan: Helper's `initialize` result is used by the program; Init.Data's value is not.
  assert.deepEqual(JSON.parse(readFileSync(join(p.work, 'initialization-plan.json'), 'utf8')), { schema: 1,
    closure: ['initialize_Main', 'initialize_Init', 'initialize_Init_Data', 'initialize_Helper'],
    keep: ['initialize_Main', 'initialize_Init', 'initialize_Helper'],
    calls: { initialize_Main: ['initialize_Init', 'initialize_Helper'], initialize_Init: ['initialize_Init_Data'], initialize_Init_Data: [], initialize_Helper: ['initialize_Init'] } });
  assert.ok(readFileSync(join(p.work, 'initialization-plan.json'), 'utf8').endsWith('}\n'));
  const links = toolchain.calls.filter(call => call.tool === 'em++');
  assert.ok(links.every(call => call.args.length === 1 && call.args[0].startsWith('@')), 'em++ reads its arguments from a response file');
  const wrap = ['-Wl,--wrap=initialize_Main', '-Wl,--wrap=initialize_Init', '-Wl,--wrap=initialize_Init_Data', '-Wl,--wrap=initialize_Helper'];
  const finalWrappers = [0, 1, 2, 3].map(part => join(p.work, `initializers-${part}.o`));
  const objects = [join(p.work, 'module-0.o'), join(p.work, 'module-1.o')];
  const initialization = [join(p.work, 'initialization.o'), '-Wl,--wrap=lean_initialize'];
  // The delivered link: no lookup marker; the planned wrappers; optimized with -g1.
  assert.deepEqual(readResponse(join(p.work, 'link.rsp')), [...objects, ...initialization, ...finalWrappers, ...wrap, '-Oz', '-g1',
    '-Wl,-Map=' + join(p.work, 'final.map'), ...linkFlags(p)]);
  assert.equal(links.at(-1).args[0], '@' + join(p.work, 'link.rsp'));
  // The requirements check repeats the last planning round's link (with the
  // lookup marker), so its recorded result is reused: no link of its own.
  assert.equal(existsSync(join(p.work, 'reachability.map')), false);
  const probeLinks = toolchain.links.slice(0, -1);
  assert.equal(probeLinks.length, readdirSync(p.work).filter(name => /^initializers-\d+\.rsp$/.test(name)).length);
  const firstRound = probeLinks[0];
  assert.equal(firstRound.map, join(p.work, 'initializers-0.map'));
  assert.deepEqual(firstRound.inputs.map(input => input.file), [...objects, join(p.work, 'reachability.o'), ...[0, 1, 2, 3].map(part => join(p.work, `initializers-probe-0-${part}.o`)),
    join(p.work, 'initialization.o'), ...p.runtime.manifest.libraries.map(name => join(p.runtime.directory, name))]);
  assert.deepEqual([...firstRound.wrap], ['lean_initialize', ...wrap.map(flag => flag.slice('-Wl,--wrap='.length))]);
  // Planning probes: their own outputs, exports and maps, at -O0.
  const probe = readResponse(join(p.work, 'initializers-0.rsp'));
  assert.deepEqual(probe.slice(0, 3), [...objects, join(p.work, 'reachability.o')]);
  assert.ok(probe.includes('-O0') && probe.includes('-Wl,-Map=' + join(p.work, 'initializers-0.map')));
  assert.deepEqual(probe.slice(probe.indexOf('--output-eol=linux')), linkFlags(p, { output: join(p.work, 'initializers-0.cjs') }));
  // The skipped bodies alone, and an empty program, without the program's entry object.
  const ids = probeLinks.map((_, id) => id);
  const bodies = ids.filter(id => readResponse(join(p.work, `initializers-${id}.rsp`)).includes(`-sEXPORTED_FUNCTIONS=@${join(p.work, 'initializers-exports.json')}`));
  assert.equal(bodies.length, 2);
  for (const id of bodies) assert.ok(!readResponse(join(p.work, `initializers-${id}.rsp`)).includes(objects[0]));
  // Selective initialization applies to the bodies as well.
  for (const id of bodies) assert.ok(readResponse(join(p.work, `initializers-${id}.rsp`)).includes(join(p.work, 'initialization.o')));
  const sources = id => [0, 1, 2, 3].map(part => readFileSync(join(p.work, `initializers-probe-${id}-${part}.c`), 'utf8')).join('');
  assert.deepEqual(bodies.map(id => /__real_initialize_Init_Data\(1\);/.test(sources(id))), [true, false]);
  assert.ok(ids.filter(id => !bodies.includes(id)).every(id => !/__real_\w+\(1\);/.test(sources(id))));

  // The delivered glue: pre-js labels by name, the symbol loader, the function
  // table index and the configurable thread pool.
  const glue = readFileSync(join(p.dist, 'program.cjs'), 'utf8');
  for (const name of ['emscripten-pre.js', 'application-pre.js', 'host-pre.js']) assert.ok(glue.includes(`// include: ${name}\n`) && glue.includes(`// end include: ${name}\n`));
  assert.ok(!glue.includes(p.work) && !glue.includes(root));
  assert.match(glue, /var lasmResolveLeanSymbol = symName => \{\n  if \(!\/\^lp\?_\/\.test\(symName\)/);
  assert.match(glue, /lookup\(BigInt\(name\)\)/);
  assert.match(glue, /var lasmInitialFunctionTable = /);
  assert.match(glue, /var lasmReserveMainFunctionSlots = /);
  assert.ok(glue.includes('globalThis.process?.env?.LASM_THREAD_POOL') && !glue.includes('var pthreadPoolSize = 4;'));
  // Without a project cache the work directory's store holds the objects.
  assert.ok(readdirSync(join(p.work, 'object-store')).some(name => name.endsWith('.o')));
});

test('selective initialization needs a reviewed runtime: otherwise Lean\'s compiler state is linked and the build is rejected', { skip: !posix }, async () => {
  const p = project();
  const toolchain = emccSdk(p.base);
  await assert.rejects(build(p, { sdk: toolchain }), error => {
    assert.equal(error.code, 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE');
    assert.match(error.message, /Detected Lean compiler\/kernel state: init\.o\.\nRequired by: your code → lean_initialize → init \(Lean C\+\+ compiler\/kernel\)\nYour code calls `lean_initialize`/);
    return true;
  });
  // The rejection is explained with one more probe link (--why-extract), and nothing is delivered.
  const last = toolchain.links.at(-1);
  assert.equal(last.whyExtract, join(p.work, 'why-extract.txt'));
  assert.ok(existsSync(join(p.work, 'why-extract.txt')));
  assert.deepEqual(readResponse(join(p.work, 'link.rsp')).filter(arg => arg.startsWith('-Wl,--why')), ['-Wl,--why-extract=' + join(p.work, 'why-extract.txt')]);
  const explained = readResponse(join(p.work, 'link.rsp'));
  assert.ok(explained.includes(join(p.work, 'reachability.o')) && explained.includes('-O0') && explained.includes('-Wl,-Map=' + join(p.work, 'reachability.map')));
  assert.equal(toolchain.calls.filter(call => call.tool === 'emcc').some(call => call.args.includes(join(p.work, 'initialization.c'))), false);
  assert.equal(existsSync(join(p.work, 'final.map')), false, 'no delivered link');

  // A runtime whose own lean_initialize is ordinary C links statically.
  const q = project({ runtime: { leanInitializeInRuntime: true } });
  const requirements = await build(q);
  assert.equal(requirements.specializedInitialization, false);
  assert.equal(requirements.mode, 'static');
  assert.equal(existsSync(join(q.work, 'initialization.c')), false);
  assert.ok(!readResponse(join(q.work, 'link.rsp')).includes('-Wl,--wrap=lean_initialize'));
});

test('runtime evaluation, plugin loading and module-data access are rejected; an explanation failure does not mask it', { skip: !posix }, async () => {
  const p = project({ main: mainModule({ calls: 'dlopen(0);' }), runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(p.base);
  await assert.rejects(build(p, { sdk: toolchain }), error => error.code === 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE'
    && /runtime evaluation or plugin loading: dlopen; Lean compiler\/kernel state: module\.o; runtime Lean module-data access: lean_read_module_data\.\nRequired by: your code → dlopen → lean_read_module_data → module/.test(error.message));
  // The lookup marker surviving the link is the same rejection.
  const q = project({ main: mainModule({ calls: 'lasm_lookup_lean_symbol(0);' }), runtime: { identity: specializedIdentity } });
  await assert.rejects(build(q), /runtime evaluation or plugin loading: lasm_lookup_lean_symbol/);
  // A failing --why-extract link still reports the rejection.
  const r = project({ main: mainModule({ calls: 'dlopen(0);' }), runtime: { identity: specializedIdentity } });
  const failing = emccSdk(r.base);
  const execute = failing.sdk.execute;
  failing.sdk.execute = (tool, args, options) => {
    if (tool === 'em++' && readFileSync(args[0].slice(1), 'utf8').includes('--why-extract')) throw new Error('why-extract failed');
    return execute(tool, args, options);
  };
  await assert.rejects(build(r, { sdk: failing }), error => error.code === 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' && !/Required by/.test(error.message));
});

test('a C entry point `int main(void)` gets an argc/argv entry of its own', { skip: !posix }, async () => {
  const main = mainModule().replace('int main(int argc, char ** argv) {', 'int main(void) {');
  const p = project({ main, runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(p.base);
  const requirements = await build(p, { sdk: toolchain, linkOnly: true });
  assert.equal(requirements.mode, 'static');
  assert.equal(readFileSync(join(p.work, 'entry.c'), 'utf8'), 'int __main_void(void);\nint __main_argc_argv(int argc, char **argv) { return __main_void(); }\n');
  const delivered = readResponse(join(p.work, 'link.rsp'));
  assert.deepEqual(delivered.slice(2, 5), [join(p.work, 'initialization.o'), '-Wl,--wrap=lean_initialize', join(p.work, 'entry.o')]);
  // The bodies probes have their own entry: the program's is left out.
  const probes = readdirSync(p.work).filter(name => /^initializers-\d+\.rsp$/.test(name)).map(name => readResponse(join(p.work, name)));
  const isBodies = args => args.includes(`-sEXPORTED_FUNCTIONS=@${join(p.work, 'initializers-exports.json')}`);
  assert.ok(probes.filter(isBodies).length === 2 && probes.filter(isBodies).every(args => !args.includes(join(p.work, 'entry.o'))));
  assert.ok(probes.filter(args => !isBodies(args)).every(args => args.includes(join(p.work, 'entry.o'))));
  // A link-only build stops before the launcher.
  assert.equal(readFileSync(join(p.dist, 'program.cjs'), 'utf8').includes('lasmResolveLeanSymbol'), false);
});

test('initialization "all" and "native" link every initializer without planning', { skip: !posix }, async () => {
  for (const initialization of ['all', 'native']) {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = emccSdk(p.base);
    const requirements = await build(p, { sdk: toolchain, initialization, linkOnly: true });
    assert.equal(requirements.initializationPlan, undefined);
    assert.equal(toolchain.links.length, 2, 'the requirements check and the delivered link');
    assert.equal(existsSync(join(p.work, 'initializers-exports.json')), false);
    assert.deepEqual(readResponse(join(p.work, 'link.rsp')).slice(0, 6), [join(p.work, 'module-0.o'), join(p.work, 'module-1.o'),
      join(p.work, 'initialization.o'), '-Wl,--wrap=lean_initialize', '-Oz', '-g1']);
  }
  // From the environment as well.
  const p = project({ runtime: { identity: specializedIdentity } });
  await withEnv({ LASM_INITIALIZATION: 'all' }, () => build(p, { linkOnly: true }));
  assert.equal(existsSync(join(p.work, 'initialization-plan.json')), false);
});

test('maintainer switches: kept initializers by name, the debug link, the unoptimized test build, verbose output', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const requirements = await withEnv({ LASM_INITIALIZATION_KEEP: '^initialize_Init_D' }, () => build(p, { linkOnly: true }));
  assert.deepEqual(requirements.initializationPlan, { units: 4, kept: 4, skipped: 0 });
  assert.equal(existsSync(join(p.work, 'initialization-plan.json')), false, 'nothing skipped: no plan for compact wrappers');
  for (const variable of ['LASM_LINK_DEBUG', 'LASM_TEST_UNOPTIMIZED']) {
    const q = project({ runtime: { identity: specializedIdentity } });
    await withEnv({ [variable]: '1' }, () => build(q));
    const delivered = readResponse(join(q.work, 'link.rsp'));
    assert.ok(delivered.includes('-O0') && !delivered.includes('-Oz') && !delivered.includes('-g1'), variable);
    const glue = readFileSync(join(q.dist, 'program.cjs'), 'utf8');
    assert.ok(!glue.includes('var lasmReserveMainFunctionSlots'), 'table growth is left as linked');
    assert.ok(glue.includes('lasmInitialFunctionTable') && glue.includes('LASM_THREAD_POOL'));
  }
  const v = project({ runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(v.base);
  const messages = [];
  const error = console.error;
  console.error = message => messages.push(message);
  try { await build(v, { sdk: toolchain, verbose: true, linkOnly: true }); } finally { console.error = error; }
  assert.ok(toolchain.calls.every(call => call.options.stdio === 'inherit'));
  assert.ok(messages.some(message => /^Initialization plan round 1: /.test(message)));
});

test('memory mode 2 links 32-bit memory; invalid builds are refused before any work', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  await build(p, { memoryMode: 2, linkOnly: true, initialization: 'all' });
  assert.deepEqual(readResponse(join(p.work, 'link.rsp')).slice(-linkFlags(p).length), linkFlags(p, { memoryMode: 2 }));
  const q = project();
  const toolchain = emccSdk(q.base);
  for (const [options, message] of [
    [{ memoryMode: 3 }, 'Invalid application memory mode'],
    [{ memoryMode: 0 }, 'Invalid application memory mode'],
    [{ linkDriver: 'node', memoryMode: 2 }, 'The Node link driver has no recording for this memory mode'],
    [{ sources: [] }, 'Application C sources are required'],
    [{ sources: 'Main.c' }, 'Application C sources are required'],
    [{ leanVersion: '4.34.1' }, 'Application and runtime versions differ'],
    [{ linkDriver: 'cc' }, 'Invalid application link driver'],
    [{ profile: 'debug' }, 'Invalid build profile "debug"'],
    [{ profile: 'dev' }, 'The dev build profile needs the Node link driver'],
    [{ linkDriver: 'node-compile' }, 'The Node compile driver needs installed Emscripten system headers (a prebuilt or emcc-initialized cache)'],
  ]) await assert.rejects(build(q, { sdk: { ...toolchain, sdk: { ...toolchain.sdk, cache: join(q.base, 'no-cache') } }, ...options }), { message }, JSON.stringify(options));
  assert.deepEqual(toolchain.calls, []);
});

test('link drivers and build profiles', () => {
  assert.equal(defaultLinkDriver, 'node');
  assert.deepEqual(linkDrivers, ['emcc', 'node-compile', 'node']);
  assert.deepEqual(buildProfiles, ['release', 'dev']);
  assert.equal(selectedLinkDriver(undefined), 'node');
  assert.equal(selectedLinkDriver(''), 'node');
  assert.equal(selectedLinkDriver('emcc'), 'emcc');
  assert.equal(selectedLinkDriver('node-compile'), 'node-compile');
  assert.throws(() => selectedLinkDriver('gcc'), { message: 'Unsupported LASM_LINK_DRIVER "gcc"' });
});

test('the project object cache and the shared store: reuse, damage, pruning', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const objectCache = join(p.base, 'objects'), sharedCache = join(p.base, 'shared', 'objects');
  mkdirSync(objectCache, { recursive: true });
  writeFileSync(join(objectCache, 'stale.o'), 'from an earlier edit');
  const first = emccSdk(p.base);
  await build(p, { sdk: first, objectCache, sharedCache, linkOnly: true });
  assert.equal(existsSync(join(objectCache, 'stale.o')), false, 'entries this build did not use are removed');
  assert.equal(existsSync(join(p.work, 'object-store')), false);
  const shared = readdirSync(sharedCache);
  assert.ok(shared.some(name => /^probe-[0-9a-f]{64}\.json$/.test(name)) && shared.some(name => /^[0-9a-f]{64}\.o$/.test(name)));
  assert.ok(readdirSync(objectCache).some(name => /^nm-[0-9a-f]{64}\.txt$/.test(name)));
  // The next build of the same program compiles and links nothing it already has.
  const work = join(p.base, 'work-2');
  mkdirSync(work);
  const second = emccSdk(p.base);
  const requirements = await build({ ...p, work }, { sdk: second, objectCache, sharedCache, linkOnly: true });
  assert.deepEqual(second.calls.filter(call => call.tool === 'emcc'), []);
  assert.deepEqual(second.links.map(link => link.map), [join(work, 'final.map')], 'only the delivered link runs');
  assert.equal(requirements.mode, 'static');
  assert.deepEqual(readFileSync(join(work, 'module-0.o')), readFileSync(join(p.work, 'module-0.o')));
  // A damaged entry is detected and compiled again; an edited module compiles alone.
  const [entry] = readdirSync(objectCache).filter(name => /^[0-9a-f]{64}\.o$/.test(name));
  writeFileSync(join(objectCache, entry), 'damaged');
  const third = emccSdk(p.base);
  await build({ ...p, work: join(p.base, 'work-3') }, { sdk: third, objectCache, sharedCache, linkOnly: true }).catch(error => error);
  assert.equal(third.calls.filter(call => call.tool === 'emcc').length, 1);
  // A different shared store compiles Lasm's generated C again.
  const fourth = emccSdk(p.base);
  mkdirSync(join(p.base, 'work-4'));
  await build({ ...p, work: join(p.base, 'work-4') }, { sdk: fourth, objectCache, linkOnly: true });
  assert.ok(fourth.calls.some(call => call.args.includes(join(p.base, 'work-4', 'reachability.c'))));
  assert.ok(readdirSync(objectCache).some(name => /^probe-/.test(name)), 'without a shared store the project store keeps the probe records');
});

test('a link that needs symbols of a library Lasm could not compile names it', { skip: !posix }, async () => {
  const p = project({ main: mainModule({ calls: 'sqlite3_open(0); curl_easy_init();' }), runtime: { identity: specializedIdentity } });
  await assert.rejects(build(p, { initialization: 'all' }), error => {
    assert.equal(error.code, 'ERR_LASM_NATIVE_LIBRARY');
    assert.deepEqual(error.libraries, [{ library: 'sqlite3' }, { library: 'curl' }]);
    assert.match(error.message, /the program needs sqlite3_open, curl_easy_init:/);
    assert.match(error.cause.stderr, /undefined symbol: sqlite3_open/);
    return true;
  });
  // A declared unavailable library is named once, with its reason.
  const q = project({ main: mainModule({ calls: 'sqlite3_open(0); my_c_helper();' }), runtime: { identity: specializedIdentity } });
  const unavailable = [{ package: 'sqlite', library: '/p/libsqlite3.a', reason: 'prebuilt library' }];
  await assert.rejects(build(q, { initialization: 'all', nativeUnavailable: unavailable }), error => {
    assert.deepEqual(error.libraries, unavailable);
    assert.match(error.message, /the program needs sqlite3_open, my_c_helper/);
    return true;
  });
  assert.deepEqual(unavailable, [{ package: 'sqlite', library: '/p/libsqlite3.a', reason: 'prebuilt library' }], 'the caller\'s list is not changed');
  // Any other undefined symbol is the linker's own error.
  const r = project({ main: mainModule({ calls: 'my_c_helper();' }), runtime: { identity: specializedIdentity } });
  await assert.rejects(build(r, { initialization: 'all' }), error => error.code === undefined && /undefined symbol: my_c_helper/.test(error.stderr));
  // So is a failure without undefined symbols, even with unavailable libraries.
  const s = project({ runtime: { identity: specializedIdentity } });
  const failing = emccSdk(s.base);
  const compileOnly = failing.sdk.execute;
  failing.sdk.execute = (tool, args, options) => { if (tool === 'em++') throw Object.assign(new Error('em++ crashed'), { stderr: 'segfault' }); return compileOnly(tool, args, options); };
  await assert.rejects(build(s, { sdk: failing, initialization: 'all', nativeUnavailable: unavailable }), { message: 'em++ crashed' });
  // The emcc driver compiles no package C code.
  const t = project({ runtime: { identity: specializedIdentity } });
  await assert.rejects(build(t, { nativeCompilations: [{ identity: 'x', extraArgs: [], source: t.sources[1], package: 'p' }] }),
    { message: 'Package C code requires the Node compile driver' });
});

test('the program\'s foreign C exports stay exported', { skip: !posix }, async () => {
  const extra = 'int my_export(int x) {\n  return x;\n}\nLEAN_EXPORT lean_object* l_unused_fn(lean_object* x) {\n  return x;\n}';
  const p = project({ helper: helperModule({ extra }), runtime: { identity: specializedIdentity } });
  await build(p, { initialization: 'all', linkOnly: true });
  assert.equal(readFileSync(join(p.work, 'exports.json'), 'utf8'), '["_free","_main","_malloc","_my_export"]\n');
});

// The machine-wide store is shared with other Lasm versions: a probe record in
// another schema is not trusted; the probe links again and its record is replaced.
test('the shared store: probe records of another schema are relinked, not used', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const objectCache = join(p.base, 'objects'), sharedCache = join(p.base, 'shared');
  const first = await build(p, { objectCache, sharedCache, linkOnly: true });
  const probes = readdirSync(sharedCache).filter(name => /^probe-[0-9a-f]{64}\.json$/.test(name));
  assert.ok(probes.length > 0);
  const current = JSON.parse(readStoreEntry(join(sharedCache, probes[0])).toString('utf8'));
  assert.equal(current.schema, 2);
  for (const name of probes) writeStoreEntry(join(sharedCache, name), Buffer.from(JSON.stringify({ schema: 1, data: [], code: [] })));
  const work = join(p.base, 'work-2');
  mkdirSync(work);
  const again = emccSdk(p.base);
  const requirements = await build({ ...p, work }, { sdk: again, objectCache, sharedCache, linkOnly: true });
  assert.ok(again.links.length > 1, 'the probes link again');
  assert.deepEqual(requirements, first);
  for (const name of probes) assert.equal(JSON.parse(readStoreEntry(join(sharedCache, name)).toString('utf8')).schema, 2, name);
});

test('initializer analysis of the runtime archives is cached per machine and may ship with the runtime', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const analysisCache = join(p.base, 'analysis');
  await build(p, { analysisCache, linkOnly: true });
  const records = readdirSync(analysisCache);
  assert.equal(records.length, 3, 'one record per runtime archive');
  assert.ok(records.every(name => /^initializer-units-[0-9a-f]{64}\.json$/.test(name)));
  const cache = archiveUnitCache(analysisCache, p.runtime);
  const init = join(p.runtime.directory, 'lib/libInit.a');
  assert.deepEqual(cache.load(init).map(unit => unit.name), ['initialize_Init', 'initialize_Init_Data']);
  // Files outside the runtime are never cached.
  assert.equal(cache.load(join(p.base, 'c', 'Main.c')), undefined);
  cache.save(join(p.base, 'other.a'), [{ name: 'x' }]);
  assert.equal(readdirSync(analysisCache).length, 3);
  // A record for another runtime identity or schema is not used.
  const other = archiveUnitCache(analysisCache, { ...p.runtime, identity: 'another' });
  assert.equal(other.load(init), undefined);
  // The shipped analysis beside the runtime bundle.
  assert.equal(shippedAnalysisDirectory(p.runtime), p.runtime.directory + '.analysis');
  const shipped = join(p.base, 'shipped');
  mkdirSync(shipped);
  for (const name of records) writeFileSync(join(shipped, name), readFileSync(join(analysisCache, name)));
  const fromShipped = archiveUnitCache(join(p.base, 'empty-cache'), p.runtime, { shipped });
  assert.deepEqual(fromShipped.load(init), cache.load(init));
  assert.equal(archiveUnitCache(join(p.base, 'empty-cache'), p.runtime, { shipped: undefined }).load(init), undefined);
  assert.equal(archiveUnitCache(join(p.base, 'empty-cache'), p.runtime).load(init), undefined);
  // A damaged record is skipped.
  for (const name of records) writeFileSync(join(analysisCache, name), JSON.stringify({ schema: 1, key: 'other', units: [] }));
  assert.equal(cache.load(init), undefined);
  for (const name of records) writeFileSync(join(analysisCache, name), JSON.stringify({ schema: 2, units: [] }));
  assert.equal(cache.load(init), undefined);
  // A record of another schema is not used even with the right key.
  const keyed = archiveUnitCache(join(p.base, 'keyed'), p.runtime);
  keyed.save(init, [{ name: 'initialize_Init' }]);
  const [keyedName] = readdirSync(join(p.base, 'keyed'));
  const keyedRecord = JSON.parse(readFileSync(join(p.base, 'keyed', keyedName), 'utf8'));
  writeFileSync(join(p.base, 'keyed', keyedName), JSON.stringify({ ...keyedRecord, schema: 2 }));
  assert.equal(keyed.load(init), undefined);
  writeFileSync(join(p.base, 'keyed', keyedName), JSON.stringify({ ...keyedRecord, units: 'initialize_Init' }));
  assert.equal(keyed.load(init), undefined);
  // Saved with its key, atomically.
  const fresh = join(p.base, 'fresh');
  archiveUnitCache(fresh, p.runtime).save(init, [{ name: 'initialize_Init' }]);
  const [saved] = readdirSync(fresh);
  const record = JSON.parse(readFileSync(join(fresh, saved), 'utf8'));
  assert.equal(record.schema, 1);
  assert.match(record.key, /^[0-9a-f]{64}$/);
  assert.deepEqual(record.units, [{ name: 'initialize_Init' }]);
  assert.deepEqual(archiveUnitCache(fresh, p.runtime).load(init), [{ name: 'initialize_Init' }]);
  // An unwritable cache is not an error.
  writeFileSync(join(p.base, 'file'), '');
  assert.doesNotThrow(() => archiveUnitCache(join(p.base, 'file', 'below'), p.runtime).save(init, []));
});

test('initializer stubs and the configurable thread pool', () => {
  assert.equal(initializerStubs([{ name: 'initialize_A', calls: ['initialize_B', 'initialize_C'] }, { name: 'initialize_D', calls: ['initialize_B'] }]), [
    '// Generated by Lasm: initializer stubs for planning probes.', '#include <lean/lean.h>', '#include <stdbool.h>',
    'lean_object* initialize_B(uint8_t);', 'lean_object* initialize_C(uint8_t);',
    'static bool _G_initialize_A_done = false;', 'LEAN_EXPORT lean_object* initialize_A(uint8_t builtin) {',
    '  if (_G_initialize_A_done) return lean_io_result_mk_ok(lean_box(0));', '  _G_initialize_A_done = true;', '  lean_object* res;',
    '  res = initialize_B(builtin); if (lean_io_result_is_error(res)) return res; lean_dec_ref(res);',
    '  res = initialize_C(builtin); if (lean_io_result_is_error(res)) return res; lean_dec_ref(res);',
    '  return lean_io_result_mk_ok(lean_box(0));', '}',
    'static bool _G_initialize_D_done = false;', 'LEAN_EXPORT lean_object* initialize_D(uint8_t builtin) {',
    '  if (_G_initialize_D_done) return lean_io_result_mk_ok(lean_box(0));', '  _G_initialize_D_done = true;', '  lean_object* res;',
    '  res = initialize_B(builtin); if (lean_io_result_is_error(res)) return res; lean_dec_ref(res);',
    '  return lean_io_result_mk_ok(lean_box(0));', '}', ''].join('\n'));
  assert.equal(initializerStubs([]), '// Generated by Lasm: initializer stubs for planning probes.\n#include <lean/lean.h>\n#include <stdbool.h>\n');
  const glue = configurableThreadPool('a();\nvar pthreadPoolSize = 4;\nb();\n');
  const size = value => runInNewContext(glue.split('\n')[1] + '\npthreadPoolSize', { globalThis: { process: { env: value === undefined ? {} : { LASM_THREAD_POOL: value } } } });
  assert.equal(size(undefined), 1);
  for (const [value, expected] of [['0', 0], ['7', 7], ['10', 10], ['59', 59], ['64', 64], ['65', 1], ['70', 1], ['-1', 1], ['', 1], ['04', 1], ['4x', 1], ['x4', 1]])
    assert.equal(size(value), expected, value);
  assert.equal(runInNewContext(glue.split('\n')[1] + '\npthreadPoolSize', { globalThis: {} }), 1);
  assert.ok(glue.startsWith('a();\n') && glue.endsWith('\nb();\n'));
  assert.throws(() => configurableThreadPool('var x;'), { message: 'Unexpected Emscripten thread pool in the application glue' });
  assert.throws(() => configurableThreadPool('var pthreadPoolSize = 4;var pthreadPoolSize = 4;'), /thread pool/);
});

test('verbose is the default; the Node drivers check the Emscripten headers and the recorded tools first', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(p.base);
  await build(p, { sdk: toolchain, verbose: undefined, initialization: 'all', linkOnly: true });
  assert.ok(toolchain.calls.length > 0 && toolchain.calls.every(call => call.options.stdio === 'inherit'));
  const cache = join(p.base, 'cache-without-headers');
  mkdirSync(cache);
  await assert.rejects(build(p, { sdk: { ...toolchain, sdk: { ...toolchain.sdk, cache } }, linkDriver: 'node-compile' }),
    { message: 'The Node compile driver needs installed Emscripten system headers (a prebuilt or emcc-initialized cache)' });
  const node = nodeSdk(p.base);
  await assert.rejects(build(p, { sdk: { ...node, sdk: { ...node.sdk, toolchain: { ...node.sdk.toolchain, shared: 'other' } } }, linkDriver: 'node' }),
    /was not verified with these compiler tools/);
  await assert.rejects(build(p, { sdk: { ...node, sdk: { ...node.sdk, toolchain: undefined, driverIdentity: 'other' } }, linkDriver: 'node-compile' }),
    /was not recorded with this compiler SDK \(other\)/);
  assert.deepEqual(node.tools.calls(), []);
});

test('a failed link names native libraries from the linker\'s output, its stdout or its message', { skip: !posix }, async () => {
  for (const [field, text] of [['stdout', 'wasm-ld: error: a.o: undefined symbol: sqlite3_open'], ['message', 'Command failed: undefined symbol: sqlite3_open'],
    ['stderr', 'wasm-ld: error: a.o: undefined symbol: sqlite3_open']]) {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = emccSdk(p.base);
    const execute = toolchain.sdk.execute;
    toolchain.sdk.execute = (tool, args, options) => {
      if (tool !== 'em++') return execute(tool, args, options);
      throw Object.assign(new Error(field === 'message' ? text : 'Command failed: em++'), field === 'message' ? {} : { [field]: text });
    };
    // A declared library that is not the one the symbol names: both are reported.
    const unavailable = [{ package: 'p', library: '/p/libfoo.a', reason: 'prebuilt library' }];
    await assert.rejects(build(p, { sdk: toolchain, initialization: 'all', nativeUnavailable: unavailable }), error => {
      assert.equal(error.code, 'ERR_LASM_NATIVE_LIBRARY', field);
      assert.deepEqual(error.libraries, [...unavailable, { library: 'sqlite3' }]);
      return true;
    });
  }
});

test('object and probe keys: the same runtime in another directory reuses them; other tools do not; the runtime\'s archives count by its identity', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const objectCache = join(p.base, 'objects'), sharedCache = join(p.base, 'shared');
  await build(p, { objectCache, sharedCache, linkOnly: true });
  // The runtime, copied elsewhere (same identity), with an extra archive member it never uses.
  const moved = writeRuntime(join(p.base, 'runtime-moved'), { identity: specializedIdentity, extraInit: [['Unused.o', { functions: [{ name: 'l_never_used' }] }]] });
  const again = emccSdk(p.base);
  mkdirSync(join(p.base, 'work-moved')); mkdirSync(join(p.base, 'work-other'));
  await build({ ...p, runtime: moved, work: join(p.base, 'work-moved') }, { sdk: again, objectCache, sharedCache, linkOnly: true });
  assert.deepEqual(again.calls.filter(call => call.tool === 'emcc'), [], 'objects are keyed without the runtime path');
  assert.equal(again.links.length, 1, 'probe records are keyed by the runtime identity, not its archives\' bytes');
  assert.deepEqual(again.tools.calls('llvm-nm'), [['--defined-only', '--extern-only', '--format=posix', join(moved.directory, 'lib/libleancpp.a')]],
    'listings of the program\'s objects are reused by content; the runtime\'s inline C++ helpers are listed');
  // Other compiler tools: compiled and probed again.
  const other = emccSdk(p.base);
  other.sdk.driverIdentity = 'other-emcc';
  await build({ ...p, work: join(p.base, 'work-other') }, { sdk: other, objectCache, sharedCache, linkOnly: true });
  assert.ok(other.calls.filter(call => call.tool === 'emcc').length >= 2);
  assert.ok(other.links.length > 1);
});

test('Lasm\'s generated C is shared between projects; each project keeps its own objects', { skip: !posix }, async () => {
  const sharedBase = project({ runtime: { identity: specializedIdentity } });
  const sharedCache = join(sharedBase.base, 'shared');
  const main = mainModule().replace('int main(int argc, char ** argv) {', 'int main(void) {');
  const first = project({ main, runtime: { identity: specializedIdentity } });
  await build(first, { objectCache: join(first.base, 'objects'), sharedCache, linkOnly: true });
  const second = project({ main: main.replace('l_greeting = l_Init_mkString();', 'l_greeting = l_Init_mkString(); /* edited */ l_greeting = l_Init_mkString();'),
    runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(second.base);
  await build(second, { sdk: toolchain, objectCache: join(second.base, 'objects'), sharedCache, linkOnly: true });
  const compiled = toolchain.calls.filter(call => call.tool === 'emcc').map(call => basename(call.args.at(-3)));
  assert.ok(compiled.includes('Main.c') && compiled.includes('Helper.c'), 'a new project compiles its own modules');
  for (const name of ['reachability.c', 'initialization.c', 'entry.c']) assert.ok(!compiled.includes(name), name);
  assert.ok(!readdirSync(join(second.base, 'objects')).some(name => /^probe-/.test(name)));
});

test('a program without an entry point is not an application', { skip: !posix }, async () => {
  const library = '// Lean compiler output\n// Module: Lib\nLEAN_EXPORT lean_object* l_lib(lean_object* x) {\n  return x;\n}\n';
  const p = project({ main: library, helper: library.replace('l_lib', 'l_lib2'), runtime: { identity: specializedIdentity } });
  const toolchain = emccSdk(p.base);
  await assert.rejects(build(p, { sdk: toolchain }), { message: 'Application linker map has no executable entry point' });
  assert.equal(existsSync(join(p.work, 'entry.c')), false);
  assert.equal(existsSync(join(p.work, 'initialization-plan.json')), false, 'nothing to plan without the program\'s initializer');
  assert.equal(toolchain.links.length, 1, 'only the requirements check');
});

test('a reviewed runtime\'s weak C++ helpers do not count as compiler state', { skip: !posix }, async () => {
  const p = project({ main: mainModule({ calls: 'lean_inline_helper();' }), runtime: { identity: specializedIdentity } });
  const requirements = await build(p, { initialization: 'all', linkOnly: true });
  assert.deepEqual(requirements.cxxRuntime, []);
  assert.equal(requirements.mode, 'static');
  assert.equal('initializationPlan' in requirements, false);
});

test('a skipped initializer that registers into a global the program uses is kept; a constant is not shared state', { skip: !posix }, async () => {
  const kept = project({ runtime: { identity: specializedIdentity, registerTarget: 'l_Helper_ref' } });
  assert.deepEqual((await build(kept, { linkOnly: true })).initializationPlan, { units: 4, kept: 4, skipped: 0 });
  assert.equal(existsSync(join(kept.work, 'initialization-plan.json')), false);
  const skipped = project({ runtime: { identity: specializedIdentity, registerTarget: 'l_Helper_unused' } });
  assert.deepEqual((await build(skipped, { linkOnly: true })).initializationPlan, { units: 4, kept: 3, skipped: 1 });
});

test('pre-js labels must be whole comment lines, each exactly once', () => {
  const files = ['/a/one.js', '/a/two.js'];
  const label = file => [`// include: ${file}`, `// end include: ${file}`];
  assert.equal(relabelPreJs([...label(files[0]), 'x(); // include: /a/one.js', ...label(files[1])].join('\n'), files),
    ['// include: one.js', '// end include: one.js', 'x(); // include: /a/one.js', '// include: two.js', '// end include: two.js'].join('\n'));
  assert.throws(() => relabelPreJs([...label(files[0]), ...label(files[0]), ...label(files[1])].join('\n'), files), /pre-js labels/);
});

test('the shared store stays within its bound after a build, keeping this build\'s entries', { skip: !posix }, async () => {
  assert.deepEqual(sharedStoreLimits, { entries: 600, bytes: 768 * 1024 * 1024 });
  const p = project({ runtime: { identity: specializedIdentity } });
  const sharedCache = join(p.base, 'shared');
  mkdirSync(sharedCache);
  const old = new Date(Date.UTC(2020, 0, 1));
  for (let index = 0; index < 650; index++) { const file = join(sharedCache, `old-${index}.o`); writeFileSync(file, ''); utimesSync(file, old, old); }
  await build(p, { sharedCache, linkOnly: true, initialization: 'all' });
  const names = readdirSync(sharedCache);
  assert.equal(names.length, 600);
  assert.ok(names.some(name => /^probe-/.test(name)) && names.some(name => /^[0-9a-f]{64}\.o$/.test(name)));
});
