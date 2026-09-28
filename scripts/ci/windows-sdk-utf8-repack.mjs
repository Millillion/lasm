// Maintainer-only repair of verified SDK bytes, followed by fresh relocation tests.
// The bootstrap workflow may retain a draft only after every check succeeds.
import assert from 'node:assert/strict';
import { copyFileSync, cpSync, createReadStream, existsSync, linkSync, mkdirSync,
  readFileSync, readdirSync, renameSync, statSync, writeFileSync } from 'node:fs';
import { join, resolve, relative } from 'node:path';
import { execFileSync, spawnSync } from 'node:child_process';
import { Readable } from 'node:stream';
import { createHash } from 'node:crypto';
import { create as createTar } from 'tar';
import { provisionSdk, sdkCatalog } from '../../src/managed-sdk.mjs';
import { provisionPython } from '../../src/managed-python.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { verifyNativeProgram } from '../../src/native-program.mjs';
import { ensureResourceGuard } from '../full-lean/resource-guard.mjs';

await ensureResourceGuard();
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
const base = resolve('.work/windows-arm64-sdk'), output = join(base, 'distribution');
assert.ok(!existsSync(base)); mkdirSync(output, { recursive: true });
// Reproduce the original defect and require all repaired native controls first.
execFileSync(process.execPath, ['scripts/ci/windows-sdk-unicode-control.mjs'],
  { stdio: 'inherit', timeout: 3000_000 });
const controlsRoot = resolve('.work/windows-sdk-unicode');
const controls = JSON.parse(readFileSync(join(controlsRoot, 'result.json')));
assert.equal(controls.passed, true); assert.equal(controls.originalInstallationUnchanged, true);
assert.equal(controls.repairs.length, 8);
const original = await provisionSdk({ cache: join(controlsRoot, 'cache'),
  catalog: { ...sdkCatalog, artifacts: { 'win32-arm64': controls.originalArtifact } } });
const provenance = JSON.parse(readFileSync(join(original.prefix, 'build-provenance.json')));
assert.equal(provenance.programs.length, 27);
const prefix = join(output, 'install'), bin = join(prefix, 'bin');
cpSync(original.prefix, prefix, { recursive: true,
  filter: file => file !== join(original.prefix, 'bin') && file !== join(original.prefix, '.lasm-artifact.json') });
mkdirSync(bin);
const repairs = new Map(controls.repairs.map(r => [r.file.split(/[\\/]/).at(-1), r]));
const copied = new Map(), programs = [];
for (const p of provenance.programs) {
  const repair = repairs.get(p.file);
  assert.equal(await hashFile(join(original.prefix, 'bin', p.file)), p.sha256);
  if (repair) assert.equal(repair.originalSha256, p.sha256);
  const source = repair ? join(controlsRoot, 'patched/bin', p.file) : join(original.prefix, 'bin', p.file);
  const sha256 = repair?.patchedSha256 ?? p.sha256, destination = join(bin, p.file);
  assert.equal(await hashFile(source), sha256);
  if (copied.has(sha256)) linkSync(copied.get(sha256), destination);
  else { copyFileSync(source, destination); copied.set(sha256, destination); }
  await verifyNativeProgram(destination, 'win32', 'arm64');
  programs.push({ ...p, sha256, bytes: statSync(destination).size,
    ...(repair ? { originalSha256: p.sha256, repair: 'per-process UTF-8 manifest' } : {}) });
}
// Every other file, including licenses and source, must remain byte-for-byte equal.
async function unchangedTree(root) {
  const entries = [];
  async function walk(directory) {
    for (const entry of readdirSync(directory, { withFileTypes: true }).sort((a, b) => a.name.localeCompare(b.name))) {
      const file = join(directory, entry.name), name = relative(root, file).replaceAll('\\', '/');
      if (entry.isDirectory()) { await walk(file); continue; }
      assert.ok(entry.isFile(), `Unexpected SDK file type: ${name}`);
      if (['build-provenance.json', '.lasm-artifact.json'].includes(name)
        || name.startsWith('bin/') && repairs.has(name.slice(4))) continue;
      entries.push({ name, bytes: statSync(file).size, sha256: await hashFile(file) });
    }
  }
  await walk(root); return entries;
}
const unchanged = await unchangedTree(original.prefix);
assert.deepEqual(await unchangedTree(prefix), unchanged);
const preservedFiles = { count: unchanged.length,
  manifestSha256: createHash('sha256').update(JSON.stringify(unchanged)).digest('hex') };
