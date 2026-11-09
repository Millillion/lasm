// The host's task primitives (mutexes, condition variables, timers: operations
// 40–47 and 70–75) and TCP's argument and state checks, in-process.
import test from 'node:test';
import assert from 'node:assert/strict';
import net from 'node:net';
import { once } from 'node:events';
import { createNodeNetwork } from '../src/node-network.mjs';
import { numbers } from '../src/node-host.mjs';

function network(leanVersion = '4.35.0') {
  const table = new Map();
  let next = 0;
  const released = [];
  const host = createNodeNetwork({ leanVersion,
    add: resource => { table.set(++next, resource); return next; },
    get: (id, type) => { const r = table.get(id); if (!r || type && r.type !== type) throw Object.assign(new Error('Invalid or closed resource'), { code: 'EBADF' }); return r; },
    release: id => { released.push(id); table.get(id)?.close?.(); table.delete(id); } });
  const call = (op, id = 0, arg = 0n, bytes = Buffer.alloc(0), fiber = 1) => host.dispatch(op, id, BigInt(arg), Buffer.from(bytes), { fiber });
  const handle = bytes => Number(bytes.readBigUInt64LE());
  return { call, table, released, handle };
}
const settled = async promise => {
  let state = 'pending';
  promise.then(value => { state = { value }; }, error => { state = { error }; });
  for (let i = 0; i < 3; i++) await new Promise(resolve => setImmediate(resolve));
  return state;
};
const empty = Buffer.alloc(0);
// POSIX socket setup (src/native-tcp.mjs); Windows keeps node:net's own.
const posix = { skip: process.platform === 'win32' };

test('a mutex is held by one fiber; waiters take it in order', async () => {
  const { call, handle, table } = network();
  const m = handle(call(40, 0, 0));
  assert.equal(table.get(m).recursive, false);
  assert.deepEqual(call(41, m, 0, '', 1), empty);
  assert.deepEqual(call(43, m, 0, '', 2), numbers(0));
  // Non-recursive: the owner itself waits.
  const self = call(41, m, 0, '', 1);
  const second = call(41, m, 0, '', 2);
  assert.equal(await settled(second), 'pending');
  assert.deepEqual(call(42, m, 0, '', 1), empty);
  assert.deepEqual((await settled(self)).value, empty);
  assert.equal(table.get(m).owner, 1);
  assert.equal(await settled(second), 'pending');
  call(42, m, 0, '', 1);
  assert.deepEqual((await settled(second)).value, empty);
  assert.equal(table.get(m).owner, 2);
  assert.throws(() => call(42, m, 0, '', 1), { code: 'EINVAL', message: 'Unlock by a task that does not own the mutex' });
  call(42, m, 0, '', 2);
  assert.deepEqual([table.get(m).owner, table.get(m).depth], [null, 0]);
  assert.deepEqual(call(43, m, 0, '', 3), numbers(1));
});

test('a recursive mutex counts its owner\'s locks', async () => {
  const { call, handle, table } = network();
  const m = handle(call(40, 0, 1));
  assert.equal(table.get(m).recursive, true);
  call(41, m, 0, '', 7);
  assert.deepEqual(call(43, m, 0, '', 7), numbers(1));
  assert.equal(table.get(m).depth, 2);
  const other = call(41, m, 0, '', 8);
  call(42, m, 0, '', 7);
  assert.equal(await settled(other), 'pending');
  call(42, m, 0, '', 7);
  assert.deepEqual((await settled(other)).value, empty);
  // Closing a mutex cancels its waiters.
  const waiting = call(41, m, 0, '', 9);
  table.get(m).close();
  assert.equal((await settled(waiting)).error.code, 'ECANCELED');
});

