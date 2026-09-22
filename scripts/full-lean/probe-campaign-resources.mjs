// Check effective child resource settings and immutable campaign resume.
// The campaign guards each child; run this supervisor outside the guard.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/campaign-resources');
assert.ok(!existsSync(output), 'Use a fresh output directory');
for (const name of ['source', 'run']) mkdirSync(join(output, name), { recursive: true });
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
const fixture = join(output, 'source/check.py');
writeFileSync(fixture, `import ctypes, json, os, subprocess, sys
prctl = ctypes.CDLL(None, use_errno=True).prctl
prctl.argtypes = [ctypes.c_int, ctypes.c_ulong, ctypes.c_ulong, ctypes.c_ulong, ctypes.c_ulong]
prctl.restype = ctypes.c_int
assert prctl(42, 0, 0, 0, 0) == 1, 'Huge-page policy was not inherited'
for key in ['BINARYEN_CORES', 'EMCC_CORES', 'CMAKE_BUILD_PARALLEL_LEVEL']:
    assert os.environ[key] == '1', (key, os.environ.get(key))
assert os.environ.get('LASM_RESOURCE_UNIT'), 'Missing workload guard'
if len(sys.argv) == 1:
    subprocess.run([sys.executable, __file__, '--child'], check=True)
print(json.dumps({'basePages': True, 'buildJobs': 1, 'child': len(sys.argv) > 1}))
`);
const names = ['first-policy-check', 'resumed-policy-check'];
writeFileSync(join(output, 'run/CTestTestfile.cmake'), names.map(name =>
  `add_test(${name} python3 [==[${fixture}]==])\nset_tests_properties(${name} PROPERTIES TIMEOUT 10)`).join('\n') + '\n');
writeFileSync(join(output, 'hashes.json'), JSON.stringify({ 'check.py': digest(readFileSync(fixture)) }));
writeFileSync(join(output, 'parallel-suite.json'), JSON.stringify({ backend: 'Synthetic resource controls; not Lean conformance',
  registered: names.length, prefix: join(output, 'source'), source: join(output, 'source'), execution: join(output, 'run'),
  testSourceHashes: join(output, 'hashes.json'), tests: names.map(name => ({ name })) }));
const campaign = join(output, 'campaign');
const command = ['scripts/full-lean/run-campaign.mjs', '--suite', output, '--output', campaign];
function run(label, options, expected = 0) {
  const result = spawnSync(process.execPath, [...command, ...options], { encoding: 'utf8', timeout: 30_000 });
  writeFileSync(join(output, label + '.log'), result.stdout + result.stderr);
  assert.equal(result.status, expected, result.error?.message ?? result.stdout + result.stderr);
  return result;
}
const statePath = join(campaign, 'campaign.json');
const read = () => JSON.parse(readFileSync(statePath));
const options = ['--base-pages', '--build-jobs', '1'];
run('first', [...options, '--max-tests', '1']);
const first = read();
assert.equal(first.counts.passed, 1);
assert.equal(first.status, 'paused');
assert.equal(first.resourceAdjustments.pagePolicy.kind, 'base-pages');
assert.equal(first.resourceAdjustments.pagePolicy.sha256, digest(readFileSync('scripts/full-lean/base-pages.py')));
assert.equal(first.resourceAdjustments.buildJobs, 1);
const checkpointHash = digest(readFileSync(statePath));
const firstExecution = join(first.tests[0].attempts[0].directory, 'results/execution.json');
const firstExecutionHash = digest(readFileSync(firstExecution));
for (const [label, changed] of [
  ['reject-changed-page-policy', ['--build-jobs', '1']],
  ['reject-changed-worker-limit', ['--base-pages', '--build-jobs', '2']],
]) {
  assert.match(run(label, changed, 1).stderr, /Campaign inputs changed/);
  assert.equal(digest(readFileSync(statePath)), checkpointHash);
}
assert.match(run('reject-invalid-worker-limit', ['--build-jobs', '3'], 1).stderr, /--build-jobs must be 1 or 2/);
assert.equal(digest(readFileSync(statePath)), checkpointHash);
run('resume', options);
const final = read();
assert.equal(final.status, 'complete');
assert.equal(final.counts.passed, 2);
assert.ok(final.tests.every(test => test.attempts.length === 1 && test.status === 'passed'));
assert.equal(digest(readFileSync(firstExecution)), firstExecutionHash);
const resources = final.tests.map(test => JSON.parse(readFileSync(test.attempts[0].resourceReport)));
assert.ok(resources.every(resource => resource.unitReleased && !resource.resourceLimited && !resource.memoryThrottled
  && ['high', 'max', 'oom', 'oom_kill', 'oom_group_kill'].every(key => resource.service.memoryEvents[key] === 0)));
writeFileSync(join(output, 'verification.json'), JSON.stringify({ passed: true,
  scope: 'Actual CTest child and grandchild page policy and build-worker limits, immutable resume, and rejection of changed or invalid settings.',
  counts: final.counts, resourceAdjustments: final.resourceAdjustments,
  peakMemoryBytes: Math.max(...resources.map(resource => resource.peakMemoryBytes)) }, null, 2) + '\n');
console.log('Campaign resource policy, descendant inheritance, resume, and rejection checks passed');
