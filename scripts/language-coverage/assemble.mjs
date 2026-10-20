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
  'harness-environment': 'harness (deployment environment)',
  'native-output-varies': 'harness (native output varies between runs)',
};
// Reviewed actions whose native/deployed environments differ by design.
const environmentActions = {
  'elab/Process.lean': { lasmParallelAction7: 'spawns `lean --stdin`; a deployment has no Lean on PATH (native and Lasm both report the same failure without it)' },
};
function adapterOutcome(attempt, name) {
  const c = attempt.compact;
  for (const verdict of c?.verdicts ?? []) {
    const reason = environmentActions[name]?.[verdict.identifier];
    if (reason && verdict.verdict === 'deployed-failure') Object.assign(verdict, { verdict: 'harness-environment', reason });
    // Both native runs succeeded but displayed different values (timings, random
    // bytes, the per-phase working directory): not comparable, not an upstream flake.
    if (verdict.verdict === 'native-nondeterministic' && verdict.native === 'ok' && verdict.nativeRepeat === 'ok')
      verdict.verdict = 'native-output-varies';
  }
  if (attempt.resources?.resourceLimited || attempt.code === 125) return { outcome: 'resource-stop', reason: attempt.resources?.stoppedBecause };
  if (!c?.resultFound) return { outcome: 'harness', reason: `no result (exit ${attempt.code}${attempt.timedOut ? ', timeout' : ''})`, detail: attempt.stderrTail?.slice(-800) };
  if (!c.verdicts) return { outcome: 'harness', reason: 'no per-action verdicts', detail: c.error?.slice(-1200) };
  if (!c.verdicts.length) return { outcome: 'build-time-only', reason: 'no action elaborates as a runtime IO action (they need the elaborator monads)',
    rejection: c.buildRejected && { detected: c.buildRejected.detected } };
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
  if (c?.phase === 'application-build') {
    const log = attempt.stderrTail + attempt.stdoutTail, policy = /Lasm does not support runtime Lean/.test(log);
    return { outcome: policy ? 'unsupported-by-design' : 'lasm-bug', reason: policy ? 'build rejected by the AOT policy' : 'build failed',
      detected: log.match(/Detected [^\n]*/)?.[0], detail: policy ? undefined : log.slice(-2500) };
  }
  return { outcome: status === 'timeout' ? 'lasm-bug' : status ? 'lasm-bug' : 'harness', reason: `${status ?? 'no result'} in ${c?.phase ?? '?'}`,
    nativeExit: c?.nativeExit, targetExit: c?.targetExit, nativeOutTail: c?.nativeOutTail, targetOutTail: c?.targetOutTail,
    detail: attempt.stdoutTail?.slice(-1500) };
}
const tests = [];
for (const shard of shards) {
  if (shard.prepare && shard.results.length === 0) {
    // A shared compiled driver (docparse, LSP clients) is built once in preparation.
    const log = shard.prepare.stderrTail + shard.prepare.stdoutTail;
    const policy = /Lasm does not support runtime Lean compilation/.test(log);
    tests.push(...shard.tests.map(name => ({ harness: shard.harness, name, outcome: policy ? 'unsupported-by-design' : 'harness',
      reason: policy ? 'shared compiled driver rejected by the AOT policy' : 'shard preparation failed',
      detected: log.match(/Detected [^\n]*/)?.[0], detail: policy ? undefined : log.slice(-2000) })));
  }
  for (const result of shard.results) {
    if (shard.harness === 'projects') {
      // L2+L3 generic Lake-driver adapter: its summary names one outcome.
      const generic = result.attempts.length === 1 && result.attempts[0].compact?.summary
        && Object.keys(result.attempts[0].compact.summary)[0];
      if (generic) {
        const a = result.attempts[0];
        // Reviewed drivers whose deployed phase cannot exist (docs/LANGUAGE_COVERAGE.md, L2+L3).
        const reviewed = {
          'tests/lake/examples/ffi/test.sh': ['upstream-disabled', 'test.sh exits 0 before any command ("broken, surfaced by mimalloc update")'],
          'tests/lake/tests/llvm-bitcode-gen/test.sh': ['upstream-disabled', 'skips itself: the released lean has no LLVM backend'],
          'tests/lake/examples/reverse-ffi/test.sh': ['unsupported-by-design', 'a native C program links Lean as a shared library; Lasm builds Node applications, not C-callable libraries (L6 FFI decision)'],
          'tests/lake/tests/externLib/test.sh': ['unsupported-by-design', 'extern_lib C code (my_add) is not compiled into Wasm; native FFI is an L6 decision'],
        }[result.name];
        const outcome = reviewed && generic !== 'pass' ? reviewed[0] : { pass: 'pass', 'aot-policy-rejected': 'unsupported-by-design', 'upstream-disabled': 'upstream-disabled',
          'native-failed': 'harness', 'no-deployed-execution': 'harness' }[generic] ?? 'needs-review';
        const deployed = a.compact.commands?.find(command => command.label === 'deployed');
        tests.push({ harness: shard.harness, name: result.name, outcome, adapterOutcome: generic, reviewed: reviewed?.[1], seconds: a.seconds,
          peakGiB: gib(a.resources?.peakMemoryBytes), detail: outcome === 'pass' ? undefined
            : (a.compact.commands?.find(command => command.label === (generic === 'native-failed' ? 'native' : 'deployed'))?.stdoutTail ?? '').slice(-2500),
          error: a.compact.error || undefined, deployedCode: deployed?.code });
        continue;
      }
      const failed = result.attempts.filter(a => !a.compact?.passed);
      const policy = failed.some(a => /Lasm does not support runtime Lean compilation/.test(String(a.compact?.error ?? '') + a.stderrTail));
      tests.push({ harness: shard.harness, name: result.name, outcome: !failed.length ? 'pass' : policy ? 'unsupported-by-design' : 'needs-review',
        variants: result.attempts.map(a => ({ variant: a.variant, passed: !!a.compact?.passed, seconds: a.seconds, peakGiB: gib(a.resources?.peakMemoryBytes),
          error: a.compact?.passed ? undefined : String(a.compact?.error || a.compactionError || a.stderrTail || '').slice(-1500) })) });
      continue;
    }
    const last = result.attempts.at(-1);
    const classify = ['runtime-adapter', 'eval-io'].includes(shard.harness)
      ? (shard.harness === 'eval-io' ? attempt => attempt.compact?.passed ? { outcome: 'pass' } : adapterOutcome(attempt, result.name)
        : attempt => adapterOutcome(attempt, result.name))
      : applicationOutcome;
    tests.push({ harness: shard.harness, name: result.name, ...classify(last), attempts: result.attempts.length,
      seconds: last.seconds, peakGiB: gib(last.resources?.peakMemoryBytes),
      firstAttempt: result.attempts.length > 1 ? classify(result.attempts[0]).outcome : undefined });
  }
  const missing = shard.tests.filter(name => !shard.results.some(result => result.name === name));
  if (shard.results.length) tests.push(...missing.map(name => ({ harness: shard.harness, name, outcome: 'not-completed' })));
}
// L2–L6 areas (docs/PLAN.md). First matching rule wins; names and imports only,
// so a few tests land in a neighbouring area. Rejections by the AOT policy are
// Lean-as-library work whatever the test is about.
const inventory = JSON.parse(readFileSync(new URL('../../docs/evidence/lean-4.35.0-language-coverage-inventory.json', import.meta.url)));
const imports = new Map(inventory.tests.map(test => [test.name, test.imports ?? []]));
const base = name => name.split('/').pop();
const areaRules = [
  ['Lean-as-library / reachability (L5)', (t, i) => ['docparse', 'lsp', 'lsp-server', 'lsp-project'].includes(t.harness)
    || t.outcome === 'unsupported-by-design' || /leanExport/i.test(t.name) || i.some(m => /^Lean(?:\.|$)/.test(m) && !/^Lean\.Data\.Json/.test(m))],
  ['server, network and time (Server MVP)', t => /http|tcp|udp|dns|net_|networkInterfaces|libuv|async_http|socket|time|date|zone/i.test(t.name)],
  ['concurrency (L4)', t => /async|task|thread|mutex|channel|sync|promise|cancel|barrier|condvar|select|parallel|StackOverflowTask/i.test(t.name)],
  ['processes, signals, terminal (L3)', t => /process|spawn|signal|EnvVar|getenv|stdin|stdout|stdio|terminal|tty|exit/i.test(base(t.name))],
  ['IO.FS (L3)', t => /file|_fs|fs_|dir|path|handle|tempfile|symlink|stream|IO_/i.test(base(t.name))],
  ['numerics / Float (L2)', t => /float|uint|sint|int|nat|bitvec|fixed|overflow|scientific|div|shift|pow|gcd|bignum|ofIntClamp|binarytrees/i.test(t.name)],
  ['strings / Unicode (L2)', t => /string|str\b|char|utf|unicode|substr|format|repr|json|parse/i.test(t.name)],
  ['core data types and control (L2)', () => true],
];
for (const test of tests) test.area = areaRules.find(([, rule]) => rule(test, imports.get(test.name) ?? []))[0];
// A later directory (a targeted rerun after a harness fix) supersedes earlier
// results for the same test; the earlier outcome is kept for the record.
for (let index = tests.length - 1; index >= 0; index--) {
  const earlier = tests.findIndex(test => test.harness === tests[index].harness && test.name === tests[index].name);
  if (earlier !== index) { tests[index].supersedes = tests[earlier].outcome; tests.splice(earlier, 1); }
}
tests.sort((a, b) => a.harness.localeCompare(b.harness) || a.name.localeCompare(b.name));
const tally = rows => rows.reduce((c, row) => ({ ...c, [row.outcome]: (c[row.outcome] ?? 0) + 1 }), {});
const byHarness = Object.fromEntries([...new Set(tests.map(t => t.harness))].map(h => [h, tally(tests.filter(t => t.harness === h))]));
const actions = tests.filter(t => t.actions).reduce((c, t) => { for (const [k, v] of Object.entries(t.actions)) c[k] = (c[k] ?? 0) + v; return c; }, {});
const byArea = {};
for (const test of tests) {
  const area = byArea[test.area] ??= { tests: 0, outcomes: {}, actions: {} };
  area.tests++; area.outcomes[test.outcome] = (area.outcomes[test.outcome] ?? 0) + 1;
  for (const [k, v] of Object.entries(test.actions ?? {})) area.actions[k] = (area.actions[k] ?? 0) + v;
}
const report = { schema: 1, recordedAt: new Date().toISOString(), byArea,
  runs: Object.fromEntries(Object.entries(runs).map(([k, v]) => [k, `https://github.com/Millillion/lasm/actions/runs/${v}`])),
  tests: tests.length, byHarness, adapterActions: actions, maxPeakGiB: Math.max(0, ...tests.map(t => t.peakGiB ?? 0)), results: tests };
writeFileSync(output, JSON.stringify(report, null, 1) + '\n');
console.log(JSON.stringify({ tests: report.tests, byHarness, adapterActions: actions, byArea, maxPeakGiB: report.maxPeakGiB }, null, 2));
