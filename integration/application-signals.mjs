// Supplementary signal API differential coverage, never an upstream pass.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawn, spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER');
assert.equal(process.platform, 'linux', 'This fixture asserts native Linux signal numbers');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
assert.ok(!existsSync(output), 'Preserve previous attempts'); mkdirSync(output, { recursive: true });
writeFileSync(join(output, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const source = join(root, 'integration/fixtures/Signals.lean');
const numbers = { 1:'SIGHUP', 2:'SIGINT', 3:'SIGQUIT', 5:'SIGTRAP', 6:'SIGABRT', 10:'SIGUSR1', 12:'SIGUSR2',
  14:'SIGALRM', 15:'SIGTERM', 17:'SIGCHLD', 18:'SIGCONT', 20:'SIGTSTP', 21:'SIGTTIN', 22:'SIGTTOU',
  23:'SIGURG', 24:'SIGXCPU', 25:'SIGXFSZ', 26:'SIGVTALRM', 27:'SIGPROF', 28:'SIGWINCH', 29:'SIGIO', 31:'SIGSYS' };
const report = { scope: 'Supplementary native versus installed application signal comparisons on Linux x64; not upstream passes',
  target, engine, compiler, source, sourceSha256: await hashFile(source),
  harnessSha256: await hashFile(fileURLToPath(import.meta.url)),
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], comparisons: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, env) {
  report.phase = label; save(); const started = performance.now();
  const child = spawnSync(program, args, { cwd, env, encoding: 'utf8', timeout: 900_000,
    killSignal: 'SIGKILL', maxBuffer: 4 * 1024 * 1024 });
  report.commands.push({ label, program, args, cwd, code: child.status, signal: child.signal,
    error: child.error?.message, stdout: child.stdout, stderr: child.stderr, seconds: (performance.now()-started)/1000 }); save();
  assert.ifError(child.error); assert.equal(child.status, 0, child.stderr); return child.stdout;
}
async function execute(label, command, args, env, cwd) {
  const child = spawn(command[0], [...command.slice(1), ...args], { cwd, env, stdio: ['ignore', 'pipe', 'pipe'] });
  const started = performance.now(), expected = ['once', 'repeat'].includes(args[0])
    ? Object.keys(numbers).flatMap(number => Array.from({ length: args[0] === 'repeat' ? 2 : 1 }, (_, i) => `ready ${number} ${i}`))
    : [`ready ${args[1]} 0`];
  const row = { label, command, args, pid: child.pid, stdout: '', stderr: '', sent: [], timeout: false };
  report.commands.push(row); save(); let buffered = '', next = 0, delayed, failure;
  const stop = error => { failure ??= error; child.kill('SIGKILL'); };
  const deadline = setTimeout(() => { row.timeout = true; stop(new Error('Signal controller exceeded 30 seconds')); }, 30_000);
  try {
    await new Promise((complete, reject) => {
      child.once('error', reject);
      child.stdout.on('data', bytes => {
        row.stdout += bytes; buffered += bytes;
        if (row.stdout.length > 1024 * 1024) return stop(new Error('Signal output bound exceeded'));
        for (;;) {
          const end = buffered.indexOf('\n'); if (end < 0) break;
          const line = buffered.slice(0, end); buffered = buffered.slice(end + 1);
          if (!line.startsWith('ready ')) continue;
          if (line !== expected[next] || delayed) return stop(new Error('Unexpected readiness: ' + line));
          next++;
          const name = numbers[line.split(' ')[1]];
          delayed = setTimeout(() => {
            delayed = undefined; const sent = child.kill(name); row.sent.push({ name, sent }); save();
            if (!sent) stop(new Error('Could not deliver ' + name));
          }, 25);
        }
      });
      child.stderr.on('data', bytes => { row.stderr += bytes; if (row.stderr.length > 1024 * 1024) stop(new Error('Signal stderr bound exceeded')); });
      child.once('close', (code, signal) => { row.code = code; row.signal = signal; complete(); });
    });
    assert.ifError(failure); assert.equal(next, expected.length); assert.equal(row.sent.length, expected.length);
    assert.ok(row.sent.every(event => event.sent)); assert.equal(buffered, '');
    return { code: row.code, signal: row.signal, stdout: row.stdout, stderr: row.stderr };
  } finally {
    clearTimeout(deadline); clearTimeout(delayed);
    if (child.exitCode === null && child.signalCode === null) child.kill('SIGKILL');
    row.seconds = (performance.now() - started) / 1000; if (failure) row.error = failure.message; save();
  }
}
save();
try {
  const lean = await provisionLean(output), env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
  Object.assign(report, { lean: lean.version, leanCommit: lean.commit, nativeArtifactIdentity: lean.identity,
    packageVersion: JSON.parse(readFileSync(join(compiler, 'package.json'))).version,
    engineVersion: run('engine version', engine, ['--version'], output, env).trim() });
  const project = join(output, 'source'); mkdirSync(project);
  const input = join(project, 'Main.lean'); copyFileSync(source, input);
  writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
  run('generate native C', lean.lean, ['-j1', '-Dcompiler.postponeCompile=false', '-c', input + '.c', input], project, env);
  const native = join(project, 'native');
  run('compile native', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', native, input + '.c'], project, env);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', input, '--target', target, '--output', dist], project, env);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment); renameSync(project, project + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, path: '', wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  const cases = [['once'], ['repeat'], ...['default','stopped'].flatMap(mode => [10,12,15,6,2,3,28].map(n => [mode,String(n)]))];
  for (const args of cases) {
    report.phase = args.join(' '); save();
    const native = await execute('native/' + report.phase, [join(project + '.hidden', 'native')], args, runtimeEnv, deployment);
    if (args.length === 1) { assert.equal(native.code, 0); assert.equal(native.stderr, ''); assert.ok(native.stdout.endsWith('delivery complete\n')); }
    else if (args[1] !== '28') assert.equal(native.signal, numbers[args[1]], 'Native default-action control did not terminate as expected');
    const actual = await execute('deployed/' + report.phase,
      [engine, ...(target === 'deno' ? ['run','-A'] : []), join(deployment, 'main.mjs')], args, runtimeEnv, deployment);
    const row = { args, native, actual, passed: false };
    try { assert.deepEqual(actual, native); row.passed = true; } catch (error) { row.difference = error.message; }
    report.comparisons.push(row); save(); console.log(target + ' ' + args.join(' ') + ': ' + (row.passed ? 'passed' : 'DIFFERS'));
  }
  assert.equal(await hashFile(source), report.sourceSha256);
  assert.equal(await hashFile(join(project + '.hidden', 'Main.lean')), report.sourceSha256);
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256);
  report.sourceUnchanged = true; report.passed = report.comparisons.every(row => row.passed); report.phase = 'complete';
  if (!report.passed) process.exitCode = 1;
} catch (error) { report.error = { message: error.message, stack: error.stack }; throw error; }
finally { report.finishedAt = new Date().toISOString(); save(); }
