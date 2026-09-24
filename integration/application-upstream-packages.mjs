// Parallel application harness for reviewed, unchanged upstream Lake projects.
// The original shell driver is also run as a separate native build-time control.
import assert from 'node:assert/strict';
import { createReadStream, cpSync, existsSync, mkdirSync, readFileSync, readdirSync,
  renameSync, symlinkSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { createGunzip } from 'node:zlib';
import { createInterface } from 'node:readline';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
assert.equal(process.platform, 'linux', 'This parallel shell-driver harness currently requires Linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const [outputArg, target, engineArg, compilerArg, referenceArg, name] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg
  && ['float', 'ofScientific', 'exe_private_lean_import'].includes(name),
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE float|ofScientific|exe_private_lean_import');
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve earlier acceptance evidence');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const inventoryFile = join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json');
const sources = JSON.parse(readFileSync(sourcesFile));
const inventory = JSON.parse(readFileSync(inventoryFile));
const registration = inventory.tests.find(row => row.name === 'pkg/' + name);
assert.equal(registration?.driver, 'tests/pkg/' + name + '/run_test.sh');
const prefix = 'tests/pkg/' + name + '/';
const packageSources = Object.fromEntries(Object.entries(sources).filter(([path]) => path.startsWith(prefix))
  .map(([path, identity]) => [path.slice(prefix.length), identity]));
const numeric = name !== 'exe_private_lean_import';
const dataName = numeric ? name === 'float' ? 'test-vectors' : 'test-data' : undefined;
const executableName = numeric ? name === 'float' ? 'testfloat-check' : 'parse-number-check' : 'main';
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const report = { scope: 'Reviewed unchanged upstream Lake applications, complete vendored datasets and original native shell controls',
  name: registration.name, target, compiler, engine, reference, sourceArchiveSha256: inventory.sourceArchiveSha256,
  sourceManifestSha256: await hashFile(sourcesFile), resourceReport: process.env.LASM_RESOURCE_REPORT,
  commands: [], passed: false,
  adaptations: [
    'Original tests, shell drivers, vectors and expected values are unchanged; native and application builds use independent verified copies.',
    'Each copied package receives an ordinary Lean 4.34.0 toolchain pin; no original file is overwritten.',
    'The application phase uses the installed Lasm CLI, moves dist and its unchanged data into a deployment, hides both source trees and removes build-tool environment variables.',
    'No input filters or extra program arguments are used. Each original self-check and complete vendored input count must pass.',
    'Float durations are retained in raw logs but omitted from differential comparison; every per-file count, failure count and total is compared.',
    'Float explicitly invokes the ordinary external gzip executable. Its isolated PATH contains only that recorded dependency; ofScientific has an empty PATH.',
    'The harness allows 30 minutes per build/execution under the existing process-tree resource guard. A timeout is not an API or fundamental limitation.',
  ] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, env, timeout = 1800_000) {
  report.phase = label; save();
  const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const row = { label, program, args, cwd, code: result.status, signal: result.signal,
    error: result.error?.message, timeout: result.error?.code === 'ETIMEDOUT',
    seconds: (performance.now() - started) / 1000,
    stdout: result.stdout, stderr: result.stderr };
  report.commands.push(row); save();
  assert.ifError(result.error); assert.equal(row.code, 0, label + ': ' + row.stderr);
  return { code: row.code, stdout: row.stdout, stderr: row.stderr };
}
async function verify(directory, expected) {
  const checked = await verifyMixedSources(directory, expected);
  assert.deepEqual(checked.modified, [], 'Original input changed: ' + directory);
  return checked;
}
function observations(result, expected) {
  assert.equal(result.stderr, '', 'Runtime diagnostics are never filtered');
  if (!numeric) {
    assert.equal(result.stdout, 'empty env has no Nat: true\n');
    return result;
  }
  const rows = [];
  const counts = name === 'float'
    ? /^(.*): (\d+) tests, (\d+) failures \([^\r\n]*\)$/
    : /^(.*): (\d+) vectors, (\d+) failures$/;
  let total, durationLines = [];
  for (const line of result.stdout.trimEnd().split('\n')) {
    const match = line.match(counts);
    if (match) {
      rows.push({ label: match[1], count: Number(match[2]), failures: Number(match[3]) });
    } else if (/^total: \d+ (?:tests|vectors), \d+ failures across \d+ file\(s\)$/.test(line)) {
      assert.equal(total, undefined, 'Duplicate total'); total = line;
    } else if (name === 'float' && /^total time \[(?:model|native)\]: .+$/.test(line)) {
      durationLines.push(line.split(': ')[0]);
    } else assert.fail('Unexpected runtime output: ' + line);
  }
  assert.deepEqual(rows, expected.rows, 'Every original vector and backend must be checked');
  assert.equal(total, expected.total);
  assert.deepEqual(durationLines, name === 'float' ? ['total time [model]', 'total time [native]'] : []);
  return { code: result.code, rows, total, stderr: result.stderr };
}
async function expectedObservations() {
  const files = Object.keys(packageSources).filter(path => path.startsWith(dataName + '/')
    && path.endsWith(name === 'float' ? '.txt.gz' : '.txt')).sort();
  assert.ok(files.length);
  const rows = [], vectors = [];
  for (const path of files) {
    const file = join(reference, prefix, path);
    const input = name === 'float' ? createReadStream(file).pipe(createGunzip()) : createReadStream(file);
    let count = 0;
    for await (const line of createInterface({ input, crlfDelay: Infinity })) {
      const trimmed = line.trim();
      if (trimmed && (name === 'float' || !trimmed.startsWith('#'))) count++;
    }
    assert.ok(count > 0, 'Empty fixture: ' + path);
    vectors.push({ path, count, sha256: await hashFile(file) });
    if (name === 'float') for (const backend of ['model', 'native'])
      rows.push({ label: path.slice((dataName + '/').length, -'.txt.gz'.length) + ' [' + backend + ']', count, failures: 0 });
    else rows.push({ label: path, count, failures: 0 });
  }
  return { vectors, rows, total: `total: ${rows.reduce((sum, row) => sum + row.count, 0)} ${name === 'float' ? 'tests' : 'vectors'}, 0 failures across ${files.length} file(s)` };
}

save();
try {
  report.referenceBefore = await verify(reference, sources);
  const lean = await provisionLean(output);
  assert.equal(lean.commit, inventory.leanCommit);
  Object.assign(report, { lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity });
  const env = { ...nativeLeanEnvironment(lean), TEST_DIR: join(reference, 'tests'),
    SRC_DIR: join(reference, 'src'), SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix,
    STAGE: '1', TEST_CTEST: '1', LEAN_HEADER_SNAPSHOTS: '0', CMAKE_BUILD_PARALLEL_LEVEL: '1',
    LEAN_NUM_THREADS: '1', MAKEFLAGS: '-j1', CXX: join(lean.prefix, 'bin/clang++') };
  report.engineVersion = run('engine version', engine, ['--version'], output, env, 30_000).stdout.trim();
  report.packageVersion = JSON.parse(readFileSync(join(compiler, 'package.json'))).version;
  if (numeric) report.expected = await expectedObservations();
  save();
  const native = join(output, 'native source'), project = join(output, 'application source');
  for (const directory of [native, project]) {
    cpSync(join(reference, prefix), directory, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true });
    await verify(directory, packageSources);
    assert.ok(!existsSync(join(directory, 'lean-toolchain')));
    writeFileSync(join(directory, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
  }
  assert.equal(await hashFile(join(native, 'run_test.sh')), registration.sha256);
  report.nativeDriver = run('original native shell driver', '/bin/bash',
    [join(root, 'scripts/application-tests/mixed-native.sh'), 'ordinary', join(native, 'run_test.sh')], native, env);
  report.nativeCompiled = run('native compiled application', join(native, '.lake/build/bin', executableName), [], native, env);
  report.nativeObservations = observations(report.nativeCompiled, report.expected);
  report.nativeSourceAfter = await verify(native, packageSources);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', join(project, 'Main.lean'), '--target', target, '--output', dist], project, env);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  report.applicationSourceAfter = await verify(project, packageSources);
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment);
  if (dataName) cpSync(join(reference, prefix, dataName), join(deployment, dataName), { recursive: true, preserveTimestamps: true });
  const dataSources = Object.fromEntries(Object.entries(packageSources).filter(([path]) => dataName && path.startsWith(dataName + '/')));
  report.deployedDataBefore = await verify(deployment, dataSources);
  renameSync(native, native + '.hidden'); renameSync(project, project + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env)
    .filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  if (name === 'float') {
    const gzip = '/usr/bin/gzip', dependencyPath = join(output, 'runtime dependencies');
    mkdirSync(dependencyPath); symlinkSync(gzip, join(dependencyPath, 'gzip')); runtimeEnv.PATH = dependencyPath;
    report.externalDependency = { path: gzip, sha256: await hashFile(gzip),
      version: run('gzip version', gzip, ['--version'], output, env, 30_000).stdout.trim(),
      purpose: 'Unchanged upstream program explicitly decompresses every original test-vector file' };
  }
  report.deployment = { directory: deployment, sourceHidden: true, buildEnvironmentRemoved: true,
    path: runtimeEnv.PATH, sourceFiles: [], wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  const unexpectedSources = directory => readdirSync(directory, { withFileTypes: true }).flatMap(entry =>
    entry.isDirectory() ? unexpectedSources(join(directory, entry.name))
      : entry.name.endsWith('.lean') ? [join(directory, entry.name)] : []);
  report.deployment.sourceFiles = unexpectedSources(deployment);
  assert.deepEqual(report.deployment.sourceFiles, []);
  report.actual = run('relocated compiled application', engine,
    [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv);
  report.actualObservations = observations(report.actual, report.expected);
  assert.deepEqual(report.actualObservations, report.nativeObservations);
  report.deployedDataAfter = await verify(deployment, dataSources);
  report.referenceAfter = await verify(reference, sources);
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally {
  report.finishedAt = new Date().toISOString(); save();
}
