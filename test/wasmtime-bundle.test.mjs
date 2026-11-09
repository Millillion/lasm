import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, rm, cp, symlink, rename } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createHash } from 'node:crypto';
import { wasmtimeBundleFiles, verifyWasmtimeBundle, packagedWasmtimeBundle } from '../src/wasmtime-bundle.mjs';
import { wasmtimeCpuTarget } from '../src/wasmtime-artifact.mjs';

const hash = value => createHash('sha256').update(value).digest('hex');
const platform = { platform: 'linux', arch: 'x64' };
async function fixture(t) {
  const root = await mkdtemp(join(tmpdir(), 'lasm-wasmtime-bundle-'));
  t.after(() => rm(root, { recursive: true, force: true }));
  const directory = join(root, 'original'); await mkdir(directory);
  const manifest = { schema: 1, backend: 'wasmtime-49.0.0', ...platform,
    cpuTarget: wasmtimeCpuTarget, cpuFeatures: 'baseline', files: {} };
  for (const name of wasmtimeBundleFiles) {
    const bytes = Buffer.from('synthetic unit fixture: ' + name);
    await writeFile(join(directory, name), bytes);
    manifest.files[name] = { bytes: bytes.length, sha256: hash(bytes) };
  }
  const expected = {};
  const save = async () => {
    const text = JSON.stringify(manifest) + '\n';
    await writeFile(join(directory, 'manifest.json'), text); expected.manifestSha256 = hash(text);
  };
  await save(); return { root, directory, manifest, expected, save };
}

test('an authenticated bundle is portable without its original directory', async t => {
  const { root, directory, expected } = await fixture(t);
  const deployed = join(root, 'copied bundle λ'); await cp(directory, deployed, { recursive: true });
  await rm(directory, { recursive: true });
  const bundle = await verifyWasmtimeBundle(deployed, expected, platform);
  assert.equal(bundle.directory, deployed); assert.equal(bundle.identity, expected.manifestSha256);
});

test('a replaced manifest cannot authorize changed native code', async t => {
  const { directory, manifest, expected } = await fixture(t);
  await writeFile(join(directory, 'compiler.so'), 'changed');
  manifest.files['compiler.so'] = { bytes: 7, sha256: hash('changed') };
  await writeFile(join(directory, 'manifest.json'), JSON.stringify(manifest));
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /release catalog/);
});

test('missing and changed native files fail before loading', async t => {
  const { directory, expected } = await fixture(t);
  const file = join(directory, 'compiler.so'); await writeFile(file, 'changed');
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /file changed/);
  await rm(file);
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /missing or unrecorded/);
});

test('an authenticated bundle for another platform or CPU configuration is rejected', async t => {
  const { directory, expected, manifest, save } = await fixture(t);
  for (const changes of [{ platform: 'darwin' }, { arch: 'arm64' }, { cpuTarget: 'native' },
    { cpuFeatures: 'build-host' }, { backend: 'wasmtime-48.0.0' }]) {
    const previous = structuredClone(manifest); Object.assign(manifest, changes); await save();
    await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /configuration/);
    Object.assign(manifest, previous);
  }
  await assert.rejects(verifyWasmtimeBundle(directory, expected, { platform: 'win32', arch: 'arm64' }), /not implemented/);
});

test('unrecorded native inputs and redirected file records cannot join a bundle', async t => {
  const { directory, expected, manifest, save } = await fixture(t);
  await writeFile(join(directory, 'extra.so'), 'extra');
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /missing or unrecorded/);
  await rm(join(directory, 'extra.so'));
  manifest.files['../outside.so'] = manifest.files['compiler.so']; await save();
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /missing or unrecorded/);
});

test('native files may not depend on links back to build inputs', async t => {
  const { root, directory, expected } = await fixture(t);
  const inside = join(directory, 'compiler.so'), outside = join(root, 'compiler.so');
  await rename(inside, outside); await symlink(outside, inside);
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /link or special file/);
});

test('the package catalog distinguishes an unsupported platform from a damaged bundle', async t => {
  const { directory, expected } = await fixture(t);
  const catalog = { schema: 1, platforms: { 'linux-x64': expected } };
  assert.equal(await packagedWasmtimeBundle({ catalog, platform: 'darwin', arch: 'arm64' }), null);
  assert.equal((await packagedWasmtimeBundle({ catalog, directory, ...platform })).identity, expected.manifestSha256);
  await rm(join(directory, 'instance.so'));
  await assert.rejects(packagedWasmtimeBundle({ catalog, directory, ...platform }), /missing or unrecorded/);
  await assert.rejects(packagedWasmtimeBundle({ catalog: { schema: 2, platforms: {} }, ...platform }), /Invalid.*catalog/);
});

