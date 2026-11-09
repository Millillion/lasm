// `lasm build`'s driver (src/application-build.mjs) in-process: its
// collaborators that need the managed Lean, the runtime bundle or the link
// toolchain are replaced through module hooks by stand-ins that record their
// calls; the build lock, cache lease, npm closure, output delivery and build
// records are the real ones. The stand-ins default to the real exports.
import test from 'node:test';
import assert from 'node:assert/strict';
import { registerHooks } from 'node:module';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, realpathSync, renameSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join, relative } from 'node:path';
import { pathToFileURL } from 'node:url';
import { createHash } from 'node:crypto';
import { linkToolchainCatalog } from '../src/managed-link-toolchain.mjs';
import { toolchainCatalog } from '../src/managed-lean.mjs';
import { applicationPolicy } from '../src/application-policy.mjs';
import { withApplicationLock } from '../src/application-lock.mjs';

const build = new URL('../src/application-build.mjs', import.meta.url).href;
const stubbed = ['managed-lean.mjs', 'managed-link-toolchain.mjs', 'system-git.mjs', 'application-runtime.mjs', 'application-sources.mjs',
  'lasm-library.mjs', 'application-binding-check.mjs', 'application-link.mjs', 'application-output.mjs', 'notices.mjs', 'application-files.mjs', 'managed-sdk.mjs'];
const stubDirectory = mkdtempSync(join(tmpdir(), 'lasm-build-stubs-'));
const stubs = globalThis.lasmBuildStubs = {};
const isClass = value => typeof value === 'function' && /^class\b/.test(Function.prototype.toString.call(value));
for (const name of stubbed) {
  const real = new URL(`../src/${name}`, import.meta.url).href;
  const exports = Object.entries(await import(real));
  writeFileSync(join(stubDirectory, name), [`import * as real from ${JSON.stringify(real)};`,
    ...exports.map(([key, value]) => typeof value === 'function' && !isClass(value)
      ? `export const ${key} = (...args) => (globalThis.lasmBuildStubs[${JSON.stringify(`${name}:${key}`)}] ?? real.${key})(...args);`
      : `export const ${key} = real.${key};`)].join('\n'));
}
registerHooks({
  resolve(specifier, context, next) {
    if (context.parentURL === build && specifier.startsWith('./') && stubbed.includes(specifier.slice(2)))
      return { url: pathToFileURL(join(stubDirectory, specifier.slice(2))).href, shortCircuit: true };
    return next(specifier, context);
  },
});
const { buildApplication } = await import(build);
test.after(() => rmSync(stubDirectory, { recursive: true, force: true }));

const staticRequirements = { mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false };
const put = (file, text = '') => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); return file; };
const sha = text => createHash('sha256').update(text).digest('hex');

