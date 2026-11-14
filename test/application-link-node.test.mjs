// The application link plan with the Node link driver and stand-in tools
// (test/fixtures/link-stand-ins): clang compiles with the recorded flags,
// wasm-ld links the probes (concurrently) and the delivered program, and the
// dev profile's seed: the initializers the previous build kept, the runtime
// members its full link kept and its imports, and the planning probes' members.
// Builds are link-only: the stand-ins stop at wasm-ld. The stand-in programs
// run in-process (test/fixtures/link-stand-ins/programs.mjs).
import test, { describe } from 'node:test';
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { linkApplication, initializerStubs } from '../src/application-link.mjs';
import { project, nodeSdk, emccSdk, mainModule, trivialModule, specializedIdentity } from './fixtures/link-stand-ins/application.mjs';
import { expandResponseFiles, wasmObject, archive } from './fixtures/link-stand-ins/toolchain.mjs';
import { finishLinks, links as finishedLinks, hooks as linkHooks } from './fixtures/link-stand-ins/link-driver.mjs';
// The pinned Lean: the reviewed initializer list (src/lean-init-targets-<version>.json) is per release.
import { leanVersion } from './fixtures/link-stand-ins/application.mjs';

const posix = process.platform !== 'win32';
const readResponse = file => expandResponseFiles(['@' + file]);
const source = args => args[args.indexOf('-c') + 1];
const optimization = args => args.find(arg => /^-O[0-3sz]$/.test(arg));
const withEnv = async (values, run) => {
  const previous = Object.fromEntries(Object.keys(values).map(key => [key, process.env[key]]));
  Object.assign(process.env, values);
  try { return await run(); }
  finally { for (const [key, value] of Object.entries(previous)) if (value === undefined) delete process.env[key]; else process.env[key] = value; }
};

function build(p, toolchain, options = {}) {
  return linkApplication({ sources: p.sources, sdk: toolchain.sdk, runtime: p.runtime, work: options.work ?? p.work, dist: p.dist, leanVersion,
    memoryMode: 1, verbose: false, linkDriver: 'node', linkOnly: true, ...options });
}
const freshWork = (p, name) => { const work = join(p.base, name); mkdirSync(work, { recursive: true }); return work; };
const isMember = file => file.endsWith('.lasm-member.o');

