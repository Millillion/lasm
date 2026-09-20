// Verify proactive termination below the kernel cap. Never induce OOM or PSI
// throttling here: a desktop's ancestor systemd-oomd policy can kill the app.
import assert from 'node:assert/strict';
import { mkdirSync, readFileSync, writeFileSync, existsSync } from 'node:fs';
import { resolve, join } from 'node:path';
import { spawn } from 'node:child_process';
import { setTimeout as delay } from 'node:timers/promises';

const output = resolve(process.argv[2] ?? '.work/resource-limit-probe');
if (existsSync(output)) throw new Error('Use a fresh probe directory');
mkdirSync(output, { recursive: true });
const results = [];
function run(name, command) {
  const report = join(output, name + '.json');
  const child = spawn(process.execPath, ['scripts/full-lean/run-bounded.mjs', '--memory-mib', '256', '--report', report, '--', ...command],
    { stdio: ['ignore', 'pipe', 'pipe'] });
  let stdout = '', stderr = '';
  child.stdout.on('data', bytes => { stdout += bytes; });
  child.stderr.on('data', bytes => { stderr += bytes; });
  const done = new Promise((resolve, reject) => {
    child.once('error', reject);
    child.once('exit', (code, signal) => {
      writeFileSync(join(output, name + '.stdout'), stdout);
      writeFileSync(join(output, name + '.stderr'), stderr);
      const result = { name, code, signal, report: JSON.parse(readFileSync(report, 'utf8')) };
      results.push(result); resolve(result);
    });
  });
  return { child, done, report };
}
async function waitFile(path) {
  for (let i = 0; i < 200 && !existsSync(path); i++) await delay(50);
  assert.ok(existsSync(path), `Missing fixture readiness: ${path}`);
}
const ready = join(output, 'owner.ready');
const owner = run('owner', [process.execPath, '--input-type=module', '-e',
  `import {writeFileSync} from 'node:fs'; import {ensureResourceGuard} from './scripts/full-lean/resource-guard.mjs';
   await ensureResourceGuard(); writeFileSync(${JSON.stringify(ready)}, String(process.pid)); setInterval(() => {}, 1000);`]);
try {
  await waitFile(ready);
  const contender = await run('contender', [process.execPath, '-e', 'process.exit(77)']).done;
  assert.notEqual(contender.code, 0);
  assert.notEqual(contender.code, 77, 'Contending payload must not run');
  assert.equal(owner.child.exitCode, null, 'Contender must not stop the existing workload');
  owner.child.kill('SIGTERM');
  const stopped = await owner.done;
  assert.equal(stopped.code, 125);
  assert.equal(stopped.report.stoppedBecause, 'SIGTERM');
  const pid = Number(readFileSync(ready, 'utf8'));
  assert.throws(() => process.kill(pid, 0), { code: 'ESRCH' });
} finally { owner.child.kill('SIGTERM'); }

const descendant = join(output, 'descendant.pid');
const bounded = await run('proactive-stop', ['python3', '-c',
  `import subprocess,sys,time,pathlib
p=subprocess.Popen([sys.executable,'-c','import time; x=bytearray(208*1024*1024); time.sleep(30)'],start_new_session=True)
pathlib.Path(${JSON.stringify(descendant)}).write_text(str(p.pid))
p.wait(timeout=35)
`]).done;
assert.equal(bounded.code, 125);
assert.equal(bounded.report.stoppedBecause, 'Workload reached its proactive memory budget');
assert.equal(bounded.report.service.memoryEvents.oom_kill, 0);
assert.equal(bounded.report.service.memoryEvents.high, 0);
assert.ok(bounded.report.resourceLimited);
assert.ok(bounded.report.peakMemoryBytes < 256 * 1024 ** 2);
await waitFile(descendant);
const pid = Number(readFileSync(descendant, 'utf8'));
if (existsSync(`/proc/${pid}/stat`)) {
  // A killed orphan may briefly remain a zombie until the init process reaps it.
  assert.equal(readFileSync(`/proc/${pid}/stat`, 'utf8').split(') ')[1][0], 'Z');
}
const after = await run('after-stop', [process.execPath, '-e', 'process.exit(0)']).done;
assert.equal(after.code, 0, 'The unit must be reusable after a resource stop');
assert.equal(after.report.resourceLimited, false);
writeFileSync(join(output, 'results.json'), JSON.stringify({ testedAt: new Date().toISOString(),
  checks: ['nested guard', 'mutual exclusion', 'signal cleanup', 'proactive descendant memory stop', 'zero OOM and throttling events', 'reuse after stop'], results }, null, 2) + '\n');
console.log('6 resource protection checks passed');
