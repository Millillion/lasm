import assert from 'node:assert/strict';
import { createReadStream, readFileSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';

assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const version = process.env.LASM_CANDIDATE_VERSION ?? '0.1.0-experimental.42';
assert.match(version, /^0\.1\.0-experimental\.\d+$/);
const filename = `lasm-compiler-${version}.tgz`;
const hash = createHash('sha256');
for await (const chunk of createReadStream('.work/node-candidate/' + filename)) hash.update(chunk);
const sha256 = hash.digest('hex');
assert.equal(sha256, process.env.LASM_CANDIDATE_SHA256);
// A retained archive can be rechecked with newer maintainer controls. Its
// source revision comes from the hash-authenticated package, not those controls.
const provenance = JSON.parse(execFileSync('tar', ['-xOf', '.work/node-candidate/' + filename, 'package/provenance.json'],
  { encoding: 'utf8', maxBuffer: 1024 * 1024, timeout: 60_000 }));
const pkg = JSON.parse(execFileSync('tar', ['-xOf', '.work/node-candidate/' + filename, 'package/package.json'],
  { encoding: 'utf8', maxBuffer: 1024 * 1024, timeout: 60_000 }));
assert.equal(pkg.name, '@lasm/compiler');
assert.equal('lasm-compiler-' + pkg.version + '.tgz', filename);
assert.match(provenance.sourceRevision, /^[a-f0-9]{40}$/);
assert.equal(provenance.sourceRevision, process.env.LASM_CANDIDATE_SOURCE_REVISION ?? process.env.GITHUB_SHA);
assert.equal(provenance.node, '26.10.0'); assert.equal(provenance.lean, '4.34.1');
const acceptance = process.env.LASM_ACCEPTANCE_RUN_ID
  ? JSON.parse(readFileSync('.work/node-candidate/acceptance.json', 'utf8'))
  : { runId: process.env.GITHUB_RUN_ID, sourceRevision: process.env.GITHUB_SHA,
    passedPlatforms: (process.env.LASM_ACCEPTANCE_PLATFORMS ?? 'linux-x64,linux-arm64').split(',') };
if (process.env.LASM_ACCEPTANCE_RUN_ID) {
  assert.equal(acceptance.runId, process.env.LASM_ACCEPTANCE_RUN_ID);
  assert.equal(acceptance.archiveSha256, sha256);
  assert.equal(acceptance.packageSourceRevision, provenance.sourceRevision);
  assert.deepEqual(acceptance.passedArchitectures, ['x64', 'arm64']);
  const expected = ['linux-x64', 'linux-arm64'];
  if (process.env.LASM_DARWIN_X64_ACCEPTANCE_RUN_ID) expected.push('darwin-x64', 'darwin-arm64');
  for (const architecture of ['x64', 'arm64'])
    if (process.env[`LASM_WINDOWS_${architecture.toUpperCase()}_ACCEPTANCE_RUN_ID`]) expected.push('win32-' + architecture);
  assert.deepEqual(acceptance.passedPlatforms, expected);
}
assert.match(acceptance.sourceRevision, /^[a-f0-9]{40}$/);
assert.match(acceptance.runId, /^\d+$/);
writeFileSync('.work/node-candidate/SHA256SUMS.txt', `${sha256}  ${filename}\n`);
writeFileSync('.work/node-candidate/notes.md', `Unpublished, private npm candidate for the basic ordinary Lean-on-Node workflow.

Native installed-package and independent-deployment controls passed for: ${acceptance.passedPlatforms.join(', ')}. These passes use this exact archive.

Package source revision: ${provenance.sourceRevision}
Validation controls revision: ${acceptance.sourceRevision}
Retention workflow revision: ${process.env.GITHUB_SHA}
The unpublished draft may target main; package provenance, not that ref, identifies these exact bytes.
Package SHA-256: ${sha256}
CI evidence: https://github.com/Millillion/lasm/actions/runs/${acceptance.runId}
${(acceptance.nativeJobs ?? []).map(job => `${job.platform}: ${job.url} (controls ${job.controlsRevision})`).join('\n')}

Requires Node 26.10.0 with npm; Lasm manages Lean 4.34.1 and its build tools. This is not full Lean language/library parity. No npm publication was performed.
`);
