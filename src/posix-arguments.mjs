// Read the original byte vectors rather than reconstructing command-line flags
// from an engine's application-only argv. POSIX exec consumes these NUL strings.
export function originalArguments(ffi, libc) {
  if (process.platform === 'darwin') {
    const getCount = libc.func('void *_NSGetArgc()'), getVector = libc.func('void *_NSGetArgv()');
    const length = libc.func('size_t strlen(const void *)');
    const count = ffi.decode(getCount(), 'int');
    const vector = ffi.decode(getVector(), 'void *');
    return ffi.decode(vector, ffi.array('void *', count)).map(pointer =>
      Buffer.from(new Uint8Array(ffi.view(pointer, Number(length(pointer)) + 1))));
  }
  const open = libc.func('int open(str path, int flags, ...)');
  const read = libc.func('intptr_t read(int fd, void *bytes, size_t length)');
  const close = libc.func('int close(int fd)');
  const fd = open('/proc/self/cmdline', 0);
  if (fd < 0) throw new Error(`Cannot read original engine arguments: errno ${ffi.errno()}`);
  const chunks = [];
  try {
    for (;;) {
      const bytes = Buffer.alloc(4096), count = Number(read(fd, bytes, bytes.length));
      if (count < 0 && ffi.errno() === ffi.os.errno.EINTR) continue;
      if (count < 0) throw new Error(`Cannot read original engine arguments: errno ${ffi.errno()}`);
      if (count === 0) break;
      chunks.push(bytes.subarray(0, count));
    }
  } finally { close(fd); }
  const bytes = Buffer.concat(chunks), argv = [];
  let start = 0;
  for (let i = 0; i < bytes.length; i++) if (bytes[i] === 0) {
    argv.push(bytes.subarray(start, i + 1)); start = i + 1;
  }
  if (start !== bytes.length || argv.length < 2) throw new Error('Invalid original engine arguments');
  return argv;
}
