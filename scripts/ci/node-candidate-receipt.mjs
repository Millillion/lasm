import assert from 'node:assert/strict';
import { createReadStream, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';

assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const filename = 'lasm-compiler-0.1.0-experimental.34.tgz';
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
writeFileSync('.work/node-candidate/SHA256SUMS.txt', `${sha256}  ${filename}\n`);
writeFileSync('.work/node-candidate/notes.md', `Unpublished, private npm candidate for the basic ordinary Lean-on-Node workflow.

Both native Ubuntu 24.04 jobs (x86-64 and ARM64) passed the installed-package and independent-deployment controls using this exact archive.

Package source revision: ${provenance.sourceRevision}
Validation controls revision: ${process.env.GITHUB_SHA}
Package SHA-256: ${sha256}
CI evidence: https://github.com/Millillion/lasm/actions/runs/${process.env.GITHUB_RUN_ID}

Requires Node 26.10.0 with npm; Lasm manages Lean 4.34.1 and its build tools. This is not full Lean language/library parity. No npm publication was performed.
`);