// Builds in their own directories; the tests that change the environment or
// capture stderr come last.
describe('the Node link driver', () => {
  test('the Node driver compiles with clang as recorded and links the probes and the program with wasm-ld', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    // A work directory whose path the response files must quote; a chatty linker; Emscripten's intermediates.
    const work = freshWork(p, 'with "quote" and space'), sharedCache = join(p.base, 'shared'), linkIntermediates = join(p.base, 'intermediates');
    toolchain.sdk.env.LASM_STAND_IN_CHATTY = '1';
    const requirements = await build(p, toolchain, { work, sharedCache, linkIntermediates });
    p.work = work;
    assert.deepEqual(requirements.initializationPlan, { units: 4, kept: 3, skipped: 1 });
    const compiles = toolchain.tools.calls('clang');
    assert.deepEqual(compiles.slice(0, 2).map(source), p.sources);
    assert.equal(optimization(compiles[0]), '-O2');
    assert.ok(compiles[0].includes('--sysroot=' + join(toolchain.sdk.cache, 'sysroot')));
    // Planning probes' wrappers at -O0; the delivered wrappers as recorded.
    const wrappers = compiles.filter(args => /initializers-/.test(source(args)));
    assert.ok(wrappers.filter(args => /initializers-probe-/.test(source(args))).every(args => optimization(args) === '-O0'));
    assert.ok(wrappers.filter(args => /initializers-\d\.c$/.test(source(args))).every(args => optimization(args) === '-O2'));
    assert.equal(wrappers.filter(args => /initializers-\d\.c$/.test(source(args))).length, 4);
    const links = toolchain.tools.calls('wasm-ld');
    assert.ok(links.at(-1).includes('-Map=' + join(p.work, 'final.map')));
    assert.ok(!links.at(-1).includes(join(p.work, 'reachability.o')));
    assert.ok(links.slice(0, -1).every(args => args.includes(join(p.work, 'reachability.o'))));
    // The requirements check reuses the last planning round's probe: no link of its own.
    assert.equal(links.length, readdirSync(p.work).filter(name => /^initializers-\d+\.map$/.test(name)).length + 1);
    assert.equal(existsSync(join(p.work, 'reachability.map')), false);
    // The delivered wrappers are compiled as recorded, the same source in a probe at -O0.
    const delivered = readFileSync(join(p.work, 'initializers-0.c'), 'utf8');
    const probe = readdirSync(p.work).find(name => /^initializers-probe-\d+-0\.c$/.test(name) && readFileSync(join(p.work, name), 'utf8') === delivered);
    assert.ok(probe);
    assert.notDeepEqual(readFileSync(join(p.work, 'initializers-0.o')), readFileSync(join(p.work, probe.replace(/\.c$/, '.o'))));
    // Emscripten's intermediate files per link mode.
    assert.deepEqual(readdirSync(linkIntermediates), ['final']);
    assert.ok(readdirSync(join(linkIntermediates, 'final')).includes('emcc-00-settings.json'));
    // Emscripten's JavaScript steps are kept in the shared store by content: another build does not run them.
    assert.ok(readdirSync(sharedCache).some(name => /^js-[0-9a-f]{64}\.txt$/.test(name)));
    const runs = () => toolchain.tools.calls('compiler.mjs').length;
    await build(p, toolchain, { work: freshWork(p, 'work-2'), sharedCache });
    const before = runs();
    await build(p, toolchain, { work: freshWork(p, 'work-3'), sharedCache });
    assert.equal(runs(), before);
    // No temporary link directories are left.
    assert.deepEqual(readdirSync(p.work).filter(name => name.startsWith('node-link')), []);
    // The release profile records no seed without a seed file.
    assert.equal(existsSync(join(p.base, 'seed.json')), false);
  });

  test('a dev build compiles the program at -O1, records its seed, and the next build links with it', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const seed = join(p.base, 'seed.json');
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.deepEqual(toolchain.tools.calls('clang').slice(0, 2).map(optimization), ['-O1', '-O1']);
    const record = JSON.parse(readFileSync(seed, 'utf8'));
    const [libInit, libleanrt, libleancpp] = p.runtime.manifest.libraries.map(name => join(p.runtime.directory, name));
    assert.equal(record.schema, 1);
    assert.equal(record.runtime, specializedIdentity);
    assert.deepEqual(record.keep, ['initialize_Helper', 'initialize_Init', 'initialize_Main']);
    assert.deepEqual(Object.keys(record.liveMembers), [libInit, libleanrt, libleancpp]);
    assert.equal(record.liveMembers[libInit].length, 1, 'Init.Data is not linked');
    assert.deepEqual(record.liveMembers[libleancpp], []);
    assert.deepEqual(record.importsLinked, [], 'a link-only build records the imports of its linked Wasm');
    assert.equal(record.imports, undefined);
    assert.deepEqual(Object.keys(record.probes).sort(), ['baseline', 'reached']);
    for (const probe of Object.values(record.probes)) assert.deepEqual(probe.imports, []);

    // The next build: one link, the delivered program, with the kept members only.
    toolchain.tools.clear();
    const requirements = await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.equal(requirements.mode, 'static');
    const links = toolchain.tools.calls('wasm-ld');
    assert.equal(links.length, 1);
    assert.ok(links[0].some(isMember) && !links[0].includes(libInit) && !links[0].includes(libleancpp));
    assert.ok(links[0].includes(join(p.work, 'reachability.o')), 'the planning round is the delivered link');
    assert.deepEqual(toolchain.tools.calls('clang'), [], 'every object is reused');
    const again = JSON.parse(readFileSync(seed, 'utf8'));
    assert.deepEqual(again.liveMembers, record.liveMembers);
    assert.deepEqual(again.importsLinked, []);
    assert.deepEqual(again.probes, record.probes, 'the planning probes\' members are kept');

    // A build in a new work directory: the body probes link with their recorded members.
    toolchain.tools.clear();
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed, work: freshWork(p, 'work-2') });
    const bodyLinks = toolchain.tools.calls('wasm-ld').filter(args => args.some(arg => arg.includes('initializers-') && arg.endsWith('.map')));
    assert.ok(bodyLinks.length >= 1);
    assert.ok(bodyLinks.every(args => args.some(isMember) && !args.includes(libInit)));
  });

  test('the dev fast link is checked by its imports and replaced by a full link when the program needs more', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const seed = join(p.base, 'seed.json');
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    const [libInit] = p.runtime.manifest.libraries.map(name => join(p.runtime.directory, name));
    // The edit imports a new host function: the member link is not accepted.
    writeFileSync(p.sources[0], mainModule({ calls: 'js_new_host_call();' }));
    toolchain.tools.clear();
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    const links = toolchain.tools.calls('wasm-ld');
    assert.deepEqual(links.map(args => args.some(isMember)), [true, false]);
    assert.ok(links[1].includes(libInit));
    assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).importsLinked, ['env\0js_new_host_call\0function']);
    // The edit needs a runtime member the previous link did not keep: that link fails, the full one does not.
    writeFileSync(p.sources[0], mainModule({ calls: 'js_new_host_call(); l_Init_register();' }));
    toolchain.tools.clear();
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.deepEqual(toolchain.tools.calls('wasm-ld').map(args => args.some(isMember)), [true, false]);
    const record = JSON.parse(readFileSync(seed, 'utf8'));
    assert.equal(record.liveMembers[libInit].length, 2);
    // A full (not link-only) build's import record is its own; the link-only one stays while the members are the same.
    assert.equal(record.imports, undefined);
  });

  test('a seeded dev build that the policy rejects is planned again without the seed', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const seed = join(p.base, 'seed.json');
    // Init.Data's initializer would load a plugin: kept, the program is rejected.
    writeFileSync(join(p.runtime.directory, 'lib', 'libInit.a'), archive([
      ['Prelude.o', wasmObject({ functions: [{ name: 'initialize_Init', refs: ['initialize_Init_Data', 'l_Init_table'] }, { name: 'l_Init_mkString', refs: ['l_Init_table'] }], data: [{ name: 'l_Init_table' }] })],
      ['Data.o', wasmObject({ functions: [{ name: 'initialize_Init_Data', refs: ['l_Init_Data_value', 'dlopen'] }], data: [{ name: 'l_Init_Data_value' }] })]]));
    writeFileSync(seed, JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: ['initialize_Main', 'initialize_Init_Data'] }));
    const requirements = await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.equal(requirements.mode, 'static');
    assert.deepEqual(requirements.initializationPlan, { units: 4, kept: 3, skipped: 1 });
    assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).keep, ['initialize_Helper', 'initialize_Init', 'initialize_Main']);
    // Other build failures of a seeded build are not retried.
    writeFileSync(seed, JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: ['initialize_Main'] }));
    toolchain.tools.fail('wasm-ld', 'wasm-ld: error: stand-in failure\n');
    toolchain.tools.clear();
    await assert.rejects(build(p, toolchain, { profile: 'dev', initializationSeed: seed }), error => /stand-in failure/.test(error.stderr));
    assert.equal(toolchain.tools.calls('wasm-ld').length, 1);
  });

  test('a seed of another runtime or format plans from the roots', { skip: !posix }, async () => {
    // One program and stores for every case: unchanged probes are not relinked,
    // so a planned build links once (without the lookup marker) and a seeded one
    // links its planning round as the delivered program (with it).
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const objectCache = join(p.base, 'objects'), sharedCache = join(p.base, 'shared');
    const seed = join(p.base, 'seed.json');
    const valid = JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: ['initialize_Main', 'initialize_Helper', 'initialize_Init'] });
    const seededLink = async (text, env = {}) => {
      writeFileSync(seed, text);
      toolchain.tools.clear();
      await withEnv(env, () => build(p, toolchain, { profile: 'dev', initializationSeed: seed, objectCache, sharedCache, work: freshWork(p, `work-${Math.random()}`) }));
      return toolchain.tools.calls('wasm-ld').at(-1).some(arg => arg.endsWith('reachability.o'));
    };
    await build(p, toolchain, { profile: 'dev', objectCache, sharedCache });
    assert.equal(await seededLink(valid), true, 'a valid seed');
    for (const [name, text] of [
      ['other runtime', JSON.stringify({ schema: 1, runtime: 'other', keep: ['initialize_Main'] })],
      ['other schema', JSON.stringify({ schema: 2, runtime: specializedIdentity, keep: ['initialize_Main'] })],
      ['no keep list', JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: 'initialize_Main' })],
      ['damaged', '{'],
    ]) {
      assert.equal(await seededLink(text), false, name);
      assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).keep, ['initialize_Helper', 'initialize_Init', 'initialize_Main'], name);
    }
    // A seed file that cannot be written is not an error.
    await build(p, toolchain, { profile: 'dev', initializationSeed: join(p.base, 'missing', 'seed.json'), objectCache, sharedCache, work: freshWork(p, 'work-unwritable') });
    // The release profile writes the plan only.
    await build(p, toolchain, { initializationSeed: seed, objectCache, sharedCache, work: freshWork(p, 'work-release') });
    assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')), { schema: 1, runtime: specializedIdentity, keep: ['initialize_Helper', 'initialize_Init', 'initialize_Main'] });
  });

  test('package C code: compiled with its own options, linked like archive members, reused, or reported when it does not compile', { skip: !posix }, async () => {
    const p = project({ main: mainModule({ calls: 'pkg_add(1);' }), runtime: { identity: specializedIdentity } });
    const native = join(p.base, 'c', 'pkg.c'), broken = join(p.base, 'c', 'broken.c');
    writeFileSync(native, 'int pkg_add(int x) {\n  return x + 1;\n}\nint pkg_unused(void) {\n  return 0;\n}\n');
    writeFileSync(broken, '#error unknown type name \'pthread_attr_t\'\nint broken(void) {\n  return 0;\n}\n');
    const toolchain = nodeSdk(p.base);
    const objectCache = join(p.base, 'objects');
    const stages = [];
    const nativeCompilations = [{ identity: 'pkg-1', extraArgs: ['-DPKG=1', '-I', join(p.base, 'c')], source: native, cwd: p.base, package: 'pkg' },
      { identity: 'broken-1', extraArgs: [], source: broken, cwd: p.base, package: 'broken' }];
    const requirements = await build(p, toolchain, { objectCache, nativeCompilations, progress: item => stages.push(item.stage), initialization: 'all' });
    assert.equal(requirements.mode, 'static');
    assert.deepEqual(stages.slice(2, 4), ['Compiling package C code 1 of 2', 'Compiling package C code 2 of 2']);
    const compiles = toolchain.tools.calls('clang');
    const pkg = compiles.find(args => source(args) === native);
    assert.deepEqual(pkg.slice(pkg.indexOf('-c') - 3, pkg.indexOf('-c')), ['-DPKG=1', '-I', join(p.base, 'c')]);
    assert.ok(compiles.some(args => source(args) === join(p.work, 'package-dl.c')));
    assert.match(readFileSync(join(p.work, 'package-dl.c'), 'utf8'), /lasm_package_dlopen/);
    // Linked lazily, as archive members are: an unused package object costs nothing.
    const delivered = readResponse(join(p.work, 'link.rsp'));
    const start = delivered.indexOf('-Wl,--start-lib');
    assert.deepEqual(delivered.slice(start, start + 4), ['-Wl,--start-lib', join(p.work, 'native-0.o'), join(p.work, 'package-dl.o'), '-Wl,--end-lib']);
    assert.ok(!delivered.includes(join(p.work, 'native-1.o')));
    // The next build reuses the package object; the broken source is tried again.
    toolchain.tools.clear();
    await build(p, toolchain, { objectCache, nativeCompilations, initialization: 'all', work: freshWork(p, 'work-2') });
    assert.deepEqual(toolchain.tools.calls('clang').map(source).filter(file => file === native || file === broken), [broken]);
    assert.ok(readResponse(join(p.base, 'work-2', 'link.rsp')).includes(join(p.base, 'work-2', 'native-0.o')));
    // A program that needs the code that did not compile names it.
    const q = project({ main: mainModule({ calls: 'broken();' }), runtime: { identity: specializedIdentity } });
    await assert.rejects(build(q, nodeSdk(q.base), { nativeCompilations: [nativeCompilations[1]], initialization: 'all' }), error => {
      assert.equal(error.code, 'ERR_LASM_NATIVE_LIBRARY');
      assert.deepEqual(error.libraries, [{ package: 'broken', library: broken, reason: 'does not compile for WebAssembly: ' + `${broken}:1:2: error: unknown type name 'pthread_attr_t'` }]);
      assert.match(error.message, /package broken has C code \(.*broken\.c\) that does not compile for WebAssembly: .*error: unknown type name/);
      return true;
    });
    // Without a project cache the package object is compiled each time.
    const r = project({ main: mainModule({ calls: 'pkg_add(1);' }), runtime: { identity: specializedIdentity } });
    writeFileSync(join(r.base, 'c', 'pkg.c'), readFileSync(native));
    const plain = nodeSdk(r.base);
    await build(r, plain, { nativeCompilations: [{ ...nativeCompilations[0], source: join(r.base, 'c', 'pkg.c') }], initialization: 'all' });
    await build(r, plain, { nativeCompilations: [{ ...nativeCompilations[0], source: join(r.base, 'c', 'pkg.c') }], initialization: 'all', work: freshWork(r, 'work-2') });
    assert.equal(plain.tools.calls('clang').filter(args => source(args) === join(r.base, 'c', 'pkg.c')).length, 2);
  });

  test('the node-compile driver compiles with clang and links with em++', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const emcc = emccSdk(p.base);
    toolchain.sdk.execute = emcc.sdk.execute;
    const requirements = await build(p, toolchain, { linkDriver: 'node-compile', linkOnly: true });
    assert.equal(requirements.mode, 'static');
    assert.ok(toolchain.tools.calls('clang').length > 0);
    assert.equal(emcc.calls.filter(call => call.tool === 'emcc').length, 0);
    assert.ok(emcc.calls.filter(call => call.tool === 'em++').length > 1);
    assert.equal(toolchain.tools.calls('wasm-ld').length, 0);
    // The emcc and node-compile drivers' link fails without an emcc.
    const q = project({ runtime: { identity: specializedIdentity } });
    await assert.rejects(build(q, nodeSdk(q.base), { linkDriver: 'node-compile' }), /the Node link driver ran em\+\+/);
  });

  test('dev planning probes link a stub for a skipped trivial initializer of an object they leave out', { skip: !posix }, async () => {
    const main = mainModule().replace('lean_object* initialize_Helper(uint8_t builtin);', 'lean_object* initialize_Helper(uint8_t builtin);\nlean_object* initialize_Tiny(uint8_t builtin);')
      .replace('  l_greeting = l_Init_mkString();', '  res = initialize_Tiny(builtin);\n  l_greeting = l_Init_mkString();');
    const p = project({ main, extra: [['Tiny.c', trivialModule('Tiny')]], runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const requirements = await build(p, toolchain, { profile: 'dev' });
    assert.deepEqual(requirements.initializationPlan, { units: 5, kept: 3, skipped: 2 });
    const stubs = readdirSync(p.work).filter(name => /^initializer-stubs-\d+\.c$/.test(name));
    assert.ok(stubs.length >= 1);
    for (const name of stubs) assert.equal(readFileSync(join(p.work, name), 'utf8'), initializerStubs([{ name: 'initialize_Tiny', calls: ['initialize_Init'] }]));
    const bodyLinks = toolchain.tools.calls('wasm-ld').filter(args => args.some(arg => /initializer-stubs-\d+\.o$/.test(arg)));
    assert.equal(bodyLinks.length, stubs.length);
    for (const args of bodyLinks) assert.ok(!args.includes(join(p.work, 'module-2.o')) && !args.includes(join(p.work, 'module-0.o')), 'the stub replaces the module');
    assert.ok(toolchain.tools.calls('clang').filter(args => /initializer-stubs-/.test(source(args))).every(args => optimization(args) === '-O0'));
    // The release profile probes the bodies with the program's objects.
    const q = project({ main, extra: [['Tiny.c', trivialModule('Tiny')]], runtime: { identity: specializedIdentity } });
    await build(q, nodeSdk(q.base));
    assert.deepEqual(readdirSync(q.work).filter(name => name.startsWith('initializer-stubs')), []);
  });

  test('the dev seed: probe members checked by imports, foreign archives, the import records of both link kinds', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const seed = join(p.base, 'seed.json');
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.ok(readFileSync(seed, 'utf8').endsWith('}\n'));
    const record = JSON.parse(readFileSync(seed, 'utf8'));
    const [libInit] = p.runtime.manifest.libraries.map(name => join(p.runtime.directory, name));
    // The other link kind's import record stays while the members are the same; the probes are kept.
    writeFileSync(seed, JSON.stringify({ ...record, imports: ['env\0js_full\0function'] }));
    const timings = {};
    toolchain.tools.clear();
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed, timings });
    assert.ok(timings['read map'] > 0, 'the seeded round reads the delivered link\'s map');
    assert.equal(toolchain.tools.calls('wasm-ld').length, 1);
    assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).imports, ['env\0js_full\0function']);
    // Recorded members of archives this runtime does not have (even none of them): the delivered link is not a member link.
    for (const foreign of [[1], []]) {
      writeFileSync(seed, JSON.stringify({ ...record, imports: ['env\0js_full\0function'], liveMembers: { ...record.liveMembers, '/elsewhere/libOther.a': foreign } }));
      toolchain.tools.clear();
      await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
      assert.deepEqual(toolchain.tools.calls('wasm-ld').map(args => args.some(isMember)), [false]);
      const relinked = JSON.parse(readFileSync(seed, 'utf8'));
      assert.deepEqual(relinked.liveMembers, record.liveMembers);
      assert.equal(relinked.imports, undefined, 'another member set: the full link\'s import record no longer applies');
    }
    // Body probes: recorded members of other archives, or a link that now imports more, link in full.
    const touch = 'l_Init_register(); js_host_call();';
    for (const foreign of [[1], []]) {
      writeFileSync(seed, JSON.stringify({ ...record, probes: { ...record.probes, baseline: { ...record.probes.baseline, liveMembers: { ...record.probes.baseline.liveMembers, '/elsewhere/libOther.a': foreign } } } }));
      toolchain.tools.clear();
      await build(p, toolchain, { profile: 'dev', initializationSeed: seed, work: freshWork(p, `work-2-${foreign.length}`) });
      const bodyLinks = toolchain.tools.calls('wasm-ld').filter(args => args.some(arg => /initializers-\d+\.map$/.test(arg)));
      assert.deepEqual(bodyLinks.map(args => args.some(isMember)).sort(), [false, true]);
    }
    assert.ok(touch);
  });

  test('a body probe whose member link imports more than recorded links in full', { skip: !posix }, async () => {
  // Init.Data's initializer (skipped) calls a host function: the probe of the skipped bodies imports it.
  const p = project({ runtime: { identity: specializedIdentity, dataInitializerCalls: ['js_registry_host'] } });
  const toolchain = nodeSdk(p.base);
  const seed = join(p.base, 'seed.json');
  await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
  const record = JSON.parse(readFileSync(seed, 'utf8'));
  assert.deepEqual(record.probes.reached.imports, ['env\0js_registry_host\0function']);
  // Unchanged: both body probes link with their members only, the imports as recorded.
  toolchain.tools.clear();
  await build(p, toolchain, { profile: 'dev', initializationSeed: seed, work: freshWork(p, 'work-same') });
  const same = toolchain.tools.calls('wasm-ld').filter(args => args.some(arg => /initializers-\d+\.map$/.test(arg)) && !args.includes(join(p.base, 'work-same', 'module-0.o')));
  assert.deepEqual(same.map(args => args.some(isMember)), [true, true]);
  writeFileSync(seed, JSON.stringify({ ...record, probes: { ...record.probes, reached: { ...record.probes.reached, imports: [] } } }));
  toolchain.tools.clear();
  await build(p, toolchain, { profile: 'dev', initializationSeed: seed, work: freshWork(p, 'work-2') });
  const reached = toolchain.tools.calls('wasm-ld').filter(args => args.some(arg => /initializers-\d+\.map$/.test(arg)) && !args.includes(join(p.base, 'work-2', 'module-0.o')));
  assert.deepEqual(reached.map(args => args.some(isMember)), [true, true, false], 'baseline and reached by members, then reached in full');
  assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).probes.reached.imports, ['env\0js_registry_host\0function']);
});

