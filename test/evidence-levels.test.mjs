// Platform evidence levels (scripts/evidence/levels.mjs, docs/TESTING.md#evidence-levels).
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { END, evaluate, LEVELS, render, requirementResult, START } from '../scripts/evidence/levels.mjs';

const config = JSON.parse(readFileSync(new URL('../scripts/evidence/platforms.json', import.meta.url), 'utf8'));
const now = Date.parse('2026-11-03T12:00:00Z');
const run = (id, branch, created, extra) => ({ id, head_branch: branch, created_at: created, updated_at: created, html_url: `https://x/runs/${id}`, ...extra });
const job = (name, conclusion) => ({ name, conclusion });

test('the newest run with a matching, non-skipped job decides a requirement', () => {
  const runs = { 'w.yml': [run(3, 'main', '2026-11-03T00:00:00Z'), run(2, 'main', '2026-11-02T00:00:00Z'), run(1, 'main', '2026-09-01T00:00:00Z')] };
  const jobs = { 3: [job('build', 'skipped')], 2: [job('build', 'success'), job('build arm', 'failure')], 1: [job('build', 'success')] };
  assert.equal(requirementResult({ workflow: 'w.yml', job: '^build$' }, runs, jobs, now, 30).ok, true);
  const failed = requirementResult({ workflow: 'w.yml', job: '^build' }, runs, jobs, now, 30);
  assert.deepEqual([failed.ok, failed.failed], [false, ['build arm: failure']]);
  const stale = requirementResult({ workflow: 'w.yml', job: '^build$' }, { 'w.yml': [runs['w.yml'][2]] }, jobs, now, 30);
  assert.deepEqual([stale.ok, stale.stale, stale.ageDays], [false, true, 63]);
  assert.equal(requirementResult({ workflow: 'none.yml', job: 'x' }, runs, jobs, now, 30).missing, true);
});

test('a level counts only when it and every level below it hold; null is no evidence yet', () => {
  const small = { maxAgeDays: 30, platforms: [
    { id: 'a', row: 'A', L0: [{ workflow: 'w.yml', job: '^ok$' }], L1: [{ workflow: 'w.yml', job: '^ok$' }], L2: [{ workflow: 'w.yml', job: '^bad$' }], L3: [{ workflow: 'w.yml', job: '^ok$' }] },
    { id: 'b', row: 'B', L0: [{ workflow: 'w.yml', job: '^bad$' }], L1: [{ workflow: 'w.yml', job: '^ok$' }], L2: null, L3: null },
    { id: 'c', row: 'C', L0: [{ workflow: 'w.yml', job: '^ok$' }], L1: null, L2: [{ workflow: 'w.yml', job: '^ok$' }], L3: null }] };
  const runs = { 'w.yml': [run(1, 'main', '2026-11-03T00:00:00Z')] };
  const results = evaluate(small, runs, { 1: [job('ok', 'success'), job('bad', 'failure')] }, now);
  assert.deepEqual(results.map(r => r.level), [1, -1, 0]);
  assert.equal(results[2].levels.L1.noEvidenceYet, true);
});

test('the committed configuration names every level for every platform, with valid patterns', () => {
  assert.deepEqual(Object.keys(config.levels), LEVELS);
  for (const platform of config.platforms) for (const name of LEVELS) {
    assert.ok(name in platform, `${platform.id} ${name}`);
    for (const r of platform[name] ?? []) { assert.match(r.workflow, /^[a-z0-9-]+\.yml$/); new RegExp(r.job); }
  }
});

test('render rewrites only the Evidence column and the legend, and is stable', () => {
  const readme = readFileSync(new URL('../README.md', import.meta.url), 'utf8');
  const results = config.platforms.map((p, i) => ({ id: p.id, row: p.row, level: i % 4 }));
  const once = render(readme, results, config);
  assert.equal(render(once, results, config), once);
  const before = readme.slice(0, readme.indexOf(START)), after = readme.slice(readme.indexOf(END));
  assert.ok(once.startsWith(before) && once.endsWith(after));
  const rows = once.slice(once.indexOf(START), once.indexOf(END)).split('\n').filter(l => l.startsWith('| ') && !l.startsWith('| ---'));
  assert.equal(rows.length, config.platforms.length + 1);
  assert.match(rows[0], /\| Since \| Evidence \|$/);
  assert.match(rows[1], /^\| Node\.js 24\+ .* \| L0 \|$/);
  // The other cells are kept as written.
  const strip = text => text.slice(text.indexOf(START), text.indexOf(END)).split('\n').filter(l => l.startsWith('| ') && !l.startsWith('| ---'))
    .map(l => l.replace(/ \| (L[0-3]|—|Evidence) \|$/, ' |'));
  assert.deepEqual(strip(once), strip(readme));
  assert.throws(() => render(readme, results.slice(1), config), /no platform .* for the README row "Node\.js/);
  assert.throws(() => render('no markers', results, config), /markers/);
});
