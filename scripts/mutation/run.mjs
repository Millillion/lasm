// Mutation testing of the critical JavaScript with Stryker (docs/TESTING.md#mutation-testing).
// Each module of scripts/mutation/modules.json is mutated on its own, and only its
// own node:test files run against each mutant (Stryker's tap runner: one process
// per test file, and only the files that executed the mutated code).
//   node scripts/mutation/run.mjs [MODULE ...] [--concurrency 2] [--out .work/mutation]
//     [--check docs/evidence/mutation-baseline.json] [--update docs/evidence/mutation-baseline.json]
//     [--changed-since REF]
// --check fails when a module's score is below its recorded baseline (less a
// tolerance of 0.5 points, --tolerance, for timeouts on a loaded runner).
// --update writes the measured scores as the new baseline (raise it as tests improve);
// each module's `initial` score, from before its tests were improved, stays.
// --changed-since runs only the modules whose mutated or test files changed since REF.
import { spawnSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, writeFileSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const args = process.argv.slice(2);
const options = new Set(['--concurrency', '--out', '--check', '--update', '--tolerance', '--changed-since']);
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
  console.log(`Changed since ${since}: ${selected.map(m => m.name).join(', ') || 'no mutation-tested module'}`);
}
const out = resolve(root, opt('--out', '.work/mutation'));
const concurrency = Number(opt('--concurrency', '2'));
const tolerance = Number(opt('--tolerance', '0.5'));
// Large directories no test of these modules reads; the sandbox copies everything else.
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
    coverageAnalysis: 'perTest', mutate: module.mutate, ignorePatterns,
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
  results[module.name] = { ...summary, target: module.target, minutes: +((performance.now() - started) / 60000).toFixed(1) };
  writeFileSync(join(directory, 'survivors.json'), JSON.stringify(summary.survivors, null, 2) + '\n');
  console.log(`${module.name}: ${summary.score} % of ${summary.mutants} mutants (target ${module.target} %) ${JSON.stringify(summary.counts)}`);
}

const table = Object.entries(results).map(([name, r]) => `${name.padEnd(14)} ${String(r.score).padStart(5)} %  ${String(r.mutants).padStart(4)} mutants  target ${r.target} %  ${r.minutes} min`);
console.log('\n' + table.join('\n'));
// No module may have run (a PR that changes none of them).
mkdirSync(out, { recursive: true });
writeFileSync(join(out, 'summary.json'), JSON.stringify({ measuredAt: new Date().toISOString(), node: process.version,
  commit: process.env.GITHUB_SHA ?? null, run: process.env.GITHUB_RUN_ID ?? null,
  modules: Object.fromEntries(Object.entries(results).map(([name, { survivors, ...rest }]) => [name, rest])) }, null, 2) + '\n');

const check = opt('--check');
if (check) {
  const baseline = JSON.parse(readFileSync(resolve(root, check), 'utf8')).modules;
  for (const [name, r] of Object.entries(results)) {
    const recorded = baseline[name]?.score;
    if (recorded === undefined) { console.log(`${name}: no recorded baseline`); continue; }
    if (r.score < recorded - tolerance) { console.error(`FAIL ${name}: ${r.score} % is below its baseline ${recorded} %`); failed = true; }
    else console.log(`ok   ${name}: ${r.score} % (baseline ${recorded} %)`);
  }
}
const update = opt('--update');
if (update) {
  const file = resolve(root, update);
  const previous = existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : { modules: {} };
  // `initial` (the score before mutation testing started, 2026-11-02) is kept.
  for (const [name, r] of Object.entries(results))
    previous.modules[name] = { ...previous.modules[name], score: r.score, mutants: r.mutants, target: r.target };
  previous.measuredAt = new Date().toISOString();
  previous.tool = 'Stryker 10.0.0 with the tap runner over node:test (scripts/mutation/run.mjs)';
  writeFileSync(file, JSON.stringify(previous, null, 2) + '\n');
}
process.exit(failed ? 1 : 0);
