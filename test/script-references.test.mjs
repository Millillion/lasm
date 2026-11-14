import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, readFileSync } from 'node:fs';
import { loadRepository, scriptReferences, unreferenced } from '../scripts/ci/script-references.mjs';

const fixture = contents => ({ files: Object.keys(contents), read: file => contents[file] });

test('runbook bare names, repository paths and workflow templates count as references', () => {
  const repository = fixture({
    'scripts/tests/README.md': '`classify.mjs VERSION SOURCE OUTPUT` regenerates the review.\n',
    'scripts/tests/classify.mjs': '// node classify.mjs VERSION\n',
    'scripts/coverage/make-review.mjs': '// node make-review.mjs VERSION\n',
    'scripts/coverage/probe-pipes.mjs': '',
    'scripts/coverage/probe-dns.mjs': '',
    'scripts/coverage/probe-files.mjs': '',
    'scripts/coverage/bounded.mjs': '',
    'scripts/coverage/orphan.mjs': '// node orphan.mjs\n',
    'scripts/coverage/recorded.mjs': '',
    'docs/UPGRADE.md': '8. Write the adapter review: `node scripts/coverage/make-review.mjs <version>`.\n',
    'docs/evidence/run.json': '{"by": "scripts/coverage/recorded.mjs"}\n',
    'docs/LIST.md': 'Every `*.mjs` and `${name}.mjs` of the tree.\n',
    '.github/workflows/probe.yml': [
      'run: node "scripts/coverage/probe-$PROBE.mjs" .work/probe',
      'run: node scripts/coverage/probe-${{ inputs.probe }}.mjs',
      'run: node "$GITHUB_WORKSPACE/scripts/coverage/bounded.mjs" -- true',
      '',
    ].join('\n'),
  });
  assert.deepEqual(unreferenced(repository).sort(), ['scripts/coverage/orphan.mjs', 'scripts/coverage/recorded.mjs', 'scripts/tests/README.md']);
  const { referencedBy, dangling } = scriptReferences(repository);
  assert.deepEqual([...referencedBy.get('scripts/tests/classify.mjs')], ['scripts/tests/README.md']);
  assert.deepEqual([...referencedBy.get('scripts/coverage/make-review.mjs')], ['docs/UPGRADE.md']);
  assert.deepEqual([...referencedBy.get('scripts/coverage/probe-dns.mjs')], ['.github/workflows/probe.yml']);
  assert.deepEqual(dangling, []);
});

test('a workflow or current document naming a missing script is dangling; history is exempt', () => {
  const { dangling } = scriptReferences(fixture({
    '.github/workflows/upgrade.yml': 'run: node scripts/tests/classify.mjs "$VERSION" src\n',
    'docs/RUNBOOK.md': 'Run `node scripts/coverage/make-review.mjs 4.35.0`.\nThe `scripts/old/probe.mjs` probe was removed on 2026-11-10.\n',
    'scripts/tests/README.md': '`prepare.mjs OUTPUT` selects a classification.\n',
    'scripts/old/README.md': '> Scripts this page names that are no longer in the repository were removed;\n`build.mjs` builds it.\n',
    'docs/history/OLD.md': '`node scripts/gone.mjs`\n',
  }));
  assert.deepEqual(dangling.map(({ source, name }) => `${source}: ${name}`), [
    '.github/workflows/upgrade.yml: scripts/tests/classify.mjs',
    'docs/RUNBOOK.md: scripts/coverage/make-review.mjs',
    'scripts/tests/README.md: prepare.mjs',
  ]);
});

test('the repository names no missing script, and the language-coverage generators are referenced', () => {
  const repository = loadRepository();
  const { referencedBy, dangling } = scriptReferences(repository);
  assert.deepEqual(dangling, []);
  for (const script of ['scripts/application-tests/classify-mixed.mjs', 'scripts/language-coverage/make-adapter-review.mjs']) {
    assert.ok(existsSync(new URL('../' + script, import.meta.url)), script);
    assert.ok([...referencedBy.get(script) ?? []].some(file => file.startsWith('docs/')), script + ' is named by a document');
  }
  assert.ok(referencedBy.has('scripts/language-coverage/probe-ws2-binding.mjs'), 'language-coverage-probe.yml runs probe-$PROBE.mjs');
  // Every shard reads the pinned release's mixed-driver review.
  const { lean } = JSON.parse(readFileSync(new URL('../scripts/ci/acceptance-versions.json', import.meta.url)));
  assert.ok(existsSync(new URL(`../docs/evidence/lean-${lean}-mixed-driver-classification.json`, import.meta.url)));
});
