import { createRequire } from 'node:module';
import { existsSync, readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';

let implementation;
export function nativeSignals() {
  if (implementation) return implementation;
  const require = createRequire(import.meta.url);
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const base = [new URL('./native/signals/', import.meta.url), new URL('../.cache/native-host/signals/', import.meta.url)]
    .find(path => existsSync(new URL('manifest.json', path)));
  if (!base) throw new Error('The bundled native signal adapter is missing');
  const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
  // An engine diagnostic report may query cwd and fail after removal or on
  // non-UTF-8 POSIX paths. Detect the loaded libc directly, without changing cwd.
  let abi = '';
  if (process.platform === 'linux') {
    abi = '-musl';
    try { libc.symbol('gnu_get_libc_version'); abi = '-gnu'; } catch { /* Linux musl */ }
  }
  const name = `${process.platform}-${process.arch}${abi}.${process.platform === 'darwin' ? 'dylib' : 'so'}`;
  const manifest = JSON.parse(readFileSync(new URL('manifest.json', base)));
  const path = fileURLToPath(new URL(name, base)), bytes = readFileSync(path);
  if (manifest.protocol !== 1 || manifest.files[name]?.sha256 !== createHash('sha256').update(bytes).digest('hex'))
    throw new Error('Native signal adapter integrity mismatch');
  const library = ffi.load(path);
  const open = library.func('void *lasm_signal_open(int number)');
  const wait = library.func('int lasm_signal_wait(void *subscription)');
  const stop = library.func('int lasm_signal_stop(void *subscription)');
  const free = library.func('void lasm_signal_free(void *subscription)');
  const strerror = libc.func('str strerror(int error)');
  const reset = library.func('int lasm_signal_default(int number)');
  const sigaction = libc.func('int sigaction(int number, const void *action, void *previous)');
  const infoType = ffi.struct({ file: 'str', base: 'void *', name: 'str', address: 'void *' });
  const dladdr = libc.func('dladdr', 'int', ['void *', ffi.out(ffi.pointer(infoType))]);
  const engine = {};
  if (!dladdr(libc.symbol('napi_get_version'), engine)) throw new Error('Cannot identify the engine signal-handler image');
  const failure = () => {
    const errno = ffi.errno();
    return Object.assign(new Error(strerror(errno)), { errno: -errno, nativeMessage: true,
      code: Object.entries(ffi.os.errno).find(([, value]) => value === errno)?.[0] ?? 'EIO' });
  };
  implementation = { open, stop, free, failure,
    action(number) {
      // The supported 64-bit POSIX sigaction ABIs start with the handler pointer;
      // this opaque buffer covers both Linux (152 bytes) and Darwin (16 bytes).
      const bytes = Buffer.alloc(256);
      if (sigaction(number, null, bytes)) throw failure();
      return bytes;
    },
    disposition(bytes) {
      const value = BigInt(ffi.decode(bytes, 'uintptr_t'));
      if (value === 0n) return 'default';
      if (value === 1n) return 'ignored';
      const info = {};
      return dladdr(ffi.decode(bytes, 'void *'), info) && info.base === engine.base ? 'engine' : 'external';
    },
    restore(number, bytes) { if (sigaction(number, bytes, null)) throw failure(); },
    reset(number) { if (reset(number)) throw failure(); },
    wait: pointer => new Promise((resolve, reject) => wait.async(pointer, (error, count) => {
      if (error) reject(error); else if (count < 0) reject(failure()); else resolve(count);
    })),
  };
  return implementation;
}
