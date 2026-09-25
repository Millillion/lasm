import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, glueArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && glueArg && !extra.length, 'Supply NEW_OUTPUT VERIFIED_GENERATED_GLUE');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg), glue = resolve(glueArg);
assert.ok(!existsSync(output), 'Preserve earlier probe results');
const inputs = ['scripts/full-lean/probe-wasmtime-function-globals.mjs',
  'scripts/full-lean/probes/wasmtime-function-globals.c', 'scripts/full-lean/probes/wasmtime-instantiate-lean.c',
  'scripts/full-lean/probes/wasmtime-function-globals.mjs', 'scripts/full-lean/probes/wasmtime-console.mjs',
  'scripts/full-lean/probes/wasmtime-guest-memory.mjs', 'test/fixtures/emscripten-console.mjs',
  'test/wasmtime-console.test.mjs', 'scripts/full-lean/probes/wasmtime-canonical-imports.h'];
inputs.push('src/wasmtime-console.mjs', 'src/wasmtime-guest-memory.mjs');
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const glueSha256 = await hashFile(glue);
mkdirSync(output, { recursive: true });
const report = { scope: 'Private memory64 function-global resolution, native negative controls, and unchanged SDK console differential tests; not shipping helper acceptance',
  resourceReport: process.env.LASM_RESOURCE_REPORT, inputs: hashes, oracleGlue: { path: glue, sha256: glueSha256 },
  commands: [], engines: [], failures: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(label, program, args) {
  const result = spawnSync(program, args, { cwd: output, timeout: 90_000, killSignal: 'SIGKILL',
    encoding: 'utf8', maxBuffer: 256 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ label, program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.signal, null, result.stderr); assert.equal(result.status, 0, result.stderr);
  return result.stdout;
}
save();
try {
  run('verify Wasmtime SDK', 'python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  const sdk = join(root, '.cache/wasmtime-49.0.0');
  report.sdk = JSON.parse(readFileSync(join(sdk, 'download.json')));
  const node = join(root, '.cache/js-runtimes/node-26.10.0/bin/node');
  const unitOutput = run('focused console unit tests', node, ['--max-old-space-size=128', '--test',
    '--test-isolation=none', '--test-reporter=tap', join(root, inputs[7])]);
  assert.match(unitOutput, /^# tests 6$/m); assert.match(unitOutput, /^# fail 0$/m);
  assert.match(unitOutput, /^# skipped 0$/m); report.unit = { passed: 6, failed: 0, skipped: 0 };
  const flags = ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-I' + join(sdk, 'include')];
  const link = ['-L' + join(sdk, 'lib'), '-lwasmtime', '-pthread', '-Wl,-rpath,' + join(sdk, 'lib')];
  const control = join(output, 'function-globals'), helper = join(output, 'instance.so');
  run('compile native function-global controls', 'cc', [...flags, join(root, inputs[1]), ...link, '-o', control]);
  run('compile private instantiation helper', 'cc', [...flags, '-shared', '-fPIC', join(root, inputs[2]), ...link, '-o', helper]);
  report.native = JSON.parse(run('native binding and failure controls', control, [output]));
  assert.equal(report.native.passed, true);
  report.helperSha256 = await hashFile(helper);
  const cache = join(output, 'positive.cwasm'), cacheSha256 = await hashFile(cache);
  report.trustedFixture = { path: cache, sha256: cacheSha256, trust: 'Tiny local WAT compiled and serialized by the guarded native control' };
  save();
  for (const [engine, program, flags] of [
    ['node', node, ['--max-old-space-size=128']],
    ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ]) {
    try {
      const result = JSON.parse(run(`${engine} SDK console differential`, program, [...flags, join(root, inputs[3]),
        helper, cache, cacheSha256, glue, glueSha256]));
      assert.equal(result.engine, engine); assert.equal(result.passed, true); report.engines.push(result);
    } catch (error) { report.failures.push({ engine, message: error.message }); }
    save();
  }
  assert.deepEqual(report.failures, []);
  assert.deepEqual(report.engines.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  assert.equal(new Set(report.engines.map(row => row.resultSha256)).size, 1);
  assert.equal(await hashFile(cache), cacheSha256); assert.equal(await hashFile(helper), report.helperSha256);
  report.passed = true;
} catch (error) { report.error = error.stack; throw error; }
finally {
  report.inputsUnchanged = await hashFile(glue) === glueSha256;
  for (const [path, sha] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== sha) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
