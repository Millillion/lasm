// Starts an edge-profile Lean program (Phase 7.1 prototype): instantiates the
// Emscripten module from a precompiled WebAssembly.Module (Workers forbid
// compiling bytes at run time), attaches the pure-JS host and runs Lean's
// `main` (module initializers included). Resolves to the Emscripten module.
import { createEdgeRuntimeHost } from './edge-host.mjs';

export async function startLean({ createProgram, wasmModule, env = {}, modules = {}, args = [], jspi = true, stdout, stderr }) {
  let Module;
  const instance = await createProgram({
    lasmEdgeJspi: jspi, noInitialRun: true,
    print: stdout ?? (line => console.log(line)), printErr: stderr ?? (line => console.error(line)),
    // Synchronous: Workers reject asynchronous instantiation in the global scope.
    instantiateWasm(imports, done) {
      const instance = new WebAssembly.Instance(wasmModule, imports);
      done(instance, wasmModule);
      return instance.exports;
    },
  });
  Module = instance;
  const host = createEdgeRuntimeHost({ env, args, modules, stdout, stderr,
    notify: () => Module.lasmEdge.notify(), syncCall: (fn, payload) => Module.lasmEdge.syncCall(fn, payload) });
  Module.lasmEdge.attach(host);
  await Module.lasmEdge.main(args);
  host.flush();
  return Module;
}
