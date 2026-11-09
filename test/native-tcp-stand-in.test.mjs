// POSIX TCP socket setup (src/native-tcp.mjs) against a scripted libc: socket
// options for each platform, libuv's deferred bind errors, and the
// non-blocking connect with its poll loop, cancellation and errors.
import test from 'node:test';
import assert from 'node:assert/strict';
import { constants as fs } from 'node:fs';
import { constants } from 'node:os';
import { getSystemErrorMessage } from 'node:util';
import { installKoffiStandIn, standInKoffi, freshImport } from './helpers/koffi-stand-in.mjs';

installKoffiStandIn();
const source = new URL('../src/native-tcp.mjs', import.meta.url);
const E = constants.errno;

async function tcp(platform, script = {}) {
  const saved = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...saved, value: platform });
  const options = [];
  let koffi;
  const fail = (name, ...args) => {
    const errno = script[name]?.(...args);
    if (errno) { koffi.state.errno = errno; return -1; }
    return undefined;
  };
  koffi = standInKoffi({
    socket: (...args) => fail('socket', ...args) ?? 7,
    bind: (...args) => fail('bind', ...args) ?? 0,
    listen: (...args) => fail('listen', ...args) ?? 0,
    connect: (...args) => fail('connect', ...args) ?? 0,
    close: () => 0,
    fcntl: (fd, command, ...rest) => fail('fcntl', fd, command, ...rest) ?? (command === 3 ? 0o2 : 0),
    setsockopt: (fd, level, name, data, size) => { options.push([level, name, data.readUInt32LE(), size]); return fail('setsockopt', level, name) ?? 0; },
    getsockopt: (fd, level, name, value) => { value.writeInt32LE(script.soError?.() ?? 0); return fail('getsockopt') ?? 0; },
    getsockname: (fd, bytes) => { script.name?.(bytes); return fail('getsockname') ?? 0; },
    getpeername: (fd, bytes) => { script.peer?.(bytes); return fail('getpeername') ?? 0; },
    inet_pton: (family, host, output) => {
      if (host === 'bad') return 0;
      if (family === 2) output.set(host.split('.').map(Number)); else output[15] = 1;
      return 1;
    },
    inet_ntop: (family, bytes) => script.ntop ? script.ntop(family, bytes) : family === 2 ? [...bytes.subarray(0, 4)].join('.') : '::1',
    poll: (entry, count, timeout) => {
      assert.deepEqual([entry.readInt32LE(), entry.readInt16LE(4), count, timeout], [7, 4, 1, 0]);
      const result = script.poll?.() ?? 1;
      if (result < 0) koffi.state.errno = -result;
      return result < 0 ? -1 : result;
    },
  }, { errno: E });
  koffi.install();
  const { nativeTcp } = await freshImport(source);
  const restore = () => Object.defineProperty(process, 'platform', saved);
  try { return { native: nativeTcp(), nativeTcp, koffi, options, restore }; } catch (error) { restore(); throw error; }
}
const calls = (koffi, name) => koffi.calls.filter(([n]) => n === name).map(([, ...args]) => args);
const fails = errno => error => error.errno === -errno && error.code === Object.keys(E).find(key => E[key] === errno) && error.message === getSystemErrorMessage(-errno) && error.nativeMessage === true;

test('only Linux and macOS have the native socket path', async t => {
  for (const platform of ['win32', 'freebsd']) {
    const { native, restore } = await tcp(platform); t.after(restore);
    assert.equal(native, null);
    restore();
  }
  const { native, nativeTcp, koffi, restore } = await tcp('linux'); t.after(restore);
  assert.equal(nativeTcp(), native);
  assert.deepEqual(koffi.loads, [null]);
});

