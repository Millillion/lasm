// Mutation testing of the critical JavaScript with Stryker (docs/TESTING.md#mutation-testing).
// Each module of scripts/mutation/modules.json is mutated on its own, and only its
// own node:test files run against each mutant (Stryker's tap runner: one process
// per test file, and only the files that executed the mutated code).
//   node scripts/mutation/run.mjs [MODULE ...] [--concurrency 2] [--out .work/mutation]
//     [--check docs/evidence/mutation-baseline.json] [--update docs/evidence/mutation-baseline.json]
//     [--changed-since REF] [--list]
// --check fails when a module's score is below its threshold in the baseline file.
// --update records the measured scores and ratchets each threshold up to the
// score rounded down to a whole percent (never lowered); each module's
// `initial` score, from before its tests were improved, stays.
// --changed-since runs only the modules whose mutated or test files changed since REF.
// --list prints the selected module names as JSON (for the workflow's matrix) and runs nothing.
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, writeFileSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const args = process.argv.slice(2);
const options = new Set(['--concurrency', '--out', '--check', '--update', '--changed-since']);
const listOnly = args.includes('--list');
const opt = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const names = args.filter((arg, i) => !arg.startsWith('--') && !options.has(args[i - 1]));
const { modules } = JSON.parse(readFileSync(join(root, 'scripts/mutation/modules.json'), 'utf8'));
for (const name of names) if (!modules.some(m => m.name === name)) { console.error(`Unknown module ${name}: ${modules.map(m => m.name).join(', ')}`); process.exit(2); }
let selected = names.length ? modules.filter(m => names.includes(m.name)) : modules;
const since = opt('--changed-since');
if (since) {
  const diff = spawnSync('git', ['diff', '--name-only', `${since}...HEAD`], { cwd: root, encoding: 'utf8' });
  if (diff.status !== 0) { console.error(diff.stderr); process.exit(2); }
  const changed = new Set(diff.stdout.split('\n').filter(Boolean));
  // The tool, its configuration and the baselines affect every module.
  const all = [...changed].some(file => file.startsWith('scripts/mutation/') || file === 'docs/evidence/mutation-baseline.json' || file === 'package-lock.json');
  selected = all ? selected : selected.filter(m => [...m.mutate, ...m.tests].some(file => changed.has(file)));
  if (!listOnly) console.log(`Changed since ${since}: ${selected.map(m => m.name).join(', ') || 'no mutation-tested module'}`);
}
if (listOnly) { console.log(JSON.stringify(selected.map(m => m.name))); process.exit(0); }
const out = resolve(root, opt('--out', '.work/mutation'));
const concurrency = Number(opt('--concurrency', '2'));
// Large directories no test of these modules reads; the sandbox copies everything else.
// A module whose tests read one of them lists it in "keepInSandbox" (e.g. "/library").
const ignorePatterns = ['/docs', '/library', '/lean', '/native', '/bench', '/experiments', '/verification',
  '/integration', '/deploy', '/.work', '/.cache', '/dist', '/.github'];

/** Stryker's report (mutation-testing-report-schema) → counts and the score
 * (killed + timed out) / (killed + timed out + survived + not covered), in percent. */
function summarize(report) {
  const counts = {};
  const survivors = [];
  for (const [file, { mutants, source }] of Object.entries(report.files)) for (const mutant of mutants) {
    counts[mutant.status] = (counts[mutant.status] ?? 0) + 1;
    if (mutant.status === 'Survived' || mutant.status === 'NoCoverage') {
      const { start, end } = mutant.location;
      const line = source.split('\n')[start.line - 1] ?? '';
      survivors.push({ file, line: start.line, column: start.column, status: mutant.status, mutator: mutant.mutatorName,
        replacement: mutant.replacement, original: start.line === end.line ? line.slice(start.column - 1, end.column - 1) : line.slice(start.column - 1) + '…' });
    }
  }
  const detected = (counts.Killed ?? 0) + (counts.Timeout ?? 0);
  const valid = detected + (counts.Survived ?? 0) + (counts.NoCoverage ?? 0);
  return { score: valid ? Math.floor(1000 * detected / valid) / 10 : 100, mutants: valid, counts, survivors };
}

// The ratchet (docs/DECISIONS.md, 2026-11-03 and 2026-11-09): a module's
// threshold is its score rounded down to a whole percent and only ever rises.
// The goal for every module is 80 %; a module added below it starts at its
// measured score (its first --update) and rises as its tests improve.
const ratchet = (score, previous = 0) => Math.max(previous, Math.floor(score));
const baselineFile = resolve(root, opt('--check') ?? opt('--update') ?? 'docs/evidence/mutation-baseline.json');
const recorded = existsSync(baselineFile) ? JSON.parse(readFileSync(baselineFile, 'utf8')).modules : {};
const thresholdOf = name => recorded[name]?.threshold;

