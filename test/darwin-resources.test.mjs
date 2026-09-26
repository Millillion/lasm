import test from 'node:test';
import assert from 'node:assert/strict';
import { parseDarwinProcesses, workloadProcesses } from '../scripts/full-lean/darwin-resources.mjs';

test('macOS monitor follows descendants, detached children and birth-stamped identities', () => {
  const rows = parseDarwinProcesses(' 10 1 10 20 Mon Sep 21 10:00:00 2026\n11 10 10 30 Mon Sep 21 10:00:01 2026\n12 11 12 40 Mon Sep 21 10:00:02 2026\n90 1 90 70 Mon Sep 21 10:00:03 2026');
  const seen = new Set();
  assert.deepEqual(workloadProcesses(rows, 10, seen).map(p => p.pid), [10, 11, 12]);
  assert.equal(workloadProcesses(rows, 10, seen).reduce((sum, p) => sum + p.bytes, 0), 90 * 1024);
  assert.equal(parseDarwinProcesses('12 11 12 40 Mon Sep 21 10:00:02 2026    \n13 1 13 20 other')[0].identity, rows[2].identity);
  const orphan = { ...rows[2], parent: 1 };
  assert.deepEqual(workloadProcesses([orphan, rows[3]], 10, seen).map(p => p.pid), [12]);
  assert.deepEqual(workloadProcesses([{ ...orphan, identity: '12:new birth time' }], 10, seen), []);
  assert.throws(() => parseDarwinProcesses('unrecognized accounting'), /Cannot parse/);
});

test('process names with spaces do not change birth-stamped cleanup identities', () => {
  const [before, after] = parseDarwinProcesses('12 11 12 40 Mon Sep 21 10:00:02 2026 /tools space λ/clang\n12 11 12 45 Mon Sep 21 10:00:02 2026 /other/program');
  assert.equal(before.command, '/tools space λ/clang');
  assert.equal(before.identity, after.identity);
  assert.equal(before.identity, '12:Mon Sep 21 10:00:02 2026');
});
