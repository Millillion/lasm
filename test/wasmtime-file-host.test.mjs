// The supervisor's descriptor table for guest file imports
// (src/wasmtime-file-host.mjs) over stand-in native calls: the helper's
// openat/fstat and libc's read/lseek/close (test/fixtures/wasmtime-stand-ins),
// here a small in-memory file system with errno.
import test from 'node:test';
import assert from 'node:assert/strict';
import { installStandIns, standInKoffi } from './fixtures/wasmtime-stand-ins/index.mjs';

installStandIns();
// The file host is the Linux x64 supervisor's (it checks the platform first).
const linuxX64 = process.platform === 'linux' && process.arch === 'x64';
const { createWasmtimeFileHost } = await import('../src/wasmtime-file-host.mjs');
const errnos = { EBADF: 9, ENOENT: 2, EACCES: 13, EINVAL: 22, EISDIR: 21, ENOTDIR: 20 };

/** Native calls over `files` (path → bytes); each records its arguments. */
function nativeFiles(files) {
  let errno = 0, next = 40;
  const open = new Map(), calls = [];
  const fail = code => { errno = errnos[code]; return -1; };
  const asynchronous = (name, fn) => Object.assign(() => assert.fail('synchronous call'), {
    async: (...args) => { const done = args.pop(); calls.push([name, ...args]); setImmediate(() => { const value = fn(...args); if (value === 'throw') done(new Error('native failure')); else done(null, value); }); } });
  const helper = {
    openat: asynchronous('openat', (directory, path, flags, mode) => {
      const name = Buffer.from(path).toString();
      assert.equal(path.at(-1), 0, 'NUL-terminated');
      const full = name.slice(0, -1);
      if (full === 'denied') return fail('EACCES');
      if (!(full in files)) return fail('ENOENT');
      const fd = next++; open.set(fd, { name: full, position: 0 }); void directory; void flags; void mode; return fd;
    }),
    fstat: asynchronous('fstat', (fd, output) => { if (!open.has(fd)) return fail('EBADF'); output.fill(7); output.writeUInt32LE(files[open.get(fd).name].length, 0); return 0; }),
  };
  const libc = {
    read: asynchronous('read', (fd, buffer, length) => {
      const file = open.get(fd); if (!file) return fail('EBADF');
      const bytes = files[file.name].subarray(file.position, file.position + length); buffer.set(bytes); file.position += bytes.length; return bytes.length;
    }),
    lseek: asynchronous('lseek', (fd, offset, whence) => {
      const file = open.get(fd); if (!file) return fail('EBADF');
      if (whence === 99) return 'throw';
      const base = whence === 0 ? 0 : whence === 1 ? file.position : files[file.name].length;
      const position = base + Number(offset); if (position < 0) return fail('EINVAL');
      file.position = position; return BigInt(position);
    }),
    close: asynchronous('close', fd => { if (!open.delete(fd)) return fail('EBADF'); return 0; }),
  };
  const koffi = standInKoffi({ helper, libc, errno: () => errno });
  return { koffi, calls, open };
}

