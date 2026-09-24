import assert from 'node:assert/strict';
import { mkdirSync, existsSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2);
assert.ok(outputArg && !extra.length); assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve earlier probes'); mkdirSync(output, { recursive: true });
const sources = ['scripts/full-lean/probes/native-api-stack.c', 'scripts/full-lean/probes/native-api-stack.mjs',
  'scripts/full-lean/probe-native-api-stack.mjs', 'src/bun-stack.mjs'];
const inputs = Object.fromEntries(await Promise.all(sources.map(async path => [path, await hashFile(join(root, path))])));
const headers = join(root, '.cache/js-runtimes/node-26.10.0/include/node');
const headerHashes = Object.fromEntries(await Promise.all(['node_api.h', 'node_api_types.h', 'js_native_api.h', 'js_native_api_types.h']
  .map(async path => [path, await hashFile(join(headers, path))])));
const report = { scope: 'Direct Node-API and registered FFI callback interoperability; no Lean or shipping backend acceptance',
  inputs, headers: headerHashes, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], results: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args) {
  const result = spawnSync(program, args, { cwd: output, encoding: 'utf8', timeout: 30_000,
    killSignal: 'SIGKILL', maxBuffer: 128 * 1024, env: { ...process.env, LASM_VM_STACK_MB: '96' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal, error: result.error?.message,
    stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr); return result.stdout;
}
try {
  const helper = join(output, 'native-stack.node');
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-pthread', '-shared', '-fPIC',
    '-I' + headers, join(root, sources[0]), '-o', helper]);
  report.helperSha256 = await hashFile(helper);
  for (const [engine, args] of [
    [join(root, '.cache/js-runtimes/node-26.10.0/bin/node'), ['--max-old-space-size=128']],
    [join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    [join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ]) report.results.push(JSON.parse(run(engine, [...args, join(root, sources[1]), helper])));
  assert.deepEqual(report.results.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  report.passed = true;
} catch (error) { report.error = error.stack ?? String(error); throw error; }
finally {
  report.inputsUnchanged = true;
  for (const [path, digest] of Object.entries(inputs)) if (await hashFile(join(root, path)) !== digest) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
