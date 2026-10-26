// Starts an edge-profile Lean program: instantiates the Emscripten module from
// a precompiled WebAssembly.Module (Workers forbid compiling bytes at run
// time), attaches the pure-JS host and runs Lean's `main` (module initializers
// included). Resolves to the Emscripten module. Shared by every edge target
// and the browser loader (src/browser/).
import { createEdgeRuntimeHost } from './edge-host.mjs';

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
  Module.lasmEdge.onStop(error => { host.js.stop(error); dispose(); (stderr ?? console.error)(`[lasm] the Lean instance stopped: ${error.message}`); });
  Module.lasmExitCode = await Module.lasmEdge.main(args);
  host.flush();
  return Module;
}
