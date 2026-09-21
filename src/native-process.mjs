import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { nativeFiles } from './native-files.mjs';
import { encodeProcessConfiguration, nativeProcessLauncher } from './process-launcher.mjs';

const require = createRequire(import.meta.url);
let implementation;

// Deno currently resolves and re-enters even an omitted, still-named cwd.
// Linux posix_spawn can inherit it without a new search-permission check.
// Only libc executes between its internal fork/vfork and exec: no JavaScript
// or FFI callback runs in the child of a multithreaded engine.
export function spawnInheritedProcess(command, args, descriptors, configuration, nativeLauncher = false) {
  if (process.platform !== 'linux') throw new Error('Native cwd inheritance is Linux-only');
  if (!implementation) {
    const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
    const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
    const libc = ffi.load(null);
    // Linux glibc and musl use this ABI on the supported x64/arm64 hosts.
    const actions = ffi.struct({ allocated: 'int', used: 'int', entries: 'void *', reserved: 'int[16]' });
    implementation = { ffi, libc, size: ffi.sizeof(actions),
      initialize: libc.func('int posix_spawn_file_actions_init(void *actions)'),
      destroy: libc.func('int posix_spawn_file_actions_destroy(void *actions)'),
      duplicate: libc.func('int posix_spawn_file_actions_adddup2(void *actions, int fd, int target)'),
      nullFile: libc.func('int posix_spawn_file_actions_addopen(void *actions, int fd, str path, int flags, uint32_t mode)'),
      spawn: libc.func('int posix_spawn(_Out_ int *pid, str path, void *actions, void *attributes, str *args, str *env)'),
      fcntl: libc.func('int fcntl(int fd, int command, int value)'),
      socketpair: libc.func('int socketpair(int domain, int type, int protocol, _Out_ int *fds)'),
      shutdown: libc.func('int shutdown(int fd, int direction)'),
      read: libc.func('intptr_t read(int fd, void *bytes, size_t count)'),
      write: libc.func('intptr_t write(int fd, const void *bytes, size_t count)'),
      wait: libc.func('int waitpid(int pid, _Out_ int *status, int options)'),
    };
  }
  const api = implementation, native = nativeFiles(), actions = Buffer.alloc(api.size);
  if (nativeLauncher) { command = nativeProcessLauncher(api.libc); args = []; }
  const bytes = nativeLauncher ? encodeProcessConfiguration(configuration)
    : Buffer.from(JSON.stringify({ ...configuration, awaitExec: true }));
  const checked = code => { if (code) throw native.error(code); };
  checked(api.initialize(actions));
  const owned = [];
  let input, output, pid;
  try {
    const transport = [-1, -1];
    if (api.socketpair(1 /* AF_UNIX */, 1 | 0x80000 /* SOCK_STREAM | SOCK_CLOEXEC */, 0, transport) < 0)
      throw native.error(api.ffi.errno());
    [input, output] = transport;
    const stdio = [...descriptors];
    stdio.splice(3, 0, input);
    for (const [index, descriptor] of stdio.entries()) {
      if (descriptor === 'ignore') {
        checked(api.nullFile(actions, index, '/dev/null', 2 /* O_RDWR */, 0));
      } else {
        // Duplicate above all destination slots first, including when a caller
        // has closed one of 0..4. File actions must never overwrite a source.
        const copy = api.fcntl(descriptor === 'inherit' ? index : descriptor,
          1030 /* F_DUPFD_CLOEXEC */, stdio.length);
        if (copy < 0) throw native.error(api.ffi.errno());
        owned.push(copy);
        checked(api.duplicate(actions, copy, index));
      }
    }
    const result = [0];
    checked(api.spawn(result, command, actions, null, [command, ...args, null], [null]));
    pid = result[0];
  } catch (error) {
    if (output !== undefined) native.closeDescriptor(output);
    throw error;
  } finally {
    api.destroy(actions);
    for (const fd of owned) native.closeDescriptor(fd);
    if (input !== undefined) native.closeDescriptor(input);
  }
  // A large environment must not block the event loop while the private
  // helper starts. Its reader needs no operation on this FFI worker pool.
  void (async () => {
    try {
      for (let offset = 0; offset < bytes.length;) {
        const { count, errno } = await new Promise((resolve, reject) =>
          api.write.async(output, bytes.subarray(offset), bytes.length - offset, (error, count) => {
            const errno = api.ffi.errno();
            if (error) reject(error); else resolve({ count: Number(count), errno });
          }));
        if (count < 0 && errno === api.ffi.os.errno.EINTR) continue;
        if (count <= 0) return;
        offset += count;
      }
      if (api.shutdown(output, 1 /* SHUT_WR */) < 0) return;
      // Keep only the private bootstrap handoff alive after Child is dropped.
      // The helper marks this socket close-on-exec, so EOF acknowledges exec
      // or an early failure without waiting for the user's child to finish.
      const ack = Buffer.alloc(1);
      for (;;) {
        const { count, errno } = await new Promise((resolve, reject) =>
          api.read.async(output, ack, ack.length, (error, count) => {
            const errno = api.ffi.errno();
            if (error) reject(error); else resolve({ count: Number(count), errno });
          }));
        if (count < 0 && errno === api.ffi.os.errno.EINTR) continue;
        if (count <= 0) break;
      }
    } catch { /* The child may exit/close its input before consuming it. */ }
    finally { native.closeDescriptor(output); }
  })();
  let timer, unreferenced = false, settled = false;
  const exit = new Promise((resolve, reject) => {
    const poll = () => {
      const status = [0], result = api.wait(pid, status, 1 /* WNOHANG */);
      if (result === pid) {
        settled = true;
        const signal = status[0] & 0x7f;
        resolve(signal ? 128 + signal : (status[0] >>> 8) & 0xff);
      } else if (result < 0 && api.ffi.errno() !== api.ffi.os.errno.EINTR) {
        settled = true; reject(native.error(api.ffi.errno()));
      } else {
        timer = setTimeout(poll, 5);
        if (unreferenced) timer.unref();
      }
    };
    timer = setTimeout(poll, 0);
  });
  // Child.wait reports a wait error; dropping a handle must not produce an
  // unhandled JavaScript rejection or keep the parent alive.
  exit.catch(() => {});
  return { pid, exit,
    kill(signal) { if (settled) return false; process.kill(pid, signal); return true; },
    unref() { unreferenced = true; timer.unref(); },
  };
}
