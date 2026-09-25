import { createRequire } from 'node:module';
import { existsSync, constants } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { homedir, tmpdir, userInfo } from 'node:os';
import { callNativeFile } from './native-file-worker-pool.mjs';

// Only the Node host loads this private adapter. No Lean declaration or user
// annotation depends on the FFI library, and no native compiler runs on install.
const require = createRequire(import.meta.url);
let implementation, synchronousImplementation;
export function nativeFiles({ synchronous = false } = {}) {
  const cached = synchronous ? synchronousImplementation : implementation;
  if (cached) return cached;
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const windows = process.platform === 'win32';
  const libc = ffi.load(windows ? 'ucrtbase.dll' : process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
  const bind = (name, result, args) => libc.func(name, result, args);
  const fdopen = bind(windows ? '_fdopen' : 'fdopen', 'void *', ['int', 'str']);
  const openFile = windows ? libc.func('int _wsopen_s(_Out_ int *fd, str16 path, int flags, int sharing, int mode)')
    : libc.func('int open(str path, int flags, ...)');
  const dup = bind(windows ? '_dup' : 'dup', 'int', ['int']);
  const closeFd = bind(windows ? '_close' : 'close', 'int', ['int']);
  const fcntl = windows ? null : libc.func('int fcntl(int fd, int command, ...)');
  const pipe = windows ? libc.func('int _pipe(_Out_ int *fds, uint size, int mode)')
    : libc.func('int pipe(_Out_ int *fds)');
  const fclose = bind('fclose', 'int', ['void *']);
  // Discard buffered IO while the FILE still owns its descriptor. Closing the
  // descriptor first would let another host thread reuse it before fclose.
  // Windows has no corresponding documented CRT primitive; its embedded
  // forced-exit buffer-discard behavior remains an explicit compatibility gap.
  const purge = windows ? null : bind(process.platform === 'darwin' ? 'fpurge' : '__fpurge',
    process.platform === 'darwin' ? 'int' : 'void', ['void *']);
  const fileno = bind(windows ? '_fileno' : 'fileno', 'int', ['void *']);
  const fread = bind('fread', 'size_t', ['void *', 'size_t', 'size_t', 'void *']);
  const fwrite = bind('fwrite', 'size_t', ['void *', 'size_t', 'size_t', 'void *']);
  const fflush = bind('fflush', 'int', ['void *']);
  const forceExit = bind('_Exit', 'void', ['int']);
  const setvbuf = bind('setvbuf', 'int', ['void *', 'void *', 'int', 'size_t']);
  const fseek = bind(windows ? '_fseeki64' : 'fseeko', 'int', ['void *', 'int64_t', 'int']);
  const ftell = bind(windows ? '_ftelli64' : 'ftello', 'int64_t', ['void *']);
  const ftruncate = bind(windows ? '_chsize_s' : 'ftruncate', 'int', ['int', 'int64_t']);
  const ferror = bind('ferror', 'int', ['void *']);
  const feof = bind('feof', 'int', ['void *']);
  const clearerr = bind('clearerr', 'void', ['void *']);
  const isatty = bind(windows ? '_isatty' : 'isatty', 'int', ['int']);
  const strerror = bind('strerror', 'str', ['int']);
  const uname = process.platform === 'linux' ? bind('uname', 'int', ['void *']) : null;
  const systemRead = process.platform === 'linux' ? bind('read', 'intptr_t', ['int', 'void *', 'size_t']) : null;
  const sysinfo = process.platform === 'linux' ? bind('sysinfo', 'int', ['void *']) : null;
  const getpagesize = process.platform === 'linux' ? bind('getpagesize', 'int', []) : null;
  const free = bind('free', 'void', ['void *']);
  const realpath = windows ? null : bind('realpath', 'void *', ['str', 'void *']);
  const unlink = windows ? null : bind('unlink', 'int', ['str']);
  const mkdtemp = windows ? null : bind('mkdtemp', 'void *', ['void *']);
  const mkstemp = windows ? null : bind('mkstemp', 'int', ['void *']);
  let mkostemp;
  if (!windows) {
    // Match libuv's optional lookup and fallback on older POSIX hosts.
    try { mkostemp = bind('mkostemp', 'int', ['void *', 'int']); } catch { /* use mkstemp */ }
  }
  const strlen = windows ? null : bind('strlen', 'size_t', ['void *']);
  // A JavaScript string has already decoded malformed UTF-8. Keep environment
  // bytes intact until Lean applies its own lossy decoder, or a child inherits
  // them. Read the current environ pointer after every possible setenv.
  const getenv = windows ? null : bind('getenv', 'void *', ['str']);
  const setenv = windows ? null : bind('setenv', 'int', ['str', 'str', 'int']);
  const unsetenv = windows ? null : bind('unsetenv', 'int', ['str']);
  const environ = windows ? null : process.platform === 'darwin'
    ? bind('_NSGetEnviron', 'void *', []) : libc.symbol('environ');
  const environmentPointer = () => ffi.decode(typeof environ === 'function' ? environ() : environ, 'void *');
  const copyCString = pointer => Buffer.from(new Uint8Array(ffi.view(pointer, Number(strlen(pointer)))));
  function environmentValue(name, original) {
    // Bun keeps process.env updates in an engine-owned map. Preserve original
    // bytes while its JS value is unchanged, and honor subsequent JS edits.
    if (!process.versions.bun) return original;
    const value = process.env[name];
    if (value === undefined) return undefined;
    return original?.toString() === value ? original : Buffer.from(value);
  }
  const scanDirectory = windows ? null : libc.func('int scandir(str path, _Out_ void **entries, void *filter, void *compare)');
  const accessAt = windows ? null : libc.func('int faccessat(int directory, str path, int mode, int flags)');
  const getdelim = windows ? null : libc.func('intptr_t getdelim(_Inout_ void **line, _Inout_ size_t *capacity, int delimiter, void *stream)');
  const groupRecord = windows ? null : ffi.struct({ name: 'str', password: 'str', gid: 'uint32_t', members: 'void *' });
  const getGroup = windows ? null : libc.func('getgrgid_r', 'int', ['uint32_t', ffi.out(ffi.pointer(groupRecord)), 'void *', 'size_t', ffi.out(ffi.pointer('void *'))]);
  const fgetc = bind('fgetc', 'int', ['void *']);
  const codes = Object.fromEntries(Object.entries(ffi.os.errno).map(([name, number]) => [number, name]));
  function failure(errno = ffi.errno()) {
    return Object.assign(new Error(strerror(errno)), { code: codes[errno], errno, nativeMessage: true, errorOrigin: 'crt' });
  }
  const fromNodeError = error => failure(ffi.os.errno[error.code] ?? ffi.os.errno.EIO);
  function directoryBuffer(bytes) {
    // Lean passes PATH_MAX bytes to libuv, including the terminating NUL.
    // Check before removing a trailing separator, as libuv does.
    if (bytes.length >= (process.platform === 'darwin' ? 1024 : 4096)) {
      const errno = ffi.os.errno.ENOBUFS;
      throw Object.assign(failure(errno), { errno: -errno, nativeMessage: false });
    }
    return bytes;
  }
  // Capture errno in the callback, before another asynchronous result can
  // overwrite the calling thread's errno. Koffi propagates the worker's errno.
  const call = synchronous ? async (fn, ...args) => {
    const value = fn(...args);
    return { value, errno: ffi.errno() };
  } : (fn, ...args) => new Promise((resolve, reject) => fn.async(...args, (error, value) => {
    const errno = ffi.errno();
    if (error) reject(error); else resolve({ value, errno });
  }));
  const checked = async (fn, ...args) => {
    const result = await call(fn, ...args);
    if (result.value < 0) throw failure(result.errno);
    return result.value;
  };
  let lock, terminal = file => !!isatty(file.fd);
  if (windows) {
    const kernel = ffi.load('kernel32.dll');
    const handle = bind('_get_osfhandle', 'intptr_t', ['int']);
    const lockFile = kernel.func('int __stdcall LockFileEx(intptr_t, uint32_t, uint32_t, uint32_t, uint32_t, void *)');
    const unlockFile = kernel.func('int __stdcall UnlockFileEx(intptr_t, uint32_t, uint32_t, uint32_t, void *)');
    const getError = kernel.func('uint32_t __stdcall GetLastError()');
    const consoleMode = kernel.func('int __stdcall GetConsoleMode(intptr_t handle, _Out_ uint32_t *mode)');
    terminal = file => !!consoleMode(handle(file.fd), [0]);
    lock = (stream, exclusive, attempt, unlock) => {
      const overlapped = Buffer.alloc(32);
      const fn = unlock ? unlockFile : lockFile;
      const args = unlock ? [handle(fileno(stream)), 0, 0xffffffff, 0xffffffff, overlapped]
        : [handle(fileno(stream)), (exclusive ? 2 : 0) | (attempt ? 1 : 0), 0, 0xffffffff, 0xffffffff, overlapped];
      // Every acquisition uses FAIL_IMMEDIATELY; waiting is implemented below.
      // GetLastError must be read on the same thread as LockFileEx.
      const value = fn(...args), result = { value, code: value ? 0 : getError() };
      if (result.value || unlock && result.code === 158) return true;
      if (attempt && result.code === 33) return false;
      // Native Lean reports LockFileEx errors as IO.userError containing the
      // Windows error number, rather than decoding them as POSIX errno.
      throw Object.assign(new Error(String(result.code)), { leanUserError: true });
    };
  } else {
    const flock = bind('flock', 'int', ['int', 'int']);
    lock = (stream, exclusive, attempt, unlock) => {
      const value = flock(fileno(stream), unlock ? 8 : (exclusive ? 2 : 1) | (attempt ? 4 : 0));
      const result = { value, errno: ffi.errno() };
      if (result.value === 0) return true;
      if (attempt && result.errno === ffi.os.errno.EWOULDBLOCK) return false;
      throw failure(result.errno);
    };
  }
  const adapter = {
    systemInformation() {
      if (!uname) throw failure(ffi.os.errno.ENOSYS);
      // Linux's UTS ABI has six 65-byte fields on both supported architectures.
      // Preserve the native release/version distinction and machine spelling;
      // an engine's node:os compatibility layer can change those values.
      const bytes = Buffer.alloc(6 * 65);
      if (uname(bytes) < 0) {
        const errno = ffi.errno();
        throw Object.assign(failure(errno), { errno: -errno, nativeMessage: false });
      }
      return [0, 2, 3, 4].map(index => {
        const field = bytes.subarray(index * 65, (index + 1) * 65);
        const end = field.indexOf(0);
        if (end < 0) throw new Error('Invalid native uname field');
        return field.subarray(0, end);
      });
    },
    readSystemFile(path, capacity) {
      // libuv uv__slurp: one bounded read, retry EINTR, then append a NUL.
      // These private calls read only small procfs/cgroup metadata files.
      if (!systemRead) throw new Error('Linux system files are unavailable');
      if (!Number.isInteger(capacity) || capacity < 1 || capacity > 4096)
        throw new RangeError('Invalid system-file buffer capacity');
      const fd = openFile(Buffer.concat([path, Buffer.from([0])]), 0x80000 /* O_CLOEXEC */);
      if (fd < 0) return undefined;
      try {
        const bytes = Buffer.alloc(capacity);
        let length;
        do { length = Number(systemRead(fd, bytes, capacity - 1)); }
        while (length === -1 && ffi.errno() === ffi.os.errno.EINTR);
        return length < 0 ? undefined : bytes.subarray(0, length);
      } finally {
        if (closeFd(fd) < 0) {
          const errno = ffi.errno();
          if (errno !== ffi.os.errno.EINTR && errno !== ffi.os.errno.EINPROGRESS) throw failure(errno);
        }
      }
    },
    systemMemoryInfo() {
      if (!sysinfo) throw new Error('Linux sysinfo is unavailable');
      // Linux x64/ARM64 struct sysinfo: unsigned long is 64 bits; the trailing
      // memory unit is uint32 at offset 104 and the complete struct is 112 bytes.
      const bytes = Buffer.alloc(112);
      if (sysinfo(bytes) !== 0) return { total: 0n, free: 0n };
      const unit = BigInt(bytes.readUInt32LE(104));
      return { total: BigInt.asUintN(64, bytes.readBigUInt64LE(32) * unit),
        free: BigInt.asUintN(64, bytes.readBigUInt64LE(40) * unit) };
    },
    pageSize() {
      if (!getpagesize) throw new Error('Linux page size is unavailable');
      return BigInt(getpagesize());
    },
    homeDirectory() {
      if (windows) return Buffer.from(homedir());
      // An empty HOME is present. Only an absent value uses the passwd entry.
      return directoryBuffer(adapter.environmentValue('HOME')
        ?? Buffer.from(userInfo({ encoding: 'buffer' }).homedir));
    },
    temporaryDirectory() {
      if (windows) return Buffer.from(tmpdir());
      let bytes;
      for (const name of ['TMPDIR', 'TMP', 'TEMP', 'TEMPDIR']) {
        bytes = adapter.environmentValue(name);
        if (bytes !== undefined) break;
      }
      bytes = directoryBuffer(bytes ?? Buffer.from(process.platform === 'android' ? '/data/local/tmp' : '/tmp'));
      return bytes.length > 1 && bytes[bytes.length - 1] === 47 ? bytes.subarray(0, -1) : bytes;
    },
    environmentValue(name) {
      if (windows) {
        const value = process.env[name];
        return value === undefined ? undefined : Buffer.from(value);
      }
      const pointer = getenv(name);
      return environmentValue(name, pointer ? copyCString(pointer) : undefined);
    },
    setEnvironment(name, value) {
      if (setenv && setenv(name, value, 1) < 0) {
        const errno = ffi.errno();
        throw Object.assign(failure(errno), { errno: -errno, nativeMessage: false });
      }
      process.env[name] = value;
    },
    unsetEnvironment(name) {
      if (unsetenv && unsetenv(name) < 0) {
        const errno = ffi.errno();
        throw Object.assign(failure(errno), { errno: -errno, nativeMessage: false });
      }
      delete process.env[name];
    },
    environmentEntries() {
      if (windows) return Object.entries(process.env).map(([key, value]) => [Buffer.from(key), Buffer.from(value)]);
      const pointer = environmentPointer(), entries = [];
      for (let i = 0; pointer; i++) {
        const item = ffi.decode(pointer, i * ffi.sizeof('void *'), 'void *');
        if (!item) break;
        const bytes = copyCString(item), separator = bytes.indexOf(61);
        if (separator >= 0) entries.push([bytes.subarray(0, separator), bytes.subarray(separator + 1)]);
      }
      if (process.versions.bun) {
        const names = new Set();
        for (let i = entries.length - 1; i >= 0; i--) {
          const [key, original] = entries[i], name = key.toString();
          names.add(name);
          // A malformed key is still a valid POSIX name. Do not merge it with
          // a distinct key whose real bytes contain replacement characters.
          if (!Buffer.from(name).equals(key)) continue;
          const value = environmentValue(name, original);
          if (value === undefined) entries.splice(i, 1); else entries[i] = [key, value];
        }
        for (const [name, value] of Object.entries(process.env))
          if (!names.has(name) && value !== undefined) entries.push([Buffer.from(name), Buffer.from(value)]);
      }
      return entries;
    },
    error: failure,
    errno: name => ffi.os.errno[name],
    fromNodeError,
    // libc exit can destroy engine mutexes while its worker threads are live.
    // Flush CRT streams first, then let the engine coordinate normal shutdown.
    async exitProcess(code, force) {
      if (force) forceExit(code);
      await call(fflush, null);
      process.exit(code);
    },
    openDirectory(path) {
      if (process.platform !== 'linux') throw failure(ffi.os.errno.ENOSYS);
      const fd = openFile(path, 0x200000 /* O_PATH */ | 0x10000 /* O_DIRECTORY */ | 0x80000 /* O_CLOEXEC */);
      if (fd < 0) throw failure();
      return fd;
    },
    descriptorFlags(fd) {
      if (!fcntl) throw failure(ffi.os.errno.ENOSYS);
      const flags = fcntl(fd, 3 /* F_GETFL */);
      if (flags < 0) throw failure();
      return flags;
    },
    outOfMemory() { return failure(ffi.os.errno.ENOMEM); },
    strerror,
    async createTemporary(path, directory = false) {
      if (windows) throw failure(ffi.os.errno.ENOSYS);
      const bytes = Buffer.concat([Buffer.from(path), Buffer.from([0])]);
      let fd;
      try {
        if (directory) {
          const result = await call(mkdtemp, bytes);
          if (!result.value) throw failure(result.errno);
        } else {
          let result = mkostemp
            ? await call(mkostemp, bytes, process.platform === 'darwin' ? 0x1000000 : 0x80000)
            : { value: -1, errno: ffi.os.errno.EINVAL };
          if (result.value < 0 && result.errno === ffi.os.errno.EINVAL) {
            result = await call(mkstemp, bytes);
            if (result.value >= 0 && fcntl(result.value, 2, 'int', 1) < 0) {
              const error = failure(); closeFd(result.value); throw error;
            }
          }
          if (result.value < 0) throw failure(result.errno);
          fd = result.value;
        }
        const name = Buffer.from(bytes.subarray(0, bytes.indexOf(0)));
        if (directory) return { path: name };
        const file = adapter.openDescriptor(fd, 'r+');
        fd = undefined;
        return { path: name, file };
      } catch (error) {
        if (fd !== undefined) closeFd(fd);
        // These Lean operations use libuv's negative error numbers/messages,
        // unlike ordinary fopen/fread primitives, which expose libc errno.
        if (error.nativeMessage && error.errno > 0)
          throw Object.assign(error, { errno: -error.errno, nativeMessage: false });
        throw error;
      }
    },
    async checkDirectorySearch(path) {
      // chdir checks search permission with effective credentials, without
      // requiring read permission. The packaged host has an instance-local
      // cwd, so validate it without changing the JavaScript process's cwd.
      if (!accessAt) throw new Error('Directory search validation is POSIX-only');
      const darwin = process.platform === 'darwin';
      await checked(accessAt, darwin ? -2 : -100, path, constants.X_OK, darwin ? 0x10 : 0x200);
    },
    async readDirectory(path) {
      if (!scanDirectory) throw new Error('Native directory scanning is POSIX-only');
      // A null comparator preserves readdir order. Copy raw filename bytes
      // before freeing libc's records; Deno's opendir ignores encoding:buffer.
      const output = [null];
      const { value: count, errno } = await call(scanDirectory, path, output, null, null);
      if (count < 0) throw failure(errno);
      const names = [];
      try {
        for (let i = 0; i < count; i++) {
          const entry = ffi.decode(output[0], i * ffi.sizeof('void *'), 'void *');
          const size = ffi.decode(entry, 16, 'uint16_t');
          const record = Buffer.from(ffi.view(entry, size));
          const start = process.platform === 'darwin' ? 21 : 19;
          const end = record.indexOf(0, start);
          const name = Buffer.from(record.subarray(start, end < 0 ? size : end));
          if (!name.equals(Buffer.from('.')) && !name.equals(Buffer.from('..'))) names.push(name);
        }
      } finally {
        for (let i = 0; i < count; i++) free(ffi.decode(output[0], i * ffi.sizeof('void *'), 'void *'));
        free(output[0]);
      }
      return names;
    },
    async realPath(path) {
      if (!realpath) throw new Error('Native realpath is POSIX-only');
      // Let libc traverse symlinks before dot segments. Some engine filesystem
      // adapters normalize them first, including /proc/self/fd/N/.. on Bun.
      const { value, errno } = await call(realpath, path, null);
      if (!value) throw failure(errno);
      // Buffer.from(ArrayBuffer) aliases storage; copy through a typed array
      // before freeing the allocation and posting it back from this worker.
      try { return Buffer.from(new Uint8Array(ffi.view(value, Number(strlen(value))))); }
      finally { free(value); }
    },
    async removeFile(path) {
      if (!unlink) throw new Error('Native unlink is POSIX-only');
      // Engine adapters can implement unlink via a general remove operation,
      // which also deletes empty directories. Lean uses uv_fs_unlink instead.
      // Call the actual POSIX primitive, retaining libuv's errno convention.
      const { value, errno } = await call(unlink, path);
      if (value < 0) throw Object.assign(failure(errno), { errno: -errno, nativeMessage: false, errorOrigin: 'uv' });
    },
    async groupInfo(gid) {
      if (windows) throw Object.assign(failure(ffi.os.errno.ENOSYS), { errno: -ffi.os.errno.ENOSYS });
      for (let size = 1024; ; size *= 2) {
        const group = {}, buffer = Buffer.alloc(size), output = [null];
        const { value } = await call(getGroup, gid >>> 0, group, buffer, size, output);
        if (value === ffi.os.errno.ERANGE) continue;
        if (value) throw Object.assign(failure(value), { errno: -value });
        if (!output[0]) return null;
        const members = [];
        for (let i = 0; ; i++) {
          const pointer = ffi.decode(group.members, i * ffi.sizeof('void *'), 'void *');
          if (!pointer) break;
          members.push(ffi.decode(pointer, 'str'));
        }
        return { name: group.name, gid: group.gid, members };
      }
    },
    async open(path, mode, permissions = 0o666) {
      // Open and fdopen in the same C runtime. Windows CRT descriptors are not
      // interchangeable between libraries that maintain separate fd tables.
      let fd;
      if (windows) {
        const flags = [0, 1|0x100|0x200, 1|0x100|0x200|0x400, 2, 1|0x100|8, 2|0x100|0x400][mode];
        if (flags === undefined) throw failure(ffi.os.errno.EINVAL);
        const output = [-1];
        const { value } = await call(openFile, output, path, flags|0x8000|0x80, 0x40, permissions & 0o600);
        if (value) throw failure(value);
        fd = output[0];
      } else {
        const c = constants;
        const flags = [c.O_RDONLY, c.O_WRONLY|c.O_CREAT|c.O_TRUNC, c.O_WRONLY|c.O_CREAT|c.O_TRUNC|c.O_EXCL,
          c.O_RDWR, c.O_WRONLY|c.O_CREAT|c.O_APPEND, c.O_RDWR|c.O_CREAT|c.O_EXCL][mode];
        if (flags === undefined) throw failure(ffi.os.errno.EINVAL);
        // Node does not expose O_CLOEXEC on every supported OS.
        // open's mode is variadic: Darwin ARM64 passes it on the stack. Koffi
        // variadic calls are synchronous; ordinary IO reaches this adapter in
        // a dedicated native-file worker, including potentially blocking FIFOs.
        fd = openFile(path, flags | (process.platform === 'darwin' ? 0x1000000 : 0x80000), 'uint32_t', permissions);
        if (fd < 0) throw failure();
      }
      try { return adapter.openDescriptor(fd, ['r','w','w','r+','a','r+'][mode]); }
      catch (error) { closeFd(fd); throw error; }
    },
    pipe() {
      const fds = [0, 0];
      if ((windows ? pipe(fds, 4096, 0x8000 | 0x0080) : pipe(fds)) < 0) throw failure();
      if (!windows && fds.some(fd => fcntl(fd, 2, 'int', 1) < 0)) {
        const error = failure(); for (const fd of fds) closeFd(fd); throw error;
      }
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
      if (!windows && fcntl(owned, 2, 'int', 1) < 0) { const error = failure(); closeFd(owned); throw error; }
      return adapter.openDescriptor(owned, mode);
    },
    close(file, discardOutput = false) {
      const stream = file.stream;
      if (stream && discardOutput && purge && purge(stream) === -1) throw failure();
      file.stream = null;
      if (stream) fclose(stream);
    },
    async closeAsync(file, discardOutput = false) {
      const stream = file.stream;
      if (stream && discardOutput && purge && purge(stream) === -1) throw failure();
      file.stream = null;
      // fclose can flush a buffered pipe and wait for its reader. The full
      // runtime blocks only the calling Lean thread while this worker runs.
      // Like Lean's native handle finalizer, ignore fclose's return value.
      if (stream) await call(fclose, stream);
    },
    async read(file, count) {
      if (!count) return Buffer.alloc(0);
      let bytes;
      try { bytes = Buffer.allocUnsafe(count); } catch { throw failure(ffi.os.errno.ENOMEM); }
      const { value, errno } = await call(fread, bytes, 1, count, file.stream);
      if (value) return bytes.subarray(0, Number(value));
      // Lean checks EOF before the sticky error flag and clears both flags.
      if (feof(file.stream)) { clearerr(file.stream); return bytes.subarray(0, 0); }
      throw failure(errno);
    },
    async write(file, bytes) {
      if (!bytes.length) return;
      const { value, errno } = await call(fwrite, bytes, 1, bytes.length, file.stream);
      if (value !== bytes.length) throw failure(errno);
    },
    async flush(file) { await checked(fflush, file.stream); },
    unbuffer(file) {
      // _IONBF is 4 in the Windows CRT and 2 in the supported POSIX libcs.
      if (setvbuf(file.stream, null, windows ? 4 : 2, 0) !== 0) throw failure();
    },
    async rewind(file) { await checked(fseek, file.stream, 0, 0); },
    async truncate(file) {
      const position = ftell(file.stream);
      // Lean passes ftello's result to ftruncate even on a non-seekable stream.
      // Preserve the truncation error (EINVAL on Linux pipes), not the earlier
      // position-query error (ESPIPE).
      const { value, errno } = await call(ftruncate, file.fd, position);
      if (value !== 0) throw failure(windows ? value : errno);
    },
    async getLine(file) {
      // getdelim refuses to consume bytes when an earlier stream error is
      // still set. Lean's getc loop does consume them before checking ferror.
      if (getdelim && !ferror(file.stream)) {
        const pointer = [null], capacity = [0];
        try {
          const { value, errno } = await call(getdelim, pointer, capacity, 10, file.stream);
          if (ferror(file.stream)) throw failure(errno);
          // A final unterminated line can return bytes and also set EOF.
          // Clear it now, so subsequent reads can see newly appended data.
          if (feof(file.stream)) clearerr(file.stream);
          if (value >= 0) return Buffer.from(new Uint8Array(ffi.view(pointer[0], Number(value))));
          return Buffer.alloc(0);
        } finally { if (pointer[0]) free(pointer[0]); }
      }
      const bytes = [];
      let errno;
      for (;;) {
        const result = await call(fgetc, file.stream);
        const value = result.value;
        errno = result.errno;
        if (value < 0) break;
        bytes.push(value);
        if (value === 10) break;
      }
      if (ferror(file.stream)) throw failure(errno);
      if (feof(file.stream)) clearerr(file.stream);
      return Buffer.from(bytes);
    },
    isTty: terminal,
    async lock(file, exclusive, attempt = false, unlock = false) {
      // Blocking locks must not fill the FFI worker pool and prevent the holder
      // from flushing/unlocking. Retain real OS locks, yielding between attempts.
      for (;;) {
        if (file.cancelled) throw failure(ffi.os.errno.ECANCELED);
        const acquired = lock(file.stream, exclusive, true, unlock);
        if (acquired || attempt || unlock) return acquired;
        await new Promise(resolve => setTimeout(resolve, 5));
      }
    },
  };
  if (synchronous) return synchronousImplementation = adapter;
  const reference = file => ({ stream: file.stream, fd: file.fd });
  const buffer = bytes => Buffer.from(bytes.buffer, bytes.byteOffset, bytes.byteLength);
  implementation = { ...adapter,
    async open(...args) {
      return { ...await callNativeFile('open', args), tail: Promise.resolve() };
    },
    async createTemporary(...args) {
      const result = await callNativeFile('createTemporary', args);
      result.path = buffer(result.path);
      if (result.file) result.file.tail = Promise.resolve();
      return result;
    },
    async closeAsync(file, discardOutput = false) {
      const stream = file.stream;
      file.stream = null;
      if (stream) await callNativeFile('closeAsync', [{ stream }, discardOutput]);
    },
    async read(file, count) {
      if (!count) return Buffer.alloc(0);
      return buffer(await callNativeFile('read', [reference(file), count]));
    },
    async write(file, bytes) {
      if (bytes.length) await callNativeFile('write', [reference(file), bytes]);
    },
    async getLine(file) { return buffer(await callNativeFile('getLine', [reference(file)])); },
    async readDirectory(path) { return (await callNativeFile('readDirectory', [path])).map(buffer); },
    async realPath(path) { return buffer(await callNativeFile('realPath', [path])); },
    removeFile(path) { return callNativeFile('removeFile', [path]); },
    groupInfo(gid) { return callNativeFile('groupInfo', [gid]); },
    checkDirectorySearch(path) { return callNativeFile('checkDirectorySearch', [path]); },
  };
  for (const name of ['flush', 'rewind', 'truncate'])
    implementation[name] = file => callNativeFile(name, [reference(file)]);
  return implementation;
}