/** A project directory, a cache, a runtime and the default stand-ins; `calls` records what they were asked. */
function setup(t, { project = false } = {}) {
  const root = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-build-')));
  t.after(() => { rmSync(root, { recursive: true, force: true }); for (const key of Object.keys(stubs)) delete stubs[key]; });
  const directory = join(root, 'app'), cache = join(root, 'cache'), runtime = join(root, 'runtime');
  if (project) put(join(directory, 'lakefile.toml'), 'name = "app"');
  const source = put(join(directory, 'Main.lean'), 'def main : IO Unit := pure ()');
  put(join(runtime, 'THIRD_PARTY_NOTICES.txt'), 'runtime notices');
  const calls = [];
  const lean = { version: '4.35.0', commit: toolchainCatalog.lean['4.35.0'].commit, identity: 'lean-identity', prefix: join(root, 'lean') };
  const record = (name, value) => (...args) => { calls.push([name, ...args]); return typeof value === 'function' ? value(...args) : value; };
  Object.assign(stubs, {
    'managed-lean.mjs:selectLeanVersion': record('selectLeanVersion', async () => ({ version: '4.35.0' })),
    'managed-lean.mjs:provisionLean': record('provisionLean', async (_, options) => ({ ...lean, ...(options.native ? { cCompiler: {} } : {}) })),
    'managed-link-toolchain.mjs:provisionLinkToolchain': record('provisionLinkToolchain', async () => ({ identity: 'toolchain-identity', toolchain: { version: linkToolchainCatalog.version } })),
    'system-git.mjs:checkSystemGit': record('checkSystemGit'),
    'application-runtime.mjs:applicationRuntime': record('applicationRuntime', async () => ({ directory: runtime, identity: 'runtime-identity',
      manifest: { name: 'rt', emscripten: linkToolchainCatalog.version } })),
    'application-sources.mjs:applicationSources': record('applicationSources', (file, _lean, work, options) => {
      options.afterImports?.();
      const c = put(join(work, 'Main.c'), stubs.programC ?? 'int main(int argc, char ** argv) {}\n');
      return { project: project ? directory : null, sources: [c], inputs: [{ module: 'Main', source: file }], env: { LEAN: 'env' }, metadataRoots: [],
        oleans: () => [join(work, 'Main.olean')], ...(stubs.generated ?? {}) };
    }),
    'application-link.mjs:linkApplication': record('linkApplication', async options => {
      put(join(options.dist, 'program.cjs'), 'program'); put(join(options.dist, 'program.wasm'), stubs.wasm ?? 'wasm');
      return stubs.linkRequirements ?? staticRequirements;
    }),
    'application-output.mjs:copyApplicationHost': record('copyApplicationHost', dist => put(join(dist, 'host', 'node-host.mjs'), 'host')),
    'notices.mjs:applicationNotices': (manifest, text) => `notices of ${manifest.name}\n${text}`,
    'notices.mjs:dependencyNotices': licenses => licenses.map(item => `\n${item.name}`).join(''),
    'notices.mjs:lakeDependencyLicenses': record('lakeDependencyLicenses', []),
    // A checkout without native helpers (CI's mutation job) has neither src/native nor .cache/native-host.
    'application-files.mjs:fileInventory': async (directory, ...rest) => {
      const { fileInventory } = await import(new URL('../src/application-files.mjs', import.meta.url).href);
      return directory.endsWith(join('.cache', 'native-host')) && !existsSync(directory) ? {} : fileInventory(directory, ...rest);
    },
  });
  const run = (options = {}) => buildApplication(source, { cache, runtimeDirectory: runtime, log: line => calls.push(['log', line]), ...options });
  return { root, directory, cache, runtime, source, calls, lean, run, named: name => calls.filter(call => call[0] === name) };
}

