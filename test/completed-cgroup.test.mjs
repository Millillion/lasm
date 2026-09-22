import test from 'node:test';
import assert from 'node:assert/strict';
import { completedCgroupRemoval } from '../scripts/full-lean/completed-cgroup.mjs';

const path = '/sys/fs/cgroup/lasm-test.service';
const sample = () => ({ cgroup: path, serviceResult: 'success', exitCode: 'exited', exitStatus: '0',
  capturedAt: '2026-09-22T09:34:48.445Z', memoryBytes: 123, peakMemoryBytes: 456, swapBytes: 0,
  tasks: 1, pressureSomeAvg10: 0, memoryEvents: { high: 0, max: 0, oom: 0, oom_kill: 0, oom_group_kill: 0 } });

test('cgroup removal is recognized only after a complete final sample exists', () => {
  for (const code of ['ENOENT', 'ENODEV']) {
    assert.equal(completedCgroupRemoval({ code }, path, sample()), true);
    assert.equal(completedCgroupRemoval({ code }, path, undefined), false);
  }
});

test('unrelated IO errors and another workload cannot excuse lost monitoring', () => {
  for (const code of ['EACCES', 'EIO', 'ENOSPC', undefined])
    assert.equal(completedCgroupRemoval({ code }, path, sample()), false);
  assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, '/sys/fs/cgroup/other.service', sample()), false);
});

test('failed and incomplete final captures remain monitoring failures', () => {
  const bad = [undefined, NaN, Infinity, -1];
  for (const value of bad) {
    assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, path, { ...sample(), peakMemoryBytes: value }), false);
    const report = sample(); report.memoryEvents.oom_kill = value;
    assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, path, report), false);
  }
  assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, path, { ...sample(), captureError: 'failed final read' }), false);
  assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, path, { ...sample(), serviceResult: undefined }), false);
});

test('recognizing completed removal retains resource-failure evidence', () => {
  const report = sample(); report.serviceResult = 'oom-kill'; report.memoryEvents.oom_kill = 1;
  const before = structuredClone(report);
  assert.equal(completedCgroupRemoval({ code: 'ENODEV' }, path, report), true);
  assert.deepEqual(report, before);
});
