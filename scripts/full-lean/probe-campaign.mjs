// Tiny real CTest controls exercise checkpoint/resume without building Lean or
// exhausting memory. The campaign gives each control its own resource guard.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawnSync, spawn } from 'node:child_process';
import { createHash } from 'node:crypto';
const output = resolve(process.argv[2] ?? '.work/full-engine-probe/campaign-control');
if (existsSync(output)) throw new Error('Use a fresh control output directory');
mkdirSync(join(output, 'run'), { recursive: true });
const source = join(output, 'source'); mkdirSync(source);
const tests = ['first-pass', 'expected-failure', 'last-pass', 'interruptible-pass'];
const marker = join(output, 'interrupt-started');
const hash = bytes => createHash('sha256').update(bytes).digest('hex');
const hashes = {};
const quote = value => `[==[${value}]==]`;
const registrations = tests.map((name, i) => {
  const file = join(source, name + '.mjs');
  writeFileSync(file, (i === 3 ? `import {existsSync,writeFileSync} from 'node:fs';
const marker = ${JSON.stringify(marker)};
if (!existsSync(marker)) { writeFileSync(marker, 'started'); await new Promise(resolve => setTimeout(resolve, 10000)); }
` : '') + `console.log(${JSON.stringify(name)}); process.exitCode = ${i === 1 ? 7 : 0};\n`);
  hashes[name + '.mjs'] = hash(readFileSync(file));
  return `add_test(${quote(name)} ${quote(process.execPath)} ${quote(file)})\n` +
    `set_tests_properties(${quote(name)} PROPERTIES TIMEOUT 10 ENVIRONMENT ${quote('LASM_UPSTREAM_TEST=' + name)})`;
});
writeFileSync(join(output, 'run/CTestTestfile.cmake'), registrations.join('\n') + '\n');
writeFileSync(join(output, 'hashes.json'), JSON.stringify(hashes));
writeFileSync(join(output, 'parallel-suite.json'), JSON.stringify({ backend: 'Synthetic harness controls; not Lean conformance',
  registered: tests.length, prefix: source, source, execution: join(output, 'run'),
  testSourceHashes: join(output, 'hashes.json'), tests: tests.map(name => ({ name })) }));
