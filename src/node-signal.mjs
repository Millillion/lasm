import { constants } from 'node:os';
import { numbers, cancellation } from './node-host.mjs';
import { leanAtLeast } from './lean-io-errors.mjs';

const names = { 1: 'SIGHUP', 2: 'SIGINT', 3: 'SIGQUIT', 6: 'SIGABRT', 15: 'SIGTERM', 28: 'SIGWINCH',
  5: 'SIGTRAP', 10: 'SIGUSR1', 12: 'SIGUSR2', 14: 'SIGALRM', 17: 'SIGCHLD', 18: 'SIGCONT',
  20: 'SIGTSTP', 21: 'SIGTTIN', 22: 'SIGTTOU', 23: 'SIGURG', 24: 'SIGXCPU', 25: 'SIGXFSZ',
  26: 'SIGVTALRM', 27: 'SIGPROF', 29: 'SIGIO', 31: 'SIGSYS' };
const cancelled = () => cancellation('Signal wait cancelled');

// Lean 4.36 (runtime/uv/signal.cpp): cancel releases only the pending promise
// and the signal keeps listening, so a signal that arrives before the next
// `next` is kept (a one-shot signal resolves a new promise; a repeating one
// marks it received). Earlier releases stop a cancelled one-shot signal and
// lose a repeating signal that arrives between waits.
export function createNodeSignals({ add, get, leanVersion = '4.32.0' }) {
  const keep = leanAtLeast(leanVersion, '4.36.0');
  function create(signum, repeating) {
    const supported = process.platform !== 'win32' || [1, 2, 3, 6, 15, 28].includes(signum);
    const name = supported ? names[signum] : undefined;
    const signal = { type: 'signal', name, repeating, phase: 'initial', generation: 0 };
    signal.fresh = () => {
      signal.generation++; signal.done = false;
      signal.promise = new Promise((resolve, reject) => { signal.resolve = resolve; signal.reject = reject; });
      signal.promise.catch(() => {});
    };
    const deliver = signal.deliver = () => { signal.done = true; signal.resolve(numbers(constants.signals[name])); };
    signal.listener = () => {
      if (signal.promise && !signal.done) deliver();
      else if (keep && repeating) signal.received = true;
      else if (keep && !signal.promise) { signal.fresh(); deliver(); }
      if (!repeating) { signal.unwatch(); signal.phase = 'finished'; }
    };
    signal.unwatch = () => {
      if (name) process.off(name, signal.listener);
      clearInterval(signal.keepAlive);
    };
    signal.start = () => {
      if (!name || constants.signals[name] === undefined)
        throw Object.assign(new Error('invalid argument'), { code: 'EINVAL', errno: -22 });
      process.on(name, signal.listener);
      // Node signal watchers are unreferenced. A Lean main awaiting a signal
      // must remain alive even when this is its only pending host operation.
      signal.keepAlive = setInterval(() => {}, 2_147_483_647);
      signal.fresh(); signal.phase = 'running';
    };
    signal.drop = () => {
      if (signal.promise && !signal.done) signal.reject(cancelled());
      signal.promise = undefined; signal.generation++;
    };
    signal.close = () => {
      signal.unwatch();
      signal.drop(); signal.phase = 'finished';
    };
    return signal;
  }
  return { dispatch(op, id, arg) {
    if (op === 160) return numbers(add(create(id, !!arg)));
    const signal = get(id, 'signal');
    switch (op) {
    case 161:
      if (signal.phase === 'initial') signal.start();
      else if (signal.repeating && signal.phase === 'running' && (!signal.promise || signal.done)) {
        signal.fresh();
        if (signal.received) { signal.received = false; signal.deliver(); }
      } else if (keep && signal.phase === 'running' && !signal.promise) signal.fresh();
      return numbers(signal.generation);
    case 162: return signal.promise ?? new Promise(() => {});
    case 163:
      if (signal.phase !== 'running') return numbers(0);
      signal.close(); return numbers(1);
    case 164:
      if (signal.phase !== 'running' || !signal.promise) return numbers(0);
      signal.drop();
      if (!signal.repeating && !keep) { signal.unwatch(); signal.phase = 'initial'; }
      return numbers(1);
    default: throw new Error(`Unknown Lean signal operation ${op}`);
    }
  } };
}
