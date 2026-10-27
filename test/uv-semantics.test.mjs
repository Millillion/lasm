// Host-bridge semantics of Std.Internal.UV that Lean 4.36's upstream tests pin
// (tests/elab/uv_*, signal_selector_keeps_listening): parallel and
// not-listening accepts, truncated datagrams, long home/temporary directories,
// Loop.alive and signal waiters that keep listening after a cancel. Each case
// checks the release that introduced the behaviour and the one before it.
import test from 'node:test';
import assert from 'node:assert/strict';
import dgram from 'node:dgram';
import { once } from 'node:events';
import { constants } from 'node:os';
import { createNodeRuntimeHost, encodeError, loopAlive, numbers } from '../src/node-host.mjs';
import { createNodeNetwork } from '../src/node-network.mjs';
import { createNodeUdp } from '../src/node-udp.mjs';
import { createNodeSignals } from '../src/node-signal.mjs';
import { createNodeSystem } from '../src/node-system.mjs';
import { leanAtLeast } from '../src/lean-io-errors.mjs';

function resources() {
  const table = new Map(); let next = 10;
  return {
    add: resource => { table.set(next, resource); return next++; },
    get: (id, type) => {
      const resource = table.get(id);
      if (!resource || type && resource.type !== type) throw Object.assign(new Error('Invalid resource'), { code: 'EBADF' });
      return resource;
    },
    release: id => { table.get(id)?.close?.(); table.delete(id); },
    close() { for (const id of [...table.keys()]) this.release(id); },
  };
}
const loopback = port => Buffer.concat([numbers(4, port), Buffer.from('127.0.0.1')]);
const decoded = err => {
  const { bytes } = encodeError(err, '4.35.0');
  return { kind: Number(bytes.readBigUInt64LE()), errno: Number(bytes.readBigUInt64LE(8)), message: bytes.subarray(16).toString() };
};

test('leanAtLeast treats a prerelease as its release', () => {
  assert.equal(leanAtLeast('4.36.0-rc1', '4.36.0'), true);
  assert.equal(leanAtLeast('4.36.0', '4.36.0'), true);
  assert.equal(leanAtLeast('4.35.0', '4.36.0'), false);
  assert.equal(leanAtLeast('4.37.0', '4.36.0'), true);
  assert.equal(leanAtLeast('5.0.0', '4.36.0'), true);
});

for (const leanVersion of ['4.35.0', '4.36.0']) {
  test(`Lean ${leanVersion}: a second accept and an accept that cannot complete fail synchronously`, async t => {
    const r = resources(); t.after(() => r.close());
    const network = createNodeNetwork({ ...r, leanVersion });
    const dispatch = network.dispatch; network.dispatch = (op, id, arg, bytes = Buffer.alloc(0)) => dispatch(op, id, arg, bytes, {});
    const server = Number(network.dispatch(50, 0, 0n, Buffer.alloc(0)).readBigUInt64LE());
    await network.dispatch(51, server, 0n, loopback(0));
    // Not listening: invalidArgument EINVAL, never a pending accept.
    const notListening = (() => { try { network.dispatch(53, server, 0n); } catch (err) { return err; } })();
    assert.deepEqual(decoded(notListening), { kind: 4, errno: constants.errno.EINVAL, message: 'socket is not listening' });
    // tryAccept: Lean 4.36 checks listening; earlier releases report no connection.
    if (leanVersion === '4.36.0') assert.throws(() => network.dispatch(54, server, 0n), { message: 'socket is not listening' });
    else assert.equal(network.dispatch(54, server, 0n).readBigUInt64LE(), 0n);
    await network.dispatch(52, server, 16n);
    const pending = network.dispatch(53, server, 0n);
    assert.equal(typeof pending.then, 'function');
    for (const op of [53, 54]) {
      const parallel = (() => { try { network.dispatch(op, server, 0n); } catch (err) { return err; } })();
      const { kind, errno, message } = decoded(parallel);
      assert.equal(kind, 0, 'otherError');
      assert.equal(errno, process.platform === 'win32' ? 4084 : constants.errno.EALREADY);
      assert.equal(message, leanVersion === '4.36.0'
        ? 'parallel accept is not allowed! consider binding multiple sockets to the same address and accepting on them instead'
        : 'connection already in progress');
    }
    network.dispatch(55, server, 0n);
    await assert.rejects(pending, { code: 'ECANCELED' });
  });

  test(`Lean ${leanVersion}: a datagram larger than the receive buffer`, async t => {
    const r = resources(); t.after(() => r.close());
    const udp = createNodeUdp({ ...r, leanVersion });
    const socket = Number(udp.dispatch(100, 0, 0n, Buffer.alloc(0)).readBigUInt64LE());
    await udp.dispatch(101, socket, 0n, loopback(0));
    const port = Number(r.get(socket).socket.address().port);
    const receiving = udp.dispatch(104, socket, 128n, Buffer.alloc(0));
    const sender = dgram.createSocket('udp4'); t.after(() => sender.close());
    sender.send(Buffer.alloc(4096), port, '127.0.0.1');
    if (leanVersion === '4.36.0') {
      const err = await receiving.then(() => assert.fail('a truncated datagram was returned'), err => err);
      assert.equal(err.code, 'EMSGSIZE');
      const { bytes } = encodeError(err, '4.35.0');
      assert.equal(Number(bytes.readBigUInt64LE()), 11, 'resourceExhausted');
      assert.equal(bytes.subarray(16).toString(), 'message too long');
    } else {
      const bytes = await receiving;
      const addressLength = Number(bytes.readBigUInt64LE());
      assert.equal(bytes.length - 8 - addressLength, 128);
    }
  });

  test(`Lean ${leanVersion}: home and temporary directories longer than PATH_MAX`, { skip: process.platform === 'win32' }, t => {
    const saved = { HOME: process.env.HOME, TMPDIR: process.env.TMPDIR };
    t.after(() => { for (const [name, value] of Object.entries(saved)) value === undefined ? delete process.env[name] : process.env[name] = value; });
    const long = '/' + 'a'.repeat(5000);
    process.env.HOME = long; process.env.TMPDIR = long;
    const system = createNodeSystem({ leanVersion });
    for (const op of [126, 127]) {
      if (leanVersion === '4.36.0') assert.equal(Buffer.from(system.dispatch(op, 0, 0n)).toString(), long);
      else assert.throws(() => system.dispatch(op, 0, 0n), { code: 'ENOBUFS' });
    }
  });
}

