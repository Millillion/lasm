import assert from 'node:assert/strict';
import test from 'node:test';
import { reviewedEvalIOSidecars } from '../scripts/application-tests/eval-io-sidecars.mjs';

const name = 'elab/example.lean', marker = 'tests/' + name + '.serial';
const sha256 = '6eb1d9b69ec2e0d1c35c2147b84b9c8be1ba791194ff64a8dfee03f2ff2e5088';
const sources = { ['tests/' + name]: { sha256: '1'.repeat(64) }, [marker]: { sha256 } };
const review = { sidecars: [{ path: marker, sha256, kind: 'ctest-run-serial' }] };

test('an exact serial marker requires sequential execution and remains an original input', () => {
  assert.deepEqual(reviewedEvalIOSidecars(sources, name, review, { sequential: true }), [marker]);
  assert.throws(() => reviewedEvalIOSidecars(sources, name, review), /serial execution/);
  assert.throws(() => reviewedEvalIOSidecars(sources, name, review, { sequential: false }), /serial execution/);
});
test('unreviewed outputs, flags or setup sidecars cannot be silently dropped', () => {
  for (const suffix of ['out.expected', 'flags', 'init.sh']) {
    const changed = { ...sources, ['tests/' + name + '.' + suffix]: { sha256 } };
    assert.throws(() => reviewedEvalIOSidecars(changed, name, review, { sequential: true }), /explicit review/);
    const expanded = { sidecars: [...review.sidecars, { path: 'tests/' + name + '.' + suffix, sha256 }] };
    assert.throws(() => reviewedEvalIOSidecars(changed, name, expanded, { sequential: true }), /Only the CTest serial marker/);
  }
});
test('missing, modified and duplicate serial markers reject before execution', () => {
  assert.throws(() => reviewedEvalIOSidecars({}, name, review, { sequential: true }), /explicit review/);
  assert.throws(() => reviewedEvalIOSidecars({ ...sources, [marker]: { sha256: '2'.repeat(64) } }, name, review,
    { sequential: true }), /serial marker changed/);
  assert.throws(() => reviewedEvalIOSidecars(sources, name, { sidecars: [review.sidecars[0], review.sidecars[0]] },
    { sequential: true }));
  assert.deepEqual(reviewedEvalIOSidecars({}, name, {}, { sequential: true }), []);
});
