import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, cp, rm, access, rename, symlink } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join, dirname } from 'node:path';
import { createHash } from 'node:crypto';
import { reclaimBuildMetadata, reclaimApplicationBuildMetadata } from '../scripts/application-tests/reclaim-metadata.mjs';

async function fixture(t) {
  const root = await mkdtemp(join(tmpdir(), 'lasm-metadata-reclamation-'));
  t.after(() => rm(root, { recursive: true, force: true }));
  const project = join(root, 'source'), deployment = join(root, 'deployment');
  const key = 'a'.repeat(16), signature = 'b'.repeat(64);
  const cached = join(project, '.lake/lasm/applications', key, signature, 'dist/lean');
  await mkdir(join(cached, 'lib/lean'), { recursive: true });
  await writeFile(join(project, 'Main.lean'), 'source must stay');
  await writeFile(join(cached, 'lib/lean/Init.olean'), 'module data');
  await writeFile(join(cached, 'metadata.json'), JSON.stringify({ schema: 1, bytes: 11 }));
  await mkdir(deployment); await cp(cached, join(deployment, 'lean'), { recursive: true });
  return { root, project, deployment, key, signature, cached };
}

test('verified duplicate reclamation preserves deployed data and project sources', async t => {
  const f = await fixture(t);
  const result = await reclaimBuildMetadata(f.project, f.key, f.signature, f.deployment);
  assert.equal(result.files, 2); assert.equal(result.metadataBytes, 11);
  await assert.rejects(access(f.cached), { code: 'ENOENT' });
  assert.equal(await readFile(join(f.deployment, 'lean/lib/lean/Init.olean'), 'utf8'), 'module data');
  assert.equal(await readFile(join(f.project, 'Main.lean'), 'utf8'), 'source must stay');
});

test('a changed generated copy is preserved with its diagnostics', async t => {
  const f = await fixture(t);
  await writeFile(join(f.cached, 'lib/lean/Init.olean'), 'changed');
  await assert.rejects(reclaimBuildMetadata(f.project, f.key, f.signature, f.deployment), /copies differ/);
  assert.equal(await readFile(join(f.cached, 'lib/lean/Init.olean'), 'utf8'), 'changed');
});

test('cache links cannot redirect reclamation into another directory', async t => {
  const f = await fixture(t), outside = join(f.root, 'outside');
  await rename(f.cached, outside);
  await symlink(outside, f.cached, process.platform === 'win32' ? 'junction' : 'dir');
  await assert.rejects(reclaimBuildMetadata(f.project, f.key, f.signature, f.deployment), /cache-directory links/);
  assert.equal(await readFile(join(outside, 'lib/lean/Init.olean'), 'utf8'), 'module data');
});

async function buildFixture(t, nested = false) {
  const f = await fixture(t);
  f.source = join(f.project, ...(nested ? ['Sub'] : []), 'Main.lean');
  if (nested) {
    await mkdir(dirname(f.source));
    await writeFile(join(f.project, 'lakefile.toml'), 'name = "ordinary_project"\n');
    await writeFile(f.source, 'nested source must stay');
  }
  const key = createHash('sha256').update(f.source).digest('hex').slice(0, 16);
  const location = join(f.project, '.lake/lasm/applications', key);
  await rename(join(f.project, '.lake/lasm/applications', f.key), location);
  f.cached = join(location, f.signature, 'dist/lean');
  const metadata = JSON.parse(await readFile(join(f.deployment, 'lean/metadata.json')));
  f.build = { signature: f.signature, moduleDataBytes: metadata.bytes,
    moduleDataIdentity: createHash('sha256').update(JSON.stringify(metadata)).digest('hex') };
  await writeFile(join(f.deployment, 'build-info.json'), JSON.stringify(f.build));
  return f;
}

test('completed standalone and nested Lake builds select their actual cache and preserve deployment', async t => {
  for (const nested of [false, true]) {
    const f = await buildFixture(t, nested);
    const result = await reclaimApplicationBuildMetadata(f.source, f.deployment);
    assert.equal(result.removed, f.cached);
    await assert.rejects(access(f.cached), { code: 'ENOENT' });
    assert.equal(await readFile(join(f.deployment, 'lean/lib/lean/Init.olean'), 'utf8'), 'module data');
    assert.equal(await readFile(f.source, 'utf8'), nested ? 'nested source must stay' : 'source must stay');
  }
});

test('even matching metadata copies cannot replace a different recorded build identity', async t => {
  const f = await buildFixture(t);
  await writeFile(join(f.deployment, 'build-info.json'), JSON.stringify({ ...f.build, moduleDataIdentity: '0'.repeat(64) }));
  await assert.rejects(reclaimApplicationBuildMetadata(f.source, f.deployment), /recorded build identity/);
  assert.equal(await readFile(join(f.cached, 'lib/lean/Init.olean'), 'utf8'), 'module data');
});

test('builds without runtime module data leave unrelated deployment and cache contents alone', async t => {
  const f = await buildFixture(t);
  await writeFile(join(f.deployment, 'build-info.json'), JSON.stringify({ signature: f.signature }));
  assert.equal(await reclaimApplicationBuildMetadata(f.source, f.deployment), null);
  assert.equal(await readFile(join(f.cached, 'lib/lean/Init.olean'), 'utf8'), 'module data');
  assert.equal(await readFile(join(f.deployment, 'lean/lib/lean/Init.olean'), 'utf8'), 'module data');
});
