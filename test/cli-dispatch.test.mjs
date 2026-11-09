// The command dispatcher (src/application-cli.mjs runApplicationCli) in-process,
// with stand-ins for the build pipeline: which command runs with which
// options, the messages it prints, the edge, WASI and browser relinks, the
// run step and its exit code, and the error reports (reportCliError).
// The stand-ins replace only the modules application-cli.mjs imports itself.
import assert from 'node:assert/strict';
import { after, beforeEach, test } from 'node:test';
import { registerHooks } from 'node:module';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';

const real = name => new URL(`../src/${name}`, import.meta.url).href + '?real';
const forward = (module, names) => names.map(name =>
  `export function ${name}(...a) { return globalThis.cliStandIns[${JSON.stringify(module)}].${name}(...a); }`).join('\n');
const stubs = {
  './application-build-client.mjs': forward('build', ['buildApplicationWithProgress']),
  './edge/edge-build.mjs': `export * from ${JSON.stringify(real('edge/edge-build.mjs'))};\n` + forward('edge', ['findEdgeProgram', 'linkCachedEdgeProgram', 'writeEdgeOutput']),
  './wasi/wasi-build.mjs': `export * from ${JSON.stringify(real('wasi/wasi-build.mjs'))};\n` + forward('wasi', ['wasiProgramKey', 'cachedWasiProgram', 'linkCachedWasiProgram', 'writeWasiOutput']),
  './application-runtime.mjs': forward('runtime', ['applicationRuntime']),
  './managed-lean.mjs': forward('lean', ['selectLeanVersion']) + '\nexport const toolchainCatalog = { lean: new Proxy({}, { get: (_, version) => ({ commit: "commit-" + String(version) }) }) };',
  './application-sources.mjs': forward('sources', ['findApplicationProject']),
  './edge/edge-link.mjs': forward('edgeLink', ['provisionEdgeLinker']),
  './edge/edge-runtime.mjs': forward('edgeRuntime', ['edgeRuntime']),
  './managed-link-toolchain.mjs': forward('toolchain', ['provisionLinkToolchain']),
  './elapsed-ticker.mjs': forward('ticker', ['startElapsedTicker']),
  './browser/browser-build.mjs': forward('browser', ['writeBrowserOutput']),
  './editor.mjs': forward('editor', ['autoSetupEditor', 'runEditor']),
  './cache-repair.mjs': forward('cache', ['repairManagedCache']),
  './init.mjs': `export * from ${JSON.stringify(real('init.mjs'))};\n` + forward('init', ['runInit']),
  './dev.mjs': `export * from ${JSON.stringify(real('dev.mjs'))};\n` + forward('dev', ['runDev']),
  './package.mjs': `export * from ${JSON.stringify(real('package.mjs'))};\n` + forward('package', ['runPackage']),
  './application-support.mjs': forward('support', ['applicationSupport']),
  './js-runtime.mjs': `import * as real from ${JSON.stringify(real('js-runtime.mjs'))};
export let [jsRuntime, runtimeExecutable] = globalThis.cliRuntime ?? [real.jsRuntime, real.runtimeExecutable];
export const jsRuntimeVersion = real.jsRuntimeVersion;
export const scriptPrefix = (...a) => globalThis.cliStandIns.scriptPrefix(...a);
globalThis.setCliRuntime = (runtime, executable) => { jsRuntime = runtime; runtimeExecutable = executable; };`,
};
registerHooks({
  resolve(specifier, context, next) {
    if (context.parentURL && new URL(context.parentURL).pathname.endsWith('/src/application-cli.mjs') && !new URL(context.parentURL).search
      && Object.hasOwn(stubs, specifier))
      return { url: 'data:text/javascript,' + encodeURIComponent(stubs[specifier]), shortCircuit: true };
    return next(specifier, context);
  },
});

const { runApplicationCli, runApplicationChild, buildEdge, reportCliError, describeFileSystemError, isInternalError, assertSourceExists,
  versionText, bugReportLine } = await import('../src/application-cli.mjs');
const { cliUsage } = await import('../src/cli-arguments.mjs');
const { initUsage } = await import('../src/init.mjs');
const { devUsage } = await import('../src/dev.mjs');
const { packageUsage } = await import('../src/package.mjs');
const pkg = JSON.parse(readFileSync(new URL('../package.json', import.meta.url), 'utf8'));
const defaultLean = JSON.parse(readFileSync(new URL('../src/toolchains.json', import.meta.url), 'utf8')).defaultLean;

const root = mkdtempSync(join(tmpdir(), 'lasm-cli-dispatch-'));
after(() => rmSync(root, { recursive: true, force: true }));
const project = join(root, 'project');
mkdirSync(project);
const source = join(project, 'Main.lean');
writeFileSync(source, 'def main : IO Unit := pure ()\n');
// A program the run step starts: it records its arguments and exits with their count.
const program = join(root, 'program');
mkdirSync(program);
writeFileSync(join(program, 'main.mjs'), `import { writeFileSync } from 'node:fs';
writeFileSync(${JSON.stringify(join(root, 'argv.json'))}, JSON.stringify(process.argv.slice(2)));
process.exit(40 + process.argv.length - 2);\n`);

