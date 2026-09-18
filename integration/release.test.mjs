import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, mkdtempSync, rmSync, symlinkSync, copyFileSync, existsSync, cpSync } from 'node:fs';
import { spawn } from 'node:child_process';
import { join, dirname, resolve, delimiter, basename } from 'node:path';
import { tmpdir } from 'node:os';
import { root, run, sha256, lean } from '../src/toolchain.mjs';
import { executableName } from '../src/platform.mjs';

const releaseFile = resolve(process.env.LASM_RELEASE_MANIFEST ?? join(root, '.work/release/release.json'));
const release = JSON.parse(readFileSync(releaseFile, 'utf8'));
if (process.env.LASM_TEST_PLATFORM) assert.equal(`${process.platform}-${process.arch}`, process.env.LASM_TEST_PLATFORM);
const archive = join(dirname(releaseFile), release.compiler);
assert.equal(sha256(readFileSync(archive)), release.compilerSha256);
const leanPrefix = run(lean, ['--print-prefix']);
const npmCli = [process.env.npm_execpath,
  resolve(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js'),
  resolve(dirname(process.execPath), '../lib/node_modules/npm/bin/npm-cli.js'),
].find(file => file && basename(file) === 'npm-cli.js' && existsSync(file));
assert.ok(npmCli, 'npm CLI must be installed with Node or supplied through npm_execpath');
const tools = join(root, '.work/release-tests', `${process.platform}-${process.arch}`, 'tools');
mkdirSync(tools, { recursive: true });
const nodeTool = join(tools, executableName('node'));
rmSync(nodeTool, { force: true }); copyFileSync(process.execPath, nodeTool);
const osUtilities = process.platform === 'win32' ? [] : ['sh', 'dirname', 'sed', 'uname'];
for (const name of osUtilities) {
  const path = ['/bin', '/usr/bin'].map(directory => join(directory, name)).find(existsSync);
  assert.ok(path, `Missing ordinary OS utility: ${name}`);
  rmSync(join(tools, name), { force: true }); symlinkSync(path, join(tools, name));
}
const availableManagers = {
  npm: [process.execPath, npmCli],
  pnpm: [join(root, 'node_modules/pnpm', executableName('pnpm'))],
  yarn: [process.execPath, join(root, 'node_modules/@yarnpkg/cli-dist/bin/yarn.js')],
};
const managers = Object.fromEntries((process.env.LASM_TEST_MANAGERS ?? 'npm,pnpm,yarn').split(',').map(name => {
  assert.ok(availableManagers[name], `Unknown package manager: ${name}`);
  return [name, availableManagers[name]];
}));
const withPath = (env, value) => ({ ...Object.fromEntries(Object.entries(env).filter(([key]) => key.toLowerCase() !== 'path')), PATH: value });
const reports = [];
let ordinaryMain;

for (const [name, cli] of Object.entries(managers)) test(`${name}: local package, isolated build, locked offline reinstall, standalone execution`, { timeout: 600_000 }, async t => {
  const project = mkdtempSync(join(tmpdir(), `lasm ${name} 日本語 project with spaces `));
  t.after(() => rmSync(project, { recursive: true, force: true }));
  const cache = join(project, '.package-cache');
  rmSync(project, { recursive: true, force: true });
  for (const path of ['lean', 'logic', 'data']) mkdirSync(join(project, path), { recursive: true });
  mkdirSync(cache, { recursive: true });
  writeFileSync(join(project, 'package.json'), JSON.stringify({ name: `lasm-${name}-acceptance`, private: true, type: 'module',
    scripts: { build: 'lasm build lean/lasm.json dist' }, devDependencies: { '@lasm/compiler': `file:${archive}` } }, null, 2));
  writeFileSync(join(project, 'lean/lean-toolchain'), 'leanprover/lean4:v4.32.0\n');
  writeFileSync(join(project, 'logic/lakefile.toml'), 'name = "logic"\n[[lean_lib]]\nname = "Logic"\n');
  writeFileSync(join(project, 'logic/Logic.lean'), 'module\nprelude\npublic import Init.Prelude\npublic def offset : Nat := 37\n');
  writeFileSync(join(project, 'lean/lakefile.toml'), `name = "app"\n[[require]]\nname = "logic"\npath = "../logic"\n[[require]]\nname = "lasm"\npath = "../node_modules/@lasm/compiler/lean"\n[[lean_lib]]\nname = "App"\n`);
  writeFileSync(join(project, 'lean/App.lean'), `module
prelude
public import Logic
public import Lasm.IO
public def answer (n : Nat) : Nat := n + offset
public def greeting (value : String) : String := value ++ "λ"
public def request (url : String) : IO ByteArray := Lasm.fetchBytes url
public def copy (source destination : String) : IO ByteArray := do
  let bytes ← Lasm.readBytes source
  Lasm.writeBytes destination bytes
  Lasm.readBytes destination
`);
  writeFileSync(join(project, 'lean/lasm.json'), JSON.stringify({ module: 'App', exports: {
    answer: { declaration: 'answer', parameters: ['Nat'], result: 'Nat' },
    greeting: { declaration: 'greeting', parameters: ['String'], result: 'String' },
    request: { declaration: 'request', parameters: ['String'], result: 'ByteArray', effect: 'io' },
    copy: { declaration: 'copy', parameters: ['String', 'String'], result: 'ByteArray', effect: 'io' },
  } }));
  if (name === 'yarn') {
    writeFileSync(join(project, 'yarn.lock'), '');
    writeFileSync(join(project, '.yarnrc.yml'), `nodeLinker: node-modules\nenableImmutableInstalls: false\nenableGlobalCache: false\nenableScripts: false\ncacheFolder: ${JSON.stringify(cache + '/cache')}\nglobalFolder: ${JSON.stringify(cache + '/global')}\n`);
  }
  const environment = { ...process.env, npm_config_cache: cache, npm_config_update_notifier: 'false',
    XDG_CACHE_HOME: cache, COREPACK_ENABLE_NETWORK: '0', CI: 'true' };
  // Neither a maintainer override nor a repository cache may supply the build.
  for (const key of ['LEAN', 'LEAN_SOURCE', 'ZIG', 'WASM_OPT', 'LASM_TARGET_DIR', 'LASM_CACHE_DIR', 'LEAN_PATH', 'LEAN_SRC_PATH']) delete environment[key];
  const invoke = (args, extra = {}) => run(cli[0], [...cli.slice(1), ...args], { cwd: project, env: environment, timeout: 600_000, ...extra });
  const installStart = performance.now();
  if (name === 'npm') invoke(['install', '--offline', '--ignore-scripts', '--no-audit', '--no-fund']);
  if (name === 'pnpm') invoke(['install', '--offline', '--no-frozen-lockfile', '--ignore-scripts', '--store-dir', join(cache, 'store')]);
  if (name === 'yarn') invoke(['install'], { env: { ...environment, YARN_ENABLE_NETWORK: '0' } });
  const installMs = performance.now() - installStart;
  const isolated = withPath(environment, [tools, join(leanPrefix, 'bin'),
    ...(process.platform === 'win32' ? [join(process.env.SystemRoot ?? 'C:\\Windows', 'System32')] : [])].join(delimiter));
  const firstStart = performance.now();
  invoke(['run', 'build'], { env: isolated });
  const firstBuildMs = performance.now() - firstStart;
  const first = JSON.parse(readFileSync(join(project, 'dist/build-report.json')));
  assert.equal(first.toolchain, 'packaged-clang');
  assert.ok(first.prebuiltModules > 200);
  const hash = sha256(readFileSync(join(project, 'dist/module.wasm')));
  const nextStart = performance.now();
  invoke(['run', 'build'], { env: isolated });
  const cachedBuildMs = performance.now() - nextStart;
  assert.equal(sha256(readFileSync(join(project, 'dist/module.wasm'))), hash);
  rmSync(join(project, 'node_modules'), { recursive: true, force: true });
  if (name === 'npm') invoke(['ci', '--offline', '--ignore-scripts', '--no-audit', '--no-fund']);
  if (name === 'pnpm') invoke(['install', '--offline', '--frozen-lockfile', '--ignore-scripts', '--store-dir', join(cache, 'store')]);
  if (name === 'yarn') invoke(['install', '--immutable', '--immutable-cache'], { env: { ...environment, YARN_ENABLE_NETWORK: '0' } });
  invoke(['run', 'build'], { env: isolated });
  // Prove deployed output does not resolve any runtime imports from the SDK.
  rmSync(join(project, 'node_modules'), { recursive: true, force: true });
  const bytes = Buffer.from('日本語\0🙂');
  writeFileSync(join(project, 'data/input'), bytes);
  writeFileSync(join(project, 'run.mjs'), `import createModule from './dist/index.mjs';
import {createNodeHost} from './dist/host.mjs';
import {createServer} from 'node:http';
const server = createServer((req,res) => res.end(new Uint8Array([0,255,37])));
await new Promise(resolve => server.listen(0, '127.0.0.1', resolve));
const api = await createModule({host: await createNodeHost({directory:'./data', fetch:globalThis.fetch})});
try {
  console.log(JSON.stringify({answer:String(api.answer(5n)), big:String(api.answer(2n**128n)),
    greeting:api.greeting('日本語\\0🙂'), bytes:[...await api.copy('input','output')],
    http:[...await api.request('http://127.0.0.1:'+server.address().port)]}));
} finally { api.dispose(); server.closeAllConnections(); await new Promise(resolve => server.close(resolve)); }
`);
  const result = JSON.parse(run(process.execPath, [join(project, 'run.mjs')], { cwd: project, env: withPath(environment, join(project, 'empty-path')) }));
  assert.deepEqual(result, { answer: '42', big: String(2n**128n+37n), greeting: '日本語\0🙂λ', bytes: [...bytes], http: [0,255,37] });
  assert.deepEqual(readFileSync(join(project, 'data/output')), bytes);
  reports.push({ manager: name, installMs, firstBuildMs, cachedBuildMs, wasmBytes: first.wasmBytes,
    prebuiltModules: first.prebuiltModules, emptyCacheOfflineInstall: true, offlineLockedInstall: true, isolatedCompilerPath: ['node', 'lean', 'lake'],
    osUtilities, compilerPackageRemovedBeforeExecution: true, standaloneExecution: true });
});

test('npm: ordinary Lean main and HTTP server run from the installed package', { timeout: 600_000 }, async t => {
  const project = mkdtempSync(join(tmpdir(), 'lasm Lean server 日本語 '));
  t.after(() => rmSync(project, { recursive: true, force: true }));
  cpSync(join(root, 'examples/lean-server'), project, { recursive: true,
    filter: source => !source.slice(join(root, 'examples/lean-server').length).split(/[\\/]/).some(part => ['.lake', 'dist', 'data', 'test'].includes(part)) });
  writeFileSync(join(project, 'package.json'), JSON.stringify({ name: 'ordinary-lean-acceptance', private: true,
    type: 'module', devDependencies: { '@lasm/compiler': `file:${archive}` } }));
  const environment = { ...process.env, npm_config_cache: join(project, '.npm-cache'), npm_config_update_notifier: 'false' };
  for (const key of ['LEAN', 'LEAN_SOURCE', 'ZIG', 'WASM_OPT', 'LASM_TARGET_DIR', 'LASM_CACHE_DIR', 'LEAN_PATH', 'LEAN_SRC_PATH']) delete environment[key];
  run(process.execPath, [npmCli, 'install', '--offline', '--ignore-scripts', '--no-audit', '--no-fund'], { cwd: project, env: environment });
  const isolated = withPath(environment, [tools, join(leanPrefix, 'bin'),
    ...(process.platform === 'win32' ? [join(process.env.SystemRoot ?? 'C:\\Windows', 'System32')] : [])].join(delimiter));
  const compiler = join(project, 'node_modules/@lasm/compiler');
  run(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', 'Main.lean', 'dist'], { cwd: project, env: isolated, timeout: 600_000 });
  const report = JSON.parse(readFileSync(join(project, 'dist/build-report.json')));
  assert.equal(report.toolchain, 'packaged-clang');
  assert.ok(report.modules.includes('Std.Http.Server'));
  async function exercise(entry, expectedCount) {
    const child = spawn(process.execPath, [entry, '0', join(project, 'data')], { cwd: project, env: withPath(environment, join(project, 'empty-path')) });
    let output = '', errors = '';
    const exited = new Promise((resolve, reject) => { child.once('error', reject); child.once('exit', (code, signal) => resolve({ code, signal })); });
    child.stderr.on('data', bytes => { errors += bytes; });
    const address = new Promise((resolve, reject) => {
      const timeout = setTimeout(() => { child.kill(); reject(new Error(`Lean server did not start: ${errors}`)); }, 15_000);
      child.stdout.on('data', bytes => { output += bytes; const match = output.match(/http:\/\/127\.0\.0\.1:\d+/); if (match) { clearTimeout(timeout); resolve(match[0]); } });
      exited.then(result => { clearTimeout(timeout); reject(new Error(`Lean server exited early: ${JSON.stringify(result)} ${errors}`)); }, reject);
    });
    try {
      const base = await address;
      const listing = await fetch(base + '/todos');
      assert.ok(Math.abs(Date.parse(listing.headers.get('date')) - Date.now()) < 5000);
      assert.equal((await listing.json()).length, expectedCount);
      const response = await fetch(base + '/todos', { method: 'POST', body: JSON.stringify({ title: 'installed Lean λ' }) });
      assert.equal(response.status, 201); assert.equal((await response.json()).title, 'installed Lean λ');
      const events = await fetch(base + '/events'); assert.equal(await events.text(), 'data: 0\n\ndata: 1\n\ndata: 2\n\n');
      const stop = await fetch(base + '/shutdown', { method: 'POST' }); await stop.arrayBuffer();
      const timeout = setTimeout(() => child.kill('SIGKILL'), 5000);
      const result = await exited; clearTimeout(timeout);
      assert.deepEqual(result, { code: 0, signal: null }, errors);
    } finally { if (child.exitCode === null && !child.signalCode) child.kill('SIGKILL'); await exited; }
  }
  await exercise(join(project, 'dist/main.mjs'), 0);
  rmSync(join(project, 'node_modules'), { recursive: true, force: true });
  await exercise(join(project, 'dist/main.mjs'), 1);
  ordinaryMain = { installedCompiler: true, source: 'ordinary Lake main', standardHttpServer: true,
    unicodePersistence: true, streaming: true, gracefulShutdown: true, compilerRemovedBeforeSecondRun: true,
    toolchain: report.toolchain, wasmBytes: report.wasmBytes };
});

test('npm: installed ordinary filesystem, process and expression APIs match native Lean', { timeout: 900_000 }, async t => {
  const project = mkdtempSync(join(tmpdir(), 'lasm native parity '));
  t.after(() => rmSync(project, { recursive: true, force: true }));
  writeFileSync(join(project, 'package.json'), JSON.stringify({ name: 'native-parity', private: true,
    devDependencies: { '@lasm/compiler': `file:${archive}` } }));
  const environment = { ...process.env, npm_config_cache: join(project, '.npm-cache'), LEAN_NUM_THREADS: '4' };
  for (const key of ['LEAN', 'LEAN_SOURCE', 'ZIG', 'WASM_OPT', 'LASM_TARGET_DIR', 'LASM_CACHE_DIR', 'LEAN_PATH', 'LEAN_SRC_PATH']) delete environment[key];
  run(process.execPath, [npmCli, 'install', '--offline', '--ignore-scripts', '--no-audit', '--no-fund'], { cwd: project, env: environment });
  const isolated = withPath(environment, [tools, join(leanPrefix, 'bin'),
    ...(process.platform === 'win32' ? [join(process.env.SystemRoot ?? 'C:\\Windows', 'System32')] : [])].join(delimiter));
  for (const name of ['fs', 'process', 'expr']) {
    const fixture = join(project, name);
    mkdirSync(fixture);
    copyFileSync(join(root, `test/fixtures/${name}-conformance/Main.lean`), join(fixture, 'Main.lean'));
    run(process.execPath, [join(project, 'node_modules/@lasm/compiler/bin/lasm.mjs'), 'build', 'Main.lean', 'dist'], {
      cwd: fixture, env: isolated, timeout: 600_000 });
    for (const kind of ['native', 'wasm']) {
      const cwd = join(fixture, kind);
      mkdirSync(join(cwd, 'directory/inner'), { recursive: true });
      mkdirSync(join(cwd, 'order'));
      writeFileSync(join(cwd, 'target'), 'outside'); writeFileSync(join(cwd, 'directory/target'), 'inside');
      for (const file of ['zeta','alpha','mu','日本語']) writeFileSync(join(cwd, 'order', file), '');
      if (process.platform !== 'win32') symlinkSync('directory/inner', join(cwd, 'linkdir'));
    }
    const args = name === 'process' ? [process.execPath] : [];
    const native = run(lean, ['--run', join(fixture, 'Main.lean'), ...args], { cwd: join(fixture, 'native'), env: environment, timeout: 60_000 });
    const wasm = run(process.execPath, [join(fixture, 'dist/main.mjs'), ...args], { cwd: join(fixture, 'wasm'), env: environment, timeout: 60_000 });
    assert.equal(wasm, native, `${name} differs from native Lean on ${process.platform}-${process.arch}`);
  }
  reports.push({ manager: 'npm', ordinaryNativeParity: ['IO.FS', 'IO.Process', 'Lean.Expr'], installedPackage: true });
});

test.after(() => {
  mkdirSync(join(root, '.work/evidence'), { recursive: true });
  writeFileSync(process.env.LASM_TEST_REPORT ?? join(root, '.work/evidence/release-install.json'), JSON.stringify({ ...release,
    testedNode: process.version, testedPlatform: `${process.platform}-${process.arch}`,
    executionEnvironment: process.env.LASM_TEST_ENVIRONMENT ?? 'native',
    expectedManagers: Object.keys(managers), complete: reports.length === Object.keys(managers).length && !!ordinaryMain, ordinaryMain, tests: reports }, null, 2) + '\n');
});
