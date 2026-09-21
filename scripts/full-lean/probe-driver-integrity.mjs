// Tiny private CTest controls; no upstream source changes or memory stress.
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';

if (process.env.LASM_RESOURCE_UNIT) throw new Error('Run directly; each campaign child applies its own resource guard');
const output = resolve(process.argv[2] ?? '.work/full-engine-probe/driver-integrity');
if (existsSync(output)) throw new Error('Use a fresh output directory');
mkdirSync(output, { recursive: true });
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const results = [];
for (const mode of ['unchanged', 'before', 'during']) {
  const suite = join(output, mode), source = join(suite, 'source'), run = join(suite, 'run');
  mkdirSync(source, { recursive: true }); mkdirSync(run);
  const artifact = join(suite, 'compiled-driver-control.txt');
  writeFileSync(artifact, 'original');
  const expected = hash(readFileSync(artifact));
  const control = join(source, 'control.mjs');
  writeFileSync(control, mode === 'during'
    ? `import {writeFileSync} from 'node:fs'; writeFileSync(${JSON.stringify(artifact)}, 'changed');\n`
    : 'console.log("private driver integrity control");\n');
  writeFileSync(join(run, 'CTestTestfile.cmake'),
    `add_test(driver-integrity [==[${process.execPath}]==] [==[${control}]==])\nset_tests_properties(driver-integrity PROPERTIES TIMEOUT 10)\n`);
  const hashes = join(suite, 'hashes.json');
  writeFileSync(hashes, JSON.stringify({ 'control.mjs': hash(readFileSync(control)) }));
  writeFileSync(join(suite, 'parallel-suite.json'), JSON.stringify({
    backend: 'Private driver integrity control, not Lean conformance', registered: 1,
    prefix: source, source, execution: run, testSourceHashes: hashes,
    tests: [{ name: 'driver-integrity' }], harnessArtifacts: { [artifact]: expected },
  }));
  if (mode === 'before') writeFileSync(artifact, 'changed');
  const campaign = join(suite, 'campaign');
  const execution = spawnSync(process.execPath, ['scripts/full-lean/run-campaign.mjs',
    '--suite', suite, '--output', campaign], { encoding: 'utf8', timeout: 45_000, killSignal: 'SIGTERM' });
  writeFileSync(join(suite, 'supervisor.log'), execution.stdout + execution.stderr);
  assert.equal(execution.status, mode === 'unchanged' ? 0 : 125, execution.error?.message ?? execution.stdout + execution.stderr);
  const state = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
  assert.equal(state.tests[0].status, mode === 'unchanged' ? 'passed' : 'harness-failed');
  assert.equal(state.counts.failed, 0, 'Driver drift is not a Lean assertion failure');
  if (mode !== 'unchanged') assert.equal(state.status, 'stopped');
  const attempt = state.tests[0].attempts[0];
  const resources = JSON.parse(readFileSync(attempt.resourceReport));
  assert.ok(resources.unitReleased && !resources.resourceLimited && !resources.memoryThrottled);
  assert.equal(resources.service.swapBytes, 0);
  for (const key of ['high', 'max', 'oom', 'oom_kill', 'oom_group_kill']) assert.equal(resources.service.memoryEvents[key], 0);
  if (mode !== 'before') {
    const evidence = JSON.parse(readFileSync(join(attempt.directory, 'results/execution.json')));
    assert.deepEqual(evidence.originalSources.after.modified, []);
    assert.deepEqual(evidence.harnessArtifacts.after.modified, mode === 'during' ? [artifact] : []);
  }
  results.push({ mode, passed: true, campaign, counts: state.counts, resources });
}
writeFileSync(join(output, 'verification.json'), JSON.stringify({
  scope: 'Private synthetic CTest controls of compiled-driver integrity before and after execution.',
  results, passed: true,
}, null, 2) + '\n');
console.log('All three compiled-driver integrity controls passed');
