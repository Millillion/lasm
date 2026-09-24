// Separate application harness; original upstream sources and driver unchanged.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, variant, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg
  && referenceArg && ['release', 'debug'].includes(variant) && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE release|debug');
assert.equal(process.platform, 'linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve earlier attempts'); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
const sources = JSON.parse(readFileSync(sourcesFile));
const registration = inventory.tests.find(row => row.name === 'pkg/debug');
assert.equal(registration?.driver, 'tests/pkg/debug/run_test.sh');
const prefix = 'tests/pkg/debug/';
const originals = Object.fromEntries(Object.entries(sources).filter(([path]) => path.startsWith(prefix))
  .map(([path, identity]) => [path.slice(prefix.length), identity]));
const report = { scope: 'Original upstream debug/release executable settings through installed application builds',
  name: 'pkg/debug', variant, target, engine, compiler, reference,
  sourceManifestSha256: await hashFile(sourcesFile), sourceArchiveSha256: inventory.sourceArchiveSha256,
  harnessSha256: await hashFile(fileURLToPath(import.meta.url)), resourceReport: process.env.LASM_RESOURCE_REPORT,
  commands: [], passed: false,
  adaptations: [
    'The original native shell driver tests both release and debug executables unchanged before this selected deployed variant.',
    'The original stage pin and all source bytes remain in independent native and application copies; a separate release-pinned build copy retains every other original byte.',
    'All source copies are hidden before relocated execution, with an empty PATH and no build-tool environment.',
    'Expected assertion failure is observed directly. Exit code, signal, stdout, panic location/message and uncaught exception match exactly. Each backtrace must contain actual backend frames; raw diagnostics remain recorded. Native addresses vary with ASLR and native/Wasm frame formats differ.',
    'Parallel environment controls additionally require exact native stderr when LEAN_BACKTRACE=0, and actual frames when enabled or LEAN_BACKTRACE_RAW is set. No upstream assertion or expected output is edited.',
    'Run through the base-pages and process-tree guard with core dumps disabled. A timeout or resource stop is not a compatibility result.',
  ] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
const controls = variant === 'debug' ? [
  { name: 'backtrace disabled', env: { LEAN_BACKTRACE: '0' }, trace: false },
  { name: 'backtrace enabled', env: { LEAN_BACKTRACE: '1' }, trace: true },
  { name: 'only exact zero suppresses backtrace', env: { LEAN_BACKTRACE: '00' }, trace: true },
  { name: 'raw backtrace', env: { LEAN_BACKTRACE_RAW: '1' }, trace: true },
] : [];
function diagnosticParts(observation, backend) {
  const marker = '\nbacktrace:\n', start = observation.stderr.indexOf(marker);
  assert.ok(start >= 0, backend + ': missing real panic backtrace');
  const end = observation.stderr.indexOf('\nuncaught exception:', start + marker.length);
  assert.ok(end > start, backend + ': missing uncaught exception after backtrace');
  const frames = observation.stderr.slice(start + marker.length, end).split('\n');
  assert.ok(frames.length >= 2);
  if (backend === 'native') assert.ok(frames.every(line => /\[0x[0-9a-f]+\]$/.test(line)));
  else {
    assert.ok(frames.every(line => /^\s+at /.test(line)), 'Unexpected engine backtrace format');
    assert.ok(frames.some(line => /wasm-function\[\d+\]/.test(line)), 'Backtrace must contain real Wasm frames');
  }
  return { stable: { ...observation, stderr: observation.stderr.slice(0, start)
    + marker + observation.stderr.slice(end + 1) }, frames };
}
function compare(actual, native, trace) {
  if (!trace) { assert.deepEqual(actual, native); return { exact: true }; }
  const a = diagnosticParts(actual, target), b = diagnosticParts(native, 'native');
  assert.deepEqual(a.stable, b.stable, 'Panic and exception diagnostics must match');
  return { exactTerminationAndPanic: true, nativeFrames: b.frames, engineFrames: a.frames };
}
async function verify(directory, expected) {
  const result = await verifyMixedSources(directory, expected); assert.deepEqual(result.modified, []); return result;
}
function run(label, program, args, cwd, env, success = true) {
  report.phase = label; save(); const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 900_000,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const observation = { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
  report.commands.push({ label, program, args, cwd, seconds: (performance.now() - started) / 1000,
    error: result.error?.message, ...observation }); save();
  assert.ifError(result.error);
  if (success) assert.equal(result.status, 0, label + ': ' + result.stderr);
  return observation;
}
save();
try {
  report.referenceBefore = await verify(reference, sources);
  const lean = await provisionLean(output); assert.equal(lean.commit, inventory.leanCommit);
  Object.assign(report, { lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity });
  const env = { ...nativeLeanEnvironment(lean), TEST_DIR: join(reference, 'tests'),
    SRC_DIR: join(reference, 'src'), SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix,
    STAGE: '1', TEST_CTEST: '1', LEAN_HEADER_SNAPSHOTS: '0', LEAN_NUM_THREADS: '1',
    CMAKE_BUILD_PARALLEL_LEVEL: '1', MAKEFLAGS: '-j1', CXX: join(lean.prefix, 'bin/clang++') };
  report.engineVersion = run('engine version', engine, ['--version'], output, env).stdout.trim();
  report.packageVersion = JSON.parse(readFileSync(join(compiler, 'package.json'))).version;
  const native = join(output, 'native source'), original = join(output, 'original application source');
  for (const directory of [native, original]) {
    cpSync(join(reference, prefix), directory, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true });
    await verify(directory, originals);
  }
  const project = join(output, 'release-pinned application source');
  cpSync(original, project, { recursive: true, preserveTimestamps: true, verbatimSymlinks: true,
    filter: path => path !== join(original, 'lean-toolchain') });
  const buildSources = { ...originals }; delete buildSources['lean-toolchain'];
  report.applicationBefore = await verify(project, buildSources);
  report.parallelPin = { original: readFileSync(join(original, 'lean-toolchain'), 'utf8'),
    release: 'leanprover/lean4:v4.34.0\n', scope: 'Only the explicitly separate application build copy' };
  writeFileSync(join(project, 'lean-toolchain'), report.parallelPin.release);
  assert.equal(await hashFile(join(native, 'run_test.sh')), registration.sha256);
  report.nativeDriver = run('original native release/debug shell driver', '/bin/bash',
    [join(root, 'scripts/application-tests/mixed-native.sh'), 'ordinary', join(native, 'run_test.sh')], native, env);
  report.native = run('selected native executable', join(native, '.lake/build/bin', variant), [], native, env, false);
  assert.equal(report.native.code === 0 && report.native.signal === null, variant === 'release');
  report.environmentControls = controls.map(control => ({ ...control,
    native: run('native ' + control.name, join(native, '.lake/build/bin', variant), [], native,
      { ...env, ...control.env }, false) }));
  report.nativeSourceAfter = await verify(native, originals);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', join(project, variant + '.lean'), '--target', target, '--output', dist], project, env);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  report.applicationAfter = await verify(project, buildSources);
  report.originalApplicationAfter = await verify(original, originals);
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment);
  for (const directory of [native, original, project]) renameSync(directory, directory + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, buildEnvironmentRemoved: true, path: '',
    wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  report.actual = run('selected relocated executable', engine,
    [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv, false);
  report.originalOutcomeMatches = (report.actual.code === 0 && report.actual.signal === null) === (variant === 'release');
  report.referenceAfter = await verify(reference, sources);
  report.diagnosticComparison = compare(report.actual, report.native, variant === 'debug');
  assert.ok(report.originalOutcomeMatches);
  for (const control of report.environmentControls) {
    control.actual = run('deployed ' + control.name, engine,
      [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment,
      { ...runtimeEnv, ...control.env }, false);
    control.comparison = compare(control.actual, control.native, control.trace); save();
  }
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256, 'Harness changed during the run');
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally { report.finishedAt = new Date().toISOString(); save(); }
