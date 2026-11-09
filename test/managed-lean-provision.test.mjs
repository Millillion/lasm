// provisionLean's choices (src/managed-lean.mjs): which archives a build gets
// for its tier (core, extended, native, full), how they are labelled, what it
// returns, and what is refused before any download. The stand-in `lean` and
// `lake` start with this host's native executable header (which
// verifyNativeProgram checks) followed by a shell script: the kernel refuses
// the header (ENOEXEC) and execvp runs the file with /bin/sh, which skips the
// header line. POSIX only.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm } from 'node:fs/promises';
import { join, basename } from 'node:path';
import { tmpdir } from 'node:os';
import { Readable, Writable } from 'node:stream';
import { packArchive } from '../scripts/lean-dist/tiers.mjs';
import './helpers/library-stand-in.mjs';
const { provisionLean, selectLeanVersion, leanDistribution } = await import('../src/managed-lean.mjs');
const { validateArtifact, trustVerifiedTreesForSession } = await import('../src/managed-artifacts.mjs');

const host = `${process.platform}-${process.arch}`;
const posix = process.platform !== 'win32';
/** A native header for this host, then `script` for /bin/sh (see above). */
function runnable(script) {
  const header = Buffer.alloc(20, 32);
  if (process.platform === 'darwin') {
    header.writeUInt32LE(0xfeedfacf, 0); header.writeUInt32LE(process.arch === 'arm64' ? 0x0100000c : 0x01000007, 4);
    header[8] = 10; header[9] = 35;
  } else {
    header.write('\x7fELF', 0, 'latin1'); header[4] = 2; header[5] = 1; header[6] = 10; header[7] = 35;
    header.writeUInt16LE(process.arch === 'arm64' ? 183 : 62, 18);
  }
  return Buffer.concat([header, Buffer.from('\n' + script + '\nexit 0\n')]);
}
const leanScript = commit => `echo "$*" >> "$LASM_STAND_IN_CALLS"
case "$1" in
  --githash) echo ${commit};;
  --src-deps) if grep -q "^import Lean" "$2"; then echo "unknown module prefix 'Lean'" >&2; exit 1; fi;;
esac`;
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
async function tierArchive(name, files) {
  const members = Object.entries(files).map(([path, content]) => ({ path, type: 'file', content: Buffer.from(content),
    size: Buffer.byteLength(content), executable: path.startsWith('bin/') }));
  const chunks = [];
  const result = await packArchive(name, members, { open: member => Readable.from([member.content]), zstd: { level: 3, windowLog: 20, long: false },
    sink: new Writable({ write(chunk, encoding, done) { chunks.push(chunk); done(); } }) });
  const bytes = Buffer.concat(chunks);
  return { bytes, artifact: { name: name + '.tar.zst', root: name, url: `https://example.invalid/${name}.tar.zst`,
    sha256: result.sha256, bytes: bytes.length, format: 'tar.zst', maximumExtractedBytes: 1_000_000 } };
}

