// The nightly suite (.github/workflows/nightly.yml): layout, scheduling and comparison, offline.
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync, existsSync } from 'node:fs';
import { plannedRuns, nextStep } from '../scripts/nightly/driver.mjs';
import { selectDeletions } from '../scripts/nightly/cleanup-drafts.mjs';
import { compareCoverage, compareEcosystem, merge, markdown } from '../scripts/nightly/compare.mjs';

const layout = JSON.parse(readFileSync(new URL('../scripts/nightly/layout.json', import.meta.url)));
const candidate = { version: '0.1.0-experimental.1', release: 'node-package-1', sha256: 'a'.repeat(64) };

test('the layout is the launch gate: every harness on five targets, plus the ecosystem', () => {
  const runs = plannedRuns(layout, candidate, '4.35.0');
  const runners = ['ubuntu-24.04', 'ubuntu-24.04-arm', 'macos-15-intel', 'macos-15', 'windows-2025'];
  for (const runner of runners) for (const harness of ['runtime-adapter', 'eval-io', 'compiled-application', 'projects'])
    assert.ok(runs.some(r => r.runner === runner && r.harness === harness), `${harness} on ${runner}`);
  for (const harness of ['docparse', 'lsp', 'lsp-server', 'lsp-project']) assert.ok(runs.some(r => r.harness === harness && r.runner === 'ubuntu-24.04'));
  assert.equal(runs.filter(r => r.kind === 'ecosystem').length, 6);
  assert.equal(runs.find(r => r.harness === 'runtime-adapter' && r.runner === 'ubuntu-24.04').inputs.shards, '16');
  for (const r of runs) assert.equal(r.inputs['candidate-release'], 'node-package-1');
  const baseline = JSON.parse(readFileSync(new URL('../scripts/nightly/baseline.json', import.meta.url)));
  for (const key of ['coverage', 'ecosystem', 'ecosystemNoSystemC']) assert.ok(existsSync(new URL('../' + baseline[key], import.meta.url)), baseline[key]);
});

test('dispatch a few at a time and never while release checks run', () => {
  const state = { runs: [{ id: 1, status: 'in_progress' }, { id: 2, status: 'completed' }, {}, {}] };
  assert.equal(nextStep(state, { releaseActive: false, activeLimit: 3 }).action, 'dispatch');
  assert.equal(nextStep(state, { releaseActive: true, activeLimit: 3 }).reason, 'release checks in progress');
  assert.equal(nextStep(state, { releaseActive: false, activeLimit: 1 }).action, 'wait');
  assert.equal(nextStep({ runs: [{ id: 1, status: 'completed' }] }, { releaseActive: true, activeLimit: 3 }).action, 'report');
});

test('regressions: passed in the baseline, not tonight; resource stops and missing results apart', () => {
  const baseline = { platforms: { 'linux-x64': { results: [
    { harness: 'eval-io', name: 'a', outcome: 'pass' }, { harness: 'eval-io', name: 'b', outcome: 'pass' },
    { harness: 'eval-io', name: 'c', outcome: 'pass' }, { harness: 'eval-io', name: 'd', outcome: 'harness' },
    { harness: 'eval-io', name: 'e', outcome: 'pass' }, { harness: 'lsp', name: 'f', outcome: 'pass' }] } } };
  const current = { 'linux-x64': { results: [{ harness: 'eval-io', name: 'a', outcome: 'pass' }, { harness: 'eval-io', name: 'b', outcome: 'lasm-bug' },
    { harness: 'eval-io', name: 'c', outcome: 'resource-stop' }, { harness: 'eval-io', name: 'd', outcome: 'pass' }] } };
  const c = compareCoverage(baseline, current, [['linux-x64', 'eval-io']]);
  assert.deepEqual(c.regressions.map(r => r.name), ['b']);
  assert.deepEqual(c.resourceStops.map(r => r.name), ['c']);
  assert.deepEqual(c.fixed.map(r => r.name), ['d']);
  assert.deepEqual(c.missing.map(r => r.name), ['e'], 'lsp was not run tonight, so f is not missing');
  const e = compareEcosystem({ results: [{ project: 'x', platform: 'win32-x64', result: 'pass' }, { project: 'y', platform: 'win32-x64', result: 'pass' },
    { project: 'z', platform: 'darwin-x64', result: 'pass' }] }, { results: [{ project: 'x', platform: 'win32-x64', result: 'lasm-build-fail' }] }, 'default', ['win32-x64']);
  assert.deepEqual([e.regressions.map(r => r.name), e.missing.map(r => r.name)], [['x'], ['y']]);
  const report = { date: '2026-10-25', sha: 'f'.repeat(40), candidate, nightlyRuns: [7], baseline: { coverage: 'b.json' }, failedRuns: [], comparison: merge(c, e) };
  assert.match(markdown(report), /2 regressions, 2 missing results/);
});

