// Latest application-path revalidation of unchanged earlier IO fixtures plus a
// supplementary filesystem-surface probe. Every run uses a fresh physical tree.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('..', import.meta.url));
const [outputArg, target, engineArg, compilerArg, ...selection] = process.argv.slice(2);
const nativeOnly = target === 'native';
if (!outputArg || (!nativeOnly && (!['node', 'deno', 'bun'].includes(target) || !engineArg || !compilerArg)))
  throw new Error('Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER [CASE ...], or NEW_OUTPUT native');
if (nativeOnly && (engineArg || compilerArg || selection.length)) throw new Error('Native controls take only NEW_OUTPUT native');
const cases = [
  { name: 'filesystem-surface', source: 'integration/fixtures/FilesystemSurface.lean',
    marker: 'filesystem surface checks passed\n', removesData: true },
  { name: 'filesystem-errors', source: 'integration/fixtures/FilesystemErrors.lean',
    marker: 'filesystem error observations completed\n', removesData: true },
  { name: 'standard-io', source: 'test/fixtures/standard-io/Main.lean',
    marker: 'standard IO checks passed\n', removesData: true },
  { name: 'getline-state', source: 'test/fixtures/getline-state/Main.lean',
    marker: 'getLine stream-state comparison completed\n' },
  { name: 'truncate-errors', source: 'test/fixtures/truncate-errors/Main.lean',
    marker: 'truncate error comparison completed\n', posix: true },
  { name: 'console-buffering', source: 'test/fixtures/console-buffering/Main.lean',
    marker: 'normal shutdown flush\n', posix: true },
];
assert.ok(selection.every(name => cases.some(row => row.name === name)), 'Unknown fixture selection');
const chosen = cases.filter(row => !selection.length || selection.includes(row.name));
const output = resolve(outputArg), engine = nativeOnly ? undefined : resolve(engineArg), compiler = nativeOnly ? undefined : resolve(compilerArg);
assert.ok(!existsSync(output), 'Preserve previous acceptance evidence');
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(output);
const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
const report = { scope: nativeOnly ? 'Native interpreted/compiled fixture controls only; no Wasm application executed'
    : 'Independent native-interpreted/native-compiled and installed relocated application IO comparisons',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  host: process.platform + '-' + process.arch, target, compiler, engine,
  resourceReport: process.env.LASM_RESOURCE_REPORT, cases: [], commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, environment = env, timeout = 120_000) {
  const started = performance.now();
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const record = { label, program, args, cwd, code: result.status, signal: result.signal,
    error: result.error?.message, seconds: (performance.now() - started) / 1000,
    stdout: result.stdout, stderr: result.stderr };
  report.commands.push(record); save();
  assert.ifError(result.error); assert.equal(record.code, 0, label + ': ' + record.stderr);
  return { code: record.code, stdout: record.stdout, stderr: record.stderr };
}
function execute(label, command, base, row, environment) {
  const cwd = join(base, label); mkdirSync(cwd); mkdirSync(join(cwd, 'data')); mkdirSync(join(cwd, 'temporary'));
  const result = run(row.name + '/' + label, command[0], [...command.slice(1), 'data'], cwd,
    { ...environment, TMPDIR: join(cwd, 'temporary'), TMP: join(cwd, 'temporary'), TEMP: join(cwd, 'temporary') });
  assert.ok(result.stdout.endsWith(row.marker), 'Missing completion marker: ' + row.name);
  assert.deepEqual(readdirSync(join(cwd, 'temporary')), [], 'Temporary resources leaked: ' + row.name);
  if (row.removesData) assert.equal(existsSync(join(cwd, 'data')), false, 'Test data not removed: ' + row.name);
  else assert.deepEqual(readdirSync(join(cwd, 'data')), [], 'Test data leaked: ' + row.name);
  return result;
}
try {
  if (!nativeOnly) report.engineVersion = run('engine version', engine, ['--version'], output).stdout.trim();
  for (const fixture of chosen) {
    const sourceFile = join(root, fixture.source);
    const row = { ...fixture, sourceSha256: await hashFile(sourceFile), passed: false };
    report.cases.push(row); save();
    if (fixture.posix && process.platform === 'win32') {
      row.status = 'not-applicable: unchanged fixture requires /bin/sh or /bin/true'; save(); continue;
    }
    const base = join(output, fixture.name), project = join(base, 'source');
    mkdirSync(project, { recursive: true });
    const source = join(project, 'Main.lean'); copyFileSync(sourceFile, source);
    writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
    row.interpreted = execute('native-interpreted', [lean.lean, '-Dlinter.all=false', '--run', source], base, row, env);
    run(fixture.name + '/generate native C', lean.lean,
      ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], project);
    const native = join(project, process.platform === 'win32' ? 'native.exe' : 'native');
    run(fixture.name + '/compile native', join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'),
      ['-O2', '-DNDEBUG', '-o', native, source + '.c'], project);
    row.nativeCompiled = execute('native-compiled', [native], base, row, env);
    assert.deepEqual(row.nativeCompiled, row.interpreted, fixture.name + ' native controls differ');
    if (nativeOnly) {
      row.sourceUnchanged = await hashFile(sourceFile) === row.sourceSha256;
      assert.ok(row.sourceUnchanged); row.passed = true; row.status = 'native controls passed'; save();
      console.log(fixture.name + ': native interpreted and compiled controls passed');
      continue;
    }
    const dist = join(base, 'dist');
    run(fixture.name + '/build application', process.execPath,
      [join(compiler, 'bin/lasm.mjs'), 'build', source, '--target', target, '--output', dist], project, env, 1800_000);
    row.build = JSON.parse(readFileSync(join(dist, 'build-info.json'), 'utf8'));
    const deployed = join(base, 'relocated deployment');
    renameSync(dist, deployed); renameSync(project, project + '.hidden');
    row.wasmSha256 = await hashFile(join(deployed, 'program.wasm'));
    const deploymentEnv = Object.fromEntries(Object.entries(process.env)
      .filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(name)));
    Object.assign(deploymentEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
    row.actual = execute('deployed', [engine, ...(target === 'deno' ? ['run', '-A'] : []), join(deployed, 'main.mjs')],
      base, row, deploymentEnv);
    row.deployment = { sourceHidden: true, path: '', buildEnvironmentRemoved: true, directory: deployed };
    save();
    assert.deepEqual(row.actual, row.interpreted, fixture.name + ' differs from native');
    row.sourceUnchanged = await hashFile(sourceFile) === row.sourceSha256;
    assert.ok(row.sourceUnchanged);
    row.passed = true; row.status = 'passed'; save();
    console.log(fixture.name + ': native controls and relocated ' + target + ' deployment passed');
  }
  report.passed = report.cases.every(row => row.passed || row.status?.startsWith('not-applicable:'));
} finally {
  report.finishedAt = new Date().toISOString(); save();
}