test('a dev fast link whose imports are unchanged is accepted', { skip: !posix }, async () => {
    const p = project({ main: mainModule({ calls: 'js_host_call();' }), runtime: { identity: specializedIdentity } });
    const toolchain = nodeSdk(p.base);
    const seed = join(p.base, 'seed.json');
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).importsLinked, ['env\0js_host_call\0function']);
    toolchain.tools.clear();
    await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
    assert.deepEqual(toolchain.tools.calls('wasm-ld').map(args => args.some(isMember)), [true]);
    // A release build with this seed plans from the roots.
    toolchain.tools.clear();
    await build(p, toolchain, { initializationSeed: seed });
    assert.ok(!toolchain.tools.calls('wasm-ld').at(-1).includes(join(p.work, 'reachability.o')));
    assert.ok(!toolchain.tools.calls('wasm-ld').some(args => args.some(isMember)));
  });

  test('package C code: keyed by its options; a failure without diagnostics, and long diagnostics, are reported briefly', { skip: !posix }, async () => {
    const p = project({ runtime: { identity: specializedIdentity } });
    const native = join(p.base, 'c', 'pkg.c'), broken = join(p.base, 'c', 'broken.c');
    writeFileSync(native, 'int pkg_add(int x) {\n  return x + 1;\n}\n');
    writeFileSync(broken, `#error ${'x'.repeat(300)}\n`);
    const toolchain = nodeSdk(p.base);
    const objectCache = join(p.base, 'objects');
    const item = { identity: 'pkg-1', extraArgs: ['-DPKG=1'], source: native, cwd: p.base, package: 'pkg' };
    await build(p, toolchain, { objectCache, nativeCompilations: [item], initialization: 'all' });
    toolchain.tools.clear();
    await build(p, toolchain, { objectCache, nativeCompilations: [{ ...item, extraArgs: ['-DPKG=2'] }], initialization: 'all', work: freshWork(p, 'work-2') });
    assert.deepEqual(toolchain.tools.calls('clang').map(source).filter(file => file === native), [native], 'other options compile again');
    const q = project({ main: mainModule({ calls: 'broken();' }), runtime: { identity: specializedIdentity } });
    const reason = async verbose => (await build(q, nodeSdk(q.base), { nativeCompilations: [{ ...item, source: broken, package: 'broken' }], initialization: 'all', verbose,
      work: freshWork(q, `work-${verbose}`) }).catch(error => error)).libraries?.[0]?.reason;
    const quiet = await reason(false);
    assert.equal(quiet, `does not compile for WebAssembly: ${`${broken}:1:2: error: ${'x'.repeat(300)}`.slice(0, 200)}`);
    assert.equal(await reason(true), 'does not compile for WebAssembly', 'the diagnostics went to the terminal');
  });
});

