// posix_spawn with an inherited cwd (src/native-process.mjs) against a
// scripted libc: file actions for each stdio slot, the configuration handoff
// over the socket (short writes, EINTR, shutdown and the exec acknowledgement),
// and waitpid's statuses and errors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { constants } from 'node:os';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const E = constants.errno;
const linux = { skip: false };

// One scripted libc for the whole file: native-files.mjs (shared by every
// instance of native-process.mjs) binds its functions once.
let current, koffi;
const errno = value => { koffi.state.errno = value; return -1; };
koffi = standInKoffi({
  strerror: number => `strerror ${number}`,
  environ: {},
  posix_spawn_file_actions_init: () => current.script.init ?? 0,
  posix_spawn_file_actions_destroy: () => 0,
  posix_spawn_file_actions_adddup2: () => 0,
  posix_spawn_file_actions_addopen: () => 0,
  socketpair: (domain, type, protocol, fds) => { if (current.script.socketpair) return errno(current.script.socketpair); fds[0] = 20; fds[1] = 21; return 0; },
  fcntl: (fd, command) => command === 1030 ? (current.script.fcntl?.(fd) ? errno(current.script.fcntl(fd)) : current.nextCopy++) : 0,
  posix_spawn: pid => { pid[0] = 42; return current.script.spawn ?? 0; },
  write: (fd, bytes, size) => {
    const planned = current.writes.shift();
    if (planned !== undefined && planned < 0) return errno(-planned);
    const count = planned ?? size;
    current.written.push(Buffer.from(bytes.subarray(0, count)));
    return count;
  },
  shutdown: () => current.script.shutdown ? errno(current.script.shutdown) : 0,
  read: () => { const next = current.reads.shift() ?? 0; return next < 0 ? errno(-next) : next; },
  close: () => 0,
  waitpid: (pid, status) => {
    const next = current.waits.shift() ?? [0, 0];
    if (next[0] < 0) return errno(-next[0]);
    status[0] = next[1]; return next[0];
  },
}, { errno: E, fallback: () => () => 0 });

async function spawner(t, script = {}) {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: 'linux' });
  t.after(() => Object.defineProperty(process, 'platform', saved));
  current = { script, nextCopy: 100, written: [], waits: script.waits ? [...script.waits] : [[42, 0]],
    writes: script.writes ? [...script.writes] : [], reads: script.reads ? [...script.reads] : [0] };
  koffi.install();
  koffi.calls.length = 0;
  const { spawnInheritedProcess } = await freshImport(new URL('../src/native-process.mjs', import.meta.url));
  const calls = name => koffi.calls.filter(([n]) => n === name).map(([, ...args]) => args);
  const settle = async () => { for (let i = 0; i < 20; i++) await new Promise(resolve => setImmediate(resolve)); };
  return { spawn: (descriptors, configuration = { args: [] }) => spawnInheritedProcess('/bin/helper', ['h.mjs'], descriptors, configuration),
    calls, written: current.written, koffi, settle };
}

test('each stdio slot becomes a file action, with the transport at slot 3', linux, async t => {
  const { spawn, calls, settle, written } = await spawner(t);
  const child = spawn(['ignore', 'inherit', 7, 9], { command: 'c', env: { A: '1' } });
  assert.equal(child.pid, 42);
  assert.deepEqual(calls('socketpair')[0].slice(0, 3), [1, 1 | 0x80000, 0]);
  assert.deepEqual(calls('posix_spawn_file_actions_addopen').map(([, index, path, flags, mode]) => [index, path, flags, mode]), [[0, '/dev/null', 2, 0]]);
  // Each source is first duplicated above every destination slot.
  assert.deepEqual(calls('fcntl').filter(([, command]) => command === 1030).map(([fd, , type, minimum]) => [fd, type, minimum]),
    [[1, 'int', 5], [7, 'int', 5], [20, 'int', 5], [9, 'int', 5]]);
  assert.deepEqual(calls('posix_spawn_file_actions_adddup2').map(([, copy, index]) => [copy, index]), [[100, 1], [101, 2], [102, 3], [103, 4]]);
  const [, path, , attributes, argv, env] = calls('posix_spawn')[0];
  assert.deepEqual([path, attributes, argv, env], ['/bin/helper', null, ['/bin/helper', 'h.mjs', null], [null]]);
  assert.equal(calls('posix_spawn_file_actions_destroy').length, 1);
  // The copies and the child's end of the transport are closed in the parent.
  assert.deepEqual(calls('close').map(([fd]) => fd).sort((a, b) => a - b), [20, 100, 101, 102, 103]);
  await settle();
  assert.deepEqual(JSON.parse(Buffer.concat(written).toString()), { command: 'c', env: { A: '1' }, awaitExec: true });
  assert.deepEqual(calls('shutdown'), [[21, 1]]);
  assert.ok(calls('close').some(([fd]) => fd === 21));
  assert.equal(await child.exit, 0);
});

