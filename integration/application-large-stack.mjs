// Preserve the original failing benchmark, including its 4 GiB stack setting.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync, renameSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg] = process.argv.slice(2);
if (!outputArg || !['node', 'deno', 'bun'].includes(target) || !engineArg || !compilerArg)
  throw new Error('Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER');
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
if (existsSync(output)) throw new Error('Preserve previous acceptance output');
mkdirSync(output, { recursive: true });
const original = resolve('.cache/lean4-4.34.0/tests/compile_bench/const_fold.lean');
const sources = JSON.parse(readFileSync('docs/evidence/lean-4.34-upstream-source-files.json', 'utf8'));
assert.equal(await hashFile(original), sources['tests/compile_bench/const_fold.lean'].sha256);
const expectedFile = original + '.out.expected';
assert.equal(await hashFile(expectedFile), sources['tests/compile_bench/const_fold.lean.out.expected'].sha256);
const expected = { code: 0, stdout: readFileSync(expectedFile, 'utf8'), stderr: '' };
assert.equal(await hashFile(original + '.init.sh'), sources['tests/compile_bench/const_fold.lean.init.sh'].sha256);
const source = join(output, 'const_fold.lean'); copyFileSync(original, source);
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(source);
// Preserve the original init sidecar's stack setting. Native interpreter and
// application behavior depend on it; using the builder's 8 MiB default is not
// the unchanged benchmark configuration. The outer runner also applies the
// sidecar's unlimited host-stack setting, while keeping all memory guards.
const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2', LEAN_STACK_SIZE_KB: '4194304' };
const run = (program, args, cwd = output, environment = env) => {
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout: 90_000, maxBuffer: 1024 * 1024 });
  assert.ifError(result.error); return { code: result.status, stdout: result.stdout, stderr: result.stderr };
};
const interpreted = run(lean.lean, ['-Dlinter.all=false', '--run', source, '15']);
assert.deepEqual(interpreted, expected);
execFileSync(lean.lean, ['-j2', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], { env, cwd: output, stdio: 'inherit', timeout: 90_000 });
const native = join(output, 'native');
execFileSync(join(lean.prefix, 'bin/leanc'), ['-O3', '-DNDEBUG', '-o', native, source + '.c'], { env, cwd: output, stdio: 'inherit', timeout: 90_000 });
assert.deepEqual(run(native, ['15']), expected);
const dist = join(output, 'dist');
execFileSync(process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', source, '--target', target, '--output', dist],
  { env, cwd: output, stdio: 'inherit', timeout: 1800_000 });
const prefix = target === 'deno' ? ['run', '-A'] : [];
const results = [];
for (let index = 0; index < 30; index++) {
  const result = run(engine, [...prefix, join(dist, 'main.mjs'), '15']);
  results.push(result); assert.deepEqual(result, expected, `ordinary repetition ${index}`);
  console.log(`ordinary ${target} ${index + 1}/30 passed`);
}

assert.equal(await hashFile(source), sources['tests/compile_bench/const_fold.lean'].sha256);
const deployed = join(output, 'relocated deployment'), empty = join(output, 'empty-cwd');
renameSync(dist, deployed); renameSync(source, source + '.hidden');
mkdirSync(empty);
const deployedEnvironment = Object.fromEntries(Object.entries(process.env)
  .filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_TOOLCHAIN_CACHE)/.test(name)));
Object.assign(deployedEnvironment, { PATH: '', DENO_DISABLE_NODE_SHIM: '1',
  LEAN_NUM_THREADS: '2', LEAN_STACK_SIZE_KB: '4194304' });
const relocated = run(engine, [...prefix, join(deployed, 'main.mjs'), '15'], empty, deployedEnvironment);
assert.deepEqual(relocated, expected, 'relocated deployment without source/tool paths');
const report = { scope: 'Unchanged upstream const_fold native compiled/interpreted controls and 30 installed-application repetitions with its original 4 GiB thread-stack setting',
  target, engineVersion: execFileSync(engine, ['--version'], { encoding: 'utf8' }).trim(), compiler,
  sourceSha256: await hashFile(source + '.hidden'), expected, results,
  deployment: { directory: deployed, sourceHidden: true, path: '', buildToolEnvironmentRemoved: true,
    unchangedStackSetting: '4194304', result: relocated },
  wasmSha256: await hashFile(join(deployed, 'program.wasm')), glueSha256: await hashFile(join(deployed, 'program.cjs')),
  build: JSON.parse(readFileSync(join(deployed, 'build-info.json'), 'utf8')),
  resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ target, ordinaryPassed: results.length }));
