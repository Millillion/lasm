import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { candidateReadme } from '../scripts/candidate-readme.mjs';

test('a packed README installs its own archive without promoting untested bytes', () => {
  const text = candidateReadme(readFileSync(new URL('../README.md', import.meta.url), 'utf8'), {
    version: '0.1.0-experimental.123', sourceRevision: 'a'.repeat(40), runId: '12345',
  });
  assert.match(text, /npm install \.\/lasm-compiler-0\.1\.0-experimental\.123\.tgz/);
  assert.doesNotMatch(text, /npm install \.\/lasm-compiler-0\.1\.0-experimental\.46\.tgz/);
  assert.match(text, /does not\nclaim that this candidate has passed/);
  assert.match(text, /Candidate `\.46` passed native installed-package/);
  assert.match(text, /actions\/runs\/12345/);
  assert.doesNotMatch(text, /\]\(docs\//);
});
