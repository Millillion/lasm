import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashWasmtimeFile as hashFile } from '../../src/wasmtime-artifact.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [outputArg, ...extra] = process.argv.slice(2); assert.ok(outputArg && !extra.length);
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const names = ['wasmtime-instantiate-lean.c', 'wasmtime-main-symbols.h', 'wasmtime-main-symbols.c',
  'wasmtime-function-globals.c', 'wasmtime-environment.c', 'wasmtime-engine-config.h', 'wasmtime-canonical-imports.h'];
const sources = [fileURLToPath(import.meta.url), ...names.map(name => join(root, 'scripts/full-lean/probes', name))];
const inputs = Object.fromEntries(await Promise.all(sources.map(async path => [path, await hashFile(path)])));
const report = { scope: 'Linux x64 native controls for memory64 main symbols, function globals and environment; no side-module or shipping acceptance claim',
  inputs, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args) {
  const result = spawnSync(program, args, { encoding: 'utf8', cwd: root, timeout: 60_000,
    maxBuffer: 128 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal, stdout: result.stdout, stderr: result.stderr }); save();
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr); assert.equal(result.signal, null);
  return result.stdout;
}
save();
try {
  const sdk = join(root, '.cache/wasmtime-49.0.0');
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')]);
  for (const name of ['main-symbols', 'function-globals', 'environment']) {
    const executable = join(output, name), data = join(output, name + '-data'); mkdirSync(data);
    run('cc', ['-std=c11', '-O1', '-g', '-Wall', '-Wextra', '-Werror', '-fsanitize=undefined', '-fno-sanitize-recover=all',
      '-I' + join(sdk, 'include'), join(root, 'scripts/full-lean/probes/wasmtime-' + name + '.c'),
      '-L' + join(sdk, 'lib'), '-lwasmtime', '-Wl,-rpath,' + join(sdk, 'lib'), '-o', executable]);
    const result = JSON.parse(run(executable, [data])); assert.equal(result.passed, true);
    (report.results ??= {})[name] = result; save();
  }
  report.passed = true;
} finally {
  report.inputsUnchanged = true;
  for (const path of sources) if (await hashFile(path) !== inputs[path]) report.inputsUnchanged = false;
  report.finishedAt = new Date().toISOString(); save(); assert.ok(report.inputsUnchanged);
}
