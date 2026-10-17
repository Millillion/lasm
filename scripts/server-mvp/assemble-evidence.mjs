// Assemble the Server MVP step-1 baseline evidence from downloaded CI compact
// results and local receipts. Read-only over its inputs.
//   node assemble-evidence.mjs EVAL_IO_DIR EVAL_IO_RUN ADAPTER_DIR ADAPTER_RUN LOCAL_JSON OUTPUT
import assert from 'node:assert/strict';
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

const [evalDir, evalRun, adapterDir, adapterRun, localFile, output] = process.argv.slice(2);
assert.ok(output && !existsSync(output));
const read = dir => readdirSync(dir).filter(name => existsSync(join(dir, name, 'server-mvp-compact.json')))
  .map(name => JSON.parse(readFileSync(join(dir, name, 'server-mvp-compact.json'))));
const url = run => `https://github.com/Millillion/lasm/actions/runs/${run}`;
const gib = bytes => bytes == null ? null : Math.round(bytes / 2 ** 30 * 100) / 100;

const evalIO = read(evalDir).map(r => ({ name: r.name, passed: r.passed === true, actions: r.actions,
  inputsUnchanged: r.inputsUnchanged, wasmSha256: r.wasmSha256, linkDriver: r.build?.linkDriver,
  peakGiB: gib(r.resources?.peakMemoryBytes), error: r.passed ? undefined : r.error?.slice(-600) }))
  .sort((a, b) => a.name.localeCompare(b.name));
const adapter = read(adapterDir).map(r => {
  const summary = r.summary ?? {};
  const unmappedReasons = (r.unmapped ?? []).reduce((c, u) => ({ ...c, [u.reason]: (c[u.reason] ?? 0) + 1 }), {});
  return { name: r.name, completed: !!r.verdicts, passed: r.passed === true, candidates: r.candidates, mapped: r.mapping?.mapped,
    byForm: r.mapping?.byForm, unmapped: r.mapping?.unmapped, unmappedReasons, verdicts: summary, exact: r.exact,
    buildRejected: r.buildRejected?.detected, elaborationPasses: r.passes?.length, inputsUnchanged: r.inputsUnchanged,
    failingActions: (r.verdicts ?? []).filter(v => v.verdict !== 'pass'),
    peakGiB: gib(r.resources?.peakMemoryBytes), resourceStatus: r.resources?.status,
    error: r.verdicts ? undefined : r.error?.slice(-1500) };
}).sort((a, b) => a.name.localeCompare(b.name));
const total = (rows, key) => rows.reduce((counts, row) => {
  for (const [k, v] of Object.entries(row[key] ?? {})) counts[k] = (counts[k] ?? 0) + v; return counts; }, {});
const local = JSON.parse(readFileSync(localFile));
const report = {
  schema: 1, recordedAt: new Date().toISOString(),
  scope: 'Server MVP step 1, milestone 1: Lean 4.35.0 upstream Std.Http and server-neighbour baseline on Linux x64 through installed candidate .54 in Node 26.12.0; parallel runtime re-checks of build-time tests, not upstream suite passes',
  candidate: { version: '0.1.0-experimental.54', sha256: '567ea838eb672249d4dfd071c9e659de3dc9eedd3a503570cacc82a60c2aad77',
    release: 'node-linux-candidate-38986393273' },
  ci: { evalIO: url(evalRun), runtimeAdapter: url(adapterRun), runner: 'ubuntu-24.04 (standard public, linux-x64)' },
  evalIO: { tests: evalIO.length, passed: evalIO.filter(r => r.passed).length,
    actions: evalIO.reduce((n, r) => n + (r.actions ?? 0), 0),
    actionsInPassedTests: evalIO.filter(r => r.passed).reduce((n, r) => n + (r.actions ?? 0), 0),
    maxPeakGiB: Math.max(...evalIO.map(r => r.peakGiB ?? 0)), results: evalIO },
  runtimeAdapter: { tests: adapter.length, completed: adapter.filter(r => r.completed).length,
    exactNativeVsDeployed: adapter.filter(r => r.passed).length, policyRejected: adapter.filter(r => r.buildRejected).length,
    harnessErrors: adapter.filter(r => !r.completed && !r.buildRejected).map(r => r.name),
    actionVerdicts: total(adapter, 'verdicts'), mappedByForm: total(adapter, 'byForm'),
    unmappedReasons: total(adapter, 'unmappedReasons'),
    maxPeakGiB: Math.max(...adapter.map(r => r.peakGiB ?? 0)), results: adapter },
  ...local,
};
writeFileSync(output, JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify({ evalIO: { tests: report.evalIO.tests, passed: report.evalIO.passed, actions: report.evalIO.actions },
  runtimeAdapter: { ...report.runtimeAdapter, results: undefined } }, null, 2));
