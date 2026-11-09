// Std.Internal.UV.Signal's lifecycle in the Node host, in-process: signals are
// delivered with process.emit, so each waiter, cancel and stop transition of
// both release policies (Lean 4.35 and 4.36) is checked without a real kill.
import test from 'node:test';
import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { createNodeSignals } from '../src/node-signal.mjs';

const SIGUSR2 = 12, SIGHUP = 1;
const decode = bytes => Number(bytes.readBigUInt64LE());
function signals(leanVersion) {
  const table = new Map();
  let next = 0;
  const host = createNodeSignals({ leanVersion, add: resource => { table.set(++next, resource); return next; },
    get: (id, type) => { const r = table.get(id); assert.equal(type, 'signal'); return r; } });
  const call = (op, id = 0, arg = 0) => host.dispatch(op, id, arg);
  return { call, table, create: (signum, repeating) => decode(call(160, signum, repeating ? 1 : 0)) };
}
const timers = () => process.getActiveResourcesInfo().filter(name => name === 'Timeout').length;
const settled = async promise => {
  let state = 'pending';
  promise.then(value => { state = { value }; }, error => { state = { error }; });
  await new Promise(resolve => setImmediate(resolve));
  return state;
};
const posix = { skip: process.platform === 'win32' };

test('a one-shot signal resolves its waiter with the OS signal number and then stops', posix, async () => {
  const { call, table, create } = signals('4.35.0');
  const listeners = process.listenerCount('SIGUSR2'), active = timers();
  const id = create(SIGUSR2, false);
  assert.deepEqual([table.get(id).type, table.get(id).phase, table.get(id).name, table.get(id).repeating], ['signal', 'initial', 'SIGUSR2', false]);
  assert.equal(decode(call(161, id)), 1);
  assert.equal(table.get(id).phase, 'running');
  assert.equal(process.listenerCount('SIGUSR2'), listeners + 1);
  assert.equal(timers(), active + 1);
  const waiter = call(162, id);
  assert.equal((await settled(waiter)), 'pending');
  process.emit('SIGUSR2');
  assert.equal(decode(await waiter), constants.signals.SIGUSR2);
  assert.equal(table.get(id).phase, 'finished');
  assert.equal(process.listenerCount('SIGUSR2'), listeners);
  assert.equal(timers(), active);
  // A finished signal neither stops nor cancels again.
  assert.equal(decode(call(163, id)), 0);
  assert.equal(decode(call(164, id)), 0);
});

test('a repeating signal re-arms on each next and keeps listening', posix, async () => {
  const { call, table, create } = signals('4.35.0');
  const listeners = process.listenerCount('SIGUSR2');
  const id = create(SIGUSR2, true);
  assert.equal(decode(call(161, id)), 1);
  const first = call(162, id);
  process.emit('SIGUSR2');
  assert.equal(decode(await first), constants.signals.SIGUSR2);
  assert.equal(table.get(id).phase, 'running');
  // A second next after delivery gives a new generation and a new waiter.
  assert.equal(decode(call(161, id)), 2);
  const second = call(162, id);
  assert.notEqual(second, first);
  assert.equal(await settled(second), 'pending');
  // A next while the waiter is still pending keeps it.
  assert.equal(decode(call(161, id)), 2);
  assert.equal(call(162, id), second);
  process.emit('SIGUSR2');
  assert.equal(decode(await second), constants.signals.SIGUSR2);
  // 4.35 loses a signal that arrives between waits.
  process.emit('SIGUSR2');
  assert.equal(decode(call(161, id)), 3);
  assert.equal(await settled(call(162, id)), 'pending');
  assert.equal(decode(call(163, id)), 1);
  assert.equal(process.listenerCount('SIGUSR2'), listeners);
});

test('Lean 4.36 keeps a repeating signal that arrives between waits', posix, async () => {
  const { call, table, create } = signals('4.36.0');
  const id = create(SIGUSR2, true);
  call(161, id);
  const first = call(162, id);
  process.emit('SIGUSR2');
  await first;
  process.emit('SIGUSR2');
  assert.equal(table.get(id).received, true);
  assert.equal(decode(call(161, id)), 2);
  assert.equal(table.get(id).received, false);
  assert.equal(decode(await call(162, id)), constants.signals.SIGUSR2);
  call(163, id);
});

test('stopping a running signal cancels its waiter and stops listening', posix, async () => {
  for (const version of ['4.35.0', '4.36.0']) {
    const { call, table, create } = signals(version);
    const listeners = process.listenerCount('SIGHUP'), active = timers();
    const id = create(SIGHUP, true);
    call(161, id);
    const waiter = call(162, id);
    assert.equal(decode(call(163, id)), 1);
    const result = await settled(waiter);
    assert.equal(result.error.code, 'ECANCELED');
    assert.equal(result.error.message, 'Signal wait cancelled');
    assert.equal(table.get(id).phase, 'finished');
    assert.equal(process.listenerCount('SIGHUP'), listeners);
    assert.equal(timers(), active);
    assert.equal(decode(call(163, id)), 0);
  }
});

