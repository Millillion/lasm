// Starts an edge-profile Lean program: instantiates the Emscripten module from
// a precompiled WebAssembly.Module (Workers forbid compiling bytes at run
// time), attaches the pure-JS host and runs Lean's `main` (module initializers
// included). Resolves to the Emscripten module. Shared by every edge target
// and the browser loader (src/browser/).
import { createEdgeRuntimeHost } from './edge-host.mjs';

/** The C stack of every edge link (src/edge/edge-link.mjs edgeLinkSettings.stackMiB). */
export const edgeStackBytes = 1 << 20;
// How close to the end of the stack a stop still counts as its overflow.
const stackMargin = 4096;
// Where the stack-overflow message points (docs/EDGE.md's C stack item).
const stackDocs = 'https://github.com/Millillion/lasm/blob/main/docs/EDGE.md#stack';

/**
 * A trap with Lean's C stack pointer at or beyond the end of its stack (stack:
 * edge-pre.js stoppedStack) is a C-stack overflow. Nothing guards the stack in
 * linear memory, so it surfaces as whatever trap follows (usually "memory access
 * out of bounds"); this names it, as native Lean does. Otherwise undefined.
 */
export function stackOverflowCause(error, stack, size = edgeStackBytes) {
  if (!stack || typeof stack.top !== 'number' || typeof stack.pointer !== 'number') return undefined;
  // Unsigned: a pointer that went below address 0 wrapped to the top of memory.
  if ((stack.top - stack.pointer) >>> 0 < size - stackMargin) return undefined;
  return new Error(`Stack overflow: the program used all of its ${size / 1048576} MiB C stack (deep recursion?). See ${stackDocs}`, { cause: error });
}

/**
 * writers and exit: see createEdgeRuntimeHost. Module.lasmExitCode is main's result.
 * jspi: whether Lean's blocking waits may suspend (JSPI, where the engine has it);
 * false runs the same program without JSPI (the browser default).
 * context: the instance context of builtin modules that keep per-instance state
 * (they export lasmInstance(context); src/edge/builtin-modules.mjs): { target,
 * root, flags, hydrate, report }. Module.lasmDispose() runs their cleanups
 * (listeners, timers, sockets); it also runs when the instance stops.
 */
export async function startLean({ createProgram, wasmModule, env = {}, modules = {}, args = [], jspi = true, stdout, stderr, writers, exit, context = {} }) {
  let Module;
  const disposers = [];
  let disposed = false;
  const dispose = () => {
    if (disposed) return;
    disposed = true;
    for (const fn of disposers.splice(0).reverse()) { try { fn(); } catch (error) { (stderr ?? console.error)(`[lasm] cleanup failed: ${error?.message ?? error}`); } }
  };
  const instanceContext = { target: 'edge', root: null, flags: undefined, hydrate: false, report: error => console.error(error), ...context,
    onDispose(fn) { if (disposed) fn(); else disposers.push(fn); } };
  const instanceModules = {};
  for (const [name, value] of Object.entries(modules))
    instanceModules[name] = typeof value?.lasmInstance === 'function' ? value.lasmInstance(instanceContext) : value;
  const instance = await createProgram({
    lasmEdgeJspi: jspi, noInitialRun: true,
    // The C runtime's environment (edge-library.js $ENV__postset): read by
    // libc while the module instantiates, before main.
    lasmEnv: Object.fromEntries(Object.entries(env ?? {}).filter(([, value]) => typeof value === 'string')),
    print: stdout ?? (line => console.log(line)), printErr: stderr ?? (line => console.error(line)),
    // Synchronous instantiation (the module is already compiled), so startup
    // needs no promise turn in the Workers global scope.
    instantiateWasm(imports, done) {
      const instance = new WebAssembly.Instance(wasmModule, imports);
      done(instance, wasmModule);
      return instance.exports;
    },
  });
  Module = instance;
  const host = createEdgeRuntimeHost({ env, args, modules: instanceModules, stdout, stderr, writers, exit,
    notify: () => Module.lasmEdge.notify(), syncCall: (fn, payload) => Module.lasmEdge.syncCall(fn, payload) });
  Module.lasmEdge.attach(host);
  Module.lasmEdgeHost = host;
  Module.lasmContext = instanceContext;
  Module.lasmDispose = dispose;
  // IO.Process.exit where nothing can exit traps right after the host refused
  // it: the refusal, not the trap ("unreachable"), is why the instance stopped.
  // A C-stack overflow stops it with the trap that follows: the overflow is why.
  let overflow;
  const cause = error => host.exitRequested ?? (overflow ??= stackOverflowCause(error, Module.lasmEdge.stoppedStack)) ?? error;
  Module.lasmStopCause = cause;
  Module.lasmEdge.onStop(error => { host.js.stop(cause(error)); dispose(); (stderr ?? console.error)(`[lasm] the Lean instance stopped: ${cause(error).message}`); });
  try { Module.lasmExitCode = await Module.lasmEdge.main(args); } catch (error) { throw cause(error); }
  host.flush();
  return Module;
}
