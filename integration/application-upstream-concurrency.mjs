// Explicit extra runtime controls for two unchanged upstream CMake exclusions.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join, resolve, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE');
assert.equal(process.platform, 'linux', 'The original shell-driver control currently requires Linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve previous attempts'); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const sources = JSON.parse(readFileSync(sourcesFile));
const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
const names = ['async_select_channel', 'sync_mutex'];
const excluded = inventory.excludedByUpstream.filter(row => names.some(name => row.source === `tests/elab/${name}.lean`));
assert.equal(excluded.length, 2);
const fixture = join(root, 'integration/fixtures/ExcludedConcurrency.lean');
const report = { scope: 'Separate native and installed AOT runtime controls for two upstream-excluded inputs; not default-suite passes',
  target, engine, compiler, reference, excluded, commands: [], repetitions: [], passed: false,
  resourceReport: process.env.LASM_RESOURCE_REPORT, sourceManifestSha256: await hashFile(sourcesFile),
  sourceArchiveSha256: inventory.sourceArchiveSha256, harnessSha256: await hashFile(fileURLToPath(import.meta.url)),
  fixture: { path: relative(root, fixture), sha256: await hashFile(fixture) },
  adaptations: [
    'Run the original elaboration driver and its assertions on byte-identical copies of both excluded files. Keep the upstream exclusions unchanged.',
    'A separate ordinary Lean main imports their unchanged public definitions and reruns all eight channel-capacity assertions plus mutex, try-lock and condition-variable checks at application runtime.',
    'Compare three independent native-compiled and deployed executions. No random seed, original function, timeout inside the test, assertion or expected output is changed.',
    'The deployed process has empty PATH and hidden source copies. These repetitions do not prove the upstream nondeterministic cases are permanently free of races.',
  ] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
async function verify(directory, expected) {
  const result = await verifyMixedSources(directory, expected);
  assert.deepEqual(result.modified, [], 'Source changed: ' + directory); return result;
}
function run(label, program, args, cwd, env, timeout = 180_000) {
  report.phase = label; save(); const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const observed = { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
  report.commands.push({ label, program, args, cwd, seconds: (performance.now() - started) / 1000,
    error: result.error?.message, timeout: result.error?.code === 'ETIMEDOUT', ...observed }); save();
  assert.ifError(result.error); assert.equal(observed.signal, null); assert.equal(observed.code, 0, label + ': ' + observed.stderr);
  return observed;
}
save();
try {
  report.referenceBefore = await verify(reference, sources);
  const lean = await provisionLean(output); assert.equal(lean.commit, inventory.leanCommit);
  Object.assign(report, { lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity });
  const env = { ...nativeLeanEnvironment(lean), TEST_DIR: join(reference, 'tests'), SRC_DIR: join(reference, 'src'),
    SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix, STAGE: '1', TEST_CTEST: '1',
    LEAN_HEADER_SNAPSHOTS: '0', LEAN_NUM_THREADS: '2', CMAKE_BUILD_PARALLEL_LEVEL: '1', MAKEFLAGS: '-j1' };
  report.engineVersion = run('engine version', engine, ['--version'], output, env).stdout.trim();
  report.packageVersion = JSON.parse(readFileSync(join(compiler, 'package.json'))).version;
  const project = join(output, 'elab'); mkdirSync(project);
  const originals = {};
  for (const name of names) {
    const file = name + '.lean', key = 'tests/elab/' + file;
    copyFileSync(join(reference, key), join(project, file)); originals[file] = sources[key];
  }
  await verify(project, originals);
  const wrapper = join(output, 'native-environment.sh');
  writeFileSync(wrapper, '#!/usr/bin/env bash\nsource "$TEST_DIR/util.sh"\ndriver="$1"; shift\nsource "$driver"\n');
  report.nativeDriverWrapperSha256 = await hashFile(wrapper);
  for (const name of names) run('original native driver/' + name, '/bin/bash',
    [wrapper, join(reference, 'tests/elab/run_test.sh'), name + '.lean'], project, env);
  const source = join(project, 'Main.lean'); copyFileSync(fixture, source);
  const oracle = join(output, 'native oracle'); mkdirSync(oracle);
  report.phase = 'generate native runtime controls'; save();
  const generated = applicationSources(source, lean, oracle, { log: () => {} });
  report.nativeInputs = await Promise.all(generated.sources.map(async (file, index) => ({
    module: generated.inputs[index].module, sourceSha256: await hashFile(generated.inputs[index].source), cSha256: await hashFile(file),
  })));
  const binary = join(output, 'native concurrency control');
  run('compile native runtime controls', join(lean.prefix, 'bin/leanc'),
    ['-O2', ...generated.sources, '-o', binary], project, env, 900_000);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', source, '--target', target, '--output', dist], project, env, 900_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment);
  renameSync(project, project + '.hidden'); renameSync(oracle, oracle + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, path: '', wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  for (let repetition = 1; repetition <= 3; repetition++) {
    const row = { repetition,
      native: run('native repetition ' + repetition, binary, [], deployment, runtimeEnv),
      actual: run('deployed repetition ' + repetition, engine,
        [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv),
    };
    report.repetitions.push(row); save(); assert.deepEqual(row.actual, row.native);
    assert.ok(row.native.stdout.endsWith('Mutex, try-lock and condition-variable checks passed\n'));
  }
  report.sourceAfter = await verify(project + '.hidden', originals);
  assert.equal(await hashFile(join(project + '.hidden', 'Main.lean')), report.fixture.sha256);
  assert.equal(await hashFile(fixture), report.fixture.sha256);
  report.referenceAfter = await verify(reference, sources);
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256);
  assert.equal(await hashFile(wrapper), report.nativeDriverWrapperSha256);
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally { report.finishedAt = new Date().toISOString(); save(); }
