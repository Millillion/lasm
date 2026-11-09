import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, rm, symlink, readFile, readdir } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { hashFile } from '../src/managed-artifacts.mjs';
import { verifyApplicationRuntime, applicationRuntime, applicationRuntimeCatalog } from '../src/application-runtime.mjs';

async function fixture(t) {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-application-runtime-'));
  t.after(() => rm(directory, { recursive: true, force: true }));
  const files = {};
  for (const name of ['include/lean/lean.h', 'lib/runtime.a', 'exports.json', 'THIRD_PARTY_NOTICES.txt']) {
    const file = join(directory, name);
    await mkdir(join(file, '..'), { recursive: true });
    await writeFile(file, 'verified'); files[name] = { bytes: 8, sha256: await hashFile(file) };
  }
  await writeFile(join(directory, 'target.json'), JSON.stringify({ schema: 1, name: 'fixture', memoryLayout: 'wasm64',
    threading: 'pthreads', allocator: 'mimalloc', applicationSymbolHook: 'lasm_lookup_application_symbol',
    libraries: ['lib/runtime.a'], files }));
  return { directory, expected: { name: 'fixture', manifestSha256: await hashFile(join(directory, 'target.json')) } };
}

test('application bundle verifies every file on each use', async t => {
  const { directory, expected } = await fixture(t);
  assert.equal((await verifyApplicationRuntime(directory, expected)).identity, expected.manifestSha256);
  await writeFile(join(directory, 'lib/runtime.a'), 'modified');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /integrity/);
});

test('application bundle cannot replace its manifest with a self-consistent forgery', async t => {
  const { directory, expected } = await fixture(t);
  await writeFile(join(directory, 'target.json'), '{}');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /release catalog/);
});

test('missing and extra application bundle inputs are rejected', async t => {
  const { directory, expected } = await fixture(t);
  await writeFile(join(directory, 'unexpected'), 'extra');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /integrity/);
  await rm(join(directory, 'unexpected')); await rm(join(directory, 'lib/runtime.a'));
  await assert.rejects(verifyApplicationRuntime(directory, expected), /missing/);
});

