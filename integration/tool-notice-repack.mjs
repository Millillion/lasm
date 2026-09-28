import assert from 'node:assert/strict';
import { existsSync, linkSync, mkdirSync, mkdtempSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { create } from 'tar';
import { appendToolNotice } from '../scripts/ci/append-tool-notices.mjs';
import { hashFile } from '../src/managed-artifacts.mjs';
import { ensureResourceGuard } from '../scripts/full-lean/resource-guard.mjs';

await ensureResourceGuard();
mkdirSync('.work', { recursive: true });
const base = mkdtempSync(resolve('.work/tool-notice-controls-'));
mkdirSync(join(base, 'install/bin'), { recursive: true });
writeFileSync(join(base, 'install/bin/native.exe'), Buffer.from([0, 255, 127, 0, 1]));
linkSync(join(base, 'install/bin/native.exe'), join(base, 'install/bin/alias.exe'));
writeFileSync(join(base, 'install/LICENSE'), 'original license\n');
const source = join(base, 'original.tgz'), output = join(base, 'complete.tgz'), notice = join(base, 'notice.txt');
await create({ cwd: base, file: source, gzip: true, portable: true }, ['install']);
writeFileSync(notice, 'verified third-party notices\n');
const sha256 = await hashFile(notice), sourceSha256 = await hashFile(source);
const result = await appendToolNotice(source, output, notice, sha256);
assert.equal(await hashFile(source), sourceSha256);
assert.equal(result.preservedEntries, 5); assert.equal(result.addedNoticeSha256, sha256);
await assert.rejects(appendToolNotice(source, join(base, 'bad.tgz'), notice, '0'.repeat(64)), /notice checksum/);
assert.equal(existsSync(join(base, 'bad.tgz')), false);
await assert.rejects(appendToolNotice(output, join(base, 'duplicate.tgz'), notice, sha256), /already present/);
assert.equal(existsSync(join(base, 'duplicate.tgz')), false);
await assert.rejects(appendToolNotice(source, output, notice, sha256), /Preserve earlier/);
console.log(JSON.stringify({ passed: true, base, controls: ['all existing bytes, modes and hardlinks preserved',
  'original archive unchanged', 'notice checksum required', 'duplicate notices refused', 'no archive overwrite'], result }));
