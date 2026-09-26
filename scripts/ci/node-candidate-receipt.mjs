import assert from 'node:assert/strict';
import { createReadStream, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';

assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
const filename = 'lasm-compiler-0.1.0-experimental.33.tgz';
const hash = createHash('sha256');
for await (const chunk of createReadStream('.work/node-candidate/' + filename)) hash.update(chunk);
const sha256 = hash.digest('hex');
assert.equal(sha256, process.env.LASM_CANDIDATE_SHA256);
writeFileSync('.work/node-candidate/SHA256SUMS.txt', `${sha256}  ${filename}\n`);
writeFileSync('.work/node-candidate/notes.md', `Unpublished, private npm candidate for the basic ordinary Lean-on-Node workflow.

Both native Ubuntu 24.04 jobs (x86-64 and ARM64) passed the installed-package and independent-deployment controls using this exact archive.

Source revision: ${process.env.GITHUB_SHA}
Package SHA-256: ${sha256}
CI evidence: https://github.com/Millillion/lasm/actions/runs/${process.env.GITHUB_RUN_ID}

Requires Node 26.10.0 with npm; Lasm manages Lean 4.34.1 and its build tools. This is not full Lean language/library parity. No npm publication was performed.
`);
