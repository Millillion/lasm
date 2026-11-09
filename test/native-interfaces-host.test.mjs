// Network interfaces (operation 144) match the engine's own libuv view of this host.
import test from 'node:test';
import assert from 'node:assert/strict';
import { networkInterfaces } from 'node:os';
import { isIP } from 'node:net';
import { createNodeRuntimeHost } from '../src/node-host.mjs';
import { decode, ip } from './helpers/interfaces.mjs';

test('interfaces match the engine\'s libuv view of this host', { skip: process.platform === 'win32' }, async () => {
  const host = createNodeRuntimeHost();
  const result = await host.request(144, 0, 0n, Buffer.alloc(0));
  host.close();
  assert.equal(result.error, false);
  const actual = decode(result.bytes).map(value => JSON.stringify(value)).sort();
  const expected = Object.entries(networkInterfaces()).flatMap(([name, addresses]) => addresses.map(address => JSON.stringify({
    name, physical: address.mac.split(':').map(part => parseInt(part, 16)), loopback: address.internal ? 1 : 0,
    address: ip(address.family === 'IPv6' ? 6 : 4, address.address.split('%')[0]),
    netmask: ip(address.family === 'IPv6' ? 6 : 4, address.netmask),
  }))).sort();
  assert.deepEqual(actual, expected);
  assert.ok(actual.length > 0);
  assert.ok(expected.every(value => isIP(JSON.parse(value).name) === 0));
});

