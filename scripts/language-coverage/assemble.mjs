// Language coverage L1: assemble downloaded shard results (one directory per
// artifact, each with shard.json) into one per-test outcome list with an
// automatic first classification. Read-only over its inputs.
//   node assemble.mjs OUTPUT.json RUN_URL_JSON ARTIFACT_DIR...
// RUN_URL_JSON maps harness names to their CI run ids.
import assert from 'node:assert/strict';
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const [output, runsArg, ...dirs] = process.argv.slice(2);
assert.ok(output && runsArg && dirs.length);
const runs = JSON.parse(runsArg);
const shards = dirs.flatMap(dir => readdirSync(dir).map(name => join(dir, name, 'shard.json')).filter(existsSync)
  .map(file => JSON.parse(readFileSync(file))));
const gib = bytes => bytes == null ? null : Math.round(bytes / 2 ** 30 * 100) / 100;

// Adapter action verdicts → L1 class. Native-side problems are never Lasm's.
const actionClass = {
  pass: 'pass',
  'aot-policy-rejected': 'unsupported-by-design (AOT policy)',
  'deployed-build-failed': 'lasm-bug (build failure)',
  'deployed-failure': 'lasm-bug (behavior differs)',
  'deployed-not-reached': 'lasm-bug (stopped before action)',
  'adapter-native-failure': 'harness (adapter not faithful natively)',
  'native-not-reached': 'harness (native run stopped)',
  'native-nondeterministic': 'upstream-flake (native repeat differs)',
};
function adapterOutcome(attempt) {
  const c = attempt.compact;
  if (attempt.resources?.resourceLimited || attempt.code === 125) return { outcome: 'resource-stop', reason: attempt.resources?.stoppedBecause };
  if (!c?.resultFound) return { outcome: 'harness', reason: `no result (exit ${attempt.code}${attempt.timedOut ? ', timeout' : ''})`, detail: attempt.stderrTail?.slice(-800) };
  if (!c.verdicts) return { outcome: 'harness', reason: 'no per-action verdicts', detail: c.error?.slice(-1200) };
  const counts = {};
  for (const verdict of c.verdicts) { const k = actionClass[verdict.verdict] ?? verdict.verdict; counts[k] = (counts[k] ?? 0) + 1; }
  const outcome = Object.keys(counts).length === 1 && counts.pass ? 'pass'
    : counts['lasm-bug (behavior differs)'] || counts['lasm-bug (stopped before action)'] || counts['lasm-bug (build failure)'] ? 'lasm-bug'
    : counts['unsupported-by-design (AOT policy)'] ? 'unsupported-by-design'
    : counts['upstream-flake (native repeat differs)'] ? 'upstream-flake'
    : counts.pass ? 'pass-with-harness-exclusions' : 'harness';
  return { outcome, actions: counts, exactOutput: c.exact?.compiledVsDeployed,
    failing: c.verdicts.filter(v => v.verdict !== 'pass').slice(0, 20),
    rejection: c.buildRejected && { detected: c.buildRejected.detected, explanation: c.buildRejected.explanation },
    deployedStderrTail: c.commands?.find(command => command.label === 'deployed')?.stderrTail?.slice(-1200),
    deployedStdoutTail: outcome === 'lasm-bug' ? c.commands?.find(command => command.label === 'deployed')?.stdoutTail : undefined };
}
function applicationOutcome(attempt) {
  const c = attempt.compact;
  if (attempt.resources?.resourceLimited || attempt.code === 125) return { outcome: 'resource-stop', reason: attempt.resources?.stoppedBecause };
  const status = c?.status;
  if (status === 'passed') return { outcome: 'pass' };
  if (status === 'upstream-compile-disabled') return { outcome: 'upstream-disabled' };
  if (status === 'harness-compiler-options-gap') return { outcome: 'harness', reason: 'extra compiler options not mapped' };
  if (c?.phase === 'native-driver') return { outcome: 'harness', reason: 'native driver failed', detail: attempt.stdoutTail?.slice(-1500) };
  if (c?.phase === 'application-build') return { outcome: /Lasm does not support runtime Lean/.test(attempt.stdoutTail + attempt.stderrTail)
    ? 'unsupported-by-design' : 'lasm-bug', reason: 'build', detail: (attempt.stderrTail + attempt.stdoutTail).slice(-2500) };
  return { outcome: status === 'timeout' ? 'lasm-bug' : status ? 'lasm-bug' : 'harness', reason: `${status ?? 'no result'} in ${c?.phase ?? '?'}`,
    nativeExit: c?.nativeExit, targetExit: c?.targetExit, nativeOutTail: c?.nativeOutTail, targetOutTail: c?.targetOutTail,
    detail: attempt.stdoutTail?.slice(-1500) };
}
const tests = [];
for (const shard of shards) {
  if (shard.prepare && shard.results.length === 0)
    tests.push(...shard.tests.map(name => ({ harness: shard.harness, name, outcome: 'harness', reason: 'shard preparation failed',
      detail: (shard.prepare.stderrTail + shard.prepare.stdoutTail).slice(-2000) })));
  for (const result of shard.results) {
    const last = result.attempts.at(-1);
    const classify = ['runtime-adapter', 'eval-io'].includes(shard.harness)
      ? (shard.harness === 'eval-io' ? attempt => attempt.compact?.passed ? { outcome: 'pass' } : adapterOutcome(attempt) : adapterOutcome)
      : applicationOutcome;
    tests.push({ harness: shard.harness, name: result.name, ...classify(last), attempts: result.attempts.length,
      seconds: last.seconds, peakGiB: gib(last.resources?.peakMemoryBytes),
      firstAttempt: result.attempts.length > 1 ? classify(result.attempts[0]).outcome : undefined });
  }
  const missing = shard.tests.filter(name => !shard.results.some(result => result.name === name));
  if (shard.results.length) tests.push(...missing.map(name => ({ harness: shard.harness, name, outcome: 'not-completed' })));
}
tests.sort((a, b) => a.harness.localeCompare(b.harness) || a.name.localeCompare(b.name));
const tally = rows => rows.reduce((c, row) => ({ ...c, [row.outcome]: (c[row.outcome] ?? 0) + 1 }), {});
const byHarness = Object.fromEntries([...new Set(tests.map(t => t.harness))].map(h => [h, tally(tests.filter(t => t.harness === h))]));
const actions = tests.filter(t => t.actions).reduce((c, t) => { for (const [k, v] of Object.entries(t.actions)) c[k] = (c[k] ?? 0) + v; return c; }, {});
const report = { schema: 1, recordedAt: new Date().toISOString(),
  runs: Object.fromEntries(Object.entries(runs).map(([k, v]) => [k, `https://github.com/Millillion/lasm/actions/runs/${v}`])),
  tests: tests.length, byHarness, adapterActions: actions, maxPeakGiB: Math.max(0, ...tests.map(t => t.peakGiB ?? 0)), results: tests };
writeFileSync(output, JSON.stringify(report, null, 1) + '\n');
console.log(JSON.stringify({ tests: report.tests, byHarness, adapterActions: actions, maxPeakGiB: report.maxPeakGiB }, null, 2));
