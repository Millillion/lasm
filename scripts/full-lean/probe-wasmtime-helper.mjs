import assert from 'node:assert/strict';
import { mkdirSync, existsSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';
import { legacyExceptionBytes } from './probes/legacy-exception-bytes.mjs';

await ensureResourceGuard();
const [outputArg, nodeArg, denoArg, bunArg, ...extra] = process.argv.slice(2);
if (!outputArg || extra.length || (nodeArg && (!denoArg || !bunArg)) || process.platform !== 'linux' || process.arch !== 'x64')
  throw new Error('Supply NEW_OUTPUT [NODE DENO BUN] on Linux x64');
const root = fileURLToPath(new URL('../..', import.meta.url)), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve earlier helper experiments');
mkdirSync(output, { recursive: true });
const preparation = spawnSync('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')],
  { encoding: 'utf8', timeout: 180_000, killSignal: 'SIGKILL', maxBuffer: 256 * 1024 });
writeFileSync(join(output, 'preparation.json'), JSON.stringify({ code: preparation.status,
  signal: preparation.signal, error: preparation.error?.message, stdout: preparation.stdout, stderr: preparation.stderr }, null, 2) + '\n');
assert.ifError(preparation.error); assert.equal(preparation.status, 0, preparation.stderr);
const sdk = join(root, '.cache/wasmtime-49.0.0');
const input = JSON.parse(readFileSync(join(sdk, 'download.json'), 'utf8'));
assert.equal(input.archiveSha256, '8f181711f4cf4ddd084d7d54d13d10d44e3c622b0f03bfb8b2cc7afbd85cc131');
for (const [name, record] of Object.entries(input.selectedFiles))
  assert.equal(await hashFile(join(sdk, name)), record.sha256, name);
const source = join(root, 'scripts/full-lean/probes/wasmtime-helper.c');
const harness = join(root, 'scripts/full-lean/probes/wasmtime-helper.mjs');
const report = { scope: 'Bounded private-helper feasibility probe only; no shipping backend change', input,
  sourceSha256: await hashFile(source), harnessSha256: await hashFile(harness),
  memoryProfile: 'Small mapping and reviewed sparse mapping above 4 GiB; only individual cells touched; no pressure test',
  compilerWorkers: 1, resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args) {
  const execution = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout: 60_000,
    killSignal: 'SIGKILL', maxBuffer: 256 * 1024,
    env: { ...process.env, RAYON_NUM_THREADS: '1', BINARYEN_CORES: '1', EMCC_CORES: '1' } });
  const record = { program, args, code: execution.status, signal: execution.signal,
    error: execution.error?.message, stdout: execution.stdout, stderr: execution.stderr };
  report.commands.push(record); save();
  assert.ifError(execution.error); assert.equal(execution.status, 0, execution.stderr);
  return record;
}
try {
  const legacyFile = join(output, 'legacy.wasm'), convertedFile = join(output, 'converted.wasm');
  writeFileSync(legacyFile, legacyExceptionBytes);
  const optimizer = join(root, 'node_modules/binaryen/bin/wasm-opt');
  const version = run(nodeArg ?? process.execPath, ['--max-old-space-size=128', optimizer, '--version']).stdout.trim();
  run(nodeArg ?? process.execPath, ['--max-old-space-size=128', optimizer, legacyFile,
    '--all-features', '--emit-exnref', '-o', convertedFile]);
  report.conversion = { tool: version, toolSha256: await hashFile(optimizer),
    originalSha256: await hashFile(legacyFile), convertedSha256: await hashFile(convertedFile),
    controlSourceSha256: await hashFile(join(root, 'scripts/full-lean/probes/legacy-exception-bytes.mjs')) };
  report.helpers = {}; report.results = []; report.failures = [];
  for (const [profile, flags] of [['small', []], ['sparse-high', ['-DLASM_PROBE_SPARSE_HIGH_MEMORY=1']]]) {
    const helper = join(output, profile + '.so');
    run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-shared', '-fPIC', ...flags,
      '-I' + join(sdk, 'include'), source, '-L' + join(sdk, 'lib'), '-lwasmtime', '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
    report.helpers[profile] = await hashFile(helper);
  for (const [engine, args] of [
    [nodeArg ?? join(root, '.cache/js-runtimes/node-26.10.0/bin/node'), ['--max-old-space-size=128']],
    [denoArg ?? join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', '--v8-flags=--max-old-space-size=128']],
    [bunArg ?? join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
  ]) {
    try { report.results.push(JSON.parse(run(engine, [...args, harness, helper, profile, convertedFile]).stdout)); }
    catch (error) { report.failures.push({ profile, engine, error: error.message }); save(); }
  }
  }
  assert.equal(report.failures.length, 0, 'One or more stock engine probes failed; see result.json');
  assert.deepEqual(report.results.map(row => [row.engine, row.version]),
    [['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2'],
     ['node', '26.10.0'], ['deno', '2.9.7'], ['bun', '1.4.2']]);
  report.passed = true;
} finally { report.finishedAt = new Date().toISOString(); save(); }
