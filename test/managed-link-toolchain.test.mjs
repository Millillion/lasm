import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, writeFile, rm, readdir } from 'node:fs/promises';
import { join, basename } from 'node:path';
import { tmpdir } from 'node:os';
import { Readable, Writable } from 'node:stream';
import { packArchive } from '../scripts/lean-dist/tiers.mjs';
import { provisionLinkToolchain, linkToolchainArtifacts, linkToolchainEnvironment, linkToolchainCatalog, linkToolchainPrograms, buildJobs }
  from '../src/managed-link-toolchain.mjs';
import { validateArtifact } from '../src/managed-artifacts.mjs';
import { repairManagedCache } from '../src/cache-repair.mjs';
import { bundledRecipe, checkToolchainIdentity, emscriptenCache } from '../src/link-driver/compile.mjs';
import { selectedLinkDriver } from '../src/application-link.mjs';
import { buildPlatforms } from '../src/platform.mjs';

const host = process.platform + '-' + process.arch;
const exe = process.platform === 'win32' ? '.exe' : '';

/** The smallest executable header src/native-program.mjs accepts for this host. */
function nativeHeader() {
  const bytes = Buffer.alloc(128);
  if (process.platform === 'linux') {
    bytes.write('\x7fELF', 0, 'latin1'); bytes[4] = 2; bytes[5] = 1; bytes.writeUInt16LE(process.arch === 'arm64' ? 183 : 62, 18);
  } else if (process.platform === 'darwin') {
    bytes.writeUInt32LE(0xfeedfacf, 0); bytes.writeUInt32LE(process.arch === 'arm64' ? 0x0100000c : 0x01000007, 4);
  } else {
    bytes.write('MZ', 0, 'latin1'); bytes.writeUInt32LE(64, 60); bytes.writeUInt32LE(0x00004550, 64);
    bytes.writeUInt16LE(process.arch === 'arm64' ? 0xaa64 : 0x8664, 68);
  }
  return bytes;
}

async function archive(name, files) {
  const members = Object.entries(files).map(([path, content]) => ({ path, type: 'file', content: Buffer.from(content),
    size: Buffer.byteLength(content), executable: path.startsWith('bin/') }));
  const chunks = [];
  const result = await packArchive(name, members, { open: member => Readable.from([member.content]), zstd: { level: 3, windowLog: 20, long: false },
    sink: new Writable({ write(chunk, encoding, done) { chunks.push(chunk); done(); } }) });
  const bytes = Buffer.concat(chunks);
  return { bytes, artifact: { name, root: name, url: `https://example.invalid/${name}.tar.zst`, sha256: result.sha256,
    bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 } };
}

async function fixture(t, { version = '6.0.9' } = {}) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-link-toolchain-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const header = nativeHeader();
  const native = await archive(`emscripten-${version}-${host}-tools`, {
    ...Object.fromEntries(linkToolchainPrograms.map(name => [`bin/${name}${exe}`, header])),
    'lib/clang/24/include/stddef.h': '/* stddef */', 'lasm-notices/native/NOTICE': 'native notice' });
  const shared = await archive(`emscripten-${version}-lasm-shared`, { 'emscripten/emscripten-version.txt': `"${version}"\n`,
    'emscripten/tools/compiler.mjs': '// compiler', 'cache/sysroot_install.stamp': '', 'cache/sysroot/include/stdio.h': '/* stdio */',
    'lasm-notices/shared/NOTICE': 'shared notice' });
  const requests = [];
  const byUrl = new Map([native, shared].map(item => [item.artifact.url, item.bytes]));
  const fetch = async url => { requests.push(basename(url)); return new Response(byUrl.get(url)); };
  const catalog = { schema: 1, version, native: { [host]: native.artifact }, shared: shared.artifact };
  return { base, cache: join(base, 'cache'), catalog, native, shared, requests, fetch };
}

test('the link toolchain assembles one verified prefix from both archives without Python', async t => {
  const f = await fixture(t);
  const options = { cache: f.cache, catalog: f.catalog, fetch: f.fetch, log() {}, env: { PATH: '/p', EM_CONFIG: 'x', PYTHONHOME: 'y', EMCC_DEBUG: '1', LASM_BUILD_JOBS: '1' } };
  const tools = await provisionLinkToolchain(options);
  assert.deepEqual(f.requests.sort(), [f.native.artifact.name + '.tar.zst', f.shared.artifact.name + '.tar.zst'].sort());
  assert.equal(tools.prefix, tools.directory);
  assert.equal(await readFile(join(tools.prefix, 'emscripten/tools/compiler.mjs'), 'utf8'), '// compiler');
  assert.equal(await readFile(join(tools.prefix, 'lib/clang/24/include/stddef.h'), 'utf8'), '/* stddef */');
  assert.equal(tools.driver, join(tools.prefix, 'emscripten'));
  assert.equal(tools.cache, join(tools.prefix, 'cache'));
  assert.equal(emscriptenCache(tools), tools.cache);
  assert.deepEqual(tools.toolchain, { native: f.native.artifact.sha256, shared: f.shared.artifact.sha256 });
  assert.deepEqual(Object.keys(tools.nativePrograms).sort(), [...linkToolchainPrograms].sort());
  assert.deepEqual(tools.env, { PATH: '/p', LASM_BUILD_JOBS: '1', BINARYEN_CORES: '1', SOURCE_DATE_EPOCH: '315532800' });
  assert.throws(() => tools.execute('emcc', []), /no emcc/);
  assert.deepEqual((await readdir(join(f.cache, 'derived'))).filter(name => !name.startsWith('.')), [tools.identity]);
  // A second build only verifies the assembled prefix.
  f.requests.length = 0;
  const again = await provisionLinkToolchain(options);
  assert.equal(again.cacheHit, true); assert.deepEqual(f.requests, []);
  // Damage is detected, and offline repair restores a verified prefix from the cached archives.
  // (Replace the file: prefix files are hard links to the verified archive trees.)
  await rm(join(tools.prefix, 'emscripten/tools/compiler.mjs'));
  await writeFile(join(tools.prefix, 'emscripten/tools/compiler.mjs'), 'tampered');
  await assert.rejects(provisionLinkToolchain(options), /contents changed/);
  const repaired = await repairManagedCache({ cache: f.cache, log() {} });
  assert.equal(repaired.removed.length, 1);
  const rebuilt = await provisionLinkToolchain({ ...options, fetch: async () => { throw new Error('offline'); } });
  assert.equal(await readFile(join(rebuilt.prefix, 'emscripten/tools/compiler.mjs'), 'utf8'), '// compiler');
});

