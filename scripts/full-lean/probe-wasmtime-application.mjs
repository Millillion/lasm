// Differential execution of an already verified compiled application through
// the private helper. This does not claim an installed Wasmtime backend.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync, copyFileSync, statSync } from 'node:fs';
import { resolve, join, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { provisionLean } from '../../src/managed-lean.mjs';
import { nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';
import { processOutput } from '../../integration/process-output.mjs';

await ensureResourceGuard();
const [compilationArg, sourceArg, outputArg, toolchainCacheArg, argumentsJson = '[]', ...extra] = process.argv.slice(2);
assert.ok(compilationArg && sourceArg && outputArg && toolchainCacheArg && !extra.length,
  'Supply COMPLETED_COMPILATION LEAN_SOURCE NEW_OUTPUT EXISTING_TOOLCHAIN_CACHE [ARGUMENTS_JSON]');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve earlier application runs');
const args = JSON.parse(argumentsJson);
assert.ok(Array.isArray(args) && args.every(arg => typeof arg === 'string' && !arg.includes('\0')));
const compilationFile = resolve(compilationArg), compilation = JSON.parse(readFileSync(compilationFile));
assert.ok(compilation.passed && compilation.inputUnchanged && compilation.harnessUnchanged);
const previousResources = JSON.parse(readFileSync(compilation.resourceReport));
assert.ok(previousResources.unitReleased && !previousResources.resourceLimited);
assert.deepEqual(previousResources.result, { code: 0, signal: null });
assert.equal(await hashFile(compilation.cache.file), compilation.cache.sha256);
assert.equal(statSync(compilation.cache.file).size, compilation.cache.bytes);
const originalSource = resolve(sourceArg), sourceSha256 = await hashFile(originalSource);
assert.equal(compilation.build.modules.length, 1, 'This harness requires one standalone source module');
assert.equal(compilation.build.modules[0].sourceSha256, sourceSha256);
const sources = ['scripts/full-lean/probe-wasmtime-application.mjs',
  'scripts/full-lean/probes/wasmtime-instantiate-lean.c', 'scripts/full-lean/probes/wasmtime-native-api.c',
  'scripts/full-lean/probes/wasmtime-lean-supervisor.mjs', 'scripts/full-lean/probes/wasmtime-lean-main.mjs',
  'src/node-host.mjs', 'src/lean-io-errors.mjs', 'src/bun-stack.mjs',
  'scripts/full-lean/probes/wasmtime-wasi-stdio.mjs', 'integration/process-output.mjs',
  'scripts/full-lean/probes/wasmtime-guest-memory.mjs',
  'scripts/full-lean/probes/wasmtime-console.mjs',
  'src/native-files.mjs', 'src/native-file-worker.mjs', 'src/native-file-worker-pool.mjs',
  'src/native-file-worker-deno.mjs', 'src/native-file-message.mjs',
  'scripts/full-lean/probes/wasmtime-canonical-imports.h'];
const hashes = Object.fromEntries(await Promise.all(sources.map(async path => [path, await hashFile(join(root, path))])));
mkdirSync(output, { recursive: true });
const report = { scope: 'Fresh native-interpreted/native-compiled and private Wasmtime helper comparisons; not installed backend or full API acceptance',
  compilation: { path: compilationFile, sha256: await hashFile(compilationFile), cache: compilation.cache, build: compilation.build },
  originalSource, sourceSha256, args, inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT,
  commands: [], results: [], failures: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, arguments_, { cwd = output, env = process.env, runtime = false } = {}) {
  const result = spawnSync(program, arguments_, { cwd, timeout: 90_000,
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024, env: { ...env, RAYON_NUM_THREADS: '1' } });
  const observed = processOutput(result);
  report.commands.push({ label, program, args: arguments_, cwd, code: result.status, signal: result.signal,
    error: result.error?.message, ...observed }); save();
  assert.ifError(result.error); assert.equal(result.signal, null, observed.stderr);
  if (!runtime) assert.equal(result.status, 0, observed.stderr);
  return observed;
}
save();
try {
  run('verify Wasmtime SDK', 'python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  writeFileSync(join(output, 'lean-toolchain'), `leanprover/lean4:v${compilation.build.lean}\n`);
  const lean = await provisionLean(output, { cache: resolve(toolchainCacheArg) });
  assert.equal(lean.commit, compilation.build.leanCommit);
  report.native = { version: lean.version, commit: lean.commit, identity: lean.identity };
  const source = join(output, 'Main.lean'); copyFileSync(originalSource, source);
  const env = { ...nativeLeanEnvironment(lean), LEAN_NUM_THREADS: '1' };
  // Leave any caller-supplied Lean stack setting intact. No test-specific
  // argument, timeout or allocation reduction is used to create a pass.
  const interpretedCwd = join(output, 'native-interpreted'), compiledCwd = join(output, 'native-compiled');
  mkdirSync(interpretedCwd); mkdirSync(compiledCwd);
  const interpreted = run('native interpreted application', lean.lean, ['-Dlinter.all=false', '--run', source, ...args],
    { env, cwd: interpretedCwd, runtime: true });
  const c = join(output, 'main.c'), native = join(output, 'native-main');
  run('generate native application', lean.lean, ['-j1', '-Dlinter.all=false', '-Dcompiler.postponeCompile=false', '-c', c, source], { env });
  run('compile native application', join(lean.prefix, 'bin/leanc'), ['-O2', '-DNDEBUG', '-o', native, c], { env });
  const compiled = run('native compiled application', native, args, { env, cwd: compiledCwd, runtime: true });
  assert.deepEqual(compiled, interpreted); report.oracle = interpreted; save();
  const sdk = join(root, '.cache/wasmtime-49.0.0'), helper = join(output, 'instance.so'), api = join(output, 'native-api.node');
  report.helperInput = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('compile helper', 'cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
    '-I' + join(sdk, 'include'), join(root, sources[1]), '-L' + join(sdk, 'lib'), '-lwasmtime',
    '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
  const headers = join(root, '.cache/js-runtimes/node-26.10.0/include/node');
  report.headers = Object.fromEntries(await Promise.all(
    ['node_api.h', 'node_api_types.h', 'js_native_api.h', 'js_native_api_types.h'].map(async name =>
      [name, await hashFile(join(headers, name))])));
  run('compile direct Node-API driver', 'cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC',
    '-I' + headers, join(root, sources[2]), '-ldl', '-o', api]);
  report.helperSha256 = await hashFile(helper); report.nativeApiSha256 = await hashFile(api);
  const check = { name: basename(originalSource, '.lean'), lean: lean.version, args, expected: interpreted };
  if (env.LEAN_STACK_SIZE_KB !== undefined) check.leanStackSizeKb = env.LEAN_STACK_SIZE_KB;
  const checkPath = join(output, 'application-check.json');
  writeFileSync(checkPath, JSON.stringify(check, null, 2) + '\n'); report.applicationCheckSha256 = await hashFile(checkPath);
  const engines = [
    ['node', join(root, '.cache/js-runtimes/node-26.10.0/bin/node'), ['--max-old-space-size=128']],
    ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ];
  for (const [name, engine, flags] of engines) {
    const cwd = join(output, name); mkdirSync(cwd);
    try {
      const actual = run('private helper application', engine, [...flags, join(root, sources[3]), helper,
        compilation.cache.file, compilation.cache.sha256, api, checkPath],
      { cwd, env: { ...env, LASM_VM_STACK_MB: '96' } });
      assert.equal(actual.stderr, '');
      const result = JSON.parse(actual.stdout);
      assert.deepEqual({ code: result.code, stdout: result.stdout, stderr: result.stderr,
        stdoutBase64: result.stdoutBase64, stderrBase64: result.stderrBase64 }, interpreted);
      assert.equal(result.wasmEntry, 'direct Node-API on verified worker stacks');
      assert.equal(result.controlStackBytes, 64 * 1024 ** 2);
      assert.equal(result.nativeStackOverflowControl, true);
      assert.equal(result.resolvedFunctionGlobals.length, 6);
      for (const thread of result.threads) assert.deepEqual(thread.ready.resolvedFunctionGlobals, result.resolvedFunctionGlobals);
      report.results.push(result);
    } catch (error) { report.failures.push({ engine: name, message: error.message }); }
    save();
  }
  assert.equal(report.failures.length, 0);
  assert.deepEqual(report.results.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  assert.equal(await hashFile(checkPath), report.applicationCheckSha256);
  assert.equal(await hashFile(compilation.cache.file), compilation.cache.sha256);
  report.passed = true;
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.inputsUnchanged = await hashFile(originalSource) === sourceSha256;
  for (const [path, sha] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== sha) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
