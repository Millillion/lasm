// Replace the private async bridge in a fresh, authenticated runtime bundle.
// Keep the original archives and all unchanged Lean standard modules intact.
import assert from 'node:assert/strict';
import { copyFileSync, linkSync, existsSync, mkdirSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import { resolve, join, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { verifyApplicationRuntime } from '../../src/application-runtime.mjs';
import { hashFile } from '../../src/managed-artifacts.mjs';
import { ensureResourceGuard } from './resource-guard.mjs';
import { maintainerSdk } from './maintainer-sdk.mjs';

await ensureResourceGuard();
const [runtimeArg, bundleArg, outputArg, ...extra] = process.argv.slice(2);
assert.ok(runtimeArg && bundleArg && outputArg && !extra.length,
  'Supply COMPLETED_RUNTIME BASE_BUNDLE NEW_OUTPUT');
const runtime = resolve(runtimeArg), base = resolve(bundleArg), output = resolve(outputArg);
assert.ok(!existsSync(output), 'Preserve preceding derivations');
const inputFile = join(runtime, 'build-inputs.json'), input = JSON.parse(readFileSync(inputFile));
assert.equal(input.lean, '4.34.1');
// Freeze this migration's actual base rather than following a mutable catalog.
const baseline = { name: 'lean-4.34.1-wasm64',
  manifestSha256: 'cfc9aa9ebda6984f2bfab8ab5b7debed2e8a0a525c9a32bc0aeb1bc83600a94e' };
const original = await verifyApplicationRuntime(base, baseline);
assert.equal(original.manifest.leanCommit, input.leanCommit);
assert.deepEqual(original.manifest.patches, input.patches);
const root = fileURLToPath(new URL('../..', import.meta.url));
const source = join(root, 'runtime/node-async.cpp'), header = join(root, 'runtime/node.hpp');
const sourceSha256 = await hashFile(source), headerSha256 = await hashFile(header);
assert.equal(headerSha256, await hashFile(join(input.source, 'src/lasm/node.hpp')));
const completed = JSON.parse(readFileSync(join(root, 'docs/evidence/lean-4.34.1-runtime-build-2026-09-25.json')));
assert.deepEqual(completed.build, input);
assert.equal(headerSha256, completed.recordedBuildInputs.files['runtime/node.hpp']);
assert.equal(await hashFile(join(input.source, 'src/lasm/node-async.cpp')),
  completed.recordedBuildInputs.files['runtime/node-async.cpp']);
for (const [name, file] of Object.entries(original.manifest.files).filter(([name]) => name.startsWith('include/')))
  assert.equal(await hashFile(join(input.build, name)), file.sha256, name);
const sdk = await maintainerSdk({ managed: input.sdkMode === 'managed', directory: input.sdk, cache: input.sdkToolCache });
assert.equal(sdk.identity, input.sdkIdentity); assert.equal(sdk.driverIdentity, input.sdkDriverIdentity);
const target = join(output, baseline.name), work = join(output, 'build');
mkdirSync(work, { recursive: true });
const report = { scope: 'Single private async-object derivation; compiled application behavior requires separate acceptance',
  inputFile, inputSha256: await hashFile(inputFile), baseline, inputs: {
    'runtime/node-async.cpp': sourceSha256, 'runtime/node.hpp': headerSha256,
    'scripts/full-lean/derive-async-runtime.mjs': await hashFile(fileURLToPath(import.meta.url)),
  }, sdk: { identity: sdk.identity, driverIdentity: sdk.driverIdentity }, commands: [], verifiedMembers: [],
  resourceReport: process.env.LASM_RESOURCE_REPORT, passed: false };
const save = () => writeFileSync(join(output, 'result.json'), JSON.stringify(report, null, 2) + '\n');
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
function run(tool, args, options = {}) {
  report.commands.push({ program: sdk.tool(tool), args }); save();
  return execFileSync(sdk.tool(tool), args, { cwd: work, env: sdk.env, stdio: 'inherit',
    timeout: 300_000, maxBuffer: 8 * 1024 * 1024, ...options });
}
const capture = { stdio: ['ignore', 'pipe', 'inherit'] };
save();
try {
  const archiveName = 'lib/liblasmhost.a', member = 'node-async.cpp.o';
  const oldArchive = join(base, archiveName);
  const oldObject = run('emar', ['p', oldArchive, member], capture);
  assert.equal(hash(oldObject), await hashFile(join(input.build, 'CMakeFiles/lasmhost.dir/lasm', member)));
  const privateSource = join(work, 'node-async.cpp'), object = join(work, member);
  copyFileSync(source, privateSource); copyFileSync(header, join(work, 'node.hpp'));
  const flags = ['-DLEAN_USE_GMP', '-Wall', '-Wextra', '-std=c++20', '-DLEAN_EMSCRIPTEN',
    '-sALLOW_MEMORY_GROWTH=1', '-sMEMORY64=1', '-fwasm-exceptions', '-pthread', '-ffp-contract=off',
    '-DLEAN_MULTI_THREAD', '-DLEAN_BUILD_TYPE="Release"', '-DLEAN_EXPORTING', '-D__CLANG__',
    '-DLASM_FULL_NATIVE_THREADS=1', '-fPIC', '-O3', '-DNDEBUG',
    '-I', resolve('.cache/gmp-wasm64/include'), '-I', join(input.build, 'libuv/src/libuv/include'),
    '-I', join(input.build, 'include'), '-I', join(input.source, 'src'), '-I', input.build];
  run('em++', [...flags, '-MMD', '-MF', object + '.d', '-c', privateSource, '-o', object]);
  for (const name of Object.keys(original.manifest.files)) {
    const destination = join(target, name); mkdirSync(dirname(destination), { recursive: true });
    if (name === archiveName) copyFileSync(join(base, name), destination);
    else linkSync(join(base, name), destination);
  }
  const archive = join(target, archiveName);
  run('emar', ['rcs', archive, object]);
  const members = archive => run('emar', ['t', archive], { ...capture, encoding: 'utf8' }).trimEnd().split('\n');
  const before = members(oldArchive), after = members(archive);
  assert.deepEqual(after, before); assert.equal(new Set(before).size, before.length);
  assert.equal(before.filter(name => name === member).length, 1);
  for (const name of before) {
    const old = run('emar', ['p', oldArchive, name], capture), updated = run('emar', ['p', archive, name], capture);
    assert.equal(hash(updated), name === member ? await hashFile(object) : hash(old), name);
    report.verifiedMembers.push({ name, before: hash(old), after: hash(updated) });
  }
  const manifest = structuredClone(original.manifest);
  const derivation = { baseManifestSha256: original.identity, archive: archiveName, member,
    sourceSha256, headerSha256, beforeSha256: hash(oldObject), afterSha256: await hashFile(object),
    unchangedStandardModules: manifest.standardModules };
  manifest.files[archiveName] = { bytes: statSync(archive).size, sha256: await hashFile(archive) };
  manifest.runtimeObjectDerivation = derivation;
  manifest.patches['host-async-bridge'] = hash(JSON.stringify({ sourceSha256, headerSha256 }));
  writeFileSync(join(target, 'target.json'), JSON.stringify(manifest, null, 2) + '\n');
  const identity = await hashFile(join(target, 'target.json'));
  await verifyApplicationRuntime(target, { name: baseline.name, manifestSha256: identity });
  await verifyApplicationRuntime(base, baseline);
  assert.equal(await hashFile(source), sourceSha256); assert.equal(await hashFile(header), headerSha256);
  Object.assign(report, { target, manifestSha256: identity, derivation, inputsUnchanged: true,
    untouchedBundleFiles: Object.keys(manifest.files).filter(name => name !== archiveName), passed: true });
} catch (error) { report.error = error.stack; throw error; }
finally { report.finishedAt = new Date().toISOString(); save(); }
console.log(JSON.stringify({ target, manifestSha256: report.manifestSha256, verifiedMembers: report.verifiedMembers.length }));
