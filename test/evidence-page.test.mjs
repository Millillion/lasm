// The public test-evidence page (scripts/evidence/page.mjs, docs/TESTING.md#the-test-evidence-page).
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { appPlatforms, appResults, benchmarks, campaignStreak, exitBar, generatorGaps, matrixList, PAGE, parse, proofCounts, quarantineHistory, renderPage, repositoryFacts, summarize } from '../scripts/evidence/page.mjs';
import { evaluate } from '../scripts/evidence/levels.mjs';
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
  // A guided campaign (scripts/differential/run.mjs --guided 1) adds its coverage lines.
  assert.deepEqual(parse.differential(`${t}coverage growth by campaign: 2026-11-10 +900 (900), 2026-11-11 +120 (1020)\n${t}coverage: 2400 features (2300 runtime C, 100 glue), 120 new (110 runtime C, 10 glue; 70 from mutants, 50 from generated cases), 1020 in all campaigns, corpus 300 cases, 400 mutants run\n${t}50 programs, 6000 cases, 0 divergences, 0 upstream suspects (x), 0 harness errors`).coverage,
    { features: 2400, runtimeC: 2300, glue: 100, new: 120, newRuntimeC: 110, newGlue: 10, newFromMutants: 70, newFromGenerated: 50, cumulative: 1020, corpus: 300, mutants: 400,
      nights: [{ date: '2026-11-10', new: 900, cumulative: 900 }, { date: '2026-11-11', new: 120, cumulative: 1020 }] });
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
    differential: { run: run(8), jobs: [job('differential (release)', 'success', { programs: 80, cases: 9500, divergences: 0, coverage: { features: 2400, new: 120, newFromMutants: 70, nights: [{ date: '2026-11-11', new: 120, cumulative: 1020 }] } })] },
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
  assert.match(page, /\| differential \(release\) \| 80 \| 9,500 \| 0 \| 2,400 \(\+120\) \|/);
  assert.match(page, /Coverage growth by campaign .*\(release\): 2026-11-11 \+120 \(1,020\)/);
  assert.match(summary.exitBar[7].measured, /coverage feedback: the latest nightly campaign reached 2,400 features in \(release\) \(120 new, 70 of them by mutants of the corpus\)/);
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
  const repo = { ...repositoryFacts(), quarantine: [], quarantineHistory: { days: 14, since: '2026-10-27', commits: 0, entries: [] }, modelDifferentials: ['serverless-http', 'ui-decode', 'lasm-js-wire'], featureGenerator: true,
    mutationModules: ['a', 'b'], propositions: { proved: 5, candidates: 2, citations: 4, problems: 0, oracles: { named: 2, total: 2, unnamed: [] }, properties: { named: 1, total: 1, unnamed: [] } } };
  const platform = (id, level) => ({ id, row: id, level, levels: {} });
  const ci = {
    platforms: [platform('node', 3), platform('workers', 3), platform('browser', 3), platform('lambda', 2)],
    mutation: { run: run(1), modules: [job('module (a)', 'success', { module: 'a', score: 91 }), job('module (b)', 'success', { module: 'b', score: 80 })] },
    coverage: { run: run(2), jobs: [job('unit / unit', 'success', { lines: 80.5, files: 140, zeroFiles: 2, zeroNamed: 2, zeroUnnamed: [] })] },
    campaigns: { nights: 30, endedOn: null, why: 'no older runs', run: null },
    apps: [{ app: 'conduit', oracle: 'RealWorld', claims: [{ row: 'Node', ok: true }, { row: 'Bun', ok: true }] }],
  };
  const status = (r, c) => exitBar(r, c).map(x => x.status);
  assert.deepEqual(status(repo, ci), ['met', 'met', 'met', 'met', 'met', 'met', 'met', 'met']);
  // 8: the generator generates every feature the bar names (TESTING_STRATEGY.md §2), else only partly.
  assert.deepEqual(repo.generatorGaps, []);
  assert.equal(status({ ...repo, generatorGaps: ['Thunk'] }, ci)[7], 'partly met');
  assert.match(exitBar({ ...repo, generatorGaps: ['ST', 'structures with many fields'] }, ci)[7].measured, /not generated yet: `ST`, structures with many fields$/);
  assert.match(exitBar(repo, ci)[7].measured, /generated: `Thunk`, `ST`, `FloatArray`, structures with many fields$/);
  assert.deepEqual(generatorGaps('structure A where\n  f0 : Nat\ndef x := Thunk.mk'), ['ST', 'FloatArray', 'structures with many fields']);
  assert.deepEqual(exitBar(repo, ci).map(x => x.item), [1, 2, 3, 4, 5, 6, 7, 8]);
  // Each item fails on its own.
  const worse = status({ ...repo, quarantine: [{ since: '2026-11-09' }], modelDifferentials: ['serverless-http'],
    propositions: { ...repo.propositions, properties: { named: 0, total: 1, unnamed: ['x'] } } },
  { ...ci, platforms: [platform('node', 3), platform('workers', 2), platform('browser', 3), platform('lambda', -1)],
    mutation: { run: run(1), modules: [job('module (a)', 'failure', { module: 'a' })] }, coverage: { run: run(2), jobs: [job('unit / unit', 'success', { lines: 70, files: 140 })] },
    campaigns: { nights: 3, endedOn: '2026-11-06', why: 'dst-nightly.yml failure' },
    apps: [{ app: 'conduit', claims: [{ row: 'Node', ok: true }, { row: 'Bun', ok: false, unmet: ['x'] }] }] });
  assert.deepEqual(worse, ['not met', 'not met', 'not met', 'not met', 'not met', 'not met', 'not met', 'not met']);
  // 3: a 0 % file nobody names fails it; a log without the 0 % line only partly meets it.
  const coverage = extra => ({ ...ci, coverage: { run: run(2), jobs: [job('unit / unit', 'success', { lines: 80.5, files: 140, ...extra })] } });
  assert.equal(exitBar(repo, coverage({ zeroFiles: 3, zeroNamed: 2, zeroUnnamed: ['src/x.mjs'] }))[2].status, 'not met');
  assert.match(exitBar(repo, coverage({ zeroFiles: 3, zeroNamed: 2, zeroUnnamed: ['src/x.mjs'] }))[2].measured, /1 of 3 files at 0 % are not named .*src\/x\.mjs/);
  assert.equal(exitBar(repo, coverage({}))[2].status, 'partly met');
  // 5: quarantined in the window, or the window not read.
  const flakes = history => exitBar({ ...repo, quarantineHistory: history }, ci)[4];
  assert.deepEqual([flakes({ days: 14, since: '2026-10-27', commits: 2, entries: [{ file: 'test/a.test.mjs', name: 'x' }] }).status, flakes(null).status], ['not met', 'partly met']);
  assert.match(flakes({ days: 14, since: '2026-10-27', commits: 2, entries: [{ file: 'test/a.test.mjs', name: 'x' }] }).measured, /1 was in the last 14 days \(test\/a\.test\.mjs › x\)/);
  // 6: which claim fails.
  assert.match(exitBar(repo, { ...ci, apps: [{ app: 'porter', claims: [{ row: 'Node', ok: true }, { row: 'Docker', ok: false }] }] })[5].measured, /^1 of 2 claimed platforms of 1 apps .*\(not: porter on Docker\)/);
  assert.equal(exitBar(repo, { ...ci, apps: [] })[5].status, 'not measured');
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

