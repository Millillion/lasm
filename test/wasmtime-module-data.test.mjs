import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, rm, rename, symlink } from 'node:fs/promises';
import { join, dirname, delimiter } from 'node:path';
import { tmpdir } from 'node:os';
import { pathToFileURL } from 'node:url';
import { createHash } from 'node:crypto';
import { wasmtimeModuleData } from '../src/wasmtime-module-data.mjs';
import { copyApplicationMetadata } from '../src/application-metadata.mjs';
import { prepareApplicationMetadata } from '../src/application-metadata-runtime.mjs';

const hash = bytes => createHash('sha256').update(bytes).digest('hex');
async function fixture(t) {
  const root = await mkdtemp(join(tmpdir(), 'lasm-wasmtime-data-'));
  t.after(() => rm(root, { recursive: true, force: true }));
  const dist = join(root, 'original'), files = [];
  for (const [path, contents] of [
    ['lib/lean/Init.olean', 'standard'], ['lib/lean/Lean.olean.private', 'private'],
    ['lib/lean/Lean.olean.server', 'server'], ['lib/lean/Lean.ir', 'interpreter'],
    ['lib/lean/Lean.ir.sig', 'signatures'], ['packages/0/Same.olean', 'project'],
    ['packages/1/Same.olean', 'dependency'],
  ]) {
    const file = join(dist, 'lean', path); await mkdir(dirname(file), { recursive: true });
    await writeFile(file, contents); files.push({ path, bytes: Buffer.byteLength(contents), sha256: hash(contents) });
  }
  const manifest = { schema: 1, lean: '4.34.1', leanCommit: 'test commit', roots: ['packages/0', 'packages/1'],
    files, bytes: files.reduce((sum, file) => sum + file.bytes, 0) };
  const build = { lean: manifest.lean, leanCommit: manifest.leanCommit };
  const save = async () => {
    build.moduleDataIdentity = hash(JSON.stringify(manifest)); build.moduleDataBytes = manifest.bytes;
    await writeFile(join(dist, 'lean/metadata.json'), JSON.stringify(manifest) + '\n');
  };
  await save(); return { root, dist, manifest, build, save };
}

test('verified module data relocates with IR companions and project search precedence', async t => {
  const { root, dist, build } = await fixture(t);
  const metadata = await wasmtimeModuleData(dist, build);
  assert.equal(metadata.identity, build.moduleDataIdentity);
  const output = join(root, 'deployment space λ'); await copyApplicationMetadata(metadata, output);
  await rm(dist, { recursive: true });
  const env = {}; prepareApplicationMetadata(pathToFileURL(join(output, 'main.mjs')), env);
  assert.deepEqual(env.LEAN_PATH.split(delimiter), ['packages/0', 'packages/1', 'lib/lean'].map(path => join(output, 'lean', path)));
  for (const file of metadata.files)
    assert.equal(hash(await readFile(join(output, 'lean', file.path))), file.sha256);
  assert.equal(await readFile(join(output, 'lean/packages/0/Same.olean'), 'utf8'), 'project');
  assert.equal(await readFile(join(output, 'lean/packages/1/Same.olean'), 'utf8'), 'dependency');
  assert.equal((await wasmtimeModuleData(output, build)).identity, build.moduleDataIdentity);
});

test('data required by the compiled application cannot be silently omitted', async t => {
  const { dist, build } = await fixture(t);
  assert.equal(await wasmtimeModuleData(dist, { lean: build.lean }), null);
  await assert.rejects(wasmtimeModuleData(dist, { moduleDataBytes: 1 }), /needs a build identity/);
  await rm(join(dist, 'lean'), { recursive: true });
  await assert.rejects(wasmtimeModuleData(dist, build), { code: 'ENOENT' });
});

test('different manifest identities and Lean releases are rejected', async t => {
  const { dist, build, manifest, save } = await fixture(t);
  await assert.rejects(wasmtimeModuleData(dist, { ...build, moduleDataIdentity: '0'.repeat(64) }), /compiled application identity/);
  manifest.lean = '4.34.0'; await save();
  await assert.rejects(wasmtimeModuleData(dist, build), /different Lean release/);
  manifest.lean = build.lean; manifest.leanCommit = 'different'; await save();
  await assert.rejects(wasmtimeModuleData(dist, build), /different Lean commit/);
});

test('modified bytes, missing files and unrecorded files fail verification', async t => {
  const { dist, build } = await fixture(t);
  const file = join(dist, 'lean/lib/lean/Init.olean');
  await writeFile(file, 'modified');
  await assert.rejects(wasmtimeModuleData(dist, build), /file changed/);
  await rm(file);
  await assert.rejects(wasmtimeModuleData(dist, build), /recorded inventory/);
  await writeFile(file, 'standard'); await writeFile(join(dist, 'lean/unrecorded'), 'extra');
  await assert.rejects(wasmtimeModuleData(dist, build), /recorded inventory/);
});

test('a file changing after verification is caught during materialization', async t => {
  const { root, dist, build } = await fixture(t);
  const metadata = await wasmtimeModuleData(dist, build);
  await writeFile(join(dist, 'lean/packages/0/Same.olean'), 'changed after verification');
  await assert.rejects(copyApplicationMetadata(metadata, join(root, 'output')), /changed during the build/);
});

