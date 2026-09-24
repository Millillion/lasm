import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, nodeArg, denoArg, bunArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length && (!nodeArg || denoArg && bunArg), 'Supply NEW_OUTPUT [NODE DENO BUN]');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve earlier probes'); mkdirSync(output, { recursive: true });
const inputs = ['scripts/full-lean/probes/wasmtime-atomics.c', 'scripts/full-lean/probes/wasmtime-atomics.mjs',
  'scripts/full-lean/probes/wasmtime-memory-view.c', 'scripts/full-lean/probes/wasmtime-helper.c',
  'scripts/full-lean/native-atomic-views.mjs', 'scripts/full-lean/probes/native-atomic-views.mjs',
  'scripts/full-lean/probe-native-atomic-views.mjs'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const report = { scope: 'Scalar JS atomic semantics on sparse memory64, original native primitives, and concurrent Wasm/JS workers; no shipping backend or Lean execution',
  specification: 'https://tc39.es/ecma262/multipage/structured-data.html#sec-atomics-object',
  inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], results: [], failures: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args, timeout = 90_000) {
  const result = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout,
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
  return result.stdout;
}
save();
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')], 180_000);
  const sdk = join(root, '.cache/wasmtime-49.0.0'), helper = join(output, 'atomics.so');
  report.helperInput = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC', '-DLASM_PROBE_SPARSE_HIGH_MEMORY=1',
    '-I' + join(sdk, 'include'), inputs[0], '-L' + join(sdk, 'lib'), '-lwasmtime', '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
  report.helperSha256 = await hashFile(helper);
  for (const [engine, args] of [
    [nodeArg ?? join(root, '.cache/js-runtimes/node-26.10.0/bin/node'), ['--max-old-space-size=128']],
    [denoArg ?? join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    [bunArg ?? join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ]) {
    try {
      const primitive = JSON.parse(run(engine, [...args, join(root, inputs[1]), helper]));
      const facade = JSON.parse(run(engine, [...args, join(root, inputs[5]), helper]));
      report.results.push({ engine: facade.engine, version: facade.version, primitive, facade });
    } catch (error) { report.failures.push({ engine, message: error.message }); }
    save();
  }
  assert.equal(report.failures.length, 0);
  assert.deepEqual(report.results.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [path, digest] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== digest) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