test('quarantine history: every entry in force during the window, from the file\'s git history', () => {
  const day = 86_400_000, now = Date.parse('2026-11-11T12:00:00Z');
  const versions = {
    a: { at: now - 20 * day, tests: [{ file: 'test/old.test.mjs', name: 'old' }] },           // in force when the window opened
    b: { at: now - 10 * day, tests: [] },                                                       // removed inside it
    c: { at: now - 30 * day, tests: [{ file: 'test/older.test.mjs', name: 'older' }] },       // replaced before the window
  };
  const git = args => {
    if (args[0] === 'rev-parse') return 'false\n';
    if (args[0] === 'log') return ['b', 'a', 'c'].map(sha => `${sha} ${versions[sha].at / 1000}`).join('\n') + '\n';
    if (args[0] === 'show') return JSON.stringify({ tests: versions[args[1].split(':')[0]].tests });
    throw new Error(args.join(' '));
  };
  assert.deepEqual(quarantineHistory({ now, git }), { days: 14, since: '2026-10-28', commits: 1,
    entries: [{ file: 'test/old.test.mjs', name: 'old', since: null, issue: null }] });
  versions.a.tests = [];
  assert.deepEqual(quarantineHistory({ now, git }).entries, []);
  assert.equal(quarantineHistory({ now, git: args => args[0] === 'rev-parse' ? 'true\n' : '' }), null);
  assert.equal(quarantineHistory({ now, git: () => { throw new Error('no git'); } }), null);
});

