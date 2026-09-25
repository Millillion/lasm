// Execute original upstream IO #eval commands natively, then preserve their
// expression bytes in a separate ordinary-main AOT comparison. This is extra
// deployed API coverage, not a reclassification of compiler tests.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { loadUpstreamEvidence } from '../scripts/application-tests/upstream-evidence.mjs';
import { parallelEvalIOSource, reviewedEvalIOTests, reviewedEvalIOInput } from '../scripts/application-tests/eval-io-source.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, name, version = '4.34.1', ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE REVIEWED_TEST [LEAN_VERSION]');
assert.ok(reviewedEvalIOTests.has(name));
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve preceding evidence');
const { inventory, sources } = loadUpstreamEvidence(version);
const test = inventory.tests.find(row => row.name === name);
const review = reviewedEvalIOInput(version, name, sources[test.source].sha256);
assert.equal(test.category, 'native-build-time');
assert.equal(test.driver, 'tests/elab/run_test.sh');
// Review sidecars before adding cases: do not silently drop per-file settings,
// expected output, setup or teardown. The reviewed original IO tests have none.
assert.deepEqual(Object.keys(sources).filter(path => path.startsWith('tests/' + name + '.')), []);
const originals = [test.source, test.driver, 'tests/util.sh'];
for (const path of originals) assert.equal(await hashFile(join(reference, path)), sources[path].sha256);
const inputs = ['integration/application-upstream-eval-io.mjs', 'scripts/upstream/EvalCommandRanges.lean',
  'scripts/application-tests/eval-io-source.mjs', 'scripts/application-tests/eval-io-reviewed.json',
  'scripts/application-tests/upstream-evidence.mjs'];
const inputHashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const lean = await provisionLean(output);
assert.equal(lean.commit, inventory.leanCommit);
const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
const report = { scope: 'Original native driver plus separate byte-preserving IO-expression AOT comparisons; no full-suite or full API claim',
  name, version, leanCommit: lean.commit, target, compiler, engine, inputs: inputHashes,
  sourceSha256: sources[test.source].sha256, originals, commands: [], passed: false,
  adaptations: [
    'Run the unchanged original elaboration driver, including its output and success assertions, in a separate exact source copy.',
    'A Lean syntax parser identifies only unwrapped top-level #eval tokens in explicitly reviewed, flat IO Unit tests.',
    'Replace only those five-byte command tokens with named IO Unit definitions in a parallel copy; preserve every expression, assertion, constant and timeout byte.',
    'An ordinary main calls every original action in source order and prints a completion marker. No evaluation action remains at compilation time.',
    'Compare interpreted-native, compiled-native and source-hidden relocated installed AOT execution of the same parallel main.',
    'The original registration remains native-build-time coverage; these additional runtime comparisons are recorded separately.',
  ], resourceReport: process.env.LASM_RESOURCE_REPORT };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, environment = env, timeout = 900_000) {
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  report.commands.push({ label, program, args, cwd, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, label + ': ' + result.stderr);
  return { code: result.status, stdout: result.stdout, stderr: result.stderr };
}
save();
try {
  report.engineVersion = run('engine version', engine, ['--version'], output).stdout.trim();
  const original = join(output, 'original');
  for (const path of originals) {
    mkdirSync(dirname(join(original, path)), { recursive: true });
    copyFileSync(join(reference, path), join(original, path));
  }
  const originalDriver = join(output, 'original-driver.sh');
  writeFileSync(originalDriver, '#!/usr/bin/env bash\nsource "$TEST_DIR/util.sh"\nsource "$TEST_DIR/elab/run_test.sh" "$1"\n');
  run('unchanged native upstream driver', '/bin/bash', [originalDriver, basename(name)],
    join(original, 'tests/elab'), { ...env, TEST_DIR: join(original, 'tests'), SRC_DIR: join(reference, 'src'),
      SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix, STAGE: '1', TEST_CTEST: '1',
      LEAN_HEADER_SNAPSHOTS: '0', PATH: [join(lean.prefix, 'bin'), dirname(process.execPath), process.env.PATH].join(':') });
  const originalFile = join(original, test.source), project = join(output, 'parallel-project');
  assert.equal(await hashFile(originalFile), report.sourceSha256, 'Original driver must not modify the test');
  mkdirSync(project); writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const parser = join(root, 'scripts/upstream/EvalCommandRanges.lean');
  const inspect = file => JSON.parse(run('inspect original syntax ranges', lean.lean,
    ['-j1', '--run', parser, file], output).stdout);
  const syntax = inspect(originalFile), source = readFileSync(originalFile);
  const parallel = parallelEvalIOSource(source, syntax, name), main = join(project, 'Main.lean');
  assert.equal(parallel.expressions.length, review.actions, 'Every reviewed action must remain present');
  writeFileSync(main, parallel.generated);
  assert.deepEqual(inspect(main).ranges, [], 'No test body may execute only at build time');
  report.parallel = { syntax, expressions: parallel.expressions, actions: parallel.expressions.length,
    sourceSha256: await hashFile(main), marker: parallel.marker, expressionBytesUnchanged: true };
  const execute = (label, command, environment) => {
    const cwd = join(output, label); mkdirSync(cwd);
    const observed = run(label, command[0], command.slice(1), cwd, environment);
    assert.ok(observed.stdout.endsWith(parallel.marker + '\n'), 'Every action must finish');
    return observed;
  };
  report.nativeInterpreted = execute('native-interpreted', [lean.lean, '-Dlinter.all=false', '--run', main], env);
  run('generate native parallel C', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', main + '.c', main], project);
  const native = join(project, 'native');
  run('compile native parallel program', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', native, main + '.c'], project);
  report.nativeCompiled = execute('native-compiled', [native], env);
  assert.deepEqual(report.nativeCompiled, report.nativeInterpreted);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', main,
    '--target', target, '--output', dist], project, env, 1800_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  assert.equal(report.build.lean, version); assert.equal(report.build.leanCommit, lean.commit);
  assert.equal(report.build.target, target);
  const relocated = join(output, 'relocated deployment');
  renameSync(dist, relocated); renameSync(project, project + '.hidden'); renameSync(original, original + '.hidden');
  report.wasmSha256 = await hashFile(join(relocated, 'program.wasm'));
  const deploymentEnv = Object.fromEntries(Object.entries(process.env).filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(name)));
  Object.assign(deploymentEnv, { PATH: '', LEAN_NUM_THREADS: '2', DENO_DISABLE_NODE_SHIM: '1' });
  report.actual = execute('deployed', [engine, ...(target === 'deno' ? ['run', '-A'] : []), join(relocated, 'main.mjs')], deploymentEnv);
  assert.deepEqual(report.actual, report.nativeInterpreted);
  assert.equal(await hashFile(join(project + '.hidden', 'Main.lean')), report.parallel.sourceSha256);
  for (const path of originals) assert.equal(await hashFile(join(original + '.hidden', path)), sources[path].sha256);
  report.deployment = { sourceHidden: true, path: '', buildEnvironmentRemoved: true };
  report.passed = true;
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [path, hash] of Object.entries(inputHashes))
    if (await hashFile(join(root, path)) !== hash) report.inputsUnchanged = false;
  for (const path of originals)
    if (await hashFile(join(reference, path)) !== sources[path].sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