test('file host: opens, reads, seeks, stats and closes guest descriptors on native ones', { skip: !linuxX64 && 'Linux x64 only' }, async () => {
  const native = nativeFiles({ '/data/a.txt': Buffer.from('hello world'), 'rel.txt': Buffer.from('relative') });
  const host = createWasmtimeFileHost('/stand-in/host/instance.so');
  assert.deepEqual(native.koffi.loaded, ['/stand-in/host/instance.so']);
  // The lowest free guest number: 0, 1 and 2 are the standard descriptors.
  assert.deepEqual(await host.request({ operation: 'openat', directory: 5, path: Buffer.from('/data/a.txt'), flags: 0, mode: 0 }), { errno: 0, fd: 3 });
  assert.deepEqual(native.calls.at(-1).slice(0, 2), ['openat', -100], 'an absolute path ignores the directory');
  assert.deepEqual(await host.request({ operation: 'openat', directory: -100, path: Buffer.from('rel.txt'), flags: 64, mode: 0o644 }), { errno: 0, fd: 4 });
  assert.deepEqual(native.calls.at(-1).slice(0, 2), ['openat', -100]);
  assert.deepEqual(native.calls.at(-1).slice(3), [64, 0o644]);
  // A relative path opens under the guest directory's native descriptor, or an invalid one (openat decides).
  assert.deepEqual(await host.request({ operation: 'openat', directory: 3, path: Buffer.from('rel.txt'), flags: 0, mode: 0 }), { errno: 0, fd: 5 });
  assert.deepEqual(native.calls.at(-1).slice(0, 2), ['openat', 40]);
  await host.request({ operation: 'openat', directory: 77, path: Buffer.from('rel.txt'), flags: 0, mode: 0 });
  assert.deepEqual(native.calls.at(-1).slice(0, 2), ['openat', -1]);
  await host.request({ operation: 'openat', directory: 1, path: Buffer.from('rel.txt'), flags: 0, mode: 0 });
  assert.deepEqual(native.calls.at(-1).slice(0, 2), ['openat', 1], 'standard descriptors are their own native ones');
  // Reads return what was read; seeks the new offset.
  const read = await host.request({ operation: 'read', fd: 3, length: 5 });
  assert.equal(read.errno, 0);
  assert.equal(Buffer.from(read.bytes).toString(), 'hello');
  assert.deepEqual(await host.request({ operation: 'seek', fd: 3, offset: -3n, whence: 2 }), { errno: 0, offset: 8n });
  assert.equal(Buffer.from((await host.request({ operation: 'read', fd: 3, length: 100 })).bytes).toString(), 'rld');
  assert.equal((await host.request({ operation: 'read', fd: 3, length: 0 })).bytes.length, 0);
  const stat = await host.request({ operation: 'stat', fd: 3 });
  assert.equal(stat.errno, 0);
  assert.equal(stat.bytes.length, 104);
  assert.equal(stat.bytes.readUInt32LE(0), 11);
  // Closing releases the guest number first; it is reused.
  assert.deepEqual(await host.request({ operation: 'close', fd: 3 }), { errno: 0 });
  assert.deepEqual(native.calls.at(-1), ['close', 40]);
  assert.deepEqual(await host.request({ operation: 'read', fd: 3, length: 1 }), { errno: 8 }, 'EBADF');
  assert.deepEqual(await host.request({ operation: 'openat', directory: -100, path: Buffer.from('/data/a.txt'), flags: 0, mode: 0 }), { errno: 0, fd: 3 });
});

test('file host: native errors become WASI errno numbers; anything else is thrown', { skip: !linuxX64 && 'Linux x64 only' }, async () => {
  const native = nativeFiles({ '/f': Buffer.from('x') });
  const host = createWasmtimeFileHost('/h.so');
  assert.deepEqual(await host.request({ operation: 'openat', directory: -100, path: Buffer.from('/missing'), flags: 0, mode: 0 }), { errno: 44 }, 'ENOENT');
  assert.deepEqual(await host.request({ operation: 'openat', directory: -100, path: Buffer.from('denied'), flags: 0, mode: 0 }), { errno: 2 }, 'EACCES');
  assert.deepEqual(await host.request({ operation: 'stat', fd: 9 }), { errno: 8 });
  const { fd } = await host.request({ operation: 'openat', directory: -100, path: Buffer.from('/f'), flags: 0, mode: 0 });
  assert.deepEqual(await host.request({ operation: 'seek', fd, offset: -5n, whence: 0 }), { errno: 28 }, 'EINVAL');
  // A native call that fails without errno, a NUL in a path, a bad length, an unknown operation: thrown.
  await assert.rejects(host.request({ operation: 'seek', fd, offset: 0n, whence: 99 }), /native failure/);
  await assert.rejects(host.request({ operation: 'openat', directory: -100, path: Buffer.from('/f\0x'), flags: 0, mode: 0 }), { code: 'ERR_ASSERTION' });
  for (const length of [-1, 1.5, 2 ** 53]) await assert.rejects(host.request({ operation: 'read', fd, length }), { code: 'ERR_ASSERTION' });
  await assert.rejects(host.request({ operation: 'truncate', fd }), { message: 'Unimplemented descriptor operation: truncate' });
  // A native close failure after the guest number is released.
  native.open.clear();
  assert.deepEqual(await host.request({ operation: 'close', fd }), { errno: 8 });
  assert.deepEqual(await host.request({ operation: 'close', fd }), { errno: 8 });
});

test('file host: only on Linux x64', { skip: !linuxX64 && 'Linux x64 only' }, () => {
  nativeFiles({});
  const original = Object.getOwnPropertyDescriptor(process, 'arch');
  Object.defineProperty(process, 'arch', { value: 'arm64' });
  try { assert.throws(() => createWasmtimeFileHost('/h.so'), { code: 'ERR_ASSERTION' }); }
  finally { Object.defineProperty(process, 'arch', original); }
});
