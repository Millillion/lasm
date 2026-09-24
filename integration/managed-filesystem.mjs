// Revalidate the ordinary Lean filesystem fixture through the installed latest
// application pipeline, with independent native/deployed filesystem trees.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync, symlinkSync, renameSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg] = process.argv.slice(2);
assert.ok(outputArg && engineArg && compilerArg && ['node', 'deno', 'bun'].includes(target),
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER');
const output = resolve(outputArg), compiler = resolve(compilerArg), engine = resolve(engineArg);
assert.ok(!existsSync(output), 'Preserve previous filesystem evidence');
mkdirSync(output, { recursive: true });
const original = resolve('test/fixtures/fs-conformance/Main.lean');
const sourceDirectory = join(output, 'project'); mkdirSync(sourceDirectory);
const source = join(sourceDirectory, 'Main.lean'); copyFileSync(original, source);
writeFileSync(join(sourceDirectory, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourceSha256 = await hashFile(original);
const lean = await provisionLean(source), env = nativeLeanEnvironment(lean);

function filesystem(name) {
  const cwd = join(output, name); mkdirSync(cwd);
  writeFileSync(join(cwd, 'target'), 'outside');
  mkdirSync(join(cwd, 'directory')); writeFileSync(join(cwd, 'directory/child'), 'keep');
  mkdirSync(join(cwd, 'inner/child'), { recursive: true });
  writeFileSync(join(cwd, 'inner/target'), 'inside');
  if (process.platform !== 'win32') symlinkSync('inner/child', join(cwd, 'linkdir'));
  mkdirSync(join(cwd, 'order'));
  for (const name of ['z', 'a', 'λ']) writeFileSync(join(cwd, 'order', name), name);
  return cwd;
}
function execute(program, args, cwd, environment) {
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8',
    timeout: 60_000, maxBuffer: 1024 * 1024 });
  assert.ifError(result.error);
  return { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
}
const interpreted = execute(lean.lean, ['--run', source], filesystem('native-interpreter'), env);
assert.equal(interpreted.code, 0, interpreted.stderr); assert.equal(interpreted.stderr, '');
assert.match(interpreted.stdout, /filesystem conformance passed\n$/);
const cSource = join(sourceDirectory, 'Main.c'), native = join(sourceDirectory, process.platform === 'win32' ? 'native.exe' : 'native');
execFileSync(lean.lean, ['-j1', '-Dcompiler.postponeCompile=false', '-c', cSource, source],
  { env, stdio: 'inherit', timeout: 90_000 });
execFileSync(join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'),
  ['-O3', '-DNDEBUG', '-o', native, cSource], { env, stdio: 'inherit', timeout: 90_000 });
const compiled = execute(native, [], filesystem('native-compiled'), env);
assert.deepEqual(compiled, interpreted);
const dist = join(output, 'dist');
execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', source,
  '--target', target, '--output', dist], { env, stdio: 'inherit', timeout: 1800_000 });
assert.equal(await hashFile(source), sourceSha256);
const build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
const wasmSha256 = await hashFile(join(dist, 'program.wasm'));
const relocated = join(output, 'relocated deployment'); renameSync(dist, relocated);
renameSync(sourceDirectory, sourceDirectory + '.hidden');
const runtimeEnv = { ...process.env, PATH: '' };
for (const key of Object.keys(runtimeEnv)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete runtimeEnv[key];
delete runtimeEnv.LASM_APPLICATION_RUNTIME;
const actual = execute(engine, [...(target === 'deno' ? ['run', '-A'] : []), join(relocated, 'main.mjs')],
  filesystem('deployed'), runtimeEnv);
const report = { scope: 'Ordinary filesystem fixture in installed Lean 4.34 AOT application; native interpreter and C executable controls',
  target, platform: process.platform + '-' + process.arch, engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(),
  compiler, sourceSha256, nativeLeanIdentity: lean.identity, interpreted, compiled, actual, build, wasmSha256,
  assertions: 'Original error, bounds, byte-order, symlink/metadata and failed-write assertions; exact native output, stderr and exit comparison',
  deployment: 'Relocated complete output, hidden source/build directory, empty PATH and no Lean/Lake/Elan environment',
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
assert.deepEqual(actual, interpreted);
assert.equal(readFileSync(join(output, 'deployed/target'), 'utf8'), 'outside');
assert.equal(await hashFile(original), sourceSha256);
console.log(JSON.stringify({ target, status: 'passed', wasmSha256 }));