test('the link toolchain refuses unknown hosts, malformed catalogs and other Emscripten versions', async t => {
  const f = await fixture(t, { version: '6.0.8' });
  assert.throws(() => linkToolchainArtifacts({ ...f.catalog, native: {} }, host), /not available for/);
  assert.throws(() => linkToolchainArtifacts({ ...f.catalog, schema: 2 }, host), /Invalid link toolchain catalog/);
  assert.throws(() => linkToolchainArtifacts({ ...f.catalog, shared: { ...f.catalog.shared, sha256: 'x' } }, host), /managed artifact/);
  await assert.rejects(provisionLinkToolchain({ cache: f.cache, catalog: { ...f.catalog, version: '6.0.9' }, fetch: f.fetch, log() {} }),
    /version mismatch: 6.0.8/);
  assert.deepEqual(linkToolchainEnvironment({ A: '1', LLVM_ROOT: 'x', BINARYEN_ROOT: 'y', EMSDK: 'z', BINARYEN_CORES: '9', LASM_BUILD_JOBS: '3' }),
    { A: '1', LASM_BUILD_JOBS: '3', BINARYEN_CORES: '3', SOURCE_DATE_EPOCH: '315532800' });
  assert.equal(buildJobs({}, 2), 2); assert.equal(buildJobs({}, 64), 8); assert.equal(buildJobs({ LASM_BUILD_JOBS: '' }, 1), 1);
  for (const value of ['0', '-1', '1.5', 'x', '1000']) assert.throws(() => buildJobs({ LASM_BUILD_JOBS: value }), /LASM_BUILD_JOBS/);
});

test('the recipe runs only against the published archives or the recorded SDK', () => {
  const recipe = bundledRecipe();
  const tools = { platform: 'linux-x64', toolchain: { native: recipe.toolchain.native['linux-x64'], shared: recipe.toolchain.shared } };
  assert.equal(checkToolchainIdentity(recipe, tools), 'toolchain');
  for (const changed of [{ ...tools, platform: 'darwin-arm64' }, { ...tools, toolchain: { ...tools.toolchain, shared: 'f'.repeat(64) } },
    { ...tools, toolchain: { ...tools.toolchain, native: recipe.toolchain.native['win32-x64'] } }])
    assert.throws(() => checkToolchainIdentity(recipe, changed), /not verified with these compiler tools/);
  assert.equal(checkToolchainIdentity(recipe, { driverIdentity: recipe.sdk.driverIdentity }), 'sdk');
  assert.throws(() => checkToolchainIdentity(recipe, { driverIdentity: 'e'.repeat(64) }), /not recorded with this compiler SDK/);
  assert.throws(() => checkToolchainIdentity(recipe, {}), /not recorded/);
});

test('the shipped catalog, recipe and default driver agree for every supported platform', () => {
  const recipe = bundledRecipe();
  assert.equal(selectedLinkDriver(undefined), 'node');
  assert.equal(linkToolchainCatalog.version, recipe.emscripten);
  assert.equal(recipe.toolchain.shared, linkToolchainCatalog.shared.sha256);
  assert.deepEqual(Object.keys(linkToolchainCatalog.native).sort(), [...buildPlatforms].sort());
  for (const platform of buildPlatforms) {
    const artifact = linkToolchainCatalog.native[platform];
    validateArtifact(artifact);
    assert.equal(recipe.toolchain.native[platform], artifact.sha256, platform);
    assert.equal(artifact.root, `emscripten-${recipe.emscripten}-${platform}-tools`);
    assert.ok(artifact.bytes < 150 * 1024 * 1024, `${platform} archive within the package ceiling`);
    assert.ok(artifact.url.startsWith(`https://github.com/Millillion/lasm/releases/download/${recipe.toolchain.release}/`));
  }
  assert.equal(linkToolchainCatalog.shared.root, `emscripten-${recipe.emscripten}-lasm-shared`);
});
