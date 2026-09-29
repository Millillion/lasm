import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, readFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { spawn, spawnSync } from 'node:child_process';
import { once } from 'node:events';
import { recoverDarwinSample } from '../scripts/full-lean/darwin-monitor-recovery.mjs';

const timeout = () => Object.assign(new Error('spawnSync /bin/ps ETIMEDOUT'), { code: 'ETIMEDOUT' });
function fixture() {
  const signals = [], recoveries = [], processes = [{ pid: 123, group: 123, bytes: 1024 }];
  return { signals, recoveries, group: 123, previousProcesses: processes,
    sample: () => ({ processes, memory: { available: 4096 } }), stopReason: () => null,
    signal: (pid, name) => signals.push([pid, name]) };
}
test('timed-out accounting resumes only after a paused, fresh, safe sample', () => {
  const f = fixture();
  f.sample = () => { assert.deepEqual(f.signals, [[-123, 'SIGSTOP']]); return { processes: f.previousProcesses }; };
  assert.equal(recoverDarwinSample(timeout(), f).processes, f.previousProcesses);
  assert.deepEqual(f.signals, [[-123, 'SIGSTOP'], [-123, 'SIGCONT']]);
  assert.equal(f.recoveries[0].recovered, true);
});
test('persistent accounting failure, unsafe memory and excessive pauses kill without resuming', () => {
  for (const fault of ['timeout', 'reserve', 'detached', 'deadline']) {
    const f = fixture(); let time = 1_000;
    f.now = () => time;
    if (fault === 'timeout') f.sample = () => { throw timeout(); };
    if (fault === 'reserve') f.stopReason = () => 'Host memory reserve';
    if (fault === 'detached') f.sample = () => ({ processes: [{ group: 456 }] });
    if (fault === 'deadline') f.sample = () => { time += 12_001; return { processes: f.previousProcesses }; };
    assert.throws(() => recoverDarwinSample(timeout(), f));
    assert.deepEqual(f.signals, [[-123, 'SIGSTOP'], [-123, 'SIGKILL']]);
    assert.equal(f.recoveries[0].recovered, false);
  }
});
test('recovery refuses unaccounted or detached work, non-timeouts and more than three recoveries', () => {
  for (const kind of ['initial', 'detached', 'other-error', 'too-many']) {
    const f = fixture(), error = kind === 'other-error' ? new Error('invalid accounting') : timeout();
    if (kind === 'initial') f.previousProcesses = undefined;
    if (kind === 'detached') f.previousProcesses = [{ group: 456 }];
    if (kind === 'too-many') f.recoveries.push({}, {}, {});
    assert.throws(() => recoverDarwinSample(error, f), e => e === error);
    assert.deepEqual(f.signals, []);
  }
});

const pause = ms => new Promise(resolve => setTimeout(resolve, ms));
const syncPause = () => {
  const r = spawnSync(process.execPath, ['-e', 'setTimeout(()=>{},100)'], { timeout: 5000 });
  assert.ifError(r.error); assert.equal(r.status, 0);
};
for (const shouldRecover of [true, false]) test(`real process group stays paused during accounting and ${shouldRecover ? 'resumes' : 'is killed'}`,
  { skip: process.platform === 'win32', timeout: 15000 }, async () => {
    const dir = mkdtempSync(join(tmpdir(), 'lasm accounting ')), heartbeat = join(dir, 'heartbeat');
    const child = spawn(process.execPath, ['-e', 'const fs=require("node:fs");let n=0;setInterval(()=>fs.writeFileSync(process.argv[1],String(++n)),10)', heartbeat],
      { detached: true, stdio: 'ignore' });
    const exited = once(child, 'exit');
    const count = () => { try { return Number(readFileSync(heartbeat, 'utf8')); } catch { return 0; } };
    try {
      const deadline = Date.now() + 5000;
      while (!count() && Date.now() < deadline) await pause(20);
      assert.ok(count() > 0, 'Fixture must be running before interruption');
      let stoppedAt;
      const f = { group: child.pid, previousProcesses: [{ pid: child.pid, group: child.pid }], recoveries: [],
        sample() {
          syncPause(); stoppedAt = count(); syncPause(); assert.equal(count(), stoppedAt, 'Work cannot continue without resource accounting');
          if (!shouldRecover) throw timeout();
          return { processes: [{ pid: child.pid, group: child.pid }] };
        }, stopReason: () => null };
      if (shouldRecover) {
        recoverDarwinSample(timeout(), f);
        const deadline = Date.now() + 5000;
        while (count() <= stoppedAt && Date.now() < deadline) await pause(20);
        assert.ok(count() > stoppedAt, 'Safe work resumes after accounting recovers');
      } else {
        assert.throws(() => recoverDarwinSample(timeout(), f), /ETIMEDOUT/);
        const [code, signal] = await exited; assert.equal(code, null); assert.equal(signal, 'SIGKILL');
      }
    } finally {
      if (child.exitCode === null && child.signalCode === null) { process.kill(-child.pid, 'SIGKILL'); await exited; }
      rmSync(dir, { recursive: true, force: true });
    }
  });
