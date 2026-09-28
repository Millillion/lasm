// Reproduce the shipped ARM64 SDK's Unicode failure, then test only manifest repairs.
import assert from 'node:assert/strict';
import { copyFileSync, existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync, execFileSync } from 'node:child_process';
import { provisionSdk, sdkCatalog } from '../../src/managed-sdk.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const output = resolve('.work/windows-sdk-unicode');
assert.ok(!existsSync(output)); mkdirSync(output, { recursive: true });
const result = { scope: 'Native Unicode-path differential for the existing SDK; no distribution or package acceptance',
  platform: 'win32-arm64', sourceRevision: process.env.GITHUB_SHA, passed: false, checks: [], repairs: [],
  resourceReport: process.env.LASM_RESOURCE_REPORT, startedAt: new Date().toISOString() };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
save();
try {
  // Keep the negative control immutable when the shipping catalog is repaired.
  const originalArtifact = { name: 'emscripten-6.0.9-win32-arm64', root: 'install',
    url: 'https://github.com/Millillion/lasm/releases/download/windows-arm64-sdk-bootstrap-36278363560/emscripten-6.0.9-win32-arm64.tar.gz',
    sha256: 'abd0e1f97c592d2e9c4f5e937ec9f9c1e63c6a4c4e540a6ebf336db851c33e5a',
    bytes: 174792332, format: 'tar.gz', maximumExtractedBytes: 5_000_000_000 };
  const sdk = await provisionSdk({ cache: join(output, 'cache'),
    catalog: { ...sdkCatalog, artifacts: { 'win32-arm64': originalArtifact } } });
  assert.equal(sdk.receipt.artifact.sha256, 'abd0e1f97c592d2e9c4f5e937ec9f9c1e63c6a4c4e540a6ebf336db851c33e5a');
  result.originalArtifact = sdk.receipt.artifact;
  execFileSync(sdk.python.executable, ['-I', '-B', resolve('test/windows-sdk-manifest.test.py')],
    { stdio: 'inherit', timeout: 60000 });
  const provenance = JSON.parse(readFileSync(join(sdk.prefix, 'build-provenance.json')));
  const binaryen = provenance.programs.filter(p => p.source.replaceAll('\\', '/').includes('/binaryen-build/'));
  assert.equal(binaryen.length, 8);
  const patched = join(output, 'patched'), patchedBin = join(patched, 'bin');
  mkdirSync(patchedBin, { recursive: true });
  for (const p of provenance.programs.filter(p => p.file.endsWith('.dll') || binaryen.includes(p))) {
    const source = join(sdk.prefix, 'bin', p.file);
    assert.equal(await hashFile(source), p.sha256);
    copyFileSync(source, join(patchedBin, p.file));
  }
  const ascii = join(output, 'ascii'), unicode = join(output, 'Unicode λ 日本語');
  mkdirSync(ascii); mkdirSync(unicode);
  const source = join(ascii, 'answer.c');
  writeFileSync(source, 'int answer(int a, int b) { return a + b; }\n');
  const wasm = join(ascii, 'answer.wasm');
  const env = { ...sdk.env, PATH: '', BINARYEN_CORES: '1' };
  const invoke = (program, args) => {
    const r = spawnSync(program, args, { env, encoding: 'utf8', timeout: 180000, maxBuffer: 2 * 1024 ** 2 });
    assert.ifError(r.error); assert.equal(r.signal, null);
    return { code: r.status, stdout: r.stdout, stderr: r.stderr };
  };
  const compiled = invoke(join(sdk.prefix, 'bin/clang.exe'), ['--target=wasm32-unknown-unknown', '-O2', '-nostdlib',
    source, '-Wl,--no-entry', '-Wl,--export=answer', '-Wl,--threads=1', '-o', wasm]);
  result.checks.push({ label: 'native compiler fixture', ...compiled }); save();
  assert.equal(compiled.code, 0, compiled.stderr);
  const unicodeWasm = join(unicode, 'input λ 日本語.wasm'); copyFileSync(wasm, unicodeWasm);
  const originalOptimizer = join(sdk.prefix, 'bin/wasm-opt.exe');
  const asciiResult = invoke(originalOptimizer, [wasm, '-O1', '-o', join(ascii, 'optimized.wasm')]);
  assert.equal(asciiResult.code, 0, asciiResult.stderr);
  result.checks.push({ label: 'original ASCII path', ...asciiResult }); save();
  const failed = invoke(originalOptimizer, [unicodeWasm, '-O1', '-o', join(unicode, 'original output.wasm')]);
  result.checks.push({ label: 'original Unicode path', expectedFailure: true, ...failed }); save();
  assert.notEqual(failed.code, 0, 'The unchanged SDK must reproduce its Unicode-path bug');
  assert.match(failed.stderr, /Failed opening|cannot open|failed to open/i);
  for (const p of binaryen) {
    const file = join(patchedBin, p.file), report = join(output, p.file + '-manifest.json');
    execFileSync(sdk.python.executable, ['-I', '-B', resolve('scripts/ci/windows-sdk-utf8-manifest.py'),
      file, p.sha256, report], { stdio: 'inherit', timeout: 60000 });
    await verifyNativeProgram(file, 'win32', 'arm64');
    result.repairs.push(JSON.parse(readFileSync(report))); save();
  }
  const fixedWasm = join(unicode, 'optimized λ 日本語.wasm');
  const fixed = invoke(join(patchedBin, 'wasm-opt.exe'), [unicodeWasm, '-O1', '-o', fixedWasm]);
  result.checks.push({ label: 'manifest-repaired Unicode path', ...fixed }); save();
  assert.equal(fixed.code, 0, fixed.stderr);
  assert.equal((await WebAssembly.instantiate(readFileSync(fixedWasm))).instance.exports.answer(19, 23), 42);

  // Only the Binaryen directory differs; LLVM, driver, source and cache stay identical.
  const config = join(output, 'patched-config.py');
  writeFileSync(config, readFileSync(sdk.env.EM_CONFIG, 'utf8') + '\nBINARYEN_ROOT = ' + JSON.stringify(patched) + '\n');
  const cpp = join(unicode, 'threads λ 日本語.cpp');
  writeFileSync(cpp, '#include <cstdio>\n#include <thread>\n#include <stdexcept>\nint main() { int n=0; std::thread t([&]{n=42;}); t.join(); try { throw std::runtime_error("SDK"); } catch(const std::exception& e) { std::printf("%s %d\\n", e.what(), n); } }\n');
  for (const width of [32, 64]) {
    const entry = join(unicode, 'application-' + width + ' λ 日本語.cjs');
    sdk.execute('em++', [cpp, '-O1', '-pthread', '-fwasm-exceptions', '-sMEMORY64=' + (width === 64 ? 1 : 0),
      '-sMALLOC=mimalloc', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=2', '-sEXIT_RUNTIME=1',
      '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=268435456', '-sENVIRONMENT=node', '-Wno-pthreads-mem-growth',
      '-o', entry], { env: { ...sdk.env, EM_CONFIG: config }, stdio: 'inherit', timeout: 1200000 });
    const actual = invoke(process.execPath, [entry]);
    assert.deepEqual(actual, { code: 0, stdout: 'SDK 42\n', stderr: '' });
    result.checks.push({ label: 'Unicode C++ threads and exceptions', width, ...actual,
      wasmSha256: await hashFile(entry.replace(/\.cjs$/, '.wasm')) }); save();
  }
  for (const p of provenance.programs)
    assert.equal(await hashFile(join(sdk.prefix, 'bin', p.file)), p.sha256, 'Original archive installation changed');
  result.originalInstallationUnchanged = true;
  result.passed = true; result.finishedAt = new Date().toISOString(); save();
} catch (error) { result.error = error.stack; save(); throw error; }
