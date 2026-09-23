// Native tool source-bootstrap control. A distributable Emscripten SDK and
// complete Lean application acceptance still require separate packaging/tests.
import assert from 'node:assert/strict';
import { writeFileSync, readFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';

assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const [baseArg, llvmCommit, binaryenCommit] = process.argv.slice(2), base = resolve(baseArg);
const bin = join(base, 'llvm-build/bin'), optimizer = join(base, 'binaryen-build/bin/wasm-opt.exe');
const versions = {}, headers = {}, hashes = {};
for (const [name, file] of [['clang', join(bin, 'clang.exe')], ['wasm-ld', join(bin, 'wasm-ld.exe')], ['wasm-opt', optimizer]]) {
  headers[name] = await verifyNativeProgram(file, 'win32', 'arm64');
  hashes[name] = await hashFile(file);
  versions[name] = execFileSync(file, ['--version'], { encoding: 'utf8', timeout: 30_000 }).trim();
}
assert.match(versions.clang, /clang version 24\./);
const input = join(base, 'answer.c'); writeFileSync(input, 'int answer(int a, int b) { return a + b; }\n');
const checks = [];
for (const target of ['wasm32', 'wasm64']) {
  const wasm = join(base, target + '.wasm'), optimized = join(base, target + '-optimized.wasm');
  execFileSync(join(bin, 'clang.exe'), [`--target=${target}-unknown-unknown`, '-O2', '-nostdlib',
    input, '-Wl,--no-entry', '-Wl,--export=answer', '-Wl,--threads=1', '-o', wasm], { stdio: 'inherit', timeout: 120_000 });
  execFileSync(optimizer, ['-O1', '--all-features', wasm, '-o', optimized], { stdio: 'inherit', timeout: 120_000,
    env: { ...process.env, BINARYEN_CORES: '1' } });
  for (const file of [wasm, optimized]) {
    const { instance } = await WebAssembly.instantiate(readFileSync(file));
    assert.equal(instance.exports.answer(19, 23), 42);
  }
  checks.push({ target, compileLinkOptimizeExecute: 'passed', wasmSha256: await hashFile(wasm), optimizedSha256: await hashFile(optimized) });
}
const report = { scope: 'Native Windows ARM64 LLVM/Binaryen source bootstrap; not a packaged SDK or Lean application pass',
  node: process.version, platform: 'win32-arm64', llvmCommit, binaryenCommit, versions, headers, hashes, checks,
  emscriptenReleasesCommit: 'f04ea239d533260dd1db760dd2d668d5f9a88d6b',
  limitations: ['Emscripten driver/sysroot integration, relocatable native dependency packaging and application builds remain required.',
    'MSYS2 x64 shell utilities were used during this maintainer bootstrap; resulting compiler tools are checked for ARM64 PE headers.'],
  recordedAt: new Date().toISOString() };
writeFileSync(join(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
