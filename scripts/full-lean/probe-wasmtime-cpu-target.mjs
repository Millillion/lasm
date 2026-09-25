import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashWasmtimeFile as hashFile, wasmtimeCpuTarget } from '../../src/wasmtime-artifact.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length, 'Supply NEW_OUTPUT');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const inputs = ['scripts/full-lean/probe-wasmtime-cpu-target.mjs',
  'scripts/full-lean/probes/wasmtime-cpu-target.c', 'test/wasmtime-artifact.test.mjs', 'src/wasmtime-artifact.mjs'];
inputs.push('scripts/full-lean/probes/wasmtime-engine-config.h');
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const report = { scope: 'Shared baseline engine configuration: actual SIMD and shared-memory64 atomic execution, cache round trips and native-cache controls on this CPU. No different-CPU or whole-application acceptance.',
  inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args) {
  const result = spawnSync(program, args, { cwd: output, timeout: 90_000, encoding: 'utf8',
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.signal, null); assert.equal(result.status, 0, result.stderr);
  return result.stdout;
}
save();
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  const sdk = join(root, '.cache/wasmtime-49.0.0'), control = join(output, 'cpu-control');
  report.sdk = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
    '-fsanitize=undefined', '-fno-sanitize-recover=all', '-I' + join(sdk, 'include'),
    join(root, inputs[1]), '-L' + join(sdk, 'lib'), '-lwasmtime', '-pthread',
    '-Wl,-rpath,' + join(sdk, 'lib'), '-o', control]);
  const unit = run(process.execPath, ['--max-old-space-size=128', '--test', '--test-isolation=none', '--test-reporter=tap', join(root, 'test/wasmtime-artifact.test.mjs')]);
  assert.match(unit, /^# tests 6$/m); assert.match(unit, /^# fail 0$/m); assert.match(unit, /^# skipped 0$/m);
  report.manifestControls = { passed: 6, failed: 0, skipped: 0 };
  report.native = JSON.parse(run(control, []));
  assert.equal(report.native.passed, true); assert.equal(report.native.cpuTarget, wasmtimeCpuTarget);
  assert.equal(report.native.baselineCacheExecutions, 2);
  assert.equal(report.native.sharedMemory64AtomicAndSimdResult, 16);
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [path, sha256] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