let calls, lines;
const setRuntime = (runtime, executable) => { globalThis.cliRuntime = [runtime, executable]; globalThis.setCliRuntime?.(runtime, executable); };
const record = (name, value) => (...args) => { calls.push([name, ...args]); return typeof value === 'function' ? value(...args) : value; };
const linkWork = () => { const directory = mkdtempSync(join(root, 'link-')); return directory; };

beforeEach(() => {
  calls = []; lines = { log: [], error: [] };
  setRuntime('node', process.execPath);
  globalThis.cliStandIns = {
    build: { buildApplicationWithProgress: record('build', (input, options) => ({ output: program, lean: '4.99.0', profile: options.profile, cacheHit: false, linkWork: options.keepLinkWork === true ? linkWork() : undefined })) },
    edge: {
      findEdgeProgram: record('findEdgeProgram', { cached: 'cached-program', edge: 'edge-runtime', key: 'edge-key' }),
      linkCachedEdgeProgram: record('linkCachedEdgeProgram', 'linked-program'),
      writeEdgeOutput: record('writeEdgeOutput', { output: program }),
    },
    wasi: {
      wasiProgramKey: record('wasiProgramKey', 'wasi-key'),
      cachedWasiProgram: record('cachedWasiProgram', 'cached-wasi'),
      linkCachedWasiProgram: record('linkCachedWasiProgram', 'linked-wasi'),
      writeWasiOutput: record('writeWasiOutput', undefined),
    },
    runtime: { applicationRuntime: record('applicationRuntime', 'node-runtime') },
    lean: { selectLeanVersion: record('selectLeanVersion', { version: '4.99.0', source: 'lean-toolchain' }) },
    sources: { findApplicationProject: record('findApplicationProject', project) },
    edgeLink: { provisionEdgeLinker: record('provisionEdgeLinker', (edge, { log }) => { log('linker ready'); return 'sdk'; }) },
    edgeRuntime: { edgeRuntime: record('edgeRuntime', 'edge-runtime') },
    toolchain: { provisionLinkToolchain: record('provisionLinkToolchain', 'toolchain') },
    ticker: { startElapsedTicker: record('startElapsedTicker', label => () => calls.push(['stopTicker', label])) },
    browser: { writeBrowserOutput: record('writeBrowserOutput', { output: 'site' }) },
    editor: { autoSetupEditor: record('autoSetupEditor', undefined), runEditor: record('runEditor', 0) },
    cache: { repairManagedCache: record('repairManagedCache', undefined) },
    init: { runInit: record('runInit', 0) },
    dev: { runDev: record('runDev', 0) },
    package: { runPackage: record('runPackage', 0) },
    support: { applicationSupport: () => undefined },
    scriptPrefix: () => [],
  };
});

async function cli(argv) {
  const log = console.log, error = console.error;
  console.log = (...args) => lines.log.push(args.join(' '));
  console.error = (...args) => lines.error.push(args.join(' '));
  try { return await runApplicationCli(argv); }
  finally { console.log = log; console.error = error; }
}
const named = name => calls.filter(call => call[0] === name).map(call => call.slice(1));

test('version and help print and return 0 without building', async () => {
  assert.equal(await cli(['--version']), 0);
  assert.equal(lines.log[0], await versionText());
  assert.match(lines.log[0], new RegExp(`^lasm ${pkg.version.replaceAll('.', '\\.')} \\(${pkg.name}; Lean ${defaultLean.replaceAll('.', '\\.')}; Node ${process.versions.node}; ${process.platform}-${process.arch}\\)$`));
  globalThis.cliStandIns.support.applicationSupport = () => ({ lean: '4.77.0' });
  assert.match(await versionText(), /; Lean 4\.77\.0; /);
  globalThis.cliStandIns.support.applicationSupport = () => undefined;
  assert.equal(await cli(['--help']), 0);
  assert.deepEqual(lines.log.slice(1), [cliUsage]);
  // A release candidate prints the full help.
  globalThis.cliStandIns.support.applicationSupport = () => ({ platforms: [] });
  assert.equal(await cli(['build', '-h']), 0);
  const help = lines.log[2];
  assert.ok(help.startsWith('Usage: lasm Main.lean [--release] [-- arguments…]\n       lasm dev [Main.lean]'));
  assert.ok(help.includes('--output: the Node build for node and function targets (default dist/); the\n'));
  assert.ok(help.endsWith('lasm editor makes the Lean editor resolve import Lasm.* (elan toolchain for this project).'));
  assert.notEqual(help, cliUsage);
  for (const [argv, usage] of [[['init', '--help'], initUsage], [['dev', '--help'], devUsage], [['package', '--help'], packageUsage]]) {
    lines.log = [];
    assert.equal(await cli(argv), 0);
    assert.deepEqual(lines.log, [usage]);
  }
  assert.deepEqual(calls, []);
});

