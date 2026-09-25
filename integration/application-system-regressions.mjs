import assert from 'node:assert/strict';
import { mkdirSync, existsSync, copyFileSync, renameSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { processOutput } from './process-output.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, version, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER LEAN_VERSION');
assert.match(version ?? '', /^\d+\.\d+\.\d+$/);
assert.equal(process.platform, 'linux', 'This comparison uses a Linux cgroup constraint');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), compiler = resolve(compilerArg), engine = resolve(engineArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const guard = JSON.parse(readFileSync(process.env.LASM_RESOURCE_REPORT));
const expectedConstraint = guard.limits.memoryMax;
assert.ok(Number.isSafeInteger(expectedConstraint) && expectedConstraint > 0);
const inputs = ['integration/application-system-regressions.mjs', 'integration/fixtures/SystemQueries.lean'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const lean = await provisionLean(output);
const environment = nativeLeanEnvironment(lean);
const report = { scope: 'Ordinary Lean system queries in native interpreter, native C application and isolated installed deployment on this Linux host. Volatile free/available values use invariant checks, not exact cross-process equality.',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  target, engine, compiler, packageVersion: JSON.parse(readFileSync(join(compiler, 'package.json'))).version,
  platform: process.platform + '-' + process.arch, inputs: hashes, expectedConstraint,
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, command, cwd, env = environment, timeout = 60_000) {
  const execution = spawnSync(command[0], command.slice(1), { cwd, env, timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const observed = processOutput(execution);
  report.commands.push({ label, command, cwd, ...observed, signal: execution.signal, error: execution.error?.message }); save();
  assert.ifError(execution.error); assert.equal(execution.signal, null, label);
  assert.equal(observed.code, 0, label + ': ' + observed.stderr);
  return observed;
}
save();
try {
  report.engineVersion = run('engine version', [engine, '--version'], output).stdout.trim();
  const project = join(output, 'source'); mkdirSync(project);
  const source = join(project, 'Main.lean'); copyFileSync(join(root, inputs[1]), source);
  writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const interpreted = run('native interpreted', [lean.lean, '--run', source, String(expectedConstraint)], project);
  assert.equal(interpreted.stderr, ''); assert.match(interpreted.stdout, /system queries checked\n$/);
  run('generate native C', [lean.lean, '-j1', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], project);
  const native = join(project, 'native');
  run('compile native application', [join(lean.prefix, 'bin/leanc'), '-O2', '-DNDEBUG', '-o', native, source + '.c'], project);
  assert.deepEqual(run('native compiled', [native, String(expectedConstraint)], project), interpreted);
  const dist = join(output, 'dist');
  run('build installed application', [process.execPath, join(compiler, 'bin/lasm.mjs'), 'build', source,
    '--target', target, '--output', dist], project, environment, 1800_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  const relocated = join(output, 'relocated deployment'); renameSync(dist, relocated); renameSync(project, project + '.hidden');
  report.wasmSha256 = await hashFile(join(relocated, 'program.wasm'));
  const deployedEnvironment = Object.fromEntries(Object.entries(process.env).filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(name)));
  Object.assign(deployedEnvironment, { PATH: '', LEAN_NUM_THREADS: '1', DENO_DISABLE_NODE_SHIM: '1' });
  report.deployment = { directory: relocated, sourceHidden: true, path: '', buildEnvironmentRemoved: true };
  assert.deepEqual(run('deployed', [engine, ...(target === 'deno' ? ['run', '-A'] : []),
    join(relocated, 'main.mjs'), String(expectedConstraint)], relocated, deployedEnvironment), interpreted);
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [name, hash] of Object.entries(hashes))
    if (await hashFile(join(root, name)) !== hash) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
