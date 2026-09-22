import { createRequire } from 'node:module';
import { existsSync } from 'node:fs';
import { fileURLToPath } from 'node:url';

const require = createRequire(import.meta.url);
let implementation;

// The pinned release's libc++ system_clock uses microseconds. Preserve that
// conversion, including its platform-specific rounding before the Unix epoch.
export function posixWallTime(seconds, nanoseconds) {
  return (BigInt(seconds) * 1_000_000n + BigInt(nanoseconds) / 1000n) * 1000n;
}

export function windowsWallTime(fileTime) {
  return (BigInt(fileTime) - 116444736000000000n) / 10n * 1000n;
}

/** Private wall-clock bridge; independent from the monotonic IO clocks. */
export function nativeClock() {
  if (implementation) return implementation;
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  if (process.platform === 'win32') {
    const kernel = ffi.load('kernel32.dll');
    const read = kernel.func('void __stdcall GetSystemTimePreciseAsFileTime(_Out_ uint64_t *time)');
    implementation = { now() {
      const time = [0n];
      read(time);
      return windowsWallTime(time[0]);
    } };
  } else {
    const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
    const timespec = ffi.struct({ seconds: 'long', nanoseconds: 'long' });
    const read = libc.func('clock_gettime', 'int', ['int', ffi.out(ffi.pointer(timespec))]);
    const strerror = libc.func('strerror', 'str', ['int']);
    const codes = Object.fromEntries(Object.entries(ffi.os.errno).map(([name, value]) => [value, name]));
    implementation = { now() {
      const time = {};
      if (read(0 /* CLOCK_REALTIME on Linux/macOS */, time) !== 0) {
        const errno = ffi.errno();
        throw Object.assign(new Error(strerror(errno)), { errno, code: codes[errno] ?? 'EIO', nativeMessage: true });
      }
      return posixWallTime(time.seconds, time.nanoseconds);
    } };
  }
  return implementation;
}