test('init, package, editor and dev go to their commands with the parsed options, and return their codes', async () => {
  globalThis.cliStandIns.init.runInit = record('runInit', 3);
  assert.equal(await cli(['init', 'app', '-t', 'hono']), 3);
  assert.deepEqual(named('runInit'), [[{ command: 'init', template: 'hono', deploy: [], directory: 'app' }]]);
  globalThis.cliStandIns.package.runPackage = record('runPackage', 4);
  assert.equal(await cli(['package', '--target', 'lambda']), 4);
  assert.equal(named('runPackage')[0][0].target, 'lambda');
  globalThis.cliStandIns.editor.runEditor = record('runEditor', 5);
  assert.equal(await cli(['editor', 'there']), 5);
  assert.deepEqual(named('runEditor'), [[{ command: 'editor', input: 'there' }]]);
  globalThis.cliStandIns.dev.runDev = record('runDev', 6);
  // lasm dev reports a missing source itself (it waits for one to appear).
  assert.equal(await cli(['dev', join(root, 'Missing.lean')]), 6);
  assert.equal(named('runDev')[0][0].input, join(root, 'Missing.lean'));
  assert.equal(named('build').length, 0);
});

test('a missing source is reported before any build', async () => {
  await assert.rejects(cli([join(project, 'Mian.lean')]), { message: `${join(project, 'Mian.lean')} not found in ${project}. Did you mean Main.lean? Lean files there: Main.lean.` });
  await assert.rejects(cli(['build', join(project, 'Main2.lean')]), /not found in/);
  assert.deepEqual(calls, []);
});

test('lasm cache repair prints the summary and fails while cleanup is pending', async () => {
  globalThis.cliStandIns.cache.repairManagedCache = record('repairManagedCache', ({ progress }) => {
    progress({ stage: 'Checking the cache' });
    return { verified: [1, 2], removed: [1], stagingRemoved: [], skipped: [1, 2, 3], pending: [], cache: '/c' };
  });
  assert.equal(await cli(['cache', 'repair']), 0);
  assert.deepEqual(lines.error, ['[lasm] Checking the cache',
    '[lasm] Cache repair: 2 valid tools retained, 1 invalid tools removed, 0 temporary directories cleaned, 3 unrelated entries untouched, 0 cleanup operations pending. Cache: /c']);
  globalThis.cliStandIns.cache.repairManagedCache = () => ({ verified: [], removed: [], stagingRemoved: [1], skipped: [], pending: [1, 2], cache: '/d' });
  assert.equal(await cli(['cache', 'repair']), 1);
  assert.match(lines.error.at(-1), /1 temporary directories cleaned, 0 unrelated entries untouched, 2 cleanup operations pending\. Cache: \/d$/);
});

test('the retired binding configurations are refused', async () => {
  await assert.rejects(cli(['build', 'bindings.json']),
    { message: 'This Lasm candidate builds ordinary .lean applications for Node. Use lasm Main.lean or lasm build Main.lean.' });
});

test('dev builds for deployment targets are refused before building unless --allow-dev', async () => {
  for (const target of ['lambda', 'workers', 'fastly', 'vercel-edge'])
    await assert.rejects(cli(['build', source, '--dev', '--target', target]),
      { message: `lasm build --dev --target ${target}: dev builds are not for deployment. Drop --dev, or add --allow-dev to package a dev build anyway.` });
  assert.deepEqual(calls, []);
  for (const target of ['node', 'wasi', 'browser', 'bun', 'deno']) assert.equal(await cli(['build', source, '--dev', '--target', target]), 0, target);
  assert.equal(await cli(['build', source, '--dev', '--target', 'lambda', '--allow-dev']), 0);
});

test('lasm build for Node: the build, its summary line, the editor, and packaging for a function platform', async () => {
  assert.equal(await cli(['build', source, '--rebuild']), 0);
  assert.deepEqual(named('build'), [[source, { command: 'build', rebuild: true, verbose: false, args: [], input: source, profile: 'release', output: 'dist' }]]);
  assert.deepEqual(lines.error, [`Built Lean 4.99.0 for Node (release profile): ${program}`]);
  assert.deepEqual(named('autoSetupEditor'), [[source]]);
  assert.deepEqual(named('runPackage'), []);
  globalThis.cliStandIns.build.buildApplicationWithProgress = () => ({ output: 'out', lean: '4.98.0', profile: 'dev', cacheHit: true });
  assert.equal(await cli(['build', source, '--dev']), 0);
  assert.equal(lines.error.at(-1), 'Reused Lean 4.98.0 for Node (dev profile: size optimizations skipped, not for deployment): out');
  globalThis.cliStandIns.package.runPackage = record('runPackage', 9);
  assert.equal(await cli(['build', source, '--target', 'netlify', '--dev', '--allow-dev']), 9);
  assert.deepEqual(named('runPackage'), [[{ input: 'out', target: 'netlify', allowDev: true }]]);
});

