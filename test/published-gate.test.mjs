import test from 'node:test';
import assert from 'node:assert/strict';
import { releasePublished } from '../scripts/release/published-gate.mjs';

const run = (status, conclusion) => ({ id: 1, status, conclusion });
const job = (name, status, conclusion = null) => ({ name, status, conclusion });
const sequence = states => { let i = 0; return async () => states[Math.min(i++, states.length - 1)]; };
const fast = { delayMs: 0, sleep: async () => {} };

test('waits for the job list instead of reading a missing release job as "none" (0.3.2 race)', async () => {
  const read = sequence([
    { run: run('completed', 'success'), jobs: [] },
    { run: run('completed', 'success'), jobs: [job('plan', 'completed', 'success'), job('release', 'in_progress')] },
    { run: run('completed', 'success'), jobs: [job('plan', 'completed', 'success'), job('release', 'completed', 'success')] },
  ]);
  assert.deepEqual(await releasePublished(read, fast), { published: true, reason: 'release run 1 (success): release job success' });
});

test('a run whose release job was skipped published nothing', async () => {
  const read = sequence([{ run: run('completed', 'success'), jobs: [job('plan', 'completed', 'success'), job('release', 'completed', 'skipped')] }]);
  assert.equal((await releasePublished(read, fast)).published, false);
});

test('a run without a release job (checks still running) published nothing', async () => {
  const read = sequence([{ run: run('completed', 'success'), jobs: [job('plan', 'completed', 'success')] }]);
  assert.deepEqual(await releasePublished(read, fast), { published: false, reason: 'release run 1 (success): release job none' });
});

test('a failed release run published nothing', async () => {
  const read = sequence([{ run: run('completed', 'failure'), jobs: [job('plan', 'completed', 'success'), job('release', 'completed', 'failure')] }]);
  assert.equal((await releasePublished(read, fast)).published, false);
});

test('data that never becomes final fails instead of skipping', async () => {
  const read = sequence([{ run: run('completed', 'success'), jobs: [] }]);
  await assert.rejects(releasePublished(read, { ...fast, attempts: 3 }), /never became final \(run completed, jobs none\)/);
});