test('a first build: the tools in order, the program linked, packaged and recorded; the same build again is reused', async t => {
  const { directory, cache, runtime, source, calls, named, run } = setup(t);
  const stages = [];
  const result = await run({ progress: ({ stage }) => stages.push(stage) });
  assert.equal(result.cacheHit, false);
  const work = join(directory, '.lake/lasm/applications', sha(source).slice(0, 16));
  assert.equal(result.cached, join(work, result.signature, 'dist'));
  assert.equal(result.output, result.cached);
  assert.match(result.signature, /^[0-9a-f]{64}$/);
  assert.deepEqual(stages, ['Checking Lean 4.35.0 runtime', 'Checking Lean sources and imports', 'Checking application inputs and cached build',
    'Packaging the application and runtime support', 'Verifying and writing application output']);
  assert.deepEqual(calls.map(call => call[0]).filter(name => name !== 'log'), ['selectLeanVersion', 'applicationRuntime', 'provisionLean', 'applicationSources',
    'provisionLinkToolchain', 'linkApplication', 'copyApplicationHost']);
  const [, runtimeLean, runtimeOptions] = named('applicationRuntime')[0];
  assert.deepEqual(runtimeLean, { version: '4.35.0', commit: toolchainCatalog.lean['4.35.0'].commit });
  assert.equal(runtimeOptions.directory, runtime);
  assert.equal(runtimeOptions.stamps, join(cache, 'verified'));
  const [, , , sourcesWork, sourcesOptions] = named('applicationSources')[0];
  assert.equal(sourcesWork, work);
  assert.equal(typeof sourcesOptions.log, 'function');
  assert.equal(sourcesOptions.afterImports, undefined);
  const link = named('linkApplication')[0][1];
  assert.deepEqual(link.sources, [join(work, 'Main.c')]);
  assert.equal(link.leanVersion, '4.35.0');
  assert.equal(link.memoryMode, 1);
  assert.equal(link.linkDriver, 'node');
  assert.equal(link.profile, 'release');
  assert.equal(link.linkOnly, false);
  assert.equal(link.objectCache, join(work, 'objects'));
  assert.equal(link.sharedCache, join(cache, 'objects'));
  assert.equal(link.analysisCache, join(cache, 'analysis'));
  assert.equal(link.initializationSeed, join(work, 'initialization-seed.json'));
  assert.equal(link.dist, join(link.work, 'dist'));
  assert.match(relative(work, link.work), /^\.build-[0-9a-f-]{36}$/);
  assert.deepEqual(link.nativeCompilations, []);
  assert.deepEqual(link.nativeUnavailable, []);
  assert.equal(link.verbose, false);
  assert.equal(existsSync(link.work), false, 'the staging directory is removed');
  const dist = result.cached, read = name => readFileSync(join(dist, name), 'utf8');
  assert.deepEqual(readdirSync(dist).sort(), ['.lasm-application.json', 'THIRD_PARTY_NOTICES.txt', 'build-info.json', 'host', 'main.mjs', 'package.json', 'program.cjs', 'program.wasm']);
  assert.equal(read('THIRD_PARTY_NOTICES.txt'), 'notices of rt\nruntime notices');
  const info = JSON.parse(read('build-info.json'));
  assert.equal(read('build-info.json'), JSON.stringify(info, null, 2) + '\n');
  assert.deepEqual(info.modules, [{ module: 'Main', sourceSha256: sha(readFileSync(source)), cSha256: sha('int main(int argc, char ** argv) {}\n') }]);
  for (const [key, value] of Object.entries({ schema: 1, profile: 'release', lean: '4.35.0', leanCommit: toolchainCatalog.lean['4.35.0'].commit, nativeLeanIdentity: 'lean-identity',
    emscripten: linkToolchainCatalog.version, linkDriver: 'node', linkToolchainIdentity: sha(JSON.stringify(linkToolchainCatalog)), runtimeIdentity: 'runtime-identity',
    target: 'node', host: `${process.platform}-${process.arch}`, minimumNode: '24.0.0', minimumGlibc: '2.28', memoryMode: 1, signature: result.signature,
    linkToolchain: { identity: 'toolchain-identity', version: linkToolchainCatalog.version } }))
    assert.deepEqual(info[key], value, key);
  assert.deepEqual(info.applicationPolicy, applicationPolicy);
  assert.deepEqual(info.linkRequirements, staticRequirements);
  assert.deepEqual(info.nativeTargets, [...new Set(['linux-x64', 'linux-arm64', `${process.platform}-${process.arch}`])]);
  assert.match(info.buildDriverIdentity, /^[0-9a-f]{64}$/);
  for (const key of ['linkOnly', 'testUnoptimized', 'nativeLeanTier', 'dependencyLicenses', 'nativeObjects', 'nativeUnavailable', 'lasmJs', 'nodeModules', 'jsBindings', 'sdkIdentity'])
    assert.equal(key in info, false, key);
  assert.equal(result.linkRequirements.mode, 'static');
  const receipt = JSON.parse(read('.lasm-application.json'));
  assert.equal(receipt.signature, result.signature);
  assert.deepEqual(Object.keys(receipt.files).sort(), ['THIRD_PARTY_NOTICES.txt', 'build-info.json', 'host/node-host.mjs', 'main.mjs', 'package.json', 'program.cjs', 'program.wasm']);
  // The same build again: no tool runs, the verified output is delivered.
  calls.length = 0; stages.length = 0;
  const again = await run({ progress: ({ stage }) => stages.push(stage) });
  assert.equal(again.cacheHit, true);
  assert.equal(again.signature, result.signature);
  assert.deepEqual(again.linkRequirements, staticRequirements);
  assert.deepEqual(stages.slice(-2), ['Checking application inputs and cached build', 'Reusing verified application build']);
  assert.deepEqual(named('linkApplication'), []);
  assert.deepEqual(named('provisionLinkToolchain'), []);
  // rebuild links again into the same cache entry.
  calls.length = 0;
  const rebuilt = await run({ rebuild: true });
  assert.equal(rebuilt.cacheHit, false);
  assert.equal(rebuilt.cached, result.cached);
  assert.equal(named('linkApplication').length, 1);
  // A changed source C is another build.
  stubs.programC = 'int main(int argc, char ** argv) { return 1; }\n';
  const changed = await run();
  assert.notEqual(changed.signature, result.signature);
  assert.equal(changed.cacheHit, false);
});

