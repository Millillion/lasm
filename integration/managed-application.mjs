// Invoke with run-bounded.mjs and base-pages.py on the maintainer host.
import assert from 'node:assert/strict';
import { mkdirSync, copyFileSync, writeFileSync, readFileSync, existsSync, statSync } from 'node:fs';
import { join, resolve, dirname, delimiter } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync, spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, target = 'node', engineArg = process.execPath, version = '4.34.0', compilerArg = root, ...extra] = process.argv.slice(2);
if (!outputArg || !['node', 'deno', 'bun'].includes(target) || !/^\d+\.\d+\.\d+$/.test(version) || extra.length)
  throw new Error('Usage: managed-application.mjs NEW_OUTPUT [TARGET ENGINE LEAN_VERSION INSTALLED_COMPILER]');
const base = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
if (existsSync(base)) throw new Error('Choose a new output directory');
const project = join(base, 'source project'), dist = join(base, 'deployment'), source = join(project, 'Main.lean');
mkdirSync(project, { recursive: true });
copyFileSync(join(root, 'test/fixtures/application-main/Main.lean'), source);
writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const env = { ...process.env, PATH: dirname(process.execPath) };
for (const name of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(name)) delete env[name];
const cli = args => execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), ...args],
  { cwd: project, env, encoding: 'utf8', timeout: 1800_000, stdio: ['ignore', 'pipe', 'inherit'] });
const started = performance.now();
cli(['build', source, '--target', target, '--output', dist]);
const buildSeconds = (performance.now() - started) / 1000;
const first = JSON.parse(readFileSync(join(dist, 'build-info.json'), 'utf8'));
const wasmHash = await hashFile(join(dist, 'program.wasm')), wasmMtime = statSync(join(dist, 'program.wasm')).mtimeMs;
const cacheStarted = performance.now();
cli(['build', source, '--target', target, '--output', dist]);
const cachedBuildSeconds = (performance.now() - cacheStarted) / 1000;
assert.equal(statSync(join(dist, 'program.wasm')).mtimeMs, wasmMtime, 'cache reuse must not replace output');
assert.equal(await hashFile(join(dist, 'program.wasm')), wasmHash);
const lean = await provisionLean(source);
const nativeC = join(base, 'native.c'), native = join(base, process.platform === 'win32' ? 'native.exe' : 'native');
execFileSync(lean.lean, ['-j1', '-s8192', '-R', project, '-Dcompiler.postponeCompile=false', '-c', nativeC, source],
  { env, stdio: 'inherit', timeout: 180_000 });
execFileSync(join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'), [nativeC, '-O2', '-o', native],
  { env, stdio: 'inherit', timeout: 180_000 });
const controls = [];
for (const args of [['hello λ', '', 'space argument'], ['fail']]) {
  const nativeCwd = join(base, 'native-cwd-' + controls.length), targetCwd = join(base, 'target-cwd-' + controls.length);
  mkdirSync(nativeCwd); mkdirSync(targetCwd);
  const run = (file, argv, cwd) => {
    const result = spawnSync(file, argv, { cwd, env: { ...env, PATH: '', LEAN_NUM_THREADS: '2' }, encoding: 'utf8', timeout: 90_000 });
    assert.ifError(result.error);
    return { code: result.status, stdout: result.stdout, stderr: result.stderr };
  };
  const expected = run(native, args, nativeCwd);
  const actual = run(engine, [...(target === 'deno' ? ['run', '-A'] : []), join(dist, 'main.mjs'), ...args], targetCwd);
  controls.push({ args, native: expected, target: actual });
  writeFileSync(join(base, 'controls.json'), JSON.stringify(controls, null, 2) + '\n');
  assert.deepEqual(actual, expected);
}
// Exercise the actual direct-file command and its argument separator too. The
// build above deliberately had only Node on PATH; running selects the installed
// target engine, so add only that engine's directory for this control.
const cliRun = spawnSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), source, '--target', target,
  '--', ...controls[0].args], { cwd: project, encoding: 'utf8', timeout: 180_000,
  env: { ...env, LEAN_NUM_THREADS: '2', PATH: [dirname(process.execPath), dirname(engine)].join(delimiter) } });
assert.ifError(cliRun.error);
assert.equal(cliRun.status, controls[0].native.code);
assert.equal(cliRun.stdout, controls[0].native.stdout);
assert.doesNotMatch(cliRun.stderr, /Building .*for/);
const report = { scope: 'Primary CLI with verified preprovisioned managed tools; cold npm installation and separate-machine deployment remain separate gates',
  compiler, packageVersion: JSON.parse(readFileSync(join(compiler, 'package.json'), 'utf8')).version,
  target, platform: `${process.platform}-${process.arch}`, node: process.version,
  engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(), build: first,
  wasmSha256: wasmHash, buildSeconds, cachedBuildSeconds, controls,
  directFileCommand: { code: cliRun.status, stdout: cliRun.stdout, stderr: cliRun.stderr },
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
