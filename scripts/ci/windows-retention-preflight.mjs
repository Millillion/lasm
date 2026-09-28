// Exercise this job's existing draft-release permission before a long build.
// Delete only the empty/small control draft created by this invocation.
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';

const repository = 'Millillion/lasm';
assert.equal(process.env.GITHUB_REPOSITORY, repository);
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
assert.equal(process.platform + '-' + process.arch, 'win32-arm64');
assert.match(process.env.GITHUB_RUN_ID, /^\d+$/);
assert.match(process.env.GITHUB_RUN_ATTEMPT, /^\d+$/);
const tag = `windows-arm64-retention-control-${process.env.GITHUB_RUN_ID}-${process.env.GITHUB_RUN_ATTEMPT}`;
const gh = args => execFileSync('gh', args, { encoding: 'utf8', timeout: 120000, maxBuffer: 1024 ** 2 });
assert.equal(JSON.parse(gh(['api', `repos/${repository}`])).visibility, 'public');
const directory = resolve('.work/windows-retention-control');
mkdirSync(directory, { recursive: true });
const receipt = { tag, sourceRevision: process.env.GITHUB_SHA, target: 'main' };
const file = join(directory, 'control.json');
writeFileSync(file, JSON.stringify(receipt) + '\n', { flag: 'wx' });
let release;
try {
  // Target an existing branch. The exact build revision belongs in the receipt;
  // creating a release against an earlier workflow commit can be denied.
  release = JSON.parse(gh(['api', `repos/${repository}/releases`, '--method', 'POST',
    '-f', `tag_name=${tag}`, '-f', 'target_commitish=main', '-F', 'draft=true', '-F', 'prerelease=true',
    '-f', `name=${tag}`, '-f', 'body=Temporary draft-storage control; removed by its creating job.']));
  assert.equal(release.draft, true); assert.equal(release.tag_name, tag);
  gh(['release', 'upload', tag, file, '--repo', repository]);
  const stored = JSON.parse(gh(['api', `repos/${repository}/releases/${release.id}`]));
  assert.equal(stored.assets.length, 1);
  assert.equal(stored.assets[0].name, 'control.json');
  const downloaded = gh(['api', `repos/${repository}/releases/assets/${stored.assets[0].id}`,
    '-H', 'Accept: application/octet-stream']);
  assert.equal(downloaded, readFileSync(file, 'utf8'));
} finally {
  if (release) {
    assert.equal(release.draft, true); assert.equal(release.tag_name, tag);
    gh(['api', `repos/${repository}/releases/${release.id}`, '--method', 'DELETE']);
  }
}
writeFileSync(join(directory, 'result.json'), JSON.stringify({ passed: true,
  ...receipt, uploadedAndReadIdenticalBytes: true, controlDraftDeleted: true }, null, 2) + '\n');
console.log('Draft creation, asset upload, byte-exact retrieval and control cleanup passed.');
