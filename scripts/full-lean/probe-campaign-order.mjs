// Tiny synthetic controls for ordering and immutable checkpoint/resume.
// The campaign guards each child; do not wrap this supervisor in another guard.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawnSync } from 'node:child_process';

const output = resolve(process.argv[2] ?? '.work/full-engine-probe/campaign-order');
if (existsSync(output)) throw new Error('Use a fresh output directory');
for (const directory of ['source', 'run']) mkdirSync(join(output, directory), { recursive: true });
const names = ['ordinary-first', 'priority-first', 'ordinary-last', 'priority-last'];
const hashes = {}, registrations = [];
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
for (const name of names) {
  const file = join(output, 'source', name + '.mjs');
  writeFileSync(file, `console.log(${JSON.stringify(name)});\n`);
  hashes[name + '.mjs'] = digest(readFileSync(file));
  registrations.push(`add_test(${name} [==[${process.execPath}]==] [==[${file}]==])\nset_tests_properties(${name} PROPERTIES TIMEOUT 10)`);
}
writeFileSync(join(output, 'run/CTestTestfile.cmake'), registrations.join('\n') + '\n');
writeFileSync(join(output, 'hashes.json'), JSON.stringify(hashes));
writeFileSync(join(output, 'parallel-suite.json'), JSON.stringify({ backend: 'Synthetic order controls; not Lean conformance',
  registered: names.length, prefix: join(output, 'source'), source: join(output, 'source'), execution: join(output, 'run'),
  testSourceHashes: join(output, 'hashes.json'), tests: names.map(name => ({ name })) }));
const campaign = join(output, 'campaign');
const command = ['scripts/full-lean/run-campaign.mjs', '--suite', output, '--output', campaign];
function run(label, options, status = 0) {
  const result = spawnSync(process.execPath, [...command, ...options], { encoding: 'utf8', timeout: 30_000 });
  writeFileSync(join(output, label + '.log'), result.stdout + result.stderr);
  assert.equal(result.status, status, result.error?.message ?? result.stdout + result.stderr);
  return result;
}
const read = () => JSON.parse(readFileSync(join(campaign, 'campaign.json')));
const options = ['--prioritize', '^priority-'];
run('first', [...options, '--max-tests', '1']);
const first = read();
assert.deepEqual(first.tests.map(test => test.name), ['priority-first', 'priority-last', 'ordinary-first', 'ordinary-last']);
assert.equal(first.counts.passed, 1);
assert.equal(first.counts.pending, 3);
assert.equal(first.status, 'paused');
const firstFile = join(first.tests[0].attempts[0].directory, 'results/execution.json');
const firstHash = digest(readFileSync(firstFile));
const checkpointHash = digest(readFileSync(join(campaign, 'campaign.json')));
assert.match(run('reject-changed-order', ['--prioritize', '^ordinary-'], 1).stderr, /Campaign inputs changed/);
assert.equal(digest(readFileSync(join(campaign, 'campaign.json'))), checkpointHash);
run('second', [...options, '--max-tests', '1']);
assert.equal(read().counts.passed, 2);
run('remaining', options);
const final = read();
assert.equal(final.status, 'complete');
assert.equal(final.counts.passed, 4);
assert.ok(final.tests.every(test => test.status === 'passed' && test.attempts.length === 1));
assert.equal(digest(readFileSync(firstFile)), firstHash);
const resources = final.tests.map(test => JSON.parse(readFileSync(test.attempts[0].resourceReport)));
assert.ok(resources.every(resource => resource.unitReleased && !resource.resourceLimited && !resource.memoryThrottled
  && resource.service.memoryEvents.oom === 0 && resource.service.memoryEvents.oom_kill === 0));
writeFileSync(join(output, 'verification.json'), JSON.stringify({ passed: true,
  scope: 'Synthetic CTest controls: stable priority ordering, all original registrations retained, immutable resume, and rejection of changed ordering.',
  order: final.tests.map(test => test.name), counts: final.counts,
  peakMemoryBytes: Math.max(...resources.map(resource => resource.peakMemoryBytes)) }, null, 2) + '\n');
console.log('Campaign priority order, resume, and input rejection passed');