async function fixture(t, { coreCount = 1, c = false, commit = 'c'.repeat(40) } = {}) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-provision-lean-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const exe = process.platform === 'win32' ? '.exe' : '';
  const archives = [];
  const add = async (name, files) => { const item = await tierArchive(name, files); archives.push(item); return item.artifact; };
  const lean = posix ? runnable(leanScript(commit)) : nativeHeader();
  const bin = await add('lean-9.9.9-bin', { [`bin/lean${exe}`]: lean, [`bin/lake${exe}`]: nativeHeader() });
  const core = [];
  for (let i = 0; i < coreCount; i++) core.push(await add(`lean-9.9.9-core-${i}`, { [`lib/lean/Core${i}.olean`]: `core ${i}`, [`src/lean/Core${i}.lean`]: '' }));
  const extended = [await add('lean-9.9.9-ext-0', { 'lib/lean/Lean.olean': 'lean' }), await add('lean-9.9.9-ext-1', { 'lib/lean/Lake.olean': 'lake' })];
  const full = await add('lean-9.9.9-full', { [`bin/lean${exe}`]: lean, [`bin/lake${exe}`]: nativeHeader(), 'lib/lean/Init.olean': 'all' });
  const cTier = c ? { ...await add('lean-9.9.9-c', { 'include/stdio.h': '' }), multiarch: 'x86_64-linux-gnu' } : undefined;
  const release = { commit: 'c'.repeat(40), artifacts: { [host]: full },
    tiers: { bin: { [host]: bin }, core, extended, extendedModules: ['Lean', 'Lake'], ...(cTier ? { c: { [host]: cTier } } : {}) } };
  const catalog = { defaultLean: '9.9.9', lean: { '9.9.9': release } };
  const byUrl = new Map(archives.map(item => [item.artifact.url, item.bytes]));
  const requests = [], stages = [];
  const options = { catalog, cache: join(base, 'cache'), log() {}, progress: event => stages.push(event.stage),
    fetch: async url => { requests.push(basename(url, '.tar.zst')); return new Response(byUrl.get(url)); } };
  const project = join(base, 'project'); await mkdir(project);
  await writeFile(join(project, 'Main.lean'), 'def main : IO Unit := pure ()\n');
  const calls = join(base, 'lean-calls');
  await writeFile(calls, '');
  const saved = process.env.LASM_STAND_IN_CALLS;
  process.env.LASM_STAND_IN_CALLS = calls;
  t.after(() => { if (saved === undefined) delete process.env.LASM_STAND_IN_CALLS; else process.env.LASM_STAND_IN_CALLS = saved; });
  const leanCalls = async () => (await readFile(calls, 'utf8')).split('\n').filter(Boolean);
  return { base, project, main: join(project, 'Main.lean'), catalog, release, options, requests, stages, cTier, bin, core, extended, full, leanCalls };
}

test('the core tier: the compiler and standard library only, labelled for progress, identified by --githash', { skip: !posix }, async t => {
  const f = await fixture(t);
  const lean = await provisionLean(f.main, { ...f.options, modules: 'core' });
  assert.deepEqual(f.requests.sort(), ['lean-9.9.9-bin', 'lean-9.9.9-core-0']);
  for (const stage of ['Downloading Lean 9.9.9 compiler', 'Downloading Lean 9.9.9 standard library', 'Checking Lean 9.9.9 installation', 'Assembling Lean 9.9.9'])
    assert.ok(f.stages.includes(stage), stage);
  assert.equal(f.stages.includes('Checking Lean imports'), false);
  assert.equal(lean.version, '9.9.9'); assert.equal(lean.pin, null);
  assert.equal(lean.distribution, 'tiers'); assert.equal(lean.tier, 'core');
  assert.deepEqual(lean.components, [validateArtifact(f.bin), validateArtifact(f.core[0])]);
  assert.equal(lean.prefix, lean.directory); assert.equal(lean.executionPrefix, lean.directory);
  assert.equal(lean.lean, join(lean.directory, 'bin', 'lean')); assert.equal(lean.lake, join(lean.directory, 'bin', 'lake'));
  assert.equal(lean.commit, 'c'.repeat(40)); assert.equal(lean.platform, host);
  assert.deepEqual(Object.keys(lean.nativePrograms), ['lean', 'lake']);
  assert.equal(lean.nativePrograms.lean.platform, process.platform);
  assert.equal(lean.cacheHit, false);
  assert.deepEqual(await f.leanCalls(), ['--githash']);
});

test('a compiler of another commit is refused', { skip: !posix }, async t => {
  const f = await fixture(t, { commit: 'd'.repeat(40) });
  await assert.rejects(provisionLean(f.main, { ...f.options, modules: 'core' }),
    { message: `Managed Lean identity mismatch: expected ${'c'.repeat(40)}, received ${'d'.repeat(40)}` });
});

