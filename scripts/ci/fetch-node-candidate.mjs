import assert from 'node:assert/strict';
import { existsSync, createReadStream } from 'node:fs';
import { createHash } from 'node:crypto';
import { mkdir, mkdtemp, rename, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
async function hashFile(path) {
  const hash = createHash('sha256');
  for await (const bytes of createReadStream(path)) hash.update(bytes);
  return hash.digest('hex');
}

const version = process.env.LASM_CANDIDATE_VERSION, expected = process.env.LASM_CANDIDATE_SHA256;
assert.match(version, /^0\.1\.0-experimental\.\d+$/); assert.match(expected, /^[a-f0-9]{64}$/);
const release = process.env.LASM_CANDIDATE_RELEASE;
if (release) assert.match(release, /^node-(?:package|linux-candidate)-\d+$/);
const name = `lasm-compiler-${version}.tgz`, directory = '.work/node-candidate', file = join(directory, name);
await mkdir(directory, { recursive: true });
if (!existsSync(file)) {
  assert.ok(release, 'Candidate cache is unavailable and no durable release input was supplied');
  const temporary = await mkdtemp(join(directory, '.fetch-'));
  try {
    execFileSync('gh', ['release', 'download', release, '--repo', 'Millillion/lasm', '--pattern', name, '--dir', temporary],
      { stdio: 'inherit', timeout: 180_000, windowsHide: true });
    assert.equal(await hashFile(join(temporary, name)), expected, 'Durable candidate digest mismatch');
    await rename(join(temporary, name), file);
  } finally { await rm(temporary, { recursive: true, force: true }); }
}
assert.equal(await hashFile(file), expected, 'Candidate digest mismatch');
console.log(`Verified ${version} ${expected}; durable source ${release || 'legacy cache'}`);
