// The bar of docs/proposals/M6_GLUE.md §3 for the glue program, against the
// JavaScript it replaces (a copy of main's module, --baseline):
//   - link cost: cold calls (a fresh process: load, compile, instantiate,
//     run) and warm calls of compactInitializerWrappers on plans the size of
//     the web template's and larger;
//   - CLI start-up: `lasm --version` and `lasm --help` here and in --main-checkout;
//   - size: the glue's files, raw and gzipped (npm tarballs are gzip).
// Writes a Markdown table to stdout (and to $GITHUB_STEP_SUMMARY when set)
// and the numbers to --json; exits 1 when a limit of the bar is exceeded.
//
//   node scripts/glue/measure.mjs --baseline FILE [--main-checkout DIR] [--json FILE]
import { execFileSync } from 'node:child_process';
import { appendFileSync, readFileSync, writeFileSync } from 'node:fs';
import { gzipSync } from 'node:zlib';
import { join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { syntheticPlan } from './plans.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const option = name => { const i = process.argv.indexOf(name); return i > 0 ? process.argv[i + 1] : undefined; };

// A child: one cold call of the module at argv[3] on a synthetic plan.
if (process.argv[2] === '--cold') {
  const [file, n, k] = process.argv.slice(3);
  const plan = syntheticPlan(Number(n), Number(k));
  const started = performance.now();
  const { compactInitializerWrappers } = await import(pathToFileURL(resolve(file)).href);
  const source = compactInitializerWrappers(plan);
  process.stdout.write(JSON.stringify({ ms: performance.now() - started, length: source.length }));
  process.exit(0);
}

const baseline = option('--baseline'), mainCheckout = option('--main-checkout'), jsonFile = option('--json');
if (!baseline) throw new Error('Usage: measure.mjs --baseline FILE [--main-checkout DIR] [--json FILE]');
const median = values => { const s = [...values].sort((a, b) => a - b); return s[Math.floor(s.length / 2)]; };
const time = (command, args, runs) => median(Array.from({ length: runs }, () => {
  const started = performance.now();
  execFileSync(command, args, { stdio: 'ignore' });
  return performance.now() - started;
}));
const glue = join(root, 'src/edge/edge-initializers.mjs');
const cold = (file, n, k) => JSON.parse(execFileSync(process.execPath, [fileURLToPath(import.meta.url), '--cold', file, String(n), String(k)], { encoding: 'utf8' }));

const results = { plans: [], startup: [], size: {} };
const failures = [];
const { compactInitializerWrappers: lean } = await import(pathToFileURL(glue).href);
const { compactInitializerWrappers: js } = await import(pathToFileURL(resolve(baseline)).href);
for (const [n, k] of [[2807, 6], [2807, 50], [8000, 200]]) {
  const plan = syntheticPlan(n, k);
  if (lean(plan) !== js(plan)) failures.push(`the glue and the JavaScript differ on the plan of ${n} initializers, ${k} kept`);
  const warm = f => { f(plan); return median(Array.from({ length: 15 }, () => { const t = performance.now(); f(plan); return performance.now() - t; })); };
  const coldOf = file => median(Array.from({ length: 5 }, () => cold(file, n, k).ms));
  const row = { n, k, coldGlue: coldOf(glue), coldJs: coldOf(baseline), warmGlue: warm(lean), warmJs: warm(js) };
  results.plans.push(row);
  if (n === 2807 && k === 6) {
    if (row.coldGlue - row.coldJs > 100) failures.push(`a cold call costs ${(row.coldGlue - row.coldJs).toFixed(1)} ms more than the JavaScript (limit 100)`);
    if (row.warmGlue - row.warmJs > 25) failures.push(`a warm call costs ${(row.warmGlue - row.warmJs).toFixed(1)} ms more than the JavaScript (limit 25)`);
  }
}
const [small, , large] = results.plans;
// Linear scaling: 2.85 times the initializers and 33 times the kept ones may cost at most ~33 times as much warm.
if (large.warmGlue > 40 * Math.max(small.warmGlue, 1)) failures.push(`the glue scales worse than linearly (${small.warmGlue.toFixed(1)} → ${large.warmGlue.toFixed(1)} ms)`);

for (const args of [['--version'], ['--help']]) {
  const here = time(process.execPath, [join(root, 'bin/lasm.mjs'), ...args], 21);
  const main = mainCheckout ? time(process.execPath, [join(mainCheckout, 'bin/lasm.mjs'), ...args], 21) : undefined;
  results.startup.push({ command: `lasm ${args.join(' ')}`, here, main });
  if (main !== undefined && here - main > Math.max(10, main * 0.15)) failures.push(`lasm ${args.join(' ')} starts ${(here - main).toFixed(1)} ms slower than main`);
}

for (const file of ['src/glue/lasm-glue.wasm', 'src/glue/glue.mjs']) {
  const bytes = readFileSync(join(root, file));
  results.size[file] = { bytes: bytes.length, gzip: gzipSync(bytes, { level: 9 }).length };
}
const gzip = Object.values(results.size).reduce((sum, { gzip }) => sum + gzip, 0);
if (gzip > 300 * 1024) failures.push(`the glue adds ${gzip} gzipped bytes to the package (limit 300 KiB)`);

const ms = value => value === undefined ? '—' : `${value.toFixed(1)} ms`;
const table = ['| Plan (initializers, kept) | Cold, glue | Cold, JavaScript | Warm, glue | Warm, JavaScript |', '| --- | ---: | ---: | ---: | ---: |',
  ...results.plans.map(r => `| ${r.n}, ${r.k} | ${ms(r.coldGlue)} | ${ms(r.coldJs)} | ${ms(r.warmGlue)} | ${ms(r.warmJs)} |`), '',
  '| Command | This branch | main |', '| --- | ---: | ---: |', ...results.startup.map(r => `| \`${r.command}\` | ${ms(r.here)} | ${ms(r.main)} |`), '',
  '| File | Bytes | Gzipped |', '| --- | ---: | ---: |', ...Object.entries(results.size).map(([f, s]) => `| \`${f}\` | ${s.bytes} | ${s.gzip} |`), '',
  failures.length ? `**The bar is not met:**\n${failures.map(f => `- ${f}`).join('\n')}` : '**The bar is met.**', ''].join('\n');
process.stdout.write(table);
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, `## Glue measurements (${process.version}, ${process.platform}-${process.arch})\n\n${table}`);
if (jsonFile) writeFileSync(jsonFile, JSON.stringify({ ...results, failures }, null, 2) + '\n');
process.exitCode = failures.length ? 1 : 0;
