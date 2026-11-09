// The POSIX child entry point (src/process-exec.mjs) normally replaces a fresh
// child process with execvp. Here it runs in-process against a scripted libc:
// each test checks the exact system calls it makes for one configuration, and
// what it reports when one of them fails.
import test from 'node:test';
import assert from 'node:assert/strict';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const launcher = new URL('../src/process-exec.mjs', import.meta.url).href;
class Exit extends Error { constructor(status) { super(`exit ${status}`); this.status = status; } }

/** Runs the launcher with `options` on descriptor 3; `fail` names calls that return -1 (with errno 5),
 * `reads` overrides the configuration pipe's read results. Returns the calls up to the first _exit. */
async function launch(options, { fail = {}, reads, writes } = {}) {
  const configuration = Buffer.from(JSON.stringify(options));
  const pending = reads ? [...reads] : [configuration.subarray(0, 7), configuration.subarray(7), 0];
  let stderr = '', exited, koffi;
  const failing = (name, ...args) => {
    const rule = fail[name];
    if (rule && (rule === true || rule(...args))) { koffi.state.errno = 5; return -1; }
    return 0;
  };
  const pendingWrites = writes ? [...writes] : [];
  koffi = standInKoffi({
    read(fd, buffer, size) {
      assert.equal(fd, 3); assert.ok(size >= 64 * 1024);
      const next = pending.shift();
      if (typeof next === 'number') { if (next < 0) koffi.state.errno = -next; return next < 0 ? -1 : next; }
      next.copy(buffer); return next.length;
    },
    write(fd, bytes, size) {
      assert.equal(fd, 2);
      const planned = pendingWrites.shift();
      if (planned === -4) { koffi.state.errno = 4; return -1; }
      const count = planned ?? size;
      if (count > 0) stderr += Buffer.from(bytes).subarray(0, count).toString();
      return count;
    },
    close: fd => failing('close', fd), fcntl: (fd, command, value) => failing('fcntl', fd, command, value),
    chdir: path => failing('chdir', path), fchdir: fd => failing('fchdir', fd), setsid: () => failing('setsid') || 77,
    unsetenv: key => failing('unsetenv', key), setenv: (key, value, overwrite) => failing('setenv', key, value, overwrite),
    execvp: () => -1,
    _exit: status => { if (exited === undefined) exited = status; throw new Exit(status); },
  }).install();
  await assert.rejects(freshImport(launcher), Exit);
  const calls = koffi.calls.slice(0, koffi.calls.findIndex(([name]) => name === '_exit') + 1);
  const firstStderr = stderr.split('\n')[0] + '\n';
  return { calls, status: exited, stderr: firstStderr, loads: koffi.loads, koffi, without: names => calls.filter(([name]) => !names.includes(name)) };
}
const base = { stdioFlags: [0, 2049, 1], env: { A: '1', EMPTY: '' }, command: 'prog', args: ['x', 'y z'], directory: '/start' };
const stdioSetup = flags => [0, 1, 2].flatMap(fd => [['fcntl', fd, 2, 0], ['fcntl', fd, 4, flags[fd]]]);
const env = calls => calls.filter(([name]) => name === 'setenv').map(([, key, value, overwrite]) => [key.toString(), value.toString(), overwrite]);

test('the launcher restores stdio, replaces the environment, enters the cwd and executes the command', async () => {
  const run = await launch(base);
  assert.deepEqual(run.loads, [process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null]);
  const reads = run.calls.filter(([name]) => name === 'read');
  assert.equal(reads.length, 3);
  const rest = run.without(['read', 'unsetenv', 'setenv', 'write']);
  assert.deepEqual(rest.map(([name, ...args]) => [name, ...args.map(a => Array.isArray(a) ? [...a] : a)]), [
    ['close', 3], ...stdioSetup([0, 2049, 1]), ['chdir', '/start'],
    ['execvp', 'prog', ['prog', 'x', 'y z', null]], ['_exit', 255]]);
  assert.deepEqual(run.calls.filter(([name]) => name === 'unsetenv').map(([, key]) => key).sort(), Object.keys(process.env).sort());
  assert.deepEqual(env(run.calls), [['A\0', '1\0', 1], ['EMPTY\0', '\0', 1]]);
  // The environment is cleared before it is set.
  const names = run.calls.map(([name]) => name);
  assert.ok(names.lastIndexOf('unsetenv') < names.indexOf('setenv'));
  assert.equal(run.stderr, "could not execute external process 'prog'\n");
  assert.equal(run.status, 255);
});

test('an exec acknowledgement keeps descriptor 3 open, close-on-exec', async () => {
  const run = await launch({ ...base, awaitExec: true });
  assert.deepEqual(run.without(['read', 'unsetenv', 'setenv', 'write']).slice(0, 2), [['fcntl', 3, 2, 1], ['fcntl', 0, 2, 0]]);
  assert.equal(run.calls.some(([name, fd]) => name === 'close' && fd === 3), false);
  const failed = await launch({ ...base, awaitExec: true }, { fail: { fcntl: fd => fd === 3 } });
  assert.equal(failed.stderr, 'Lasm process launcher: exec acknowledgement setup failed: errno 5\n');
  assert.equal(failed.status, 125);
});

test('stdio descriptor and flag failures stop the launch with their errno', async () => {
  const setup = await launch(base, { fail: { fcntl: (fd, command) => fd === 1 && command === 2 } });
  assert.equal(setup.stderr, 'Lasm process launcher: stdio setup failed: errno 5\n');
  assert.equal(setup.status, 125);
  const flags = await launch(base, { fail: { fcntl: (fd, command) => fd === 2 && command === 4 } });
  assert.equal(flags.stderr, 'Lasm process launcher: stdio flags restore failed: errno 5\n');
  assert.equal(flags.calls.some(([name]) => name === 'execvp'), false);
});

