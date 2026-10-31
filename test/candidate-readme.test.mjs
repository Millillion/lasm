import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { candidateReadme } from '../scripts/candidate-readme.mjs';

for (const newline of ['\n', '\r\n']) test(`a packed README installs its own archive with ${JSON.stringify(newline)} source newlines`, () => {
  const source = readFileSync(new URL('../README.md', import.meta.url), 'utf8').replace(/\r?\n/g, newline);
  const text = candidateReadme(source, {
    version: '0.1.0-experimental.123', sourceRevision: 'a'.repeat(40), runId: '12345',
  });
  assert.match(text, /npm install \.\/lasm-compiler-0\.1\.0-experimental\.123\.tgz/);
  // Only this archive's install line remains (the source README names the accepted one).
  assert.equal([...text.matchAll(/npm install \.\/lasm-compiler-[^\s]+\.tgz/g)].length, 1);
  assert.match(text, /do not\nclaim that this candidate has passed/);
  // The environment table (the earlier accepted baseline) is kept.
  assert.match(text, /\| Ubuntu 24\.04 LTS \| x86-64, ARM64 \| Installed-package and copied-deployment acceptance/);
  // The candidate section comes before the source's first second-level heading.
  const first = source.replace(/\r\n/g, '\n').match(/\n(## [^\n]+)/)[1];
  assert.ok(text.indexOf('## This candidate archive') < text.indexOf('\n' + first), first);
  assert.match(text, /actions\/runs\/12345/);
  assert.doesNotMatch(text, /\]\(docs\//);
});
