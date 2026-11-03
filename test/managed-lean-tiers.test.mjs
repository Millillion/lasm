import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, readFile, writeFile, rm, stat, readdir, chmod, unlink } from 'node:fs/promises';
import { join, basename, delimiter } from 'node:path';
import { tmpdir } from 'node:os';
import { Readable, Writable } from 'node:stream';
import { packArchive } from '../scripts/lean-dist/tiers.mjs';
import { leanDistribution, assembleLeanPrefix, toolchainCatalog } from '../src/managed-lean.mjs';
import { validateArtifact } from '../src/managed-artifacts.mjs';
import { standaloneImportsModules, cCompilerEnvironment } from '../src/application-sources.mjs';
import { repairManagedCache } from '../src/cache-repair.mjs';

const host = process.platform + '-' + process.arch;
async function tierArchive(name, files) {
  const members = Object.entries(files).map(([path, text]) => ({ path, type: 'file', content: Buffer.from(text),
    size: Buffer.byteLength(text), executable: path.startsWith('bin/') }));
  const chunks = [];
  const result = await packArchive(name, members, { open: member => Readable.from([member.content]), zstd: { level: 3, windowLog: 20, long: false },
    sink: new Writable({ write(chunk, encoding, done) { chunks.push(chunk); done(); } }) });
  const bytes = Buffer.concat(chunks);
  return { bytes, artifact: { name: name + '.tar.zst', root: name, url: `https://example.invalid/${name}.tar.zst`,
    sha256: result.sha256, bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 } };
}
async function fixture(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-lean-tiers-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const long = 'lib/lean/' + 'Deep/'.repeat(30) + 'Init.olean';
  const archives = {
    bin: await tierArchive('lean-9.9.9-test-bin', { 'bin/lean': 'compiler', 'bin/lake': 'lake', LICENSE: 'Apache',
      'lasm-notices/lean-9.9.9-test-bin/NOTICE': 'bin notice' }),
    init: await tierArchive('lean-9.9.9-core-init', { 'lib/lean/Init.olean': 'init data', [long]: 'deep data', 'src/lean/Init.lean': 'prelude',
      'lasm-notices/lean-9.9.9-core-init/NOTICE': 'core notice' }),
    lean: await tierArchive('lean-9.9.9-ext-rest', { 'lib/lean/Lean.olean': 'lean data', 'src/lean/Lean.lean': 'import Init',
      'lasm-notices/lean-9.9.9-ext-rest/NOTICE': 'ext notice' }),
    clash: await tierArchive('lean-9.9.9-ext-clash', { 'lib/lean/Init.olean': 'other init data' }),
  };
  const requests = [];
  const byUrl = new Map(Object.values(archives).map(item => [item.artifact.url, item.bytes]));
  let offline = false;
  const fetch = async url => {
    requests.push(basename(url));
    if (offline) throw new TypeError('fetch failed');
    return new Response(byUrl.get(url));
  };
  const release = { commit: 'c'.repeat(40), artifacts: {}, tiers: { bin: { [host]: archives.bin.artifact },
    core: [archives.init.artifact], extended: [archives.lean.artifact], extendedModules: ['Lean'] } };
  return { base, cache: join(base, 'cache'), archives, release, requests, fetch, goOffline: () => { offline = true; } };
}
const component = (artifact, label = artifact.name) => ({ artifact, label });

test('the catalog selects tiers per host, keeps full archives for rollback and rejects malformed tiers', async t => {
  const f = await fixture(t);
  const full = { ...f.archives.bin.artifact, name: 'full.tar.zst' };
  const release = { ...f.release, artifacts: { [host]: full, 'other-os': full } };
  assert.equal(leanDistribution(release, host).kind, 'tiers');
  assert.deepEqual(leanDistribution(release, host, { distribution: 'full' }), { kind: 'full', artifact: full });
  assert.deepEqual(leanDistribution(release, 'other-os'), { kind: 'full', artifact: full }, 'Hosts without tiers keep the full archive');
  assert.equal(leanDistribution(release, 'missing-os'), null);
  for (const change of [{ core: [] }, { extended: undefined }, { extendedModules: ['lean/../x'] }, { core: [{ ...full, sha256: 'x' }] }])
    assert.throws(() => leanDistribution({ ...release, tiers: { ...release.tiers, ...change } }, host), /Invalid|managed artifact/);
  // Every published tier in the product catalog is a valid verified artifact.
  for (const version of Object.values(toolchainCatalog.lean)) if (version.tiers) for (const platform of Object.keys(version.tiers.bin)) {
    const selected = leanDistribution(version, platform);
    assert.equal(selected.kind, 'tiers');
    for (const artifact of [selected.bin, ...selected.core, ...selected.extended]) {
      validateArtifact(artifact);
      assert.equal(artifact.format, 'tar.zst');
      assert.ok(artifact.bytes <= 150 * 1024 * 1024, `${artifact.name} stays below the package ceiling`);
    }
  }
});