const results = {};
let failed = false;
for (const module of selected) {
  const directory = join(out, module.name);
  rmSync(directory, { recursive: true, force: true });
  mkdirSync(directory, { recursive: true });
  const tests = module.tests.filter(file => existsSync(join(root, file)));
  for (const file of module.tests) if (!tests.includes(file)) console.warn(`${module.name}: no test file ${file}`);
  const config = {
    $schema: './node_modules/@stryker-mutator/core/schema/stryker-schema.json',
    packageManager: 'npm', plugins: ['@stryker-mutator/tap-runner'], testRunner: 'tap',
    // A mutant can turn a loop into one that allocates without end; a capped heap
    // makes that test process fail at once instead of exhausting the machine.
    // scripts/mutation/watchdog.mjs ends test processes that outlive their runner.
    tap: { testFiles: tests, nodeArgs: ['--max-old-space-size=768', '--import', join(root, 'scripts/mutation/watchdog.mjs'), '--test-reporter=tap', '--test-concurrency=1', '-r', '{{hookFile}}', '{{testFile}}'], forceBail: true },
    // perTest: per mutant, only the test files that executed it. A module whose
    // code also runs in worker threads or child processes (where Stryker cannot
    // record coverage) sets "coverageAnalysis": "off": every test file runs
    // against every mutant.
    coverageAnalysis: module.coverageAnalysis ?? 'perTest', mutate: module.mutate,
    ignorePatterns: ignorePatterns.filter(pattern => !(module.keepInSandbox ?? []).includes(pattern)),
    concurrency, timeoutMS: 20000, timeoutFactor: 2, cleanTempDir: 'always',
    tempDirName: join('.work', 'stryker-tmp', module.name),
    reporters: ['json', 'html', 'progress-append-only'],
    jsonReporter: { fileName: join(directory, 'report.json') }, htmlReporter: { fileName: join(directory, 'report.html') },
  };
  const configFile = join(directory, 'stryker.config.json');
  writeFileSync(configFile, JSON.stringify(config, null, 2) + '\n');
  console.log(`\n== ${module.name}: ${module.mutate.join(', ')}`);
  const started = performance.now();
  const run = spawnSync(process.execPath, [join(root, 'node_modules/@stryker-mutator/core/bin/stryker.js'), 'run', configFile],
    { cwd: root, stdio: 'inherit', env: { ...process.env, CI: '1', BROWSER: 'none', NO_COLOR: '1' } });
  const reportFile = join(directory, 'report.json');
  if (run.status !== 0 || !existsSync(reportFile)) { console.error(`${module.name}: Stryker failed (exit ${run.status})`); failed = true; continue; }
  const summary = summarize(JSON.parse(readFileSync(reportFile, 'utf8')));
  results[module.name] = { ...summary, threshold: thresholdOf(module.name), minutes: +((performance.now() - started) / 60000).toFixed(1) };
  writeFileSync(join(directory, 'survivors.json'), JSON.stringify(summary.survivors, null, 2) + '\n');
  console.log(`${module.name}: ${summary.score} % of ${summary.mutants} mutants (threshold ${thresholdOf(module.name) ?? 'none'} %) ${JSON.stringify(summary.counts)}`);
}

const table = Object.entries(results).map(([name, r]) => `${name.padEnd(20)} ${String(r.score).padStart(5)} %  ${String(r.mutants).padStart(4)} mutants  threshold ${r.threshold} %  ${r.minutes} min`);
console.log('\n' + table.join('\n'));
// No module may have run (a PR that changes none of them).
mkdirSync(out, { recursive: true });
writeFileSync(join(out, 'summary.json'), JSON.stringify({ measuredAt: new Date().toISOString(), node: process.version,
  commit: process.env.GITHUB_SHA ?? null, run: process.env.GITHUB_RUN_ID ?? null,
  modules: Object.fromEntries(Object.entries(results).map(([name, { survivors, ...rest }]) => [name, rest])) }, null, 2) + '\n');

const check = opt('--check');
if (check) {
  for (const [name, r] of Object.entries(results)) {
    if (recorded[name]?.threshold === undefined) { console.error(`FAIL ${name}: no recorded threshold in ${check}`); failed = true; continue; }
    if (r.score < r.threshold) { console.error(`FAIL ${name}: ${r.score} % is below its threshold ${r.threshold} %`); failed = true; }
    else console.log(`ok   ${name}: ${r.score} % (threshold ${r.threshold} %${Math.floor(r.score) > r.threshold ? `; record ${Math.floor(r.score)} % with --update` : ''})`);
  }
}
const update = opt('--update');
if (update) {
  const file = resolve(root, update);
  const previous = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { modules: {} };
  // `initial` (the score before mutation testing started, 2026-11-02) is kept.
  for (const [name, r] of Object.entries(results))
    previous.modules[name] = { initial: previous.modules[name]?.initial, score: r.score, mutants: r.mutants,
      threshold: ratchet(r.score, previous.modules[name]?.threshold) };
  previous.measuredAt = new Date().toISOString();
  previous.tool = 'Stryker 10.0.0 with the tap runner over node:test (scripts/mutation/run.mjs)';
  writeFileSync(file, JSON.stringify(previous, null, 2) + '\n');
}
process.exit(failed ? 1 : 0);
