// The nightly full five-target suite (.github/workflows/nightly.yml; CI test
// policy, docs/PLAN.md). Never blocks or affects a release.
//
//   node scripts/nightly/driver.mjs gate --sha SHA [--force]
//     proceed only if main changed since the last reported nightly, no nightly is
//     still running, and no release-checks or release run is in progress.
//   node scripts/nightly/driver.mjs drive --state FILE --work DIR --deadline-minutes N
//     [--sha SHA --candidate-version V --candidate-release R --candidate-sha256 H --nightly-run ID]
//     dispatches the layout's runs (scripts/nightly/layout.json) a few at a time,
//     pausing while release checks run; when every run has completed, compares with
//     the baseline and opens or updates the regression issue. Before the deadline it
//     saves FILE and reports continue=true (nightly.yml then continues in a new run).
import assert from 'node:assert/strict';
import { parseArgs } from 'node:util';
import { existsSync, mkdirSync, readFileSync, writeFileSync, readdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { setTimeout as delay } from 'node:timers/promises';
import { pathToFileURL } from 'node:url';
import { root, repository, gh, run, output, summary } from '../release/lib.mjs';
import { compareCoverage, compareEcosystem, merge, markdown, runnerPlatform } from './compare.mjs';

export const issueTitle = 'Nightly regressions on main';
const workflows = { coverage: 'language-coverage-baseline.yml', ecosystem: 'ecosystem.yml' };

/** Every run to dispatch, from the layout. Pure, for tests. */
export function plannedRuns(layout, candidate, lean) {
  const common = { 'candidate-version': candidate.version, 'candidate-release': candidate.release, sha256: candidate.sha256 };
  const runs = layout.coverage.map(e => ({ kind: 'coverage', label: `${e.harness} ${e.runner}`, runner: e.runner, harness: e.harness,
    inputs: { harness: e.harness, shards: String(e.shards), only: 'all', runner: e.runner, 'max-parallel': String(layout.maxParallel[e.runner]), lean, ...common } }));
  for (const e of layout.ecosystem) runs.push({ kind: 'ecosystem', label: `ecosystem ${e.runner}${e.removeSystemC ? ' no-system-c' : ''}`, runner: e.runner,
    variant: e.removeSystemC ? 'no-system-c' : 'default',
    inputs: { runner: e.runner, projects: 'all', 'max-parallel': String(layout.maxParallel[e.runner]), lean, 'remove-system-c': String(Boolean(e.removeSystemC)), ...common } });
  return runs;
}

/** What to do next; pure, for tests. */
export function nextStep(state, { releaseActive, activeLimit }) {
  const pending = state.runs.filter(r => !r.id), active = state.runs.filter(r => r.id && r.status !== 'completed');
  if (!pending.length && !active.length) return { action: 'report' };
  if (pending.length && !releaseActive && active.length < activeLimit) return { action: 'dispatch', run: pending[0] };
  return { action: 'wait', reason: releaseActive && pending.length ? 'release checks in progress' : `${active.length} runs active` };
}

const api = (path, args = []) => JSON.parse(gh(['api', ...args, path]));
const busy = workflow => ['in_progress', 'queued', 'pending', 'waiting', 'requested'].some(status =>
  api(`repos/${repository}/actions/workflows/${workflow}/runs?status=${status}&per_page=1`).total_count > 0);
const releaseActive = () => busy('release-checks.yml') || busy('release.yml');

async function dispatch(workflow, inputs) {
  const before = new Date(Date.now() - 5000).toISOString();
  const file = join(root, '.work', `dispatch-${process.pid}.json`);
  mkdirSync(join(root, '.work'), { recursive: true });
  writeFileSync(file, JSON.stringify({ ref: 'main', inputs, return_run_details: true }));
  const response = gh(['api', '-X', 'POST', `repos/${repository}/actions/workflows/${workflow}/dispatches`, '--input', file]).trim();
  const id = response ? JSON.parse(response).workflow_run_id : undefined;
  if (id) return id;
  // Older API without run details: the newest dispatched run of this workflow created since.
  for (let attempt = 0; attempt < 30; attempt++) {
    await delay(5000);
    const runs = api(`repos/${repository}/actions/workflows/${workflow}/runs?event=workflow_dispatch&created=>=${before}&per_page=20`).workflow_runs;
    if (runs.length) return runs.sort((a, b) => b.id - a.id)[0].id;
  }
  throw new Error(`Could not find the run dispatched for ${workflow}`);
}

const isMain = import.meta.url === pathToFileURL(process.argv[1]).href;
if (isMain) {
  const [command, ...rest] = process.argv.slice(2);
  const { values: args } = parseArgs({ args: rest, options: { sha: { type: 'string' }, force: { type: 'boolean', default: false },
    state: { type: 'string' }, work: { type: 'string' }, 'deadline-minutes': { type: 'string', default: '300' },
    'candidate-version': { type: 'string' }, 'candidate-release': { type: 'string' }, 'candidate-sha256': { type: 'string' },
    'nightly-run': { type: 'string' } } });

  if (command === 'gate') {
    assert.match(args.sha ?? '', /^[a-f0-9]{40}$/);
    const stop = reason => { output({ proceed: false, reason }); summary(`### Nightly skipped\n\n${reason}`); process.exit(0); };
    if (releaseActive()) stop('a release-checks or release run is in progress; release checks come first');
    const nightly = api(`repos/${repository}/actions/workflows/nightly.yml/runs?per_page=30`).workflow_runs
      .filter(r => String(r.id) !== process.env.GITHUB_RUN_ID);
    if (nightly.some(r => r.status !== 'completed')) stop('an earlier nightly is still running');
    let last;
    for (const r of nightly) {
      const artifacts = api(`repos/${repository}/actions/runs/${r.id}/artifacts`).artifacts;
      if (!artifacts.some(a => a.name === 'nightly-report' && !a.expired)) continue;
      const directory = join(root, '.work', 'last-nightly');
      gh(['run', 'download', String(r.id), '--repo', repository, '--name', 'nightly-report', '--dir', directory]);
      last = JSON.parse(readFileSync(join(directory, 'report.json'), 'utf8'));
      break;
    }
    if (last?.sha === args.sha && !args.force) stop(`main (${args.sha}) has not changed since the last nightly`);
    output({ proceed: true, reason: last ? `main changed since ${last.sha}` : 'no earlier nightly report' });
    process.exit(0);
  }

  assert.equal(command, 'drive', 'Usage: driver.mjs gate|drive (see the header)');
  const stateFile = resolve(args.state), work = resolve(args.work);
  mkdirSync(work, { recursive: true });
  const layout = JSON.parse(readFileSync(join(root, 'scripts/nightly/layout.json'), 'utf8'));
  let state;
  if (existsSync(stateFile)) state = JSON.parse(readFileSync(stateFile, 'utf8'));
  else {
    const candidate = { version: args['candidate-version'], release: args['candidate-release'], sha256: args['candidate-sha256'] };
    assert.match(candidate.version ?? '', /^0\.1\.0-experimental\.\d+$/); assert.match(candidate.release ?? '', /^node-package-\d+$/);
    assert.match(candidate.sha256 ?? '', /^[a-f0-9]{64}$/); assert.match(args.sha ?? '', /^[a-f0-9]{40}$/);
    const lean = JSON.parse(readFileSync(join(root, 'scripts/ci/acceptance-versions.json'), 'utf8')).lean;
    state = { schema: 1, sha: args.sha, candidate, lean, startedAt: new Date().toISOString(), nightlyRuns: [], runs: plannedRuns(layout, candidate, lean) };
  }
  if (args['nightly-run'] && !state.nightlyRuns.includes(args['nightly-run'])) state.nightlyRuns.push(args['nightly-run']);
  const save = () => writeFileSync(stateFile, JSON.stringify(state, null, 2) + '\n');
  const deadline = Date.now() + Number(args['deadline-minutes']) * 60_000;
  for (;;) {
    for (const r of state.runs.filter(r => r.id && r.status !== 'completed')) {
      const view = api(`repos/${repository}/actions/runs/${r.id}`);
      Object.assign(r, { status: view.status, conclusion: view.conclusion });
    }
    const step = nextStep(state, { releaseActive: state.runs.some(r => !r.id) && releaseActive(), activeLimit: layout.activeRuns });
    if (step.action === 'report') break;
    if (step.action === 'dispatch') {
      step.run.id = await dispatch(workflows[step.run.kind], step.run.inputs);
      step.run.status = 'queued'; step.run.dispatchedAt = new Date().toISOString();
      console.log(`dispatched ${step.run.label}: run ${step.run.id}`);
      save();
      continue;
    }
    if (Date.now() > deadline) {
      save();
      output({ done: false });
      summary(`### Nightly continues in a new run\n\n${state.runs.filter(r => r.status === 'completed').length}/${state.runs.length} runs completed, ${state.runs.filter(r => !r.id).length} not dispatched yet (${step.reason}).`);
      process.exit(0);
    }
    await delay(120_000);
  }

  // Every run completed: assemble, compare with the baseline, report.
  const coverage = {}, ran = [];
  for (const r of state.runs) {
    const directory = join(work, r.kind === 'coverage' ? 'coverage' : `ecosystem-${r.variant}`, String(r.id));
    if (!existsSync(directory)) {
      try { gh(['run', 'download', String(r.id), '--repo', repository, '--dir', directory]); } catch { mkdirSync(directory, { recursive: true }); }
    }
    if (r.kind !== 'coverage') continue;
    const platform = runnerPlatform[r.runner];
    ran.push([platform, r.harness]);
    if (readdirSync(directory).length) (coverage[platform] ??= []).push(directory);
  }
  const current = {};
  for (const [platform, directories] of Object.entries(coverage)) {
    const file = join(work, `coverage-${platform}.json`);
    run(process.execPath, [join(root, 'scripts/language-coverage/assemble.mjs'), file, JSON.stringify(Object.fromEntries(state.runs
      .filter(r => r.kind === 'coverage' && runnerPlatform[r.runner] === platform).map(r => [r.harness, r.id]))), ...directories], { cwd: root });
    current[platform] = JSON.parse(readFileSync(file, 'utf8'));
  }
  const ecosystemResults = {};
  for (const variant of ['default', 'no-system-c']) {
    const directory = join(work, `ecosystem-${variant}`), file = join(work, `ecosystem-${variant}.json`);
    mkdirSync(directory, { recursive: true });
    run(process.execPath, [join(root, 'scripts/ecosystem/assemble.mjs'), directory, file], { cwd: root });
    ecosystemResults[variant] = JSON.parse(readFileSync(file, 'utf8'));
  }
  const baselineFiles = JSON.parse(readFileSync(join(root, 'scripts/nightly/baseline.json'), 'utf8'));
  const load = key => JSON.parse(readFileSync(join(root, baselineFiles[key]), 'utf8'));
  const comparison = merge(compareCoverage(load('coverage'), current, ran),
    ...['default', 'no-system-c'].map(variant => compareEcosystem(load(variant === 'default' ? 'ecosystem' : 'ecosystemNoSystemC'), ecosystemResults[variant], variant,
      state.runs.filter(r => r.kind === 'ecosystem' && r.variant === variant).map(r => runnerPlatform[r.runner]))));
  const report = { schema: 1, date: new Date().toISOString().slice(0, 10), sha: state.sha, candidate: state.candidate, nightlyRuns: state.nightlyRuns,
    baseline: { coverage: baselineFiles.coverage, ecosystem: baselineFiles.ecosystem, ecosystemNoSystemC: baselineFiles.ecosystemNoSystemC },
    runs: state.runs.map(({ inputs, ...r }) => r), failedRuns: state.runs.filter(r => r.conclusion !== 'success').map(({ inputs, ...r }) => r), comparison };
  writeFileSync(join(work, 'report.json'), JSON.stringify(report, null, 1) + '\n');
  const body = markdown(report);
  writeFileSync(join(work, 'report.md'), body);
  summary(body);
  if (comparison.regressions.length || comparison.missing.length) {
    const open = JSON.parse(gh(['issue', 'list', '--repo', repository, '--state', 'open', '--search', `in:title "${issueTitle}"`, '--json', 'number,title']))
      .find(i => i.title === issueTitle);
    if (open) gh(['issue', 'comment', String(open.number), '--repo', repository, '--body-file', join(work, 'report.md')]);
    else gh(['issue', 'create', '--repo', repository, '--title', issueTitle, '--body-file', join(work, 'report.md')]);
    console.log(open ? `updated issue #${open.number}` : 'opened the regression issue');
  }
  save();
  output({ done: true, regressions: comparison.regressions.length });
}
