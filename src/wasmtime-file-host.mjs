import assert from 'node:assert/strict';
import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { wasiErrno } from './wasmtime-native-stdio.mjs';

// One descriptor namespace belongs to the application supervisor, shared by
// every guest pthread. Blocking native calls run asynchronously off that thread.
// Other POSIX operations remain explicit missing imports; this is not a full FS.
export function createWasmtimeFileHost(helper) {
  assert.equal(process.platform + '-' + process.arch, 'linux-x64');
  const require = createRequire(import.meta.url), bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = require(existsSync(bundled) ? fileURLToPath(bundled) : 'koffi');
  const libc = ffi.load(null), library = ffi.load(helper);
  const openat = library.func('int lasm_posix_openat(int directory, const uint8_t *path, int flags, uint32_t mode)');
  const fstat = library.func('int lasm_posix_fstat(int fd, uint8_t *output)');
  const read = libc.func('intptr_t read(int fd, void *bytes, size_t length)');
  const seek = libc.func('int64_t lseek(int fd, int64_t offset, int whence)');
  const close = libc.func('int close(int fd)');
  const names = new Map(Object.entries(ffi.os.errno).map(([name, value]) => [value, name]));
  const descriptors = new Map([[0, 0], [1, 1], [2, 2]]);
  const call = (fn, ...args) => new Promise((resolve, reject) => fn.async(...args, (error, value) => {
    const errno = ffi.errno();
    if (error) reject(error);
    else if (value < 0) reject(Object.assign(new Error(`Native descriptor call failed: ${errno}`), { code: names.get(errno) }));
    else resolve(value);
  }));
  function descriptor(fd) {
    if (!descriptors.has(fd)) throw Object.assign(new Error('Unknown guest descriptor'), { code: 'EBADF' });
    return descriptors.get(fd);
  }
  return {
    async request(request) {
      try {
        if (request.operation === 'openat') {
          const bytes = Buffer.from(request.path);
          assert.ok(!bytes.includes(0));
          const directory = bytes[0] === 47 || request.directory === -100 ? -100 : descriptor(request.directory);
          const native = await call(openat, directory, Buffer.concat([bytes, Buffer.from([0])]), request.flags, request.mode);
          let fd = 0; while (descriptors.has(fd)) fd++;
          descriptors.set(fd, native); return { errno: 0, fd };
        }
        const native = descriptor(request.fd);
        if (request.operation === 'stat') {
          const bytes = Buffer.alloc(104); await call(fstat, native, bytes); return { errno: 0, bytes };
        }
        if (request.operation === 'read') {
          assert.ok(Number.isSafeInteger(request.length) && request.length >= 0);
          const bytes = Buffer.alloc(request.length), count = Number(await call(read, native, bytes, bytes.length));
          return { errno: 0, bytes: bytes.subarray(0, count) };
        }
        if (request.operation === 'seek')
          return { errno: 0, offset: BigInt(await call(seek, native, BigInt(request.offset), request.whence)) };
        if (request.operation === 'close') {
          // The descriptor number is reusable once close begins, just as in the
          // kernel. An already pending native operation retains its own fd use.
          descriptors.delete(request.fd); await call(close, native); return { errno: 0 };
        }
        throw new Error(`Unimplemented descriptor operation: ${request.operation}`);
      } catch (error) { return { errno: wasiErrno(error) }; }
    },
  };
}
