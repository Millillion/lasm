import test from 'node:test';
import assert from 'node:assert/strict';
import { HandleTable } from '../src/handle-table.mjs';
import { forAll } from './helpers/property.mjs';

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

test('handle ranges must be positive signed i32 integers in order', () => {
  for (const options of [{ first: 0 }, { first: -1 }, { first: 1.5 }, { last: 2.5 }, { first: '1' }, { last: NaN },
    { first: 5, last: 4 }, { last: 0x80000000 }, { first: 0x80000000, last: 0x80000000 }])
    assert.throws(() => new HandleTable(options), { name: 'RangeError', message: 'Host handles must fit the positive signed i32 range' }, JSON.stringify(options));
  for (const options of [{ first: 1, last: 1 }, { first: 0x7fffffff }, { last: 0x7fffffff }, {}]) assert.ok(new HandleTable(options));
  const single = new HandleTable({ first: 7, last: 7 });
  assert.equal(single.allocate('only'), 7);
  assert.throws(() => single.allocate('more'), error => error.code === 'EMFILE' && error.message === 'Host resource handle table is full');
  assert.equal(new HandleTable().allocate('first'), 1);
});

// Proposition: Lasm.Cli.Spec.handle_fresh_in_range
//   ∀ (t t' : HandleTable) (value : String) (id : Nat), t.allocate value = .ok (id, t') →
//     t.has id = false ∧ t'.entries = t.entries ++ [(id, value)] ∧ t'.first = t.first ∧ t'.last = t.last ∧
//     (t.first ≤ t.next → t.next ≤ t.last → t.first ≤ id ∧ id ≤ t.last ∧ t'.first ≤ t'.next ∧ t'.next ≤ t'.last)
test('an allocated handle is fresh, in range, and added after every entry', () => {
  forAll(r => {
    const first = r.int(1, 5), last = first + r.int(0, 4);
    return { first, last, ops: r.array(r.int(1, 20), () => r.next() < 0.6 ? ['allocate'] : ['delete', r.int(0, 10)]) };
  }, ({ first, last, ops }) => {
    const table = new HandleTable({ first, last, entries: [[0, 'reserved']] });
    for (const [op, id] of ops) {
      if (op === 'delete') { table.delete(id); continue; }
      const before = [...table.entries()];
      let got;
      try { got = table.allocate(op); } catch (error) {
        assert.equal(error.code, 'EMFILE');
        for (let i = first; i <= last; i++) assert.ok(table.has(i));
        continue;
      }
      assert.ok(!before.some(([k]) => k === got));
      assert.ok(first <= got && got <= last);
      assert.deepEqual([...table.entries()], [...before, [got, op]]);
    }
  });
});