test('condition variables release the mutex while waiting and wake one or all', async () => {
  const { call, handle, table } = network();
  const m = handle(call(40)), c = handle(call(44));
  call(41, m, 0, '', 1);
  const first = call(45, c, m, '', 1);
  assert.equal(table.get(m).owner, null);
  call(41, m, 0, '', 2);
  const second = call(45, c, m, '', 2);
  assert.equal(table.get(c).waiters.length, 2);
  assert.deepEqual(call(46, c), empty);
  assert.deepEqual((await settled(first)).value, empty);
  assert.equal(table.get(m).owner, 1);
  assert.equal(await settled(second), 'pending');
  call(42, m, 0, '', 1);
  assert.deepEqual(call(47, c), empty);
  assert.deepEqual((await settled(second)).value, empty);
  assert.equal(table.get(m).owner, 2);
  // Signalling with no waiter does nothing.
  assert.deepEqual(call(46, c), empty);
  assert.deepEqual(call(47, c), empty);
  assert.throws(() => call(45, c, m, '', 3), { code: 'EINVAL' });
});

test('a one-shot timer fires once after its delay and can be reset or cancelled', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const { call, handle, table } = network();
  const id = handle(call(70, 0, 100));
  assert.deepEqual([table.get(id).phase, table.get(id).repeating], ['initial', false]);
  assert.deepEqual(call(71, id), numbers(1));
  assert.deepEqual(call(71, id), numbers(1));
  const fired = call(72, id);
  t.mock.timers.tick(60);
  assert.deepEqual(call(73, id), empty); // reset: 100 ms from now
  t.mock.timers.tick(60);
  assert.equal(await settled(fired), 'pending');
  t.mock.timers.tick(40);
  assert.deepEqual((await settled(fired)).value, empty);
  assert.equal(table.get(id).phase, 'finished');
  assert.deepEqual(call(73, id), empty);
  assert.deepEqual(call(75, id), numbers(0));
  // Cancel returns a one-shot timer to its initial phase.
  const again = handle(call(70, 0, 50));
  call(71, again);
  const waiting = call(72, again);
  assert.deepEqual(call(75, again), numbers(1));
  assert.equal((await settled(waiting)).error.message, 'Operation cancelled');
  assert.equal(table.get(again).phase, 'initial');
  t.mock.timers.tick(100);
  assert.equal(await settled(call(72, again)), 'pending');
  assert.deepEqual(call(71, again), numbers(3));
  assert.deepEqual(call(74, again), numbers(1));
  assert.equal(table.get(again).phase, 'finished');
});

test('a repeating timer fires at once, then every interval, keeping a new waiter per next', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const { call, handle, table } = network();
  const id = handle(call(70, 1, 30));
  assert.equal(table.get(id).repeating, true);
  call(71, id);
  const first = call(72, id);
  t.mock.timers.tick(0);
  assert.deepEqual((await settled(first)).value, empty);
  assert.deepEqual(call(71, id), numbers(2));
  const second = call(72, id);
  t.mock.timers.tick(29);
  assert.equal(await settled(second), 'pending');
  t.mock.timers.tick(1);
  assert.deepEqual((await settled(second)).value, empty);
  // Cancelling a repeating timer keeps it running.
  call(71, id);
  assert.deepEqual(call(75, id), numbers(1));
  assert.equal(table.get(id).phase, 'running');
  assert.deepEqual(call(75, id), numbers(0));
  assert.deepEqual(call(71, id), numbers(5));
  table.get(id).close();
  // A zero-interval repeating timer fires once.
  const zero = handle(call(70, 1, 0));
  call(71, zero);
  t.mock.timers.tick(0);
  assert.equal(table.get(zero).phase, 'finished');
});

test('timer intervals must fit UInt64; unknown operations are refused', () => {
  const { call } = network();
  assert.throws(() => call(70, 0, -1n), { code: 'EINVAL', message: 'Timer interval is outside UInt64' });
  assert.throws(() => call(70, 0, 1n << 64n), { code: 'EINVAL' });
  assert.doesNotThrow(() => call(70, 0, (1n << 64n) - 1n));
  assert.throws(() => call(76), { code: 'ENOSYS', message: 'Unsupported Lean async operation 76' });
  assert.throws(() => call(48), { code: 'ENOSYS' });
});

