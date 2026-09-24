// Parallel shipping-path checks for unchanged upstream Lake project fixtures.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, name, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg
  && referenceArg && ['path with spaces', 'def_clash'].includes(name) && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE "path with spaces"|def_clash');
assert.equal(process.platform, 'linux', 'This original shell-driver adapter currently requires Linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve earlier attempts');
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const sources = JSON.parse(readFileSync(sourcesFile));
const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
const registration = inventory.tests.find(row => row.name === 'pkg/' + name);
assert.equal(registration?.driver, 'tests/pkg/' + name + '/run_test.sh');
const prefix = 'tests/pkg/' + name + '/';
const originals = Object.fromEntries(Object.entries(sources).filter(([path]) => path.startsWith(prefix))
  .map(([path, identity]) => [path.slice(prefix.length), identity]));
const spaces = name === 'path with spaces';
const entry = spaces ? 'Main.lean' : 'TestUse.lean';
const binary = spaces ? name : 'TestUse';
const report = {
  scope: 'Original native Lake drivers plus installed AOT applications; native build-time checks remain separately identified',
  name: registration.name, target, engine, compiler, reference, commands: [], passed: false,
  sourceManifestSha256: await hashFile(sourcesFile), sourceArchiveSha256: inventory.sourceArchiveSha256,
  harnessSha256: await hashFile(fileURLToPath(import.meta.url)), resourceReport: process.env.LASM_RESOURCE_REPORT,
  adaptations: [
    'The complete original shell driver runs unchanged with managed native Lean/Lake before independent installed-CLI comparisons.',
    'Native and original application copies preserve every upstream byte, including the stage pin. A separately recorded build copy changes only that pin to the matching published Lean release.',
    'All copies are hidden before deployment execution. The deployed process has an empty PATH and no build-tool environment variables.',
    spaces
      ? 'Both original Lake invocations and their intervening prefix-file assertion remain native checks. The parallel application check also builds twice, verifies cache reuse, and executes its spaced deployment path before and after creating a file at the path prefix.'
      : 'The original expected elaboration failure, successful cross-package private imports, and expected same-package linker clash remain native checks. Separate installed-CLI builds require the same two error substrings, and the relocated successful application must match native stdout, stderr and termination exactly.',
    'No source, original assertion or expected output is edited. Each subprocess has a 15-minute deadline under the existing single-workload resource guard; resource stops do not establish incompatibility.',
  ],
};
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
async function verify(directory, expected) {
  const result = await verifyMixedSources(directory, expected);
  assert.deepEqual(result.modified, [], 'Original sources changed: ' + directory);
  return result;
}
function run(label, program, args, cwd, env, success = true) {
  report.phase = label; save();
  const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 900_000,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const observation = { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
  report.commands.push({ label, program, args, cwd, seconds: (performance.now() - started) / 1000,
    error: result.error?.message, timeout: result.error?.code === 'ETIMEDOUT', ...observation });
  save(); assert.ifError(result.error);
  if (success) { assert.equal(result.signal, null, label); assert.equal(result.status, 0, label + ': ' + result.stderr); }
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
  report.parallelPin = { original: existsSync(join(original, 'lean-toolchain'))
    ? readFileSync(join(original, 'lean-toolchain'), 'utf8') : null,
    release: 'leanprover/lean4:v4.34.0\n', scope: 'Only the explicitly separate application build copy' };
  writeFileSync(join(project, 'lean-toolchain'), report.parallelPin.release);
  assert.equal(await hashFile(join(native, 'run_test.sh')), registration.sha256);
  report.nativeDriver = run('original native shell driver', '/bin/bash',
    [join(root, 'scripts/application-tests/mixed-native.sh'), 'ordinary', join(native, 'run_test.sh')], native, env);
  report.native = run('native compiled application', join(native, '.lake/build/bin', binary), [], native, env);
  assert.deepEqual(report.native, { code: 0, signal: null, stdout: spaces ? 'Hello, world!\n' : 'fooA; fooB\n', stderr: '' });
  report.nativeSourceAfter = await verify(native, originals);

  const build = (label, source, dist, success = true) => run(label, process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', join(project, source), '--target', target, '--output', dist], project, env, success);
  if (!spaces) {
    report.expectedBuildFailures = [];
    for (const [source, message] of [['TestFoo.lean', "environment already contains 'foo'"], ['TestLocalUse.lean', 'lp_test_bar']]) {
      const dist = join(output, 'expected failure ' + source);
      const observation = build('installed expected failure ' + source, source, dist, false);
      assert.equal(observation.signal, null, 'The diagnostic must be a regular compiler/linker rejection');
      assert.notEqual(observation.code, 0);
      assert.ok((observation.stdout + observation.stderr).includes(message), 'Preserve the original diagnostic assertion: ' + message);
      assert.equal(existsSync(join(dist, '.lasm-application.json')), false, 'A rejected build must not publish a deployment');
      report.expectedBuildFailures.push({ source, originalExpectedSubstring: message, observation }); save();
    }
  }
  const dist = join(output, 'before relocation', binary);
  build('installed application build', entry, dist);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  report.wasmSha256 = await hashFile(join(dist, 'program.wasm'));
  if (spaces) {
    const cached = build('unchanged installed application rebuild', entry, dist);
    assert.ok(cached.stderr.includes('Reused Lean 4.34.0 for ' + target + ':'), 'Unchanged second build must reuse the verified cache');
    assert.deepEqual(JSON.parse(readFileSync(join(dist, 'build-info.json'))), report.build);
    assert.equal(await hashFile(join(dist, 'program.wasm')), report.wasmSha256);
    report.cacheReused = true;
  }
  report.applicationAfter = await verify(project, buildSources);
  report.originalApplicationAfter = await verify(original, originals);
  const deployment = join(output, 'relocated deployment', binary);
  mkdirSync(dirname(deployment)); renameSync(dist, deployment);
  for (const directory of [native, original, project]) renameSync(directory, directory + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, buildEnvironmentRemoved: true, path: '',
    wasmSha256: report.wasmSha256 };
  report.actual = run('relocated compiled application', engine,
    [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv);
  assert.deepEqual(report.actual, report.native);
  if (spaces) {
    const shadow = join(dirname(deployment), 'path');
    assert.ok(!existsSync(shadow)); writeFileSync(shadow, '');
    report.shadowFile = { path: shadow, sha256: await hashFile(shadow) };
    report.actualWithShadow = run('relocated application with path-prefix shadow file', engine,
      [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv);
    assert.deepEqual(report.actualWithShadow, report.native);
  }
  report.referenceAfter = await verify(reference, sources);
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256, 'Harness changed during the run');
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally { report.finishedAt = new Date().toISOString(); save(); }