test('lasm run: builds, says which profile, runs main.mjs with the arguments and returns its exit code', async () => {
  assert.equal(await cli([source, '--', 'a b', '--x']), 42);
  assert.deepEqual(JSON.parse(readFileSync(join(root, 'argv.json'), 'utf8')), ['a b', '--x']);
  assert.deepEqual(lines.error, [`[lasm] Running ${source} (dev build)…`]);
  assert.equal(named('build')[0][1].profile, 'dev');
  assert.deepEqual(named('autoSetupEditor'), [[source]]);
  assert.equal(await cli([source, '--release']), 40);
  assert.equal(lines.error.at(-1), `[lasm] Running ${source} (release build)…`);
});

test('lasm run on Bun and Deno: the portable build, run by that runtime', async () => {
  for (const [runtime, name] of [['bun', 'Bun'], ['deno', 'Deno']]) {
    calls = []; lines.error = [];
    setRuntime(runtime, process.execPath);
    globalThis.cliStandIns.scriptPrefix = () => ['--no-warnings'];
    assert.equal(await cli([source, '--', 'one']), 41);
    assert.deepEqual(JSON.parse(readFileSync(join(root, 'argv.json'), 'utf8')), ['one']);
    assert.deepEqual(named('writeEdgeOutput')[0][0].target, runtime);
    assert.equal(lines.error.at(-1), `[lasm] Running ${source} on ${name} (dev build)…`);
    assert.equal(await cli([source, '--release']), 40);
    assert.equal(lines.error.at(-1), `[lasm] Running ${source} on ${name} (release build)…`);
    // lasm build on Bun or Deno builds and stops.
    lines.error = [];
    assert.equal(await cli(['build', source, '--target', runtime]), 0);
    assert.ok(!lines.error.some(line => line.includes('Running')));
  }
  setRuntime('bun', join(root, 'no-such-bun'));
  await assert.rejects(cli([source]), { message: 'Could not start Bun to run the application.' });
  setRuntime('deno', join(root, 'no-such-deno'));
  await assert.rejects(cli([source]), { message: 'Could not start Deno to run the application.' });
});

test('edge targets reuse a cached edge program and remove the link inputs', async () => {
  globalThis.cliStandIns.build.buildApplicationWithProgress = record('build', (input, options) => ({ output: 'node-out', profile: options.profile, linkWork: linkWork() }));
  assert.equal(await cli(['build', source, '--target', 'workers', '--output', 'deploy']), 0);
  const [[input, options]] = named('build');
  assert.equal(input, source);
  assert.equal(options.keepLinkWork, 'if-built');
  assert.equal(options.linkOnly, false);
  assert.equal('output' in options, false, 'the Node build stays in its cache entry');
  const [[found]] = named('findEdgeProgram');
  assert.equal(found.nodeRuntime, 'node-runtime');
  assert.equal(found.suspend, 'jspi');
  assert.deepEqual(named('applicationRuntime'), [[{ version: '4.99.0', source: 'lean-toolchain', commit: 'commit-4.99.0' }]]);
  assert.deepEqual(named('selectLeanVersion'), [[source]]);
  assert.ok(!existsSync(found.result.linkWork), 'the link inputs of a cached program are removed');
  const [[written]] = named('writeEdgeOutput');
  assert.deepEqual({ ...written, log: typeof written.log }, { target: 'workers', source, projectDirectory: project, result: found.result,
    edge: 'edge-runtime', program: 'cached-program', output: 'deploy', cacheHit: true, log: 'function' });
  assert.deepEqual(named('linkCachedEdgeProgram'), []);
  assert.deepEqual(named('autoSetupEditor'), [[source]]);
});

