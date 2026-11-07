// The public test-evidence page (docs/TESTING.md#the-test-evidence-page): one
// page, generated from the repository and from CI results, that the Millillion
// website publishes under Learn (content/README.md).
//
//   node scripts/evidence/page.mjs [--write | --check] [--offline]
//
// Writes docs/evidence/test-evidence.json (the machine-readable summary) and
// content/learn/test-evidence.md (the page). Two kinds of input, kept apart on
// the page:
//   - measured by CI, read through the GitHub API at generation time: the
//     platform levels (levels.mjs), the latest run of each main CI tier, the
//     latest scheduled mutation, fuzzing, DST and differential runs, and what
//     their job logs report (scores, runs, seeds, cases, divergences);
//   - recorded in the repository and checked by CI on every change: the
//     mutation baseline and thresholds, the proof counts on each PROOFS.md
//     (library-proofs.mjs and each app's proof check fail when a page is
//     stale), the fuzz targets, the DST apps, the equivalence targets and the
//     benchmark table (docs/BENCHMARKS.md, written by release-benchmarks.yml).
// --offline skips the GitHub API (every CI fact is then "not read"); --check
// fails when the page's front matter or links are invalid. Needs GITHUB_TOKEN
// or GH_TOKEN unless --offline; GITHUB_REPOSITORY defaults to Millillion/lasm.
// Run nightly by .github/workflows/evidence-page.yml.
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { collect, evaluate, githubApi, LEVELS, levelText } from './levels.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
export const PAGE = 'content/learn/test-evidence.md';
export const SUMMARY = 'docs/evidence/test-evidence.json';
const BLOB = 'https://github.com/Millillion/lasm/blob/main/';

/** The CI tiers' main workflows (docs/CI.md): which run of each counts as its latest result. */
export const TIERS = [
  { tier: 'PR', workflow: 'differential.yml', event: 'push', what: 'differential regressions and seeded programs, target equivalence, stack depth' },
  { tier: 'PR', workflow: 'fuzz.yml', event: 'push', what: 'the fuzz corpus and regressions, replayed' },
  { tier: 'PR', workflow: 'tooling.yml', event: 'push', what: 'the tooling error corpus' },
  { tier: 'PR', workflow: 'library-proofs.yml', event: 'push', what: "the library's proofs" },
  { tier: 'PR', workflow: 'conduit.yml', event: 'push', what: 'Conduit: RealWorld API and E2E suites, equivalence' },
  { tier: 'PR', workflow: 'conduit-platforms.yml', event: 'push', what: 'Conduit on 15 more platforms, equivalence' },
  { tier: 'Nightly', workflow: 'ci-nightly.yml', event: 'schedule', what: 'the release suites: unit, browser, edge, Bun/Deno, WASI, UI, fullstack, dev loop, Lasm.JS stress' },
  { tier: 'Nightly', workflow: 'nightly.yml', event: 'schedule', what: 'the upstream Lean suite and the ecosystem' },
  { tier: 'Nightly', workflow: 'differential.yml', event: 'schedule', what: '60-minute differential campaigns, both profiles; macOS jobs' },
  { tier: 'Nightly', workflow: 'fuzz.yml', event: 'schedule', what: 'boundary fuzzing campaigns' },
  { tier: 'Nightly', workflow: 'mutation.yml', event: 'schedule', what: 'mutation testing of every module' },
  { tier: 'Nightly', workflow: 'dst-nightly.yml', event: 'schedule', what: 'deterministic simulation of the example apps, random seeds' },
  { tier: 'Nightly', workflow: 'bridge-verification.yml', event: 'schedule', what: 'host bridge: model and schedule fuzzing on four platforms' },
  { tier: 'Nightly', workflow: 'tooling.yml', event: 'schedule', what: 'tooling metamorphic builds and fault injection' },
  { tier: 'Nightly', workflow: 'folio-nightly.yml', event: 'schedule', what: 'Folio campaign' },
  { tier: 'Nightly', workflow: 'porter-nightly.yml', event: 'schedule', what: 'Porter campaign' },
  { tier: 'Nightly', workflow: 'tandem-nightly.yml', event: 'schedule', what: 'Tandem campaign' },
  { tier: 'Nightly', workflow: 'installation-confidence.yml', event: 'schedule', what: 'cold installation on every platform' },
  { tier: 'Weekly', workflow: 'ci-weekly.yml', event: 'schedule', what: '100-minute differential campaigns, Lasm.JS soak' },
  { tier: 'Release', workflow: 'release-checks.yml', event: null, job: '^candidate / ', what: 'the release candidate: build, five-platform installed acceptance and every launch workflow' },
];

