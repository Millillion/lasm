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
// Mixed Lake/package registrations with an existing per-project deployed adapter.
const projectRuns = {
  'pkg/float': [['integration/application-upstream-packages.mjs', 'float']],
  'pkg/ofScientific': [['integration/application-upstream-packages.mjs', 'ofScientific']],
  'pkg/exe_private_lean_import': [['integration/application-upstream-packages.mjs', 'exe_private_lean_import']],
  'pkg/path with spaces': [['integration/application-upstream-projects.mjs', 'path with spaces']],
  'pkg/def_clash': [['integration/application-upstream-projects.mjs', 'def_clash']],
  'pkg/debug': [['integration/application-upstream-debug.mjs', 'release'], ['integration/application-upstream-debug.mjs', 'debug']],
  'misc_dir/rc_sticky': [['integration/application-upstream-c.mjs']],
};
// L2+L3: every other mixed driver with a deployed phase runs through the generic
// Lake-driver adapter (native driver, then deployed executables via lake-shim).
for (const row of JSON.parse(readFileSync(join(root, `docs/evidence/lean-${version}-mixed-driver-classification.json`))).tests)
  // The bespoke per-project adapters are Linux-only; elsewhere the generic adapter
  // runs those drivers too (rc_sticky's C harness keeps its own adapter).
  if (['native-and-compiled-application', 'native-and-foreign-application'].includes(row.phase)
      && (!Object.hasOwn(projectRuns, row.name) || process.platform !== 'linux' && row.name !== 'misc_dir/rc_sticky'))
    projectRuns[row.name] = [['integration/application-upstream-lake-drivers.mjs', row.name]];
const select = {
  // L2+L3 adds the sidecar and #exit tests L1 set aside (runtime-adapter-l23.json).
  'runtime-adapter': test => test.execution === 'runtime candidate: parallel adapter' || test.execution.startsWith('separate review'),
  'eval-io': test => test.execution === 'runtime: reviewed eval-io adapter',
  'compiled-application': test => test.category === 'compiled-application',
  docparse: test => test.category === 'compiled-test-driver',
  lsp: test => test.category === 'compiled-driver-and-native-compiler' && test.name.startsWith('server_interactive/'),
  'lsp-server': test => test.category === 'compiled-driver-and-native-compiler' && test.name.startsWith('server/'),
  'lsp-project': test => test.name === 'misc_dir/server_project',
  projects: test => Object.hasOwn(projectRuns, test.name),
}[harness];
assert.ok(select, 'Unknown harness ' + harness);
// Adapter candidates outside the L1 review (symlinked sources) are recorded there as excluded.
const reviewed = harness === 'runtime-adapter'
  ? new Set(['runtime-adapter-l1.json', 'runtime-adapter-l23.json'].flatMap(file =>
    Object.keys(JSON.parse(readFileSync(join(root, 'scripts/language-coverage', file))).releases[version]?.tests ?? {}))) : undefined;
// Optional representative subset (cross-platform runs): LASM_L1_NAMES is a JSON array.
const only = process.env.LASM_L1_NAMES ? new Set(JSON.parse(process.env.LASM_L1_NAMES)) : undefined;
const names = inventory.tests.filter(select).map(test => test.name).filter(name => !reviewed || reviewed.has(name))
  .filter(name => !only || only.has(name)).sort()
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
  // Base pages are a Linux build wrapper; other platforms use their own guard as is.
  const pages = process.platform === 'linux' ? ['python3', join(root, 'scripts/full-lean/base-pages.py')] : [];
  const result = spawnSync(node, [join(root, 'scripts/full-lean/run-bounded.mjs'), '--memory-mib', process.env.LASM_L1_MEMORY_MIB ?? '10240',
    '--report', report, '--', ...pages, ...command],
    { cwd: root, encoding: 'utf8', maxBuffer: 256 << 20, timeout: timeoutMinutes * 60_000, killSignal: 'SIGTERM' });
  const resources = readJson(report);
  return { code: result.status, signal: result.signal, timedOut: result.error?.code === 'ETIMEDOUT', seconds: (Date.now() - started) / 1000,
    stdoutTail: tail(result.stdout, 3000), stderrTail: tail(result.stderr, 3000),
    resources: resources && { peakMemoryBytes: resources.peakMemoryBytes, stoppedBecause: resources.stoppedBecause,
      resourceLimited: resources.resourceLimited, serviceResult: resources.service?.serviceResult } };
}
const resourceStopped = run => run.code === 125 && run.resources?.stoppedBecause;
save();

if (harness === 'projects') {
  for (const name of names) {
    const attempts = [];
    for (const [variantIndex, [script, ...variant]] of projectRuns[name].entries()) {
      const label = `${safe(name)}-${variantIndex}`, caseDir = join(output, 'cases', label);
      mkdirSync(join(output, 'cases'), { recursive: true });
      const run = bounded(label, [node, join(root, script), caseDir, engine, compiler, pristine, ...variant, version], 120);
      const compactFile = join(output, 'compact', `${label}.json`);
      const compaction = spawnSync(node, [join(root, 'scripts/server-mvp/compact-result.mjs'), join(caseDir, 'result.json'),
        join(output, 'resources', `${label}.json`), compactFile], { encoding: 'utf8', maxBuffer: 1 << 30 });
      attempts.push({ attempt: variantIndex + 1, variant: variant.join(' ') || 'default', ...run, compact: readJson(compactFile),
        ...(compaction.status === 0 ? {} : { compactionError: tail(compaction.stderr || compaction.error?.message, 2000) }) });
      // The generic Lake-driver result (two bounded driver logs and shim events) is kept whole.
      if (script.endsWith('application-upstream-lake-drivers.mjs') && existsSync(join(caseDir, 'result.json')))
        writeFileSync(join(output, 'compact', `${label}.result.json`), readFileSync(join(caseDir, 'result.json')));
      rmSync(caseDir, { recursive: true, force: true });
    }
    summary.results.push({ name, attempts }); save();
    console.log(`${name}: ${attempts.map(a => a.compact?.passed ? 'passed' : `exit ${a.code}`).join(' | ')}`);
  }
} else if (['runtime-adapter', 'eval-io'].includes(harness)) {
  const script = harness === 'eval-io' ? 'integration/application-upstream-eval-io.mjs' : 'integration/application-upstream-runtime-adapter.mjs';
  for (const name of names) {
    const attempts = [];
    for (let attempt = 1; attempt <= 2; attempt++) {
      const label = `${safe(name)}-${attempt}`, caseDir = join(output, 'cases', label);
      mkdirSync(join(output, 'cases'), { recursive: true });
      const run = bounded(label, [node, join(root, script), caseDir, engine, compiler, pristine, name, version], 50);
      const compactFile = join(output, 'compact', `${label}.json`);
      const compaction = spawnSync(node, [join(root, 'scripts/server-mvp/compact-result.mjs'), join(caseDir, 'result.json'),
        join(output, 'resources', `${label}.json`), compactFile], { encoding: 'utf8', maxBuffer: 1 << 30 });
      attempts.push({ attempt, ...run, compact: readJson(compactFile),
        ...(compaction.status === 0 ? {} : { compactionError: tail(compaction.stderr || compaction.error?.message, 2000) }) });
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
