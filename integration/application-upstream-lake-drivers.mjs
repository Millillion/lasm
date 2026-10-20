// Language coverage L2+L3: one reviewed upstream mixed Lake/package driver with a
// deployed-application phase, run unchanged twice in independent verified copies:
//   native    the original driver with managed native Lean/Lake;
//   deployed  the same driver with `lake` (and a reviewed `leanmake`) resolving to
//             scripts/language-coverage/lake-shim.mjs, which keeps every native
//             command but replaces each built executable with a launcher of the
//             installed Lasm CLI's deployment of the same root module.
// The original assertions decide both phases. The deployed phase passes only if
// the native phase passed, every executable built through Lasm, and the driver
// actually ran deployed programs.
//   node application-upstream-lake-drivers.mjs NEW_OUTPUT ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE NAME [LEAN_VERSION]
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, writeFileSync, openSync, closeSync, chmodSync } from 'node:fs';
import { join, resolve, dirname, delimiter, posix } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';
import { loadUpstreamEvidence } from '../scripts/application-tests/upstream-evidence.mjs';

await ensureResourceGuard();
const windows = process.platform === 'win32', bash = windows ? 'bash' : '/bin/bash';
const [outputArg, engineArg, compilerArg, referenceArg, name, version = '4.35.0', ...extra] = process.argv.slice(2);
assert.ok(outputArg && engineArg && compilerArg && referenceArg && name && !extra.length,
  'Supply NEW_OUTPUT ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE NAME [LEAN_VERSION]');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve earlier attempts');
const { inventory, sources, ledgerFile } = loadUpstreamEvidence(version);
const row = JSON.parse(readFileSync(ledgerFile)).tests.find(test => test.name === name);
assert.ok(row && ['native-and-compiled-application', 'native-and-foreign-application'].includes(row.phase), 'Not a reviewed deployed-phase driver: ' + name);
const test = inventory.tests.find(entry => entry.name === name);
assert.equal(test.sha256, row.sourceSha256);
// Reviewed per-driver settings. leanmake: built file → root source, relative to the
// driver directory. exe-only: the driver inspects built executable files (hard
// links, cache identity), so only `lake exe` runs the deployment. makeFlags: the
// released lean.mk names the release build machine's llvm-ar; the distribution's
// own llvm-ar is supplied to make in both phases.
const archiver = () => join(prefix, 'bin', windows ? 'llvm-ar.exe' : 'llvm-ar');
const settings = {
  '../doc/examples/compiler': { leanmake: { 'build/bin/test': 'test.lean' }, makeFlags: () => `LEAN_AR=${archiver()}` },
  'tests/lake/tests/cache/test.sh': { mode: 'exe-only' },
}[name] ?? {};
const leanmake = settings.leanmake;
let prefix;
const tree = test.driver.startsWith('doc/') ? ['doc', 'tests'] : ['tests'];
const subset = Object.fromEntries(Object.entries(sources).filter(([path]) => tree.some(top => path.startsWith(top + '/'))));
mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const report = { scope: 'Unchanged upstream mixed driver, native then deployed (executables replaced by installed-CLI deployments); no full-suite claim',
  name, version, phase: row.phase, rationale: row.rationale, driver: test.driver, sourceSha256: test.sha256, engine, compiler,
  inputs: Object.fromEntries(await Promise.all(['integration/application-upstream-lake-drivers.mjs', 'scripts/language-coverage/lake-shim.mjs',
    'scripts/language-coverage/LakeExes.lean', 'scripts/application-tests/mixed-native.sh'].map(async path => [path, await hashFile(join(root, path))]))),
  adaptations: [
    'Both phases run the unchanged driver in independent copies of the verified upstream tree; the pristine reference is checked before and after.',
    'Deployed phase: every native Lake command runs as invoked with Lake\'s own executables in place; afterwards each built lean_exe is compiled from its configured root module by the installed CLI and its path runs that deployment. `lake exe T` is a native `lake build T` followed by the deployed T.',
    'The Lasm build sees a release pin for its duration only (the upstream tree pins its stage build); the original pin bytes are restored.',
    '`lean [-D…] --run FILE ARGS` from PATH (as in `lake env lean --run`) builds FILE through the installed CLI and runs the deployment; other lean calls are native.',
    'Reviewed per-driver settings (exe-only replacement, leanmake roots, the distribution llvm-ar for lean.mk) are recorded in the result.',
  ], commands: [], passed: false, resourceReport: process.env.LASM_RESOURCE_REPORT };
