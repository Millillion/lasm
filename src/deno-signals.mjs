import { constants } from 'node:os';
import { nativeSignals } from './native-signals.mjs';

let active;
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
