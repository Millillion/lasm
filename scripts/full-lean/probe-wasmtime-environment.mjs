import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashWasmtimeFile as hashFile } from '../../src/wasmtime-artifact.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length, 'Supply NEW_OUTPUT');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const inputs = ['scripts/full-lean/probe-wasmtime-environment.mjs',
  'scripts/full-lean/probes/wasmtime-environment.c', 'scripts/full-lean/probes/wasmtime-instantiate-lean.c',
  'scripts/full-lean/probes/wasmtime-canonical-imports.h'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const report = { scope: 'Actual C environment bridge with tiny Wasm imports: empty, raw bytes, large snapshots, malformed snapshots and guest bounds. Supplementary controls; not full application acceptance.',
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
  const sdk = join(root, '.cache/wasmtime-49.0.0'), control = join(output, 'environment-control');
  report.sdk = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror',
    '-fsanitize=undefined', '-fno-sanitize-recover=all', '-I' + join(sdk, 'include'),
    join(root, inputs[1]), '-L' + join(sdk, 'lib'), '-lwasmtime', '-pthread',
    '-Wl,-rpath,' + join(sdk, 'lib'), '-o', control]);
  report.native = JSON.parse(run(control, [output]));
  assert.deepEqual(report.native, { passed: true, validSnapshots: 6, malformedSnapshots: 7,
    guestBoundaryChecks: 16, largeSnapshotBytes: 1_228_800 });
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [path, sha256] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
