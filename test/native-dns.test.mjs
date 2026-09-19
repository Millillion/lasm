import test from 'node:test';
import assert from 'node:assert/strict';
import { nativeDns } from '../src/native-dns.mjs';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

test('resolver preserves address families and protocol-specific duplicate results', async () => {
  const resolver = nativeDns();
  const ipv4 = await resolver.getAddrInfo('127.0.0.1', '80', 1);
  assert.equal(ipv4.length % 17, 0);
  assert.ok(ipv4.length >= 17);
  if (process.platform === 'linux') assert.equal(ipv4.length, 51); // stream, datagram, raw
  for (let offset = 0; offset < ipv4.length; offset += 17)
    assert.deepEqual(ipv4.subarray(offset, offset + 5), Buffer.from([4, 127, 0, 0, 1]));
  const ipv6 = await resolver.getAddrInfo('::1', '80', 2);
  assert.ok(ipv6.length >= 17);
  for (let offset = 0; offset < ipv6.length; offset += 17) {
    assert.equal(ipv6[offset], 6);
    assert.deepEqual(ipv6.subarray(offset + 1, offset + 17), Buffer.from('00000000000000000000000000000001', 'hex'));
  }
  assert.equal((await resolver.getNameInfo(4, '127.0.0.1', 80)).toString().split('\0')[1], 'http');
});

test('resolver retains service errors and concurrent requests complete independently', async t => {
  const host = createNodeRuntimeHost(); t.after(() => host.close());
  const ids = Array.from({ length: 20 }, (_, i) => host.start(115, 0, 1n,
    Buffer.from('127.0.0.1\0' + (i % 2 ? 'http' : '80'))));
  for (const id of ids) {
    await host.whenReady(id);
    const result = await host.request(90, id);
    assert.equal(result.error, false);
    assert.ok(result.bytes.length >= 17);
  }
  await assert.rejects(nativeDns().getAddrInfo('127.0.0.1', 'lasm-nonexistent-service-47901', 1),
    error => error.errno === -3010 && error.code === 'EAI_SERVICE');
});
