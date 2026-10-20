// Language coverage L1: run one shard of one harness, one test at a time, each
// in its own resource-guarded workload, and keep only compact per-test results.
//   node run-shard.mjs HARNESS INDEX COUNT NEW_OUTPUT ENGINE INSTALLED_COMPILER PRISTINE [LEAN_VERSION]
// HARNESS: runtime-adapter | eval-io | compiled-application | docparse | lsp | lsp-server | lsp-project
// Selection comes from the committed L1 inventory; shard i takes every COUNT-th
// name (sorted), which spreads the expensive tests. A resource stop is retried
// once in a fresh directory and both attempts are recorded.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, rmSync, writeFileSync, readdirSync, statSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';

const [harness, indexArg, countArg, outputArg, engine, compiler, pristine, version = '4.35.0'] = process.argv.slice(2);
const index = Number(indexArg), count = Number(countArg);
assert.ok(Number.isInteger(index) && Number.isInteger(count) && index >= 0 && index < count, 'INDEX COUNT');
const root = fileURLToPath(new URL('../../', import.meta.url));
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Use a fresh shard output directory');
const inventory = JSON.parse(readFileSync(join(root, `docs/evidence/lean-${version}-language-coverage-inventory.json`)));
const select = {
  'runtime-adapter': test => test.execution === 'runtime candidate: parallel adapter',
  'eval-io': test => test.execution === 'runtime: reviewed eval-io adapter',
  'compiled-application': test => test.category === 'compiled-application',
  docparse: test => test.category === 'compiled-test-driver',
  lsp: test => test.category === 'compiled-driver-and-native-compiler' && test.name.startsWith('server_interactive/'),
  'lsp-server': test => test.category === 'compiled-driver-and-native-compiler' && test.name.startsWith('server/'),
  'lsp-project': test => test.name === 'misc_dir/server_project',
}[harness];
assert.ok(select, 'Unknown harness ' + harness);
// Adapter candidates outside the L1 review (symlinked sources) are recorded there as excluded.
const reviewed = harness === 'runtime-adapter'
  ? new Set(Object.keys(JSON.parse(readFileSync(join(root, 'scripts/language-coverage/runtime-adapter-l1.json'))).releases[version].tests)) : undefined;
const names = inventory.tests.filter(select).map(test => test.name).filter(name => !reviewed || reviewed.has(name)).sort()
  .filter((_, position) => position % count === index);
assert.ok(names.length, 'Empty shard');
mkdirSync(join(output, 'compact'), { recursive: true }); mkdirSync(join(output, 'resources'));
const node = process.execPath, safe = name => name.replace(/[^A-Za-z0-9._-]+/g, '__');
const sha = text => createHash('sha256').update(text ?? '').digest('hex');
const tail = (text, n) => (text ?? '').length > n ? '…' + text.slice(-n) : (text ?? '');
const readJson = file => existsSync(file) ? JSON.parse(readFileSync(file, 'utf8')) : undefined;
const readText = file => existsSync(file) ? readFileSync(file, 'utf8') : undefined;
const summary = { harness, index, count, version, tests: names, startedAt: new Date().toISOString(), results: [] };
const save = () => writeFileSync(join(output, 'shard.json'), JSON.stringify(summary, null, 1) + '\n');
function bounded(label, command, timeoutMinutes) {
  const report = join(output, 'resources', `${label}.json`);
  const started = Date.now();
  const result = spawnSync(node, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--memory-mib', '10240', '--report', report, '--',
    'python3', join(root, 'scripts/full-lean/base-pages.py'), ...command],
    { cwd: root, encoding: 'utf8', maxBuffer: 256 << 20, timeout: timeoutMinutes * 60_000, killSignal: 'SIGTERM' });
  const resources = readJson(report);
  return { code: result.status, signal: result.signal, timedOut: result.error?.code === 'ETIMEDOUT', seconds: (Date.now() - started) / 1000,
    stdoutTail: tail(result.stdout, 3000), stderrTail: tail(result.stderr, 3000),
    resources: resources && { peakMemoryBytes: resources.peakMemoryBytes, stoppedBecause: resources.stoppedBecause,
      resourceLimited: resources.resourceLimited, serviceResult: resources.service?.serviceResult } };
}
const resourceStopped = run => run.code === 125 && run.resources?.stoppedBecause;
save();

