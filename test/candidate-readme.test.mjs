import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { candidateReadme } from '../scripts/candidate-readme.mjs';

const options = { version: '0.1.0-experimental.123', sourceRevision: 'a'.repeat(40), runId: '12345' };

// The transformation itself, on a fixed README (independent of the real README's
// wording and headings, which the maintainer edits: docs/TESTING.md#test-quality-audit).
const fixture = `# Lasm

Intro with a [doc link](docs/X.md), a [live link](https://example.com) and an [anchor](#start).

npm install ./lasm-compiler-0.1.0-experimental.1.tgz

## First heading

| Ubuntu 24.04 LTS | x86-64, ARM64 | accepted |

## Second heading
`;
for (const newline of ['\n', '\r\n']) test(`a packed README installs its own archive with ${JSON.stringify(newline)} source newlines`, () => {
  const text = candidateReadme(fixture.replace(/\n/g, newline), options);
  assert.match(text, /npm install \.\/lasm-compiler-0\.1\.0-experimental\.123\.tgz/);
  assert.doesNotMatch(text, /\r/);
  // The candidate section comes right before the first second-level heading.
  assert.ok(text.indexOf('## This candidate archive') < text.indexOf('## First heading'));
  assert.ok(text.indexOf('# Lasm') < text.indexOf('## This candidate archive'));
  assert.match(text, /do not\nclaim that this candidate has passed/);
  assert.match(text, /actions\/runs\/12345/);
  // The environment table is kept; repository links are pinned to the source; live links and anchors stay.
  assert.match(text, /\| Ubuntu 24\.04 LTS \| x86-64, ARM64 \| accepted \|/);
  assert.match(text, /\]\(https:\/\/github\.com\/Millillion\/lasm\/blob\/a{40}\/docs\/X\.md\)/);
  assert.match(text, /\]\(https:\/\/example\.com\)/);
  assert.match(text, /\]\(#start\)/);
  assert.doesNotMatch(text, /\]\(docs\//);
});

test('a README without a second-level heading is refused', () => {
  assert.throws(() => candidateReadme('# Lasm\n\nno sections\n', options), /README structure/);
});

// The real README goes through the same transformation without manual review.
test('the repository README packs: one install line for this archive, no unpinned repository links', () => {
  const text = candidateReadme(readFileSync(new URL('../README.md', import.meta.url), 'utf8'), options);
  assert.equal([...text.matchAll(/npm install \.\/lasm-compiler-[^\s]+\.tgz/g)].length, 1);
  assert.doesNotMatch(text, /\]\((?!https?:|#)[^)]+\)/);
});