test('manifest paths, duplicate records and incorrect lengths cannot redirect a copy', async t => {
  const { dist, build, manifest, save } = await fixture(t);
  const original = structuredClone(manifest);
  for (const path of ['../escape.olean', '/outside.olean', 'lib/lean/../escape.olean',
    'lib/lean\\escape.olean', 'packages/2/Absent.olean', 'lib/lean/native.so']) {
    manifest.files[0].path = path; await save();
    await assert.rejects(wasmtimeModuleData(dist, build), /Invalid module-data file path/);
  }
  Object.assign(manifest, structuredClone(original)); manifest.files.push(manifest.files[0]); await save();
  await assert.rejects(wasmtimeModuleData(dist, build), /Duplicate module-data/);
  Object.assign(manifest, structuredClone(original)); manifest.files[0].bytes++; manifest.bytes++; await save();
  await assert.rejects(wasmtimeModuleData(dist, build), /size changed/);
});

test('linked files cannot become deployment dependencies', async t => {
  const { root, dist, build } = await fixture(t);
  const file = join(dist, 'lean/lib/lean/Init.olean'), outside = join(root, 'outside.olean');
  await rename(file, outside); await symlink(outside, file);
  await assert.rejects(wasmtimeModuleData(dist, build), /link or special file/);
});

test('untrusted source fields cannot override the verified inventory location', async t => {
  const { dist, build, manifest, save } = await fixture(t);
  manifest.files[0].source = '/outside/build.olean'; await save();
  const metadata = await wasmtimeModuleData(dist, build);
  assert.equal(metadata.files[0].source, join(dist, 'lean', manifest.files[0].path));
});

// Each check of the module data on its own (docs/TESTING.md#mutation-testing).
test('module-data checks: identity form, manifest file, schema, roots, records and totals', async t => {
  const { dist, build, manifest, save } = await fixture(t);
  const original = structuredClone(manifest);
  const reset = async () => { for (const key of Object.keys(manifest)) delete manifest[key]; Object.assign(manifest, structuredClone(original)); await save(); };
  for (const identity of ['x' + build.moduleDataIdentity.slice(1), build.moduleDataIdentity + '0', '0' + build.moduleDataIdentity, build.moduleDataIdentity.toUpperCase()])
    await assert.rejects(wasmtimeModuleData(dist, { ...build, moduleDataIdentity: identity }), { code: 'ERR_ASSERTION' }, identity);
  const rejects = async (change, message) => { await reset(); change(manifest); await save(); await assert.rejects(wasmtimeModuleData(dist, build), message); };
  await rejects(m => { m.schema = 2; }, { code: 'ERR_ASSERTION', actual: 2, expected: 1 });
  await rejects(m => { m.roots = ['packages/1', 'packages/0']; }, { message: 'Module-data search roots must retain their generated order' });
  await rejects(m => { m.roots = ['packages/0', 'packages/0']; }, { message: 'Module-data search roots must retain their generated order' });
  await rejects(m => { m.roots = 'packages/0'; }, { message: 'Module-data search roots must retain their generated order' });
  await rejects(m => { m.files = []; m.bytes = 0; }, { code: 'ERR_ASSERTION' });
  await rejects(m => { m.files = { length: 1 }; }, { code: 'ERR_ASSERTION' });
  for (const path of [7, 'lib/lean/./Init.olean', 'lib/lean//Init.olean', 'lib/lean/Init.olean\0', 'lib/leanx/Init.olean', 'lib/lean/Init.olean.bak',
    'lib/lean/Init.ileanx', 'xlib/lean/Init.olean', 'lib/lean/Init.oleanx.private'])
    await rejects(m => { m.files[0].path = path; }, { message: 'Invalid module-data file path' });
  for (const path of ['lib/lean/Init.ilean', 'packages/1/Same.ir.sig']) {
    await reset(); manifest.files.push({ path, bytes: 0, sha256: hash('') }); await save();
    await assert.rejects(wasmtimeModuleData(dist, build), /recorded inventory/, 'a valid path that is not there');
  }
  await rejects(m => { m.files[1].bytes = -1; m.bytes -= m.files[1].bytes + 1; }, { code: 'ERR_ASSERTION' });
  await rejects(m => { m.files[1].bytes = 1.5; }, { code: 'ERR_ASSERTION' });
  for (const sha256 of ['x' + original.files[1].sha256.slice(1), original.files[1].sha256 + '0', '0' + original.files[1].sha256])
    await rejects(m => { m.files[1].sha256 = sha256; }, { code: 'ERR_ASSERTION' });
  await rejects(m => { m.files[1].bytes = Number.MAX_SAFE_INTEGER; }, { code: 'ERR_ASSERTION' });
  await rejects(m => { m.files.splice(0, 1); m.bytes = m.files.reduce((n, f) => n + f.bytes, 0); }, { message: 'Standard module data must include Init' });
  await rejects(m => { m.bytes += 1; }, { code: 'ERR_ASSERTION' });
  // The build's own total must agree too.
  await reset();
  await assert.rejects(wasmtimeModuleData(dist, { ...build, moduleDataBytes: build.moduleDataBytes + 1 }), { code: 'ERR_ASSERTION' });
  // A directory in place of the manifest.
  await rm(join(dist, 'lean/metadata.json'));
  await mkdir(join(dist, 'lean/metadata.json'));
  await assert.rejects(wasmtimeModuleData(dist, build), { message: 'Module-data manifest must be an ordinary file' });
});

test('module-data: the result lists every file with its source, path, size and hash', async t => {
  const { dist, build, manifest } = await fixture(t);
  const data = await wasmtimeModuleData(dist, build);
  assert.deepEqual(data.files, manifest.files.map(f => ({ source: join(dist, 'lean', f.path), path: f.path, bytes: f.bytes, sha256: f.sha256 })));
  assert.deepEqual(data.manifest, manifest);
  assert.equal(await wasmtimeModuleData(dist, { moduleDataIdentity: undefined }), null);
});