test('Node driver failures: diagnostics are captured unless verbose; a probe\'s undefined symbols name libraries; rejections are explained', { skip: !posix }, async () => {
  const captured = async (run) => {
    const write = process.stderr.write, output = [];
    process.stderr.write = (chunk, ...rest) => { output.push(String(chunk)); return true; };
    try { return { result: await run().catch(error => error), output: output.join('') }; } finally { process.stderr.write = write; }
  };
  // A module that does not compile.
  const p = project({ helper: '#error stand-in diagnostic for Helper\n', runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  toolchain.sdk.env.LASM_STAND_IN_CHATTY = '1';
  const quiet = await build(p, toolchain, { initialization: 'all' }).catch(error => error);
  delete toolchain.sdk.env.LASM_STAND_IN_CHATTY;
  assert.equal(quiet.status, 1);
  assert.match(String(quiet.stderr), /Helper\.c:1:2: error: stand-in diagnostic for Helper/);
  const loud = await captured(() => build(p, toolchain, { initialization: 'all', verbose: true }));
  assert.equal(loud.result.status, 1);
  assert.equal(loud.result.stderr, null);
  // The delivered link fails.
  const q = project({ runtime: { identity: specializedIdentity } });
  const linker = nodeSdk(q.base);
  linker.tools.fail('wasm-ld', 'wasm-ld: error: stand-in final link failure\n', { when: 'final.map' });
  const failed = await build(q, linker, { initialization: 'all' }).catch(error => error);
  assert.match(String(failed.stderr), /stand-in final link failure/);
  assert.equal((await build(q, linker, { initialization: 'all', verbose: true, work: freshWork(q, 'work-2') }).catch(error => error)).stderr, null);
  // A verbose build shows the probe links' diagnostics.
  const r = project({ runtime: { identity: specializedIdentity } });
  const chatty = nodeSdk(r.base);
  chatty.sdk.env.LASM_STAND_IN_CHATTY = '1';
  const shown = await captured(() => build(r, chatty, { initialization: 'all', verbose: true }));
  assert.equal(shown.result.mode, 'static');
  assert.match(shown.output, /wasm-ld: warning: stand-in diagnostic/);
  // A probe link that needs a library Lasm cannot link.
  const s = project({ main: mainModule({ calls: 'sqlite3_open(0);' }), runtime: { identity: specializedIdentity } });
  await assert.rejects(build(s, nodeSdk(s.base), { initialization: 'all' }), error => error.code === 'ERR_LASM_NATIVE_LIBRARY' && /sqlite3_open/.test(error.message));
  // A rejected program is explained by a --why-extract probe link, with runtime archives whose listings are large.
  const extraInit = Array.from({ length: 60 }, (_, index) => [`Extra${index}.o`, { functions: [{ name: `l_Init_extra_function_with_a_long_name_${index}` }] }]);
  const t = project({ main: mainModule({ calls: 'dlopen(0);' }), runtime: { identity: specializedIdentity, extraInit } });
  await assert.rejects(build(t, nodeSdk(t.base), { initialization: 'all' }),
    error => error.code === 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' && /Required by: your code → dlopen → lean_read_module_data → module/.test(error.message));
});

test('the debug switches plan from the roots and record no members; the unoptimized test build compiles at -O0', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  const objectCache = join(p.base, 'objects'), sharedCache = join(p.base, 'shared');
  const seed = join(p.base, 'seed.json');
  const valid = JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: ['initialize_Main', 'initialize_Helper', 'initialize_Init'] });
  const seededLink = async (text, env = {}) => {
    writeFileSync(seed, text);
    toolchain.tools.clear();
    await withEnv(env, () => build(p, toolchain, { profile: 'dev', initializationSeed: seed, objectCache, sharedCache, work: freshWork(p, `work-${Math.random()}`) }));
    return toolchain.tools.calls('wasm-ld').at(-1).some(arg => arg.endsWith('reachability.o'));
  };
  await build(p, toolchain, { profile: 'dev', objectCache, sharedCache });
  for (const variable of ['LASM_LINK_DEBUG', 'LASM_TEST_UNOPTIMIZED']) {
    assert.equal(await seededLink(valid, { [variable]: '1' }), false, variable);
    const record = JSON.parse(readFileSync(seed, 'utf8'));
    assert.equal(record.liveMembers, undefined, `${variable}: no member record from a debug link`);
    assert.ok(!toolchain.tools.calls('wasm-ld').at(-1).some(isMember));
  }
  // The unoptimized test build compiles the program at -O0.
  const q = project({ runtime: { identity: specializedIdentity } });
  const unoptimized = nodeSdk(q.base);
  await withEnv({ LASM_TEST_UNOPTIMIZED: '1' }, () => build(q, unoptimized, { initialization: 'all' }));
  assert.deepEqual(unoptimized.tools.calls('clang').slice(0, 2).map(optimization), ['-O0', '-O0']);
});

