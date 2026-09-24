import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';

assert.equal(process.platform, 'win32');
const report = '.work/windows-guard-deadline-resources.json';
const result = spawnSync(process.execPath, ['scripts/full-lean/run-bounded.mjs',
  '--memory-mib', '512', '--timeout-seconds', '3', '--report', report, '--',
  process.execPath, 'test/fixtures/windows-guard-deadline.mjs'], { stdio: 'inherit', timeout: 180_000 });
assert.ifError(result.error); assert.equal(result.status, 124);
const evidence = JSON.parse(readFileSync(report));
assert.equal(evidence.status, 'time-limit'); assert.equal(evidence.stoppedBecause, 'time-limit');
assert.ok(evidence.peakCommittedBytes < evidence.limits.stopCommittedBytes);
const pids = JSON.parse(readFileSync('.work/deadline-control-pids.json'));
assert.equal(pids.length, 2);
for (const pid of pids) {
  assert.ok(Number.isSafeInteger(pid) && pid > 0);
  const deadline = Date.now() + 2000;
  while (Date.now() < deadline) {
    try { process.kill(pid, 0); }
    catch (error) { if (error.code === 'ESRCH') break; throw error; }
    await new Promise(resolve => setTimeout(resolve, 20));
  }
  assert.throws(() => process.kill(pid, 0), { code: 'ESRCH' });
}
console.log(JSON.stringify({ scope: 'Native Windows guarded deadline, no memory-pressure test',
  status: 'passed', stoppedProcesses: pids, report }));
