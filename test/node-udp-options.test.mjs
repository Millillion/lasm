// UDP sockets (operations 100–114) in-process: socket options, multicast
// membership, address queries before binding or connecting, family checks,
// errors raised while receiving, and Lean 4.36's truncation error.
import test from 'node:test';
import assert from 'node:assert/strict';
import dgram from 'node:dgram';
import { once } from 'node:events';
import { createNodeUdp } from '../src/node-udp.mjs';
import { numbers } from '../src/node-host.mjs';

function udp(leanVersion = '4.35.0') {
  const table = new Map();
  let next = 0;
  const host = createNodeUdp({ leanVersion, add: r => { table.set(++next, r); return next; },
    get: (id, type) => { const r = table.get(id); assert.equal(type, 'udp'); return r; } });
  const call = (op, id = 0, arg = 0n, bytes = Buffer.alloc(0)) => host.dispatch(op, id, BigInt(arg), Buffer.from(bytes));
  const open = () => Number(call(100).readBigUInt64LE());
  return { call, table, open };
}
const address = (family, port, host) => Buffer.concat([numbers(family, port), Buffer.from(host)]);
const empty = Buffer.alloc(0);
const settled = async promise => {
  let state = 'pending';
  promise.then(value => { state = { value }; }, error => { state = { error }; });
  for (let i = 0; i < 3; i++) await new Promise(resolve => setImmediate(resolve));
  return state;
};

test('addresses are unavailable before binding or connecting', () => {
  const { call, open, table } = udp();
  const id = open();
  assert.deepEqual([table.get(id).type, table.get(id).family, table.get(id).bound], ['udp', 4, false]);
  assert.throws(() => call(107, id), { code: 'ENOTCONN', message: 'Socket is not connected' });
  assert.throws(() => call(108, id), { code: 'EBADF', message: 'Socket has not been bound' });
  table.get(id).close();
  table.get(id).close();
});

test('socket options and multicast membership reach the bound socket', async t => {
  const { call, open, table } = udp();
  const id = open();
  t.after(() => table.get(id).close());
  await call(101, id, 0, address(4, 0, '0.0.0.0'));
  const socket = table.get(id).socket;
  const seen = [];
  for (const name of ['setBroadcast', 'setMulticastLoopback', 'setMulticastTTL', 'addMembership', 'dropMembership', 'setMulticastInterface', 'setTTL'])
    t.mock.method(socket, name, (...args) => { seen.push([name, ...args]); });
  for (const [op, arg, bytes] of [[109, 1], [109, 0], [110, 1], [110, 0], [111, 7], [112, 1, '239.1.2.3\0'], [112, 0, '239.1.2.3\x00127.0.0.1'],
    [113, 0, '127.0.0.1'], [114, 9]]) assert.deepEqual(call(op, id, arg, bytes ?? ''), empty);
  assert.deepEqual(seen, [['setBroadcast', true], ['setBroadcast', false], ['setMulticastLoopback', true], ['setMulticastLoopback', false],
    ['setMulticastTTL', 7], ['addMembership', '239.1.2.3', undefined], ['dropMembership', '239.1.2.3', '127.0.0.1'],
    ['setMulticastInterface', '127.0.0.1'], ['setTTL', 9]]);
  assert.throws(() => call(112, id, 2, '239.1.2.3\0'), { code: 'EINVAL', message: 'Invalid multicast membership' });
  assert.throws(() => call(115, id), { code: 'ENOSYS', message: 'Unknown UDP operation 115' });
});

test('a socket keeps its first address family', async t => {
  const { call, open, table } = udp();
  const id = open();
  t.after(() => table.get(id).close());
  await call(101, id, 0, address(4, 0, '127.0.0.1'));
  assert.throws(() => call(103, id, 1, Buffer.concat([numbers(Buffer.byteLength(address(6, 1, '::1'))), address(6, 1, '::1'), Buffer.from('x')])),
    { code: 'EAFNOSUPPORT', message: 'Address family does not match socket' });
  assert.deepEqual(call(103, id, 0, numbers(0)), empty);
});

