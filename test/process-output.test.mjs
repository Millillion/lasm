import assert from 'node:assert/strict';
import test from 'node:test';
import { processOutput } from '../integration/process-output.mjs';

test('native/deployed equality cannot hide different invalid UTF-8 output bytes', () => {
  for (const stream of ['stdout', 'stderr']) {
    const original = { status: 0, stdout: Buffer.from('ok\n'), stderr: Buffer.alloc(0),
      [stream]: Buffer.from([0, 0x80, 10]) };
    const changed = { ...original, [stream]: Buffer.from([0, 0xff, 10]) };
    const expected = processOutput(original), actual = processOutput(changed);
    assert.equal(expected[stream], actual[stream], 'The old text-only comparison misses this difference');
    assert.notDeepEqual(expected, actual);
    assert.deepEqual(Buffer.from(expected[stream + 'Base64'], 'base64'), original[stream]);
  }
  assert.throws(() => processOutput({ status: 0, stdout: 'already decoded', stderr: '' }), /without a text encoding/);
});
