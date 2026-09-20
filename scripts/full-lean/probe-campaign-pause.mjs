// Two tiny CTest cases verify an orderly pause, without a compiler or memory
// stress. Like probe-campaign, the supervisor guards each individual child.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { createHash } from 'node:crypto';
import { spawn, spawnSync } from 'node:child_process';
const output = resolve(process.argv[2] ?? '.work/full-engine-probe/campaign-pause');
if (existsSync(output)) throw new Error('Use a fresh output directory');
for (const dir of ['source', 'run']) mkdirSync(join(output, dir), { recursive: true });
const marker = join(output, 'first-started');
const names = ['pause-first', 'pause-second'], hashes = {}, registrations = [];
const digest = bytes => createHash('sha256').update(bytes).digest('hex');
for (const [i, name] of names.entries()) {
  const file = join(output, 'source', name + '.mjs');
  writeFileSync(file, i ? 'console.log("second completed");\n' :
    `import {writeFileSync} from 'node:fs'; writeFileSync(${JSON.stringify(marker)}, 'ready');
await new Promise(resolve => setTimeout(resolve, 700)); console.log('first completed');\n`);
  hashes[name + '.mjs'] = digest(readFileSync(file));
  registrations.push(`add_test(${name} [==[${process.execPath}]==] [==[${file}]==])\nset_tests_properties(${name} PROPERTIES TIMEOUT 10)`);
}
writeFileSync(join(output, 'run/CTestTestfile.cmake'), registrations.join('\n') + '\n');
writeFileSync(join(output, 'hashes.json'), JSON.stringify(hashes));
writeFileSync(join(output, 'parallel-suite.json'), JSON.stringify({ backend: 'Synthetic pause controls; not Lean conformance',
  registered: 2, prefix: join(output, 'source'), source: join(output, 'source'), execution: join(output, 'run'),
  testSourceHashes: join(output, 'hashes.json'), tests: names.map(name => ({ name })) }));
const campaign = join(output, 'campaign');
const command = ['scripts/full-lean/run-campaign.mjs', '--suite', output, '--output', campaign];
const child = spawn(process.execPath, command, { stdio: ['ignore', 'pipe', 'pipe'] });
let log = '';
child.stdout.on('data', bytes => log += bytes); child.stderr.on('data', bytes => log += bytes);
const finished = new Promise(resolve => child.once('close', (code, signal) => resolve({ code, signal })));
try {
  const deadline = Date.now() + 10000;
  while (!existsSync(marker) && Date.now() < deadline) await new Promise(resolve => setTimeout(resolve, 25));
  assert.ok(existsSync(marker), 'The first test must have started');
  child.kill('SIGUSR2');
  const result = await finished;
  writeFileSync(join(output, 'paused.log'), log);
  assert.equal(result.code, 0);
  const state = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
  assert.equal(state.status, 'paused');
  assert.ok(state.pauseRequestedAt);
  assert.equal(state.tests[0].status, 'passed');
  assert.equal(state.tests[0].attempts.length, 1);
  assert.equal(state.tests[1].attempts.length, 0, 'Pause must prevent the next test from starting');
  const first = state.tests[0].attempts[0];
  const firstEvidence = digest(readFileSync(join(first.directory, 'results/execution.json')));
  const resumed = spawnSync(process.execPath, command, { encoding: 'utf8', timeout: 30000 });
  writeFileSync(join(output, 'resumed.log'), resumed.stdout + resumed.stderr);
  assert.equal(resumed.status, 0, resumed.stderr);
  const final = JSON.parse(readFileSync(join(campaign, 'campaign.json')));
  assert.equal(final.status, 'complete');
  assert.equal(final.pauseRequestedAt, undefined);
  assert.deepEqual(final.tests.map(test => test.status), ['passed', 'passed']);
  assert.equal(digest(readFileSync(join(first.directory, 'results/execution.json'))), firstEvidence);
  const resources = final.tests.map(test => JSON.parse(readFileSync(test.attempts[0].resourceReport)));
  assert.ok(resources.every(r => !r.resourceLimited && !r.memoryThrottled && r.unitReleased
    && r.service.memoryEvents.oom === 0 && r.service.memoryEvents.oom_kill === 0));
  writeFileSync(join(output, 'verification.json'), JSON.stringify({ passed: true,
    scope: 'Synthetic CTest controls. SIGUSR2 finishes the current test, prevents the next launch, and resumes without repeating or overwriting completed work.',
    counts: final.counts, peakMemoryBytes: Math.max(...resources.map(r => r.peakMemoryBytes)) }, null, 2) + '\n');
  console.log('Orderly campaign pause and resume passed');
} finally { if (child.exitCode === null) child.kill('SIGTERM'); }
