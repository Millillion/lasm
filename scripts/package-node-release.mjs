// Pack the Node product without requiring a previous Lasm installation.
// All files come from this checkout and an explicitly authenticated runtime.
import assert from 'node:assert/strict';
import { mkdirSync, cpSync, copyFileSync, readFileSync, writeFileSync, existsSync, appendFileSync } from 'node:fs';
import { join, resolve, basename } from 'node:path';
import { fileURLToPath } from 'node:url';
import { execFileSync } from 'node:child_process';
import { verifyApplicationRuntime } from '../src/application-runtime.mjs';
import { toolchainCatalog } from '../src/managed-lean.mjs';
import { sdkCatalog } from '../src/managed-sdk.mjs';
import { pythonCatalog } from '../src/managed-python.mjs';
import { linkToolchainCatalog } from '../src/managed-link-toolchain.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { buildPlatforms } from '../src/platform.mjs';
import { ensureResourceGuard } from './full-lean/resource-guard.mjs';
import { archiveUnitCache, shippedAnalysisDirectory } from '../src/application-link.mjs';
import { initializerUnits } from '../src/application-initialization.mjs';
import { bundleInstaller } from './bundle-installer.mjs';
import { candidateReadme } from './candidate-readme.mjs';
import { applicationNotices, wasmtimeAdapterNotice } from '../src/notices.mjs';

await ensureResourceGuard();
const root = fileURLToPath(new URL('../', import.meta.url));
const [outputArg, runtimeArg, nativeArg, manifestSha256, version = '0.1.0-experimental.46', ...extra] = process.argv.slice(2);
assert.ok(outputArg && runtimeArg && nativeArg && /^[a-f0-9]{64}$/.test(manifestSha256 ?? '') && !extra.length
  && /^0\.1\.0-experimental\.\d+$/.test(version),
'Usage: package-node-release.mjs NEW_OUTPUT RUNTIME NATIVE_BUNDLE RUNTIME_MANIFEST_SHA256 [VERSION]');
const output = resolve(outputArg), staging = join(output, 'compiler');
assert.ok(!existsSync(output), 'Use a new output directory to preserve earlier candidates');
const lean = JSON.parse(readFileSync(join(resolve(runtimeArg), 'target.json'))).lean;
const expected = { name: `lean-${lean}-wasm64`, manifestSha256 };
const runtime = await verifyApplicationRuntime(runtimeArg, expected);
assert.equal(runtime.manifest.leanCommit, toolchainCatalog.lean[lean]?.commit, 'Match the native Lean release');
const pins = JSON.parse(readFileSync(join(root, 'scripts/ci/acceptance-versions.json')));
assert.equal(lean, pins.lean);
const platforms = process.env.LASM_CANDIDATE_PLATFORMS?.split(',') ?? buildPlatforms;
assert.equal(new Set(platforms).size, platforms.length);
for (const platform of platforms) {
  assert.ok(buildPlatforms.includes(platform), `Unsupported candidate platform: ${platform}`);
  // The default link toolchain; the full SDK and Python remain for LASM_LINK_DRIVER=emcc.
  assert.ok(linkToolchainCatalog.native[platform], `Missing managed link toolchain for ${platform}`);
  for (const catalog of [toolchainCatalog.lean[lean], sdkCatalog, pythonCatalog])
    assert.ok(catalog.artifacts[platform], `Missing managed distribution for ${platform}`);
}
const sourceRevision = execFileSync('git', ['rev-parse', 'HEAD'], { cwd: root, encoding: 'utf8' }).trim();
const dirty = execFileSync('git', ['status', '--porcelain', '--untracked-files=normal'], { cwd: root, encoding: 'utf8' }).trim();
assert.equal(dirty, '', 'Commit source changes before packing a traceable candidate');
mkdirSync(staging, { recursive: true });
for (const path of ['bin', 'src']) cpSync(join(root, path), join(staging, path), { recursive: true,
  filter: file => basename(file) !== 'native' });
cpSync(resolve(nativeArg), join(staging, 'src/native'), { recursive: true });
for (const file of ['manifest.json', 'process/manifest.json', 'signals/manifest.json', 'node_modules/koffi/LICENSE.txt'])
  assert.ok(existsSync(join(staging, 'src/native', file)), `Missing runtime dependency: ${file}`);
cpSync(runtime.directory, join(staging, 'targets', runtime.manifest.name), { recursive: true });
// The initializer analysis of the runtime's archives (a function of the runtime
// and of Lasm's analysis code), so a new machine's first build need not parse
// 360 MB of archives (src/application-link.mjs archiveUnitCache).
{
  const stagedRuntime = { ...runtime, directory: join(staging, 'targets', runtime.manifest.name) };
  const shipped = shippedAnalysisDirectory(stagedRuntime);
  initializerUnits(runtime.manifest.libraries.map(name => join(stagedRuntime.directory, name)),
    { archiveUnits: archiveUnitCache(shipped, stagedRuntime, { shipped: null }) });
}
// Lasm's Lean library (import Lasm.JS), compiled into the managed Lean prefix on first use.
cpSync(join(root, 'library'), join(staging, 'library'), { recursive: true });
// `lasm init` project templates (src/init.mjs).
cpSync(join(root, 'templates'), join(staging, 'templates'), { recursive: true });
mkdirSync(join(staging, 'scripts/full-lean'), { recursive: true });
for (const name of ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs',
  'function-table-index.mjs', 'table-growth.mjs'])
  copyFileSync(join(root, 'scripts/full-lean', name), join(staging, 'scripts/full-lean', name));
