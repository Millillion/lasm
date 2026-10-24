import test from 'node:test';
import assert from 'node:assert/strict';
import { groupByOp } from '../bench/ops.mjs';

test('benchmark lines group by op, including names on Object.prototype', () => {
  const line = (op, medianNs) => JSON.stringify({ op, digits: 10000, medianNs });
  const ops = groupByOp([[line('mul', 1), line('toString', 2), line('constructor', 3)].join('\n') + '\n',
    [line('mul', 4), line('toString', 5), line('hasOwnProperty', 6)].join('\n')]);
  assert.deepEqual([...ops.keys()], ['mul', 'toString', 'constructor', 'hasOwnProperty']);
  assert.deepEqual(ops.get('toString').map(o => o.medianNs), [2, 5]);
  assert.deepEqual(Object.fromEntries(ops).mul.map(o => o.medianNs), [1, 4]);
  assert.equal(groupByOp(['']).size, 0);
});
