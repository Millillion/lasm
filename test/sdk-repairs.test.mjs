import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, writeFile, rm, readdir } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { deriveArtifact } from '../src/managed-artifacts.mjs';
import { repairSdkFile } from '../src/sdk-repairs.mjs';

const digest = text => createHash('sha256').update(text).digest('hex');
test('SDK repairs reject source and output drift before accepting generated content', () => {
  const manifest = { files: [{ path: 'tools/link.py', originalSha256: digest('old\n'), patchedSha256: digest('new\n'),
    replacements: [{ before: 'old\n', after: 'new\n' }] }] };
  assert.equal(repairSdkFile('tools/link.py', 'old\n', manifest), 'new\n');
  assert.throws(() => repairSdkFile('tools/link.py', 'other\n', manifest), /source drift/);
  manifest.files[0].patchedSha256 = digest('unexpected\n');
  assert.throws(() => repairSdkFile('tools/link.py', 'old\n', manifest), /output mismatch/);
});
test('derived SDK trees publish atomically, verify reuse and reject cache drift', async t => {
  const cache = await mkdtemp(join(tmpdir(), 'lasm-sdk-derived-'));
  t.after(() => rm(cache, { recursive: true, force: true }));
  let calls = 0;
  const produce = async directory => { calls++; await writeFile(join(directory, 'driver.py'), 'repaired'); };
  const identity = { upstream: 'fixture', patch: 'v1' };
  const [first, other] = await Promise.all([deriveArtifact(identity, produce, { cache }), deriveArtifact(identity, produce, { cache })]);
  assert.equal(calls, 1); assert.equal(other.directory, first.directory);
  assert.equal(await readFile(join(first.directory, 'driver.py'), 'utf8'), 'repaired');
  assert.equal((await deriveArtifact(identity, produce, { cache })).cacheHit, true);
  await writeFile(join(first.directory, 'driver.py'), 'tampered');
  await assert.rejects(deriveArtifact(identity, produce, { cache }), /contents changed/);
  await assert.rejects(deriveArtifact({ ...identity, patch: 'failed' }, async directory => {
    await writeFile(join(directory, 'partial'), 'partial'); throw new Error('fixture failure');
  }, { cache }), /fixture failure/);
  assert.deepEqual(await readdir(join(cache, 'derived')), [first.identity]);
});
