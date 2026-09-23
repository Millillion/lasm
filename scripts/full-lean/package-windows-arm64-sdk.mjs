// Build and exercise a relocatable local SDK archive. No upload or publication.
import assert from 'node:assert/strict';
import { cpSync, copyFileSync, mkdirSync, readdirSync, existsSync, writeFileSync,
  readFileSync, renameSync, statSync, createReadStream, linkSync } from 'node:fs';
import { resolve, join, dirname, basename } from 'node:path';
import { Readable } from 'node:stream';
import { execFileSync, spawnSync } from 'node:child_process';
import { create as createTar } from 'tar';
import { provisionPython } from '../../src/managed-python.mjs';
import { provisionSdk, sdkCatalog } from '../../src/managed-sdk.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { sdkRepairs, repairSdkFile } from '../../src/sdk-repairs.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const [baseArg, msysBinArg] = process.argv.slice(2), base = resolve(baseArg), msysBin = resolve(msysBinArg);
const output = join(base, 'distribution'), prefix = join(output, 'install');
if (existsSync(output)) throw new Error('Preserve previous distribution output');
const bin = join(prefix, 'bin'); mkdirSync(bin, { recursive: true });
const llvm = join(base, 'llvm-build'), binaryen = join(base, 'binaryen-build');
const reader = join(llvm, 'bin/llvm-readobj.exe');
// Source checkouts do not contain the JavaScript optimizer dependencies that
// the upstream SDK archive carries. Install the exact lockfile without hooks.
const npm = join(dirname(process.execPath), 'node_modules/npm/bin/npm-cli.js');
assert.ok(existsSync(npm), 'The maintainer bootstrap requires Node with npm');
execFileSync(process.execPath, [npm, 'ci', '--omit=dev', '--ignore-scripts', '--no-audit', '--no-fund'],
  { cwd: join(base, 'emscripten'), stdio: 'inherit', timeout: 600_000 });
const origins = new Map(), copied = new Map();
async function copyProgram(source, name = basename(source)) {
  const key = name.toLowerCase(), sha256 = await hashFile(source);
  if (origins.has(key)) { assert.equal(origins.get(key).sha256, sha256); return; }
  await verifyNativeProgram(source, 'win32', 'arm64');
  const destination = join(bin, name);
  // LLVM driver aliases share an inode in the archive as well as on disk.
  if (copied.has(sha256)) linkSync(copied.get(sha256), destination);
  else { copyFileSync(source, destination); copied.set(sha256, destination); }
  origins.set(key, { file: name, source, sha256, bytes: statSync(source).size });
}
const aliases = { 'clang++': 'clang', 'wasm-ld': 'lld', 'llvm-ranlib': 'llvm-ar', 'llvm-strip': 'llvm-objcopy' };
for (const name of ['clang', 'clang++', 'clang-scan-deps', 'lld', 'wasm-ld',
  'llvm-ar', 'llvm-ranlib', 'llvm-nm', 'llvm-objcopy', 'llvm-dwarfdump',
  'llvm-dwp', 'llvm-profdata', 'llvm-cov', 'llvm-readobj', 'llvm-size', 'llvm-strip']) {
  let source = join(llvm, 'bin', name + '.exe');
  // Building an individual LLVM target need not create its CMake aliases.
  // These drivers select their documented mode from the executable basename.
  if (!existsSync(source) && aliases[name]) source = join(llvm, 'bin', aliases[name] + '.exe');
  await copyProgram(source, name + '.exe');
}
for (const name of readdirSync(join(binaryen, 'bin')).filter(name => name.endsWith('.exe')))
  await copyProgram(join(binaryen, 'bin', name));

// Copy every non-system imported DLL transitively. Missing dependencies fail
// packaging; host PATH is not an implicit deployment dependency.
const imports = [], inspected = new Set();
for (;;) {
  const row = [...origins.values()].find(row => !inspected.has(row.file));
  if (!row) break;
  inspected.add(row.file);
  const text = execFileSync(reader, ['--coff-imports', row.source], { encoding: 'utf8', timeout: 60_000 });
  for (const match of text.matchAll(/^\s+Name: ([^\r\n]+\.dll)\s*$/gmi)) {
    const name = match[1].trim(); assert.equal(basename(name), name);
    const candidates = [dirname(row.source), join(llvm, 'bin'), join(binaryen, 'bin'), msysBin]
      .map(directory => join(directory, name));
    const local = candidates.find(existsSync);
    if (local) { await copyProgram(local, name); imports.push({ from: row.file, dll: name, bundled: true }); }
    else {
      const system = /^api-ms-win-|^ext-ms-win-/i.test(name)
        || existsSync(join(process.env.SystemRoot, 'System32', name));
      assert.ok(system, `Unresolved DLL dependency ${row.file}: ${name}`);
      imports.push({ from: row.file, dll: name, bundled: false, windowsSystem: true });
    }
  }
}
const resource = execFileSync(join(llvm, 'bin/clang.exe'), ['--print-resource-dir'], { encoding: 'utf8' }).trim();
assert.ok(resource.replaceAll('\\', '/').startsWith(llvm.replaceAll('\\', '/') + '/'));
cpSync(resource, join(prefix, 'lib/clang', basename(resource)), { recursive: true, dereference: true });
cpSync(join(base, 'emscripten'), join(prefix, 'emscripten'), { recursive: true, dereference: true,
  filter: file => basename(file) !== '.git' });
