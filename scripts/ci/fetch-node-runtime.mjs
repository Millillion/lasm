// Authentication stays in the CI download step, outside the resource guard's
// deliberately minimal compiler environment. Extraction is separately guarded.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, existsSync, createReadStream, renameSync, rmSync, mkdtempSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { join } from 'node:path';

const source = JSON.parse(readFileSync(new URL('./node-runtime-source.json', import.meta.url)));
assert.equal(source.repository, 'Millillion/lasm');
for (const value of [source.asset, source.release]) assert.match(value, /^[a-zA-Z0-9][a-zA-Z0-9._-]+$/);
assert.match(source.sha256, /^[a-f0-9]{64}$/);
const destination = '.work/node-runtime-source.tgz';
assert.equal(existsSync(destination), false, 'Use a fresh output for the retained runtime download');
mkdirSync('.work', { recursive: true });
const temporary = mkdtempSync('.work/.runtime-download-');
try {
  execFileSync('gh', ['release', 'download', source.release, '--repo', source.repository,
    '--pattern', source.asset, '--dir', temporary], { stdio: 'inherit', timeout: 180_000, windowsHide: true });
  const file = join(temporary, source.asset), hash = createHash('sha256');
  for await (const bytes of createReadStream(file)) hash.update(bytes);
  assert.equal(hash.digest('hex'), source.sha256, 'Durable runtime input digest mismatch');
  renameSync(file, destination);
  console.log(`Fetched verified runtime input ${source.release}/${source.asset} ${source.sha256}`);
} finally { rmSync(temporary, { recursive: true, force: true }); }