if (['runtime-adapter', 'eval-io'].includes(harness)) {
  const script = harness === 'eval-io' ? 'integration/application-upstream-eval-io.mjs' : 'integration/application-upstream-runtime-adapter.mjs';
  for (const name of names) {
    const attempts = [];
    for (let attempt = 1; attempt <= 2; attempt++) {
      const label = `${safe(name)}-${attempt}`, caseDir = join(output, 'cases', label);
      mkdirSync(join(output, 'cases'), { recursive: true });
      const run = bounded(label, [node, join(root, script), caseDir, engine, compiler, pristine, name, version], 50);
      const compactFile = join(output, 'compact', `${label}.json`);
      spawnSync(node, [join(root, 'scripts/server-mvp/compact-result.mjs'), join(caseDir, 'result.json'),
        join(output, 'resources', `${label}.json`), compactFile], { encoding: 'utf8', maxBuffer: 512 << 20 });
      attempts.push({ attempt, ...run, compact: readJson(compactFile) });
      rmSync(caseDir, { recursive: true, force: true });
      if (!resourceStopped(run)) break;
    }
    summary.results.push({ name, attempts }); save();
    console.log(`${name}: ${attempts.map(a => a.compact?.summary ? JSON.stringify(a.compact.summary) : a.compact?.passed ? 'passed' : `exit ${a.code}`).join(' | ')}`);
  }
} else {
  const category = { 'compiled-application': 'compiled-application', docparse: 'compiled-test-driver',
    lsp: 'compiled-driver-and-native-compiler', 'lsp-server': 'compiled-driver-and-native-compiler',
    'lsp-project': 'compiled-driver-and-native-compiler' }[harness];
  const escape = text => text.replace(/[.*+?^${}()|[\]\\]/g, '\\$&');
  const campaign = join(output, 'campaign');
  summary.prepare = bounded('prepare', [node, join(root, 'scripts/application-tests/prepare.mjs'), campaign, category, engine, compiler,
    `^(?:${names.map(escape).join('|')})$`, 'upstream', version], 60);
  save();
  const manifest = join(campaign, 'manifest.json');
  for (const name of existsSync(manifest) ? names : []) {
    const attempts = [];
    for (let attempt = 1; attempt <= 2; attempt++) {
      const label = `${safe(name)}-${attempt}`, evidence = join(campaign, 'cases', name.replaceAll('/', '__'));
      if (existsSync(evidence)) rmSync(evidence, { recursive: true, force: true });
      const run = bounded(label, [node, join(root, 'scripts/application-tests/case.mjs'), manifest, name], 20);
      const result = readJson(join(evidence, 'result.json'));
      const file = suffix => readText(join(evidence, suffix));
      const compact = { name, status: result?.status, phase: result?.phase, exitCode: result?.exitCode, sourceUnchanged: result?.sourceUnchanged,
        wasmSha256: result?.wasmSha256, build: result?.build && { lean: result.build.lean, linkDriver: result.build.linkDriver },
        nativeExit: file('native-exit.txt')?.trim(), targetExit: file('target-exit.txt')?.trim(),
        nativeOutSha256: file('native.out') && sha(file('native.out')), targetOutSha256: file('target.out') && sha(file('target.out')),
        nativeOutTail: tail(file('native.out'), 1500), targetOutTail: tail(file('target.out'), 1500),
        nativeCompilerInvocations: result?.nativeCompilerInvocations?.length };
      attempts.push({ attempt, ...run, compact });
      writeFileSync(join(output, 'compact', `${label}.json`), JSON.stringify(attempts.at(-1), null, 1) + '\n');
      // Bound disk use on the runner: a failed case's deployment is not kept.
      for (const entry of existsSync(evidence) ? readdirSync(evidence) : [])
        if (statSync(join(evidence, entry)).isDirectory()) rmSync(join(evidence, entry), { recursive: true, force: true });
      if (!resourceStopped(run)) break;
    }
    summary.results.push({ name, attempts }); save();
    console.log(`${name}: ${attempts.map(a => a.compact.status ?? `exit ${a.code}`).join(' | ')}`);
  }
}
summary.finishedAt = new Date().toISOString(); save();
console.log(JSON.stringify({ harness, index, count, tests: names.length, completed: summary.results.length }));