for (const platform of ['linux', 'darwin']) test(`${platform}: a socket is close-on-exec, non-blocking, with the requested options`, async t => {
  const darwin = platform === 'darwin';
  const { native, koffi, options, restore } = await tcp(platform); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 80 }, { noDelay: true, keepAlive: [true, 5] });
  assert.equal(handle.fd, 7);
  assert.deepEqual(calls(koffi, 'socket'), [[2, 1, 0]]);
  assert.deepEqual(calls(koffi, 'fcntl'), [[7, 2, 'int', 1], [7, 3], [7, 4, 'int', 0o2 | fs.O_NONBLOCK]]);
  const level = darwin ? 0xffff : 1;
  // libuv uses 60 seconds when the stream opens, not the earlier delay.
  assert.deepEqual(options, [[6, 1, 1, 4], [level, darwin ? 8 : 9, 1, 4], [6, darwin ? 0x10 : 4, 60, 4], [6, darwin ? 0x101 : 5, 1, 4], [6, darwin ? 0x102 : 6, 10, 4]]);
  options.length = 0;
  handle.keepAlive(false, 30);
  assert.deepEqual(options, [[level, darwin ? 8 : 9, 0, 4]]);
  assert.throws(() => handle.keepAlive(true, 0), fails(1));
  const v6 = native.create({ host: '::1', port: 80 }, {});
  assert.deepEqual(calls(koffi, 'socket').at(-1), [darwin ? 30 : 10, 1, 0]);
  options.length = 0;
  v6.bind({ host: '::', port: 8080 });
  assert.deepEqual(options, [[level, darwin ? 4 : 2, 1, 4], [41, darwin ? 27 : 26, 0, 4]]);
  const [, address, size] = calls(koffi, 'bind').at(-1);
  assert.equal(size, 28);
  assert.equal(address.readUInt16BE(2), 8080);
  if (darwin) assert.deepEqual([address[0], address[1]], [28, 30]); else assert.equal(address.readUInt16LE(), 10);
  options.length = 0;
  handle.bind({ host: '127.0.0.1', port: 1 });
  assert.deepEqual(options, [[level, darwin ? 4 : 2, 1, 4]]);
  const [, v4] = calls(koffi, 'bind').at(-1);
  assert.equal(v4.length, 16);
  assert.deepEqual([...v4.subarray(4, 8)], [127, 0, 0, 1]);
  if (darwin) assert.deepEqual([v4[0], v4[1]], [16, 2]); else assert.equal(v4.readUInt16LE(), 2);
});

test('sockets without options set none; failures during setup close the socket', async t => {
  const { native, koffi, options, restore } = await tcp('linux', { fcntl: (fd, command) => command === 4 ? E.EINVAL : 0 }); t.after(restore);
  assert.throws(() => native.create({ host: '127.0.0.1', port: 1 }, {}), fails(E.EINVAL));
  assert.deepEqual(calls(koffi, 'close'), [[7]]);
  assert.deepEqual(options, []);
  const quiet = await tcp('linux'); t.after(quiet.restore);
  quiet.native.create({ host: '127.0.0.1', port: 1 }, { keepAlive: [false, 9] });
  assert.deepEqual(quiet.options, []);
  const refused = await tcp('linux', { socket: () => E.EMFILE }); t.after(refused.restore);
  assert.throws(() => refused.native.create({ host: '127.0.0.1', port: 1 }, {}), fails(E.EMFILE));
  assert.deepEqual(calls(refused.koffi, 'close'), []);
  assert.throws(() => refused.native.create({ host: 'bad', port: 1 }, {}), fails(E.EINVAL));
});

test('a transferred descriptor is no longer closed; a forgotten one is gone', async t => {
  const { native, koffi, restore } = await tcp('linux'); t.after(restore);
  const owned = native.create({ host: '127.0.0.1', port: 1 }, {});
  owned.close(); owned.close();
  assert.deepEqual(calls(koffi, 'close'), [[7]]);
  assert.throws(() => owned.fd, fails(E.EBADF));
  const transferred = native.create({ host: '127.0.0.1', port: 1 }, {});
  assert.equal(transferred.transfer(), 7);
  transferred.close();
  assert.deepEqual(calls(koffi, 'close'), [[7]]);
  const forgotten = native.create({ host: '127.0.0.1', port: 1 }, {});
  forgotten.forget();
  assert.throws(() => forgotten.fd, fails(E.EBADF));
  assert.throws(() => forgotten.transfer(), fails(E.EBADF));
  forgotten.close();
  assert.deepEqual(calls(koffi, 'close'), [[7]]);
});