test('a seed without member or probe records (a debug build\'s) plans with its kept initializers', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  const seed = join(p.base, 'seed.json');
  writeFileSync(seed, JSON.stringify({ schema: 1, runtime: specializedIdentity, keep: ['initialize_Main', 'initialize_Helper', 'initialize_Init'], importsLinked: [] }));
  const requirements = await build(p, toolchain, { profile: 'dev', initializationSeed: seed });
  assert.deepEqual(requirements.initializationPlan, { units: 4, kept: 3, skipped: 1 });
  const links = toolchain.tools.calls('wasm-ld');
  assert.ok(!links.some(args => args.some(isMember)), 'no member link without a member record');
  assert.ok(links.at(-1).includes(join(p.work, 'reachability.o')), 'the planning round is the delivered link');
  const record = JSON.parse(readFileSync(seed, 'utf8'));
  assert.deepEqual(Object.keys(record.probes).sort(), ['baseline', 'reached']);
  assert.ok(record.liveMembers);
});

test('builds without a plan write no seed; Lasm\'s package stub is shared between projects', { skip: !posix }, async () => {
  const p = project({ main: mainModule({ calls: 'pkg_add(1);' }), runtime: { identity: specializedIdentity } });
  const native = join(p.base, 'c', 'pkg.c');
  writeFileSync(native, 'int pkg_add(int x) {\n  return x + 1;\n}\n');
  const seed = join(p.base, 'seed.json'), sharedCache = join(p.base, 'shared');
  const nativeCompilations = [{ identity: 'pkg-1', extraArgs: [], source: native, cwd: p.base, package: 'pkg' }];
  await build(p, nodeSdk(p.base), { initialization: 'all', initializationSeed: seed, nativeCompilations, sharedCache, objectCache: join(p.base, 'objects') });
  assert.equal(existsSync(seed), false);
  const q = project({ main: mainModule({ calls: 'pkg_add(2);' }), runtime: { identity: specializedIdentity } });
  writeFileSync(join(q.base, 'c', 'pkg.c'), readFileSync(native));
  const toolchain = nodeSdk(q.base);
  await build(q, toolchain, { initialization: 'all', nativeCompilations: [{ ...nativeCompilations[0], source: join(q.base, 'c', 'pkg.c') }], sharedCache, objectCache: join(q.base, 'objects') });
  const compiled = toolchain.tools.calls('clang').map(source);
  assert.ok(compiled.includes(join(q.base, 'c', 'pkg.c')));
  assert.ok(!compiled.includes(join(q.work, 'package-dl.c')), 'the package stub is reused from the shared store');
  assert.ok(readResponse(join(q.work, 'link.rsp')).includes(join(q.work, 'package-dl.o')));
});

