// Original excluded signal driver plus deployed execution of its unchanged main.
import assert from 'node:assert/strict';
import { cpSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync } from 'node:child_process';
import { hashFile } from '../src/managed-artifacts.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { verifyMixedSources } from '../scripts/application-tests/mixed-sources.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, referenceArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && referenceArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER PRISTINE_REFERENCE');
assert.equal(process.platform, 'linux', 'The original shell-driver signal control currently requires Linux');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg), reference = resolve(referenceArg);
assert.ok(!existsSync(output), 'Preserve previous attempts'); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const sourcesFile = join(root, 'docs/evidence/lean-4.34-upstream-source-files.json');
const sources = JSON.parse(readFileSync(sourcesFile));
const inventory = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34-upstream-application-inventory.json')));
const excluded = inventory.excludedByUpstream.find(row => row.source === 'tests/pkg/signal'); assert.ok(excluded);
const prefix = 'tests/pkg/signal/';
const originals = Object.fromEntries(Object.entries(sources).filter(([path]) => path.startsWith(prefix))
  .map(([path, identity]) => [path.slice(prefix.length), identity]));
const report = { scope: 'Separate original upstream-exclusion driver and unchanged installed signal application; not a default-suite pass',
  target, engine, compiler, reference, excluded, commands: [], passed: false,
  resourceReport: process.env.LASM_RESOURCE_REPORT, sourceManifestSha256: await hashFile(sourcesFile),
  sourceArchiveSha256: inventory.sourceArchiveSha256, harnessSha256: await hashFile(fileURLToPath(import.meta.url)),
  nativeDriverWrapperSha256: await hashFile(join(root, 'scripts/application-tests/mixed-native.sh')),
  adaptations: [
    'Run the original shell driver unchanged with managed native Lean/Lake, retaining its FIFO, signal sequence, one-second waits and all Lean assertions.',
    'A separately identified application copy changes only the upstream stage-directory pin to the matching published release; every original source byte and assertion remains intact.',
    'A parallel controller runs the same main as native code and installed AOT after hiding all source copies. It sends the same four signals one second after each exact readiness line and compares stdout, stderr and termination.',
    'The deployed process has an empty PATH and no build-tool environment. The timeout is an outer controller deadline, not a changed wait or assertion inside the Lean test.',
  ] };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
async function verify(directory, expected) {
  const result = await verifyMixedSources(directory, expected);
  assert.deepEqual(result.modified, [], 'Source changed: ' + directory); return result;
}
function run(label, program, args, cwd, env, timeout = 900_000) {
  report.phase = label; save(); const started = performance.now();
  const result = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  const observed = { code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr };
  report.commands.push({ label, program, args, cwd, seconds: (performance.now() - started) / 1000,
    error: result.error?.message, timeout: result.error?.code === 'ETIMEDOUT', ...observed }); save();
  assert.ifError(result.error); assert.equal(observed.signal, null); assert.equal(observed.code, 0, label + ': ' + observed.stderr);
  return observed;
}
async function signals(label, program, args, cwd, env) {
  report.phase = label; save(); const started = performance.now();
  const child = spawn(program, args, { cwd, env, stdio: ['ignore', 'pipe', 'pipe'] });
  const sequence = ['SIGUSR1', 'SIGHUP', 'SIGQUIT', 'SIGINT'];
  const row = { label, program, args, cwd, pid: child.pid, signals: [], stdout: '', stderr: '', timeout: false };
  report.commands.push(row); save();
  let buffered = '', ready = 0, delayed, failure;
  const stop = error => { failure ??= error; child.kill('SIGKILL'); };
  const deadline = setTimeout(() => { row.timeout = true; stop(new Error('Signal controller exceeded 60 seconds')); }, 60_000);
  try {
    await new Promise((complete, reject) => {
      child.on('error', error => { failure = error; reject(error); });
      child.stdout.on('data', bytes => {
        row.stdout += bytes.toString(); buffered += bytes.toString();
        if (row.stdout.length > 1024 * 1024) { stop(new Error('Signal stdout exceeded diagnostic bound')); return; }
        for (;;) {
          const newline = buffered.indexOf('\n'); if (newline < 0) break;
          const line = buffered.slice(0, newline); buffered = buffered.slice(newline + 1);
          if (line !== 'Waiting for a signal' || delayed || ready >= sequence.length) {
            stop(new Error('Unexpected signal readiness sequence: ' + line)); break;
          }
          const signal = sequence[ready++];
          delayed = setTimeout(() => {
            delayed = undefined;
            const sent = child.kill(signal); row.signals.push({ signal, sent, pid: child.pid }); save();
            if (!sent) stop(new Error('Failed to send ' + signal));
          }, 1000);
        }
      });
      child.stderr.on('data', bytes => {
        row.stderr += bytes.toString();
        if (row.stderr.length > 1024 * 1024) stop(new Error('Signal stderr exceeded diagnostic bound'));
      });
      child.on('close', (code, signal) => { row.code = code; row.signal = signal; complete(); });
    });
    assert.ifError(failure); assert.equal(row.code, 0, row.stderr); assert.equal(row.signal, null, row.stderr);
    assert.deepEqual(row.signals.map(item => item.signal), sequence);
    assert.ok(row.signals.every(item => item.sent)); assert.equal(buffered, '');
    assert.equal(row.stdout, 'Waiting for a signal\n'.repeat(4));
    return { code: row.code, signal: row.signal, stdout: row.stdout, stderr: row.stderr };
  } finally {
    clearTimeout(deadline); clearTimeout(delayed);
    if (child.exitCode === null && child.signalCode === null) child.kill('SIGKILL');
    row.seconds = (performance.now() - started) / 1000; if (failure) row.error = failure.message; save();
  }
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
  report.parallelPin = { original: readFileSync(join(original, 'lean-toolchain'), 'utf8'), release: 'leanprover/lean4:v4.34.0\n' };
  writeFileSync(join(project, 'lean-toolchain'), report.parallelPin.release);
  report.nativeDriver = run('original native signal driver', '/bin/bash',
    [join(root, 'scripts/application-tests/mixed-native.sh'), 'ordinary', join(native, 'run_test.sh')], native, env, 120_000);
  report.nativeSourceAfter = await verify(native, originals);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', join(project, 'Main.lean'), '--target', target, '--output', dist], project, env);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  report.applicationAfter = await verify(project, buildSources);
  assert.equal(readFileSync(join(project, 'lean-toolchain'), 'utf8'), report.parallelPin.release);
  report.originalApplicationAfter = await verify(original, originals);
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment);
  for (const directory of [native, original, project]) renameSync(directory, directory + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, path: '', wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  report.native = await signals('native signal control', join(native + '.hidden', '.lake/build/bin/release'), [], deployment, runtimeEnv);
  report.actual = await signals('deployed signal control', engine,
    [...(target === 'deno' ? ['run', '-A'] : []), join(deployment, 'main.mjs')], deployment, runtimeEnv);
  assert.deepEqual(report.actual, report.native);
  report.referenceAfter = await verify(reference, sources);
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256);
  assert.equal(await hashFile(join(root, 'scripts/application-tests/mixed-native.sh')), report.nativeDriverWrapperSha256);
  report.passed = true; report.phase = 'complete';
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally { report.finishedAt = new Date().toISOString(); save(); }
