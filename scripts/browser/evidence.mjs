// The browser CI's evidence (.github/workflows/browser.yml): the build record
// (scripts/browser/build-apps.mjs) and every engine's results
// (scripts/browser/browser-ci.mjs) in one file, with the budgets of
// docs/BROWSER.md checked. Exits 1 when an engine failed a check or a budget
// marked enforced is exceeded.
//   node scripts/browser/evidence.mjs BUILD_JSON RESULTS_DIR OUT
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';

const [buildFile, resultsDirectory, out] = process.argv.slice(2);
const build = JSON.parse(readFileSync(buildFile, 'utf8'));
const engines = readdirSync(resultsDirectory).filter(name => name.endsWith('.json')).sort()
  .map(name => JSON.parse(readFileSync(join(resultsDirectory, name), 'utf8')));
const KiB = 1024;
const median = values => { const v = values.filter(x => typeof x === 'number').sort((a, b) => a - b); return v.length ? v[Math.floor(v.length / 2)] : null; };
const readSibling = name => (file => existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : null)(join(dirname(buildFile), name));
const devLoop = readSibling('dev-loop.json'), viteDev = readSibling('vite-dev.json');
const chromium = engines.find(e => e.engine === 'chromium' && e.platform.startsWith('linux'));
// Budgets (docs/BROWSER.md). `enforced` budgets fail the run; the others are recorded.
export const budgets = [
  { name: 'Counter app, total transfer (brotli)', limit: 160 * KiB, unit: 'bytes', enforced: true,
    actual: build.apps.counter?.transfer?.brotli ?? null },
  { name: 'Start (module evaluated → first frame), wasm cached, CI Chromium', limit: 60, unit: 'ms', enforced: true,
    actual: chromium?.apps.counter?.start?.warm?.startMs ?? null },
  // The edit loop as developers run it: lasm dev's warm build worker, the
  // median of the edits after the first (scripts/browser/dev-loop-check.mjs).
  { name: 'Incremental rebuild after editing one view function (lasm dev --target browser, warm), Linux runner', limit: 2, unit: 's', enforced: true,
    actual: median((devLoop?.rebuilds ?? []).slice(1).map(r => r.seconds)) },
  { name: 'Vite dev: edit one view function to the remounted app (warm), Linux runner', limit: 2, unit: 's', enforced: false,
    actual: viteDev?.updates ? median(viteDev.updates.slice(1)) : viteDev?.updateSeconds ?? null },
  { name: 'Cold dev rebuild: a new lasm build --dev --target browser process after one view edit, Linux runner', limit: 2, unit: 's', enforced: false,
    actual: build.rebuild?.seconds ?? null },
];
for (const budget of budgets) budget.pass = budget.actual !== null && budget.actual <= budget.limit;
const record = {
  schema: 1, kind: 'browser-ci', run: process.env.RUN_ID ?? null, source: process.env.SOURCE ?? null, recordedAt: new Date().toISOString(),
  build: { platform: build.platform, node: build.node, rebuild: build.rebuild,
    apps: Object.fromEntries(Object.entries(build.apps).map(([name, app]) => [name, { buildSeconds: app.buildSeconds, unchangedSeconds: app.unchangedSeconds,
      transfer: app.transfer, entry: { file: app.entry, ...app.files?.[app.entry] }, wasm: { file: app.wasm, ...app.files?.[app.wasm] } }])) },
  engines: engines.map(e => ({ engine: e.engine, platform: e.platform, version: e.browserVersion,
    checks: Object.values(e.apps).reduce((n, a) => n + (a.checks?.length ?? 0), 0), failures: e.failures,
    start: Object.fromEntries(Object.entries(e.apps).map(([name, a]) => [name, a.start])),
    transferred: Object.fromEntries(Object.entries(e.apps).filter(([, a]) => a.sizes).map(([name, a]) => [name, a.sizes])) })),
  viteDev, devLoop,
  startMedianMs: median(engines.map(e => e.apps.counter?.start?.warm?.startMs)),
  budgets,
};
writeFileSync(out, JSON.stringify(record, null, 2) + '\n');
const failedEngines = engines.filter(e => e.failures.length);
for (const budget of budgets)
  console.log(`${budget.pass ? 'PASS' : budget.enforced ? 'FAIL' : 'OVER'} ${budget.name}: ${budget.actual === null ? 'not measured' : budget.unit === 'bytes' ? (budget.actual / KiB).toFixed(1) + ' KiB' : budget.actual.toFixed(budget.unit === 's' ? 1 : 0) + ' ' + budget.unit} (budget ${budget.unit === 'bytes' ? budget.limit / KiB + ' KiB' : budget.limit + ' ' + budget.unit}${budget.enforced ? '' : ', recorded'})`);
for (const e of engines) console.log(`${e.engine} ${e.browserVersion} (${e.platform}): ${e.failures.length ? e.failures.length + ' failures' : 'passed'}`);
if (process.env.BROWSERS_RESULT && process.env.BROWSERS_RESULT !== 'success') console.log(`The browser jobs ended with ${process.env.BROWSERS_RESULT}.`);
const viteFailed = record.viteDev?.checks?.some(c => !c.ok) ?? false;
if (record.viteDev) console.log(`vite dev: ${record.viteDev.checks.filter(c => c.ok).length}/${record.viteDev.checks.length} checks, update ${record.viteDev.updateSeconds}s`);
const failed = viteFailed || failedEngines.length || budgets.some(b => b.enforced && !b.pass) || (process.env.BROWSERS_RESULT && process.env.BROWSERS_RESULT !== 'success');
process.exit(failed ? 1 : 0);