test('without progress the build logs what it prepares and builds; verbose passes the log to the sources', async t => {
  const { source, named, run } = setup(t);
  await run({ verbose: true });
  const logs = named('log').map(call => call[1]);
  assert.deepEqual(logs, ['Preparing Lean 4.35.0 for Node…', `Building ${relative(process.cwd(), source)} for Node…`]);
  const options = named('applicationSources')[0][4];
  options.log('to the build log');
  assert.equal(named('log').at(-1)[1], 'to the build log');
  assert.equal(named('linkApplication')[0][1].verbose, true);
});

test('an output directory receives the build; outputs inside the sources or the cache are refused', async t => {
  const { root, directory, run } = setup(t);
  const output = join(root, 'dist');
  const result = await run({ output });
  assert.equal(result.output, output);
  assert.equal(readFileSync(join(output, 'program.wasm'), 'utf8'), 'wasm');
  assert.deepEqual(readFileSync(join(output, 'build-info.json')), readFileSync(join(result.cached, 'build-info.json')));
  for (const bad of [directory, join(directory, '.lake/lasm/applications')])
    await assert.rejects(run({ output: bad }), { message: 'Output directory must not contain application sources or its build cache' });
  const reused = await run({ output: join(root, 'second') });
  assert.equal(reused.cacheHit, true);
  assert.equal(readFileSync(join(root, 'second', 'program.cjs'), 'utf8'), 'program');
});

test('sources, profiles and link-only builds are checked before any tool runs', async t => {
  const { root, calls, run, source } = setup(t);
  const { buildApplication: direct } = await import(build);
  await assert.rejects(direct(join(root, 'Main.c')), { message: `Expected an existing Lean source: ${join(root, 'Main.c')}` });
  mkdirSync(join(root, 'Dir.lean'));
  await assert.rejects(direct(join(root, 'Dir.lean')), { message: `Expected an existing Lean source: ${join(root, 'Dir.lean')}` });
  await assert.rejects(direct(join(root, 'Absent.lean')), { code: 'ENOENT' });
  await assert.rejects(run({ profile: 'debug' }), { message: 'Unknown build profile "debug": use release or dev' });
  for (const options of [{ linkOnly: true }, { linkOnly: true, profile: 'dev' }, { linkOnly: true, keepLinkWork: true }])
    await assert.rejects(run(options), { message: 'linkOnly applies to dev builds that keep their link work' });
  assert.deepEqual(calls, []);
  stubs['application-runtime.mjs:applicationRuntime'] = async () => ({ directory: root, identity: 'r', manifest: { emscripten: 'other' } });
  await assert.rejects(run(), { message: 'The managed compiler tools and application runtime do not match' });
  assert.ok(source);
});

test('dev, link-only and kept link work: separate cache identities, the work kept and named', async t => {
  const { run, named } = setup(t);
  const release = await run();
  const dev = await run({ profile: 'dev' });
  assert.notEqual(dev.signature, release.signature);
  assert.equal(dev.profile, 'dev');
  const kept = await run({ profile: 'dev', keepLinkWork: true, linkOnly: true });
  assert.notEqual(kept.signature, dev.signature);
  assert.equal(kept.linkOnly, true);
  assert.equal(kept.cacheHit, false);
  assert.ok(existsSync(kept.linkWork), 'kept for the edge relink');
  assert.equal(named('linkApplication').at(-1)[1].linkOnly, true);
  assert.equal(existsSync(join(kept.cached, 'main.mjs')), false, 'a link-only build has no entry point or host');
  assert.equal(existsSync(join(kept.cached, 'host')), false);
  // keepLinkWork: true always links, even when cached.
  const again = await run({ profile: 'dev', keepLinkWork: true, linkOnly: true });
  assert.equal(again.cacheHit, false);
  assert.equal(again.signature, kept.signature);
  // 'if-built' keeps the work only of a build that links.
  const ifBuilt = await run({ profile: 'dev', keepLinkWork: 'if-built' });
  assert.equal(ifBuilt.cacheHit, true);
  assert.equal(ifBuilt.linkWork, undefined);
});