const campaign = join(output, 'campaign');
const results = [];
let firstEvidenceHash;
for (const [index, expectedExit] of [0, 1, 1].entries()) {
  const result = spawnSync(process.execPath, ['scripts/full-lean/run-campaign.mjs', '--suite', output,
    '--output', campaign, '--max-tests', '1'], { encoding: 'utf8', timeout: 30_000 });
  writeFileSync(join(output, `step-${index + 1}.log`), `${result.stdout ?? ''}${result.stderr ?? ''}`);
  assert.equal(result.status, expectedExit, result.stderr + result.stdout);
  const state = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
  assert.equal(state.tests.filter(test => test.attempts.length).length, index + 1);
  assert.ok(state.tests.every(test => test.attempts.length <= 1), 'Resume must not rerun completed tests');
  const first = join(state.tests[0].attempts[0].directory, 'results/execution.json');
  firstEvidenceHash ??= hash(readFileSync(first));
  assert.equal(hash(readFileSync(first)), firstEvidenceHash, 'Earlier evidence must remain byte-identical');
  const attempt = state.tests[index].attempts[0];
  const resources = JSON.parse(readFileSync(attempt.resourceReport));
  assert.equal(resources.resourceLimited, false);
  assert.equal(resources.memoryThrottled, false);
  assert.equal(resources.service.memoryEvents.oom, 0);
  assert.equal(resources.service.memoryEvents.oom_kill, 0);
  const progress = JSON.parse(readFileSync(join(attempt.directory, 'results/progress.json')));
  assert.equal(progress.completed.length, 1);
  results.push({ step: index + 1, state: state.status, counts: state.counts, peakMemoryBytes: resources.peakMemoryBytes });
  if (index === 2) {
    assert.equal(state.status, 'paused');
    assert.deepEqual(state.tests.slice(0, 3).map(test => test.status), ['passed', 'failed', 'passed']);
  }
}
const command = ['scripts/full-lean/run-campaign.mjs', '--suite', output, '--output', campaign, '--max-tests', '1'];
const child = spawn(process.execPath, command, { stdio: ['ignore', 'pipe', 'pipe'] });
let interruptedLog = '';
child.stdout.on('data', bytes => interruptedLog += bytes);
child.stderr.on('data', bytes => interruptedLog += bytes);
const finished = new Promise(resolve => child.once('close', (code, signal) => resolve({ code, signal })));
const started = Date.now();
while (!existsSync(marker) && Date.now() - started < 10000) await new Promise(resolve => setTimeout(resolve, 50));
child.kill('SIGTERM');
const interruptedResult = await finished;
writeFileSync(join(output, 'interrupted.log'), interruptedLog);
assert.ok(existsSync(marker), 'Control must have started before interruption');
assert.equal(interruptedResult.code, 125);
let state = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
assert.equal(state.status, 'interrupted');
assert.equal(state.tests[3].status, 'pending');
assert.equal(state.tests[3].attempts[0].status, 'interrupted');
const stopped = JSON.parse(readFileSync(state.tests[3].attempts[0].resourceReport));
assert.equal(stopped.service.memoryEvents.oom, 0);
assert.equal(stopped.service.memoryEvents.oom_kill, 0);
const resumed = spawnSync(process.execPath, command, { encoding: 'utf8', timeout: 30000 });
writeFileSync(join(output, 'resumed.log'), resumed.stdout + resumed.stderr);
assert.equal(resumed.status, 1, 'The intentional earlier CTest failure remains recorded');
state = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
assert.equal(state.status, 'complete');
assert.deepEqual(state.tests.map(test => test.status), ['passed', 'failed', 'passed', 'passed']);
assert.equal(state.tests[3].attempts.length, 2, 'Interrupted evidence remains beside the retry');
assert.equal(hash(readFileSync(join(state.tests[0].attempts[0].directory, 'results/execution.json'))), firstEvidenceHash);
results.push({ step: 'interrupt and resume', state: state.status, counts: state.counts,
  interruptedAttemptsPreserved: 1, peakMemoryBytes: stopped.peakMemoryBytes });
// Extend an initial registration prefix without repeating completed work or
// accepting a different runtime/source manifest. This is useful when expanding
// a successful resource pilot to the entire unchanged registration sequence.
const extended = join(output, 'extended');
const prefixRun = spawnSync(process.execPath, ['scripts/full-lean/run-campaign.mjs', '--suite', output,
  '--output', extended, '--filter', '^first-pass$'], { encoding: 'utf8', timeout: 30000 });
assert.equal(prefixRun.status, 0, prefixRun.stderr);
const prefixState = JSON.parse(readFileSync(join(extended, 'campaign.json')));
const extendedRun = spawnSync(process.execPath, ['scripts/full-lean/run-campaign.mjs', '--suite', output,
  '--output', extended, '--filter', '.*', '--extend-selection', '--max-tests', '1'], { encoding: 'utf8', timeout: 30000 });
assert.equal(extendedRun.status, 1, extendedRun.stderr);
const extendedState = JSON.parse(readFileSync(join(extended, 'campaign.json')));
assert.equal(extendedState.selected, 4);
assert.equal(extendedState.selectionHistory.length, 1);
assert.deepEqual(extendedState.tests[0], prefixState.tests[0]);
assert.equal(extendedState.tests[1].status, 'failed');
results.push({ step: 'append registrations without rerunning prior pass', state: extendedState.status, counts: extendedState.counts });
writeFileSync(join(output, 'verification.json'), JSON.stringify({ passed: true,
  scope: 'Synthetic CTest controls for distinct guarded attempts, checkpoint/resume, signal cleanup, preserved interrupted evidence, failure accounting, and source hashes.',
  results }, null, 2) + '\n');
console.log(JSON.stringify({ output, passed: true, results }));
