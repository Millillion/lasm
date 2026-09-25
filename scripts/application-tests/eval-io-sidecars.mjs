// Parallel IO execution must account for every upstream per-file sidecar.
// Currently only a CTest .serial marker has a reviewed equivalent:
// the original and parallel runs execute sequentially under the single-workload
// resource guard. Expected output, flags and setup scripts need separate review.
import assert from 'node:assert/strict';

export function reviewedEvalIOSidecars(sources, name, review, { sequential } = {}) {
  const expected = review.sidecars ?? [];
  assert.ok(Array.isArray(expected));
  const actual = Object.keys(sources).filter(path => path.startsWith('tests/' + name + '.')).sort();
  assert.deepEqual(actual, expected.map(item => item.path).sort(), 'Every upstream sidecar needs an explicit review');
  assert.equal(new Set(expected.map(item => item.path)).size, expected.length, 'Duplicate sidecar review');
  for (const entry of expected) {
    assert.equal(entry.path, 'tests/' + name + '.serial', 'Only the CTest serial marker is supported');
    assert.equal(entry.kind, 'ctest-run-serial', 'Review the sidecar semantics explicitly');
    assert.match(entry.sha256, /^[a-f0-9]{64}$/);
    // Upstream CMake checks this marker's existence. Its explanatory text is
    // retained byte for byte as an original input, never executed or rewritten.
    assert.equal(sources[entry.path].sha256, entry.sha256, 'The upstream serial marker changed');
    assert.equal(sequential, true, 'Preserve the upstream serial execution requirement');
  }
  return expected.map(entry => entry.path);
}