test('in a trusted session the compiler identity is checked once per compiler', { skip: !posix }, async t => {
  const f = await fixture(t);
  await provisionLean(f.main, { ...f.options, modules: 'core' });
  await provisionLean(f.main, { ...f.options, modules: 'core' });
  assert.deepEqual(await f.leanCalls(), ['--githash', '--githash'], 'ordinary builds check every time');
  trustVerifiedTreesForSession(true);
  try {
    await provisionLean(f.main, { ...f.options, modules: 'core' });
    await provisionLean(f.main, { ...f.options, modules: 'core' });
    assert.deepEqual(await f.leanCalls(), ['--githash', '--githash'], 'lasm dev reuses the identity it saw');
  } finally { trustVerifiedTreesForSession(false); }
});

test('several archives of one tier are numbered', { skip: !posix }, async t => {
  const f = await fixture(t, { coreCount: 2 });
  const lean = await provisionLean(f.main, { ...f.options, modules: 'extended' });
  assert.equal(lean.tier, 'extended');
  assert.deepEqual(lean.components, [f.bin, ...f.core, ...f.extended].map(validateArtifact));
  assert.deepEqual(f.requests.sort(), ['lean-9.9.9-bin', 'lean-9.9.9-core-0', 'lean-9.9.9-core-1', 'lean-9.9.9-ext-0', 'lean-9.9.9-ext-1']);
  for (const label of ['Lean 9.9.9 standard library (1/2)', 'Lean 9.9.9 standard library (2/2)', 'Lean 9.9.9 Lean and Lake libraries (1/2)',
    'Lean 9.9.9 Lean and Lake libraries (2/2)']) assert.ok(f.stages.includes(`Downloading ${label}`), label);
});

test('standalone sources: core unless their imports reach an extended module', { skip: !posix }, async t => {
  const f = await fixture(t);
  const plain = await provisionLean(f.main, f.options);
  assert.equal(plain.tier, 'core');
  assert.ok(f.stages.includes('Checking Lean imports'));
  assert.deepEqual(await f.leanCalls(), ['--githash', `--src-deps ${await import('node:fs').then(fs => fs.realpathSync(f.main))}`]);
  assert.equal(f.requests.includes('lean-9.9.9-ext-0'), false);
  await writeFile(join(f.project, 'Meta.lean'), 'import Lean\n');
  const meta = await provisionLean(join(f.project, 'Meta.lean'), f.options);
  assert.equal(meta.tier, 'extended');
  assert.ok(f.requests.includes('lean-9.9.9-ext-0'));
});

test('Lake projects, directories and other files get the extended tier without checking imports', { skip: !posix }, async t => {
  const f = await fixture(t);
  await writeFile(join(f.project, 'lakefile.toml'), 'name = "p"\n');
  assert.equal((await provisionLean(f.main, f.options)).tier, 'extended');
  assert.equal(f.stages.includes('Checking Lean imports'), false);
  const g = await fixture(t);
  assert.equal((await provisionLean(g.project, g.options)).tier, 'extended');
  const h = await fixture(t);
  await writeFile(join(h.project, 'notes.txt'), '');
  assert.equal((await provisionLean(join(h.project, 'notes.txt'), h.options)).tier, 'extended');
  const i = await fixture(t);
  await mkdir(join(i.project, 'Dir.lean'));
  assert.equal((await provisionLean(join(i.project, 'Dir.lean'), i.options)).tier, 'extended', 'a directory named like a source');
});

test('native builds add the C tier (without its multiarch field), or use the full archive without one', { skip: !posix }, async t => {
  const f = await fixture(t, { c: true });
  const native = await provisionLean(f.main, { ...f.options, native: true });
  assert.deepEqual(f.requests.sort(), ['lean-9.9.9-bin', 'lean-9.9.9-c', 'lean-9.9.9-core-0', 'lean-9.9.9-ext-0', 'lean-9.9.9-ext-1']);
  assert.ok(f.stages.includes('Downloading Lean 9.9.9 C compiler and headers'));
  assert.equal(native.tier, 'native'); assert.deepEqual(native.cCompiler, { multiarch: 'x86_64-linux-gnu' });
  const { name, url, sha256, bytes, format, root, maximumExtractedBytes } = f.cTier;
  assert.equal(native.components.at(-1), validateArtifact({ name, url, sha256, bytes, format, root, maximumExtractedBytes }),
    'the C tier is identified without its multiarch field');
  const g = await fixture(t);
  const full = await provisionLean(g.main, { ...g.options, native: true });
  assert.deepEqual(g.requests, ['lean-9.9.9-full']);
  assert.ok(g.stages.includes('Downloading Lean 9.9.9 and Lake'));
  assert.equal(full.distribution, 'full'); assert.equal(full.tier, undefined);
  // The full distribution, chosen explicitly.
  const h = await fixture(t);
  assert.equal((await provisionLean(h.main, { ...h.options, distribution: 'full' })).distribution, 'full');
  assert.deepEqual(h.requests, ['lean-9.9.9-full']);
  // A C tier without multiarch reports null.
  const i = await fixture(t, { c: true });
  delete i.release.tiers.c[host].multiarch;
  assert.deepEqual((await provisionLean(i.main, { ...i.options, native: true })).cCompiler, { multiarch: null });
});

