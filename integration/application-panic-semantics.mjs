// Supplementary ordinary Lean cases; no upstream tests are altered.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, renameSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, target, engineArg, compilerArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && ['node', 'deno', 'bun'].includes(target) && engineArg && compilerArg && !extra.length,
  'Supply NEW_OUTPUT TARGET ENGINE INSTALLED_COMPILER');
const root = fileURLToPath(new URL('..', import.meta.url));
const output = resolve(outputArg), engine = resolve(engineArg), compiler = resolve(compilerArg);
assert.ok(!existsSync(output), 'Preserve previous attempts'); mkdirSync(output, { recursive: true });
const project = join(output, 'source'), source = join(project, 'Main.lean'); mkdirSync(project);
const fixture = join(root, 'integration/fixtures/PanicSemantics.lean'); copyFileSync(fixture, source);
writeFileSync(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
const lean = await provisionLean(project), env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
for (const key of ['LEAN_BACKTRACE', 'LEAN_BACKTRACE_RAW', 'LEAN_ABORT_ON_PANIC']) delete env[key];
const report = { scope: 'Installed AOT panic fallback, stderr redirection and native termination differential controls',
  lean: lean.version, leanCommit: lean.commit, target, engine, compiler,
  sourceSha256: await hashFile(fixture), harnessSha256: await hashFile(fileURLToPath(import.meta.url)),
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], cases: [], passed: false };
report.adaptations = ['The supplementary fixture uses public panic and IO APIs plus the ordinary LEAN_ABORT_ON_PANIC environment control. Private Lean Shell exit-on-panic state requires a separate internal ABI probe.'];
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args, cwd, environment, success = true, timeout = 120_000) {
  report.phase = label; save(); const started = performance.now();
  const r = spawnSync(program, args, { cwd, env: environment, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 2 * 1024 * 1024 });
  const observation = { code: r.status, signal: r.signal, stdout: r.stdout, stderr: r.stderr };
  report.commands.push({ label, program, args, cwd, ...observation, error: r.error?.message,
    seconds: (performance.now() - started) / 1000 }); save();
  assert.ifError(r.error); if (success) assert.equal(r.status, 0, label + ': ' + (r.stderr || r.stdout));
  return observation;
}
function execute(label, command, mode, environment) {
  const cwd = join(output, label); mkdirSync(cwd);
  const result = run(label, command[0], [...command.slice(1), mode], cwd, environment, false);
  return { ...result, redirected: existsSync(join(cwd, 'panic.log')) ? readFileSync(join(cwd, 'panic.log'), 'utf8') : null };
}
try {
  report.engineVersion = run('engine version', engine, ['--version'], project, env).stdout.trim();
  report.packageVersion = JSON.parse(readFileSync(join(compiler, 'package.json'))).version;
  run('native C generation', lean.lean, ['-j1', '-Dcompiler.postponeCompile=false', '-c', source + '.c', source], project, env);
  const native = join(output, process.platform === 'win32' ? 'native.exe' : 'native');
  run('native compilation', join(lean.prefix, 'bin', process.platform === 'win32' ? 'leanc.exe' : 'leanc'),
    ['-O2', '-DNDEBUG', '-o', native, source + '.c'], project, env);
  const cases = [
    { name: 'fallback', mode: 'default', env: { LEAN_BACKTRACE: '0' } },
    { name: 'redirect', mode: 'redirect', env: { LEAN_BACKTRACE: '0' } },
    { name: 'io-panic', mode: 'io-panic', env: { LEAN_BACKTRACE: '0' } },
    { name: 'abort', mode: 'default', env: { LEAN_BACKTRACE: '0', LEAN_ABORT_ON_PANIC: '1' } },
    { name: 'abort-zero', mode: 'default', env: { LEAN_BACKTRACE: '0', LEAN_ABORT_ON_PANIC: '0' } },
    { name: 'abort-empty', mode: 'default', env: { LEAN_BACKTRACE: '0', LEAN_ABORT_ON_PANIC: '' } },
    { name: 'redirect-abort', mode: 'redirect', env: { LEAN_BACKTRACE: '0', LEAN_ABORT_ON_PANIC: '1' } },
  ];
  for (const row of cases) {
    report.cases.push(row);
    row.native = execute('native-' + row.name, [native], row.mode, { ...env, ...row.env }); save();
  }
  const redirected = report.cases.find(row => row.name === 'redirect').native;
  assert.match(redirected.redirected, /redirected panic/);
  assert.equal(redirected.stderr, 'stderr restored\n');
  assert.equal(redirected.stdout, 'default=0\n');
  for (const row of report.cases.filter(row => row.name.includes('abort'))) {
    if (process.platform !== 'win32') assert.equal(row.native.signal, 'SIGABRT');
    else assert.notEqual(row.native.code, 0);
  }
  const redirectedAbort = report.cases.find(row => row.name === 'redirect-abort').native;
  assert.equal(redirectedAbort.redirected, '');
  assert.match(redirectedAbort.stderr, /redirected panic/);
  const dist = join(output, 'dist');
  run('installed application build', process.execPath,
    [join(compiler, 'bin/lasm.mjs'), 'build', source, '--target', target, '--output', dist], project, env, true, 900_000);
  report.build = JSON.parse(readFileSync(join(dist, 'build-info.json')));
  const deployment = join(output, 'relocated deployment'); renameSync(dist, deployment);
  renameSync(project, project + '.hidden');
  const runtimeEnv = Object.fromEntries(Object.entries(process.env).filter(([key]) => !/^(?:LEAN_|LAKE_|ELAN_|LASM_)/.test(key)));
  Object.assign(runtimeEnv, { PATH: '', DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' });
  report.deployment = { directory: deployment, sourceHidden: true, buildEnvironmentRemoved: true,
    path: '', wasmSha256: await hashFile(join(deployment, 'program.wasm')) };
  for (const row of cases) {
    row.actual = execute('deployed-' + row.name, [engine, ...(target === 'deno' ? ['run', '-A'] : []),
      join(deployment, 'main.mjs')], row.mode, { ...runtimeEnv, ...row.env });
    try { assert.deepEqual(row.actual, row.native); row.passed = true; }
    catch (error) { row.passed = false; row.difference = error.message; }
    save();
  }
  assert.equal(await hashFile(fixture), report.sourceSha256);
  assert.equal(await hashFile(join(project + '.hidden', 'Main.lean')), report.sourceSha256);
  assert.equal(await hashFile(fileURLToPath(import.meta.url)), report.harnessSha256);
  report.passed = cases.every(row => row.passed);
  assert.ok(report.passed, 'Panic controls differ: ' + cases.filter(row => !row.passed).map(row => row.name).join(', '));
  report.phase = 'complete';
} catch (error) { report.error = { message: error.message, stack: error.stack }; throw error; }
finally { report.finishedAt = new Date().toISOString(); save(); }