writeFileSync(join(prefix, 'build-provenance.json'), JSON.stringify({ ...provenance, programs,
  utf8ManifestRepair: { sourceRevision: process.env.GITHUB_SHA, originalArtifact: controls.originalArtifact,
    controls, preservedFiles } }, null, 2) + '\n');
const archive = join(output, 'emscripten-6.0.9-win32-arm64.tar.gz');
const pack = file => createTar({ cwd: output, file, gzip: true, portable: true, mtime: new Date(0) }, ['install']);
await pack(archive);
const second = join(output, 'reproducibility-check.tar.gz'); await pack(second);
const sha256 = await hashFile(archive); assert.equal(await hashFile(second), sha256);
const artifact = { name: 'emscripten-6.0.9-win32-arm64-utf8', root: 'install',
  url: 'https://lasm-sdk-fixture.invalid/emscripten-6.0.9-win32-arm64.tar.gz',
  sha256, bytes: statSync(archive).size, format: 'tar.gz', maximumExtractedBytes: 5_000_000_000 };
const cache = join(base, 'relocated managed cache λ 日本語');
await provisionPython({ cache });
const catalog = { ...sdkCatalog, artifacts: { 'win32-arm64': artifact } };
let downloads = 0;
const localFetch = async url => {
  assert.equal(url, artifact.url); downloads++;
  return new Response(Readable.toWeb(createReadStream(archive)));
};
const sdk = await provisionSdk({ catalog, cache, fetch: localFetch });
assert.equal(downloads, 1);
// Remove every original path from availability before executing the relocated SDK.
renameSync(controlsRoot, controlsRoot + '.hidden'); renameSync(prefix, prefix + '.hidden');
const project = join(base, 'relocated project λ 日本語'); mkdirSync(project);
const source = join(project, 'threads λ 日本語.cpp');
writeFileSync(source, '#include <cstdio>\n#include <thread>\n#include <stdexcept>\nint main() { int n=0; std::thread t([&]{n=42;}); t.join(); try { throw std::runtime_error("SDK"); } catch(const std::exception& e) { std::printf("%s %d\\n", e.what(), n); } }\n');
const checks = [];
for (const width of [32, 64]) {
  const entry = join(project, `application-${width} λ 日本語.cjs`);
  sdk.execute('em++', [source, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${width === 64 ? 1 : 0}`,
    '-sMALLOC=mimalloc', '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=2', '-sEXIT_RUNTIME=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sMAXIMUM_MEMORY=268435456', '-sENVIRONMENT=node',
    '-Wno-pthreads-mem-growth', '-o', entry], { stdio: 'inherit', timeout: 1200_000 });
  const actual = spawnSync(process.execPath, [entry], { env: { ...process.env, PATH: '' },
    encoding: 'utf8', timeout: 60000 });
  assert.ifError(actual.error); assert.equal(actual.signal, null); assert.equal(actual.status, 0, actual.stderr);
  assert.equal(actual.stdout, 'SDK 42\n'); assert.equal(actual.stderr, '');
  checks.push({ width, cppThreadExceptionApplication: 'passed', unicodeCacheAndProject: true,
    wasmSha256: await hashFile(entry.replace(/\.cjs$/, '.wasm')) });
}
const reused = await provisionSdk({ catalog, cache, fetch: async () => { throw Error('Unexpected download on reuse'); } });
assert.equal(reused.cacheHit, true); assert.equal(reused.driverIdentity, sdk.driverIdentity);
for (const p of programs) assert.equal(await hashFile(join(reused.prefix, 'bin', p.file)), p.sha256);
const report = { scope: 'Repaired native SDK archive, Unicode relocation and C++ execution; not installed Lean package acceptance',
  artifact, nativePrograms: sdk.nativePrograms, driverIdentity: sdk.driverIdentity, programs,
  imports: provenance.imports, controls, preservedFiles, reproducibleArchive: true, checks, verifiedReuse: true,
  limitations: ['This SDK still requires public archive auditing and installed Lean package acceptance.'],
  recordedAt: new Date().toISOString(), resourceReport: process.env.LASM_RESOURCE_REPORT };
writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