test('core and extended prefixes are assembled once from shared verified components', async t => {
  const f = await fixture(t);
  const options = { cache: f.cache, fetch: f.fetch, log() {} };
  const core = [component(f.archives.bin.artifact), component(f.archives.init.artifact)];
  const first = await assembleLeanPrefix('9.9.9', f.release, core, options);
  assert.equal(first.cacheHit, false);
  assert.equal(first.receipt.provenance.kind, 'lean-prefix');
  assert.deepEqual(first.receipt.provenance.components, core.map(item => validateArtifact(item.artifact)));
  assert.equal(await readFile(join(first.directory, 'bin/lean'), 'utf8'), 'compiler');
  assert.equal(await readFile(join(first.directory, 'lib/lean', 'Deep/'.repeat(30), 'Init.olean'), 'utf8'), 'deep data');
  assert.equal(await readFile(join(first.directory, 'lasm-notices/lean-9.9.9-core-init/NOTICE'), 'utf8'), 'core notice');
  if (process.platform !== 'win32') {
    assert.ok((await stat(join(first.directory, 'bin/lean'))).mode & 0o100, 'Executable bits survive');
    const [binIdentity] = [validateArtifact(f.archives.bin.artifact)];
    assert.equal((await stat(join(first.directory, 'bin/lean'))).ino, (await stat(join(f.cache, 'artifacts', binIdentity, 'bin/lean'))).ino,
      'The prefix hard-links verified component files instead of copying them');
  }
  const again = await assembleLeanPrefix('9.9.9', f.release, core, options);
  assert.equal(again.cacheHit, true); assert.equal(again.identity, first.identity);
  // Components download in parallel (b1bc7e5): each exactly once, in either order.
  assert.deepEqual([...f.requests].sort(), ['lean-9.9.9-core-init.tar.zst', 'lean-9.9.9-test-bin.tar.zst']);
  const extended = await assembleLeanPrefix('9.9.9', f.release, [...core, component(f.archives.lean.artifact)], options);
  assert.notEqual(extended.identity, first.identity, 'Every component contributes to the prefix identity');
  assert.equal(await readFile(join(extended.directory, 'lib/lean/Lean.olean'), 'utf8'), 'lean data');
  assert.deepEqual(f.requests.slice(2), ['lean-9.9.9-ext-rest.tar.zst'], 'Only the extended data is downloaded');
  assert.deepEqual((await readdir(join(f.cache, 'derived'))).filter(name => !name.startsWith('.')).sort(), [first.identity, extended.identity].sort());
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [...core, component(f.archives.clash.artifact)], options), /both contain lib\/lean\/Init.olean/);
});

test('damaged assembled prefixes fail closed, and repair rebuilds them offline from cached components', async t => {
  const f = await fixture(t);
  const options = { cache: f.cache, fetch: f.fetch, log() {} };
  const core = [component(f.archives.bin.artifact), component(f.archives.init.artifact)];
  const prefix = await assembleLeanPrefix('9.9.9', f.release, core, options);
  // Replace (not edit) the file so only the assembled prefix changes.
  await unlink(join(prefix.directory, 'lib/lean/Init.olean'));
  await writeFile(join(prefix.directory, 'lib/lean/Init.olean'), 'changed data');
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, core, options), /cache contents changed/);
  const repaired = await repairManagedCache({ cache: f.cache, log() {} });
  assert.deepEqual(repaired.removed.map(item => item.directory), [prefix.directory]);
  assert.equal(repaired.verified.length, 2, 'Valid component archives are retained');
  f.goOffline();
  const rebuilt = await assembleLeanPrefix('9.9.9', f.release, core, options);
  assert.equal(rebuilt.identity, prefix.identity);
  assert.equal(await readFile(join(rebuilt.directory, 'lib/lean/Init.olean'), 'utf8'), 'init data');
});

