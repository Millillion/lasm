// Next helper prerequisite after real-module format validation. No application
// is instantiated, no fake imports are supplied and no execution pass is implied.
import assert from 'node:assert/strict';
import { mkdirSync, existsSync, readFileSync, writeFileSync, statSync, statfsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createRequire } from 'node:module';
import { spawnSync } from 'node:child_process';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [formatProbeArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(formatProbeArg && outputArg && !extra.length, 'Supply COMPLETED_FORMAT_PROBE NEW_OUTPUT');
assert.equal(process.platform + '-' + process.arch, 'linux-x64');
const root = fileURLToPath(new URL('../..', import.meta.url));
const formatProbe = resolve(formatProbeArg), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve earlier compilation experiments');
const previousFile = join(formatProbe, 'result.json'), previous = JSON.parse(readFileSync(previousFile));
assert.ok(previous.passed && previous.inputUnchanged && previous.converted.accepted);
const previousResources = JSON.parse(readFileSync(previous.resourceReport));
assert.ok(previousResources.unitReleased && !previousResources.resourceLimited);
const input = previous.converted.file;
assert.equal(await hashFile(input), previous.converted.sha256);
assert.equal(statSync(input).size, previous.converted.bytes);
assert.ok(statSync(input).size <= 512 * 1024 * 1024);
const space = statfsSync(root);
assert.ok(space.bavail * space.bsize >= 5 * 1024 ** 3, 'Keep four GiB free plus bounded compilation output headroom');
mkdirSync(output, { recursive: true });
const source = join(root, 'scripts/full-lean/probes/wasmtime-compile-lean.c');
const harness = fileURLToPath(import.meta.url);
const canonicalHeader = join(root, 'scripts/full-lean/probes/wasmtime-canonical-imports.h');
const report = { scope: 'Single-worker compilation, serialization and trusted-cache reload of a real Lean module; no application instantiated or executed',
  input, inputSha256: previous.converted.sha256, inputBytes: previous.converted.bytes,
  precedingFormatProbe: previousFile, precedingResultSha256: await hashFile(previousFile),
  build: previous.build, canonicalImportsSha256: await hashFile(canonicalHeader),
  importedFunctionIdentity: 'Add private canonical function exports; retain all original code, elements and export entries',
  sourceSha256: await hashFile(source), harnessSha256: await hashFile(harness),
  configuration: { compiler: 'Cranelift', optimization: 'none', parallelCompilation: false,
    inputBoundBytes: 512 * 1024 * 1024, serializedBoundBytes: 640 * 1024 * 1024,
    memory64: true, threads: true, sharedMemory: true, exceptions: true,
    maximumWasmStack: 64 * 1024 * 1024, asyncStackSize: 80 * 1024 * 1024,
    coreDumpsDisabled: true, memoryReservation: 8 * 1024 ** 3,
    instantiation: false, linearMemoryAllocated: false },
  resourceReport: process.env.LASM_RESOURCE_REPORT, commands: [], passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
function run(program, args, timeout = 60_000) {
  const result = spawnSync(program, args, { cwd: root, encoding: 'utf8', timeout, killSignal: 'SIGKILL',
    maxBuffer: 256 * 1024, env: { ...process.env, RAYON_NUM_THREADS: '1' } });
  report.commands.push({ program, args, code: result.status, signal: result.signal,
    error: result.error?.message, stdout: result.stdout, stderr: result.stderr });
  save(); assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
}
save();
try {
  run('python3', ['-I', '-B', join(root, 'scripts/full-lean/prepare-wasmtime-probe.py')], 180_000);
  const sdk = join(root, '.cache/wasmtime-49.0.0'), helper = join(output, 'compiler.so');
  report.helperInput = JSON.parse(readFileSync(join(sdk, 'download.json')));
  run('cc', ['-std=c11', '-O2', '-Wall', '-Wextra', '-Werror', '-shared', '-fPIC', '-I' + join(sdk, 'include'), source,
    '-L' + join(sdk, 'lib'), '-lwasmtime', '-Wl,-rpath,' + join(sdk, 'lib'), '-o', helper]);
  report.helperSha256 = await hashFile(helper);
  const ffi = createRequire(import.meta.url)('koffi'), library = ffi.load(helper);
  const compile = library.func('int lasm_compile_lean_module(const uint8_t *bytes, size_t length, const char *cache_file, uint64_t *details, char *error, size_t capacity)');
  const bytes = readFileSync(input), details = Buffer.alloc(5 * 8), error = Buffer.alloc(8192);
  const cacheFile = join(output, 'compiled.cwasm');
  report.phase = 'compiling'; save();
  const started = performance.now();
  const status = compile(bytes, bytes.length, cacheFile, details, error, error.length);
  report.compilation = { status, seconds: (performance.now() - started) / 1000,
    diagnostic: error.toString('utf8').split('\0')[0],
    imports: Number(details.readBigUInt64LE(0)), exports: Number(details.readBigUInt64LE(8)),
    serializedBytes: Number(details.readBigUInt64LE(16)),
    restoredImports: Number(details.readBigUInt64LE(24)), restoredExports: Number(details.readBigUInt64LE(32)) };
  save(); assert.equal(status, 0, report.compilation.diagnostic);
  assert.equal(report.compilation.restoredImports, report.compilation.imports);
  assert.equal(report.compilation.restoredExports, report.compilation.exports);
  assert.ok(report.compilation.imports > 0 && report.compilation.exports > 0);
  assert.equal(statSync(cacheFile).size, report.compilation.serializedBytes);
  report.cache = { file: cacheFile, sha256: await hashFile(cacheFile), bytes: statSync(cacheFile).size,
    trust: 'Produced and reloaded only within this guarded experiment; never an untrusted compiled-code input' };
  report.phase = 'complete'; report.passed = true;
} catch (error) {
  report.error = { message: error.message, stack: error.stack }; throw error;
} finally {
  report.inputUnchanged = await hashFile(input) === report.inputSha256;
  report.harnessUnchanged = await hashFile(harness) === report.harnessSha256 && await hashFile(source) === report.sourceSha256
    && await hashFile(canonicalHeader) === report.canonicalImportsSha256;
  report.finishedAt = new Date().toISOString(); save();
  assert.ok(report.inputUnchanged && report.harnessUnchanged);
}
