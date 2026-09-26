// The pinned LLD map lists sections and symbols that survived --gc-sections.
// Follow the executable's real relocations, including initializers and closure
// tables; source-level imports cannot tell us whether an interpreter is used.
import { createReadStream } from 'node:fs';
import { createInterface } from 'node:readline';

const dynamicSymbols = ['lasm_lookup_lean_symbol', 'dlopen', 'dlsym', 'dlvsym',
  'emscripten_dlopen', 'emscripten_dlopen_promise'];
const entrypoints = ['main', '__main_argc_argv', '__main_void'];
function linkMapReader({ initializationFreeCppSymbols = new Set() } = {}) {
  const symbols = new Set(), cxx = new Set(), metadata = new Set();
  let header = false, code = false;
  return { line(line) {
    if (!header) {
      if (line.trim() !== 'Addr      Off     Size Out     In      Symbol')
        throw new Error('Unrecognized application linker map header');
      header = true; return;
    }
    if (!line.trim()) return;
    const row = /^\s*(?:[0-9a-f]+|-)\s+[0-9a-f]+\s+[0-9a-f]+\s+(.+)$/.exec(line);
    if (!row) throw new Error('Unrecognized application linker map row');
    if (row[1] === 'CODE') code = true;
    if (dynamicSymbols.includes(row[1]) || entrypoints.includes(row[1])) symbols.add(row[1]);
    if (/^lean_(?:read|write)_module_data(?:_\w+)?$/.test(row[1])
        || /^l_Lean_(?:findSysroot|initSearchPath)(?:___\w+)?$/.test(row[1])) metadata.add(row[1]);
    const member = /(?:^|[/\\])libleancpp\.a\(([^)]+)\):\((.+)\)$/.exec(row[1]);
    if (member) {
      const section = member[2];
      // Read-only constants arrive initialized in Wasm's data segments. RTTI
      // and vtables may be selected alongside a shared inline exception helper.
      // Keep mutable globals and every strong Lean C++ function conservative.
      const rtti = /^\.data\.rel\.ro\.(_ZT[IV][A-Za-z0-9_]+)$/.exec(section);
      const independent = /^\.rodata(?:\.|$)/.test(section)
        || (!section.startsWith('.') && initializationFreeCppSymbols.has(section))
        || rtti && initializationFreeCppSymbols.has(rtti[1]);
      if (!independent) cxx.add(member[1]);
    } else if (row[1].includes('libleancpp.a(')) {
      throw new Error('Unrecognized C++ section in application linker map');
    }
  }, finish() {
    if (!header || !code || !entrypoints.some(name => symbols.has(name)))
      throw new Error('Application linker map has no executable entry point');
    // These mechanisms can ask for a name computed at runtime, or load a plugin
    // whose imports are not available at build time. Keep the full authenticated
    // ABI and both symbol registries whenever any such mechanism is reachable.
    const dynamic = dynamicSymbols.filter(name => symbols.has(name));
    const moduleData = [...metadata].sort();
    const cxxRuntime = [...cxx].sort();
    return { mode: dynamic.length || cxxRuntime.length ? 'dynamic' : 'static', dynamic, cxxRuntime,
      moduleData, requiresModuleData: !!(dynamic.length || cxxRuntime.length || moduleData.length) };
  } };
}

export function applicationLinkRequirements(map, options) {
  const reader = linkMapReader(options);
  for (const line of map.trimEnd().split('\n')) reader.line(line);
  return reader.finish();
}

// Compiler-sized maps exceed 100 MB. Stream them and retain only capability
// evidence, rather than buffering every function name in the Node heap.
export async function readApplicationLinkRequirements(path, options) {
  const reader = linkMapReader(options), stream = createReadStream(path);
  const lines = createInterface({ input: stream, crlfDelay: Infinity });
  try { for await (const line of lines) reader.line(line); return reader.finish(); }
  finally { lines.close(); stream.destroy(); }
}

// This definition is used only for the reachability link. If it survives GC,
// that output is discarded and relinked with the complete runtime registry.
// It must never be present in a delivered static executable.
export const reachabilityRegistry = 'void *lasm_lookup_lean_symbol(const char *name) { (void)name; return 0; }\n';

// Audited Lean 4.34.1 runtime: initialize/init.cpp initializes the entire Lean
// compiler for *any* Lean import. runtime/init_module.cpp supplies the ordinary
// runtime on its own. Use that smaller initializer only when no stateful
// libleancpp code or data survives linking. Shared inline helpers are classified
// above. Otherwise relink with the untouched full initializer.
// An updated runtime must be reviewed before it can use this specialization.
export function canSpecializeInitialization(runtime) {
  return ['4034cb85407d75be21ba2cb1fb063065aebe7cef48bbd82543f759bb6d35a4cf',
    '4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d'].includes(runtime.identity);
}
export const selectiveInitialization = 'void lean_initialize_runtime_module(void);\n'
  + 'void __wrap_lean_initialize(void) { lean_initialize_runtime_module(); }\n';