test('edge targets link a new edge program, building again when the Node build kept no link inputs', async () => {
  globalThis.cliStandIns.edge.findEdgeProgram = record('findEdgeProgram', { cached: undefined, edge: 'edge-runtime', key: 'edge-key' });
  const logged = [];
  const builds = [];
  const build = async (input, options) => { builds.push(options); return { output: 'node-out', linkWork: options.keepLinkWork === true ? linkWork() : undefined }; };
  const output = await buildEdge(source, 'supabase-edge', { profile: 'dev', output: 'fn', verbose: true }, true, { build, log: line => logged.push(line) });
  assert.equal(output, program);
  assert.deepEqual(builds, [{ profile: 'dev', verbose: true, keepLinkWork: 'if-built', linkOnly: true }, { profile: 'dev', verbose: true, keepLinkWork: true, linkOnly: true }]);
  assert.deepEqual(logged, ['[lasm] Linking the single-threaded (portable) program with Asyncify (this engine has no JSPI)…', '[lasm] linker ready']);
  const [[edge, , env, suspend]] = named('provisionEdgeLinker');
  assert.equal(edge, 'edge-runtime'); assert.equal(env, process.env); assert.equal(suspend, 'asyncify');
  assert.deepEqual(named('startElapsedTicker'), [['Linking the single-threaded program']]);
  assert.deepEqual(named('stopTicker'), [['Linking the single-threaded program']]);
  const [[link]] = named('linkCachedEdgeProgram');
  assert.deepEqual({ ...link, result: undefined }, { result: undefined, nodeRuntime: 'node-runtime', edge: 'edge-runtime', key: 'edge-key', sdk: 'sdk', suspend: 'asyncify', verbose: true });
  assert.ok(!existsSync(link.result.linkWork), 'the link inputs are removed after the link');
  const [[written]] = named('writeEdgeOutput');
  assert.equal(written.program, 'linked-program'); assert.equal(written.cacheHit, false); assert.equal(written.output, 'fn');
  // A JSPI target says nothing about Asyncify; LASM_KEEP_LINK_WORK keeps the link inputs.
  logged.length = 0; calls = [];
  process.env.LASM_KEEP_LINK_WORK = '1';
  try { await buildEdge(source, 'workers', { profile: 'release' }, false, { build, log: line => logged.push(line) }); }
  finally { delete process.env.LASM_KEEP_LINK_WORK; }
  assert.equal(logged[0], '[lasm] Linking the single-threaded (portable) program…');
  assert.ok(existsSync(named('linkCachedEdgeProgram')[0][0].result.linkWork));
  assert.equal(builds.at(-1).linkOnly, false);
});

test('a failed edge link still removes the link inputs and stops the ticker', async () => {
  globalThis.cliStandIns.edge.findEdgeProgram = () => ({ cached: undefined, edge: 'e', key: 'k' });
  globalThis.cliStandIns.edge.linkCachedEdgeProgram = ({ result }) => { calls.push(['work', result.linkWork]); throw new Error('link failed'); };
  const build = async () => ({ linkWork: linkWork() });
  await assert.rejects(buildEdge(source, 'workers', {}, false, { build, log: () => {} }), { message: 'link failed' });
  assert.ok(!existsSync(named('work')[0][0]));
  assert.equal(named('stopTicker').length, 1);
});

test('the browser target: the JSPI program written as a static site, with --suspend and --bundler', async () => {
  assert.equal(await cli(['build', source, '--target', 'browser', '--suspend', 'jspi', '--bundler', '--output', 'site']), 0);
  assert.equal(named('findEdgeProgram')[0][0].suspend, 'jspi');
  const [[written]] = named('writeBrowserOutput');
  assert.deepEqual({ ...written, result: undefined }, { source, projectDirectory: project, result: undefined, program: 'cached-program', output: 'site',
    suspend: 'jspi', cacheHit: true, lasmVersion: pkg.version, externals: 'keep' });
  assert.deepEqual(named('writeEdgeOutput'), []);
  assert.deepEqual(named('autoSetupEditor'), [[source]]);
  calls = [];
  assert.equal(await cli(['build', source, '--target', 'browser']), 0);
  assert.equal(named('writeBrowserOutput')[0][0].suspend, 'none');
  assert.equal(named('writeBrowserOutput')[0][0].externals, 'error');
  // A new link says it is for the browser.
  calls = []; const logged = [];
  globalThis.cliStandIns.edge.findEdgeProgram = () => ({ cached: undefined, edge: 'e', key: 'k' });
  await buildEdge(source, 'browser', {}, false, { build: async () => ({ linkWork: linkWork() }), log: line => logged.push(line) });
  assert.equal(logged[0], '[lasm] Linking for the browser…');
  assert.deepEqual(named('startElapsedTicker'), [['Linking for the browser']]);
  assert.equal(named('writeBrowserOutput')[0][0].cacheHit, false);
});