test('bundle symlinks cannot redirect a verified input', async t => {
  const { directory, expected } = await fixture(t);
  await symlink(join(directory, 'lib'), join(directory, 'alias'), process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(verifyApplicationRuntime(directory, expected), /links and special files/);
});

// A fixture whose manifest is rewritten by `change`; the expected catalog entry follows it.
async function rewritten(t, change) {
  const { directory } = await fixture(t);
  const manifestFile = join(directory, 'target.json');
  const manifest = JSON.parse(await readFile(manifestFile, 'utf8'));
  await change(manifest, directory);
  await writeFile(manifestFile, JSON.stringify(manifest));
  return { directory, expected: { name: 'fixture', manifestSha256: await hashFile(manifestFile) } };
}

test('a runtime manifest of another layout, threading, allocator or symbol hook is refused', async t => {
  for (const [key, value] of [['schema', 2], ['name', 'other'], ['memoryLayout', 'wasm32'], ['threading', 'none'],
    ['allocator', 'dlmalloc'], ['applicationSymbolHook', 'other_hook']]) {
    const { directory, expected } = await rewritten(t, manifest => { manifest[key] = value; });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Unsupported application runtime manifest' }, key);
  }
});

test('manifest file names that are absolute, Windows-style or leave the bundle are refused', async t => {
  for (const name of ['/etc/passwd', 'lib\\runtime.a', 'lib//runtime.a', './lib', 'lib/../x', 'lib/.', '..']) {
    const { directory, expected } = await rewritten(t, manifest => { manifest.files[name] = { bytes: 0, sha256: '' }; });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Invalid application runtime file path' }, name);
  }
});

test('a file of the recorded hash but another size, or of the recorded size but another hash, fails integrity', async t => {
  {
    const { directory, expected } = await rewritten(t, manifest => { manifest.files['lib/runtime.a'].bytes = 9; });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Application runtime integrity check failed: lib/runtime.a' });
  }
  {
    const { directory, expected } = await rewritten(t, manifest => { manifest.files['exports.json'].sha256 = '0'.repeat(64); });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Application runtime integrity check failed: exports.json' });
  }
});

test('every library, the exports, the header and the notices must be verified inputs', async t => {
  {
    const { directory, expected } = await rewritten(t, manifest => { manifest.libraries.push('lib/unlisted.a'); });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Unverified application runtime input: lib/unlisted.a' });
  }
  for (const name of ['exports.json', 'include/lean/lean.h', 'THIRD_PARTY_NOTICES.txt']) {
    const { directory, expected } = await rewritten(t, async (manifest, directory) => {
      delete manifest.files[name]; await rm(join(directory, name));
    });
    await assert.rejects(verifyApplicationRuntime(directory, expected), { message: `Unverified application runtime input: ${name}` });
  }
});

test('missing files are all named; a bundle that is not a directory, or whose manifest is not a file, is refused', async t => {
  const { directory, expected } = await fixture(t);
  await rm(join(directory, 'exports.json')); await rm(join(directory, 'lib/runtime.a'));
  await assert.rejects(verifyApplicationRuntime(directory, expected), { message: 'Application runtime files missing: lib/runtime.a, exports.json' });
  const file = join(directory, 'THIRD_PARTY_NOTICES.txt');
  await assert.rejects(verifyApplicationRuntime(file, expected), { message: 'Application runtime must be an ordinary directory' });
  const other = await mkdtemp(join(tmpdir(), 'lasm-application-runtime-dir-'));
  t.after(() => rm(other, { recursive: true, force: true }));
  await mkdir(join(other, 'target.json'));
  await assert.rejects(verifyApplicationRuntime(other, expected), { message: 'Application runtime manifest does not match its release catalog' });
});

test('a verified runtime reports its resolved directory, manifest and identity, and records the verification', async t => {
  const { directory, expected } = await fixture(t);
  const stamps = await mkdtemp(join(tmpdir(), 'lasm-application-runtime-stamps-'));
  t.after(() => rm(stamps, { recursive: true, force: true }));
  const runtime = await verifyApplicationRuntime(join(directory, 'lib', '..'), expected, { stamps });
  assert.equal(runtime.directory, directory);
  assert.equal(runtime.manifest.name, 'fixture');
  assert.deepEqual(runtime.manifest.libraries, ['lib/runtime.a']);
  assert.equal(runtime.identity, expected.manifestSha256);
  assert.equal((await readdir(stamps)).filter(name => name.endsWith('.json')).length, 1);
});

test('applicationRuntime: the catalog entry of the Lean release, a missing bundle and a mismatched Lean', async t => {
  const { directory, expected } = await rewritten(t, manifest => { manifest.lean = '4.35.0'; manifest.leanCommit = 'abc'; });
  const catalog = { lean: { '4.35.0': expected } };
  const lean = { version: '4.35.0', commit: 'abc' };
  const runtime = await applicationRuntime(lean, { catalog, directory });
  assert.equal(runtime.identity, expected.manifestSha256);
  await assert.rejects(applicationRuntime({ version: '4.1.0', commit: 'abc' }, { catalog, directory }),
    { message: 'No application runtime is implemented for Lean 4.1.0' });
  await assert.rejects(applicationRuntime({ version: '4.35.0', commit: 'def' }, { catalog, directory }),
    { message: 'Native Lean and the application runtime do not match' });
  await assert.rejects(applicationRuntime({ version: '4.35.0', commit: 'abc' }, { catalog: { lean: { '4.35.0': { ...expected } } }, directory: join(directory, 'absent') }),
    error => error.message === 'The Lean 4.35.0 application runtime bundle is missing. Install the complete Lasm package. Maintainers can supply LASM_APPLICATION_RUNTIME.'
      && error.cause?.code === 'ENOENT');
  // Without a directory: LASM_APPLICATION_RUNTIME, else the package's targets/<name>.
  const saved = process.env.LASM_APPLICATION_RUNTIME;
  try {
    process.env.LASM_APPLICATION_RUNTIME = directory;
    assert.equal((await applicationRuntime(lean, { catalog })).directory, directory);
    delete process.env.LASM_APPLICATION_RUNTIME;
    await assert.rejects(applicationRuntime(lean, { catalog: { lean: { '4.35.0': { ...expected, name: 'no-such-runtime-target' } } } }),
      /application runtime bundle is missing/);
  } finally { if (saved === undefined) delete process.env.LASM_APPLICATION_RUNTIME; else process.env.LASM_APPLICATION_RUNTIME = saved; }
  // A real catalog lists every supported Lean release with a manifest digest.
  for (const entry of Object.values(applicationRuntimeCatalog.lean)) assert.match(entry.manifestSha256, /^[0-9a-f]{64}$/);
});

test('applicationRuntime passes verification failures on unchanged, records verifications, and checks the manifest\'s Lean release', async t => {
  const { directory, expected } = await rewritten(t, manifest => { manifest.lean = '4.34.0'; manifest.leanCommit = 'abc'; manifest.allocator = 'other'; });
  await assert.rejects(applicationRuntime({ version: '4.35.0', commit: 'abc' }, { catalog: { lean: { '4.35.0': expected } }, directory }),
    { message: 'Unsupported application runtime manifest' });
  const good = await rewritten(t, manifest => { manifest.lean = '4.34.0'; manifest.leanCommit = 'abc'; });
  await assert.rejects(applicationRuntime({ version: '4.35.0', commit: 'abc' }, { catalog: { lean: { '4.35.0': good.expected } }, directory: good.directory }),
    { message: 'Native Lean and the application runtime do not match' });
  const stamps = await mkdtemp(join(tmpdir(), 'lasm-application-runtime-stamps-'));
  t.after(() => rm(stamps, { recursive: true, force: true }));
  await applicationRuntime({ version: '4.34.0', commit: 'abc' }, { catalog: { lean: { '4.34.0': good.expected } }, directory: good.directory, stamps });
  assert.equal((await readdir(stamps)).length, 1);
});
