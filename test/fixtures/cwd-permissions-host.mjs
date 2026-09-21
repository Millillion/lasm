import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, chmodSync, rmdirSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createNodeRuntimeHost, numbers } from '../../src/node-host.mjs';

const original = process.cwd(), root = mkdtempSync(join(tmpdir(), 'lasm-cwd-permissions-'));
const text = value => { const bytes = Buffer.from(value); return Buffer.concat([numbers(bytes.length), bytes]); };
async function call(host, op, id = 0, arg = 0n, bytes = Buffer.alloc(0)) {
  const result = await host.request(op, id, arg, bytes);
  assert.equal(result.error, false, `operation ${op}: ${result.bytes.toString()}`);
  return result.bytes;
}
async function child(host, directory, command = '/bin/true') {
  const request = Buffer.concat([numbers(2, 0, 0, 1, 0, 0, 0, directory === undefined ? 0 : 1),
    text(command), ...(directory === undefined ? [] : [text(directory)])]);
  const bytes = await call(host, 80, 0, 0n, request);
  const [id, , , stdout, stderr] = Array.from({ length: 5 }, (_, i) => Number(bytes.readBigUInt64LE(i * 8)));
  try {
    const output = await Promise.all([call(host, 2, stdout, 8192n), call(host, 2, stderr, 8192n)]);
    const code = Number((await call(host, 82, id)).readBigUInt64LE());
    return { code, stdout: output[0].toString(), stderr: output[1].toString() };
  } finally { await host.releaseAsync(stdout); await host.releaseAsync(stderr); host.release(id); }
}
const success = { code: 0, stdout: '', stderr: '' };
try {
  for (const removed of [process.argv[2] === 'removed']) {
    const directory = join(root, removed ? 'removed' : 'named'); mkdirSync(directory);
    const host = createNodeRuntimeHost({ cwd: directory, propagateCwd: true });
    try {
      // A custom initial cwd need not yet match the JavaScript process cwd.
      assert.deepEqual(await child(host, undefined, '/bin/pwd'), { code: 0, stdout: directory + '\n', stderr: '' });
      await call(host, 29, 0, 0n, Buffer.from(directory));
      chmodSync(directory, 0);
      if (removed) rmdirSync(directory);
      assert.deepEqual(await child(host), success, 'inherited cwd was entered again');
      assert.deepEqual(await child(host, '.'), { code: 255, stdout: '', stderr: 'could not change directory to .\n' });
      assert.deepEqual(await child(host, root), success);
    } finally {
      process.chdir(original);
      if (!removed) chmodSync(directory, 0o700);
      host.close();
    }
  }
  console.log('inherited cwd permissions, removed cwd and explicit child cwd passed');
} finally { process.chdir(original); rmSync(root, { recursive: true, force: true }); }