test('WASI targets: a cached module, or a new link with its label', async () => {
  globalThis.cliStandIns.build.buildApplicationWithProgress = record('build', (input, options) => ({ output: 'node-out', linkWork: linkWork() }));
  assert.equal(await cli(['build', source, '--target', 'wasi', '--output', 'w']), 0);
  const [[, options]] = named('build');
  assert.equal(options.keepLinkWork, 'if-built'); assert.equal('output' in options, false);
  const [[key]] = named('wasiProgramKey');
  assert.deepEqual({ ...key, result: undefined }, { result: undefined, edge: 'edge-runtime', toolchain: 'toolchain', target: 'wasi' });
  assert.deepEqual(named('cachedWasiProgram').map(([, target, k]) => [target, k]), [['wasi', 'wasi-key']]);
  assert.ok(!existsSync(key.result.linkWork));
  const [[written]] = named('writeWasiOutput');
  assert.deepEqual({ ...written, result: undefined }, { target: 'wasi', source, projectDirectory: project, result: undefined, edge: 'edge-runtime',
    program: 'cached-wasi', output: 'w', cacheHit: true });
  assert.deepEqual(named('edgeRuntime')[0][0], 'node-runtime');
  assert.deepEqual(named('autoSetupEditor'), [[source]]);
  for (const [target, label] of [['fastly', 'Fastly Compute'], ['wasi-http', 'wasi-http'], ['wasi', 'WASI']]) {
    calls = []; lines.error = [];
    globalThis.cliStandIns.wasi.cachedWasiProgram = () => undefined;
    globalThis.cliStandIns.build.buildApplicationWithProgress = record('build', (input, options) => ({ linkWork: options.keepLinkWork === true ? linkWork() : undefined }));
    assert.equal(await cli(['build', source, '--target', target]), 0);
    assert.deepEqual(named('build').map(([, o]) => o.keepLinkWork), ['if-built', true]);
    assert.deepEqual(lines.error, [`[lasm] Linking for ${label}…`]);
    assert.deepEqual(named('startElapsedTicker'), [[`Linking for ${label}`]]);
    assert.deepEqual(named('stopTicker'), [[`Linking for ${label}`]]);
    const [[link]] = named('linkCachedWasiProgram');
    assert.deepEqual({ ...link, result: undefined }, { result: undefined, nodeRuntime: 'node-runtime', edge: 'edge-runtime', toolchain: 'toolchain', target, key: 'wasi-key', verbose: false });
    assert.ok(!existsSync(link.result.linkWork));
    assert.equal(named('writeWasiOutput')[0][0].program, 'linked-wasi');
    assert.equal(named('writeWasiOutput')[0][0].cacheHit, false);
  }
  // The link tools log with the [lasm] prefix.
  calls = []; lines.error = [];
  globalThis.cliStandIns.toolchain.provisionLinkToolchain = ({ log }) => { log('tools ready'); return 'toolchain'; };
  await cli(['build', source, '--target', 'wasi', '--verbose']);
  assert.equal(lines.error[0], '[lasm] tools ready');
  assert.equal(named('linkCachedWasiProgram')[0][0].verbose, true);
});

test('WASI: LASM_KEEP_LINK_WORK keeps the link inputs of a cached module', async () => {
  globalThis.cliStandIns.build.buildApplicationWithProgress = record('build', () => ({ linkWork: linkWork() }));
  process.env.LASM_KEEP_LINK_WORK = '1';
  try { await cli(['build', source, '--target', 'fastly']); } finally { delete process.env.LASM_KEEP_LINK_WORK; }
  assert.ok(existsSync(named('wasiProgramKey')[0][0].result.linkWork));
});

test('the child runner forwards SIGINT and SIGTERM, maps a signal to 128 + its number, and removes its listeners', { skip: process.platform === 'win32' }, async () => {
  const before = [process.listenerCount('SIGINT'), process.listenerCount('SIGTERM')];
  for (const [signal, code] of [['SIGINT', 130], ['SIGTERM', 143]]) {
    const existing = process.listeners(signal);
    const running = runApplicationChild(process.execPath, ['-e', 'setInterval(() => {}, 1000)'], 'missing');
    const added = process.listeners(signal).filter(listener => !existing.includes(listener));
    assert.equal(added.length, 1);
    await new Promise(resolve => setTimeout(resolve, 200));
    // The runner's own handler, called as the signal would call it (other listeners stay out of it).
    added[0](signal);
    assert.equal(await running, code);
    added[0](signal); // after the exit: nothing to forward
  }
  assert.deepEqual([process.listenerCount('SIGINT'), process.listenerCount('SIGTERM')], before);
  assert.equal(await runApplicationChild(process.execPath, ['-e', 'process.exit(3)'], 'missing'), 3);
  assert.deepEqual([process.listenerCount('SIGINT'), process.listenerCount('SIGTERM')], before);
  await assert.rejects(runApplicationChild(join(root, 'none'), [], 'Node is missing'), { message: 'Node is missing' });
  // Other start-up errors are reported as they are.
  if (process.platform !== 'win32') await assert.rejects(runApplicationChild(join(program, 'main.mjs'), [], 'missing'), { code: 'EACCES' });
});

const reported = error => {
  const output = [], original = console.error;
  console.error = (...args) => output.push(args.join(' '));
  try { reportCliError(error); } finally { console.error = original; }
  return output;
};