test('cached-only requests download nothing', async t => {
  const f = await fixture(t);
  await assert.rejects(provisionLean(f.main, { ...f.options, distribution: 'full', cachedOnly: true }), { code: 'ERR_LASM_NOT_CACHED', message: 'Not in the tool cache yet' });
  await assert.rejects(provisionLean(f.main, { ...f.options, modules: 'core', cachedOnly: true }), { code: 'ERR_LASM_NOT_CACHED' });
  assert.deepEqual(f.requests, []);
});

test('hosts without a distribution are refused with the catalog\'s explanation', async t => {
  const f = await fixture(t);
  const catalog = { ...f.catalog, lean: { '9.9.9': { commit: 'c', artifacts: {}, unavailable: { [host]: 'Use another machine.' } } } };
  await assert.rejects(provisionLean(f.main, { ...f.options, catalog }),
    { message: `Managed Lean 9.9.9 is not implemented for ${host}. Use another machine. This platform remains an implementation gap.` });
  await assert.rejects(provisionLean(f.main, { ...f.options, catalog: { ...f.catalog, lean: { '9.9.9': { commit: 'c', artifacts: {} } } } }),
    { message: `Managed Lean 9.9.9 is not implemented for ${host}. No matching native artifact is available. This platform remains an implementation gap.` });
  await assert.rejects(provisionLean(f.main, { ...f.options, platform: 'freebsd', arch: 'x64' }), /freebsd-x64, which is not supported/);
  assert.deepEqual(f.requests, []);
});

test('lean-toolchain pins: optional prefix and v, nearest first, directories as starting points', async t => {
  const f = await fixture(t);
  const catalog = { defaultLean: '9.9.9', lean: { '9.9.9': {}, '9.9.8': {} } };
  assert.deepEqual(await selectLeanVersion(f.main, catalog), { version: '9.9.9', pin: null });
  for (const text of ['leanprover/lean4:v9.9.8', 'v9.9.8', '9.9.8', '  9.9.8\n\n']) {
    await writeFile(join(f.project, 'lean-toolchain'), text);
    assert.deepEqual(await selectLeanVersion(f.main, catalog), { version: '9.9.8', pin: join(f.project, 'lean-toolchain') }, text);
    assert.deepEqual(await selectLeanVersion(f.project, catalog), { version: '9.9.8', pin: join(f.project, 'lean-toolchain') });
  }
  for (const text of ['leanprover/lean4:9.9.8x', 'xleanprover/lean4:v9.9.8', 'leanprover/lean4:v9.9', 'lean4:v9.9.8'])
    await writeFile(join(f.project, 'lean-toolchain'), text).then(() => assert.rejects(selectLeanVersion(f.main, catalog),
      { message: `Unsupported Lean toolchain ${JSON.stringify(text)} in ${join(f.project, 'lean-toolchain')}. Lasm supports Lean v9.9.9, v9.9.8; `
        + 'set lean-toolchain to leanprover/lean4:v9.9.9 or leanprover/lean4:v9.9.8. The project pin was not changed.' }));
  // A pin that cannot be read (here: a directory) is an error, not "no pin".
  await rm(join(f.project, 'lean-toolchain'));
  await mkdir(join(f.project, 'lean-toolchain'));
  await assert.rejects(selectLeanVersion(f.main, catalog), { code: 'EISDIR' });
});

