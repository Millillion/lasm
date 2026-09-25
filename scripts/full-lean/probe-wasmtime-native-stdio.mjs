import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashWasmtimeFile as hashFile } from '../../src/wasmtime-artifact.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length); assert.equal(process.platform, 'linux');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const inputs = ['scripts/full-lean/probe-wasmtime-native-stdio.mjs', 'scripts/full-lean/probes/native-stdio-control.c',
  'test/fixtures/wasmtime-native-stdio.mjs', 'src/wasmtime-native-stdio.mjs', 'src/wasmtime-artifact.mjs',
  'src/native-files.mjs', 'src/native-file-worker.mjs', 'src/native-file-worker-pool.mjs',
  'src/native-file-message.mjs', 'src/native-file-worker-deno.mjs'];
const hashes = Object.fromEntries(await Promise.all(inputs.map(async name => [name, await hashFile(join(root, name))])));
const report = { scope: 'Native raw standard-descriptor writes compared with leased host workers in all three engines; not complete WASI descriptor support',
  inputs: hashes, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], comparisons: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
const run = (binary, args) => {
  const cwd = join(output, 'case-' + report.commands.length); mkdirSync(cwd);
  const result = spawnSync(binary, args, { cwd, timeout: 15_000, killSignal: 'SIGKILL', maxBuffer: 128 * 1024,
    env: { ...process.env, PATH: '', DENO_DISABLE_NODE_SHIM: '1' } });
  const actual = { stdout: result.stdout?.toString('base64'), stderr: result.stderr?.toString(), code: result.status, signal: result.signal };
  if (existsSync(join(cwd, 'buffered.bin'))) actual.bufferedFile = readFileSync(join(cwd, 'buffered.bin')).toString('base64');
  report.commands.push({ binary, args, cwd, ...actual, error: result.error?.message }); save();
  assert.ifError(result.error); assert.equal(result.signal, null); assert.equal(result.status, 0, actual.stderr);
  return actual;
};
save();
try {
  const native = join(output, 'native-control');
  const build = spawnSync('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-pthread', join(root, inputs[1]), '-o', native],
    { encoding: 'utf8', timeout: 30_000 });
  assert.ifError(build.error); assert.equal(build.status, 0, build.stderr); report.nativeSha256 = await hashFile(native);
  const modes = ['bytes', 'closed', 'full', 'readonly', 'partial', 'broken', 'blocked', 'buffered', 'forced'];
  const oracles = Object.fromEntries(modes.map(mode => [mode, run(native, [mode])]));
  for (const [engine, binary, flags] of [
    ['node', '.cache/js-runtimes/node-26.10.0/bin/node', ['--max-old-space-size=128']],
    ['deno', '.cache/js-runtimes/deno-2.9.7/deno', ['run', '--no-config', '-A', '--v8-flags=--max-old-space-size=128']],
    ['bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun', []],
  ]) for (const mode of modes) {
    const actual = run(join(root, binary), [...flags, join(root, inputs[2]), mode]);
    assert.deepEqual(actual, oracles[mode]); report.comparisons.push({ engine, mode, result: JSON.parse(actual.stderr) }); save();
  }
  assert.equal(report.comparisons.length, 27); report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const [name, sha256] of Object.entries(hashes))
    if (await hashFile(join(root, name)) !== sha256) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
