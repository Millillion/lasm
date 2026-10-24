// Fast re-verification of cached tools (src/managed-artifacts.mjs verifyTreeOnce):
// a full content check is skipped only while every file's metadata is unchanged,
// and `lasm cache repair` always checks contents in full.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, readdirSync, utimesSync, statSync, existsSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { treeFingerprint, verifyTreeOnce, verifyArtifactDirectory, verificationRecords } from '../src/managed-artifacts.mjs';
import { repairManagedCache } from '../src/cache-repair.mjs';

const sha = text => createHash('sha256').update(text).digest('hex');

function tree() {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-records-'));
  mkdirSync(join(directory, 'tree/lib'), { recursive: true });
  writeFileSync(join(directory, 'tree/lib/a.txt'), 'alpha');
  writeFileSync(join(directory, 'tree/b.txt'), 'beta');
  return { directory, root: join(directory, 'tree'), stamps: join(directory, 'stamps') };
}

test('a recorded tree is not re-hashed until a file changes size, mtime or content', async () => {
  const { root, stamps } = tree();
  let checks = 0;
  const verify = async () => { checks++; };
  await verifyTreeOnce(stamps, 'k', root, verify);
  await verifyTreeOnce(stamps, 'k', root, verify);
  assert.equal(checks, 1);
  // A different size.
  writeFileSync(join(root, 'b.txt'), 'beta, longer');
  await verifyTreeOnce(stamps, 'k', root, verify);
  assert.equal(checks, 2);
  await verifyTreeOnce(stamps, 'k', root, verify);
  assert.equal(checks, 2);
  // Only the modification time.
  const { atime } = statSync(join(root, 'lib/a.txt'));
  utimesSync(join(root, 'lib/a.txt'), atime, new Date(Date.now() - 3_600_000));
  await verifyTreeOnce(stamps, 'k', root, verify);
  assert.equal(checks, 3);
  // Same size, mtime put back: the change time still differs.
  const before = statSync(join(root, 'lib/a.txt'));
  writeFileSync(join(root, 'lib/a.txt'), 'ALPHA');
  utimesSync(join(root, 'lib/a.txt'), before.atime, before.mtime);
  await verifyTreeOnce(stamps, 'k', root, verify);
  assert.equal(checks, 4);
  // An added file, and another key.
  writeFileSync(join(root, 'c.txt'), '');
  await verifyTreeOnce(stamps, 'k', root, verify);
  await verifyTreeOnce(stamps, 'other', root, verify);
  assert.equal(checks, 6);
  // Without a record directory (repair, release tooling) the check always runs.
  await verifyTreeOnce(undefined, 'k', root, verify);
  assert.equal(checks, 7);
});

test('a failed or interrupted check is never recorded as verified', async () => {
  const { root, stamps } = tree();
  await assert.rejects(verifyTreeOnce(stamps, 'k', root, async () => { throw new Error('bad tree'); }), /bad tree/);
  assert.equal(existsSync(stamps) ? readdirSync(stamps).length : 0, 0);
  // A file that changes while it is being checked.
  await verifyTreeOnce(stamps, 'k', root, async () => writeFileSync(join(root, 'b.txt'), 'changed meanwhile'));
  let checks = 0;
  await verifyTreeOnce(stamps, 'k', root, async () => { checks++; });
  assert.equal(checks, 1);
  // A damaged record means a full check.
  for (const name of readdirSync(stamps)) writeFileSync(join(stamps, name), '{');
  await verifyTreeOnce(stamps, 'k', root, async () => { checks++; });
  assert.equal(checks, 2);
});

test('cached tools: builds use the record, lasm cache repair always checks contents', async () => {
  const cache = mkdtempSync(join(tmpdir(), 'lasm-records-cache-'));
  const identity = 'a'.repeat(64), directory = join(cache, 'artifacts', identity);
  mkdirSync(join(directory, 'bin'), { recursive: true });
  writeFileSync(join(directory, 'bin/tool'), 'tool', { mode: 0o755 });
  const files = { bin: { type: 'directory' },
    'bin/tool': { type: 'file', bytes: 4, sha256: sha('tool'), ...(process.platform === 'win32' ? {} : { executable: true }) } };
  writeFileSync(join(directory, '.lasm-artifact.json'), JSON.stringify({ schema: 1, identity, files }) + '\n');
  const stamps = verificationRecords(cache);
  await verifyArtifactDirectory(directory, identity, { stamps });
  assert.equal(readdirSync(stamps).length, 1);
  // Content changed: detected through the metadata change.
  writeFileSync(join(directory, 'bin/tool'), 'TOOL');
  await assert.rejects(verifyArtifactDirectory(directory, identity, { stamps }), /contents changed/);
  // Even a record that matches the damaged tree (forged or stale) does not
  // stop cache repair: it verifies every byte and removes the damaged tool.
  const [name] = readdirSync(stamps);
  const record = JSON.parse(readFileSync(join(stamps, name), 'utf8'));
  writeFileSync(join(stamps, name), JSON.stringify({ ...record, fingerprint: treeFingerprint(directory) }));
  await verifyArtifactDirectory(directory, identity, { stamps });
  const repaired = await repairManagedCache({ cache, log() {} });
  assert.equal(repaired.removed.length, 1);
  assert.match(repaired.removed[0].reason, /contents changed/);
  assert.equal(existsSync(directory), false);
});
