// The executable receives no expected result or source/build paths. The parent
// compares its byte output with fresh native runs outside the deployment sandbox.
import assert from 'node:assert/strict';
import { copyFileSync, cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, writeFileSync, rmSync } from 'node:fs';
import { delimiter, join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';
import { linuxIsolationFiles } from '../scripts/check-deployed-application.mjs';
import { provisionLean } from '../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../src/application-sources.mjs';
import { hashWasmtimeFile as hashFile } from '../src/wasmtime-artifact.mjs';
import { processOutput } from './process-output.mjs';

await ensureResourceGuard();
const [packageArg, sourceArg, outputArg, cacheArg, profile = 'cold', ...extra] = process.argv.slice(2);
assert.ok(packageArg && sourceArg && outputArg && cacheArg && !extra.length,
  'Supply COMPLETED_PREVIEW_PACKAGE LEAN_SOURCE NEW_OUTPUT EXISTING_TOOLCHAIN_CACHE [cold|lifecycle]');
assert.ok(['cold', 'lifecycle'].includes(profile));
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const packageFile = join(resolve(packageArg), 'result.json'), pack = JSON.parse(readFileSync(packageFile));
assert.ok(pack.passed && pack.inputsUnchanged);
const guard = JSON.parse(readFileSync(pack.resourceReport));
assert.ok(guard.unitReleased && !guard.resourceLimited); assert.deepEqual(guard.result, { code: 0, signal: null });
assert.equal(await hashFile(join(pack.dist, 'wasmtime.json')), pack.manifestSha256);
const compilation = JSON.parse(readFileSync(pack.compilation));
assert.equal(await hashFile(pack.compilation), pack.compilationSha256);
const originalSource = resolve(sourceArg), sourceSha256 = await hashFile(originalSource);
assert.equal(compilation.build.modules.length, 1); assert.equal(compilation.build.modules[0].sourceSha256, sourceSha256);
const inputs = ['integration/wasmtime-standalone.mjs', 'integration/process-output.mjs',
  'scripts/check-deployed-application.mjs', 'scripts/full-lean/restrict-filesystem.py'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
const isolated = mkdtempSync(join(tmpdir(), 'lasm-wasmtime-deploy-'));
const report = { scope: 'Fresh native interpreted/compiled controls and copied standalone preview in stock engines with source, build tools and original artifacts denied by Landlock. Linux x64; not managed CLI or complete runtime acceptance.',
  packageFile, packageSha256: await hashFile(packageFile), originalSource, sourceSha256, inputs: hashes,
  resourceReport: process.env.LASM_RESOURCE_REPORT, profile, isolated, commands: [], comparisons: [], denials: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, command, cwd, env, isolatedRun = false) {
  const execution = spawnSync(command[0], command.slice(1), { cwd, env, timeout: 90_000,
    killSignal: 'SIGKILL', maxBuffer: 1024 * 1024 });
  let notice;
  if (isolatedRun && execution.stderr) {
    const match = /^\[lasm\] Landlock ABI \d+: filesystem access restricted before execution\n/.exec(execution.stderr.toString());
    assert.ok(match, 'Kernel isolation must be active before application execution');
    notice = match[0].trim(); execution.stderr = execution.stderr.subarray(Buffer.byteLength(match[0]));
  }
  const actual = processOutput(execution);
  report.commands.push({ label, command, cwd, ...actual, isolation: notice,
    signal: execution.signal, error: execution.error?.message }); save();
  assert.ifError(execution.error); assert.equal(execution.signal, null, actual.stderr);
  return actual;
}
function observeFiles(cwd) {
  if (profile === 'cold') return {};
  const file = join(cwd, 'buffered.bin');
  return { bufferedFile: existsSync(file) ? readFileSync(file).toString('base64') : null,
    temporaryDirectoriesRemoved: !existsSync(join(cwd, 'space λ')) && !existsSync(join(cwd, 'removed')) };
}
save();
try {
  const project = join(output, 'native-source'); mkdirSync(project);
  writeFileSync(join(project, 'lean-toolchain'), `leanprover/lean4:v${pack.manifest.leanVersion}\n`);
  const source = join(project, 'Main.lean'); copyFileSync(originalSource, source);
  const lean = await provisionLean(project, { cache: resolve(cacheArg) });
  assert.equal(lean.commit, compilation.build.leanCommit);
  report.native = { version: lean.version, commit: lean.commit, identity: lean.identity };
  const nativeEnv = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '2' };
  const native = join(project, 'native-main'), c = join(project, 'main.c');
  const moduleOutput = profile === 'lifecycle' ? ['-o', join(project, 'Main.olean')] : [];
  assert.equal(run('generate native application', [lean.lean, '-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false',
    ...moduleOutput, '-c', c, source], project, nativeEnv).code, 0);
  assert.equal(run('compile native application', [join(lean.prefix, 'bin/leanc'), '-O2', '-DNDEBUG', '-o', native, c], project, nativeEnv).code, 0);
  let interpretedSource = source, interpretedEnv = nativeEnv;
  if (profile === 'lifecycle') {
    // Native Lean cannot evaluate an initializer from the module currently
    // being elaborated. Load the unchanged module normally before running its
    // imported main; the C-compiled control continues to use that same source.
    interpretedSource = join(project, 'Runner.lean');
    writeFileSync(interpretedSource, 'import Main\n');
    interpretedEnv = { ...nativeEnv, LEAN_PATH: [project, nativeEnv.LEAN_PATH].filter(Boolean).join(delimiter) };
    report.nativeOracleAdaptation = { kind: 'import completed module before interpreted main',
      reason: 'Native Lean rejects same-module initialize declarations during --run',
      entrypoint: interpretedSource, sha256: await hashFile(interpretedSource), applicationSourceUnchanged: true };
    save();
  }
  const samples = profile === 'cold' ? [['hello λ', '', 'space argument'], ['fail'], [], ['line\nvalue', '🌉', '\t']]
    : ['buffered', 'exit', 'forced', 'high-exit', 'error', 'stdio', 'cwd', 'removed-cwd', 'wait'].map(name => [name]);
  const oracles = [];
  for (const [index, args] of samples.entries()) {
    const cwd1 = join(output, 'interpreted-' + index), cwd2 = join(output, 'compiled-' + index);
    mkdirSync(cwd1); mkdirSync(cwd2);
    const interpreted = { ...run('native interpreted main', [lean.lean, '-Dlinter.all=false', '--run', interpretedSource, ...args], cwd1, interpretedEnv), ...observeFiles(cwd1) };
    const compiled = { ...run('native compiled main', [native, ...args], cwd2, nativeEnv), ...observeFiles(cwd2) };
    assert.deepEqual(compiled, interpreted); oracles.push(interpreted);
  }
  const deployment = join(isolated, 'deployment space λ'), data = join(isolated, 'data'), temporary = join(isolated, 'tmp');
  mkdirSync(data); mkdirSync(temporary); cpSync(pack.dist, deployment, { recursive: true });
  assert.equal(await hashFile(join(deployment, 'wasmtime.json')), pack.manifestSha256);
  const denied = [originalSource, source, lean.lean, join(root, 'package.json'), pack.cache.file,
    join(pack.dist, 'host/instance.so'), join(root, 'src/wasmtime-runtime.mjs')];
  const denialSource = join(data, 'deny.mjs');
  writeFileSync(denialSource, `import assert from 'node:assert/strict'; import { readFileSync } from 'node:fs';
for (const path of ${JSON.stringify(denied)}) assert.throws(() => readFileSync(path), { code: 'EACCES' });\n`);
  report.deployment = { directory: deployment, manifestSha256: pack.manifestSha256, deniedFiles: denied,
    path: '', sourceAndBuildContentsDenied: true, expectedResultsPresent: false };
  for (const [engine, binary, flags] of [
    ['node', '.cache/js-runtimes/node-26.10.0/bin/node', ['--max-old-space-size=128']],
    ['deno', '.cache/js-runtimes/deno-2.9.7/deno', ['run', '--no-config', '-A', '--v8-flags=--max-old-space-size=128']],
    ['bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun', []],
  ]) {
    const executable = join(isolated, engine); copyFileSync(join(root, binary), executable);
    const ruleFile = join(output, engine + '-rules.json');
    const env = { PATH: '', LANG: 'C.UTF-8', TMPDIR: temporary, HOME: temporary,
      DENO_DIR: join(temporary, 'deno'), DENO_DISABLE_NODE_SHIM: '1', LEAN_NUM_THREADS: '2' };
    writeFileSync(ruleFile, JSON.stringify({ allow: [...linuxIsolationFiles(),
      { path: executable, access: 'execute' }, { path: deployment, access: 'execute' },
      { path: data, access: 'write' }, { path: temporary, access: 'write' }], environment: env }, null, 2) + '\n');
    const command = ['/usr/bin/python3', join(root, inputs[3]), ruleFile, '--', executable, ...flags];
    const control = run(engine + ' source/tool denial', [...command, denialSource], data, process.env, true);
    assert.deepEqual(control, { code: 0, stdout: '', stderr: '', stdoutBase64: '', stderrBase64: '' });
    report.denials.push({ engine, control, executableSha256: await hashFile(executable), ruleFile }); save();
    for (const [index, args] of samples.entries()) {
      const cwd = join(data, engine + '-' + index); mkdirSync(cwd);
      const actual = { ...run(engine + ' isolated application', [...command, join(deployment, 'main.mjs'), ...args], cwd, process.env, true), ...observeFiles(cwd) };
      report.comparisons.push({ engine, args, expected: oracles[index], actual }); save();
      assert.deepEqual(actual, oracles[index]);
      if (profile === 'cold' && index !== 1) assert.ok(!existsSync(join(cwd, 'state/roundtrip-λ.txt')), 'Application removes its temporary file');
    }
    rmSync(executable);
  }
  for (const [name, item] of Object.entries(pack.manifest.files))
    assert.equal(await hashFile(join(deployment, name)), item.sha256);
  assert.equal(report.comparisons.length, samples.length * 3); assert.equal(report.denials.length, 3);
  report.passed = true;
} finally {
  report.inputsUnchanged = await hashFile(originalSource) === sourceSha256 && await hashFile(packageFile) === report.packageSha256;
  for (const [name, sha256] of Object.entries(hashes))
    if (await hashFile(join(root, name)) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
  if (report.passed) { rmSync(isolated, { recursive: true }); report.verifiedTemporaryDeploymentRemoved = true; save(); }
}