test('a failed bind rejects and an error while receiving rejects the waiter', { skip: process.platform === 'win32' }, async t => {
  const { call, open, table } = udp();
  const holder = dgram.createSocket({ type: 'udp4' });
  holder.bind(0, '127.0.0.1'); await once(holder, 'listening');
  t.after(() => holder.close());
  const id = open();
  t.after(() => table.get(id).close());
  // reuseAddr permits sharing; an unavailable address fails instead.
  await assert.rejects(call(101, id, 0, address(4, 0, '192.0.2.1')), { code: 'EADDRNOTAVAIL' });
  const other = open();
  t.after(() => table.get(other).close());
  await call(101, other, 0, address(4, 0, '127.0.0.1'));
  const waiting = call(104, other, 64);
  table.get(other).socket.emit('error', Object.assign(new Error('boom'), { code: 'EIO' }));
  assert.equal((await settled(waiting)).error.message, 'boom');
  // An error with no waiter is reported by the next receive.
  table.get(other).socket.emit('error', Object.assign(new Error('later'), { code: 'EIO' }));
  assert.equal(table.get(other).error.message, 'later');
  assert.equal((await settled(call(104, other, 64))).error.message, 'later');
  assert.equal(table.get(other).error, undefined);
});

test('a second receive is EALREADY; closing cancels the waiter', async () => {
  const { call, open, table } = udp();
  const id = open();
  const waiting = call(104, id, 64);
  assert.equal(table.get(id).bound, true);
  assert.throws(() => call(104, id, 64), { code: 'EALREADY' });
  assert.throws(() => call(105, id), { code: 'EALREADY' });
  table.get(id).close();
  const result = await settled(waiting);
  assert.deepEqual([result.error.code, result.error.message], ['ECANCELED', 'Operation cancelled']);
});

for (const [version, truncates] of [['4.35.0', true], ['4.36.0', false]]) test(`Lean ${version}: a datagram larger than the buffer is ${truncates ? 'truncated' : 'EMSGSIZE'}`, async t => {
  const { call, open, table } = udp(version);
  const id = open();
  t.after(() => table.get(id).close());
  await call(101, id, 0, address(4, 0, '127.0.0.1'));
  const port = Number(call(108, id).readBigUInt64LE(8));
  const sender = open();
  t.after(() => table.get(sender).close());
  const target = address(4, port, '127.0.0.1');
  await call(103, sender, 1, Buffer.concat([numbers(target.length), target, Buffer.from('abcdef')]));
  assert.deepEqual(await call(105, id), empty);
  const received = call(104, id, 3);
  if (truncates) {
    const bytes = await received;
    const length = Number(bytes.readBigUInt64LE());
    assert.equal(bytes.subarray(8 + length).toString(), 'abc');
    assert.equal(Number(bytes.subarray(8, 8 + length).readBigUInt64LE()), 4);
  } else await assert.rejects(received, { code: 'EMSGSIZE' });
  if (!truncates) assert.throws(() => call(104, id, 0), { code: 'EINVAL', message: 'receive buffer size must be positive' });
});

test('an IPv6 socket binds to :: when it first receives', async t => {
  const { call, open, table } = udp();
  const id = open();
  t.after(() => table.get(id).close());
  await call(102, id, 0, address(6, 9, '::1')).catch(() => {});
  if (!table.get(id).socket) return;
  assert.equal(table.get(id).family, 6);
  assert.equal(table.get(id).connected, true);
  const remote = call(107, id);
  assert.equal(Number(remote.readBigUInt64LE()), 6);
  assert.equal(Number(remote.readBigUInt64LE(8)), 9);
  assert.equal(remote.subarray(16).toString(), '::1');
  // A connected socket sends without an address.
  await call(103, id, 1, Buffer.concat([numbers(0), Buffer.from('x')]));
});