test('tiered catalogs: each malformed field is refused', async t => {
  const f = await fixture(t, { c: true });
  const tiers = f.release.tiers;
  assert.equal(leanDistribution(f.release, host).kind, 'tiers');
  assert.equal(leanDistribution({ ...f.release, tiers: undefined }, host).kind, 'full');
  assert.equal(leanDistribution({ ...f.release, tiers: { ...tiers, bin: {} } }, host).kind, 'full');
  for (const change of [{ core: undefined }, { core: 'x' }, { extended: [] }, { extended: 'x' }, { extendedModules: undefined }, { extendedModules: [] },
    { extendedModules: 'Lean' }, { extendedModules: [7] }, { extendedModules: ['lean'] }, { extendedModules: ['Lean.Elab'] }, { extendedModules: ['Lean-x'] }])
    assert.throws(() => leanDistribution({ ...f.release, tiers: { ...tiers, ...change } }, host), { message: 'Invalid tiered Lean catalog entry' }, JSON.stringify(change));
  for (const multiarch of [undefined, null, 'aarch64-linux-gnu', 'x86_64-linux-gnu'])
    assert.equal(leanDistribution({ ...f.release, tiers: { ...tiers, c: { [host]: { ...f.cTier, multiarch } } } }, host).c.multiarch, multiarch);
  for (const multiarch of ['', 'x86_64-linux-musl', 'X86_64-linux-gnu', 'x86_64-linux-gnu-x', 'a/b-linux-gnu'])
    assert.throws(() => leanDistribution({ ...f.release, tiers: { ...tiers, c: { [host]: { ...f.cTier, multiarch } } } }, host), { message: 'Invalid tiered Lean catalog entry' }, multiarch);
  assert.throws(() => leanDistribution({ ...f.release, tiers: { ...tiers, c: { [host]: { ...f.cTier, sha256: 'x' } } } }, host), /Invalid managed artifact/);
  assert.throws(() => leanDistribution({ ...f.release, tiers: { ...tiers, extended: [{ ...tiers.extended[0], url: 'http://x' }] } }, host), /HTTPS/);
  assert.deepEqual(Object.keys(leanDistribution(f.release, host)), ['kind', 'bin', 'core', 'extended', 'extendedModules', 'c']);
  assert.deepEqual(Object.keys(leanDistribution({ ...f.release, tiers: { ...tiers, c: undefined } }, host)), ['kind', 'bin', 'core', 'extended', 'extendedModules']);
});

test('more pin forms: multi-digit versions; tiered catalogs need bin per host and string module roots', async t => {
  const f = await fixture(t, { c: true });
  const catalog = { defaultLean: '9.9.9', lean: { '9.9.9': {}, '10.11.12': {} } };
  for (const text of ['leanprover/lean4:v10.11.12', '10.11.12']) {
    await writeFile(join(f.project, 'lean-toolchain'), text);
    assert.equal((await selectLeanVersion(f.main, catalog)).version, '10.11.12', text);
  }
  const tiers = f.release.tiers;
  assert.equal(leanDistribution({ ...f.release, tiers: { ...tiers, bin: undefined } }, host).kind, 'full');
  assert.equal(leanDistribution({ commit: 'c', tiers: { ...tiers, bin: {} } }, host), null, 'no tiers and no artifacts for this host');
  assert.equal(leanDistribution({ commit: 'c' }, host), null);
  assert.throws(() => leanDistribution({ ...f.release, tiers: { ...tiers, extendedModules: ['Lean', 'lake'] } }, host), { message: 'Invalid tiered Lean catalog entry' });
});