test('app claims: scripts/evidence/apps.json matches each app\'s README platform tables, and its jobs are read like platform levels', () => {
  const config = JSON.parse(readFileSync(new URL('../scripts/evidence/apps.json', import.meta.url), 'utf8'));
  const workflows = new URL('../.github/workflows/', import.meta.url);
  for (const app of config.apps) {
    const readme = readFileSync(new URL(`../${app.readme}`, import.meta.url), 'utf8').split('\n');
    const rows = [];
    let inTable = false;
    for (const line of readme) {
      if (line.startsWith('| Platform |')) { inTable = true; continue; }
      if (inTable && line.startsWith('|')) { if (!line.startsWith('| ---')) rows.push(line.slice(1).split(/(?<!\\)\|/)[0].trim()); }
      else inTable = false;
    }
    const claimed = app.claims.filter(c => !c.outsideTable).map(c => c.row);
    assert.deepEqual([...claimed].sort(), [...rows].sort(), `${app.readme}'s platform tables and scripts/evidence/apps.json's claims for ${app.app} differ: edit apps.json`);
    assert.ok(app.oracle?.length > 20, `${app.app}: names its outside oracle`);
    for (const claim of app.claims) {
      assert.ok(claim.jobs.length, `${app.app} ${claim.row}: at least one job`);
      for (const j of claim.jobs) {
        assert.ok(existsSync(new URL(j.workflow, workflows)), `${app.app} ${claim.row}: ${j.workflow} exists`);
        assert.doesNotThrow(() => new RegExp(j.job));
      }
    }
  }
  // Evaluated as levels.mjs evaluates platforms: a claim holds when its newest matching jobs passed.
  const tiny = { maxAgeDays: 30, apps: [{ app: 'x', oracle: 'o', claims: [{ row: 'Node', jobs: [{ workflow: 'x.yml', job: '^API on Node' }] }, { row: 'Bun', jobs: [{ workflow: 'x.yml', job: '^API on Bun' }] }] }] };
  const platforms = appPlatforms(tiny);
  assert.deepEqual(platforms.platforms.map(p => p.id), ['x: Node', 'x: Bun']);
  const now = Date.parse('2026-11-11T00:00:00Z');
  const runs = { 'x.yml': [{ id: 1, html_url: 'u', head_branch: 'main', created_at: '2026-11-10T00:00:00Z' }] };
  const jobs = { 1: [{ name: 'API on Node 24', conclusion: 'success' }, { name: 'API on Bun 1.4', conclusion: 'failure' }] };
  const results = appResults(tiny, evaluate(platforms, runs, jobs, now));
  assert.deepEqual(results, [{ app: 'x', oracle: 'o', claims: [{ row: 'Node', ok: true }, { row: 'Bun', ok: false, unmet: ['x.yml /^API on Bun/: API on Bun 1.4: failure'] }] }]);
});