// Issue #73: the macOS C tier takes the SDK's libSystem.tbd without the targets
// Lean's ld64.lld does not know, and asks that linker to read it before any build.
test('a macOS C tier links against the SDK stub without unknown targets, checked by the linker', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const sdk = join(f.base, 'MacOSX.sdk');
  await mkdir(join(sdk, 'usr/include'), { recursive: true }); await mkdir(join(sdk, 'usr/lib'), { recursive: true });
  await writeFile(join(sdk, 'usr/include/stdio.h'), '');
  const raw = await readFile(new URL('./fixtures/macos-tbd/v4-unknown-targets.tbd', import.meta.url), 'utf8');
  await writeFile(join(sdk, 'usr/lib/libSystem.tbd'), raw);
  const saved = process.env.SDKROOT;
  process.env.SDKROOT = sdk;
  t.after(() => { if (saved === undefined) delete process.env.SDKROOT; else process.env.SDKROOT = saved; });
  // A stand-in for Lean's ld64.lld that, like LLD 23.1, rejects the unknown targets.
  const linker = verdict => `#!/usr/bin/env node
const file = process.argv.at(-1);
${verdict}
if (require('fs').readFileSync(file, 'utf8').includes('arm64e.x1')) { console.error('ld64.lld: error: could not load TAPI file at ' + file + ': malformed file'); process.exit(1); }
`;
  const cTier = async (name, verdict = '') => {
    const archive = await tierArchive(name, { 'bin/ld64.lld': linker(verdict), 'include/stdio.h': '' });
    const fetch = f.fetch;
    f.fetch = async url => url === archive.artifact.url ? new Response(archive.bytes) : fetch(url);
    return component(archive.artifact);
  };
  const core = [component(f.archives.bin.artifact), component(f.archives.init.artifact)];
  const good = await cTier('lean-9.9.9-test-c');
  const prefix = await assembleLeanPrefix('9.9.9', f.release, [...core, good], { cache: f.cache, fetch: (...a) => f.fetch(...a), log() {}, platform: 'darwin', arch: 'arm64' });
  const stub = await readFile(join(prefix.directory, 'lib/libc/libSystem.tbd'), 'utf8');
  assert.doesNotMatch(stub, /arm64e\.x1/);
  assert.match(stub, /^targets:\s+\[ x86_64-macos, x86_64-maccatalyst, arm64-macos, arm64-maccatalyst, arm64e-macos, arm64e-maccatalyst \]$/m);
  assert.equal(await readFile(join(sdk, 'usr/lib/libSystem.tbd'), 'utf8'), raw, 'The SDK itself is not changed');
  assert.equal(prefix.receipt.provenance.macosSdkLibSystemFilter, 1, 'Prefixes assembled with the unfiltered copy are not reused');
  // A stub the linker still cannot read fails while assembling, naming the SDK.
  const refusing = await cTier('lean-9.9.9-refusing-c', "console.error('ld64.lld: error: unknown target'); process.exit(1);");
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [...core, refusing], { cache: f.cache, fetch: (...a) => f.fetch(...a), log() {}, platform: 'darwin', arch: 'arm64' }),
    error => error.message.includes(`The macOS SDK at ${sdk} has a libSystem.tbd`) && /unknown target/.test(error.message) && /SDKROOT/.test(error.message));
});