test('probe records reused from the shared store plan as the links did', { skip: !posix }, async () => {
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  const sharedCache = join(p.base, 'shared');
  const first = await build(p, toolchain, { sharedCache });
  const plan = readFileSync(join(p.work, 'initialization-plan.json'), 'utf8');
  toolchain.tools.clear();
  const work = freshWork(p, 'work-2');
  const second = await build(p, toolchain, { sharedCache, work });
  assert.deepEqual(second, first);
  assert.equal(readFileSync(join(work, 'initialization-plan.json'), 'utf8'), plan);
  assert.deepEqual(toolchain.tools.calls('wasm-ld').map(args => args.some(arg => arg.endsWith('final.map'))), [true], 'only the delivered link runs');
  assert.deepEqual(readResponse(join(work, 'link.rsp')).map(arg => arg.replaceAll(work, p.work)), readResponse(join(p.work, 'link.rsp')));
});

test('probe links: their output reaches the terminal only when verbose; a failure carries it', { skip: !posix }, async () => {
  const captured = async run => {
    // The stand-ins' lines are kept from the terminal; the test runner's own messages pass.
    const out = process.stdout.write, err = process.stderr.write, output = [];
    const capture = write => function (chunk, ...rest) { if (!/stand-in/.test(String(chunk))) return write.call(this, chunk, ...rest); output.push(String(chunk)); return true; };
    process.stdout.write = capture(out);
    process.stderr.write = capture(err);
    try { return { result: await run().catch(error => error), output: output.join('') }; } finally { process.stdout.write = out; process.stderr.write = err; }
  };
  const p = project({ runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  toolchain.sdk.env.LASM_STAND_IN_CHATTY = '1';
  const quiet = await captured(() => build(p, toolchain, { verbose: false }));
  assert.equal(quiet.result.mode, 'static');
  assert.equal(quiet.output, '');
  const loud = await captured(() => build(p, toolchain, { verbose: true, work: freshWork(p, 'work-loud') }));
  assert.equal(loud.result.mode, 'static');
  assert.match(loud.output, /wasm-ld: stand-in note on stdout/);
  assert.match(loud.output, /wasm-ld: warning: stand-in diagnostic/);
  // A failing probe link: its diagnostics are on the error.
  const q = project({ runtime: { identity: specializedIdentity } });
  const failing = nodeSdk(q.base);
  failing.tools.fail('wasm-ld', 'wasm-ld: error: stand-in probe failure\n', { when: 'initializers-0.map' });
  const error = await build(q, failing).catch(error => error);
  assert.match(String(error.stderr), /stand-in probe failure/);
  assert.equal(typeof error.stdout, 'string');
  // A failing planning compile (the probes' wrappers compile concurrently): its diagnostics are on the error.
  const r = project({ runtime: { identity: specializedIdentity } });
  const compiler = nodeSdk(r.base);
  compiler.tools.fail('clang', 'clang: error: stand-in wrapper failure\n', { when: 'initializers-probe-0-' });
  const compileError = await build(r, compiler).catch(error => error);
  assert.match(String(compileError.stderr), /stand-in wrapper failure/);
});

test('full (not link-only) Node-driver builds: the delivered link is optimized in release builds only; a dev build records the finished program\'s imports', { skip: !posix }, async () => {
  // A fresh instance of the link whose delivered links finish (the stand-in driver writes the glue).
  const { linkApplication: linkFinished } = await finishLinks(new URL('../src/application-link.mjs', import.meta.url).href);
  const p = project({ main: mainModule({ calls: 'js_host_call();' }), runtime: { identity: specializedIdentity } });
  const toolchain = nodeSdk(p.base);
  const seed = join(p.base, 'seed.json');
  const full = options => linkFinished({ sources: p.sources, sdk: toolchain.sdk, runtime: p.runtime, work: freshWork(p, `work-${Math.random()}`), dist: p.dist,
    leanVersion, memoryMode: 1, verbose: false, linkDriver: 'node', ...options });
  const delivered = () => finishedLinks.filter(item => !item.mapOnly);
  finishedLinks.length = 0;
  assert.equal((await full({})).mode, 'static');
  assert.deepEqual(delivered().map(item => [item.mode, item.optimize]), [['final', true]]);
  // The tools' diagnostics are captured, or shown with --verbose; the probes' as well.
  assert.ok(finishedLinks.every(item => JSON.stringify(item.stdio) === JSON.stringify(['ignore', 'pipe', 'pipe'])));
  finishedLinks.length = 0;
  await full({ verbose: true });
  assert.ok(finishedLinks.length > 1 && finishedLinks.every(item => JSON.stringify(item.stdio) === JSON.stringify(['ignore', 'inherit', 'inherit'])));
  assert.ok(readFileSync(join(p.dist, 'program.cjs'), 'utf8').includes('globalThis.process?.env?.LASM_THREAD_POOL'));
  // A dev build: the delivered link without Binaryen's optimization; the seed records the finished program's imports.
  finishedLinks.length = 0;
  await full({ profile: 'dev', initializationSeed: seed });
  assert.deepEqual(delivered().map(item => [item.mode, item.optimize]), [['final', false]]);
  const record = JSON.parse(readFileSync(seed, 'utf8'));
  assert.deepEqual(record.imports, ['env\0js_host_call\0function']);
  assert.equal(record.importsLinked, undefined);
  // A link-only build of the same members keeps the full build's record beside its own, and the full build keeps the link-only one.
  await build(p, toolchain, { profile: 'dev', initializationSeed: seed, work: freshWork(p, 'work-link-only') });
  assert.deepEqual(JSON.parse(readFileSync(seed, 'utf8')).imports, ['env\0js_host_call\0function']);
  finishedLinks.length = 0;
  writeFileSync(seed, JSON.stringify({ ...JSON.parse(readFileSync(seed, 'utf8')), imports: undefined }));
  await full({ profile: 'dev', initializationSeed: seed });
  const again = JSON.parse(readFileSync(seed, 'utf8'));
  assert.deepEqual(again.importsLinked, ['env\0js_host_call\0function']);
  assert.deepEqual(again.imports, ['env\0js_host_call\0function']);
  // The next full dev build links the recorded members only, its delivered link included.
  finishedLinks.length = 0;
  toolchain.tools.clear();
  await full({ profile: 'dev', initializationSeed: seed });
  const links = toolchain.tools.calls('wasm-ld');
  assert.ok(links.every(args => args.some(isMember)));
  assert.equal(links.filter(args => args.some(arg => arg.endsWith('final.map'))).length, 1);
});

test('the delivered link is checked as well: a program it finds reaching runtime evaluation is rejected', { skip: !posix }, async () => {
  const { linkApplication: linkFinished } = await finishLinks(new URL('../src/application-link.mjs', import.meta.url).href);
  // The map of a program that loads plugins (its requirements check rejected it).
  const t = project({ main: mainModule({ calls: 'dlopen(0);' }), runtime: { identity: specializedIdentity } });
  await assert.rejects(build(t, nodeSdk(t.base), { initialization: 'all' }), { code: 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' });
  const rejectedMap = join(t.work, 'reachability.map');
  // A delivered link that reaches more than its check did (its map is that program's).
  const p = project({ runtime: { identity: specializedIdentity } });
  linkHooks.after = options => copyFileSync(rejectedMap, options.args.find(arg => arg.startsWith('-Wl,-Map=')).slice('-Wl,-Map='.length));
  try {
    await assert.rejects(linkFinished({ sources: p.sources, sdk: nodeSdk(p.base).sdk, runtime: p.runtime, work: p.work, dist: p.dist, leanVersion,
      memoryMode: 1, verbose: false, linkDriver: 'node', initialization: 'all' }), { code: 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' });
  } finally { linkHooks.after = undefined; }
});

test('a compiler with many warnings: the build succeeds and does not show them', { skip: !posix }, async () => {
  const p = project({ main: mainModule({ calls: 'pkg_add(1);' }), runtime: { identity: specializedIdentity } });
  const native = join(p.base, 'c', 'pkg.c');
  writeFileSync(native, 'int pkg_add(int x) {\n  return x + 1;\n}\n');
  const toolchain = nodeSdk(p.base);
  toolchain.sdk.env.LASM_STAND_IN_WARNINGS = '1';
  const requirements = await build(p, toolchain, { nativeCompilations: [{ identity: 'pkg-1', extraArgs: [], source: native, cwd: p.base, package: 'pkg' }] });
  assert.equal(requirements.mode, 'static');
  assert.deepEqual(requirements.initializationPlan, { units: 4, kept: 3, skipped: 1 });
  assert.ok(toolchain.tools.calls('clang').some(args => args.includes(native)));
});