test('LASM_TEST_UNOPTIMIZED and LASM_KEEP_LINK_WORK', async t => {
  const { run, named } = setup(t);
  const optimized = await run();
  process.env.LASM_TEST_UNOPTIMIZED = '1';
  process.env.LASM_KEEP_LINK_WORK = '1';
  try {
    const unoptimized = await run();
    assert.notEqual(unoptimized.signature, optimized.signature);
    assert.equal(unoptimized.testUnoptimized, true);
    assert.ok(existsSync(named('linkApplication').at(-1)[1].work), 'maintainers keep the link work');
  } finally { delete process.env.LASM_TEST_UNOPTIMIZED; delete process.env.LASM_KEEP_LINK_WORK; }
});

test('a failed link removes its staging, keeps the delivered build and reports a broken binding first', async t => {
  const { run, named } = setup(t);
  const first = await run();
  stubs.programC = 'int main(int argc, char ** argv) { return 2; }\n';
  stubs['application-link.mjs:linkApplication'] = async options => { stubs.failedWork = options.work; throw new Error('wasm-ld: undefined symbol: x'); };
  await assert.rejects(run(), { message: 'wasm-ld: undefined symbol: x' });
  assert.equal(existsSync(stubs.failedWork), false);
  assert.equal(readFileSync(join(first.cached, 'program.wasm'), 'utf8'), 'wasm');
  process.env.LASM_KEEP_LINK_WORK = '1';
  try { await assert.rejects(run(), /undefined symbol/); } finally { delete process.env.LASM_KEEP_LINK_WORK; }
  assert.equal(existsSync(stubs.failedWork), true, 'kept for maintainers');
  // A program with Lasm.JS whose binding check fails: the binding error wins.
  stubs.programC = 'int main(int argc, char ** argv) { initialize_Lasm_JS(builtin); }\n';
  stubs['lasm-library.mjs:librarySources'] = () => ({ sources: [], inputs: [], modules: [], oleans: [] });
  stubs['application-binding-check.mjs:readBindingsAsync'] = async () => [{ name: 'B' }];
  stubs['application-binding-check.mjs:checkBindingsAsync'] = async () => [{ name: 'B', error: 'missing' }];
  await assert.rejects(run(), { code: 'ERR_LASM_JS_BINDING' });
  assert.ok(named('linkApplication').length >= 1);
});