for (const file of sdkRepairs.files)
  repairSdkFile(file.path, readFileSync(join(prefix, 'emscripten', file.path), 'utf8'));
const notices = join(prefix, 'notices'); mkdirSync(notices);
for (const [name, file] of [['LLVM-LICENSE.txt', 'llvm-project/llvm/LICENSE.TXT'],
  ['BINARYEN-LICENSE.txt', 'binaryen/LICENSE'], ['EMSCRIPTEN-LICENSE.txt', 'emscripten/LICENSE']])
  copyFileSync(join(base, file), join(notices, name));
// Retain MSYS2 package redistribution notices for bundled runtime DLLs.
const licenses = resolve(msysBin, '../share/licenses');
if (existsSync(licenses)) cpSync(licenses, join(notices, 'msys2-runtime-licenses'), { recursive: true, dereference: true });
writeFileSync(join(prefix, 'build-provenance.json'), JSON.stringify({
  bootstrap: JSON.parse(readFileSync(join(base, 'result.json'), 'utf8')),
  programs: [...origins.values()], imports,
  msysPackages: readFileSync(join(base, 'msys2-package-versions.txt'), 'utf8'),
}, null, 2) + '\n');
const archive = join(output, 'emscripten-6.0.9-win32-arm64.tar.gz');
await createTar({ cwd: output, file: archive, gzip: true, portable: true }, ['install']);
const artifact = { name: 'emscripten-6.0.9-win32-arm64-local', root: 'install',
  url: 'https://lasm-sdk-fixture.invalid/emscripten-6.0.9-win32-arm64.tar.gz',
  sha256: await hashFile(archive), bytes: statSync(archive).size,
  format: 'tar.gz', maximumExtractedBytes: 5_000_000_000 };
const cache = join(base, 'relocated managed cache');
await provisionPython({ cache });
const catalog = { ...sdkCatalog, artifacts: { 'win32-arm64': artifact } };
const localFetch = async url => {
  assert.equal(url, artifact.url);
  return new Response(Readable.toWeb(createReadStream(archive)));
};
// The offline transport is explicit: checksum, extraction, complete cache
// validation and compiler repairs are the ordinary shipping implementations.
const sdk = await provisionSdk({ catalog, cache, fetch: localFetch });
renameSync(llvm, llvm + '.hidden'); renameSync(binaryen, binaryen + '.hidden');
renameSync(join(base, 'emscripten'), join(base, 'emscripten.hidden'));
const source = join(base, 'sdk-application.cpp');
writeFileSync(source, '#include <cstdio>\n#include <thread>\n#include <stdexcept>\nint main() { int n = 0; std::thread t([&]{n=42;}); t.join(); try { throw std::runtime_error("SDK"); } catch(const std::exception& e) { std::printf("%s %d\\n", e.what(), n); } }\n');
const checks = [];
for (const width of [32, 64]) {
  const entry = join(base, `sdk-application-${width}.cjs`);
  sdk.execute('em++', [source, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${width === 64 ? 1 : 0}`,
    '-sMALLOC=mimalloc', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=2', '-sEXIT_RUNTIME=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=268435456', '-sENVIRONMENT=node',
    '-Wno-pthreads-mem-growth', '-o', entry], { stdio: 'inherit', timeout: 1800_000 });
  const actual = spawnSync(process.execPath, [entry], { env: { ...process.env, PATH: '' },
    encoding: 'utf8', timeout: 60_000 });
  assert.ifError(actual.error); assert.equal(actual.status, 0, actual.stderr);
  assert.equal(actual.stdout, 'SDK 42\n'); assert.equal(actual.stderr, '');
  checks.push({ width, cppThreadExceptionApplication: 'passed', wasmSha256: await hashFile(entry.replace(/\.cjs$/, '.wasm')) });
}
const reused = await provisionSdk({ catalog, cache, fetch: localFetch });
assert.equal(reused.cacheHit, true); assert.equal(reused.driverIdentity, sdk.driverIdentity);
const report = { scope: 'Local relocatable Windows ARM64 SDK archive, managed extraction and C++ application checks; not a hosted download or Lean application pass',
  artifact, nativePrograms: sdk.nativePrograms, driverIdentity: sdk.driverIdentity,
  programs: [...origins.values()], imports, checks, verifiedReuse: true,
  limitations: ['Archive remains on the CI runner; no artifact or release is uploaded.',
    'Full Lean application and Node/npm-only installation acceptance remain pending.'],
  recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
