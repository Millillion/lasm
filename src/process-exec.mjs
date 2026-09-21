// Private POSIX child entry point. execvp replaces this process, preserving the
// PID returned to Lean; no fork runs inside a multithreaded JavaScript engine.
import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

const require = createRequire(import.meta.url);
const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
const read = libc.func('intptr_t read(int fd, void *buffer, size_t size)');
const write = libc.func('intptr_t write(int fd, void *buffer, size_t size)');
const close = libc.func('int close(int fd)');
const fcntl = libc.func('int fcntl(int fd, int command, int value)');
const chdir = libc.func('int chdir(str path)');
const fchdir = libc.func('int fchdir(int fd)');
const setsid = libc.func('int setsid()');
const unsetenv = libc.func('int unsetenv(str key)');
const setenv = libc.func('int setenv(str key, str value, int overwrite)');
const execvp = libc.func('int execvp(str file, str *argv)');
const exit = libc.func('void _exit(int status)');

function diagnostic(text) {
  const bytes = Buffer.from(text);
  for (let offset = 0; offset < bytes.length;) {
    const count = write(2, bytes.subarray(offset), bytes.length - offset);
    if (count < 0 && ffi.errno() === ffi.os.errno.EINTR) continue;
    if (count <= 0) break;
    offset += count;
  }
}
try {
  // Deno's fs descriptor numbers are resource IDs. Use the inherited OS pipe
  // directly in every engine. Environment values never travel in argv.
  const chunks = [];
  for (;;) {
    const bytes = Buffer.alloc(64 * 1024), count = read(3, bytes, bytes.length);
    if (count < 0 && ffi.errno() === ffi.os.errno.EINTR) continue;
    if (count < 0) throw new Error(`configuration read failed: errno ${ffi.errno()}`);
    if (count === 0) break;
    chunks.push(bytes.subarray(0, count));
  }
  const options = JSON.parse(Buffer.concat(chunks).toString());
  if (options.awaitExec) {
    if (fcntl(3, 2 /* F_SETFD */, 1 /* FD_CLOEXEC */) < 0)
      throw new Error(`exec acknowledgement setup failed: errno ${ffi.errno()}`);
  } else close(3);
  // Runtime startup may mark these descriptors close-on-exec. Preserve the
  // original Lean stdin/stdout/stderr through the replacement executable.
  for (let fd = 0; fd < 3; fd++) {
    if (fcntl(fd, 2 /* F_SETFD */, 0) < 0) throw new Error(`stdio setup failed: errno ${ffi.errno()}`);
    // Node may also make stderr nonblocking during startup. Shell/C writers
    // then lose bytes at pipe capacity. Restore the pre-spawn status flags.
    if (fcntl(fd, 4 /* F_SETFL */, options.stdioFlags[fd]) < 0)
      throw new Error(`stdio flags restore failed: errno ${ffi.errno()}`);
  }
  for (const key of Object.keys(process.env)) unsetenv(key);
  for (const [key, value] of Object.entries(options.env)) setenv(key, value, 1);
  // An absolute cwd can recover from a removed/renamed parent directory.
  // Do not first try to enter the stale parent path in that case.
  const absolute = options.requestedCwd?.startsWith('/');
  const inheritedDirectory = options.directoryFd !== undefined;
  if (inheritedDirectory) {
    // This descriptor was duplicated into the child by spawn. It remains valid
    // after a directory rename/removal or after the parent exits.
    if (!absolute && !options.inheritProcessCwd && fchdir(4) < 0)
      throw new Error(`inherited cwd setup failed: errno ${ffi.errno()}`);
    close(4);
  }
  const directories = absolute || inheritedDirectory
    ? [options.requestedCwd] : [options.directory, options.requestedCwd];
  for (const directory of directories) {
    if (directory === undefined) continue;
    if (chdir(directory) < 0) {
      diagnostic(`could not change directory to ${directory}\n`);
      exit(255);
    }
  }
  if (options.setsid && setsid() < 0) throw new Error(`setsid failed: errno ${ffi.errno()}`);
  execvp(options.command, [options.command, ...options.args, null]);
  // Match Lean's POSIX child-side failure, including libc's PATH search and
  // executable-text fallback. Parent pipe/fork failures remain parent errors.
  diagnostic(`could not execute external process '${options.command}'\n`);
  exit(255);
} catch (error) {
  diagnostic(`Lasm process launcher: ${error.message}\n`);
  exit(125);
}
