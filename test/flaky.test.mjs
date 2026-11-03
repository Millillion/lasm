// The flaky-test quarantine (scripts/test/) and the nightly report's analysis
// (scripts/ci/flaky-report.mjs); docs/TESTING.md#flaky-tests.
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { mkdtempSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { entriesFor, loadQuarantine, notices, quarantineProblems, skipArguments } from '../scripts/test/quarantine.mjs';
import { buildReport, failingTests, markdown, supersededRuns } from '../scripts/ci/flaky-report.mjs';

const entry = { file: 'test/a.test.mjs', name: 'flaky (a.b) [x] $1', issue: 'https://github.com/Millillion/lasm/issues/7', since: '2026-11-01', reason: 'timing' };

test('the committed quarantine list is well formed', () => {
  const problems = quarantineProblems(loadQuarantine()).filter(problem => !/days ago/.test(problem));
  assert.deepEqual(problems, []);
});

test('quarantine entries need every field, a lasm issue, and expire after 7 days', () => {
  const today = new Date('2026-11-03T12:00:00Z');
  assert.deepEqual(quarantineProblems([entry], today), []);
  assert.deepEqual(quarantineProblems([{ ...entry, since: '2026-10-27' }], today), []);
  assert.match(quarantineProblems([{ ...entry, since: '2026-10-26' }], today)[0], /quarantined 8 days ago \(limit 7\)/);
  assert.match(quarantineProblems([{ ...entry, since: '2026-11-04' }], today)[0], /future/);
  assert.match(quarantineProblems([{ ...entry, issue: 'https://example.com/1' }], today)[0], /issue URL/);
  assert.match(quarantineProblems([{ ...entry, reason: '' }], today)[0], /missing reason/);
  assert.match(quarantineProblems([entry, { ...entry, file: './test/a.test.mjs' }], today)[0], /duplicate/);
});

test('entries apply to the files of a run, or to every file', () => {
  const other = { ...entry, file: 'test/b.test.mjs', name: 'other' };
  assert.deepEqual(entriesFor([entry, other], ['./test/a.test.mjs']), [entry]);
  assert.deepEqual(entriesFor([entry, other], ['test\\b.test.mjs']), [other]);
  assert.deepEqual(entriesFor([entry, other], []), [entry, other]);
  assert.match(notices([entry], { GITHUB_ACTIONS: 'true' })[0], /^::notice title=Quarantined test::.*test\/a\.test\.mjs › flaky/);
});

test('node --test skips exactly the quarantined test, whatever characters its name has', () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-quarantine-'));
  const file = join(dir, 'a.test.mjs');
  writeFileSync(file, `import test from 'node:test';
test('stable', () => {});
test(${JSON.stringify(entry.name)}, () => { throw new Error('flaky'); });
test(${JSON.stringify(entry.name + ' too')}, () => {});
`);
  const { NODE_TEST_CONTEXT, ...env } = process.env; // a nested node --test reports to this runner otherwise
  const run = spawnSync(process.execPath, ['--test', '--test-reporter=tap', ...skipArguments([entry]), file], { encoding: 'utf8', env });
  assert.equal(run.status, 0, run.stdout + run.stderr);
  assert.match(run.stdout, /# pass 2/);
  assert.match(run.stdout, /# fail 0/);
  const unskipped = spawnSync(process.execPath, ['--test', '--test-reporter=tap', file], { encoding: 'utf8', env });
  assert.notEqual(unskipped.status, 0);
});

const run = (id, extra) => ({ id, name: 'Unit tests', workflow_id: 1, head_branch: 'main', event: 'push', run_attempt: 1,
  conclusion: 'success', created_at: '2026-11-03T01:00:00Z', html_url: `https://github.com/r/actions/runs/${id}`, ...extra });
const job = (id, name, conclusion, extra) => ({ id, name, conclusion, html_url: `https://github.com/r/job/${id}`,
  started_at: '2026-11-03T01:00:00Z', completed_at: '2026-11-03T01:30:00Z', ...extra });

test('a run cancelled by a newer run of the same workflow and branch is superseded', () => {
  const runs = [run(1, { conclusion: 'cancelled' }), run(2, { created_at: '2026-11-03T02:00:00Z' }),
    run(3, { conclusion: 'cancelled', head_branch: 'other' }), run(4, { conclusion: 'cancelled', created_at: '2026-11-03T03:00:00Z' })];
  assert.deepEqual([...supersededRuns(runs)], [1]);
});

test('the report finds jobs that passed only on retry, timeouts and cancellations', () => {
  const runs = [run(10, { run_attempt: 2 }), run(11, { conclusion: 'failure', name: 'Folio', workflow_id: 2 }),
    run(12, { conclusion: 'cancelled', workflow_id: 3, name: 'Old' }), run(13, { workflow_id: 3, name: 'Old', created_at: '2026-11-03T05:00:00Z' })];
  const jobsByAttempt = {
    10: { 1: [job(100, 'unit', 'failure'), job(101, 'lint', 'cancelled')], 2: [job(102, 'unit', 'success'), job(103, 'lint', 'success')] },
    11: { 1: [job(110, 'e2e', 'timed_out'), job(111, 'build', 'cancelled')] },
  };
  const report = buildReport({ runs, jobsByAttempt, failures: { 100: ['the clock test'] }, since: 's', until: '2026-11-03T12:00:00Z', repository: 'Millillion/lasm',
    quarantine: [entry, { ...entry, name: 'old', since: '2026-10-20' }] });
  assert.equal(report.reruns.length, 1);
  assert.deepEqual(report.passedOnRetry.map(r => [r.job, r.passedAttempt, r.failedAttempts[0].tests]), [['unit', 2, ['the clock test']]]);
  assert.deepEqual(report.timedOut.map(r => r.job), ['e2e']);
  assert.deepEqual(report.cancelled.map(r => [r.job, r.minutes]), [['lint', 30], ['build', 30]]); // lint: cancelled, then re-run; not a flake
  assert.deepEqual(report.supersededCancellations, { Old: 1 });
  assert.deepEqual(report.quarantineExpired.map(r => r.name), ['old']);
  const body = markdown(report);
  assert.match(body, /### Passed only on retry \(1\)\n\n- \*\*Unit tests\*\* › unit \(main\): \[attempt 1\]\(https:\/\/github.com\/r\/job\/100\) failure: `the clock test`; passed on attempt 2/);
  assert.match(body, /past the 7-day limit/);
  assert.match(body, /Old 1/);
});

test('failing test names come from node --test, unit-tests.mjs and Playwright logs', () => {
  const log = ['2026-11-03T01:00:00.1234567Z ✖ host bridge wakes the waiter (12.5ms)', '✖ failing tests:', '  ✖ 2 tests failed',
    'FAIL dev-build-service.test.mjs (3.1 s): x', '  ✘  3 [chromium] › e2e.spec.mjs:10:5 › signs in (2.1s)', '✔ fine (1ms)'].join('\n');
  assert.deepEqual(failingTests(log), ['host bridge wakes the waiter', 'dev-build-service.test.mjs', '[chromium] › e2e.spec.mjs:10:5 › signs in']);
});
