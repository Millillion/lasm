import test from 'node:test';
import assert from 'node:assert/strict';
import { planCacheUpload } from '../scripts/ci/cache-budget.mjs';
const GiB = 1024 ** 3;

test('accounts for archive framing and the larger of both repository metrics', () => {
  const result = planCacheUpload(1024, GiB, 2 * GiB);
  assert.equal(result.usedBytes, 2 * GiB);
  assert.ok(result.uploadUpperBound > 1024);
  assert.ok(result.maximumAfterUpload < result.includedAllowanceBytes);
  assert.equal(planCacheUpload(1024, 3 * GiB, GiB).usedBytes, 3 * GiB);
});
test('refuses a payload or total that can cross the lower fixed ceiling', () => {
  assert.throws(() => planCacheUpload(2 * GiB + 1, 0, 0), /payload limit/);
  assert.throws(() => planCacheUpload(GiB, 7 * GiB, 0), /repository ceiling/);
  assert.throws(() => planCacheUpload(0, 0, 8 * GiB), /repository ceiling/);
  assert.doesNotThrow(() => planCacheUpload(2 * GiB, 5 * GiB, 5 * GiB));
});
test('missing, invalid or unsafe API metrics cannot authorize an upload', () => {
  for (const value of [undefined, NaN, -1, Infinity, 1.5, '0', Number.MAX_SAFE_INTEGER + 1]) {
    assert.throws(() => planCacheUpload(1, value, 0), /byte count/);
    assert.throws(() => planCacheUpload(1, 0, value), /byte count/);
    assert.throws(() => planCacheUpload(value, 0, 0), /byte count/);
  }
});

test('an upload over the ceiling evicts the writer\'s own oldest caches, never recent ones', async () => {
  const { planEviction } = await import('../scripts/ci/cache-budget.mjs');
  const GiB = 1024 ** 3, now = Date.parse('2026-10-27T18:00:00Z');
  const cache = (id, key, gib, accessed) => ({ id, key, size_in_bytes: gib * GiB, last_accessed_at: accessed });
  const caches = [
    cache(1, 'node-candidate-1-1-a', 0.5, '2026-10-20T00:00:00Z'),
    cache(2, 'node-candidate-2-1-b', 0.5, '2026-10-21T00:00:00Z'),
    cache(3, 'node-runtime-inputs-x', 2, '2026-10-01T00:00:00Z'),
    cache(4, 'node-candidate-3-1-c', 0.5, '2026-10-27T12:00:00Z'),
  ];
  const base = { payloadBytes: 0.1 * GiB, now, prefix: 'node-candidate-' };
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 7.9 * GiB }).map(c => c.id), [1]);
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 8.5 * GiB }).map(c => c.id), [1, 2]);
  assert.equal(planEviction(caches, { ...base, usedBytes: 8.9 * GiB }), null, 'recent and other workflows\' caches stay');
  assert.equal(planEviction(caches, { ...base, prefix: undefined, usedBytes: 7.9 * GiB }), null);
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 1 * GiB }), []);
});

test('stale apt caches (other refs, superseded image versions) are evicted first; current ones stay', async () => {
  const { planEviction, staleAptCaches } = await import('../scripts/ci/cache-budget.mjs');
  const GiB = 1024 ** 3, now = Date.parse('2026-11-12T18:00:00Z');
  const cache = (id, key, ref, gib, created, accessed = created) =>
    ({ id, key, ref, size_in_bytes: gib * GiB, created_at: created, last_accessed_at: accessed });
  const caches = [
    cache(1, 'apt-debs-ubuntu24-X64-playwright-1.63.0-chromium-abc-20261102.1', 'refs/heads/main', 0.2, '2026-11-03T00:00:00Z'),
    cache(2, 'apt-debs-ubuntu24-X64-playwright-1.63.0-chromium-abc-20261109.1', 'refs/heads/main', 0.2, '2026-11-10T00:00:00Z'),
    cache(3, 'apt-debs-ubuntu24-X64-bubblewrap-def-20261109.1', 'refs/pull/223/merge', 0.1, '2026-11-10T00:00:00Z'),
    cache(4, 'apt-debs-ubuntu24-X64-bubblewrap-def-20261109.1', 'refs/heads/main', 0.1, '2026-11-10T00:00:00Z'),
    cache(5, 'node-candidate-1-1-a', 'refs/heads/main', 0.5, '2026-11-01T00:00:00Z'),
    cache(6, 'apt-debs-ubuntu24-X64-webkit-ghi-20261109.1', 'refs/pull/224/merge', 0.3, '2026-11-12T12:00:00Z'),
  ];
  assert.deepEqual(staleAptCaches(caches).map(c => c.id).sort(), [1, 3, 6]);
  const base = { payloadBytes: 0.1 * GiB, now, prefix: 'node-candidate-' };
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 7.95 * GiB }).map(c => c.id), [1]);
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 8.1 * GiB }).map(c => c.id), [1, 3]);
  assert.deepEqual(planEviction(caches, { ...base, usedBytes: 8.3 * GiB }).map(c => c.id), [1, 3, 5]);
  assert.equal(planEviction(caches, { ...base, usedBytes: 9 * GiB }), null, 'current and recent apt caches stay');
  assert.deepEqual(planEviction(caches, { ...base, prefix: undefined, usedBytes: 7.95 * GiB }).map(c => c.id), [1]);
});
