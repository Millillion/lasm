import { constants } from 'node:os';
import { nativeSignals } from './native-signals.mjs';

// A directly deployed Lean main owns process termination. An engine's private
// debugger/crash-report hook is not Lean's default signal action. Existing JS/native
// application listeners retain their caller's policy; this is not a callable
// library initialization hook.
export function prepareApplicationSignals() {
  if (process.platform === 'win32') return;
  const name = process.versions.bun ? 'SIGABRT' : 'SIGUSR1', number = constants.signals[name];
  if (process.listenerCount(name)) return;
  const native = nativeSignals(), action = native.action(number), disposition = native.disposition(action);
  if (disposition === 'external') return;
  if (process.versions.deno) {
    // Prime Deno's signal registry before its delayed inspector subscription.
    // A later subscriber reuses that entry and does not install another handler.
    const listener = () => {};
    process.on(name, listener); process.off(name, listener);
  }
  if (disposition === 'engine') native.reset(number);
  else native.restore(number, action); // Preserve observed default/ignored state.
}
