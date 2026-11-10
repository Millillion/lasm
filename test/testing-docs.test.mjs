// The testing documents stay in step with the repository: every file, script
// and workflow docs/TESTING_STRATEGY.md and docs/CI.md name exists, every
// workflow is in CI.md's inventory, and TESTING.md's fuzz table lists exactly
// the targets fuzz.yml runs (the evidence page reads the same list).
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, readdirSync, readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { matrixList } from '../scripts/evidence/page.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const read = path => readFileSync(join(root, path), 'utf8');

/** The repository paths a Markdown file names: `code` that is a path or a workflow, and relative links. */
function namedPaths(file, text) {
  const out = new Set();
  for (const [, x] of text.matchAll(/`([^`\s]+)`/g)) {
    if (/[<>*{}$]/.test(x)) continue; // a pattern, not a file
    if (/^(scripts|test|src|library|examples|docs|verification|templates|\.github)\//.test(x)) out.add(x.replace(/\/$/, ''));
    else if (/^[\w-]+\.yml$/.test(x)) out.add(`.github/workflows/${x}`);
  }
  for (const [, link] of text.matchAll(/\]\(([^)#\s]+)(?:#[^)]*)?\)/g))
    if (!/^[a-z]+:/.test(link)) out.add(join(dirname(file), link).replace(/\/$/, ''));
  return [...out];
}

for (const file of ['docs/TESTING_STRATEGY.md', 'docs/CI.md']) {
  test(`every path and workflow ${file} names exists`, () => {
    const paths = namedPaths(file, read(file));
    assert.ok(paths.length > 20, `${paths.length} paths`);
    assert.deepEqual(paths.filter(p => !existsSync(join(root, p))), []);
  });
}

test('every workflow is in docs/CI.md', () => {
  const ci = read('docs/CI.md');
  const missing = readdirSync(join(root, '.github/workflows')).filter(f => f.endsWith('.yml') && !ci.includes(f));
  assert.deepEqual(missing, []);
});

test("TESTING.md's fuzz table lists exactly the targets fuzz.yml runs", () => {
  const campaign = matrixList(read('.github/workflows/fuzz.yml'), 'target');
  const testing = read('docs/TESTING.md');
  const section = testing.slice(testing.indexOf('### Fuzzing at the boundaries'), testing.indexOf('**Engines.**'));
  const rows = [...section.matchAll(/^\| `([\w-]+)` \|/gm)].map(m => m[1]);
  assert.ok(campaign.length >= 6);
  assert.deepEqual([...rows].sort(), [...campaign].sort());
  // Every target that has a file is run in the campaigns.
  const files = readdirSync(join(root, 'test/fuzz/targets')).filter(f => f.endsWith('.mjs')).map(f => f.slice(0, -4));
  const native = Object.keys(JSON.parse(read('test/fuzz/native/targets.json')));
  assert.deepEqual([...files, ...native].sort(), [...campaign].sort());
});