test('Lasm.JS programs: the library is linked and the bindings are checked against the deployed packages', async t => {
  const { directory, root, run, named, lean } = setup(t);
  put(join(directory, 'package.json'), JSON.stringify({ dependencies: { left: '1' } }));
  put(join(directory, 'node_modules/left/package.json'), JSON.stringify({ name: 'left', version: '1.0.0' }));
  put(join(directory, 'node_modules/left/index.js'), 'module.exports = () => {};');
  stubs.programC = 'int main(int argc, char ** argv) { initialize_Lasm_JS(builtin); }\n';
  const library = put(join(root, 'lean/lib/lasm/c/Lasm/JS.c'), 'library C');
  stubs['lasm-library.mjs:librarySources'] = (...args) => { stubs.librarySourcesArgs = args; return {
    sources: [library], inputs: [{ module: '+Lasm.JS', source: put(join(root, 'lean/src/lean/Lasm/JS.lean'), 'library source') }], modules: ['Lasm.JS'], oleans: ['/lib.olean'] }; };
  const reads = [], checks = [];
  stubs['application-binding-check.mjs:readBindingsAsync'] = async (...args) => { reads.push(args); return [{ name: 'Main.left', module: 'left' }]; };
  stubs['application-binding-check.mjs:checkBindingsAsync'] = async (...args) => { checks.push(args); return [{ name: 'Main.left', module: 'left', warning: 'arity' }]; };
  const stages = [];
  const result = await run({ progress: ({ stage }) => stages.push(stage) });
  assert.deepEqual(stubs.librarySourcesArgs[0], { ...lean });
  assert.equal(result.lasmJs, true);
  assert.deepEqual(result.jsBindings, [{ name: 'Main.left', module: 'left', warning: 'arity' }]);
  assert.deepEqual(named('linkApplication')[0][1].sources.slice(-1), [library]);
  assert.deepEqual(result.modules.map(module => module.module), ['Main', '+Lasm.JS']);
  const [readLean, readEnv, oleans, readOptions] = reads[0];
  const work = dirname(dirname(result.cached));
  assert.equal(readLean.identity, 'lean-identity');
  assert.deepEqual(readEnv, { LEAN: 'env' });
  assert.deepEqual(oleans, [join(work, 'Main.olean'), '/lib.olean']);
  assert.deepEqual(readOptions, { cache: join(work, 'bindings') });
  assert.deepEqual(checks[0], [directory, [{ name: 'Main.left', module: 'left' }], { cache: join(work, 'bindings'), identity: result.nodeModules.identity }]);
  assert.ok(named('log').some(call => call[1] === 'Lasm.JS binding warning: Main.left: arity'));
  assert.deepEqual(result.nodeModules.packages, [{ path: 'node_modules/left', name: 'left', version: '1.0.0' }]);
  assert.equal(readFileSync(join(result.cached, 'node_modules/left/index.js'), 'utf8'), 'module.exports = () => {};');
  assert.ok(stages.includes('Checking Lasm.JS bindings') && stages.includes('Copying 1 npm packages'));
  // A cached build checks the bindings before reusing the output.
  stages.length = 0;
  const again = await run({ progress: ({ stage }) => stages.push(stage) });
  assert.equal(again.cacheHit, true);
  assert.deepEqual(stages.slice(-2), ['Checking Lasm.JS bindings', 'Reusing verified application build']);
  assert.equal(checks.length, 2);
  // Without npm packages the identity is 'none'.
  rmSync(join(directory, 'package.json'));
  await run();
  assert.equal(checks.at(-1)[2].identity, 'none');
});

test('Lake projects: system Git, dependency licences, the C tier and native objects', async t => {
  const { directory, root, run, named } = setup(t, { project: true });
  const licence = put(join(root, 'dep/LICENSE'), 'MIT licence text');
  stubs['notices.mjs:lakeDependencyLicenses'] = (...args) => { stubs.licenceArgs = args; return [{ name: 'dep', files: [{ name: 'LICENSE', path: licence, sha256: sha('MIT licence text') }] }]; };
  let first = true;
  stubs['application-sources.mjs:applicationSources'] = (file, lean, work, options) => {
    if (first) { first = false; return { needsCCompiler: true, native: [{ package: 'sqlite' }, { package: 'zlib' }] }; }
    const c = put(join(work, 'Main.c'), 'int main(int argc, char ** argv) {}\n');
    stubs.secondLean = lean; stubs.secondOptions = options;
    return { project: directory, sources: [c], inputs: [{ module: 'Main', source: file }], env: {}, metadataRoots: [], oleans: () => [],
      nativeLink: { libs: [{ name: 'pq', path: '/usr/lib/libpq.so' }], objs: [], args: [] } };
  };
  const stages = [];
  const result = await run({ progress: ({ stage }) => stages.push(stage) });
  assert.deepEqual(named('checkSystemGit').map(call => call[1]), [directory]);
  assert.equal(stages[1], 'Checking Lean sources and Lake dependencies');
  assert.equal(stages[2], 'Packages with C code (sqlite, zlib) need Lean\'s C compiler and headers');
  assert.equal(named('provisionLean').length, 2);
  assert.equal(named('provisionLean')[1][2].native, true);
  assert.deepEqual(stubs.secondLean.cCompiler, {});
  assert.equal(stubs.secondOptions.afterImports, undefined);
  assert.equal(stubs.licenceArgs[0], directory);
  assert.deepEqual(stubs.licenceArgs[1], [join(directory, 'Main.lean')]);
  assert.deepEqual(result.dependencyLicenses, [{ name: 'dep', files: [{ name: 'LICENSE', sha256: sha('MIT licence text') }] }]);
  assert.deepEqual(result.nativeUnavailable, [{ library: '/usr/lib/libpq.so', reason: 'shared library' }]);
  assert.deepEqual(named('linkApplication')[0][1].nativeUnavailable, result.nativeUnavailable);
  assert.equal(readFileSync(join(result.cached, 'licenses/dep/LICENSE'), 'utf8'), 'MIT licence text');
  assert.equal(readFileSync(join(result.cached, 'THIRD_PARTY_NOTICES.txt'), 'utf8'), 'notices of rt\nruntime notices\ndep');
});

