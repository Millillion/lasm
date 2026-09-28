// Preserve every existing tool file while adding a small, verified notice.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { copyFileSync, existsSync, mkdirSync, mkdtempSync, chmodSync, statSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { create, list } from 'tar';
import { hashFile } from '../../src/managed-artifacts.mjs';

async function inventory(archive) {
  const result = {}, names = new Set(); let bytes = 0;
  await list({ file: archive, strict: true, onReadEntry(entry) {
    const name = entry.path.replace(/\/$/, '');
    assert.ok(name === 'install' || name.startsWith('install/'));
    assert.ok(!name.includes('\\') && !name.includes(':') && name.split('/').every(p => p && p !== '.' && p !== '..'));
    assert.ok(!names.has(name)); names.add(name);
    assert.ok(names.size <= 100000 && ['File', 'Directory', 'Link'].includes(entry.type));
    bytes += entry.size; assert.ok(bytes <= 8 * 1024 ** 3);
    if (entry.type === 'Link') {
      assert.ok(entry.linkpath.startsWith('install/') && !entry.linkpath.includes('\\')
        && !entry.linkpath.includes(':') && !entry.linkpath.split('/').includes('..'));
    }
    const sha = createHash('sha256'); entry.on('data', chunk => sha.update(chunk));
    entry.on('end', () => { result[name] = { type: entry.type, mode: entry.mode, bytes: entry.size,
      sha256: sha.digest('hex'), linkpath: entry.linkpath ?? '' }; });
  } });
  return result;
}

export async function appendToolNotice(original, output, notice, expectedSha256) {
  assert.ok(!existsSync(output), 'Preserve earlier distribution archives');
  assert.equal(await hashFile(notice), expectedSha256, 'Upstream notice checksum mismatch');
  assert.ok(statSync(notice).size > 0 && statSync(notice).size < 1024 ** 2);
  const before = await inventory(original);
  assert.ok(!before['install/LICENSES'], 'The upstream notice bundle is already present');
  const added = mkdtempSync(join(dirname(output), 'added-notices-'));
  mkdirSync(join(added, 'install'));
  copyFileSync(notice, join(added, 'install/LICENSES')); chmodSync(join(added, 'install/LICENSES'), 0o644);
  await create({ cwd: added, file: output, gzip: { level: 1 }, portable: true }, ['@' + original, 'install/LICENSES']);
  const after = await inventory(output), addition = after['install/LICENSES'];
  assert.equal(addition?.sha256, expectedSha256); assert.equal(addition.type, 'File');
  assert.equal(addition.bytes, statSync(notice).size);
  delete after['install/LICENSES'];
  assert.deepEqual(after, before, 'Every pre-existing archive member must remain unchanged');
  const originalBytes = Object.values(before).reduce((sum, f) => sum + f.bytes, 0);
  return { sha256: await hashFile(output), bytes: statSync(output).size, originalBytes,
    preservedEntries: Object.keys(before).length, addedNoticeSha256: expectedSha256 };
}
