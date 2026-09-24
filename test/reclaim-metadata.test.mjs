import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, mkdir, writeFile, readFile, cp, rm, access, rename, symlink } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { reclaimBuildMetadata } from '../scripts/application-tests/reclaim-metadata.mjs';

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
