// Validate a real immutable application module before/after exception conversion.
// This is deliberately not a host adapter or application execution harness.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, readFileSync, writeFileSync, statSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createRequire } from 'node:module';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [deploymentArg, outputArg, optimizerArg, ...extra] = process.argv.slice(2);
assert.ok(deploymentArg && outputArg && optimizerArg && !extra.length, 'Supply EXISTING_DEPLOYMENT NEW_OUTPUT NATIVE_WASM_OPT');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url));
const deployment = resolve(deploymentArg), output = resolve(outputArg), optimizer = resolve(optimizerArg);
const input = join(deployment, 'program.wasm'), source = join(root, 'scripts/full-lean/probes/wasmtime-helper.c');
assert.ok(!existsSync(output), 'Preserve earlier module experiments');
assert.ok(statSync(input).size <= 512 * 1024 * 1024, 'Module exceeds reviewed input bound');
mkdirSync(output, { recursive: true });
const report = { scope: 'Format validation and exception conversion of a real generated Lean module; no application executed',
  input, inputBytes: statSync(input).size, inputSha256: await hashFile(input),
  build: JSON.parse(readFileSync(join(deployment, 'build-info.json'), 'utf8')),
  sourceSha256: await hashFile(source), optimizer, optimizerSha256: await hashFile(optimizer),
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args, timeout = 60_000) {
  const execution = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout, killSignal: 'SIGKILL',
    maxBuffer: 256 * 1024, env: { ...process.env, BINARYEN_CORES: '1', RAYON_NUM_THREADS: '1', EMCC_CORES: '1' } });
  const record = { program, args, code: execution.status, signal: execution.signal,
    error: execution.error?.message, stdout: execution.stdout, stderr: execution.stderr };
  report.commands.push(record); save(); assert.ifError(execution.error); assert.equal(execution.status, 0, execution.stderr);
  return record;
}
let probe, destroy;
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')], 180_000);
  const sdk = join(root, '.cache/wasmtime-49.0.0'), helper = join(output, 'validator.so');
  report.helperInput = JSON.parse(readFileSync(join(sdk, 'download.json'), 'utf8'));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-shared', '-fPIC', '-I' + join(sdk, 'include'), source,
    '-L' + join(sdk, 'lib'), '-lwasmtime', '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
  report.helperSha256 = await hashFile(helper);
  const ffi = createRequire(import.meta.url)('koffi'), library = ffi.load(helper);
  const create = library.func('void *lasm_probe_new(char *error, size_t size)');
  destroy = library.func('void lasm_probe_delete(void *probe)');
  const validate = library.func('int lasm_probe_validate_module(void *probe, const uint8_t *bytes, size_t length, char *error, size_t size)');
  const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
  probe = create(error, error.length); assert.ok(probe, message());
  const assess = file => {
    const bytes = readFileSync(file); error.fill(0);
    const status = validate(probe, bytes, bytes.length, error, error.length);
    return { accepted: status === 0, status, diagnostic: message() };
  };
  report.original = assess(input); save();
  assert.equal(report.original.accepted, false, 'Original legacy-exception control unexpectedly accepted');
  assert.match(report.original.diagnostic, /legacy_exceptions/);
  report.optimizerVersion = run(optimizer, ['--version']).stdout.trim();
  const converted = join(output, 'converted.wasm');
  run(optimizer, [input, '--all-features', '--emit-exnref', '-o', converted], 1800_000);
  report.converted = { file: converted, bytes: statSync(converted).size,
    sha256: await hashFile(converted), ...assess(converted) };
  save(); assert.equal(report.converted.accepted, true, report.converted.diagnostic);
  report.passed = true;
} finally {
  if (probe) destroy(probe);
  report.inputUnchanged = await hashFile(input) === report.inputSha256;
  report.finishedAt = new Date().toISOString(); save();
  assert.ok(report.inputUnchanged, 'Original application was modified');
}
