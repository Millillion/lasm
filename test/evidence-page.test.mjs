// The public test-evidence page (scripts/evidence/page.mjs, docs/TESTING.md#the-test-evidence-page).
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { benchmarks, campaignStreak, exitBar, matrixList, PAGE, parse, proofCounts, renderPage, repositoryFacts, summarize } from '../scripts/evidence/page.mjs';
import { checkPage } from '../scripts/content/index.mjs';
import { splitFrontMatter } from '../scripts/content/frontmatter.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const at = { generatedAt: '2026-11-07T10:41:00.000Z', repository: 'Millillion/lasm', commit: '0123456789abcdef' };
const run = (id, conclusion = 'success') => ({ id, url: `https://github.com/Millillion/lasm/actions/runs/${id}`, event: 'schedule', branch: 'main', date: '2026-11-07T03:00:00Z', conclusion });
const job = (name, conclusion = 'success', extra = {}) => ({ name, conclusion, url: `https://github.com/Millillion/lasm/actions/runs/1/job/${name.length}`, ...extra });

test('every PROOFS.md states its proposition and theorem counts', () => {
  const repo = repositoryFacts();
  assert.ok(repo.proofs.length >= 2);
  for (const p of repo.proofs) {
    assert.ok(p.propositions > 0, p.path);
    assert.ok(p.theorems >= p.propositions, p.path);
  }
  const library = repo.proofs.find(p => p.path === 'library/PROOFS.md');
  assert.equal(library.sections.reduce((n, s) => n + s.propositions, 0), library.propositions);
  assert.deepEqual(proofCounts('x', '**22 propositions**, each proved (122 theorems in all: …)'), { path: 'x', propositions: 22, theorems: 122 });
  assert.throws(() => proofCounts('x', 'no counts'), /no "\*\*N propositions\*\*" line/);
});

test('the lists come from the workflows and the benchmark page', () => {
  assert.deepEqual(matrixList('    matrix:\n        app: [tandem, ledger]\n', 'app'), ['tandem', 'ledger']);
  const repo = repositoryFacts();
  assert.ok(repo.fuzzTargets.length >= 3 && repo.fuzzTargets.every(t => t.description));
  assert.ok(repo.dstApps.length >= 1);
  assert.ok(repo.equivalence.targets.includes('node'));
  const b = benchmarks('<!-- benchmarks:generated:start -->\nLatest: **1.2.3** (2026-11-01), x.\n\n| A | B |\n| --- | --- |\n| [h](benchmarks/history/x.json) | 1 |\n\n### Change from the previous release (1.2.2)\n\nNo metric is worse.\n\n| T |\n<!-- benchmarks:generated:end -->');
  assert.deepEqual([b.version, b.date, b.metrics, b.change], ['1.2.3', '2026-11-01', 1, 'No metric is worse.']);
  assert.match(b.table, /\]\(\.\.\/\.\.\/docs\/benchmarks\/history\/x\.json\)/);
});

test('job logs: the line each tool prints', () => {
  const t = '2026-11-07T12:47:31.6357358Z ';
  assert.deepEqual(parse.mutation(`${t}ui-dom: 93.6 % of 758 mutants (threshold 92 %) {"Killed":689}`), { module: 'ui-dom', score: 93.6, mutants: 758, threshold: 92 });
  assert.deepEqual(parse.differential(`${t}80 programs, 9500 cases, 0 divergences, 0 upstream suspects (native vs interpreter, not Lasm), 0 harness errors (summary: x)\n${t}0 programs, 0 cases, 1 divergences, 0 upstream suspects (native vs interpreter, not Lasm), 0 harness errors`),
    { programs: 80, cases: 9500, divergences: 1, harnessErrors: 0 });
  assert.deepEqual(parse.fuzz(`${t}fuzz lean-rpc (600 s, seed 42)\n${t}ok   lean-rpc: 123456 runs, 900 edges`), { seconds: 600, seed: 42, runs: 123456, ok: true });
  assert.equal(parse.fuzz(`${t}FAIL ui-patch: 77 runs, 1/2 blocks`).ok, false);
  assert.deepEqual(parse.dst(`${t}tandem: 812 seeds, all passed (1200.1 s)\n${t}tandem: 2 failing seed(s) of 301: 5, 9 (600.0 s)`),
    { phases: [{ seeds: 812, failing: 0 }, { seeds: 301, failing: 2 }], seeds: 1113, failing: 2 });
  assert.equal(parse.mutation('nothing'), null);
  assert.equal(parse.dst('nothing'), null);
});

