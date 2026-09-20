import test from 'node:test';
import assert from 'node:assert/strict';
import { HandleTable } from '../src/handle-table.mjs';

test('host IDs reach the signed Wasm boundary and wrap without losing live resources', () => {
  // Start near the actual ABI boundary instead of allocating billions of IDs.
  const table = new HandleTable({ first: 0x7ffffffd });
  const first = table.allocate('first');
  const middle = table.allocate('middle');
  const last = table.allocate('last');
  assert.equal(last, 0x7fffffff);
  assert.equal(last | 0, last);
  table.delete(middle);
  assert.equal(table.allocate('replacement'), middle);
  assert.equal(table.get(first), 'first');
  assert.equal(table.get(last), 'last');
  assert.equal(table.get(middle), 'replacement');
  assert.throws(() => table.allocate('overflow'), { code: 'EMFILE' });
  table.delete(first);
  assert.equal(table.allocate('recovered'), first);
});

test('reserved standard handles survive repeated resource and request ID reuse', () => {
  const resources = new HandleTable({ first: 10, last: 11, entries: [[0, 'stdin'], [1, 'stdout'], [2, 'stderr']] });
  const requests = new HandleTable({ last: 2 });
  const liveResource = resources.allocate('live file');
  const liveRequest = requests.allocate('pending result');
  for (let i = 0; i < 100; i++) {
    const resource = resources.allocate(i), request = requests.allocate(i);
    assert.equal(resource, 11); assert.equal(request, 2);
    resources.delete(resource); requests.delete(request);
  }
  assert.equal(resources.get(liveResource), 'live file');
  assert.equal(requests.get(liveRequest), 'pending result');
  assert.deepEqual([...resources.keys()], [0, 1, 2, 10]);
  requests.clear();
  assert.equal(requests.allocate('after clear'), 1);
});
