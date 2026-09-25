// Negative control: the owned diagnostic process must stop even when its
// workers are executing native Wasm. This is not embedded Store disposal.
import assert from 'node:assert/strict';
import { readFileSync, writeFileSync, mkdirSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { ensureResourceGuard } from './resource-guard.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

await ensureResourceGuard();
const [completedArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(completedArg && outputArg && !extra.length, 'Supply PASSED_PRIVATE_APPLICATION NEW_OUTPUT');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url));
const completed = resolve(completedArg), output = resolve(outputArg);
assert.ok(!existsSync(output));
const priorFile = join(completed, 'result.json'), prior = JSON.parse(readFileSync(priorFile));
assert.ok(prior.passed && prior.inputsUnchanged);
const resources = JSON.parse(readFileSync(prior.resourceReport));
assert.ok(resources.unitReleased && !resources.resourceLimited);
assert.deepEqual(resources.result, { code: 0, signal: null });
const helper = join(completed, 'instance.so'), api = join(completed, 'native-api.node');
assert.equal(await hashFile(helper), prior.helperSha256);
assert.equal(await hashFile(api), prior.nativeApiSha256);
assert.equal(await hashFile(prior.compilation.cache.file), prior.compilation.cache.sha256);
const originalCheck = join(completed, 'application-check.json');
assert.equal(await hashFile(originalCheck), prior.applicationCheckSha256);
const check = JSON.parse(readFileSync(originalCheck));
const sentinel = 'deliberately incorrect oracle for owned-process exit control';
assert.notEqual(check.expected.stdout, sentinel);
check.expected.stdout = sentinel;
mkdirSync(output, { recursive: true });
const checkFile = join(output, 'negative-check.json');
writeFileSync(checkFile, JSON.stringify(check, null, 2) + '\n');
const inputs = ['scripts/full-lean/probe-wasmtime-owned-exit.mjs',
  'scripts/full-lean/probes/wasmtime-lean-supervisor.mjs', 'scripts/full-lean/probes/wasmtime-lean-main.mjs',
  'scripts/full-lean/probes/wasmtime-wasi-stdio.mjs',
  'scripts/full-lean/probes/wasmtime-guest-memory.mjs', 'integration/process-output.mjs',
  'src/native-files.mjs', 'src/native-file-worker.mjs', 'src/native-file-worker-pool.mjs',
  'src/native-file-worker-deno.mjs', 'src/native-file-message.mjs'];
inputs.push('src/wasmtime-runtime.mjs', 'src/wasmtime-worker.mjs', 'src/wasmtime-artifact.mjs', 'src/wasmtime-native-stdio.mjs', 'src/wasmtime-guest-memory.mjs', 'src/wasmtime-console.mjs', 'src/wasmtime-wasi-stdio.mjs', 'src/worker-stdio.cjs', 'src/native-worker-cwd.cjs', 'src/native-pthread-factory.cjs', 'src/native-pthread-factory-deno.mjs');
const hashes = Object.fromEntries(await Promise.all(inputs.map(async path => [path, await hashFile(join(root, path))])));
const report = { scope: 'Intentional private-runner assertion failure must terminate its owned process promptly; no Lean source/test changes',
  prior: priorFile, priorSha256: await hashFile(priorFile), inputs: hashes, negativeCheckSha256: await hashFile(checkFile),
  originalCheckSha256: prior.applicationCheckSha256, deadlineMs: 15_000, results: [], passed: false,
  resourceReport: process.env.LASM_RESOURCE_REPORT };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
try {
  for (const [engine, binary, flags] of [
    ['node', '.cache/js-runtimes/node-26.10.0/bin/node', ['--max-old-space-size=128']],
    ['deno', '.cache/js-runtimes/deno-2.9.7/deno', ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    ['bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun', []],
  ]) {
    const cwd = join(output, engine); mkdirSync(cwd);
    const command = [join(root, binary), ...flags, join(root, inputs[1]), helper,
      prior.compilation.cache.file, prior.compilation.cache.sha256, api, checkFile];
    const start = performance.now();
    const result = spawnSync(command[0], command.slice(1), { cwd, encoding: 'utf8', timeout: report.deadlineMs,
      killSignal: 'SIGKILL', maxBuffer: 256 * 1024,
      env: { ...process.env, LEAN_NUM_THREADS: '1', LASM_VM_STACK_MB: '96',
        ...(check.leanStackSizeKb === undefined ? {} : { LEAN_STACK_SIZE_KB: check.leanStackSizeKb }) } });
    const seconds = (performance.now() - start) / 1000;
    report.results.push({ engine, command, seconds, code: result.status, signal: result.signal,
      stdout: result.stdout, stderr: result.stderr, error: result.error?.message }); save();
    assert.ifError(result.error); assert.equal(result.status, 1); assert.equal(result.signal, null);
    assert.equal(result.stdout, ''); assert.match(result.stderr, /AssertionError/);
    assert.ok(result.stderr.includes(sentinel), 'The intentional oracle mismatch must be the failure');
    assert.ok(seconds < report.deadlineMs / 1000);
  }
  report.passed = true;
} finally {
  report.inputsUnchanged = await hashFile(priorFile) === report.priorSha256 &&
    await hashFile(originalCheck) === prior.applicationCheckSha256;
  for (const [path, hash] of Object.entries(hashes))
    if (await hashFile(join(root, path)) !== hash) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