test('reportCliError: Lean exceptions, internal errors, file-system errors, Lean diagnostics and plain messages', () => {
  assert.deepEqual(reported(Object.assign(new Error('bad input'), { name: 'LeanIOError' })), ['uncaught exception: bad input']);
  const internal = new TypeError('x is undefined');
  assert.deepEqual(reported(internal), [internal.stack, bugReportLine]);
  const long = Object.assign(new RangeError('r'), { stack: 'S'.repeat(13000) + 'END' });
  assert.equal(reported(long)[0].length, 12000);
  assert.ok(reported(long)[0].endsWith('END'));
  assert.deepEqual(reported(Object.assign(new TypeError('no stack'), { stack: undefined })), ['no stack', bugReportLine]);
  assert.deepEqual(reported(Object.assign(new Error("EACCES: permission denied, mkdir '/x/.lake'"), { code: 'EACCES', syscall: 'mkdir', path: '/x/.lake' })),
    ['Could not create the directory /x/.lake: permission denied (EACCES). Check that you can write there, or choose another directory.']);
  // An internal error with a file-system code is still internal.
  assert.equal(reported(Object.assign(new TypeError("EACCES: permission denied, open '/x'"), { code: 'EACCES' })).at(-1), bugReportLine);
  // Plain errors: stderr, then stdout, then the message; the last 12000 characters.
  assert.deepEqual(reported(Object.assign(new Error('message'), { stderr: Buffer.from('from stderr') })), ['from stderr']);
  assert.deepEqual(reported(Object.assign(new Error('message'), { stderr: '', stdout: 'from stdout' })), ['from stdout']);
  assert.deepEqual(reported(new Error('just the message')), ['just the message']);
  assert.equal(reported(new Error('x'.repeat(12500) + 'tail'))[0], 'x'.repeat(11996) + 'tail');
});

test('reportCliError: Lean and Lake diagnostics are formatted, with the build-failed line', () => {
  const projectDirectory = project;
  const diagnostics = `trace: .> lean ./Main.lean\nerror: ./Main.lean:3:4: unknown identifier 'x'\nerror: build failed\n`;
  assert.deepEqual(reported(Object.assign(new Error('Lake failed'), { stderr: diagnostics, projectDirectory })),
    [`${relative(process.cwd(), source)}:3:4: error: unknown identifier 'x'`, '[lasm] Build failed. Fix the error above and run the command again.']);
  // Without a file:line diagnostic, the error's own first line follows the output.
  assert.deepEqual(reported(Object.assign(new Error('Lake could not resolve dependency batteries\nmore'), { stderr: 'error: dependency fetch failed\nerror: build failed\n', projectDirectory })),
    ['error: dependency fetch failed', 'Lake could not resolve dependency batteries', '[lasm] Build failed. Fix the error above and run the command again.']);
  // ... unless the output already contains it.
  assert.deepEqual(reported(Object.assign(new Error('error: dependency fetch failed\nx'), { stderr: 'error: dependency fetch failed\nerror: build failed\n', projectDirectory })),
    ['error: dependency fetch failed', '[lasm] Build failed. Fix the error above and run the command again.']);
  const message = reported(Object.assign(new Error('m'.repeat(3000)), { stderr: 'error: build failed\n', projectDirectory }));
  assert.equal(message[1].length, 2000);
  // The working directory when the error names no project.
  assert.equal(reported(Object.assign(new Error('x'), { stderr: `error: ${process.cwd()}/A.lean:1:2: oops\n` }))[0], 'A.lean:1:2: error: oops');
});

