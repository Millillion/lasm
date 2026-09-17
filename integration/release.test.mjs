import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, mkdtempSync, rmSync, symlinkSync } from 'node:fs';
import { join, dirname, resolve } from 'node:path';
import { root, run, sha256 } from '../src/toolchain.mjs';

const release = JSON.parse(readFileSync(join(root, '.work/release/release.json'), 'utf8'));
const archive = join(root, '.work/release', release.compiler);
assert.equal(sha256(readFileSync(archive)), release.compilerSha256);
const leanPrefix = run('lean', ['--print-prefix']);
const npmCli = resolve(dirname(process.execPath), '../lib/node_modules/npm/bin/npm-cli.js');
const tools = join(root, '.work/release-tests/tools');
mkdirSync(tools, { recursive: true });
for (const [name, path] of [['node', process.execPath], ['lean', join(leanPrefix, 'bin/lean')], ['lake', join(leanPrefix, 'bin/lake')],
  ['sh', '/bin/sh'], ['dirname', '/usr/bin/dirname'], ['sed', '/usr/bin/sed'], ['uname', '/usr/bin/uname']]) {
  rmSync(join(tools, name), { force: true }); symlinkSync(path, join(tools, name));
}
const managers = {
  npm: [process.execPath, npmCli],
  pnpm: [join(root, 'node_modules/pnpm/pnpm')],
  yarn: [process.execPath, join(root, 'node_modules/@yarnpkg/cli-dist/bin/yarn.js')],
};
const reports = [];

for (const [name, cli] of Object.entries(managers)) test(`${name}: local package, isolated build, locked offline reinstall, standalone execution`, { timeout: 240_000 }, async t => {
  const project = mkdtempSync(`/tmp/lasm ${name} project with spaces `);
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
public def copy (source destination : String) : IO ByteArray := do
  let bytes ← Lasm.readBytes source
  Lasm.writeBytes destination bytes
  Lasm.readBytes destination
`);
  writeFileSync(join(project, 'lean/lasm.json'), JSON.stringify({ module: 'App', exports: {
    answer: { declaration: 'answer', parameters: ['Nat'], result: 'Nat' },
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
  const invoke = (args, extra = {}) => run(cli[0], [...cli.slice(1), ...args], { cwd: project, env: environment, timeout: 240_000, ...extra });
  const installStart = performance.now();
  if (name === 'npm') invoke(['install', '--offline', '--ignore-scripts', '--no-audit', '--no-fund']);
  if (name === 'pnpm') invoke(['install', '--offline', '--no-frozen-lockfile', '--ignore-scripts', '--store-dir', join(cache, 'store')]);
  if (name === 'yarn') invoke(['install'], { env: { ...environment, YARN_ENABLE_NETWORK: '0' } });
  const installMs = performance.now() - installStart;
  const isolated = { ...environment, PATH: tools };
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
  const bytes = Buffer.from('日本語\0🙂');
  writeFileSync(join(project, 'data/input'), bytes);
  writeFileSync(join(project, 'run.mjs'), `import createModule from './dist/index.mjs';\nimport {createNodeHost} from './dist/host.mjs';\nconst api = await createModule({host: await createNodeHost({directory:'./data'})});\nconsole.log(JSON.stringify({answer:String(api.answer(5n)),bytes:[...await api.copy('input','output')]}));\napi.dispose();\n`);
  const result = JSON.parse(run(process.execPath, [join(project, 'run.mjs')], { cwd: project, env: { PATH: '/no-compilers-or-packages' } }));
  assert.deepEqual(result, { answer: '42', bytes: [...bytes] });
  assert.deepEqual(readFileSync(join(project, 'data/output')), bytes);
  reports.push({ manager: name, installMs, firstBuildMs, cachedBuildMs, wasmBytes: first.wasmBytes,
    prebuiltModules: first.prebuiltModules, emptyCacheOfflineInstall: true, offlineLockedInstall: true, isolatedCompilerPath: ['node', 'lean', 'lake'],
    osUtilities: ['sh', 'dirname', 'sed', 'uname'], standaloneExecution: true });
});

test.after(() => {
  mkdirSync(join(root, '.work/evidence'), { recursive: true });
  writeFileSync(join(root, '.work/evidence/release-install.json'), JSON.stringify({ ...release, tests: reports }, null, 2) + '\n');
});