test('Lean 4.35: cancelling a one-shot waiter stops it until the next start', posix, async () => {
  const { call, table, create } = signals('4.35.0');
  const listeners = process.listenerCount('SIGUSR2');
  const id = create(SIGUSR2, false);
  call(161, id);
  const waiter = call(162, id);
  assert.equal(decode(call(164, id)), 1);
  assert.equal((await settled(waiter)).error.code, 'ECANCELED');
  assert.equal(table.get(id).phase, 'initial');
  assert.equal(process.listenerCount('SIGUSR2'), listeners);
  // Cancelling again has no waiter to release.
  assert.equal(decode(call(164, id)), 0);
  assert.equal(decode(call(161, id)), 3);
  assert.equal(table.get(id).phase, 'running');
  call(163, id);
});

test('Lean 4.36: a cancelled one-shot waiter keeps listening and a later signal is kept', posix, async () => {
  const { call, table, create } = signals('4.36.0');
  const listeners = process.listenerCount('SIGUSR2');
  const id = create(SIGUSR2, false);
  call(161, id);
  const waiter = call(162, id);
  assert.equal(decode(call(164, id)), 1);
  assert.equal((await settled(waiter)).error.code, 'ECANCELED');
  assert.equal(table.get(id).phase, 'running');
  assert.equal(process.listenerCount('SIGUSR2'), listeners + 1);
  // No waiter: a next waits on a fresh promise of a new generation.
  assert.equal(decode(call(164, id)), 0);
  const generation = decode(call(161, id));
  assert.equal(generation, 3);
  const next = call(162, id);
  process.emit('SIGUSR2');
  assert.equal(decode(await next), constants.signals.SIGUSR2);
  assert.equal(table.get(id).phase, 'finished');
});

test('Lean 4.36: a one-shot signal arriving with no waiter resolves the next wait', posix, async () => {
  const { call, table, create } = signals('4.36.0');
  const id = create(SIGUSR2, false);
  call(161, id);
  call(164, id);
  process.emit('SIGUSR2');
  assert.equal(table.get(id).phase, 'finished');
  assert.equal(decode(await call(162, id)), constants.signals.SIGUSR2);
});

test('a wait with no armed waiter never settles', posix, async () => {
  const { call, create } = signals('4.35.0');
  const id = create(SIGUSR2, false);
  assert.equal(await settled(call(162, id)), 'pending');
});

test('signals Lean does not name, or that Windows lacks, are invalid arguments when started', async () => {
  const { call, table, create } = signals('4.35.0');
  const listeners = process.listenerCount('SIGILL');
  const id = create(4, false);
  assert.equal(table.get(id).name, undefined);
  assert.throws(() => call(161, id), { code: 'EINVAL', errno: -22, message: 'invalid argument' });
  assert.equal(process.listenerCount('SIGILL'), listeners);
  const original = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...original, value: 'win32' });
  try {
    for (const signum of [1, 2, 3, 6, 15, 28]) assert.notEqual(table.get(create(signum, false)).name, undefined, signum);
    for (const signum of [10, 12, 14, 5]) assert.equal(table.get(create(signum, false)).name, undefined, signum);
  } finally { Object.defineProperty(process, 'platform', original); }
  assert.throws(() => call(170, id), { message: 'Unknown Lean signal operation 170' });
});

test('Lean signal numbers name their POSIX signals', () => {
  const { table, create } = signals('4.35.0');
  const expected = { 1: 'SIGHUP', 2: 'SIGINT', 3: 'SIGQUIT', 6: 'SIGABRT', 15: 'SIGTERM', 28: 'SIGWINCH', 5: 'SIGTRAP', 10: 'SIGUSR1',
    12: 'SIGUSR2', 14: 'SIGALRM', 17: 'SIGCHLD', 18: 'SIGCONT', 20: 'SIGTSTP', 21: 'SIGTTIN', 22: 'SIGTTOU', 23: 'SIGURG',
    24: 'SIGXCPU', 25: 'SIGXFSZ', 26: 'SIGVTALRM', 27: 'SIGPROF', 29: 'SIGIO', 31: 'SIGSYS' };
  if (process.platform === 'win32') return;
  for (const [signum, name] of Object.entries(expected)) assert.equal(table.get(create(Number(signum), false)).name, name);
  for (const signum of [0, 4, 7, 8, 9, 11, 13, 16, 19, 30, 32]) assert.equal(table.get(create(signum, false)).name, undefined, signum);
});
