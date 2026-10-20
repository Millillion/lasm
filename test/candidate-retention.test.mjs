import test from 'node:test';
import assert from 'node:assert/strict';
import { retainCandidateDraft } from '../scripts/ci/candidate-retention.mjs';

function fixture() {
  let release, failAfterUpload = false, uploads = 0;
  const receipt = { sha256: 'a'.repeat(64), sourceRevision: 'b'.repeat(40), candidateVersion: '0.1.0-experimental.1', recordedAt: 'original time' };
  const spec = { tag: 'node-package-1', target: 'b'.repeat(40), assets: [
    { name: 'package.tgz', path: 'package.tgz', sha256: receipt.sha256, bytes: 100 },
    { name: 'result.json', path: 'result.json', packingReceipt: { ...receipt, recordedAt: 'new attempt time' } },
  ] };
  const service = {
    async readRelease() { return release; },
    async createRelease() { release = { draft: true, prerelease: true, tag_name: spec.tag, target_commitish: spec.target, assets: [] }; },
    async upload(_tag, path) {
      const expected = spec.assets.find(a => a.path === path); uploads++;
      release.assets.push({ name: expected.name, size: expected.bytes ?? 200, digest: 'sha256:' + expected.sha256 });
      if (failAfterUpload) { failAfterUpload = false; throw new Error('connection failed after durable upload'); }
    },
    async readSmallAsset() { return JSON.stringify(receipt); },
  };
  return { spec, service, receipt, get release() { return release; }, get uploads() { return uploads; }, interrupt() { failAfterUpload = true; } };
}

test('a partial durable upload resumes without overwriting its successful asset or original measurements', async () => {
  const f = fixture(); f.interrupt();
  await assert.rejects(retainCandidateDraft(f.spec, f.service), /connection failed/);
  assert.equal(f.uploads, 1);
  const retried = await retainCandidateDraft(f.spec, f.service);
  assert.deepEqual(retried.uploaded, ['result.json']); assert.equal(f.uploads, 2);
  assert.deepEqual((await retainCandidateDraft(f.spec, f.service)).uploaded, []);
  assert.equal(f.receipt.recordedAt, 'original time');
});

test('published releases and conflicting retained bytes fail before any additional upload', async () => {
  for (const mutate of [r => { r.draft = false; }, r => { r.target_commitish = 'wrong revision'; },
    r => { r.assets[0].digest = 'sha256:' + 'c'.repeat(64); }, r => { r.assets[0].size++; }]) {
    const f = fixture(); await retainCandidateDraft(f.spec, f.service); mutate(f.release);
    await assert.rejects(retainCandidateDraft(f.spec, f.service)); assert.equal(f.uploads, 2);
  }
  const f = fixture(); await retainCandidateDraft(f.spec, f.service); f.receipt.sha256 = 'c'.repeat(64);
  await assert.rejects(retainCandidateDraft(f.spec, f.service), /different bytes/); assert.equal(f.uploads, 2);
});

test('a draft targeting main is accepted only when its notes record the exact source revision', async () => {
  for (const [body, ok] of [[`Draft.\nSource revision: ${'b'.repeat(40)}\n`, true], ['Draft without a revision.', false],
    [`Source revision: ${'c'.repeat(40)}\n`, false]]) {
    const f = fixture();
    f.service.createRelease = async () => {};
    f.service.readRelease = async () => ({ draft: true, prerelease: true, tag_name: f.spec.tag, target_commitish: 'main', body,
      assets: [] });
    f.service.upload = async () => {};
    if (ok) await assert.doesNotReject(retainCandidateDraft(f.spec, f.service).catch(e => { if (/source identity/.test(e.message)) throw e; }));
    else await assert.rejects(retainCandidateDraft(f.spec, f.service), /source identity/);
  }
});