test('the configuration read retries EINTR, and other read errors stop the launch', async () => {
  const configuration = Buffer.from(JSON.stringify(base));
  const retried = await launch(base, { reads: [-4, configuration, -4, 0] });
  assert.equal(retried.calls.filter(([name]) => name === 'read').length, 4);
  assert.deepEqual(retried.calls.find(([name]) => name === 'execvp')[1], 'prog');
  const failed = await launch(base, { reads: [configuration.subarray(0, 3), -5] });
  assert.equal(failed.stderr, 'Lasm process launcher: configuration read failed: errno 5\n');
  assert.equal(failed.status, 125);
  const malformed = await launch(base, { reads: [Buffer.from('{'), 0] });
  assert.match(malformed.stderr, /^Lasm process launcher: .*JSON/);
});

test('environment bytes travel base64-encoded and are set byte for byte', async () => {
  const key = Buffer.from([0x4b, 0xff]), value = Buffer.from([0xc3, 0x28, 0x3d]);
  const run = await launch({ ...base, env: undefined, envBytes: [[key.toString('base64'), value.toString('base64')]] });
  const [[, k, v, overwrite]] = run.calls.filter(([name]) => name === 'setenv');
  assert.deepEqual([[...k], [...v], overwrite], [[0x4b, 0xff, 0], [0xc3, 0x28, 0x3d, 0], 1]);
});

test('a relative requested cwd is entered after the inherited directory', async () => {
  const run = await launch({ ...base, requestedCwd: 'sub' });
  assert.deepEqual(run.calls.filter(([name]) => name === 'chdir'), [['chdir', '/start'], ['chdir', 'sub']]);
  const missing = await launch({ ...base, requestedCwd: 'missing' }, { fail: { chdir: path => path === 'missing' } });
  assert.equal(missing.stderr, 'could not change directory to missing\n');
  assert.equal(missing.status, 255);
  assert.equal(missing.calls.some(([name]) => name === 'execvp'), false);
  const first = await launch({ ...base, requestedCwd: 'sub' }, { fail: { chdir: path => path === '/start' } });
  assert.equal(first.stderr, 'could not change directory to /start\n');
  assert.deepEqual(first.calls.filter(([name]) => name === 'chdir'), [['chdir', '/start']]);
});

test('an absolute requested cwd is entered directly', async () => {
  const run = await launch({ ...base, requestedCwd: '/abs' });
  assert.deepEqual(run.calls.filter(([name]) => name === 'chdir'), [['chdir', '/abs']]);
});

test('an inherited directory descriptor is entered unless the process cwd already is it', async () => {
  const run = await launch({ ...base, directoryFd: 9 });
  assert.deepEqual(run.calls.filter(([name]) => ['fchdir', 'chdir'].includes(name) || name === 'close' && run.calls), [
    ['close', 3], ['fchdir', 4], ['close', 4]]);
  const relative = await launch({ ...base, directoryFd: 9, requestedCwd: 'sub' });
  assert.deepEqual(relative.calls.filter(([name]) => ['fchdir', 'chdir'].includes(name)), [['fchdir', 4], ['chdir', 'sub']]);
  const same = await launch({ ...base, directoryFd: 9, inheritProcessCwd: true });
  assert.deepEqual(same.calls.filter(([name]) => ['fchdir', 'chdir'].includes(name)), []);
  assert.ok(same.calls.some(([name, fd]) => name === 'close' && fd === 4));
  const absolute = await launch({ ...base, directoryFd: 9, requestedCwd: '/abs' });
  assert.deepEqual(absolute.calls.filter(([name]) => ['fchdir', 'chdir'].includes(name)), [['chdir', '/abs']]);
  assert.ok(absolute.calls.some(([name, fd]) => name === 'close' && fd === 4));
  const failed = await launch({ ...base, directoryFd: 9 }, { fail: { fchdir: true } });
  assert.equal(failed.stderr, 'Lasm process launcher: inherited cwd setup failed: errno 5\n');
  assert.equal(failed.status, 125);
});

test('a new session is created only when requested, and its failure is reported', async () => {
  assert.equal((await launch(base)).calls.some(([name]) => name === 'setsid'), false);
  const run = await launch({ ...base, setsid: true });
  const names = run.calls.map(([name]) => name);
  assert.ok(names.indexOf('chdir') < names.indexOf('setsid') && names.indexOf('setsid') < names.indexOf('execvp'));
  const failed = await launch({ ...base, setsid: true }, { fail: { setsid: true } });
  assert.equal(failed.stderr, 'Lasm process launcher: setsid failed: errno 5\n');
  assert.equal(failed.calls.some(([name]) => name === 'execvp'), false);
});

test('diagnostics are written completely across short writes and EINTR, and stop on a failed write', async () => {
  const message = "could not execute external process 'prog'\n";
  const run = await launch(base, { writes: [5, -4, 3] });
  assert.equal(run.stderr, message);
  const writes = run.calls.filter(([name]) => name === 'write');
  assert.deepEqual(writes.map(([, , , size]) => size), [message.length, message.length - 5, message.length - 5, message.length - 8, message.length - 8]
    .slice(0, writes.length));
  assert.deepEqual(writes.map(([, , bytes]) => Buffer.from(bytes).toString()).slice(0, 3), [message, message.slice(5), message.slice(5)]);
  const stopped = await launch(base, { writes: [0] });
  assert.equal(stopped.calls.filter(([name]) => name === 'write').length, 1);
  assert.equal(stopped.status, 255);
});
