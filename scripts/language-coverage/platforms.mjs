// Summarize the representative cross-platform shards (one artifact directory per
// platform and harness) for the L1 evidence. Read-only over its inputs.
//   node platforms.mjs OUTPUT.json LABEL=DIR...   (LABEL is platform/harness)
import assert from 'node:assert/strict';
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const [output, ...pairs] = process.argv.slice(2);
assert.ok(output && pairs.length);
const report = { schema: 1, recordedAt: new Date().toISOString(), platforms: {} };
for (const pair of pairs) {
  const [label, dir] = pair.split('=');
  const [platform, harness] = label.split('/');
  const results = [];
  for (const shard of readdirSync(dir).map(name => join(dir, name, 'shard.json')).filter(existsSync)) {
    const data = JSON.parse(readFileSync(shard));
    if (data.prepare && !data.results.length) results.push(...data.tests.map(name => ({ name, outcome: 'harness: preparation failed' })));
    for (const result of data.results) {
      const attempt = result.attempts.at(-1), compact = attempt.compact ?? {};
      const log = (attempt.stderrTail ?? '') + (attempt.stdoutTail ?? '');
      let outcome;
      if (harness === 'compiled-application') {
        outcome = compact.status === 'passed' ? 'pass' : compact.status === 'upstream-compile-disabled' ? 'upstream-disabled'
          : /Lasm does not support runtime Lean compilation/.test(log) ? 'unsupported-by-design'
          : /Cyclic Lean module imports|lstat '.*\/tests\/compile\/Init'/.test(log) ? 'lasm-bug: case-insensitive Init.lean shadowing'
          : compact.phase === 'application-runtime' ? 'lasm-bug: runtime output differs' : `needs-review: ${compact.status}/${compact.phase}`;
      } else {
        const summary = compact.summary;
        outcome = summary && Object.keys(summary).length === 1 && summary.pass ? 'pass'
          : summary ? 'mixed: ' + JSON.stringify(summary) : 'harness: ' + String(compact.error ?? attempt.stderrTail ?? '').slice(-300);
      }
      results.push({ name: result.name, outcome, actionsPassed: compact.summary?.pass, seconds: attempt.seconds,
        peakGiB: attempt.resources?.peakMemoryBytes && Math.round(attempt.resources.peakMemoryBytes / 2 ** 30 * 100) / 100 });
    }
  }
  const tally = results.reduce((c, r) => ({ ...c, [r.outcome]: (c[r.outcome] ?? 0) + 1 }), {});
  (report.platforms[platform] ??= {})[harness] = { tests: results.length, tally,
    actionsPassed: results.reduce((n, r) => n + (r.actionsPassed ?? 0), 0), results };
}
writeFileSync(output, JSON.stringify(report, null, 1) + '\n');
for (const [platform, harnesses] of Object.entries(report.platforms))
  for (const [harness, data] of Object.entries(harnesses)) console.log(platform, harness, data.tests, JSON.stringify(data.tally), data.actionsPassed);
