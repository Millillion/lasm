import test from 'node:test';
import assert from 'node:assert/strict';
import net from 'node:net';
import { once } from 'node:events';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { createNodeRuntimeHost, numbers } from '../src/node-host.mjs';
import { root } from '../src/toolchain.mjs';

test('bound and failed-bind descriptors are released in each installed engine',
  { skip: process.platform !== 'linux', timeout: 30_000 }, t => {
    const fixture = join(root, 'test/fixtures/tcp-lifetime-host.mjs');
    const engines = [
      ['node', process.execPath, [fixture]],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', fixture]],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [fixture]],
    ];
    for (const [name, executable, command] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      const result = spawnSync(executable, command, { cwd: root, encoding: 'utf8', timeout: 5000 });
      assert.equal(result.status, 0, `${name}: ${result.error?.message ?? result.stderr}`);
      assert.equal(result.stdout, '100 bound sockets and 10 connected client/server pairs released\n');
      assert.equal(result.stderr, '');
      t.diagnostic(`${name}: passed without descriptor growth`);
    }
  });

test('IPv6 wildcard listeners accept IPv6 and IPv4-mapped peers and preserve half-close', { timeout: 10_000 }, async t => {
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  const call = async (op, id = 0, n = 0, bytes = Buffer.alloc(0)) => {
    const result = await host.request(op, id, BigInt(n), bytes);
    assert.equal(result.error, false, result.bytes.subarray(16).toString()); return result.bytes;
  };
  const server = Number((await call(50)).readBigUInt64LE());
  await call(51, server, 0, Buffer.concat([numbers(6, 0), Buffer.from('::')]));
  await call(52, server, 16);
  const port = Number((await call(62, server)).readBigUInt64LE(8));
  for (const address of ['::1', '127.0.0.1']) {
    const accepting = call(53, server);
    const client = net.connect({ host: address, port, allowHalfOpen: true });
    t.after(() => client.destroy());
    await once(client, 'connect');
    const peer = Number((await accepting).readBigUInt64LE());
    client.end('request');
    assert.equal((await call(56, peer, 64)).toString(), 'request');
    assert.equal((await call(56, peer, 64)).length, 0);
    let response = '';
    client.on('data', bytes => { response += bytes; });
    const ended = once(client, 'end');
    await call(59, peer, 0, Buffer.from('response after EOF'));
    await call(60, peer);
    await ended;
    assert.equal(response, 'response after EOF');
    host.release(peer);
  }
});
