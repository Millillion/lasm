// This control intentionally imports only Node built-ins. The isolated parent
// exposes Node/npm, the candidate tarball, fixture and expected native results.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, copyFileSync, existsSync, statSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join, resolve, dirname } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';

const [workspaceArg, archiveArg, sourceArg, oracleArg, hiddenCheckoutFile] = process.argv.slice(2);
const workspace = resolve(workspaceArg), archive = resolve(archiveArg);
const project = join(workspace, 'project'), tools = join(workspace, 'toolchains'), output = join(workspace, 'dist');
assert.equal(existsSync(tools), false, 'tool cache must begin empty');
assert.throws(() => readFileSync(hiddenCheckoutFile), { code: 'EACCES' }, 'checkout contents must be inaccessible');
for (const name of ['lean', 'lake', 'clang', 'python3', 'git']) {
  const absent = spawnSync(name, ['--version']);
  assert.equal(absent.error?.code, 'ENOENT', `${name} must not be installed on PATH`);
}
mkdirSync(project, { recursive: true });
writeFileSync(join(project, 'package.json'), '{"private":true,"type":"module"}\n');
writeFileSync(join(workspace, 'npm-user-config'), ''); writeFileSync(join(workspace, 'npm-global-config'), '');
const npm = resolve(dirname(process.execPath), '../lib/node_modules/npm/bin/npm-cli.js');
const env = { ...process.env, LASM_TOOLCHAIN_CACHE: tools, LEAN_NUM_THREADS: '2' };
execFileSync(process.execPath, [npm, 'install', '--ignore-scripts', '--no-audit', '--no-fund',
  '--registry=https://registry.npmjs.org/', '--cache', join(workspace, 'npm-cache'),
  '--userconfig', join(workspace, 'npm-user-config'), '--globalconfig', join(workspace, 'npm-global-config'), archive],
  { cwd: project, env, stdio: 'inherit', timeout: 600_000 });
const compiler = join(project, 'node_modules/@lasm/compiler');
for (const file of ['bin/lasm.mjs', 'src/native/node_modules/koffi/index.cjs', 'targets/lean-4.34.0-wasm64/target.json'])
  assert.ok(existsSync(join(compiler, file)), `installed package needs ${file}`);
const source = join(project, 'Main.lean');
copyFileSync(sourceArg, source);
writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const cli = join(compiler, 'bin/lasm.mjs'), started = performance.now();
execFileSync(process.execPath, [cli, 'build', source, '--output', output], { cwd: project, env, stdio: 'inherit', timeout: 1800_000 });
const firstBuildSeconds = (performance.now() - started) / 1000;
const wasmMtime = statSync(join(output, 'program.wasm')).mtimeMs;
const buildInfo = JSON.parse(readFileSync(join(output, 'build-info.json'), 'utf8'));
const controls = JSON.parse(readFileSync(oracleArg, 'utf8')), checks = [];
for (const control of controls) {
  const execution = spawnSync(process.execPath, [join(output, 'main.mjs'), ...control.args],
    { cwd: workspace, env: { ...env, PATH: '' }, encoding: 'utf8', timeout: 90_000 });
  assert.ifError(execution.error);
  const actual = { code: execution.status, stdout: execution.stdout, stderr: execution.stderr };
  assert.deepEqual(actual, control.native);
  checks.push({ args: control.args, expected: control.native, actual });
}
const cached = performance.now();
const immediate = spawnSync(process.execPath, [cli, source, '--', ...controls[0].args],
  { cwd: workspace, env, encoding: 'utf8', timeout: 180_000 });
assert.ifError(immediate.error);
assert.equal(immediate.status, controls[0].native.code);
assert.equal(immediate.stdout, controls[0].native.stdout);
assert.doesNotMatch(immediate.stderr, /Building .*for/);
assert.equal(statSync(join(output, 'program.wasm')).mtimeMs, wasmMtime);
const report = { scope: 'Cold npm installation and managed compilation in an isolated filesystem containing only Node/npm and standard OS shared libraries',
  node: process.version, platform: `${process.platform}-${process.arch}`,
  package: JSON.parse(readFileSync(join(compiler, 'package.json'), 'utf8')).version,
  firstBuildSeconds, cachedDirectRunSeconds: (performance.now() - cached) / 1000,
  sourceSha256: createHash('sha256').update(readFileSync(source)).digest('hex'), build: buildInfo, checks,
  compiler, output, toolchains: tools, recordedAt: new Date().toISOString() };
writeFileSync(join(workspace, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
