// CI-only durable retention, using built-ins and the authenticated gh client.
import assert from 'node:assert/strict';
import { createReadStream, readFileSync, writeFileSync, statSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { basename } from 'node:path';
import { execFileSync } from 'node:child_process';
import { retainCandidateDraft } from './candidate-retention.mjs';

const repository = 'Millillion/lasm', env = process.env;
assert.equal(env.GITHUB_REPOSITORY, repository); assert.equal(env.GITHUB_REF, 'refs/heads/main');
assert.match(env.GITHUB_RUN_ID, /^\d+$/); assert.match(env.GITHUB_SHA, /^[a-f0-9]{40}$/);
assert.match(env.LASM_CANDIDATE_VERSION, /^0\.1\.0-experimental\.\d+$/);
const [mode, ...extra] = process.argv.slice(2); assert.ok(['input', 'tested'].includes(mode) && extra.length === 0);
const gh = args => execFileSync('gh', args, { encoding: 'utf8', timeout: 180_000, maxBuffer: 1024 * 1024, stdio: ['ignore', 'pipe', 'pipe'] });
const asset = async path => {
  const hash = createHash('sha256');
  for await (const chunk of createReadStream(path)) hash.update(chunk);
  return { path, name: basename(path), bytes: statSync(path).size, sha256: hash.digest('hex') };
};
const directory = '.work/node-candidate', archive = await asset(`${directory}/lasm-compiler-${env.LASM_CANDIDATE_VERSION}.tgz`);
const assets = [archive], tag = `${mode === 'input' ? 'node-package' : 'node-linux-candidate'}-${env.GITHUB_RUN_ID}`;
let notesFile = directory + '/notes.md';
if (mode === 'input') {
  const path = directory + '/result.json', receipt = JSON.parse(readFileSync(path));
  assert.equal(receipt.sha256, archive.sha256); assert.equal(receipt.sourceRevision, env.GITHUB_SHA);
  assert.equal(receipt.candidateVersion, env.LASM_CANDIDATE_VERSION);
  assets.push({ path, name: 'result.json', packingReceipt: receipt });
  notesFile = directory + '/input-notes.md';
  writeFileSync(notesFile, `Immutable package input for this validation attempt. This draft does not imply acceptance or npm publication. CI: https://github.com/${repository}/actions/runs/${env.GITHUB_RUN_ID}\n`);
} else {
  assert.equal(archive.sha256, env.LASM_CANDIDATE_SHA256);
  assets.push(await asset(directory + '/SHA256SUMS.txt'));
}
const result = await retainCandidateDraft({ tag, target: env.GITHUB_SHA, notesFile, assets,
  title: `${mode === 'input' ? 'Unaccepted Lasm package' : 'Lasm Node candidate'} ${env.LASM_CANDIDATE_VERSION}`,
}, {
  async readRelease(tag) {
    let view;
    try { view = JSON.parse(gh(['release', 'view', tag, '--repo', repository, '--json', 'apiUrl'])); }
    catch (error) { if (/release not found|HTTP 404/i.test(error.stderr?.toString() ?? '')) return undefined; throw error; }
    assert.match(view.apiUrl, /^https:\/\/api\.github\.com\/repos\/Millillion\/lasm\/releases\/\d+$/);
    // Drafts can be absent from REST lookup-by-tag. Resolve with gh first, then
    // request raw REST metadata including server-recorded SHA-256 digests.
    return JSON.parse(gh(['api', view.apiUrl]));
  },
  async createRelease(spec) { gh(['release', 'create', spec.tag, '--repo', repository, '--draft', '--prerelease',
    '--target', spec.target, '--title', spec.title, '--notes-file', spec.notesFile]); },
  async upload(tag, path) { gh(['release', 'upload', tag, path, '--repo', repository]); },
  async readSmallAsset(tag, name) { return gh(['release', 'download', tag, '--repo', repository, '--pattern', name, '--output', '-']); },
});
console.log(JSON.stringify({ ...result, sha256: archive.sha256 }, null, 2));