// Each check of the bundle on its own (docs/TESTING.md#mutation-testing).
test('bundle checks: platform, catalog identity, configuration and every file record', async t => {
  const { directory, expected, manifest, save } = await fixture(t);
  for (const [p, a] of [['linux', 'arm64'], ['darwin', 'x64']])
    await assert.rejects(verifyWasmtimeBundle(directory, expected, { platform: p, arch: a }), { message: `A Wasmtime native bundle is not implemented for ${p}-${a}` });
  for (const identity of [undefined, {}, { manifestSha256: 'x' + expected.manifestSha256 }, { manifestSha256: expected.manifestSha256 + 'x' },
    { manifestSha256: expected.manifestSha256.toUpperCase() }, { manifestSha256: '0'.repeat(64) }])
    await assert.rejects(verifyWasmtimeBundle(directory, identity, platform), { message: 'Wasmtime native bundle manifest differs from its release catalog' });
  for (const changes of [{ schema: 2 }, { schema: '1' }])
    { const previous = structuredClone(manifest); Object.assign(manifest, changes); await save();
      await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), { message: 'Wasmtime native bundle configuration does not match the current platform' });
      Object.assign(manifest, previous); }
  await save();
  const record = manifest.files['compiler.so'];
  for (const [value, why] of [[undefined, 'missing'], [{ ...record, bytes: 0 }, 'empty'], [{ ...record, bytes: String(record.bytes) }, 'text size'],
    [{ ...record, bytes: record.bytes + 1 }, 'other size'], [{ ...record, sha256: 'x' + record.sha256.slice(1) }, 'not hex'], [{ ...record, sha256: record.sha256 + '0' }, 'long'],
    [{ ...record, sha256: '0' + record.sha256 }, 'long prefix']]) {
    manifest.files['compiler.so'] = value; await save();
    await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), /Wasmtime native bundle (file changed: compiler\.so|contains missing or unrecorded files)/, why);
  }
  // An empty file is not a native file, even with its true size and hash.
  await writeFile(join(directory, 'compiler.so'), '');
  manifest.files['compiler.so'] = { bytes: 0, sha256: hash('') }; await save();
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform), { message: 'Wasmtime native bundle file changed: compiler.so' });
  // A one-byte file is a valid record.
  await writeFile(join(directory, 'compiler.so'), 'x');
  manifest.files['compiler.so'] = { bytes: 1, sha256: hash('x') }; await save();
  assert.equal((await verifyWasmtimeBundle(directory, expected, platform)).manifest.files['compiler.so'].bytes, 1);
  // The manifest must be a file.
  await rm(join(directory, 'manifest.json'));
  await mkdir(join(directory, 'manifest.json'));
  await assert.rejects(verifyWasmtimeBundle(directory, expected, platform));
});

test('packaged bundles: the catalog\'s shape, the platform it names and the default directory', async t => {
  const { directory, expected } = await fixture(t);
  for (const catalog of [{ schema: 1 }, { schema: 1, platforms: 'linux-x64' }, { schema: 1, platforms: [expected] }, { schema: 1, platforms: null }, { platforms: {} }])
    await assert.rejects(packagedWasmtimeBundle({ catalog, ...platform }), { message: 'Invalid Wasmtime native bundle catalog' }, JSON.stringify(catalog));
  // The named platform is the one verified, not this process's.
  const catalog = { schema: 1, platforms: { 'darwin-x64': expected, 'linux-x64': expected } };
  await assert.rejects(packagedWasmtimeBundle({ catalog, directory, platform: 'darwin', arch: 'x64' }), /not implemented for darwin-x64/);
  assert.equal(await packagedWasmtimeBundle({ catalog, directory, platform: 'linux', arch: 'arm64' }), null);
  // Without a directory: the one in the package, which a checkout does not have.
  await assert.rejects(packagedWasmtimeBundle({ catalog, ...platform }), { code: 'ENOENT' });
  // The package's own catalog.
  const shipped = await packagedWasmtimeBundle({ platform: 'freebsd', arch: 'x64' });
  assert.equal(shipped, null);
  const ownCatalog = JSON.parse(await (await import('node:fs/promises')).readFile(new URL('../src/wasmtime-bundles.json', import.meta.url), 'utf8'));
  assert.equal(ownCatalog.schema, 1);
  // This process's platform by default.
  const here = { schema: 1, platforms: { [`${process.platform}-${process.arch}`]: expected } };
  const result = await packagedWasmtimeBundle({ catalog: here, directory }).catch(error => error);
  if (process.platform === 'linux' && process.arch === 'x64') assert.equal(result.identity, expected.manifestSha256);
  else assert.match(result.message, /not implemented/);
});
