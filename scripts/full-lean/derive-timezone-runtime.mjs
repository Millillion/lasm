// Replace two audited objects: the private timezone adapter and the original
// IO object's new symbol override. Keep all standard-module archives intact.
import assert from 'node:assert/strict';
import { copyFileSync, linkSync, existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { verifyApplicationRuntime } from '../../src/application-runtime.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';

await ensureResourceGuard();
const [runtimeArg, bundleArg, outputArg] = process.argv.slice(2);
assert.ok(runtimeArg && bundleArg && outputArg, 'Supply COMPLETED_RUNTIME BASE_BUNDLE NEW_OUTPUT');
const runtime = resolve(runtimeArg), base = resolve(bundleArg), output = resolve(outputArg);
assert.ok(!existsSync(output));
const inputFile = join(runtime, 'build-inputs.json'), input = JSON.parse(readFileSync(inputFile));
assert.equal(input.lean, '4.34.0');
const baseline = { name: 'lean-4.34.0-wasm64', manifestSha256: 'c2590cdb7e949e7e1375586336cb6f9305c14e6a57854715b6c4e79a52ede9ee' };
const original = await verifyApplicationRuntime(base, baseline);
assert.equal(original.manifest.leanCommit, input.leanCommit);
assert.deepEqual(input.patches, Object.fromEntries(Object.entries(original.manifest.patches)
  .filter(([name]) => !['host-linux', 'host-backtrace'].includes(name))));
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const root = fileURLToPath(new URL('../..', import.meta.url));
const audit = JSON.parse(readFileSync(join(root, 'docs/evidence/runtime-extern-source-index-2026-09-24.json'))).report;
assert.equal(audit.leanCommit, input.leanCommit);
for (const [name, record] of Object.entries(audit.files))
  assert.equal(await hashFile(join(input.source, 'src', name)), record.sha256, name);
for (const [name, record] of Object.entries(original.manifest.files).filter(([name]) => name.startsWith('include/')))
  assert.equal(await hashFile(join(input.build, name)), record.sha256, name);
for (const name of ['node.hpp', 'node-io.cpp', 'node-system.cpp'])
  assert.equal(await hashFile(join(root, 'runtime', name)), await hashFile(join(input.source, 'src/lasm', name)));
const work = join(output, 'build'), target = join(output, original.manifest.name);
mkdirSync(work, { recursive: true });
const commands = [];
function run(program, args, options = {}) {
  commands.push({ program, args });
  return execFileSync(program, args, { cwd: work, stdio: 'inherit', timeout: 300_000,
    env: { ...process.env, EMCC_CORES: '1', BINARYEN_CORES: '1' }, ...options });
}
const sdk = join(input.sdk, 'upstream/emscripten');
const flags = ['-DLEAN_USE_GMP', '-Wall', '-Wextra', '-std=c++20', '-DLEAN_EMSCRIPTEN',
  '-sALLOW_MEMORY_GROWTH=1', '-sMEMORY64=1', '-fwasm-exceptions', '-pthread', '-ffp-contract=off',
  '-DLEAN_MULTI_THREAD', '-DLEAN_BUILD_TYPE="Release"', '-DLEAN_EXPORTING', '-D__CLANG__',
  '-fPIC', '-O3', '-DNDEBUG', '-I', resolve('.cache/gmp-wasm64/include'),
  '-I', join(input.build, 'libuv/src/libuv/include'), '-I', join(input.build, 'include'),
  '-I', join(input.source, 'src'), '-I', input.build];
const overrides = JSON.parse(readFileSync(join(input.source, 'src/lasm/overrides.json')));
const ioNames = overrides.overrides.find(row => row.path === 'runtime/io.cpp').names;
assert.ok(!ioNames.includes('lean_get_windows_local_timezone_id_at'));
assert.ok(ioNames.includes('lean_windows_get_next_transition'));
const jobs = [
  { archive: 'lib/libleanrt.a', member: 'io.cpp.o',
    source: join(input.source, 'src/runtime/io.cpp'),
    originalObject: join(input.build, 'runtime/CMakeFiles/leanrt.dir/io.cpp.o'),
    flags: [...flags, '-ftls-model=local-exec', ...[...ioNames, 'lean_get_windows_local_timezone_id_at']
      .map(name => '-D' + name + '=lasm_original_' + name)] },
  { archive: 'lib/liblasmhost.a', member: 'node-async.cpp.o',
    source: join(root, 'runtime/node-async.cpp'),
    originalObject: join(input.build, 'CMakeFiles/lasmhost.dir/lasm/node-async.cpp.o'),
    flags: [...flags, '-DLASM_FULL_NATIVE_THREADS=1', '-I', join(root, 'runtime')] },
];
const derivations = [];
for (const job of jobs) {
  const old = run(join(sdk, 'emar'), ['p', join(base, job.archive), job.member], { stdio: ['ignore', 'pipe', 'inherit'] });
  assert.equal(hash(old), await hashFile(job.originalObject), 'Original archive object drift');
  const privateSource = join(work, job.member.replace(/\.o$/, ''));
  const sourceSha256 = await hashFile(job.source); copyFileSync(job.source, privateSource);
  // node.hpp uses the current verified unchanged header through the explicit
  // include directory. io.cpp keeps its original source and header inputs.
  const object = join(work, job.member);
  run(join(sdk, 'em++'), [...job.flags, '-MMD', '-MF', object + '.d', '-c', privateSource, '-o', object]);
  assert.equal(await hashFile(job.source), sourceSha256);
  job.object = object;
  derivations.push({ archive: job.archive, member: job.member, source: job.source,
    sourceSha256, beforeSha256: hash(old), afterSha256: await hashFile(object), flags: job.flags });
}
const changed = new Set(jobs.map(job => job.archive));
for (const name of Object.keys(original.manifest.files)) {
  const destination = join(target, name); mkdirSync(dirname(destination), { recursive: true });
  if (changed.has(name)) copyFileSync(join(base, name), destination);
  else linkSync(join(base, name), destination);
}
const manifest = structuredClone(original.manifest), verifiedMembers = [];
for (const job of jobs) {
  const archive = join(target, job.archive), oldArchive = join(base, job.archive);
  run(join(sdk, 'emar'), ['rcs', archive, job.object]);
  const members = file => run(join(sdk, 'emar'), ['t', file], { stdio: ['ignore', 'pipe', 'inherit'], encoding: 'utf8' }).trimEnd().split('\n');
  const beforeMembers = members(oldArchive);
  assert.deepEqual(members(archive), beforeMembers);
  assert.equal(new Set(beforeMembers).size, beforeMembers.length);
  assert.equal(beforeMembers.filter(name => name === job.member).length, 1);
  for (const name of beforeMembers) {
    const options = { stdio: ['ignore', 'pipe', 'inherit'], maxBuffer: 8 * 1024 * 1024 };
    const before = hash(run(join(sdk, 'emar'), ['p', oldArchive, name], options));
    const after = hash(run(join(sdk, 'emar'), ['p', archive, name], options));
    assert.equal(after, name === job.member ? await hashFile(job.object) : before, name);
    verifiedMembers.push({ archive: job.archive, name, before, after });
  }
  manifest.files[job.archive] = { bytes: statSync(archive).size, sha256: await hashFile(archive) };
}
manifest.timezoneDerivation = { baseManifestSha256: original.identity,
  objects: derivations.map(({ source, flags, ...identity }) => identity),
  hostModuleSha256: await hashFile(join(root, 'src/native-windows-timezone.mjs')),
  hostDispatchSha256: await hashFile(join(root, 'src/node-host.mjs')),
  unchangedStandardModules: manifest.standardModules };
for (const [name, record] of Object.entries(manifest.files))
  assert.equal(await hashFile(join(target, name)), record.sha256, name);
writeFileSync(join(target, 'target.json'), JSON.stringify(manifest, null, 2) + '\n');
await verifyApplicationRuntime(base, baseline);
const result = { scope: 'Verified two-object runtime derivation; installed application differentials remain separate',
  target, manifestSha256: await hashFile(join(target, 'target.json')), baseManifestSha256: original.identity,
  buildInputSha256: await hashFile(inputFile), derivations, commands, verifiedMembers,
  unchangedFiles: Object.keys(manifest.files).filter(name => !changed.has(name)),
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify({ target, manifestSha256: result.manifestSha256, objects: derivations.length }));
