import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

// Only the Node host loads this private adapter. No Lean declaration or user
// annotation depends on the FFI library, and no native compiler runs on install.
const require = createRequire(import.meta.url);
let implementation;
export function nativeFiles() {
  if (implementation) return implementation;
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const windows = process.platform === 'win32';
  const libc = ffi.load(windows ? 'ucrtbase.dll' : process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
  const bind = (name, result, args) => libc.func(name, result, args);
  const fdopen = bind(windows ? '_fdopen' : 'fdopen', 'void *', ['int', 'str']);
  const dup = bind(windows ? '_dup' : 'dup', 'int', ['int']);
  const closeFd = bind(windows ? '_close' : 'close', 'int', ['int']);
  const pipe = windows ? libc.func('int _pipe(_Out_ int *fds, uint size, int mode)')
    : libc.func('int pipe(_Out_ int *fds)');
  const fclose = bind('fclose', 'int', ['void *']);
  const fileno = bind(windows ? '_fileno' : 'fileno', 'int', ['void *']);
  const fread = bind('fread', 'size_t', ['void *', 'size_t', 'size_t', 'void *']);
  const fwrite = bind('fwrite', 'size_t', ['void *', 'size_t', 'size_t', 'void *']);
  const fflush = bind('fflush', 'int', ['void *']);
  const fseek = bind(windows ? '_fseeki64' : 'fseeko', 'int', ['void *', 'int64_t', 'int']);
  const ftell = bind(windows ? '_ftelli64' : 'ftello', 'int64_t', ['void *']);
  const ftruncate = bind(windows ? '_chsize_s' : 'ftruncate', 'int', ['int', 'int64_t']);
  const ferror = bind('ferror', 'int', ['void *']);
  const clearerr = bind('clearerr', 'void', ['void *']);
  const isatty = bind(windows ? '_isatty' : 'isatty', 'int', ['int']);
  const strerror = bind('strerror', 'str', ['int']);
  const free = bind('free', 'void', ['void *']);
  const getdelim = windows ? null : libc.func('intptr_t getdelim(_Inout_ void **line, _Inout_ size_t *capacity, int delimiter, void *stream)');
  const fgetc = windows ? bind('fgetc', 'int', ['void *']) : null;
  const codes = Object.fromEntries(Object.entries(ffi.os.errno).map(([name, number]) => [number, name]));
  function failure(errno = ffi.errno()) {
    return Object.assign(new Error(strerror(errno)), { code: codes[errno] ?? 'EIO', errno, nativeMessage: true });
  }
  // Capture errno in the callback, before another asynchronous result can
  // overwrite the calling thread's errno. Koffi propagates the worker's errno.
  const call = (fn, ...args) => new Promise((resolve, reject) => fn.async(...args, (error, value) => {
    const errno = ffi.errno();
    if (error) reject(error); else resolve({ value, errno });
  }));
  const checked = async (fn, ...args) => {
    const result = await call(fn, ...args);
    if (result.value < 0) throw failure(result.errno);
    return result.value;
  };
  let lock;
  if (windows) {
    const kernel = ffi.load('kernel32.dll');
    const handle = bind('_get_osfhandle', 'intptr_t', ['int']);
    const lockFile = kernel.func('int __stdcall LockFileEx(intptr_t, uint32_t, uint32_t, uint32_t, uint32_t, void *)');
    const unlockFile = kernel.func('int __stdcall UnlockFileEx(intptr_t, uint32_t, uint32_t, uint32_t, void *)');
    const getError = kernel.func('uint32_t __stdcall GetLastError()');
    lock = async (stream, exclusive, attempt, unlock) => {
      const overlapped = Buffer.alloc(32);
      const fn = unlock ? unlockFile : lockFile;
      const args = unlock ? [handle(fileno(stream)), 0, 0xffffffff, 0xffffffff, overlapped]
        : [handle(fileno(stream)), (exclusive ? 2 : 0) | (attempt ? 1 : 0), 0, 0xffffffff, 0xffffffff, overlapped];
      const result = await new Promise((resolve, reject) => fn.async(...args, (err, value) => {
        const code = getError(); if (err) reject(err); else resolve({ value, code });
      }));
      if (result.value || unlock && result.code === 158) return true;
      if (attempt && result.code === 33) return false;
      // Native Lean reports LockFileEx errors as IO.userError containing the
      // Windows error number, rather than decoding them as POSIX errno.
      throw Object.assign(new Error(String(result.code)), { leanUserError: true });
    };
  } else {
    const flock = bind('flock', 'int', ['int', 'int']);
    lock = async (stream, exclusive, attempt, unlock) => {
      const result = await call(flock, fileno(stream), unlock ? 8 : (exclusive ? 2 : 1) | (attempt ? 4 : 0));
      if (result.value === 0) return true;
      if (attempt && result.errno === ffi.os.errno.EWOULDBLOCK) return false;
      throw failure(result.errno);
    };
  }
  implementation = {
    error: failure,
    strerror,
    pipe() {
      const fds = [0, 0];
      if ((windows ? pipe(fds, 4096, 0x8000 | 0x0080) : pipe(fds)) < 0) throw failure();
      return fds;
    },
    closeDescriptor(fd) { closeFd(fd); },
    openDescriptor(fd, mode) {
      const stream = fdopen(fd, mode);
      if (!stream) throw failure();
      return { stream, fd, tail: Promise.resolve(), type: 'file' };
    },
    duplicateDescriptor(fd, mode) {
      const owned = dup(fd);
      if (owned < 0) throw failure();
      return implementation.openDescriptor(owned, mode);
    },
    close(file) { fclose(file.stream); file.stream = null; },
    async read(file, count) {
      if (!count) return Buffer.alloc(0);
      let bytes;
      try { bytes = Buffer.allocUnsafe(count); } catch { throw failure(ffi.os.errno.ENOMEM); }
      const { value, errno } = await call(fread, bytes, 1, count, file.stream);
      if (value) return bytes.subarray(0, Number(value));
      if (ferror(file.stream)) throw failure(errno);
      clearerr(file.stream);
      return bytes.subarray(0, 0);
    },
    async write(file, bytes) {
      if (!bytes.length) return;
      const { value, errno } = await call(fwrite, bytes, 1, bytes.length, file.stream);
      if (value !== bytes.length) throw failure(errno);
    },
    async flush(file) { await checked(fflush, file.stream); },
    async rewind(file) { await checked(fseek, file.stream, 0, 0); },
    async truncate(file) {
      const position = ftell(file.stream);
      if (position < 0) throw failure();
      const { value, errno } = await call(ftruncate, file.fd, position);
      if (value !== 0) throw failure(windows ? value : errno);
    },
    async getLine(file) {
      if (getdelim) {
        const pointer = [null], capacity = [0];
        try {
          const { value, errno } = await call(getdelim, pointer, capacity, 10, file.stream);
          if (value >= 0) return Buffer.from(new Uint8Array(ffi.view(pointer[0], Number(value))));
          if (ferror(file.stream)) throw failure(errno);
          clearerr(file.stream); return Buffer.alloc(0);
        } finally { if (pointer[0]) free(pointer[0]); }
      }
      const bytes = [];
      for (;;) {
        const { value, errno } = await call(fgetc, file.stream);
        if (value < 0) {
          if (ferror(file.stream)) throw failure(errno);
          clearerr(file.stream); break;
        }
        bytes.push(value);
        if (value === 10) break;
      }
      return Buffer.from(bytes);
    },
    isTty(file) { return !!isatty(file.fd); },
    lock(file, exclusive, attempt = false, unlock = false) { return lock(file.stream, exclusive, attempt, unlock); },
  };
  return implementation;
}