test('EADDRINUSE from bind is deferred to name, listen and connect, as in libuv 1.48', async t => {
  let bindError = E.EADDRINUSE;
  const { native, koffi, restore } = await tcp('linux', { bind: () => bindError }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  handle.bind({ host: '127.0.0.1', port: 80 });
  assert.ok(fails(E.EADDRINUSE)(handle.delayedError));
  assert.throws(() => handle.name(), fails(E.EADDRINUSE));
  assert.throws(() => handle.listen(5), fails(E.EADDRINUSE));
  await assert.rejects(handle.connect({ host: '127.0.0.1', port: 2 }), fails(E.EADDRINUSE));
  assert.deepEqual(calls(koffi, 'listen'), []);
  assert.deepEqual(calls(koffi, 'connect'), []);
  bindError = 0;
  handle.bind({ host: '127.0.0.1', port: 81 });
  assert.equal(handle.delayedError, null);
  handle.listen(5.9);
  assert.deepEqual(calls(koffi, 'listen'), [[7, 5]]);
  bindError = E.EAFNOSUPPORT;
  assert.throws(() => handle.bind({ host: '127.0.0.1', port: 82 }), fails(E.EINVAL));
  bindError = E.EACCES;
  assert.throws(() => handle.bind({ host: '127.0.0.1', port: 83 }), fails(E.EACCES));
  assert.equal(handle.delayedError, null);
});

test('listen failures and option failures report their errno', async t => {
  const { native, restore } = await tcp('linux', { listen: () => E.EOPNOTSUPP, setsockopt: (level, name) => level === 6 && name === 1 ? E.ENOPROTOOPT : 0 }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  assert.throws(() => handle.listen(1), fails(E.EOPNOTSUPP));
  assert.throws(() => handle.noDelay(), fails(E.ENOPROTOOPT));
});

for (const platform of ['linux', 'darwin']) test(`${platform}: local and peer names decode both families`, async t => {
  const darwin = platform === 'darwin';
  const family = (bytes, value) => { if (darwin) bytes[1] = value; else bytes.writeUInt16LE(value); };
  const { native, koffi, restore } = await tcp(platform, {
    name: bytes => { family(bytes, 2); bytes.writeUInt16BE(8080, 2); bytes.set([10, 0, 0, 5], 4); },
    peer: bytes => { family(bytes, darwin ? 30 : 10); bytes.writeUInt16BE(443, 2); },
  }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  assert.deepEqual(handle.name(), { address: '10.0.0.5', family: 'IPv4', port: 8080 });
  assert.deepEqual(handle.name(true), { address: '::1', family: 'IPv6', port: 443 });
  const [, , peerSize] = calls(koffi, 'getpeername')[0];
  assert.deepEqual(peerSize, [128]);
  assert.equal(calls(koffi, 'inet_ntop')[1][0], darwin ? 30 : 10);
  assert.equal(calls(koffi, 'inet_ntop')[0][1].length, 124);
  assert.equal(calls(koffi, 'inet_ntop')[1][1].length, 120);
});

test('name failures report their errno', async t => {
  const failing = await tcp('linux', { getsockname: () => E.ENOTCONN }); t.after(failing.restore);
  assert.throws(() => failing.native.create({ host: '127.0.0.1', port: 1 }, {}).name(), fails(E.ENOTCONN));
  const unformatted = await tcp('linux', { ntop: () => null, name: bytes => bytes.writeUInt16LE(2) }); t.after(unformatted.restore);
  unformatted.koffi.state.errno = E.ENOSPC;
  assert.throws(() => unformatted.native.create({ host: '127.0.0.1', port: 1 }, {}).name(), fails(E.ENOSPC));
});

test('an immediate connect resolves; EINTR retries; other errors throw', async t => {
  let results = [E.EINTR, E.EINTR, 0];
  const { native, koffi, restore } = await tcp('linux', { connect: () => results.shift() }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  await handle.connect({ host: '127.0.0.1', port: 9 });
  assert.equal(calls(koffi, 'connect').length, 3);
  assert.equal(calls(koffi, 'connect')[0][1].readUInt16BE(2), 9);
  results = [E.ECONNREFUSED];
  assert.throws(() => handle.connect({ host: '127.0.0.1', port: 9 }), fails(E.ECONNREFUSED));
  assert.equal(calls(koffi, 'poll').length, 0);
});

test('an in-progress connect polls until writable and reports SO_ERROR', async t => {
  let polls = [0, -E.EINTR, 1];
  let soError = 0;
  const { native, koffi, restore } = await tcp('linux', { connect: () => E.EINPROGRESS, poll: () => polls.shift(), soError: () => soError }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  await handle.connect({ host: '127.0.0.1', port: 9 });
  assert.equal(calls(koffi, 'poll').length, 3);
  assert.deepEqual(calls(koffi, 'getsockopt').map(([fd, level, name]) => [fd, level, name]), [[7, 1, 4]]);
  polls = [1]; soError = E.ECONNREFUSED;
  await assert.rejects(handle.connect({ host: '127.0.0.1', port: 9 }), fails(E.ECONNREFUSED));
  polls = [-E.EBADF];
  await assert.rejects(handle.connect({ host: '127.0.0.1', port: 9 }), fails(E.EBADF));
});

test('macOS reads SO_ERROR at its own socket level', async t => {
  const { native, koffi, restore } = await tcp('darwin', { connect: () => E.EINPROGRESS }); t.after(restore);
  await native.create({ host: '127.0.0.1', port: 1 }, {}).connect({ host: '127.0.0.1', port: 9 });
  assert.deepEqual(calls(koffi, 'getsockopt').map(([, level, name]) => [level, name]), [[0xffff, 0x1007]]);
});

test('a second connect is EALREADY, and closing cancels a pending connect', async t => {
  const { native, koffi, restore } = await tcp('linux', { connect: () => E.EINPROGRESS, poll: () => 0 }); t.after(restore);
  const handle = native.create({ host: '127.0.0.1', port: 1 }, {});
  const pending = handle.connect({ host: '127.0.0.1', port: 9 });
  assert.throws(() => handle.connect({ host: '127.0.0.1', port: 9 }), fails(E.EALREADY));
  await new Promise(resolve => setTimeout(resolve, 10));
  assert.ok(calls(koffi, 'poll').length >= 2);
  handle.close();
  await assert.rejects(pending, fails(E.ECANCELED));
  const count = calls(koffi, 'poll').length;
  await new Promise(resolve => setTimeout(resolve, 10));
  assert.equal(calls(koffi, 'poll').length, count);
  assert.deepEqual(calls(koffi, 'close'), [[7]]);
  // After the cancelled connect a new one may start.
  assert.throws(() => handle.connect({ host: '127.0.0.1', port: 9 }), fails(E.EBADF));
});

test('a failing SO_ERROR read rejects the connect', async t => {
  const { native, restore } = await tcp('linux', { connect: () => E.EINPROGRESS, getsockopt: () => E.ENOTSOCK }); t.after(restore);
  await assert.rejects(native.create({ host: '127.0.0.1', port: 1 }, {}).connect({ host: '127.0.0.1', port: 9 }), fails(E.ENOTSOCK));
});

test('errors are libuv-style negative errnos with the engine\'s names and messages', async t => {
  const { native, restore } = await tcp('linux'); t.after(restore);
  assert.ok(fails(E.EPIPE)(native.error(E.EPIPE)));
});
