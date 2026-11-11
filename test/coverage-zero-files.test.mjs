// Exit bar 3: every 0 % file of the unit suite is named, with the integration
// workflows that run it, in docs/evidence/coverage-baseline.json (scripts/coverage/zero-files.mjs).
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { zeroCoverage, zeroCoverageLine } from '../scripts/coverage/zero-files.mjs';
import { parse } from '../scripts/evidence/page.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const workflowsDir = `${root}.github/workflows`;
const file = (name, covered, total) => ({ file: name, lines: { covered, total, pct: total ? 100 * covered / total : 100 } });

test('0 % files are split into named and unnamed; empty files do not count', () => {
  const files = [file('a.mjs', 0, 10), file('b.mjs', 0, 4), file('c.mjs', 3, 4), file('empty.mjs', 0, 0)];
  const result = zeroCoverage(files, [{ file: 'a.mjs', workflows: ['unit.yml'] }, { file: 'c.mjs', workflows: ['unit.yml'] }], { workflowsDir });
  assert.deepEqual(result.zero, ['a.mjs', 'b.mjs']);
  assert.deepEqual(result.named, ['a.mjs']);
  assert.deepEqual(result.unnamed, ['b.mjs']);
  assert.deepEqual(result.missingWorkflows, []);
  assert.deepEqual(result.stale, ['c.mjs']);
  assert.equal(zeroCoverageLine(result), '0 % files: 2, named in the baseline: 1, not named: b.mjs');
});

test('a named workflow that does not exist, or no workflow at all, is reported', () => {
  const result = zeroCoverage([file('a.mjs', 0, 1)], [{ file: 'a.mjs', workflows: ['nope.yml', 'unit.yml'] }, { file: 'b.mjs', workflows: [] }], { workflowsDir });
  assert.deepEqual(result.missingWorkflows, ['a.mjs: nope.yml', 'b.mjs: no workflow']);
});

test('the evidence page reads the line report.mjs prints', () => {
  const log = 'lines 98.05 %, branches 97.16 %, functions 98.39 % (125 files) -> .work/coverage.json\n'
    + zeroCoverageLine({ zero: ['x', 'y'], named: ['x', 'y'], unnamed: [] });
  assert.deepEqual(parse.coverage(log), { lines: 98.05, branches: 97.16, functions: 98.39, files: 125, zeroFiles: 2, zeroNamed: 2, zeroUnnamed: [] });
  assert.deepEqual(parse.coverage(log.replace('not named: none', 'not named: a.mjs b.mjs')).zeroUnnamed, ['a.mjs', 'b.mjs']);
  // A log from before the line existed: the 0 % files are unknown.
  assert.equal(parse.coverage(log.split('\n')[0]).zeroFiles, undefined);
});

test('the baseline names, for each 0 % file it lists, workflows that exist and how they run it', () => {
  const baseline = JSON.parse(readFileSync(`${root}docs/evidence/coverage-baseline.json`, 'utf8'));
  assert.ok(Array.isArray(baseline.integration) && baseline.integration.length);
  for (const entry of baseline.integration) {
    assert.ok(existsSync(`${root}${entry.file}`), `${entry.file} exists`);
    assert.ok(entry.workflows.length && entry.workflows.every(w => existsSync(`${workflowsDir}/${w}`)), `${entry.file}: ${entry.workflows}`);
    assert.ok(entry.how?.length > 20, `${entry.file}: says how the workflows run it`);
  }
  const result = zeroCoverage(baseline.files, baseline.integration, { workflowsDir });
  assert.deepEqual(result.missingWorkflows, []);
});