const read = path => readFileSync(join(root, path), 'utf8');
const day = iso => (iso ?? '').slice(0, 10);

// ---------------------------------------------------------------- repository

/** The proof pages and what each states: propositions, theorems, and per-library sections. */
export function proofCounts(path, text) {
  const head = /\*\*(\d+) (?:proved )?propositions(?: \((\d+) theorems\))?\*\*([^\n]*)/.exec(text);
  if (!head) throw new Error(`${path}: no "**N propositions**" line`);
  const theorems = Number(head[2] ?? /\((\d+) theorems in all/.exec(head[3])?.[1] ?? NaN);
  const sections = [...text.matchAll(/^## (Lasm\.\w+) \((\d+)\)\s*$/gm)].map(m => ({ name: m[1], propositions: Number(m[2]) }));
  return { path, propositions: Number(head[1]), theorems: Number.isNaN(theorems) ? null : theorems, ...(sections.length ? { sections } : {}) };
}

function proofs() {
  const pages = [{ name: "Lasm's library", path: 'library/PROOFS.md' }];
  for (const app of readdirSync(join(root, 'examples')).sort())
    if (existsSync(join(root, 'examples', app, 'PROOFS.md'))) pages.push({ name: app[0].toUpperCase() + app.slice(1), path: `examples/${app}/PROOFS.md` });
  return pages.map(p => ({ name: p.name, ...proofCounts(p.path, read(p.path)) }));
}

/** A workflow's `matrix.<key>: [a, b]` list. */
export function matrixList(yaml, key) {
  const m = new RegExp(`^\\s+${key}: \\[([^\\]]*)\\]`, 'm').exec(yaml);
  return m ? m[1].split(',').map(s => s.trim()).filter(Boolean) : [];
}

function fuzzTargets() {
  const native = JSON.parse(read('test/fuzz/native/targets.json'));
  return matrixList(read('.github/workflows/fuzz.yml'), 'target').map(name => {
    if (native[name]) return { name, engine: 'libFuzzer', description: native[name].description };
    const file = `test/fuzz/targets/${name}.mjs`;
    const comment = existsSync(join(root, file)) ? read(file).split('\n').filter(l => l.startsWith('//')).map(l => l.slice(2).trim()).join(' ') : '';
    return { name, engine: 'JavaScript (V8 block coverage)', description: (/^(.*?\.)(\s|$)/.exec(comment)?.[1] ?? comment).replace(/^The /, 'the ') };
  });
}

function equivalenceTargets() {
  const yaml = read('.github/workflows/differential.yml');
  const block = yaml.slice(yaml.indexOf('\n  equivalence:'));
  return { apps: matrixList(block, 'app'), targets: (/--app \$\{\{ matrix\.app \}\} --targets ([\w,-]+)/.exec(block)?.[1] ?? '').split(',').filter(Boolean) };
}

/** docs/BENCHMARKS.md's generated region, with its links made relative to the page. */
export function benchmarks(text) {
  const start = text.indexOf('<!-- benchmarks:generated:start -->'), end = text.indexOf('<!-- benchmarks:generated:end -->');
  if (start < 0 || end < start) return null;
  const region = text.slice(start + 35, end).trim();
  const latest = /^Latest: \*\*([^*]+)\*\* \((\d{4}-\d{2}-\d{2})\)/m.exec(region);
  // The first table (the results); later tables are the trend.
  const lines = region.split('\n'), first = lines.findIndex(l => l.startsWith('|'));
  const rows = [];
  for (const line of first < 0 ? [] : lines.slice(first)) { if (!line.startsWith('|')) break; rows.push(line); }
  const change = /^### Change from the previous release[^\n]*\n+([^\n]+)/m.exec(region)?.[1] ?? null;
  return { version: latest?.[1] ?? null, date: latest?.[2] ?? null, metrics: Math.max(0, rows.length - 2), change,
    table: rows.join('\n').replace(/\]\(benchmarks\//g, '](../../docs/benchmarks/') };
}

/** Everything the page says that comes from files in the repository. */
export function repositoryFacts() {
  return {
    platforms: JSON.parse(read('scripts/evidence/platforms.json')),
    mutation: JSON.parse(read('docs/evidence/mutation-baseline.json')),
    proofs: proofs(),
    fuzzTargets: fuzzTargets(),
    dstApps: matrixList(read('.github/workflows/dst-nightly.yml'), 'app'),
    equivalence: equivalenceTargets(),
    benchmarks: benchmarks(read('docs/BENCHMARKS.md')),
  };
}

// ---------------------------------------------------------------- job logs

/** What a job log reports, by the line each tool prints (scripts/mutation/run.mjs, test/fuzz/run.mjs, scripts/sim, the differential runner). */
export const parse = {
  mutation(log) {
    const m = [...log.matchAll(/ ([\w-]+): ([\d.]+) % of (\d+) mutants \(threshold (\d+) %\)/g)].at(-1);
    return m ? { module: m[1], score: Number(m[2]), mutants: Number(m[3]), threshold: Number(m[4]) } : null;
  },
  fuzz(log) {
    const head = / fuzz ([\w-]+) \((\d+) s, seed (\d+)\)/.exec(log);
    const end = /\b(ok|FAIL) +([\w-]+): (\d+) runs/.exec(log);
    return head || end ? { seconds: head ? Number(head[2]) : null, seed: head ? Number(head[3]) : null,
      runs: end ? Number(end[3]) : null, ok: end ? end[1] === 'ok' : null } : null;
  },
  dst(log) {
    const phases = [];
    for (const m of log.matchAll(/: (?:(\d+) seeds, all passed|(\d+) failing seed\(s\) of (\d+))/g))
      phases.push(m[1] !== undefined ? { seeds: Number(m[1]), failing: 0 } : { seeds: Number(m[3]), failing: Number(m[2]) });
    return phases.length ? { phases, seeds: phases.reduce((n, p) => n + p.seeds, 0), failing: phases.reduce((n, p) => n + p.failing, 0) } : null;
  },
  differential(log) {
    const lines = [...log.matchAll(/ (\d+) programs, (\d+) cases, (\d+) divergences, (\d+) upstream suspects[^\n]*?, (\d+) harness errors/g)];
    if (!lines.length) return null;
    const sum = i => lines.reduce((n, m) => n + Number(m[i]), 0);
    return { programs: sum(1), cases: sum(2), divergences: sum(3), harnessErrors: sum(5) };
  },
};

// ---------------------------------------------------------------- CI

const runFact = run => run && { id: run.id, url: run.html_url, event: run.event, branch: run.head_branch, date: run.updated_at ?? run.created_at, conclusion: run.conclusion };

async function ciFacts(repo, { api, logOf, now }) {
  const runsOf = async (workflow, query = '') => {
    try { return (await api(`actions/workflows/${workflow}/runs?status=completed&per_page=30${query}`)).workflow_runs; }
    catch (error) { console.warn(`::warning::${workflow}: ${String(error.message).slice(0, 160)}`); return []; }
  };
  const jobsOf = async run => {
    const list = [];
    for (let page = 1; page <= 10; page++) {
      const response = await api(`actions/runs/${run.id}/jobs?filter=latest&per_page=30&page=${page}`);
      list.push(...response.jobs);
      if (response.jobs.length < 30) break;
    }
    return list;
  };
  const latest = async (workflow, event) => (await runsOf(workflow, `&branch=main${event ? `&event=${event}` : ''}`))
    .find(run => run.conclusion !== 'skipped' && run.conclusion !== 'cancelled') ?? null;
  const jobFacts = async (run, pattern, parser) => {
    if (!run) return [];
    const out = [];
    for (const job of (await jobsOf(run)).filter(j => pattern.test(j.name) && j.conclusion !== 'skipped')) {
      let parsed = null;
      if (parser) try { parsed = parser(await logOf(job.id)); } catch (error) { console.warn(`::warning::log of ${job.html_url}: ${String(error.message).slice(0, 120)}`); }
      out.push({ name: job.name, conclusion: job.conclusion, url: job.html_url, ...(parsed ?? {}) });
    }
    return out;
  };

  const config = repo.platforms;
  const { runs, jobs } = await collect(config, { api, now });
  const platforms = evaluate(config, runs, jobs, now);

  const tiers = [];
  for (const t of TIERS) {
    let run = null;
    if (t.job) {
      // Release: the newest main or release-* run in which the candidate jobs ran (not the version check alone).
      for (const r of (await runsOf(t.workflow)).filter(r => /^(main|release-.+)$/.test(r.head_branch) && r.conclusion !== 'cancelled')) {
        if ((await jobsOf(r)).some(j => new RegExp(t.job).test(j.name) && j.conclusion && j.conclusion !== 'skipped')) { run = r; break; }
      }
    } else run = await latest(t.workflow, t.event);
    tiers.push({ tier: t.tier, workflow: t.workflow, what: t.what, run: runFact(run) });
  }

  const mutationRun = await latest('mutation.yml', 'schedule');
  const fuzzRun = await latest('fuzz.yml', 'schedule');
  const dstRun = await latest('dst-nightly.yml', 'schedule') ?? await latest('dst-nightly.yml', 'workflow_dispatch');
  const differentialRun = await latest('differential.yml', 'schedule');
  const equivalenceRun = await latest('differential.yml', 'push');
  const conduitRun = await latest('conduit.yml', 'push');
  const conduitPlatformsRun = await latest('conduit-platforms.yml', 'push');
  return {
    platforms,
    tiers,
    mutation: { run: runFact(mutationRun), modules: await jobFacts(mutationRun, /^module \(/, parse.mutation) },
    fuzz: { run: runFact(fuzzRun), targets: await jobFacts(fuzzRun, /^Fuzz /, parse.fuzz) },
    dst: { run: runFact(dstRun), apps: await jobFacts(dstRun, /random seeds$/, parse.dst) },
    differential: { run: runFact(differentialRun), jobs: await jobFacts(differentialRun, /^differential \(/, parse.differential) },
    equivalence: {
      fetch: { run: runFact(equivalenceRun), jobs: await jobFacts(equivalenceRun, /^equivalence \(/) },
      conduit: { run: runFact(conduitRun), jobs: await jobFacts(conduitRun, /^API on /) },
      conduitPlatforms: { run: runFact(conduitPlatformsRun), jobs: await jobFacts(conduitPlatformsRun, /./) },
    },
  };
}

/** A job's log as text (the API redirects to a short-lived URL that takes no token). */
function logReader(repository, token) {
  return async id => {
    const first = await fetch(`https://api.github.com/repos/${repository}/actions/jobs/${id}/logs`, { redirect: 'manual',
      headers: { Authorization: `Bearer ${token}`, Accept: 'application/vnd.github+json', 'User-Agent': 'lasm-evidence-page' }, signal: AbortSignal.timeout(60_000) });
    const location = first.headers.get('location');
    const response = location ? await fetch(location, { signal: AbortSignal.timeout(120_000) }) : first;
    if (!response.ok) throw new Error(`HTTP ${response.status}`);
    return response.text();
  };
}

// ---------------------------------------------------------------- the summary

/** The machine-readable summary: the repository's facts and CI's, side by side. */
export function summarize(repo, ci, { generatedAt, repository, commit }) {
  return {
    schema: 1,
    about: 'Lasm test evidence (scripts/evidence/page.mjs). "ci" holds what CI measured, read from the GitHub API at generatedAt; "repository" holds what is recorded in the repository and checked by CI on every change. Rendered as content/learn/test-evidence.md.',
    generatedAt, repository, commit,
    repository_facts: {
      platformLevels: repo.platforms.levels,
      maxAgeDays: repo.platforms.maxAgeDays,
      mutationBaseline: { measuredAt: repo.mutation.measuredAt, tool: repo.mutation.tool, run: repo.mutation.run, modules: repo.mutation.modules },
      proofs: repo.proofs,
      fuzzTargets: repo.fuzzTargets,
      dstApps: repo.dstApps,
      equivalence: repo.equivalence,
      benchmarks: repo.benchmarks && { ...repo.benchmarks, page: 'docs/BENCHMARKS.md' },
    },
    ci: ci && {
      platforms: ci.platforms.map(p => ({ id: p.id, row: p.row, level: levelText(p.level),
        levels: Object.fromEntries(LEVELS.map(name => [name, p.levels[name].noEvidenceYet ? 'no evidence yet' : p.levels[name].ok ? 'holds' : 'does not hold'])),
        unmet: LEVELS.flatMap(name => (p.levels[name].requirements ?? []).filter(r => !r.ok).map(r => ({ level: name, workflow: r.workflow, job: r.job,
          why: r.missing ? 'no main-branch run has this job' : r.stale ? `newest run is ${r.ageDays} days old` : (r.failed ?? []).join('; '), run: r.run ?? null }))) })),
      tiers: ci.tiers, mutation: ci.mutation, fuzz: ci.fuzz, dst: ci.dst, differential: ci.differential, equivalence: ci.equivalence,
    },
  };
}

// ---------------------------------------------------------------- the page

const esc = s => String(s ?? '').replace(/\|/g, '\\|');
const runLink = run => run ? `[${day(run.date)}](${run.url})` : 'no run yet';
const outcome = c => ({ success: 'passed', failure: 'failed', cancelled: 'cancelled', timed_out: 'timed out' })[c] ?? (c ? String(c).replace(/_/g, ' ') : 'not run');
const num = n => typeof n === 'number' ? n.toLocaleString('en-US') : '—';
const table = (header, rows) => [`| ${header.join(' | ')} |`, `| ${header.map(h => /^(Score|Threshold|Mutants|Runs|Seeds|Programs|Cases|Divergences|Propositions|Theorems|Failing|Seconds|Initial)/.test(h) ? '---:' : '---').join(' | ')} |`,
  ...rows.map(r => `| ${r.map(esc).join(' | ')} |`)].join('\n');
const notRead = 'CI results were not read for this build of the page.';

/** content/learn/test-evidence.md from the summary. */
export function renderPage(summary) {
  const r = summary.repository_facts, ci = summary.ci;
  const stamp = summary.generatedAt.replace('T', ' ').replace(/\.\d+Z$/, ' UTC').replace(/Z$/, ' UTC');
  const out = [];
  const p = (...lines) => out.push(lines.join('\n'), '');
  p('---',
    'title: "Lasm\'s test evidence, generated by CI"',
    'description: Every night CI regenerates this page from its own results: platform levels, mutation scores, proofs, fuzzing, simulation and equivalence.',
    'date: 2026-11-07',
    'kind: platform',
    'sources:',
    `  - ${BLOB}${SUMMARY}`,
    `  - ${BLOB}scripts/evidence/page.mjs`,
    `  - ${BLOB}docs/TESTING.md`,
    `  - ${BLOB}docs/CI.md`,
    'aiGenerated: true',
    '---');
  p(`> **Generated** by [\`scripts/evidence/page.mjs\`](../../scripts/evidence/page.mjs) at **${stamp}**${summary.commit ? ` from commit \`${summary.commit.slice(0, 10)}\`` : ''}, and regenerated every night by [\`evidence-page.yml\`](../../.github/workflows/evidence-page.yml). Do not edit it by hand. The same facts, machine-readable: [\`test-evidence.json\`](../../docs/evidence/test-evidence.json).`);
  p('This page collects the evidence behind Lasm in one place. Each section has two parts:',
    '',
    '- **Measured by CI**: results of CI runs, read from the GitHub API when the page was generated, each with the date and a link to the run. A failure shows here as it happened.',
    '- **About**: what the check is and what it covers. That text is written by hand, and the lists and counts in it come from files in the repository that CI checks on every change.',
    '',
    'How each layer works, and what it cannot catch, is in [How Lasm is tested](../../docs/TESTING.md). How the checks are split into tiers is in [CI tiers](../../docs/CI.md).');

  // Platforms
  p('## Platforms: how well tested');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else {
    const mark = s => s === 'holds' ? 'yes' : s === 'does not hold' ? 'no' : 'none yet';
    p(table(['Platform', 'Level', ...LEVELS], ci.platforms.map(x => [x.row, `**${x.level}**`, ...LEVELS.map(l => mark(x.levels[l]))])));
    const unmet = ci.platforms.flatMap(x => x.unmet.filter(u => LEVELS.indexOf(u.level) <= LEVELS.indexOf(x.level) + 1 || x.level === '—')
      .map(u => `- ${x.row}, ${u.level}: \`${u.workflow}\` job \`/${u.job}/\`: ${u.why}${u.run ? ` ([run](${u.run}))` : ''}`));
    if (unmet.length) p('What keeps each platform from its next level:', '', ...unmet);
  }
  p('### About');
  p(`A platform has a level when CI's jobs for it, and for every level below, succeeded in their newest run on \`main\`, at most ${r.maxAgeDays} days ago. [\`platforms.json\`](../../scripts/evidence/platforms.json) names those jobs. The README's platform table shows the same levels.`,
    '', ...LEVELS.map(l => `- **${l}**: ${r.platformLevels[l]}.`));

  // CI tiers
  p('## The CI tiers: latest results');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else p(table(['Tier', 'Workflow', 'What it runs', 'Latest run', 'Result'], ci.tiers.map(t => [t.tier, `[\`${t.workflow}\`](../../.github/workflows/${t.workflow})`, t.what, runLink(t.run), t.run ? outcome(t.run.conclusion) : '—'])));
  p('### About');
  p('The PR tier runs on every pull request, filtered by the paths it changes, and again unfiltered on each merge to `main`; its rows show the latest merge. The nightly tier runs on `main` between 01:07 and 09:17 UTC, the weekly tier on the weekend, and the release tier on every version bump. The unit suite runs on pull requests, nightly inside `ci-nightly.yml` and in every release check. Every workflow and its tier: [CI tiers](../../docs/CI.md).');

  // Mutation
  p('## Mutation testing');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else if (!ci.mutation.run) p('No scheduled mutation run on `main` yet.');
  else {
    const byModule = Object.fromEntries(ci.mutation.modules.map(m => [m.module ?? m.name.replace(/^module \((.*)\)$/, '$1'), m]));
    p(`Latest nightly run: ${runLink(ci.mutation.run)}, ${outcome(ci.mutation.run.conclusion)}.`);
    p(table(['Module', 'Score', 'Mutants', 'Threshold', 'Result'], Object.keys({ ...r.mutationBaseline.modules, ...byModule }).sort().map(name => {
      const m = byModule[name];
      return [name, m?.score !== undefined ? `${m.score} %` : '—', num(m?.mutants), `${m?.threshold ?? r.mutationBaseline.modules[name]?.threshold ?? '—'} %`, m ? `[${outcome(m.conclusion)}](${m.url})` : 'not run'];
    })));
  }
  p('### About');
  p(`Stryker changes the code of each module one small edit at a time (a mutant) and runs the tests. The score is the share of mutants the tests catch. CI fails when a module scores below its threshold, and a threshold is never lowered. The baseline, recorded on ${r.mutationBaseline.measuredAt} from ${r.mutationBaseline.run.replace(/ \(.*\)$/, '')}:`);
  p(table(['Module', 'Initial', 'Score', 'Mutants', 'Threshold'], Object.entries(r.mutationBaseline.modules).map(([name, m]) => [name, `${m.initial} %`, `${m.score} %`, num(m.mutants), `${m.threshold} %`])));
  p('"Initial" is the score before the tests were improved. Details: [Mutation testing](../../docs/TESTING.md#mutation-testing).');

  // Proofs
  p('## Proofs');
  p('### Checked by CI on every change');
  const total = r.proofs.reduce((n, x) => n + x.propositions, 0), totalT = r.proofs.reduce((n, x) => n + (x.theorems ?? 0), 0);
  p(table(['Code', 'Propositions', 'Theorems', 'Page'], [...r.proofs.map(x => [x.name + (x.sections ? ` (${x.sections.map(s => `${s.name} ${s.propositions}`).join(', ')})` : ''),
    String(x.propositions), x.theorems === null ? '—' : String(x.theorems), `[${x.path}](../../${x.path})`]), ['**Total**', `**${total}**`, `**${totalT}**`, '']]));
  p('### About');
  p('A proposition is a property stated in plain English and in Lean, proved for every possible input, about the code that runs. The theorems include the lemmas the proofs are built from. Each PROOFS.md lists its propositions. Its proof check fails if a theorem\'s type differs from its proposition, if any proof uses an axiom beyond Lean\'s three standard ones (a `sorry` would show up as one), or if the page is out of date.');

  // Fuzzing
  p('## Fuzzing at the boundaries');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else if (!ci.fuzz.run) p('No scheduled fuzzing campaign on `main` yet. Until there is one, the corpus and the regressions are replayed on every merge (see the CI tiers above).');
  else {
    p(`Latest scheduled campaign: ${runLink(ci.fuzz.run)}, ${outcome(ci.fuzz.run.conclusion)}.`);
    p(table(['Target', 'Seconds', 'Runs', 'Seed', 'Result'], ci.fuzz.targets.map(t => [t.name.replace(/^Fuzz /, ''), num(t.seconds), num(t.runs), t.seed ?? '—', `[${outcome(t.conclusion)}](${t.url})`])));
  }
  p('### About');
  p('Coverage-guided fuzzing feeds generated inputs to the code that reads input from outside, and fails on a crash, a hang or a broken property. Nightly campaigns run 10 minutes per target, and the Sunday campaign 60 minutes. The targets:',
    '', ...r.fuzzTargets.map(t => `- \`${t.name}\` (${t.engine}): ${t.description}`), '', 'Details: [Fuzzing at the boundaries](../../docs/TESTING.md#fuzzing-at-the-boundaries).');

  // DST
  p('## Deterministic simulation of the example apps');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else if (!ci.dst.run) p('No nightly simulation run on `main` yet. Until there is one, each app\'s pull-request workflow runs 30 fixed seeds.');
  else {
    p(`Latest night: ${runLink(ci.dst.run)}, ${outcome(ci.dst.run.conclusion)}.`);
    p(table(['App', 'Seeds', 'Failing', 'Result'], ci.dst.apps.map(a => [a.name.replace(/, random seeds$/, ''), num(a.seeds), num(a.failing), `[${outcome(a.conclusion)}](${a.url})`])));
  }
  p('### About');
  p(`Each night, for ${r.dstApps.map(a => a[0].toUpperCase() + a.slice(1)).join(', ')}, the simulation runs the real app against a simulated network, clock and storage with injected faults: 20 minutes of random seeds with the normal fault mix, then 10 minutes with heavy faults. Every seed replays exactly, so a failing seed is printed with its one-line repro command. Details: [Deterministic simulation of the example apps](../../docs/TESTING.md#deterministic-simulation-of-the-example-apps).`);

  // Differential
  p('## Differential testing');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else if (!ci.differential.run) p('No scheduled differential campaign on `main` yet.');
  else {
    p(`Latest nightly campaign: ${runLink(ci.differential.run)}, ${outcome(ci.differential.run.conclusion)}.`);
    p(table(['Job', 'Programs', 'Cases', 'Divergences', 'Result'], ci.differential.jobs.map(j => [j.name, num(j.programs), num(j.cases), num(j.divergences), `[${outcome(j.conclusion)}](${j.url})`])));
  }
  p('### About');
  p('Generated Lean programs are compiled by Lasm and by Lean\'s own native compiler, run on the same inputs on every target, and their outputs compared. A divergence is any difference. The campaign covers both build profiles. Details: [Differential testing](../../docs/TESTING.md#differential-testing).');

  // Equivalence
  p('## Target equivalence');
  p('### Measured by CI');
  if (!ci) p(notRead);
  else {
    const e = ci.equivalence;
    p(`The fetch app on every server target, latest merge: ${runLink(e.fetch.run)}.`);
    if (e.fetch.jobs.length) p(table(['Job', 'Result'], e.fetch.jobs.map(j => [j.name, `[${outcome(j.conclusion)}](${j.url})`])));
    p(`Conduit's RealWorld traffic compared with Node's, latest merge: ${runLink(e.conduit.run)} and ${runLink(e.conduitPlatforms.run)}.`);
    const conduit = [...e.conduit.jobs, ...e.conduitPlatforms.jobs];
    if (conduit.length) p(table(['Platform', 'Result'], conduit.map(j => [j.name.replace(/^API on /, ''), `[${outcome(j.conclusion)}](${j.url})`])));
  }
  p('### About');
  p(`The same app, built for each target, must answer every request of a recorded corpus with the same status, headers and body bytes. The ${r.equivalence.apps.join(' and ')} apps are checked on ${r.equivalence.targets.join(', ')}. Conduit's official RealWorld API suite (about 150 requests) is compared with Node's on every platform Conduit runs on, with tokens and timestamps normalized. Details: [Target equivalence](../../docs/TESTING.md#target-equivalence).`);

  // Benchmarks
  p('## Benchmarks');
  p('### Measured by CI');
  if (!r.benchmarks) p('No benchmark results recorded yet.');
  else {
    p(`Release candidate **${r.benchmarks.version}**, measured on ${r.benchmarks.date} by [\`release-benchmarks.yml\`](../../.github/workflows/release-benchmarks.yml) on a GitHub-hosted Linux x64 runner:`);
    p(r.benchmarks.table);
    if (r.benchmarks.change) p(`Compared with the previous candidate: ${r.benchmarks.change}`);
  }
  p('### About');
  p('Each release candidate runs the same benchmark set. The results are committed with their raw data, and a regression is flagged on the page but does not fail the build. The runner, the method and every version measured so far: [Benchmarks](../../docs/BENCHMARKS.md).');
  return out.join('\n').replace(/\n{3,}/g, '\n\n').trimEnd() + '\n';
}

// ---------------------------------------------------------------- main

async function main() {
  const argv = process.argv.slice(2);
  const offline = argv.includes('--offline');
  const repository = process.env.GITHUB_REPOSITORY ?? 'Millillion/lasm';
  const token = process.env.GITHUB_TOKEN || process.env.GH_TOKEN;
  if (!offline && !token) throw new Error('GITHUB_TOKEN or GH_TOKEN is required (or --offline)');
  const now = Date.now();
  const repo = repositoryFacts();
  const ci = offline ? null : await ciFacts(repo, { api: githubApi(repository, token, 'lasm-evidence-page'), logOf: logReader(repository, token), now });
  const commit = process.env.GITHUB_SHA ?? null;
  const summary = summarize(repo, ci, { generatedAt: new Date(now).toISOString(), repository, commit });
  const page = renderPage(summary);
  if (argv.includes('--write')) {
    mkdirSync(dirname(join(root, SUMMARY)), { recursive: true });
    writeFileSync(join(root, SUMMARY), JSON.stringify(summary, null, 2) + '\n');
    writeFileSync(join(root, PAGE), page);
    console.log(`wrote ${SUMMARY} and ${PAGE}`);
  } else process.stdout.write(page);
  if (argv.includes('--check')) {
    const { checkPage } = await import('../content/index.mjs');
    const problems = checkPage(resolve(root, PAGE), page);
    if (problems.length) { console.error(problems.map(x => `${PAGE}: ${x}`).join('\n')); process.exit(1); }
  }
}

if (process.argv[1] && import.meta.url === pathToFileURL(process.argv[1]).href) await main();