mkdirSync(join(staging, 'docs'));
writeFileSync(join(staging, 'README.md'), candidateReadme(readFileSync(join(root, 'README.md'), 'utf8'), {
  version, sourceRevision, runId: process.env.GITHUB_RUN_ID,
}));
copyFileSync(join(root, 'docs/NODE_SUPPORT.md'), join(staging, 'docs/NODE_SUPPORT.md'));
cpSync(join(root, 'examples/hello'), join(staging, 'examples/hello'), { recursive: true });
const json = (path, value) => writeFileSync(join(staging, path), JSON.stringify(value, null, 2) + '\n');
json('src/toolchains.json', { ...toolchainCatalog, defaultLean: lean, lean: { [lean]: toolchainCatalog.lean[lean] } });
json('src/application-runtimes.json', { schema: 1, lean: { [lean]: expected } });
// The compiler runs on Node >= 24 (tested on the pinned 24 and 26 releases). Its
// Linux floor is the managed tools' newest glibc symbol. GLIBC_2.34 came from the
// formerly bundled Git (Lean's LLVM needs 2.30); it is kept until re-measured. Built applications carry their own, lower checks
// (src/application-output.mjs: Node 24.0.0, glibc 2.28).
json('application-support.json', { schema: 1, platforms, node: pins.node, minimumNode: pins.minimumNode,
  testedNode: [pins.node24, pins.node], lean, minimumGlibc: '2.34' });
const installer = await bundleInstaller(root, staging);
json('provenance.json', { sourceRevision, runtimeManifestSha256: manifestSha256,
  installerManifestSha256: installer.sha256, lean, node: pins.node });
const sourcePackage = JSON.parse(readFileSync(join(root, 'package.json')));
json('package.json', {
  name: sourcePackage.name, version, private: true, license: 'UNLICENSED', type: 'module',
  description: 'Compile ordinary Lean applications to run in Node',
  bin: sourcePackage.bin, exports: sourcePackage.exports, engines: { node: '>=' + pins.minimumNode }, os: [...new Set(platforms.map(p => p.split('-')[0]))], cpu: ['x64', 'arm64'],
  files: ['bin', 'src', 'library', 'templates', 'scripts', 'targets', 'docs', 'examples', 'README.md',
    'THIRD_PARTY_NOTICES.txt', 'application-support.json', 'provenance.json', 'installer-dependencies.json'],
  dependencies: { tar: sourcePackage.dependencies.tar },
  bundleDependencies: ['tar'],
});
writeFileSync(join(staging, 'THIRD_PARTY_NOTICES.txt'), applicationNotices(runtime.manifest, readFileSync(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), 'utf8'), { cli: true })
  + '\n=== Koffi runtime adapter ===\n' + readFileSync(join(staging, 'src/native/node_modules/koffi/LICENSE.txt'), 'utf8')
  + (existsSync(join(staging, 'src/wasi/component/proxy-template.wasm')) ? '\n' + wasmtimeAdapterNotice('src/wasi/component/proxy-template.wasm (the wasi-http component template)') : ''));
const pack = () => JSON.parse(execFileSync('npm', ['pack', '--json', '--ignore-scripts', '--pack-destination', output,
  '--cache', join(root, '.cache/npm')], { cwd: staging, encoding: 'utf8', maxBuffer: 8 * 1024 * 1024 }))[0];
const packed = pack(), archive = join(output, packed.filename), sha256 = await hashFile(archive);
const second = pack();
assert.equal(second.filename, packed.filename);
assert.equal(await hashFile(archive), sha256, 'Two independent npm pack calls must produce identical bytes');
const files = new Set(packed.files.map(file => file.path));
for (const file of ['bin/lasm.mjs', 'src/application-support.mjs', 'src/application-build-client.mjs',
  'src/application-build-worker.mjs', 'src/build-progress.mjs', 'src/native/node_modules/koffi/index.cjs',
  'src/native/process/manifest.json', 'src/native/signals/manifest.json',
  'scripts/full-lean/host-library.js', 'src/init.mjs', 'templates/common/App.lean', 'templates/hono/Main.lean', 'application-support.json', 'provenance.json', 'THIRD_PARTY_NOTICES.txt',
  `targets/${runtime.manifest.name}/target.json`]) assert.ok(files.has(file), `npm pack omitted ${file}`);
for (const [path, dependency] of Object.entries(installer.manifest.packages)) {
  for (const file of Object.keys(dependency.files)) assert.ok(files.has(`${path}/${file}`), `npm pack omitted bundled installer file ${path}/${file}`);
}
const result = { scope: 'Reproducible local npm packing; native installed acceptance is separate',
  tarball: archive, sha256, sourceRevision, candidateVersion: version, defaultLean: lean, node: pins.node,
  runtime: { identity: manifestSha256, name: runtime.manifest.name }, reproduciblePacking: true,
  installer: { identity: installer.sha256, packages: Object.fromEntries(Object.entries(installer.manifest.packages).map(([path, p]) => [path, p.version])) },
  compressedBytes: packed.size, installedBytes: packed.unpackedSize, files: packed.entryCount,
  resourceReport: process.env.LASM_RESOURCE_REPORT, recordedAt: new Date().toISOString() };
writeFileSync(join(output, 'result.json'), JSON.stringify(result, null, 2) + '\n');
if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, `sha256=${sha256}\nfilename=${packed.filename}\n`);
console.log(JSON.stringify(result, null, 2));