test('standalone imports of extended modules are found through local imports', { skip: process.platform === 'win32' }, async t => {
  const f = await fixture(t);
  const prefix = join(f.base, 'prefix');
  await mkdir(join(prefix, 'bin'), { recursive: true }); await mkdir(join(prefix, 'src/lean/lake'), { recursive: true });
  await writeFile(join(prefix, 'src/lean/Std.lean'), '');
  // A stand-in for Lean's header parser with the same output conventions.
  await writeFile(join(prefix, 'bin/lean'), `#!/usr/bin/env node
const fs = require('fs'), path = require('path');
const file = process.argv[3], prefix = path.join(__dirname, '..');
for (const [, name] of fs.readFileSync(file, 'utf8').matchAll(/^(?:public |meta )*import (\\S+)/gm)) {
  const local = path.resolve(path.dirname(file), name.split('.').join('/') + '.lean');
  const standard = path.join(prefix, 'src/lean', name.split('.').join('/') + '.lean');
  if (fs.existsSync(local)) console.log(local);
  else if (fs.existsSync(standard)) console.log(path.join(prefix, 'bin/../src/lean', name.split('.').join('/') + '.lean'));
  else { console.error("unknown module prefix '" + name.split('.')[0] + "'\\n\\nNo directory '" + name.split('.')[0] + "'"); process.exit(1); }
}
`);
  await chmod(join(prefix, 'bin/lean'), 0o755);
  const source = join(f.base, 'app');
  await mkdir(join(source, 'Util'), { recursive: true });
  const write = (name, text) => writeFile(join(source, name), text);
  await write('Plain.lean', 'import Std\nimport Util.Text\n');
  await write('Util/Text.lean', 'import Std\n');
  await write('Meta.lean', 'import Std\nimport Util.Elab\n');
  await write('Util/Elab.lean', 'meta import Lean.Elab.Command\n');
  await write('Typo.lean', 'import Nope\nimport Lean\n');
  const lean = { prefix, lean: join(prefix, 'bin/lean') };
  assert.equal(standaloneImportsModules(join(source, 'Plain.lean'), lean, ['Lean', 'Lake']), false);
  assert.equal(standaloneImportsModules(join(source, 'Meta.lean'), lean, ['Lean', 'Lake']), true);
  assert.equal(standaloneImportsModules(join(source, 'Typo.lean'), lean, ['Lean', 'Lake']), true,
    'An unresolved header conservatively selects the extended prefix; the ordinary build reports the real error');
  await writeFile(join(prefix, 'src/lean/lake/Lake.lean'), '');
  await write('Lakey.lean', 'import Lake\n');
  assert.equal(standaloneImportsModules(join(source, 'Lakey.lean'), lean, ['Lean', 'Lake']), true,
    'Modules resolved from the sources of an extended root also require the extended tier');
});

test('the C tier is selected per host and its compiler environment uses Lean\'s clang headers', async t => {
  const f = await fixture(t);
  const c = { ...f.archives.bin.artifact, name: 'lean-9.9.9-test-c.tar.zst', root: 'lean-9.9.9-test-c', multiarch: 'x86_64-linux-gnu' };
  const release = { ...f.release, tiers: { ...f.release.tiers, c: { [host]: c } } };
  assert.deepEqual(leanDistribution(release, host).c, c);
  assert.equal(leanDistribution(f.release, host).c, undefined, 'Catalogs without a C tier fall back to the full archive');
  assert.throws(() => leanDistribution({ ...release, tiers: { ...release.tiers, c: { [host]: { ...c, multiarch: '../x' } } } }, host), /Invalid/);
  const lean = { prefix: join('/lean'), cCompiler: { multiarch: 'x86_64-linux-gnu' } };
  const include = join('/lean', 'lib', 'lasm-libc', 'include');
  assert.deepEqual(cCompilerEnvironment(lean, { C_INCLUDE_PATH: '/mine' }, { platform: 'linux' }),
    { C_INCLUDE_PATH: [join(include, 'x86_64-linux-gnu'), include, '/mine'].join(delimiter) });
  assert.deepEqual(cCompilerEnvironment({ ...lean, cCompiler: { multiarch: null } }, { Path: 'x' }, { platform: 'win32' }), {},
    'On Windows the prefix itself is the MinGW sysroot');
  assert.deepEqual(cCompilerEnvironment(lean, {}, { platform: 'darwin', sdkPath: () => '/sdk' }), { SDKROOT: '/sdk' });
  assert.deepEqual(cCompilerEnvironment(lean, { SDKROOT: '/given' }, { platform: 'darwin', sdkPath: () => assert.fail('not asked') }), {});
  assert.throws(() => cCompilerEnvironment(lean, {}, { platform: 'darwin', sdkPath: () => null }), /Xcode Command Line Tools/);
  // Every published C tier is a valid artifact below the package ceiling.
  for (const version of Object.values(toolchainCatalog.lean)) for (const artifact of Object.values(version.tiers?.c ?? {})) {
    validateArtifact(artifact);
    assert.ok(artifact.bytes <= 150 * 1024 * 1024, `${artifact.name} stays below the package ceiling`);
  }
});
