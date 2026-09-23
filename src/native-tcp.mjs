// Private POSIX socket setup. Keep the descriptor bound until it is handed to
// node:net; closing and rebinding would lose the port reservation and introduce
// a race. Stream IO remains on the engine's event loop after that handoff.
import { createRequire } from 'node:module';
import { existsSync, constants } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { getSystemErrorMessage, getSystemErrorName } from 'node:util';

const require = createRequire(import.meta.url);
let implementation;
export function nativeTcp() {
  if (implementation) return implementation;
  if (!['linux', 'darwin'].includes(process.platform)) return null;
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const darwin = process.platform === 'darwin';
  const libc = ffi.load(darwin ? '/usr/lib/libSystem.B.dylib' : null);
  const socket = libc.func('int socket(int, int, int)');
  const bind = libc.func('int bind(int, void *, uint32_t)');
  const listen = libc.func('int listen(int, int)');
  const connect = libc.func('int connect(int, void *, uint32_t)');
  const close = libc.func('int close(int)');
  const fcntl = libc.func('int fcntl(int fd, int command, ...)');
  const setOption = libc.func('int setsockopt(int, int, int, void *, uint32_t)');
  const getOption = libc.func('int getsockopt(int, int, int, void *, _Inout_ uint32_t *)');
  const getName = libc.func('int getsockname(int, void *, _Inout_ uint32_t *)');
  const getPeer = libc.func('int getpeername(int, void *, _Inout_ uint32_t *)');
  const parseIp = libc.func('int inet_pton(int, str, void *)');
  const formatIp = libc.func('str inet_ntop(int, void *, void *, uint32_t)');
  const poll = libc.func('int poll(void *, size_t, int)');
  const family6 = darwin ? 30 : 10, levelSocket = darwin ? 0xffff : 1;
  const error = (errno = ffi.errno()) => Object.assign(new Error(getSystemErrorMessage(-errno)),
    { code: getSystemErrorName(-errno), errno: -errno, nativeMessage: true });
  const checked = value => { if (value < 0) throw error(); return value; };
  const option = (fd, level, name, value) => {
    const data = Buffer.alloc(4); data.writeUInt32LE(value >>> 0);
    checked(setOption(fd, level, name, data, data.length));
  };
  function address({ host, port }) {
    const family = host.includes(':') ? family6 : 2;
    const bytes = Buffer.alloc(family === 2 ? 16 : 28);
    if (darwin) { bytes[0] = bytes.length; bytes[1] = family; }
    else bytes.writeUInt16LE(family);
    bytes.writeUInt16BE(port, 2);
    if (parseIp(family, host, bytes.subarray(family === 2 ? 4 : 8)) !== 1) throw error(ffi.os.errno.EINVAL);
    return { bytes, family };
  }
  function name(fd, peer) {
    const bytes = Buffer.alloc(128), size = [bytes.length];
    checked((peer ? getPeer : getName)(fd, bytes, size));
    const family = darwin ? bytes[1] : bytes.readUInt16LE();
    const host = formatIp(family, bytes.subarray(family === 2 ? 4 : 8), Buffer.alloc(64), 64);
    if (host === null) throw error();
    return { address: host, family: family === 2 ? 'IPv4' : 'IPv6', port: bytes.readUInt16BE(2) };
  }
  implementation = {
    error,
    create(target, settings) {
      const { family } = address(target), fd = checked(socket(family, 1, 0));
      let owned = true, descriptor = fd, pending;
      const live = () => { if (descriptor < 0) throw error(ffi.os.errno.EBADF); return descriptor; };
      const handle = {
        get fd() { return live(); },
        delayedError: null,
        transfer() { owned = false; return live(); },
        forget() { descriptor = -1; },
        close() {
          pending?.();
          if (owned && descriptor >= 0) close(descriptor);
          descriptor = -1;
        },
        bind(target) {
          const { bytes, family } = address(target);
          option(live(), levelSocket, darwin ? 4 : 2, 1); // SO_REUSEADDR
          if (family === family6) option(live(), 41, darwin ? 27 : 26, 0); // IPV6_V6ONLY
          if (bind(live(), bytes, bytes.length) < 0) {
            const failure = error();
            if (failure.code !== 'EADDRINUSE') {
              if (failure.code === 'EAFNOSUPPORT') throw error(ffi.os.errno.EINVAL);
              throw failure;
            }
            // libuv 1.48 defers EADDRINUSE from bind to name/listen/connect.
            handle.delayedError = failure;
          } else handle.delayedError = null;
        },
        name(peer = false) {
          if (handle.delayedError) throw handle.delayedError;
          return name(live(), peer);
        },
        listen(backlog) {
          if (handle.delayedError) throw handle.delayedError;
          checked(listen(live(), backlog | 0));
        },
        noDelay() { option(live(), 6, 1, 1); },
        keepAlive(enabled, delay) {
          option(live(), levelSocket, darwin ? 8 : 9, enabled ? 1 : 0);
          if (!enabled) return;
          // Match the pinned libuv's raw -1 for a zero delay on an open fd.
          if (!delay) throw error(1);
          option(live(), 6, darwin ? 0x10 : 4, delay);
          option(live(), 6, darwin ? 0x101 : 5, 1);
          option(live(), 6, darwin ? 0x102 : 6, 10);
        },
        connect(target) {
          if (pending) throw error(ffi.os.errno.EALREADY);
          if (handle.delayedError) return Promise.reject(handle.delayedError);
          const { bytes } = address(target);
          let result;
          do { result = connect(live(), bytes, bytes.length); } while (result < 0 && ffi.errno() === ffi.os.errno.EINTR);
          if (result === 0) return Promise.resolve();
          if (ffi.errno() !== ffi.os.errno.EINPROGRESS) throw error();
          return new Promise((resolve, reject) => {
            let timer;
            const finish = failure => { clearTimeout(timer); pending = null; failure ? reject(failure) : resolve(); };
            pending = () => finish(error(ffi.os.errno.ECANCELED));
            const ready = () => {
              try {
                const entry = Buffer.alloc(8); entry.writeInt32LE(live()); entry.writeInt16LE(4, 4); // POLLOUT
                const result = poll(entry, 1, 0);
                if (result < 0 && ffi.errno() !== ffi.os.errno.EINTR) throw error();
                if (result > 0) {
                  const value = Buffer.alloc(4);
                  checked(getOption(live(), levelSocket, darwin ? 0x1007 : 4, value, [4])); // SO_ERROR
                  return finish(value.readInt32LE() ? error(value.readInt32LE()) : undefined);
                }
                // Only a connecting socket is polled; connected stream IO is
                // handed to node:net, including its normal backpressure.
                timer = setTimeout(ready, 1);
              } catch (failure) { finish(failure); }
            };
            ready();
          });
        },
      };
      try {
        checked(fcntl(fd, 2, 'int', 1)); // F_SETFD, FD_CLOEXEC
        checked(fcntl(fd, 4, 'int', checked(fcntl(fd, 3)) | constants.O_NONBLOCK));
        if (settings.noDelay) handle.noDelay();
        // libuv retains the enable flag before fd creation, but uses 60 seconds
        // at stream-open time rather than retaining the earlier delay.
        if (settings.keepAlive?.[0]) handle.keepAlive(true, 60);
      } catch (failure) { handle.close(); throw failure; }
      return handle;
    },
  };
  return implementation;
}
