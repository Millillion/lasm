// Rebuild the one affected runtime object without regenerating 2,516 unchanged
// standard modules. Original runtime and bundle inputs remain immutable.
import assert from 'node:assert/strict';
import { copyFileSync, cpSync, existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { verifyApplicationRuntime } from '../../src/application-runtime.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [runtimeArg, bundleArg, outputArg] = process.argv.slice(2);
if (!runtimeArg || !bundleArg || !outputArg) throw new Error('Supply COMPLETED_RUNTIME BASE_BUNDLE NEW_OUTPUT');
const runtime = resolve(runtimeArg), base = resolve(bundleArg), output = resolve(outputArg);
if (existsSync(output)) throw new Error('Preserve earlier runtime derivations');
const inputFile = join(runtime, 'build-inputs.json'), input = JSON.parse(readFileSync(inputFile));
assert.equal(input.lean, '4.34.0');
// This specific migration must remain reproducible after the release catalog
// advances to its resulting bundle.
const baseline = { name: 'lean-4.34.0-wasm64', manifestSha256: '4a41c52a68e540163699dea326b364eb0ae4726efe2976c5342378af2fac3fdb' };
const original = await verifyApplicationRuntime(base, baseline);
assert.equal(original.manifest.leanCommit, input.leanCommit);
assert.deepEqual(input.patches, original.manifest.patches);
assert.equal(input.patches['host-linux'], undefined, 'This derivative is only for the original unadapted Linux query');
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const root = fileURLToPath(new URL('../..', import.meta.url));
const sourceAudit = JSON.parse(readFileSync(join(root, 'docs/evidence/runtime-extern-source-index-2026-09-24.json'))).report;
assert.equal(sourceAudit.leanCommit, input.leanCommit);
for (const [name, record] of Object.entries(sourceAudit.files))
  assert.equal(await hashFile(join(input.source, 'src', name)), record.sha256, 'Runtime source drift: ' + name);
for (const [name, record] of Object.entries(original.manifest.files).filter(([name]) => name.startsWith('include/')))
  assert.equal(await hashFile(join(input.build, name)), record.sha256, 'Runtime header drift: ' + name);
const patchFile = join(root, 'scripts/full-lean/patches/lean-4.34.0-host-linux.patch');
const patch = readFileSync(patchFile);
const work = join(output, 'build'), privateSource = join(work, 'src/runtime/platform.cpp');
mkdirSync(join(work, 'src/runtime'), { recursive: true });
const originalSource = join(input.source, 'src/runtime/platform.cpp'), sourceBefore = await hashFile(originalSource);
copyFileSync(originalSource, privateSource);
const commands = [];
function run(program, args, settings = {}) {
  commands.push({ program, args });
  return execFileSync(program, args, { cwd: work, stdio: 'inherit', timeout: 300_000,
    env: { ...process.env, EMCC_CORES: '1', BINARYEN_CORES: '1' }, ...settings });
}
run('patch', ['--batch', '--forward', '-p1'], { input: patch, stdio: ['pipe', 'inherit', 'inherit'] });
const sdk = join(input.sdk, 'upstream/emscripten');
const object = join(work, 'platform.cpp.o');
const flags = ['-DLEAN_USE_GMP', '-Wall', '-Wextra', '-std=c++20', '-DLEAN_EMSCRIPTEN',
  '-sALLOW_MEMORY_GROWTH=1', '-sMEMORY64=1', '-fwasm-exceptions', '-pthread', '-ffp-contract=off',
  '-DLEAN_MULTI_THREAD', '-DLEAN_BUILD_TYPE="Release"', '-DLEAN_EXPORTING', '-D__CLANG__',
  '-fPIC', '-O3', '-DNDEBUG', '-ftls-model=local-exec',
  '-I', resolve('.cache/gmp-wasm64/include'), '-I', join(input.build, 'libuv/src/libuv/include'),
  '-I', join(input.build, 'include'), '-I', join(input.source, 'src'), '-I', input.build];
// Compare the preexisting archive member with the exact recorded build object.
const oldArchive = join(base, 'lib/libleanrt.a');
const oldObject = run(join(sdk, 'emar'), ['p', oldArchive, 'platform.cpp.o'], { stdio: ['ignore', 'pipe', 'inherit'] });
assert.equal(hash(oldObject), await hashFile(join(input.build, 'runtime/CMakeFiles/leanrt.dir/platform.cpp.o')));
run(join(sdk, 'em++'), [...flags, '-MMD', '-MF', join(work, 'platform.d'), '-c', privateSource, '-o', object]);
const target = join(output, original.manifest.name);
cpSync(base, target, { recursive: true, verbatimSymlinks: true });
const archive = join(target, 'lib/libleanrt.a');
run(join(sdk, 'emar'), ['rcs', archive, object]);
const members = path => run(join(sdk, 'emar'), ['t', path], { stdio: ['ignore', 'pipe', 'inherit'], encoding: 'utf8' }).trimEnd().split('\n');
const beforeMembers = members(oldArchive), afterMembers = members(archive);
assert.deepEqual(afterMembers, beforeMembers);
assert.equal(new Set(beforeMembers).size, beforeMembers.length, 'Duplicate archive members need a different verifier');
assert.equal(beforeMembers.filter(name => name === 'platform.cpp.o').length, 1);
const verifiedMembers = [];
for (const name of beforeMembers) {
  const before = run(join(sdk, 'emar'), ['p', oldArchive, name], { stdio: ['ignore', 'pipe', 'inherit'], maxBuffer: 8 * 1024 * 1024 });
  const after = run(join(sdk, 'emar'), ['p', archive, name], { stdio: ['ignore', 'pipe', 'inherit'], maxBuffer: 8 * 1024 * 1024 });
  assert.equal(hash(after), name === 'platform.cpp.o' ? await hashFile(object) : hash(before), name);
  verifiedMembers.push({ name, before: hash(before), after: hash(after) });
}
const manifest = structuredClone(original.manifest);
manifest.files['lib/libleanrt.a'] = { bytes: statSync(archive).size, sha256: await hashFile(archive) };
manifest.patches['host-linux'] = hash(patch);
manifest.runtimeObjectDerivation = { baseManifestSha256: original.identity, patchSha256: hash(patch),
  object: 'platform.cpp.o', beforeSha256: hash(oldObject), afterSha256: await hashFile(object),
  sourceBeforeSha256: sourceBefore, sourceAfterSha256: await hashFile(privateSource),
  unchangedStandardModules: manifest.standardModules };
for (const [name, record] of Object.entries(manifest.files))
  assert.equal(await hashFile(join(target, name)), record.sha256, name);
writeFileSync(join(target, 'target.json'), JSON.stringify(manifest, null, 2) + '\n');
// Verify original immutable inputs again after compilation/archive replacement.
await verifyApplicationRuntime(base, baseline);
assert.equal(await hashFile(originalSource), sourceBefore);
const result = { scope: 'Verified single-object runtime derivation; application behavior validation is separate',
  target, manifestSha256: await hashFile(join(target, 'target.json')),
  baseManifestSha256: original.identity, buildInputSha256: await hashFile(inputFile),
  sourceBeforeSha256: sourceBefore, sourceAfterSha256: await hashFile(privateSource),
  patchSha256: hash(patch), flags, commands, verifiedMembers,
  untouchedBundleFiles: Object.keys(manifest.files).filter(name => name !== 'lib/libleanrt.a'),
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ target, manifestSha256: result.manifestSha256, members: verifiedMembers.length }));