test('describeFileSystemError: what Lasm tried, on which path, why, and what to do', () => {
  const error = (message, fields) => Object.assign(new Error(message), fields);
  const cases = [
    ['EACCES', 'mkdir', 'create the directory', 'Check that you can write there, or choose another directory.'],
    ['EPERM', 'open', 'open', 'Check that you can write there and that no other program holds the file, or choose another directory.'],
    ['EROFS', 'scandir', 'read the directory', 'The file system is read-only; choose a writable directory.'],
    ['ENOSPC', 'opendir', 'read the directory', 'The disk is full; free some space and run the command again.'],
    ['EDQUOT', 'rename', 'move', 'Your disk quota is used up; free some space and run the command again.'],
    ['ENOTDIR', 'unlink', 'remove', 'A file is where a directory is needed; move it or choose another path.'],
    ['EISDIR', 'rmdir', 'remove', 'A directory is where a file is needed; move it or choose another path.'],
    ['EEXIST', 'rm', 'remove', 'Something already exists there; move it or choose another path.'],
    ['ENAMETOOLONG', 'copyfile', 'copy', 'Choose a shorter path.'],
    ['ELOOP', 'cp', 'copy', 'The path has a symbolic link loop; fix the link or choose another path.'],
    ['EMFILE', 'write', 'write to', 'Too many files are open; close other programs or raise the open-file limit, and run the command again.'],
    ['EACCES', 'symlink', 'create a link at'], ['EACCES', 'link', 'create a link at'], ['EACCES', 'chmod', 'change the permissions of'],
    ['EACCES', 'utime', 'change the times of'], ['EACCES', 'stat', 'inspect'], ['EACCES', 'lstat', 'inspect'], ['EACCES', 'access', 'access'],
    ['EACCES', 'mkdtemp', 'create a directory in'], ['EACCES', 'realpath', 'resolve'], ['EACCES', 'fsync', 'use'],
  ];
  for (const [code, syscall, verb, action] of cases) {
    const text = describeFileSystemError(error(`${code}: some reason, ${syscall} '/p/q'`, { code }));
    assert.ok(text.startsWith(`Could not ${verb} /p/q: some reason (${code}). `), text);
    if (action) assert.ok(text.endsWith(action), text);
  }
  // The path and syscall fields win over the message; no path: a general sentence.
  assert.equal(describeFileSystemError(error("EACCES: permission denied, open '/a'", { code: 'EACCES', path: '/b' })),
    'Could not open /b: permission denied (EACCES). Check that you can write there, or choose another directory.');
  assert.equal(describeFileSystemError(error('ENOSPC: no space left on device, write', { code: 'ENOSPC' })),
    'A file operation failed: no space left on device (ENOSPC). The disk is full; free some space and run the command again.');
  // A bare strerror text, with the syscall and path on the error.
  assert.equal(describeFileSystemError(error('Permission denied.', { code: 'EACCES', syscall: 'mkdir', path: '/x' })),
    'Could not create the directory /x: permission denied (EACCES). Check that you can write there, or choose another directory.');
  assert.equal(describeFileSystemError(error('No space left on device', { code: 'ENOSPC' })),
    'A file operation failed: no space left on device (ENOSPC). The disk is full; free some space and run the command again.');
  // Messages Lasm already explained, unknown codes and non-errors: undefined.
  for (const value of [error('Lasm could not create /x because it is a file you made earlier, so move it first', { code: 'EEXIST' }),
    error('EACCES: permission denied', { code: 'EACCES' }), error('permission denied', { code: 'EACCES' }),
    error(`Permission denied${' x'.repeat(30)}`, { code: 'EACCES' }), error("ENOENT: no such file or directory, open '/x'", { code: 'ENOENT' }),
    error('Permission denied'), undefined, null, {}, { code: 'EACCES' }])
    assert.equal(describeFileSystemError(value), undefined, String(value?.message));
});

test('isInternalError: programming errors and marked errors only', () => {
  for (const value of [new TypeError('t'), new RangeError('r'), new ReferenceError('f'), new SyntaxError('s'), new EvalError('e'),
    Object.assign(new Error('a'), { code: 'ERR_ASSERTION' }), Object.assign(new Error('a'), { name: 'AssertionError' }),
    ...['TypeError', 'RangeError', 'ReferenceError', 'EvalError'].map(name => Object.assign(new Error('rebuilt'), { name })),
    { lasmInternal: true }])
    assert.equal(isInternalError(value), true, String(value?.name));
  for (const value of [new Error('usage'), Object.assign(new Error('x'), { name: 'SyntaxError' }), Object.assign(new TypeError('t'), { lasmInternal: false }),
    Object.assign(new TypeError('t'), { name: 'LeanIOError' }), { lasmInternal: 'yes' }, 'TypeError', 0, null, undefined, {}])
    assert.equal(isInternalError(value), false, String(value?.name ?? value));
});

test('assertSourceExists: where Lasm looked and which sources are there', () => {
  assert.equal(assertSourceExists(source), undefined);
  const many = join(root, 'many');
  mkdirSync(many);
  for (const name of ['lakefile.lean', 'J.lean', 'I.lean', 'H.lean', 'G.lean', 'F.lean', 'E.lean', 'D.lean', 'C.lean', 'B.lean', 'A.lean', 'notes.txt'])
    writeFileSync(join(many, name), '');
  assert.throws(() => assertSourceExists(join(many, 'Zebra.lean')),
    { message: `${join(many, 'Zebra.lean')} not found in ${many}. Lean files there: A.lean, B.lean, C.lean, D.lean, E.lean, F.lean, G.lean, H.lean, ….` });
  assert.throws(() => assertSourceExists(join(many, 'a.lean')), { message: new RegExp(`Did you mean A\\.lean\\? Lean files there: A\\.lean,`) });
  const few = join(root, 'few');
  mkdirSync(few); writeFileSync(join(few, 'Only.lean'), ''); writeFileSync(join(few, 'lakefile.lean'), '');
  assert.throws(() => assertSourceExists(join(few, 'Server.lean')), { message: `${join(few, 'Server.lean')} not found in ${few}. Lean files there: Only.lean.` });
  for (const directory of [join(root, 'empty-' + Date.now()), program]) {
    if (!existsSync(directory)) mkdirSync(directory);
    assert.throws(() => assertSourceExists(join(directory, 'Main.lean')), { message: `${join(directory, 'Main.lean')} not found in ${directory}. There are no .lean files there; run lasm in your project directory, or create one with npm create @lasm@latest.` });
  }
  assert.throws(() => assertSourceExists(join(root, 'no-such-directory', 'Main.lean')), /There are no \.lean files there/);
});
