import test from 'node:test';
import assert from 'node:assert/strict';
import { cacheFamily, selectCheckpoint, checkpointPruning } from '../scripts/ci/compiler-cache-index.mjs';

const identity = 'a'.repeat(64), oldIdentity = 'b'.repeat(64);
const record = (id, recipe = identity) => ({ id, key: cacheFamily + recipe + '-' + String(id).repeat(64),
  ref: 'refs/heads/main', size_in_bytes: 100, created_at: `2026-09-24T00:00:0${id}Z` });

test('restore chooses the latest exact recipe on main and ignores unrelated caches', () => {
  const first = record(1), next = record(2), other = record(3, oldIdentity);
  const branch = { ...record(4), ref: 'refs/heads/other' };
  const malformed = { ...record(5), key: cacheFamily + identity + '-not-a-checksum' };
  assert.equal(selectCheckpoint([branch, other, first, malformed, next], identity).id, 2);
  assert.equal(selectCheckpoint([other, branch, malformed], identity), undefined);
  assert.throws(() => selectCheckpoint([next], 'untrusted-recipe'));
});

test('pruning preserves a verified new checkpoint and previous fallback, touching only owned main keys', () => {
  const entries = [record(1, oldIdentity), record(2), record(3),
    { ...record(4), ref: 'refs/heads/other' }, { ...record(5), key: 'another-workflow' }];
  const plan = checkpointPruning(entries, record(3).key);
  assert.deepEqual(plan.keep.map(entry => entry.id), [3, 2]);
  assert.deepEqual(plan.remove.map(entry => entry.id), [1]);
  assert.throws(() => checkpointPruning(entries, record(6).key), /Verify the new saved/);
  assert.throws(() => checkpointPruning(entries, 'another-workflow'));
  assert.throws(() => checkpointPruning([{ ...record(3), id: -1 }], record(3).key));
});
