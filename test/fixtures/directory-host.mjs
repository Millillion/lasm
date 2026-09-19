import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from '../../src/node-host.mjs';

const host = createNodeRuntimeHost({ cwd: process.argv[2] });
try {
  const result = await host.request(13, 0, 0n, Buffer.from('.'));
  assert.equal(result.error, false, result.bytes.subarray(16).toString());
  assert.equal(result.bytes.toString('hex'), process.argv[3]);
  console.log('directory order and raw filename bytes match the native reference');
} finally { host.close(); }