test('offline, the page is valid content and says CI was not read', () => {
  const page = renderPage(summarize(repositoryFacts(), null, at));
  assert.deepEqual(checkPage(`${root}${PAGE}`, page).filter(p => !/test-evidence\.json|evidence-page\.yml/.test(p)), []);
  const { data } = splitFrontMatter(page);
  assert.equal(data.aiGenerated, true);
  assert.equal(data.kind, 'platform');
  assert.match(page, /\*\*Generated\*\* by .* at \*\*2026-11-07 10:41:00 UTC\*\* from commit `0123456789`/);
  assert.match(page, /CI results were not read/);
  assert.match(page, /\| \*\*Total\*\* \|/);
});

test('with CI results, each measured fact links its run, and failures show', () => {
  const repo = repositoryFacts();
  const levels = { L0: { ok: true, requirements: [] }, L1: { ok: false, requirements: [{ workflow: 'w.yml', job: '^x$', ok: false, failed: ['x: failure'], run: 'https://r/9' }] }, L2: { ok: false, noEvidenceYet: true }, L3: { ok: false, noEvidenceYet: true } };
  const ci = {
    platforms: [{ id: 'node', row: 'Node.js 24+', level: 0, levels }],
    tiers: [{ tier: 'Nightly', workflow: 'mutation.yml', what: 'mutation', run: run(5, 'failure') }, { tier: 'Weekly', workflow: 'ci-weekly.yml', what: 'soak', run: null }],
    mutation: { run: run(5, 'failure'), modules: [job('module (ui-dom)', 'failure', { module: 'ui-dom', score: 80.5, mutants: 700, threshold: 92 })] },
    fuzz: { run: run(6), targets: [job('Fuzz lean-rpc', 'success', { seconds: 600, runs: 1234567, seed: 7 })] },
    dst: { run: run(7), apps: [job('tandem, random seeds', 'success', { seeds: 900, failing: 0 })] },
    differential: { run: run(8), jobs: [job('differential (release)', 'success', { programs: 80, cases: 9500, divergences: 0 })] },
    equivalence: { fetch: { run: run(9), jobs: [job('equivalence (fetch-example)')] }, conduit: { run: run(10), jobs: [job('API on Node 24')] }, conduitPlatforms: { run: null, jobs: [] } },
  };
  const summary = summarize(repo, ci, at);
  assert.deepEqual(summary.ci.platforms[0].unmet, [{ level: 'L1', workflow: 'w.yml', job: '^x$', why: 'x: failure', run: 'https://r/9' }]);
  const page = renderPage(summary);
  assert.match(page, /\| Node\.js 24\+ \| \*\*L0\*\* \| yes \| no \| none yet \| none yet \|/);
  assert.match(page, /Node\.js 24\+, L1: `w\.yml` job `\/\^x\$\/`: x: failure \(\[run\]\(https:\/\/r\/9\)\)/);
  assert.match(page, /\| ui-dom \| 80\.5 % \| 700 \| 92 % \| \[failed\]\(/);
  assert.match(page, /\| \[`ci-weekly\.yml`\]\(\.\.\/\.\.\/\.github\/workflows\/ci-weekly\.yml\) \| soak \| no run yet \| — \|/);
  assert.match(page, /\| lean-rpc \| 600 \| 1,234,567 \| 7 \| \[passed\]\(/);
  assert.match(page, /\| tandem \| 900 \| 0 \| \[passed\]\(/);
  assert.match(page, /\| differential \(release\) \| 80 \| 9,500 \| 0 \|/);
  assert.match(page, /Latest nightly run: \[2026-11-07\]\(https:\/\/github\.com\/Millillion\/lasm\/actions\/runs\/5\), failed\./);
  assert.doesNotMatch(page, /CI results were not read/);
});

test('the committed page is the generator\'s output format', () => {
  const page = readFileSync(`${root}${PAGE}`, 'utf8');
  assert.deepEqual(checkPage(`${root}${PAGE}`, page), []);
  assert.match(page, /^> \*\*Generated\*\* by \[`scripts\/evidence\/page\.mjs`\]/m);
});

test('job logs: the unit suite\'s coverage line', () => {
  assert.deepEqual(parse.coverage('2026-11-10T08:20:43.1Z lines 98.08 %, branches 97.08 %, functions 98.38 % (143 files) -> .work/coverage.json'),
    { lines: 98.08, branches: 97.08, functions: 98.38, files: 143 });
  assert.equal(parse.coverage('nothing'), null);
});

test('campaigns: consecutive clean nights, Sundays left out, ended by a failure, a cancellation or a missing campaign', () => {
  const r = (path, date, conclusion = 'success') => ({ path: `.github/workflows/${path}`, event: 'schedule', created_at: date, conclusion, html_url: `https://r/${path}/${date}` });
  // The nights of Tue 10, Sat 7, Fri 6 (dst failed) and Thu 5 (UTC, as the crons run); a failure on Sunday evening in New York is left out.
  const nights = ['2026-11-10', '2026-11-07', '2026-11-06', '2026-11-05'];
  const runs = {
    'differential.yml': nights.map(d => r('differential.yml', `${d}T02:00:00Z`)),
    'fuzz.yml': [...nights.map(d => r('fuzz.yml', `${d}T07:23:00Z`)), r('fuzz.yml', '2026-11-09T03:00:00Z', 'failure')],
    'dst-nightly.yml': nights.map(d => r('dst-nightly.yml', `${d}T05:00:00Z`, d === '2026-11-06' ? 'failure' : 'success')),
  };
  assert.deepEqual(campaignStreak(runs), { nights: 2, endedOn: '2026-11-06', why: 'dst-nightly.yml failure', run: 'https://r/dst-nightly.yml/2026-11-06T05:00:00Z' });
  runs['dst-nightly.yml'] = runs['dst-nightly.yml'].filter(x => !x.created_at.startsWith('2026-11-07'));
  assert.deepEqual(campaignStreak(runs), { nights: 1, endedOn: '2026-11-07', why: 'no run of dst-nightly.yml', run: null });
  runs['fuzz.yml'][0].conclusion = 'cancelled';
  assert.equal(campaignStreak(runs).why, 'fuzz.yml cancelled');
  assert.deepEqual(campaignStreak({ 'fuzz.yml': [] }), { nights: 0, endedOn: null, why: 'no runs yet', run: null });
  assert.deepEqual(campaignStreak({ 'fuzz.yml': [r('fuzz.yml', '2026-11-10T07:00:00Z')] }), { nights: 1, endedOn: null, why: 'no older runs', run: null });
});

test('the exit bar: each of the eight items from the repository and CI, met only when all of it holds', () => {
  const repo = { ...repositoryFacts(), quarantine: [], modelDifferentials: ['serverless-http', 'ui-decode', 'lasm-js-wire'], featureGenerator: true,
    mutationModules: ['a', 'b'], propositions: { proved: 5, candidates: 2, citations: 4, problems: 0, oracles: { named: 2, total: 2, unnamed: [] }, properties: { named: 1, total: 1, unnamed: [] } } };
  const platform = (id, level) => ({ id, row: id, level, levels: {} });
  const ci = {
    platforms: [platform('node', 3), platform('workers', 3), platform('browser', 3), platform('lambda', 2)],
    mutation: { run: run(1), modules: [job('module (a)', 'success', { module: 'a', score: 91 }), job('module (b)', 'success', { module: 'b', score: 80 })] },
    coverage: { run: run(2), jobs: [job('unit / unit', 'success', { lines: 80.5, files: 140 })] },
    campaigns: { nights: 30, endedOn: null, why: 'no older runs', run: null },
  };
  const status = (r, c) => exitBar(r, c).map(x => x.status);
  assert.deepEqual(status(repo, ci), ['met', 'met', 'partly met', 'met', 'partly met', 'not measured', 'met', 'partly met']);
  assert.deepEqual(exitBar(repo, ci).map(x => x.item), [1, 2, 3, 4, 5, 6, 7, 8]);
  // Each item fails on its own.
  const worse = status({ ...repo, quarantine: [{ since: '2026-11-09' }], modelDifferentials: ['serverless-http'],
    propositions: { ...repo.propositions, properties: { named: 0, total: 1, unnamed: ['x'] } } },
  { ...ci, platforms: [platform('node', 3), platform('workers', 2), platform('browser', 3), platform('lambda', -1)],
    mutation: { run: run(1), modules: [job('module (a)', 'failure', { module: 'a' })] }, coverage: { run: run(2), jobs: [job('unit / unit', 'success', { lines: 70, files: 140 })] },
    campaigns: { nights: 3, endedOn: '2026-11-06', why: 'dst-nightly.yml failure' } });
  assert.deepEqual(worse, ['not met', 'not met', 'not met', 'not met', 'not met', 'not measured', 'not met', 'not met']);
  const rows = exitBar(repo, { ...ci, platforms: [platform('lambda', -1), platform('node', 2)] });
  assert.match(rows[0].measured, /^1 of 2 platforms at L2 or higher \(not: lambda\); at L3: 0 of 3/);
  assert.equal(status({ ...repo, featureGenerator: false }, ci)[7], 'not met');
  assert.deepEqual(status(repo, null).slice(0, 4), ['not read', 'not read', 'not read', 'not read']);
  assert.equal(status(repo, { ...ci, coverage: { run: null, jobs: [] } })[2], 'not measured');
  // On the page, first.
  const page = renderPage(summarize(repo, null, at));
  assert.ok(page.indexOf('## The exit bar') < page.indexOf('## Platforms'));
  assert.match(page, /\| 7 \| Propositions \| \*\*met\*\* \| the lint is green; 2 of 2 fuzz oracles and 1 of 1 properties name a proposition; 2 candidates, 5 proved propositions \|/);
});
