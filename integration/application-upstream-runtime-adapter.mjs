// Server MVP: run one reviewed upstream elaboration test unchanged and natively,
// then re-check its #guard / #guard_msgs #eval / bare #eval assertions at run
// time in a parallel copy: native interpreted, native compiled (twice, to expose
// nondeterminism) and the installed candidate deployed in Node. Per-action
// results are recorded rather than stopping at the first difference. This is
// extra deployed API coverage; the original registration stays native-build-time.
//   node application-upstream-runtime-adapter.mjs NEW_OUTPUT ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE REVIEWED_TEST [LEAN_VERSION]
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, lstatSync, mkdirSync, readFileSync, readlinkSync, renameSync, symlinkSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { loadUpstreamEvidence } from '../scripts/application-tests/upstream-evidence.mjs';
import { planActions, generateRuntimeSource, actionsWithErrors, modes } from '../scripts/application-tests/runtime-adapter-source.mjs';

await ensureResourceGuard();
const [outputArg, engineArg, compilerArg, referenceArg, name, version = '4.35.0', ...extra] = process.argv.slice(2);
assert.ok(outputArg && engineArg && compilerArg && referenceArg && name && !extra.length,
  'Supply NEW_OUTPUT ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE REVIEWED_TEST [LEAN_VERSION]');
const root = fileURLToPath(new URL('..', import.meta.url));
const reviewFile = join(root, 'scripts/application-tests/runtime-adapter-reviewed.json');
const reviews = JSON.parse(readFileSync(reviewFile));
assert.equal(reviews.schema, 1);
const review = reviews.releases?.[version]?.tests?.[name];
assert.ok(review, `${name} has no runtime-adapter review for Lean ${version}`);
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve preceding evidence');
const { inventory, sources } = loadUpstreamEvidence(version);
const test = inventory.tests.find(row => row.name === name);
assert.equal(test.category, 'native-build-time');
assert.ok(['tests/elab/run_test.sh', 'tests/elab_bench/run_test.sh'].includes(test.driver));
assert.equal(sources[test.source].sha256, review.sha256, 'Upstream source differs from the reviewed input');
// Every per-file sidecar must be reviewed. Serial markers are honoured by this
// sequential, single-workload execution; output files are used by the original
// driver and make bare evaluations differential in the parallel copy.
const sidecarPaths = Object.keys(sources).filter(path => path.startsWith(test.source + '.')).sort();
assert.deepEqual(sidecarPaths, (review.sidecars ?? []).map(entry => entry.path).sort(), 'Every upstream sidecar needs an explicit review');
const sidecarKinds = { serial: 'ctest-run-serial', 'out.expected': 'expected-output', 'out.ignored': 'ignored-output' };
for (const entry of review.sidecars ?? []) {
  assert.equal(sidecarKinds[entry.path.slice(test.source.length + 1)], entry.kind, 'Unsupported sidecar ' + entry.path);
  assert.equal(sources[entry.path].sha256, entry.sha256, 'The upstream sidecar changed');
}
const wholeOutput = (review.sidecars ?? []).some(entry => entry.kind !== 'ctest-run-serial');
// elab_bench/run_test.sh is an upstream symlink to elab/run_test.sh: keep the
// link itself and its target, each verified against the source manifest.
const originals = [test.source, test.driver, 'tests/elab/run_test.sh', 'tests/util.sh', 'tests/CMakeLists.txt', ...sidecarPaths]
  .filter((path, index, all) => all.indexOf(path) === index);
const unchanged = async (base, path) => sources[path].symlink !== undefined
  ? lstatSync(join(base, path)).isSymbolicLink() && readlinkSync(join(base, path)) === sources[path].symlink
  : await hashFile(join(base, path)) === sources[path].sha256;
for (const path of originals) assert.ok(await unchanged(reference, path), 'Upstream file changed: ' + path);
const inputs = ['integration/application-upstream-runtime-adapter.mjs', 'scripts/upstream/RuntimeCommandSurvey.lean',
  'scripts/application-tests/runtime-adapter-source.mjs', 'scripts/application-tests/runtime-adapter-reviewed.json',
  'scripts/application-tests/upstream-evidence.mjs'];
const inputHashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
// The native oracle needs leanc; tiered Lean ships no C toolchain.
const lean = await provisionLean(output, { distribution: 'full' });
assert.equal(lean.commit, inventory.leanCommit);
// Backtraces differ by design between native and Wasm frames; disable them so
// panic messages, stdout and exit status can be compared exactly.
const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2', LEAN_BACKTRACE: '0' };
const report = { scope: 'Original native driver plus separate token-replacing runtime re-checks of its assertions; no full-suite or full API claim',
  name, version, leanCommit: lean.commit, target: 'node', compiler, engine, inputs: inputHashes,
  sourceSha256: sources[test.source].sha256, originals, sidecars: review.sidecars ?? [], wholeOutput,
  commands: [], passes: [], passed: false, executionSequential: true, resourceReport: process.env.LASM_RESOURCE_REPORT };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, environment = env, { timeout = 1_800_000, check = true } = {}) {
  const started = Date.now();
  const result = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 64 << 20 });
  report.commands.push({ label, program, args, cwd, code: result.status, signal: result.signal, seconds: (Date.now() - started) / 1000,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  if (check) { assert.ifError(result.error); assert.equal(result.status, 0, label + ': ' + result.stderr + result.stdout); }
  return { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
}
const actionLines = stdout => Object.fromEntries([...(stdout ?? '').matchAll(/^lasm-action (lasmParallelAction\d+) (ok|FAIL.*)$/gm)]
  .map(match => [match[1], match[2]]));
save();
try {
  report.engineVersion = run('engine version', engine, ['--version'], output).stdout.trim();
  const original = join(output, 'original');
  for (const path of originals) {
    mkdirSync(dirname(join(original, path)), { recursive: true });
    if (sources[path].symlink !== undefined) symlinkSync(sources[path].symlink, join(original, path));
    else copyFileSync(join(reference, path), join(original, path));
  }
  const group = dirname(test.driver);
  const originalDriver = join(output, 'original-driver.sh');
  writeFileSync(originalDriver, `#!/usr/bin/env bash\nsource "$TEST_DIR/util.sh"\nsource "$TEST_DIR/${group.slice('tests/'.length)}/run_test.sh" "$1"\n`);
  run('unchanged native upstream driver', '/bin/bash', [originalDriver, basename(name)],
    join(original, group), { ...env, TEST_DIR: join(original, 'tests'), SRC_DIR: join(reference, 'src'),
      SCRIPT_DIR: join(reference, 'script'), BUILD_DIR: lean.prefix, STAGE: '1', TEST_CTEST: '1',
      LEAN_HEADER_SNAPSHOTS: '0', PATH: [join(lean.prefix, 'bin'), dirname(process.execPath), process.env.PATH].join(':') });
  const originalFile = join(original, test.source), project = join(output, 'parallel-project');
  assert.equal(await hashFile(originalFile), report.sourceSha256, 'Original driver must not modify the test');
  mkdirSync(project); writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const surveyTool = join(root, 'scripts/upstream/RuntimeCommandSurvey.lean');
  const survey = file => {
    const [line, ...rest] = run('survey syntax ranges', lean.lean, ['-j1', '--run', surveyTool, file], output).stdout.trim().split('\n');
    assert.equal(rest.length, 0); const parsed = JSON.parse(line); assert.ok(!parsed.error, parsed.error); return parsed;
  };
  const syntax = survey(originalFile), source = readFileSync(originalFile), main = join(project, 'Main.lean');
  assert.equal(syntax.exited, false, 'A test with #exit needs a separate review');
  // Elaborate natively; move each action whose definition does not elaborate to
  // the next display mode (monadEval, io, pure), finally restoring the original
  // command. Every pass and its diagnostics are recorded.
  let chosen = {}, plan, layout;
  for (let pass = 0; ; pass++) {
    // Each pass advances at least one action's mode, so this terminates; Lean
    // may report later actions' errors only once earlier ones elaborate.
    assert.ok(pass <= 64, 'Elaboration passes did not converge');
    plan = planActions(source, syntax, { wholeOutput, modes: chosen });
    const generated = generateRuntimeSource(source, syntax, plan, name);
    layout = generated; writeFileSync(main, generated.generated);
    const check = run(`elaborate parallel copy (pass ${pass})`, lean.lean, ['-j1', '-Dlinter.all=false', main], project, env, { check: false });
    const diagnostics = check.stdout + check.stderr;
    const { failing, outside } = actionsWithErrors(diagnostics, generated);
    report.passes.push({ pass, actions: plan.actions.length, failing, outside, code: check.code });
    assert.deepEqual(outside, [], 'Elaboration errors outside mapped actions:\n' + diagnostics.slice(0, 4000));
    if (check.code === 0) { assert.deepEqual(failing, []); break; }
    assert.ok(failing.length > 0, 'Elaboration failed without an attributable action:\n' + diagnostics.slice(0, 4000));
    // Indices are stable: chosen modes are keyed by candidate index.
    const all = planActions(source, syntax, { wholeOutput });
    const byIdentifier = Object.fromEntries(plan.actions.map(action => [action.index, action]));
    for (const index of failing) {
      const current = byIdentifier[index].mode;
      const next = current === 'guard' ? null : modes[modes.indexOf(current) + 1] ?? null;
      chosen[index] = next;
    }
    assert.ok(all.candidates >= plan.actions.length);
  }
  const final = survey(main);
  const remaining = final.commands.filter(command => ['Lean.Parser.Command.eval', 'Lean.Parser.Command.guardCmd', 'Lean.guardMsgsCmd']
    .includes(command.kind)).length;
  const unmappedOfKind = plan.unmapped.filter(row => ['Lean.Parser.Command.eval', 'Lean.Parser.Command.guardCmd', 'Lean.guardMsgsCmd']
    .includes(row.kind)).length;
  assert.equal(remaining, unmappedOfKind, 'Only explicitly unmapped commands may remain at build time');
  report.parallel = { sourceSha256: await hashFile(main), marker: layout.marker, actions: plan.actions.map(action => ({
      index: action.index, identifier: action.identifier, form: action.form, mode: action.mode, start: action.start, stop: action.stop,
      termSha256: action.termSha256, expected: action.expected })),
    unmapped: plan.unmapped, candidates: plan.candidates, mapping: {
      mapped: plan.actions.length, unmapped: plan.unmapped.length,
      byForm: plan.actions.reduce((counts, action) => ({ ...counts, [action.form]: (counts[action.form] ?? 0) + 1 }), {}) } };
  save();
  const execute = (label, command, environment, cwd = join(output, label)) => {
    mkdirSync(cwd, { recursive: true });
    const observed = run(label, command[0], command.slice(1), cwd, environment, { check: false, timeout: 1_800_000 });
    return { ...observed, actions: actionLines(observed.stdout), completed: (observed.stdout ?? '').includes(layout.marker + '\n') };
  };
  report.nativeInterpreted = execute('native-interpreted', [lean.lean, '-Dlinter.all=false', '--run', main], env);
  run('generate native parallel C', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', main + '.c', main], project);
  const native = join(project, 'native');
  run('compile native parallel program', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', native, main + '.c'], project);
  report.nativeCompiled = execute('native-compiled', [native], env);
  report.nativeCompiledRepeat = execute('native-compiled-repeat', [native], env);
  const dist = join(output, 'dist');
  const built = run('installed application build', process.execPath, [join(compiler, 'bin/lasm.mjs'), 'build', main, '--output', dist], project, env, { check: false });
  if (built.code !== 0) {
    // The shipping ahead-of-time policy rejects programs that need runtime Lean
    // compilation/kernel state; record that as its own outcome, not a crash.
    const log = built.stderr + built.stdout;
    const policy = /Lasm does not support runtime Lean compilation[^\n]*\n(Detected [^\n]*)?/.exec(log);
    report.buildRejected = { policy: !!policy, detected: policy ? policy[1] ?? null
      : (log.match(/^error: .*$/gm) ?? []).slice(0, 5).join('\n') || log.slice(-2000) };
    const outcome = policy ? 'aot-policy-rejected' : 'deployed-build-failed';
    report.verdicts = plan.actions.map(action => ({ identifier: action.identifier, form: action.form,
      verdict: report.nativeCompiled.actions[action.identifier] === 'ok' ? outcome : 'adapter-native-failure',
      native: report.nativeCompiled.actions[action.identifier] }));
    report.summary = report.verdicts.reduce((counts, row) => ({ ...counts, [row.verdict]: (counts[row.verdict] ?? 0) + 1 }), {});
    throw Object.assign(new Error(`Installed build produced no deployment (${policy ? 'ahead-of-time policy' : 'build failure'}): ` + report.buildRejected.detected), { policyRejected: true });
  }
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  assert.equal(report.build.lean, version); assert.equal(report.build.leanCommit, lean.commit);
  const relocated = join(output, 'relocated deployment');
  renameSync(dist, relocated); renameSync(project, project + '.hidden'); renameSync(original, original + '.hidden');
  report.wasmSha256 = await hashFile(join(relocated, 'program.wasm'));
  const deploymentEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(deploymentEnv, { PATH: '', LEAN_NUM_THREADS: '2', LEAN_BACKTRACE: '0' });
  report.deployed = execute('deployed', [engine, join(relocated, 'main.mjs')], deploymentEnv);
  assert.equal(await hashFile(join(project + '.hidden', 'Main.lean')), report.parallel.sourceSha256);
  for (const path of originals) assert.ok(await unchanged(original + '.hidden', path), path);
  report.deployment = { sourceHidden: true, path: '', buildEnvironmentRemoved: true };
  // Per-action verdicts. Native failures mean the adapter does not reproduce
  // the build-time assertion; native disagreement means nondeterminism.
  const verdicts = plan.actions.map(action => {
    const id = action.identifier, n = report.nativeCompiled.actions[id], r = report.nativeCompiledRepeat.actions[id],
      i = report.nativeInterpreted.actions[id], d = report.deployed.actions[id];
    const verdict = n !== 'ok' || i !== 'ok' ? (n === undefined ? 'native-not-reached' : 'adapter-native-failure')
      : r !== 'ok' ? 'native-nondeterministic' : d === 'ok' ? 'pass' : d === undefined ? 'deployed-not-reached' : 'deployed-failure';
    return { identifier: id, form: action.form, verdict, native: n, nativeRepeat: r, interpreted: i, deployed: d };
  });
  report.verdicts = verdicts;
  report.summary = verdicts.reduce((counts, row) => ({ ...counts, [row.verdict]: (counts[row.verdict] ?? 0) + 1 }), {});
  const sameRun = (a, b) => a.code === b.code && a.stdout === b.stdout && a.stderr === b.stderr;
  report.exact = { interpretedVsCompiled: sameRun(report.nativeInterpreted, report.nativeCompiled),
    compiledVsRepeat: sameRun(report.nativeCompiled, report.nativeCompiledRepeat),
    compiledVsDeployed: sameRun(report.nativeCompiled, report.deployed) };
  report.passed = report.exact.compiledVsDeployed && report.nativeCompiled.code === 0 && report.nativeCompiled.completed;
} catch (error) { report.error = error.stack; if (!error.policyRejected) throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [path, hash] of Object.entries(inputHashes))
    if (await hashFile(join(root, path)) !== hash) report.inputsUnchanged = false;
  for (const path of originals)
    if (!await unchanged(reference, path)) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
console.log(JSON.stringify({ name, passed: report.passed, summary: report.summary, exact: report.exact,
  mapping: report.parallel?.mapping }, null, 2));