test('the configuration is written completely across short writes and EINTR, then acknowledged', linux, async t => {
  const { spawn, calls, settle, written } = await spawner(t, { writes: [3, -E.EINTR, 2], reads: [-E.EINTR, 1, 0] });
  spawn(['ignore', 'ignore', 'ignore'], { big: 'x'.repeat(50) });
  await settle();
  const sizes = calls('write').map(([, , size]) => size);
  const total = JSON.stringify({ big: 'x'.repeat(50), awaitExec: true }).length;
  assert.deepEqual(sizes, [total, total - 3, total - 3, total - 5]);
  assert.equal(Buffer.concat(written).toString(), JSON.stringify({ big: 'x'.repeat(50), awaitExec: true }));
  assert.equal(calls('read').length, 3);
  assert.ok(calls('close').some(([fd]) => fd === 21));
});

test('a closed transport stops the handoff without shutdown; a failed shutdown skips the acknowledgement', linux, async t => {
  const closed = await spawner(t, { writes: [0] });
  closed.spawn(['ignore', 'ignore', 'ignore']);
  await closed.settle();
  assert.deepEqual(closed.calls('shutdown'), []);
  assert.ok(closed.calls('close').some(([fd]) => fd === 21));
  const failing = await spawner(t, { writes: [-E.EPIPE] });
  failing.spawn(['ignore', 'ignore', 'ignore']);
  await failing.settle();
  assert.deepEqual(failing.calls('shutdown'), []);
  const unshut = await spawner(t, { shutdown: E.ENOTCONN });
  unshut.spawn(['ignore', 'ignore', 'ignore']);
  await unshut.settle();
  assert.deepEqual(unshut.calls('read'), []);
  assert.ok(unshut.calls('close').some(([fd]) => fd === 21));
});

test('exit statuses and signals decode as Lean expects; waitpid retries EINTR and reports other errors', linux, async t => {
  for (const [waits, expected] of [[[[42, 3 << 8]], 3], [[[42, 9]], 137], [[[0, 0], [-E.EINTR, 0], [42, 15]], 143]]) {
    const { spawn } = await spawner(t, { waits });
    assert.equal(await spawn(['ignore', 'ignore', 'ignore']).exit, expected);
  }
  const { spawn } = await spawner(t, { waits: [[-E.ECHILD, 0]] });
  await assert.rejects(spawn(['ignore', 'ignore', 'ignore']).exit, error => error.errno === E.ECHILD && error.message === `strerror ${E.ECHILD}`);
});

test('kill signals a live child once and not after it exits; unref lets the host exit', linux, async t => {
  const { spawn } = await spawner(t, { waits: [[0, 0], [0, 0], [42, 0]] });
  const kills = [];
  t.mock.method(process, 'kill', (pid, signal) => { kills.push([pid, signal]); });
  const child = spawn(['ignore', 'ignore', 'ignore']);
  child.unref();
  assert.equal(child.kill('SIGTERM'), true);
  assert.deepEqual(kills, [[42, 'SIGTERM']]);
  assert.equal(await child.exit, 0);
  assert.equal(child.kill('SIGTERM'), false);
  assert.equal(kills.length, 1);
});

test('setup failures close what was opened and report the errno', linux, async t => {
  const init = await spawner(t, { init: E.ENOMEM });
  assert.throws(() => init.spawn(['ignore', 'ignore', 'ignore']), error => error.errno === E.ENOMEM);
  assert.deepEqual(init.calls('socketpair'), []);
  const pair = await spawner(t, { socketpair: E.EMFILE });
  assert.throws(() => pair.spawn(['ignore', 'ignore', 'ignore']), error => error.errno === E.EMFILE);
  assert.equal(pair.calls('posix_spawn_file_actions_destroy').length, 1);
  assert.deepEqual(pair.calls('close'), []);
  const copy = await spawner(t, { fcntl: fd => fd === 7 ? E.EBADF : 0 });
  assert.throws(() => copy.spawn(['inherit', 7, 'ignore']), error => error.errno === E.EBADF);
  assert.deepEqual(copy.calls('close').map(([fd]) => fd).sort((a, b) => a - b), [20, 21, 100]);
  const spawned = await spawner(t, { spawn: E.ENOENT });
  assert.throws(() => spawned.spawn(['ignore', 'ignore', 'ignore']), error => error.errno === E.ENOENT);
  assert.deepEqual(spawned.calls('close').map(([fd]) => fd).sort((a, b) => a - b), [20, 21, 100]);
  assert.deepEqual(spawned.calls('write'), []);
});
