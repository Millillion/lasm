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