test('releaseAfterImports lets another build of the project take the lock once Lake has built the imports', async t => {
  const { directory, run } = setup(t);
  let entered;
  stubs['application-sources.mjs:applicationSources'] = (file, lean, work, options) => {
    options.afterImports();
    entered = withApplicationLock(join(directory, '.lake/lasm/application-build.lock'), () => 'entered', { tryOnly: true });
    const c = put(join(work, 'Main.c'), 'int main(int argc, char ** argv) {}\n');
    return { project: null, sources: [c], inputs: [{ module: 'Main', source: file }], env: {}, metadataRoots: [], oleans: () => [] };
  };
  await run({ releaseAfterImports: true });
  assert.equal(await entered, 'entered');
});

test('a build waits for another build of the project, and says so', async t => {
  const { directory, run } = setup(t);
  let release;
  const holding = new Promise(resolve => { release = resolve; });
  let held;
  const holder = withApplicationLock(join(directory, '.lake/lasm/application-build.lock'), () => { held(); return holding; });
  await new Promise(resolve => { held = resolve; });
  const stages = [];
  const waiting = run({ progress: ({ stage }) => { stages.push(stage); if (stage === 'Waiting for another build in this project to finish') release(); } });
  await holder;
  await waiting;
  assert.equal(stages[0], 'Waiting for another build in this project to finish');
});

test('a concurrent build that finished first wins; this build\'s output is discarded', async t => {
  const { root, run } = setup(t);
  const first = await run();
  const saved = join(root, 'saved');
  renameSync(first.cached, saved);
  stubs.wasm = 'second build';
  const linkApplication = stubs['application-link.mjs:linkApplication'];
  stubs['application-link.mjs:linkApplication'] = async options => { const result = await linkApplication(options); renameSync(saved, first.cached); return result; };
  const second = await run();
  assert.equal(second.cacheHit, false);
  assert.equal(readFileSync(join(second.cached, 'program.wasm'), 'utf8'), 'wasm', 'the complete earlier output stays');
  // A damaged cached output is replaced by the new one.
  writeFileSync(join(second.cached, 'program.cjs'), 'damaged');
  stubs['application-link.mjs:linkApplication'] = linkApplication;
  const third = await run();
  assert.equal(third.cacheHit, false);
  assert.equal(readFileSync(join(third.cached, 'program.wasm'), 'utf8'), 'second build');
});

test('a maintainer link driver uses the full SDK and records its identity', async t => {
  const { run, named } = setup(t);
  const { sdkCatalog } = await import(new URL('../src/managed-sdk.mjs', import.meta.url).href);
  stubs['application-link.mjs:selectedLinkDriver'] = () => 'emcc';
  stubs['managed-sdk.mjs:provisionSdk'] = async () => ({ identity: 'sdk-identity', driverIdentity: 'driver-identity' });
  stubs['application-runtime.mjs:applicationRuntime'] = async (lean, options) => ({ directory: options.directory, identity: 'rt', manifest: { name: 'rt', emscripten: sdkCatalog.version } });
  const result = await run();
  assert.equal(result.linkDriver, 'emcc');
  assert.equal(result.emscripten, sdkCatalog.version);
  assert.equal(result.sdkCatalogIdentity, sha(JSON.stringify(sdkCatalog)));
  assert.equal(result.sdkIdentity, 'sdk-identity');
  assert.equal(result.sdkDriverIdentity, 'driver-identity');
  assert.equal('linkToolchainIdentity' in result, false);
  assert.equal(named('provisionLinkToolchain').length, 0);
  assert.equal(named('linkApplication')[0][1].linkDriver, 'emcc');
});