// Triggers and concurrency are workflow configuration, which only GitHub runs:
// they stay a lint (docs/TESTING.md#test-quality-audit). "Never a release
// dependency" is checked over every workflow a release runs, transitively.
const workflowText = name => readFileSync(new URL(`../.github/workflows/${name}`, import.meta.url), 'utf8');
/** release.yml, release-checks.yml and every workflow they call, transitively. */
function releaseWorkflows() {
  const seen = new Set(), pending = ['release.yml', 'release-checks.yml'];
  while (pending.length) {
    const name = pending.pop();
    if (seen.has(name)) continue;
    seen.add(name);
    for (const [, called] of workflowText(name).matchAll(/uses: \.\/\.github\/workflows\/([a-z0-9-]+\.yml)/g)) pending.push(called);
  }
  return [...seen];
}

test('nightly.yml: scheduled, serialized without cancellation, behind release checks, never a release dependency', () => {
  const workflow = workflowText('nightly.yml');
  assert.match(workflow, /\non:\n  schedule:\n    - cron: /);
  assert.match(workflow, /\nconcurrency:\n  group: nightly\n  cancel-in-progress: false\n/);
  const release = releaseWorkflows();
  assert.ok(release.length > 10 && release.includes('unit.yml') && release.includes('workers.yml'), release.join());
  for (const name of release) {
    assert.notEqual(name, 'nightly.yml');
    // Comments may mention the nightly; no step or job may call or dispatch it.
    assert.doesNotMatch(workflowText(name).replace(/^\s*#.*$/gm, ''), /nightly\.yml|workflow run nightly|workflows\/nightly/, name);
  }
});

test('draft cleanup: only nightly drafts, older than 7 days, never the newest, a running or a referenced one', () => {
  const day = 86_400_000, now = Date.parse('2026-11-30T00:00:00Z'), at = d => new Date(now - d * day).toISOString();
  const drafts = [{ tag: 'node-package-1', createdAt: at(20) }, { tag: 'node-package-2', createdAt: at(15) }, { tag: 'node-package-3', createdAt: at(10) },
    { tag: 'node-package-4', createdAt: at(9) }, { tag: 'node-package-5', createdAt: at(8) }, { tag: 'node-package-6', createdAt: at(3) },
    { tag: 'node-package-7', createdAt: at(30) }];
  const nightly = { path: '.github/workflows/nightly.yml', status: 'completed' };
  const runs = { 1: nightly, 2: nightly, 3: nightly, 4: { ...nightly, status: 'in_progress' }, 5: nightly, 6: nightly,
    7: { path: '.github/workflows/node-linux-acceptance.yml', status: 'completed' } };
  assert.deepEqual(selectDeletions(drafts, runs, 'candidate node-package-3; run 5', { now }).map(d => d.tag), ['node-package-2', 'node-package-1']);
  assert.deepEqual(selectDeletions([drafts[0]], runs, '', { now }), [], 'the newest nightly draft is kept');
});
