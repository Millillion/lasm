// Positive terminal behavior, including input blocked until a concurrent Lean
// timer fires. Native and deployed processes receive identical real PTYs.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, copyFileSync, renameSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve, isAbsolute } from 'node:path';
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
assert.notEqual(process.platform, 'win32', 'This fixture requires a POSIX controlling terminal');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), compiler = resolve(compilerArg), engine = resolve(engineArg);
assert.ok(!existsSync(output), 'Preserve earlier terminal evidence');
mkdirSync(output, { recursive: true });
const inputs = ['integration/application-terminal-regressions.mjs', 'integration/terminal-session.py',
  'integration/fixtures/TerminalIO.lean'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
const lean = await provisionLean(output);
const environment = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
const report = { scope: 'Supplementary real raw-terminal native/deployed comparisons on this POSIX host; no cooked-terminal or Windows acceptance claim',
  lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
  target, engine, compiler, packageVersion: JSON.parse(readFileSync(join(compiler, 'package.json'))).version,
  platform: process.platform + '-' + process.arch, inputs: hashes,
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, command, cwd, env = environment, timeout = 60_000) {
  const execution = spawnSync(command[0], command.slice(1), { cwd, env, timeout,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  const observed = processOutput(execution);
  report.commands.push({ label, command, cwd, ...observed, signal: execution.signal, error: execution.error?.message }); save();
  assert.ifError(execution.error); assert.equal(execution.signal, null, label);
  assert.equal(observed.code, 0, observed.stderr);
  return observed;
}
const input = Buffer.concat([Buffer.from('λ first\r\n'), Buffer.from([0, 255, 128, 10, 13, 65, 195, 169])]);
const allBytes = Buffer.from(Array.from({ length: 256 }, (_, i) => i));
const ready = Buffer.from('ready\n'), tick = Buffer.from('tick\n'), done = Buffer.from('terminal checks passed\n');
function expected(mode) {
  if (mode === 'backpressure') return { code: 0, signal: null,
    terminalBase64: Buffer.from('writing\nwriter blocked\nbackpressure checks passed\n').toString('base64'),
    stdoutBase64: Buffer.from(Array.from({ length: 16384 }, (_, i) => i & 255)).toString('base64'),
    inputTriggered: true, inputBytesSent: 5, timedOut: false, driverFailure: null,
    stdoutPipe: { capacityBytes: 4096, bytesBeforeInput: 4096, bytesBeforeRelease: 4096, releaseObserved: true } };
  return { code: 0, signal: null,
    terminalBase64: Buffer.concat(mode === 'terminal' ? [ready, tick, allBytes, done] : [tick, done]).toString('base64'),
    stdoutBase64: mode === 'terminal' ? '' : Buffer.concat([ready, allBytes]).toString('base64'),
    inputTriggered: true, inputBytesSent: input.length, timedOut: false, driverFailure: null };
}
let python;
function terminal(label, command, env) {
  const rows = [];
  for (const mode of ['terminal', 'stdout-pipe', ...(process.platform === 'linux' ? ['backpressure'] : [])]) {
    const cwd = join(output, label, mode); mkdirSync(cwd, { recursive: true });
    const config = join(cwd, 'session.json');
    writeFileSync(config, JSON.stringify({ command: [...command, mode], cwd,
      mode: mode === 'backpressure' ? 'stdout-pipe' : mode, timeoutSeconds: 20,
      // Do not send data merely because the blocking reader started. The timer
      // must finish concurrently first, exercising scheduler/host async behavior.
      triggerBase64: (mode === 'backpressure' ? Buffer.from('writing\n') : tick).toString('base64'),
      inputBase64: (mode === 'backpressure' ? Buffer.from('full\n') : input).toString('base64'),
      ...(mode === 'backpressure' ? { stdoutPipe: { capacityBytes: 4096,
        releaseTriggerBase64: Buffer.from('writer blocked\n').toString('base64') } } : {}) }, null, 2) + '\n');
    const actual = JSON.parse(run(label + '/' + mode, [python, '-I', '-B', join(root, inputs[1]), config], cwd, env, 30_000).stdout);
    rows.push({ mode, ...actual });
    report[label] = rows; save();
    assert.deepEqual(actual, expected(mode), label + '/' + mode + ' failed real terminal assertions');
  }
  return rows;
}
save();
try {
  report.engineVersion = run('engine version', [engine, '--version'], output).stdout.trim();
  python = run('resolve terminal driver interpreter', ['python3', '-I', '-B', '-c', 'import sys; print(sys.executable)'], output).stdout.trim();
  assert.ok(isAbsolute(python));
  report.pythonVersion = run('terminal driver interpreter version', [python, '--version'], output).stdout.trim();
  const project = join(output, 'source'); mkdirSync(project);
  const source = join(project, 'Main.lean'); copyFileSync(join(root, inputs[2]), source);
  writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const interpreted = terminal('native-interpreted', [lean.lean, '-Dlinter.all=false', '--run', source], environment);
  run('generate native C', [lean.lean, '-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], project);
  const native = join(project, 'native');
  run('compile native application', [join(lean.prefix, 'bin/leanc'), '-O2', '-DNDEBUG', '-o', native, source + '.c'], project);
  assert.deepEqual(terminal('native-compiled', [native], environment), interpreted);
  const dist = join(output, 'dist');
  run('build installed application', [process.execPath, join(compiler, 'bin/lasm.mjs'), 'build', source,
    '--target', target, '--output', dist], project, environment, 1800_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  const relocated = join(output, 'relocated deployment'); renameSync(dist, relocated); renameSync(project, project + '.hidden');
  report.wasmSha256 = await hashFile(join(relocated, 'program.wasm'));
  const deployedEnvironment = Object.fromEntries(Object.entries(process.env).filter(([name]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(name)));
  Object.assign(deployedEnvironment, { PATH: '', LEAN_NUM_THREADS: '2', DENO_DISABLE_NODE_SHIM: '1' });
  report.deployment = { directory: relocated, sourceHidden: true, path: '', buildEnvironmentRemoved: true };
  assert.deepEqual(terminal('deployed', [engine, ...(target === 'deno' ? ['run', '-A'] : []), join(relocated, 'main.mjs')], deployedEnvironment), interpreted);
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [name, hash] of Object.entries(hashes))
    if (await hashFile(join(root, name)) !== hash) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