const addressBytes = (host, port) => Buffer.concat([numbers(host.includes(':') ? 6 : 4, port), Buffer.from(host)]);

test('an unconnected TCP socket refuses IO and names with libuv\'s errors', posix, async () => {
  const { call, handle } = network();
  const s = handle(call(50));
  assert.deepEqual(call(59, s, 0, ''), empty);
  assert.throws(() => call(59, s, 1, 'x'), { code: 'EBADF' });
  assert.throws(() => call(60, s), { code: 'ENOTCONN' });
  assert.throws(() => call(61, s), { code: 'EBADF' });
  assert.throws(() => call(62, s), { code: 'EBADF' });
  assert.throws(() => call(56, s, 10), { code: 'ENOTCONN' });
  assert.throws(() => call(53, s), { code: 'EINVAL', errno: 22, message: 'socket is not listening' });
  assert.deepEqual(call(54, s), numbers(0));
  assert.deepEqual(call(55, s), empty);
  assert.deepEqual(call(58, s), empty);
  assert.deepEqual(call(63, s), empty);
  assert.deepEqual(call(64, s, 2 * 30 + 1), empty);
  // A bound socket reports EPIPE for writes instead.
  const bound = handle(call(50));
  call(51, bound, 0, addressBytes('127.0.0.1', 0));
  assert.throws(() => call(59, bound, 1, 'x'), { code: 'EPIPE' });
  const [, , port] = [0, 0, Number(call(62, bound).readBigUInt64LE(8))];
  assert.ok(port > 0);
  assert.equal(call(62, bound).subarray(16).toString(), '127.0.0.1');
  assert.throws(() => call(61, bound), { code: 'ENOTCONN' });
});

test('Lean 4.36: accepting on a socket that is not listening is invalidArgument; a zero read is EINVAL', () => {
  const { call, handle } = network('4.36.0');
  const s = handle(call(50));
  assert.throws(() => call(54, s), { code: 'EINVAL', message: 'socket is not listening' });
  assert.throws(() => call(56, s, 0), { code: 'EINVAL', errno: 22, message: 'receive buffer size must be positive' });
});

test('a connected pair writes, reads, shuts down once and reports both names', posix, async t => {
  const { call, handle, table } = network();
  const server = handle(call(50));
  call(51, server, 0, addressBytes('127.0.0.1', 0));
  await call(52, server, 16);
  assert.ok(table.get(server).server.listening);
  await call(52, server, 32); // the backlog may be updated
  const port = Number(call(62, server).readBigUInt64LE(8));
  const client = handle(call(50));
  call(63, client);
  call(64, client, 2 * 5 + 1);
  await call(65, client, 0, addressBytes('127.0.0.1', port));
  assert.throws(() => call(65, client, 0, addressBytes('127.0.0.1', port)), { code: 'EINVAL' });
  assert.throws(() => call(51, client, 0, addressBytes('127.0.0.1', 0)), { code: 'EINVAL' });
  assert.throws(() => call(52, client, 1), { code: 'EINVAL' });
  const accepted = handle(await call(53, server));
  t.after(() => { for (const id of [client, accepted, server]) table.get(id)?.close(); });
  const remote = call(61, client);
  assert.equal(Number(remote.readBigUInt64LE()), 4);
  assert.equal(Number(remote.readBigUInt64LE(8)), port);
  assert.equal(remote.subarray(16).toString(), '127.0.0.1');
  assert.deepEqual(call(61, accepted).subarray(16), Buffer.from('127.0.0.1'));
  await call(59, client, 1, 'hello');
  const ready = await call(57, accepted);
  assert.deepEqual(ready, numbers(1));
  assert.equal((await call(56, accepted, 3)).toString(), 'hel');
  assert.equal((await call(56, accepted, 100)).toString(), 'lo');
  // With data ready, a zero-size read is ENOBUFS and leaves the data.
  await call(59, client, 1, 'z');
  await call(57, accepted);
  await assert.rejects(call(56, accepted, 0), { code: 'ENOBUFS' });
  assert.equal((await call(56, accepted, 10)).toString(), 'z');
  const pending = call(56, accepted, 10);
  assert.throws(() => call(56, accepted, 10), { code: 'EALREADY' });
  call(58, accepted);
  assert.equal((await settled(pending)).error.code, 'ECANCELED');
  assert.deepEqual(await call(60, client), empty);
  // Lean 4.35: any second shutdown is "shutdown already requested".
  assert.throws(() => call(60, client), { code: 'EALREADY', message: 'shutdown already requested', nativeMessage: true });
  assert.throws(() => call(59, client, 1, 'late'), { code: 'EPIPE' });
  // After the peer's EOF a read returns nothing and a peek reports readiness.
  assert.deepEqual(await call(57, accepted), numbers(1));
  assert.deepEqual(await call(56, accepted, 10), empty);
  // A second accept while one waits is EALREADY.
  const accepting = call(53, server);
  assert.throws(() => call(53, server), { code: 'EALREADY' });
  assert.throws(() => call(54, server), { code: 'EALREADY' });
  call(55, server);
  assert.equal((await settled(accepting)).error.code, 'ECANCELED');
  assert.deepEqual(call(54, server), numbers(0));
});