test('Loop.alive follows active handles from Lean 4.36 and is always true before', { timeout: 10_000 }, async t => {
  const host = createNodeRuntimeHost({ leanVersion: '4.35.0' });
  t.after(() => host.close());
  assert.equal(host.request(145, 0, 0n, Buffer.alloc(0)).bytes.readBigUInt64LE(), 1n);
  const r = resources(); t.after(() => r.close());
  const network = createNodeNetwork({ ...r, leanVersion: '4.36.0' });
  const dispatch = network.dispatch; network.dispatch = (op, id, arg, bytes = Buffer.alloc(0)) => dispatch(op, id, arg, bytes, {});
  const timer = Number(network.dispatch(70, 0, 100000n, Buffer.alloc(0)).readBigUInt64LE());
  const alive = () => loopAlive([r.get(timer)]);
  assert.equal(alive(), false);
  network.dispatch(71, timer, 0n);
  assert.equal(alive(), true);
  network.dispatch(74, timer, 0n);
  assert.equal(alive(), false);
  assert.equal(loopAlive([], 1), true, 'a running request');
});

test('Lean 4.36 signal waiters keep listening after a cancel', { skip: process.platform === 'win32', timeout: 10_000 }, async t => {
  const r = resources(); t.after(() => r.close());
  for (const repeating of [0n, 1n]) {
    const signals = createNodeSignals({ ...r, leanVersion: '4.36.0' });
    const id = Number(signals.dispatch(160, 28, repeating).readBigUInt64LE());
    signals.dispatch(161, id, 0n);
    const first = signals.dispatch(162, id, 0n);
    assert.equal(signals.dispatch(164, id, 0n).readBigUInt64LE(), 1n);
    await assert.rejects(first, { code: 'ECANCELED' });
    const delivered = once(process, 'SIGWINCH');
    process.kill(process.pid, 'SIGWINCH');
    await delivered;
    signals.dispatch(161, id, 0n);
    const kept = await signals.dispatch(162, id, 0n);
    assert.equal(kept.readBigUInt64LE(), BigInt(constants.signals.SIGWINCH), `repeating=${repeating}`);
    signals.dispatch(163, id, 0n);
  }
});

test('Lean 4.35 one-shot signal waiters stop listening after a cancel', { skip: process.platform === 'win32' }, () => {
  const r = resources();
  const signals = createNodeSignals({ ...r, leanVersion: '4.35.0' });
  const id = Number(signals.dispatch(160, 28, 0n).readBigUInt64LE());
  signals.dispatch(161, id, 0n);
  signals.dispatch(162, id, 0n).catch(() => {});
  signals.dispatch(164, id, 0n);
  assert.equal(r.get(id).phase, 'initial');
  r.close();
});
