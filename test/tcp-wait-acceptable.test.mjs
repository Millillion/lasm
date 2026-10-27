// Lean 4.36's Std.Internal.UV.TCP.Socket.waitAcceptable (host op 66): resolves
// once a connection is queued, leaves it for tryAccept (op 54), and refuses a
// second wait or a socket that is not listening, as native libuv does.
import test from 'node:test';
import assert from 'node:assert/strict';
import net from 'node:net';
import { createNodeNetwork } from '../src/node-network.mjs';
import { numbers } from '../src/node-host.mjs';

test('waitAcceptable resolves for a queued connection and leaves it to tryAccept', async () => {
  const resources = new Map(); let next = 1;
  const network = createNodeNetwork({ add: r => { resources.set(next, r); return next++; },
    get: (id, type) => { const r = resources.get(id); assert.equal(r?.type, type); return r; }, release: id => resources.delete(id) });
  const call = (op, id, arg = 0n, bytes = Buffer.alloc(0)) => network.dispatch(op, id, arg, bytes, { fiber: 0 });
  const id = Number(call(50, 0).readBigUInt64LE(0));
  await assert.rejects(async () => call(66, id), { code: 'EINVAL' });
  call(51, id, 0n, Buffer.concat([numbers(4, 0), Buffer.from('127.0.0.1')]));
  await call(52, id, 16n);
  const port = Number(call(62, id).readBigUInt64LE(8));
  const waiting = call(66, id);
  assert.ok(waiting instanceof Promise);
  assert.throws(() => call(66, id), { code: 'EALREADY' });
  const client = net.connect(port, '127.0.0.1');
  assert.equal((await waiting).length, 0);
  const accepted = Number(call(54, id).readBigUInt64LE(0));
  assert.ok(accepted > 0, 'the connection stayed queued for tryAccept');
  assert.equal(Number(call(54, id).readBigUInt64LE(0)), 0);
  client.destroy();
  for (const r of resources.values()) { r.socket?.destroy(); r.server?.close(); }
});
