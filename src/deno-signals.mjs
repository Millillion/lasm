import { createRequire } from 'node:module';
import { existsSync, readFileSync } from 'node:fs';
import { constants } from 'node:os';
import { fileURLToPath } from 'node:url';
import { createHash } from 'node:crypto';

let implementation, active;
function nativeSignals() {
  if (implementation) return implementation;
  const require = createRequire(import.meta.url);
  const bundled = new URL('./native/node_modules/koffi/index.cjs', import.meta.url);
  const ffi = existsSync(bundled) ? require(fileURLToPath(bundled)) : require('koffi');
  const base = [new URL('./native/signals/', import.meta.url), new URL('../.cache/native-host/signals/', import.meta.url)]
    .find(path => existsSync(new URL('manifest.json', path)));
  if (!base) throw new Error('The bundled native signal adapter is missing');
  const abi = process.platform === 'linux' ? '-' + (process.report.getReport().header.glibcVersionRuntime ? 'gnu' : 'musl') : '';
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
  const libc = ffi.load(process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : null);
  const strerror = libc.func('str strerror(int error)');
  const failure = () => {
    const errno = ffi.errno();
    return Object.assign(new Error(strerror(errno)), { errno: -errno, nativeMessage: true,
      code: Object.entries(ffi.os.errno).find(([, value]) => value === errno)?.[0] ?? 'EIO' });
  };
  implementation = { open, stop, free, failure,
    wait: pointer => new Promise((resolve, reject) => wait.async(pointer, (error, count) => {
      if (error) reject(error); else if (count < 0) reject(failure()); else resolve(count);
    })),
  };
  return implementation;
}

// Deno 2.9.7's inspector subscribes to SIGUSR1 separately from JS listeners.
// Install the native route after process.on has registered Deno's dispatcher.
// Later inspector registration then reuses that dispatcher instead of replacing
// this route. Emit only the JS process event while Lean owns a subscription.
// Restore the previous OS handler when the last Lean subscription ends.
export function retainDenoUserSignal(name) {
  if (!process.versions.deno || process.platform === 'win32' || name !== 'SIGUSR1') return () => {};
  if (!active) {
    const native = nativeSignals(), pointer = native.open(constants.signals[name]);
    if (!pointer) throw native.failure();
    const state = active = { users: 0, closed: false, native, pointer };
    (async () => {
      try {
        while (!state.closed) {
          const count = await native.wait(pointer);
          if (!state.closed && !count) throw new Error('Native signal adapter closed unexpectedly');
          for (let i = 0; i < count && !state.closed; i++) process.emit(name, name);
        }
      } finally { native.free(pointer); }
    })().catch(error => {
      // Preserve an adapter failure as a real failure, never a fabricated signal
      // or a silently unresolved Lean promise.
      if (!state.closed) { state.closed = true; active = undefined; native.stop(pointer); native.free(pointer); }
      queueMicrotask(() => { throw error; });
    });
  }
  const state = active; state.users++;
  let released = false;
  return () => {
    if (released) return; released = true;
    if (--state.users) return;
    if (state.native.stop(state.pointer)) throw state.native.failure();
    state.closed = true;
    if (active === state) active = undefined;
  };
}