test('assembled prefixes: conflicts are named, the library is compiled for its Lean release', async t => {
  const f = await fixture(t);
  const { assembleLeanPrefix } = await import('../src/managed-lean.mjs');
  const clash = { ...f.extended[0] };
  const stages = [];
  const options = { ...f.options, progress: event => stages.push(event.stage) };
  const twin = await tierArchive('lean-9.9.9-twin', { 'lib/lean/Core0.olean': 'other' });
  const fetch = async url => url === twin.artifact.url ? new Response(twin.bytes) : f.options.fetch(url);
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.core[0], label: 'a' }, { artifact: twin.artifact, label: 'b' }], { ...options, fetch }),
    { message: `Lean archives ${f.core[0].name} and ${twin.artifact.name} both contain lib/lean/Core0.olean` });
  void clash;
  await assembleLeanPrefix('4.35.0', f.release, [{ artifact: f.bin, label: 'bin' }], options);
  assert.ok(stages.includes("Compiling Lasm's Lean library for Lean 4.35.0"));
  stages.length = 0;
  await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }], options);
  assert.equal(stages.some(stage => /Compiling Lasm/.test(stage)), false);
});

test('macOS C tier without an SDK stops with the fix', { skip: process.platform === 'darwin' }, async t => {
  const f = await fixture(t, { c: true });
  const { assembleLeanPrefix } = await import('../src/managed-lean.mjs');
  const { macosSdkMissing } = await import('../src/application-sources.mjs');
  const saved = process.env.SDKROOT;
  process.env.SDKROOT = join(f.base, 'no-sdk');
  t.after(() => { if (saved === undefined) delete process.env.SDKROOT; else process.env.SDKROOT = saved; });
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: f.cTier, label: 'c' }], { ...f.options, platform: 'darwin' }),
    { message: macosSdkMissing });
  // Linux C tiers need no SDK.
  await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: f.cTier, label: 'c' }], { ...f.options, platform: 'linux' });
});

test('macOS C tier: the SDK stub is filtered into the prefix, checked for the requested architecture, or a shipped copy kept', { skip: !posix }, async t => {
  const f = await fixture(t);
  const { assembleLeanPrefix } = await import('../src/managed-lean.mjs');
  const sdk = join(f.base, 'MacOSX.sdk');
  await mkdir(join(sdk, 'usr/include'), { recursive: true }); await mkdir(join(sdk, 'usr/lib'), { recursive: true });
  await writeFile(join(sdk, 'usr/include/stdio.h'), '');
  await writeFile(join(sdk, 'usr/lib/libSystem.tbd'), '--- !tapi-tbd\ntargets: [ arm64-macos, arm64e.x1-macos ]\ninstall-name: /usr/lib/libSystem.B.dylib\n...\n');
  const saved = process.env.SDKROOT;
  process.env.SDKROOT = sdk;
  t.after(() => { if (saved === undefined) delete process.env.SDKROOT; else process.env.SDKROOT = saved; });
  const extra = [];
  const tier = async (name, files) => { const item = await tierArchive(name, files); extra.push(item); return item.artifact; };
  const fetch = async url => { const item = extra.find(x => x.artifact.url === url); return item ? new Response(item.bytes) : f.options.fetch(url); };
  const linker = `#!/usr/bin/env node
if (process.argv[2] !== '-arch' || process.argv[3] !== 'arm64') { console.error('linked for ' + process.argv[3]); process.exit(1); }
`;
  // No core tier: lib/ does not exist until the stub is written.
  const plain = await tier('lean-9.9.9-mac-c', { 'include/stdio.h': '' });
  const one = await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: plain, label: 'c' }], { ...f.options, fetch, platform: 'darwin', arch: 'arm64' });
  assert.equal(await readFile(join(one.directory, 'lib/libc/libSystem.tbd'), 'utf8'), '--- !tapi-tbd\ntargets: [ arm64-macos ]\ninstall-name: /usr/lib/libSystem.B.dylib\n...\n');
  const checked = await tier('lean-9.9.9-mac-linker-c', { 'bin/ld64.lld': linker });
  await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: checked, label: 'c' }], { ...f.options, fetch, platform: 'darwin', arch: 'arm64' });
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: checked, label: 'c' }], { ...f.options, cache: join(f.base, 'cache-x64'), fetch, platform: 'darwin', arch: 'x64' }),
    { message: `The macOS SDK at ${sdk} has a libSystem.tbd that Lean 9.9.9's linker (ld64.lld) cannot read: linked for x86_64. Set SDKROOT to another macOS SDK `
      + '(xcrun --show-sdk-path, or one under /Library/Developer/CommandLineTools/SDKs) and run again, or report this at https://github.com/Millillion/lasm/issues.' });
  const shipped = await tier('lean-9.9.9-shipped-c', { 'lib/libc/libSystem.tbd': 'shipped stub' });
  const kept = await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: shipped, label: 'c' }], { ...f.options, fetch, platform: 'darwin', arch: 'arm64' });
  assert.equal(await readFile(join(kept.directory, 'lib/libc/libSystem.tbd'), 'utf8'), 'shipped stub');
  // An unreadable SDK stub names the SDK.
  await writeFile(join(sdk, 'usr/lib/libSystem.tbd'), '--- !tapi-tbd\ninstall-name: /x\n');
  await assert.rejects(assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: plain, label: 'c' }], { ...f.options, fetch, platform: 'darwin', arch: 'arm64' }),
    error => error.message.startsWith(`The macOS SDK at ${sdk} has a libSystem.tbd that Lean 9.9.9's linker (ld64.lld) cannot read: Unsupported TAPI stub: no target or architecture list.`));
});

