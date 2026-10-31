// JavaScript coverage of the unit suite (docs/TESTING.md#coverage-and-mutation-testing).
// unit.yml runs scripts/ci/unit-tests.mjs with NODE_V8_COVERAGE set, so every
// Node process the tests start (the CLI, build workers, hosts) records V8's own
// coverage; this turns those records into a summary with c8 (devDependency).
//   node scripts/coverage/report.mjs V8_COVERAGE_DIR OUT.json [--check docs/evidence/coverage-baseline.json] [--tolerance 1]
// Files never loaded count as 0 % (--all). With --check, a drop of the total line
// coverage by more than the tolerance (percentage points) below the baseline fails.
import { spawnSync } from 'node:child_process';
import { mkdtempSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { join, relative, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const args = process.argv.slice(2);
const opt = (name, fallback) => { const i = args.indexOf(name); return i < 0 ? fallback : args[i + 1]; };
const [coverageDir, outFile] = args;
if (!coverageDir || !outFile) { console.error('Usage: node scripts/coverage/report.mjs V8_COVERAGE_DIR OUT.json [--check BASELINE.json] [--tolerance 1]'); process.exit(2); }
const reportDir = mkdtempSync(join(tmpdir(), 'lasm-coverage-'));
const c8 = join(root, 'node_modules/c8/bin/c8.js');
const include = ['src/**/*.mjs', 'src/**/*.cjs', 'src/**/*.js', 'bin/**/*.mjs', 'packages/**/*.mjs'];
const r = spawnSync(process.execPath, [c8, 'report', '--temp-directory', resolve(coverageDir), '--report-dir', reportDir,
  '--reporter', 'json-summary', '--reporter', 'text-summary', '--all', '--src', root, ...include.flatMap(p => ['--include', p]),
  '--exclude', 'test/**', '--exclude', 'node_modules/**', '--exclude-after-remap'], { cwd: root, encoding: 'utf8', maxBuffer: 1 << 28 });
process.stdout.write(r.stdout ?? ''); process.stderr.write(r.stderr ?? '');
if (r.status !== 0) process.exit(r.status ?? 1);
const summary = JSON.parse(readFileSync(join(reportDir, 'coverage-summary.json'), 'utf8'));
const pct = m => ({ covered: m.covered, total: m.total, pct: m.total ? +(100 * m.covered / m.total).toFixed(2) : 100 });
const files = Object.entries(summary).filter(([k]) => k !== 'total').map(([file, m]) => ({ file: relative(root, file), lines: pct(m.lines), branches: pct(m.branches), functions: pct(m.functions) }))
  .sort((a, b) => a.file.localeCompare(b.file));
const areas = {};
for (const f of files) {
  const area = f.file.split('/').slice(0, f.file.startsWith('src/') && f.file.split('/').length > 2 ? 2 : 1).join('/');
  const a = areas[area] ??= { covered: 0, total: 0 };
  a.covered += f.lines.covered; a.total += f.lines.total;
}
const result = {
  measuredAt: new Date().toISOString(), node: process.version, commit: process.env.GITHUB_SHA ?? null, run: process.env.GITHUB_RUN_ID ?? null,
  tool: 'c8 12.0.0 over NODE_V8_COVERAGE of scripts/ci/unit-tests.mjs (unit.yml)',
  total: { lines: pct(summary.total.lines), branches: pct(summary.total.branches), functions: pct(summary.total.functions) },
  areas: Object.fromEntries(Object.entries(areas).sort().map(([k, v]) => [k, pct(v)])),
  files,
};
writeFileSync(outFile, JSON.stringify(result, null, 1) + '\n');
console.log(`lines ${result.total.lines.pct} %, branches ${result.total.branches.pct} %, functions ${result.total.functions.pct} % (${files.length} files) -> ${outFile}`);
const check = opt('--check');
if (check && existsSync(check)) {
  const base = JSON.parse(readFileSync(check, 'utf8'));
  const tolerance = Number(opt('--tolerance', '1'));
  const drop = base.total.lines.pct - result.total.lines.pct;
  if (drop > tolerance) { console.error(`Line coverage fell from ${base.total.lines.pct} % to ${result.total.lines.pct} % (more than ${tolerance} points)`); process.exit(1); }
  console.log(`baseline ${base.total.lines.pct} %: ${drop > 0 ? `down ${drop.toFixed(2)}` : `up ${(-drop).toFixed(2)}`} points`);
}
