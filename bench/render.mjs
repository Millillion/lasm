// Release benchmark history and page.
//   node bench/render.mjs record HISTORY_DIR RESULT.json...   merge results into HISTORY_DIR/<version>.json
//   node bench/render.mjs render HISTORY_DIR PAGE.md [SUMMARY.md]
// `render` rewrites only the part of PAGE.md between the generated markers and
// prints the regression report (also appended to SUMMARY.md, e.g. the GitHub
// step summary). Regressions are flagged, never fatal.
import assert from 'node:assert/strict';
import { appendFileSync, existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { basename, join } from 'node:path';

const REFERENCE = 'linux-x64';
const START = '<!-- benchmarks:generated:start -->', END = '<!-- benchmarks:generated:end -->';
// Worse-by thresholds before a change is flagged. Sizes are deterministic, so
// they get a tight threshold; timings on shared runners get a loose one.
const threshold = key => /^(size|install\.(download|installed|package|tool_cache))/.test(key) ? 0.05 : 0.2;
const [mode, historyDir, ...rest] = process.argv.slice(2);
assert.ok(['record', 'render'].includes(mode) && historyDir, 'Usage: render.mjs record HISTORY_DIR RESULT.json... | render HISTORY_DIR PAGE.md [SUMMARY.md]');

if (mode === 'record') {
  assert.ok(rest.length, 'Supply at least one result');
  mkdirSync(historyDir, { recursive: true });
  for (const file of rest) {
    const result = JSON.parse(readFileSync(file, 'utf8'));
    assert.equal(result.suite, 'lasm-release-benchmarks', `${file} is not a benchmark result`);
    // A suite that stopped early (an exception) is not recorded; one that
    // finished is, with any invalid repetitions listed in its errors.
    if (!result.finishedAt) { console.log(`Skipped incomplete ${result.environment?.platform ?? file}: ${result.errors?.[0]?.split('\n')[0]}`); continue; }
    const version = result.candidate.version;
    assert.match(version, /^[0-9A-Za-z.+-]+$/);
    const target = join(historyDir, `${version}.json`);
    const entry = existsSync(target) ? JSON.parse(readFileSync(target, 'utf8'))
      : { schema: 1, version, candidate: result.candidate, reference: REFERENCE, platforms: {} };
    assert.equal(entry.candidate.sha256, result.candidate.sha256, `${version} was recorded for different bytes`);
    entry.platforms[result.environment.platform] = result;
    entry.recordedAt = entry.platforms[REFERENCE]?.recordedAt ?? result.recordedAt;
    writeFileSync(target, JSON.stringify(entry, null, 2) + '\n');
    console.log(`Recorded ${result.environment.platform} for ${version} in ${target}`);
  }
  process.exit(0);
}

// ---------- render ----------
const [pageFile, summaryFile] = rest;
assert.ok(pageFile, 'Supply PAGE.md');
const history = existsSync(historyDir) ? readdirSync(historyDir).filter(f => f.endsWith('.json'))
  .map(f => ({ file: f, ...JSON.parse(readFileSync(join(historyDir, f), 'utf8')) }))
  .filter(h => h.platforms?.[REFERENCE])
  .sort((a, b) => a.platforms[REFERENCE].recordedAt.localeCompare(b.platforms[REFERENCE].recordedAt)) : [];

const MiB = 1024 ** 2;
function format(value, unit) {
  if (value == null || Number.isNaN(value)) return '—';
  if (unit === 'bytes') return value >= 10 * MiB ? `${(value / MiB).toFixed(0)} MiB` : value >= MiB ? `${(value / MiB).toFixed(1)} MiB` : `${(value / 1024).toFixed(0)} KiB`;
  if (unit === 'ms') return value >= 10_000 ? `${(value / 1000).toFixed(0)} s` : value >= 1000 ? `${(value / 1000).toFixed(1)} s` : `${value.toFixed(value < 10 ? 1 : 0)} ms`;
  if (unit === 'µs') return `${value.toFixed(value < 10 ? 1 : 0)} µs`;
  if (unit === 'req/s') return `${Math.round(value).toLocaleString('en-US')} req/s`;
  return `${value} ${unit}`;
}
const spread = m => m.spread?.n > 1 ? `${format(m.spread.min, m.unit)} – ${format(m.spread.max, m.unit)} (n=${m.spread.n})` : m.spread?.n === 1 ? 'n=1' : '';
const ratioText = m => m.ratio == null ? '' : `${m.ratio.toFixed(2)}× ${m.ratioTo}`;

// Headline rows: [section, metric key, short label]
const headline = [
  ['Cold start', 'start.exit_ms.lasm-hello', 'Trivial program, start to exit'],
  ['Cold start', 'start.first_response_ms.lasm-hono', 'Hono + Lean handler, start to first HTTP response'],
  ['Cold start', 'start.first_response_ms.lasm-std-http', 'Std.Http server, start to first HTTP response'],
  ['Bundle size', 'size.dist_bytes.hello', 'Trivial program: dist/'],
  ['Bundle size', 'size.wasm_bytes.hello', 'Trivial program: program.wasm'],
  ['Bundle size', 'size.dist_brotli_bytes.hello', 'Trivial program: dist/, brotli'],
  ['Bundle size', 'size.dist_bytes.hono', 'Hono app: dist/ without node_modules'],
  ['Bundle size', 'size.wasm_brotli_bytes.hono', 'Hono app: program.wasm, brotli'],
  ['Bundle size', 'size.node_modules_bytes.hono', 'Hono app: dist/node_modules'],
  ['Memory', 'memory.max_rss_bytes.lasm-hello', 'Trivial program, peak RSS'],
  ['Memory', 'memory.idle_rss_bytes.lasm-hono', 'Hono + Lean handler, idle RSS'],
  ['Memory', 'memory.peak_rss_bytes.lasm-hono', 'Hono + Lean handler, peak RSS under load'],
  ['Memory', 'memory.peak_rss_bytes.lasm-std-http', 'Std.Http server, peak RSS under load'],
  ['HTTP', 'http.rps.lasm-hono', 'Hono + Lean handler, throughput'],
  ['HTTP', 'http.p99_ms.lasm-hono', 'Hono + Lean handler, p99 latency'],
  ['HTTP', 'http.rps.lasm-express', 'Express + Lean handler, throughput'],
  ['HTTP', 'http.p99_ms.lasm-express', 'Express + Lean handler, p99 latency'],
  ['HTTP', 'http.rps.lasm-std-http', 'Std.Http server, throughput'],
  ['HTTP', 'http.p99_ms.lasm-std-http', 'Std.Http server, p99 latency'],
  ['HTTP', 'http.rps.node-http', 'Plain Node node:http (reference)'],
  ['Interop', 'interop.call_p50_us', 'Lean→JS call round trip, p50'],
  ['Interop', 'interop.await_p50_us', 'Await a resolved JS promise, p50'],
  ['Big numbers', 'bignum.mul_10k_us', '10,000-digit multiplication'],
  ['Big numbers', 'bignum.div_10k_us', '20,000 by 5,000-digit division'],
  ['Big numbers', 'bignum.toString_10k_us', '10,000-digit toString'],
  ['Build', 'build.clean_ms.hello', 'Clean build, trivial program'],
  ['Build', 'build.incremental_ms.hello', 'Incremental build after a one-line change, trivial program'],
  ['Build', 'build.clean_ms.hono', 'Clean build, Hono app'],
  ['Install', 'install.download_bytes', 'Package download (npm tarball)'],
  ['Install', 'install.installed_bytes', 'Installed size'],
  ['Install', 'install.time_ms', 'npm install, empty cache'],
  ['Install', 'install.first_build_ms', 'First build incl. one-time tool download'],
  ['Install', 'install.tool_cache_bytes', 'Tool cache on disk after the first build'],
];

// Comparable quantity: same-runner ratio when there is one, CPU-normalized
// value for CPU-bound metrics, else the value itself.
function comparable(result, key) {
  const m = result.metrics[key];
  if (!m) return null;
  if (m.ratio != null) return { q: m.ratio, basis: `ratio to ${m.ratioTo}` };
  if (m.normalize === 'cpu' && result.calibration?.cpuMs?.median) return { q: m.value / result.calibration.cpuMs.median, basis: 'normalized by the runner CPU index' };
  return { q: m.value, basis: 'absolute' };
}
function regressions(current, previous) {
  const out = [];
  for (const [key, m] of Object.entries(current.metrics)) {
    if (m.reference || !previous.metrics[key]) continue;
    const a = comparable(previous, key), b = comparable(current, key);
    if (!a || !b || a.basis !== b.basis || !(a.q > 0) || !(b.q > 0)) continue;
    const worse = m.better === 'higher' ? a.q / b.q - 1 : b.q / a.q - 1;
    if (worse > threshold(key)) out.push({ key, label: m.label, worse, basis: b.basis, before: previous.metrics[key].value, after: m.value, unit: m.unit });
  }
  return out.sort((x, y) => y.worse - x.worse);
}

const lines = [];
const latest = history.at(-1), previous = history.at(-2);
let report = '';
if (!latest) lines.push('No release has been benchmarked yet.');
else {
  const r = latest.platforms[REFERENCE], env = r.environment;
  lines.push(`Latest: **${latest.version}** (${r.recordedAt.slice(0, 10)}), candidate SHA-256 \`${latest.candidate.sha256.slice(0, 12)}…\`, `
    + `source \`${(latest.candidate.sourceRevision ?? 'unknown').slice(0, 10)}\`, harness \`${(r.harness.commit ?? 'unknown').slice(0, 10)}\`.`);
  lines.push('');
  lines.push(`Reference runner: ${env.runner?.kind === 'github-actions' ? `GitHub Actions ${env.runner.image ?? ''} ${env.runner.imageVersion ?? ''}`.trim() : 'local machine'}, `
    + `${env.distro ?? env.os} (${env.platform}), ${env.cpuModel}, ${env.cpus} CPUs, ${(env.memoryBytes / 1024 ** 3).toFixed(0)} GiB RAM, Node ${env.node}, `
    + `CPU index ${r.calibration?.cpuMs?.median?.toFixed(0) ?? '—'} ms${env.pinning ? `; server on CPUs ${env.pinning.server}, load generator on CPUs ${env.pinning.load}` : ''}. `
    + `Raw data: [history/${latest.file}](benchmarks/history/${latest.file}).`);
  if (!r.passed) lines.push('', `**This run reported errors:** ${r.errors.map(e => e.split('\n')[0]).join('; ')}`);
  lines.push('', '| Area | Metric | Median | Spread (min – max) | Same-runner comparison |', '| --- | --- | ---: | --- | --- |');
  for (const [section, key, label] of headline) {
    const m = r.metrics[key];
    if (!m) continue;
    const comparison = [ratioText(m), m.frameworkRatio != null ? `${m.frameworkRatio.toFixed(2)}× ${m.frameworkRef}` : ''].filter(Boolean).join('; ');
    lines.push(`| ${section} | ${label} | ${format(m.value, m.unit)} | ${spread(m)} | ${comparison} |`);
  }
  lines.push('', 'Ratios divide by the plain-Node reference measured in the same run (for throughput, below 1 means slower; for time, latency and memory, above 1 means more). '
    + 'Every metric, including the reference servers and frameworks, is in the [raw data](benchmarks/history/' + latest.file + ').');

  const flagged = previous ? regressions(r, previous.platforms[REFERENCE]) : [];
  lines.push('', `### Change from the previous release${previous ? ` (${previous.version})` : ''}`, '');
  if (!previous) lines.push('This is the first recorded release: it is the baseline.');
  else if (!flagged.length) lines.push('No metric is worse by more than its threshold (5 % for sizes, 20 % for timings, by same-runner ratio where one exists).');
  else {
    lines.push('Flagged (informational; releases are not blocked on performance yet):', '', '| Metric | Before | After | Worse by | Compared as |', '| --- | ---: | ---: | ---: | --- |');
    for (const f of flagged) lines.push(`| ${f.label} | ${format(f.before, f.unit)} | ${format(f.after, f.unit)} | ${(f.worse * 100).toFixed(0)} % | ${f.basis} |`);
  }
  report = previous ? (flagged.length ? `Benchmark regressions vs ${previous.version}:\n${flagged.map(f => `- ${f.label}: ${(f.worse * 100).toFixed(0)} % worse (${f.basis})`).join('\n')}\n`
    : `No benchmark regressions over threshold vs ${previous.version}.\n`) : 'First benchmarked release (baseline).\n';

  const recent = history.slice(-8);
  if (recent.length > 1) {
    lines.push('', '### Trend (reference runner, last releases)', '', `| Metric | ${recent.map(h => h.version.replace(/^0\.1\.0-experimental\./, '…')).join(' | ')} |`,
      `| --- | ${recent.map(() => '---:').join(' | ')} |`);
    for (const [, key, label] of headline) {
      if (!recent.some(h => h.platforms[REFERENCE].metrics[key])) continue;
      lines.push(`| ${label} | ${recent.map(h => { const m = h.platforms[REFERENCE].metrics[key]; return m ? format(m.value, m.unit) + (m.ratio != null ? ` (${m.ratio.toFixed(2)}×)` : '') : '—'; }).join(' | ')} |`);
    }
  }
  const extras = Object.keys(latest.platforms).filter(p => p !== REFERENCE).sort();
  if (extras.length) {
    lines.push('', '### Optional platforms (not the reference; informational)', '', `| Metric | ${extras.join(' | ')} |`, `| --- | ${extras.map(() => '---:').join(' | ')} |`);
    for (const [, key, label] of headline) {
      if (!extras.some(p => latest.platforms[p].metrics[key])) continue;
      lines.push(`| ${label} | ${extras.map(p => { const m = latest.platforms[p].metrics[key]; return m ? format(m.value, m.unit) + (m.ratio != null ? ` (${m.ratio.toFixed(2)}×)` : '') : '—'; }).join(' | ')} |`);
    }
  }
}

const page = existsSync(pageFile) ? readFileSync(pageFile, 'utf8') : `# Benchmarks\n\n${START}\n${END}\n`;
const s = page.indexOf(START), e = page.indexOf(END);
assert.ok(s >= 0 && e > s, `${pageFile} lacks the generated-section markers`);
writeFileSync(pageFile, page.slice(0, s + START.length) + '\n' + lines.join('\n') + '\n' + page.slice(e));
process.stdout.write(report);
if (summaryFile) appendFileSync(summaryFile, `### Benchmarks\n\n${report}\n`);
console.log(`Rendered ${basename(pageFile)} from ${history.length} release(s)`);