test('cached-only reuses an assembled prefix; explicit core ignores a lakefile; progress is optional', { skip: !posix }, async t => {
  const f = await fixture(t);
  await provisionLean(f.main, { ...f.options, modules: 'core' });
  const again = await provisionLean(f.main, { ...f.options, modules: 'core', cachedOnly: true });
  assert.equal(again.cacheHit, true);
  await writeFile(join(f.project, 'lakefile.toml'), 'name = "p"\n');
  assert.equal((await provisionLean(f.main, { ...f.options, modules: 'core' })).tier, 'core');
  await rm(join(f.project, 'lakefile.toml'));
  const { progress, ...quiet } = f.options; void progress;
  assert.equal((await provisionLean(f.main, quiet)).tier, 'core', 'auto, without a progress callback');
  const { assembleLeanPrefix } = await import('../src/managed-lean.mjs');
  await assembleLeanPrefix('4.35.0', f.release, [{ artifact: f.bin, label: 'bin' }], quiet);
  const g = await fixture(t);
  await provisionLean(g.main, { ...g.options, distribution: 'full' });
  assert.ok(g.stages.includes('Downloading Lean 9.9.9 and Lake'));
});

test('a C tier that ships other files in lib/libc still gets the SDK stub', { skip: !posix || process.platform === 'darwin' }, async t => {
  const f = await fixture(t);
  const { assembleLeanPrefix } = await import('../src/managed-lean.mjs');
  const sdk = join(f.base, 'MacOSX.sdk');
  await mkdir(join(sdk, 'usr/include'), { recursive: true }); await mkdir(join(sdk, 'usr/lib'), { recursive: true });
  await writeFile(join(sdk, 'usr/include/stdio.h'), '');
  await writeFile(join(sdk, 'usr/lib/libSystem.tbd'), '--- !tapi-tbd\ntargets: [ arm64-macos ]\ninstall-name: /usr/lib/libSystem.B.dylib\n...\n');
  const saved = process.env.SDKROOT;
  process.env.SDKROOT = sdk;
  t.after(() => { if (saved === undefined) delete process.env.SDKROOT; else process.env.SDKROOT = saved; });
  const other = await tierArchive('lean-9.9.9-other-c', { 'lib/libc/libc.tbd': 'other stub' });
  const fetch = async url => url === other.artifact.url ? new Response(other.bytes) : f.options.fetch(url);
  const prefix = await assembleLeanPrefix('9.9.9', f.release, [{ artifact: f.bin, label: 'bin' }, { artifact: other.artifact, label: 'c' }], { ...f.options, fetch, platform: 'darwin', arch: 'arm64' });
  assert.match(await readFile(join(prefix.directory, 'lib/libc/libSystem.tbd'), 'utf8'), /arm64-macos/);
  assert.equal(await readFile(join(prefix.directory, 'lib/libc/libc.tbd'), 'utf8'), 'other stub');
});