// Without symlink privileges Windows tar materializes a link as a copy of its target.
const verify = async (directory, expected) => {
  const result = await verifyMixedSources(directory, expected);
  if (windows) result.modified = (await Promise.all(result.modified.map(async path => {
    const target = expected[path]?.symlink !== undefined && sources[posix.join(posix.dirname(path), expected[path].symlink)];
    return target?.sha256 && existsSync(join(directory, path)) && await hashFile(join(directory, path)) === target.sha256 ? null : path;
  }))).filter(Boolean);
  return result;
};
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
save();
try {
  report.referenceBefore = await verify(reference, sources);
  assert.deepEqual(report.referenceBefore.modified, []);
  const lean = await provisionLean(output, { distribution: 'full' });
  assert.equal(lean.commit, inventory.leanCommit);
  prefix = windows ? lean.executionPrefix ?? lean.prefix : lean.prefix;
  const plugin = windows ? join(prefix, 'bin', 'libLake_shared.dll') : join(prefix, 'lib/lean', `libLake_shared.${process.platform === 'darwin' ? 'dylib' : 'so'}`);
  Object.assign(report, { leanCommit: lean.commit, nativeArtifactIdentity: lean.identity });
  report.engineVersion = spawnSync(engine, ['--version'], { encoding: 'utf8' }).stdout.trim();
  const shim = join(output, 'shim'); mkdirSync(shim);
  for (const tool of ['lake', 'leanmake', 'lean']) {
    writeFileSync(join(shim, tool), `#!/usr/bin/env bash\nexec "$LASM_BUILD_NODE" "$LASM_LAKE_SHIM_SCRIPT" ${tool} "$@"\n`);
    chmodSync(join(shim, tool), 0o755);
  }
  const phase = async label => {
    const workspace = join(output, label);
    for (const top of tree) cpSync(join(reference, top), join(workspace, top), { recursive: true, preserveTimestamps: true, verbatimSymlinks: true });
    const before = await verify(workspace, subset);
    assert.deepEqual(before.modified, [], 'Copy differs from the reference');
    const env = { ...process.env };
    for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)) delete env[key];
    const pathKey = windows ? Object.keys(env).find(key => key.toUpperCase() === 'PATH') ?? 'PATH' : 'PATH';
    const basePath = [join(prefix, 'bin'), dirname(process.execPath), env[pathKey]].filter(Boolean);
    Object.assign(env, { TEST_DIR: join(workspace, 'tests'), SRC_DIR: join(reference, 'src'), SCRIPT_DIR: join(reference, 'script'),
      BUILD_DIR: prefix, STAGE: '1', TEST_CTEST: '1', LEANC_OPTS: '', CXX: join(prefix, 'bin', windows ? 'clang++.exe' : 'clang++'),
      LEAN_SRC_PATH: join(reference, 'src') + delimiter + join(reference, 'src/lake'),
      LEAN_NUM_THREADS: '1', LEAN_HEADER_SNAPSHOTS: '0',
      GIT_CONFIG_COUNT: '1', GIT_CONFIG_KEY_0: 'commit.gpgsign', GIT_CONFIG_VALUE_0: 'false',
      [pathKey]: (label === 'deployed' ? [shim, ...basePath] : basePath).join(delimiter),
      ...(settings.makeFlags ? { MAKEFLAGS: settings.makeFlags() } : {}) });
    const state = join(output, label + '-shim-state');
    if (label === 'deployed') {
      mkdirSync(state);
      Object.assign(env, { LASM_LAKE_SHIM_SCRIPT: join(root, 'scripts/language-coverage/lake-shim.mjs'), LASM_LAKE_SHIM_STATE: state,
        LASM_LAKE_SHIM_EXES: join(root, 'scripts/language-coverage/LakeExes.lean'), LASM_LAKE_SHIM_PLUGIN: plugin,
        LASM_LAKE_SHIM_ENGINE: engine, LASM_LAKE_SHIM_LEAN: version, LASM_BUILD_NODE: process.execPath, LASM_COMPILER: compiler,
        LASM_NATIVE_LEAN: join(prefix, 'bin', windows ? 'lean.exe' : 'lean'), LASM_NATIVE_LAKE: join(prefix, 'bin', windows ? 'lake.exe' : 'lake'),
        LASM_NATIVE_LEANMAKE: join(prefix, 'bin', 'leanmake'), ...(leanmake ? { LASM_LAKE_SHIM_LEANMAKE: JSON.stringify(leanmake) } : {}),
        ...(settings.mode ? { LASM_LAKE_SHIM_MODE: settings.mode } : {}) });
    }
    const driver = join(workspace, test.driver);
    const args = [join(root, 'scripts/application-tests/mixed-native.sh'), test.driver.startsWith('tests/lake/') ? 'lake' : 'ordinary', driver];
    const logFile = join(output, label + '.log'), log = openSync(logFile, 'w');
    const started = Date.now();
    let result;
    try { result = spawnSync(bash, args, { cwd: dirname(driver), env, stdio: ['ignore', log, log], timeout: 2_400_000, killSignal: 'SIGKILL' }); }
    finally { closeSync(log); }
    const text = readFileSync(logFile, 'utf8');
    const record = { label, code: result.status, signal: result.signal, timedOut: result.error?.code === 'ETIMEDOUT',
      seconds: (Date.now() - started) / 1000, stdout: text.slice(-60000), stderr: '' };
    report.commands.push(record);
    if (label === 'deployed') {
      const shimState = existsSync(join(state, 'state.json')) ? JSON.parse(readFileSync(join(state, 'state.json'))) : { events: [] };
      record.events = shimState.events.map(event => ({ ...event, log: event.log?.slice(-1500) }));
      record.invocations = existsSync(join(state, 'invocations.log')) ? readFileSync(join(state, 'invocations.log'), 'utf8').split('\n').filter(Boolean) : [];
    }
    save();
    return record;
  };
  const native = await phase('native');
  const deployed = await phase('deployed');
  const failures = deployed.events.filter(event => event.kind === 'deployment-failed');
  const outcome = native.code !== 0 ? (native.code === 77 ? 'upstream-disabled' : 'native-failed')
    : failures.some(event => event.policy) ? 'aot-policy-rejected'
    : failures.length ? 'deployed-build-failed'
    : deployed.events.some(event => event.kind === 'exe-not-substituted') ? 'deployed-build-failed'
    : !deployed.invocations.length ? 'no-deployed-execution'
    : deployed.code === 0 ? 'pass' : 'deployed-driver-failed';
  report.summary = { [outcome]: 1 };
  report.outcome = outcome;
  report.deployments = deployed.events.filter(event => /^deployment-/.test(event.kind))
    .map(({ kind, exe, source, policy, detected, wasmSha256, pinAdaptation }) => ({ kind, exe, source, policy, detected, wasmSha256, pinAdaptation }));
  report.passed = outcome === 'pass';
  report.settings = { mode: settings.mode, leanmake, makeFlags: settings.makeFlags?.() };
  // A compact explanation for CI artifacts (the full result is kept beside it).
  if (!report.passed) report.error = [outcome, ...deployed.events.filter(event => !/^(native|deployed-exe|deployed-run|deployment-built)$/.test(event.kind))
    .map(event => JSON.stringify(event).slice(0, 1500)), (outcome === 'native-failed' ? native : deployed).stdout.slice(-3000)].join('\n');
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.referenceAfter = await verify(reference, sources);
  report.inputsUnchanged = report.referenceAfter.modified.length === 0;
  report.finishedAt = new Date().toISOString(); save();
}
console.log(JSON.stringify({ name, outcome: report.outcome, passed: report.passed, deployments: report.deployments?.length,
  invocations: report.commands.at(-1)?.invocations?.length }, null, 2));
