import assert from 'node:assert/strict';
import { readdirSync, readlinkSync } from 'node:fs';
import { createNodeRuntimeHost, numbers } from '../../src/node-host.mjs';

const host = createNodeRuntimeHost();
const call = async (op, id = 0, bytes = Buffer.alloc(0), argument = 0) => {
  const result = await host.request(op, id, BigInt(argument), bytes);
  assert.equal(result.error, false, result.bytes.subarray(16).toString());
  return result.bytes;
};
function descriptors() {
  // Ignore the directory-scan descriptor, which has closed before readlink.
  return readdirSync('/proc/self/fd').filter(fd => {
    try { return readlinkSync('/proc/self/fd/' + fd).startsWith('socket:'); } catch { return false; }
  }).length;
}
const target = host => Buffer.concat([numbers(4, 0), Buffer.from(host)]);
async function allocate() { return Number((await call(50)).readBigUInt64LE()); }
try {
  const warm = await allocate();
  await call(51, warm, target('127.0.0.1')); host.release(warm);
  const baseline = descriptors();
  for (let i = 0; i < 100; i++) {
    const id = await allocate();
    if (i % 2) {
      const failed = await host.request(51, id, 0n, target('192.0.2.1'));
      assert.equal(failed.error, true);
      // A failed bind keeps its fd available for a subsequent successful bind.
    }
    await call(51, id, target('127.0.0.1'));
    assert.ok((await call(62, id)).readBigUInt64LE(8) > 0n);
    host.release(id);
  }
  for (let i = 0; i < 10; i++) {
    const server = await allocate(), client = await allocate();
    await call(51, server, target('127.0.0.1'));
    await call(52, server, Buffer.alloc(0), 8);
    if (i % 2) await call(51, client, target('127.0.0.1'));
    const accepting = call(53, server);
    await call(65, client, await call(62, server));
    const peer = Number((await accepting).readBigUInt64LE());
    await call(59, client, Buffer.from('request'));
    assert.equal((await call(56, peer, Buffer.alloc(0), 7)).toString(), 'request');
    await call(60, client);
    assert.equal((await call(56, peer, Buffer.alloc(0), 7)).length, 0);
    await call(59, peer, Buffer.from('response'));
    await call(60, peer);
    host.release(peer); host.release(server);
    assert.equal((await call(56, client, Buffer.alloc(0), 8)).toString(), 'response');
    assert.equal((await call(56, client, Buffer.alloc(0), 8)).length, 0);
    host.release(client);
  }
  // Engine-owned descriptors close on their event loops after destroy/close.
  await new Promise(resolve => setTimeout(resolve, 50));
  assert.equal(host.stats().resources, 0);
  assert.equal(descriptors(), baseline, 'bound socket descriptors leaked');
  console.log('100 bound sockets and 10 connected client/server pairs released');
} finally { host.close(); }
