import test from 'node:test';
import assert from 'node:assert/strict';
import { campaignResourceIssue } from '../scripts/full-lean/campaign-resource-report.mjs';

const completed = () => ({
  status: 'finished', unitReleased: true, resourceLimited: false, memoryThrottled: false,
  service: { memoryEvents: { high: 0, max: 0, oom: 0, oom_kill: 0, oom_group_kill: 0 }, swapBytes: 0 },
});

test('completed resource cleanup and zero memory events permit the next test', () => {
  assert.equal(campaignResourceIssue(completed()), undefined);
});

test('a contained proactive budget stop stays separate from a test failure', () => {
  const resource = { ...completed(), resourceLimited: true,
    stoppedBecause: 'Workload reached its proactive memory budget' };
  assert.equal(campaignResourceIssue(resource), undefined);
  assert.equal(resource.resourceLimited, true);
});

for (const [name, change] of [
  ['missing report', () => null],
  ['unfinished report', r => ({ ...r, status: 'running' })],
  ['missing cleanup', r => { delete r.unitReleased; return r; }],
  ['incomplete cleanup', r => ({ ...r, unitReleased: false })],
  ['lost monitor', r => ({ ...r, monitorError: 'cgroup disappeared' })],
  ['missing final service', r => { delete r.service; return r; }],
  ['failed final capture', r => { r.service.captureError = 'measurement unavailable'; return r; }],
  ['missing abort status', r => { delete r.resourceLimited; return r; }],
  ['missing throttle status', r => { delete r.memoryThrottled; return r; }],
  ['throttling', r => ({ ...r, memoryThrottled: true })],
  ['missing memory counters', r => { delete r.service.memoryEvents; return r; }],
  ['missing swap counter', r => { delete r.service.swapBytes; return r; }],
  ['swap use', r => { r.service.swapBytes = 4096; return r; }],
  ['host pressure', r => ({ ...r, resourceLimited: true, stoppedBecause: 'Host available memory fell below 8 GiB' })],
  ['workload pressure', r => ({ ...r, resourceLimited: true, stoppedBecause: 'Workload memory pressure reached 5 percent' })],
  ['unclassified budget stop', r => ({ ...r, stoppedBecause: 'Workload reached its proactive memory budget' })],
  ['unspecified abort', r => ({ ...r, resourceLimited: true })],
]) test(`${name} prevents another workload`, () => {
  const resource = change(completed()), before = structuredClone(resource);
  assert.equal(typeof campaignResourceIssue(resource), 'string');
  assert.deepEqual(resource, before, 'Classification must preserve the original evidence');
});

for (const name of ['high', 'max', 'oom', 'oom_kill', 'oom_group_kill']) {
  test(`${name} memory event prevents another workload`, () => {
    const resource = completed();
    resource.service.memoryEvents[name] = 1;
    assert.match(campaignResourceIssue(resource), new RegExp(name));
  });
  test(`missing ${name} counter does not imply zero`, () => {
    const resource = completed();
    delete resource.service.memoryEvents[name];
    assert.match(campaignResourceIssue(resource), new RegExp(name));
  });
}
