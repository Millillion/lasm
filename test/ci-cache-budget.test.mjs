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
