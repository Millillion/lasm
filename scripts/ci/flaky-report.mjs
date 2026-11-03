// Nightly flaky-test report (docs/TESTING.md#flaky-tests, .github/workflows/flaky.yml).
// Reads every workflow run of the last HOURS hours through the GitHub API and
// reports:
//   - re-run runs (run_attempt > 1), and in them each job that failed in an
//     earlier attempt and passed in a later one ("passed only on retry"), with
//     the failing tests named from the failed attempt's log;
//   - cancelled and timed-out jobs, except runs cancelled because a newer run
//     of the same workflow and branch replaced them (counted separately);
//   - the quarantine list (test/quarantine.json): each entry's age, and those
//     past the 7-day limit.
// The test runners here never retry a test inside a job (node --test has no
// retries; every Playwright config sets retries: 0), so a test that passed
// only on retry is one that failed in a job attempt that a re-run then passed.
//
//   node scripts/ci/flaky-report.mjs OUT_DIR [--hours 24] [--issue]
// Writes OUT_DIR/flaky-report.json and OUT_DIR/flaky-report.md. With --issue
// it opens, or updates, the one open issue labelled `flaky` with the report.
// Needs GITHUB_TOKEN (or GH_TOKEN) and GITHUB_REPOSITORY (default Millillion/lasm).
import { mkdirSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { ageDays, loadQuarantine, MAX_DAYS } from '../test/quarantine.mjs';

export const ISSUE_TITLE = 'Flaky tests and CI re-runs (nightly report)';
export const LABEL = 'flaky';
// A cancelled attempt is a cancellation (reported as one), not a failure: a job
// cancelled and then re-run did not pass "only on retry".
const FAILED = new Set(['failure', 'timed_out', 'startup_failure']);

/** Runs cancelled because a later run of the same workflow, branch and event started after them. */
export function supersededRuns(runs) {
  const superseded = new Set();
  for (const run of runs) {
    if (run.conclusion !== 'cancelled') continue;
    const created = Date.parse(run.created_at);
    if (runs.some(other => other.id !== run.id && other.workflow_id === run.workflow_id && other.head_branch === run.head_branch
      && other.event === run.event && Date.parse(other.created_at) > created)) superseded.add(run.id);
  }
  return superseded;
}

/** Test names that failed, from a job log (node --test spec, unit-tests.mjs, Playwright list reporter). */
export function failingTests(log) {
  const names = new Set();
  for (const raw of log.split(/\r?\n/)) {
    const line = raw.replace(/^﻿?\d{4}-\d{2}-\d{2}T\S+Z /, '').replace(/\x1b\[[0-9;]*m/g, '');
    let match;
    if ((match = line.match(/^\s*✖ (.+?)(?: \([\d.]+m?s\))?$/)) && !/failing tests:|^\s*✖ \d+ /.test(line)) names.add(match[1].trim());
    else if ((match = line.match(/^FAIL (\S+\.test\.mjs)/))) names.add(match[1]);
    else if ((match = line.match(/^\s*(?:✘|×)\s+\d+\s+(.+?)(?: \([\d.]+m?s\))?$/))) names.add(match[1].trim());
  }
  return [...names].slice(0, 50);
}

/**
 * The report from plain API data: `runs` (workflow runs), `jobsByAttempt`
 * (run id → attempt → jobs) for the runs examined, `logs` (job id → failing
 * test names), `quarantine` entries.
 */
export function buildReport({ runs, jobsByAttempt, failures = {}, quarantine = [], since, until, repository }) {
  const superseded = supersededRuns(runs);
  const report = { repository, since, until, runs: runs.length, reruns: [], passedOnRetry: [], cancelled: [], timedOut: [],
    supersededCancellations: {}, quarantine: [], quarantineExpired: [] };
  for (const run of runs) {
    const attempts = jobsByAttempt[run.id] ?? {};
    const link = { workflow: run.name, branch: run.head_branch, event: run.event, run: run.html_url, runId: run.id };
    if (superseded.has(run.id)) { report.supersededCancellations[run.name] = (report.supersededCancellations[run.name] ?? 0) + 1; continue; }
    if (run.run_attempt > 1) {
      report.reruns.push({ ...link, attempts: run.run_attempt, conclusion: run.conclusion });
      // A job passed only on retry: its last attempt succeeded and an earlier one failed.
      const byName = {};
      for (const [attempt, jobs] of Object.entries(attempts)) for (const job of jobs) (byName[job.name] ??= []).push({ attempt: Number(attempt), job });
      for (const [name, tries] of Object.entries(byName)) {
        tries.sort((a, b) => a.attempt - b.attempt);
        const last = tries.at(-1);
        const failedTries = tries.filter(t => t.attempt < last.attempt && FAILED.has(t.job.conclusion));
        if (last.job.conclusion === 'success' && failedTries.length)
          report.passedOnRetry.push({ ...link, job: name, failedAttempts: failedTries.map(t => ({ attempt: t.attempt, conclusion: t.job.conclusion,
            url: t.job.html_url, tests: failures[t.job.id] ?? [] })), passedAttempt: last.attempt });
      }
    }
    for (const [attempt, jobs] of Object.entries(attempts)) for (const job of jobs) {
      const minutes = job.started_at && job.completed_at ? +((Date.parse(job.completed_at) - Date.parse(job.started_at)) / 60_000).toFixed(1) : null;
      const entry = { ...link, attempt: Number(attempt), job: job.name, url: job.html_url, minutes };
      if (job.conclusion === 'cancelled') report.cancelled.push(entry);
      else if (job.conclusion === 'timed_out') report.timedOut.push(entry);
    }
  }
  const today = new Date(until);
  for (const entry of quarantine) {
    const row = { ...entry, ageDays: ageDays(entry, today) };
    report.quarantine.push(row);
    if (row.ageDays > MAX_DAYS) report.quarantineExpired.push(row);
  }
  return report;
}

export function markdown(report) {
  const lines = [`Nightly report of the last 24 hours (${report.since} to ${report.until}), ${report.runs} workflow runs. ` +
    `Policy: [docs/TESTING.md#flaky-tests](https://github.com/${report.repository}/blob/main/docs/TESTING.md#flaky-tests). ` + 'Generated by `scripts/ci/flaky-report.mjs`; this body is replaced every night.', ''];
  const section = (title, rows, render) => {
    lines.push(`### ${title} (${rows.length})`, '');
    if (rows.length === 0) lines.push('None.');
    else for (const row of rows.slice(0, 100)) lines.push(render(row));
    if (rows.length > 100) lines.push(`… and ${rows.length - 100} more (see the report artifact).`);
    lines.push('');
  };
  section('Passed only on retry', report.passedOnRetry, row => `- **${row.workflow}** › ${row.job} (${row.branch}): ` +
    row.failedAttempts.map(a => `[attempt ${a.attempt}](${a.url}) ${a.conclusion}${a.tests.length ? ': ' + a.tests.slice(0, 5).map(t => '`' + t.replace(/`/g, "'") + '`').join(', ') : ''}`).join('; ') +
    `; passed on attempt ${row.passedAttempt}`);
  section('Re-run workflow runs', report.reruns, row => `- [${row.workflow}](${row.run}) (${row.branch}, ${row.event}): ${row.attempts} attempts, ${row.conclusion ?? 'in progress'}`);
  section('Timed-out jobs', report.timedOut, row => `- [${row.workflow} › ${row.job}](${row.url}) (${row.branch}, attempt ${row.attempt}, ${row.minutes ?? '?'} min)`);
  section('Cancelled jobs (not superseded by a newer run)', report.cancelled, row => `- [${row.workflow} › ${row.job}](${row.url}) (${row.branch}, attempt ${row.attempt}, ${row.minutes ?? '?'} min)`);
  const superseded = Object.entries(report.supersededCancellations).sort((a, b) => b[1] - a[1]);
  lines.push(`### Runs cancelled by a newer run (${superseded.reduce((n, [, c]) => n + c, 0)})`, '',
    superseded.length ? superseded.map(([name, count]) => `${name} ${count}`).join(', ') : 'None.', '');
  if (report.unavailable?.length) lines.push(`### Jobs the API did not return (${report.unavailable.length})`, '', ...report.unavailable.map(line => `- ${line}`), '');
  section('Quarantined tests', report.quarantine, row => `- ${row.file} › \`${row.name}\`: ${row.ageDays} days (since ${row.since}), ${row.issue}${row.ageDays > MAX_DAYS ? ' — **past the 7-day limit: fix or delete it**' : ''}`);
  return lines.join('\n');
}

async function main() {
  const argv = process.argv.slice(2);
  const out = resolve(argv.find(arg => !arg.startsWith('--') && argv[argv.indexOf(arg) - 1] !== '--hours') ?? '.work/flaky');
  const hours = Number(argv.includes('--hours') ? argv[argv.indexOf('--hours') + 1] : 24);
  const repository = process.env.GITHUB_REPOSITORY ?? 'Millillion/lasm';
  const token = process.env.GITHUB_TOKEN || process.env.GH_TOKEN;
  if (!token) throw new Error('GITHUB_TOKEN or GH_TOKEN is required');
  let calls = 0;
  const api = async (path, { method = 'GET', body, raw = false } = {}) => {
    for (let attempt = 1; ; attempt++) {
      calls++;
      const response = await fetch(path.startsWith('https://') ? path : `https://api.github.com/repos/${repository}/${path}`, {
        method, headers: { Authorization: `Bearer ${token}`, Accept: 'application/vnd.github+json', 'User-Agent': 'lasm-flaky-report',
          ...(body ? { 'Content-Type': 'application/json' } : {}) }, body: body ? JSON.stringify(body) : undefined, signal: AbortSignal.timeout(60_000) });
      if (response.ok) return raw ? response.text() : response.status === 204 ? null : response.json();
      if (attempt < 4 && (response.status >= 500 || response.status === 429)) { await new Promise(done => setTimeout(done, 5000 * attempt)); continue; }
      throw new Error(`${method} ${path}: HTTP ${response.status} ${(await response.text()).slice(0, 300)}`);
    }
  };
  const until = new Date(), since = new Date(until.getTime() - hours * 3_600_000);
  const runs = [];
  for (let page = 1; page <= 30; page++) {
    const batch = await api(`actions/runs?per_page=100&page=${page}&created=${encodeURIComponent('>=' + since.toISOString())}`);
    runs.push(...batch.workflow_runs);
    if (batch.workflow_runs.length < 100) break;
  }
  const superseded = supersededRuns(runs);
  // Jobs are read only where they can matter: re-runs, and runs that did not succeed.
  const examined = runs.filter(run => !superseded.has(run.id) && (run.run_attempt > 1 || ['failure', 'cancelled', 'timed_out'].includes(run.conclusion)));
  const jobsByAttempt = {}, failures = {}, unavailable = [];
  for (const run of examined) {
    jobsByAttempt[run.id] = {};
    for (let attempt = 1; attempt <= run.run_attempt; attempt++) {
      const jobs = [];
      try {
        for (let page = 1; page <= 10; page++) {
          const batch = await api(`actions/runs/${run.id}/attempts/${attempt}/jobs?per_page=100&page=${page}`);
          jobs.push(...batch.jobs);
          if (batch.jobs.length < 100) break;
        }
      } catch (error) { unavailable.push(`${run.html_url} attempt ${attempt}: ${String(error.message).slice(0, 160)}`); }
      jobsByAttempt[run.id][attempt] = jobs;
    }
  }
  const quarantine = loadQuarantine();
  let report = buildReport({ runs, jobsByAttempt, quarantine, since: since.toISOString(), until: until.toISOString(), repository });
  for (const row of report.passedOnRetry) for (const attempt of row.failedAttempts) {
    const job = Object.values(jobsByAttempt[row.runId]).flat().find(j => j.html_url === attempt.url);
    try { failures[job.id] = failingTests(await api(`actions/jobs/${job.id}/logs`, { raw: true })); }
    catch (error) { failures[job.id] = [`(log unavailable: ${String(error.message).slice(0, 120)})`]; }
  }
  report = buildReport({ runs, jobsByAttempt, failures, quarantine, since: since.toISOString(), until: until.toISOString(), repository });
  report.apiCalls = calls;
  report.unavailable = unavailable;
  const body = markdown(report);
  mkdirSync(out, { recursive: true });
  writeFileSync(join(out, 'flaky-report.json'), JSON.stringify(report, null, 2) + '\n');
  writeFileSync(join(out, 'flaky-report.md'), body + '\n');
  console.log(body);
  if (argv.includes('--issue')) {
    try { await api(`labels/${LABEL}`); }
    catch { await api('labels', { method: 'POST', body: { name: LABEL, color: 'd93f0b', description: 'Flaky tests and CI re-runs (nightly report)' } }); }
    const open = await api(`issues?state=open&labels=${LABEL}&per_page=100`);
    const existing = open.find(issue => !issue.pull_request && issue.title === ISSUE_TITLE);
    if (existing) { await api(`issues/${existing.number}`, { method: 'PATCH', body: { body } }); console.log(`updated issue #${existing.number}`); }
    else { const created = await api('issues', { method: 'POST', body: { title: ISSUE_TITLE, body, labels: [LABEL] } }); console.log(`opened issue #${created.number}`); }
  }
  // The report never fails the workflow for what it finds; an expired quarantine
  // entry fails the unit suite instead (scripts/ci/unit-tests.mjs).
}

if (import.meta.url === pathToFileURL(process.argv[1]).href) await main();