test('connections queue for accept, and the listener releases them on close', posix, async () => {
  const { call, handle, table, released } = network();
  const server = handle(call(50));
  await call(52, server, 8);
  const port = Number(call(62, server).readBigUInt64LE(8));
  const peers = [net.connect(port, '127.0.0.1'), net.connect(port, '127.0.0.1')];
  await Promise.all(peers.map(peer => once(peer, 'connect')));
  while (table.get(server).accepted.length < 2) await new Promise(resolve => setTimeout(resolve, 5));
  const first = handle(call(54, server));
  assert.equal(table.get(first).type, 'tcp');
  table.get(server).close();
  assert.equal(released.length, 1);
  for (const peer of peers) peer.destroy();
  table.get(first).close();
});

test('Lean 4.36 rejects a parallel accept with its own message', posix, async () => {
  const { call, handle, table } = network('4.36.0');
  const server = handle(call(50));
  await call(52, server, 1);
  const waiting = call(53, server);
  assert.throws(() => call(53, server), { code: 'EALREADY', nativeMessage: true,
    message: 'parallel accept is not allowed! consider binding multiple sockets to the same address and accepting on them instead' });
  table.get(server).close();
  assert.equal((await settled(waiting)).error.code, 'ECANCELED');
});

test('a refused connection rejects with ECONNREFUSED', posix, async () => {
  const { call, handle } = network();
  const probe = net.createServer().listen(0, '127.0.0.1');
  await once(probe, 'listening');
  const port = probe.address().port;
  probe.close(); await once(probe, 'close');
  const client = handle(call(50));
  await assert.rejects(Promise.resolve(call(65, client, 0, addressBytes('127.0.0.1', port))), { code: 'ECONNREFUSED' });
});

test('earlier releases report a pending shutdown as EALREADY and a finished one as ENOTCONN', posix, async t => {
  const { call, handle, table } = network('4.34.1');
  const server = handle(call(50));
  await call(52, server, 1);
  const port = Number(call(62, server).readBigUInt64LE(8));
  const client = handle(call(50));
  await call(65, client, 0, addressBytes('127.0.0.1', port));
  const accepted = handle(await call(53, server));
  t.after(() => { for (const id of [client, accepted, server]) table.get(id)?.close(); });
  const shutdown = call(60, client);
  assert.throws(() => call(60, client), { code: 'EALREADY' });
  await shutdown;
  assert.throws(() => call(60, client), { code: 'ENOTCONN' });
});
