// Runtime initialization planning ("initializer pruning").
//
// A compiled Lean program runs the initializer of every module it imports,
// including modules that only provide tactics, elaborators, attributes or
// macros for compilation (Aesop, Qq, Lean's elaborator). Their initializers
// register those build-time features in Lean's environment registries, which
// keeps Lean's compiler and kernel reachable in the Wasm link.
//
// Lean 4.35 already separates runtime from compile-time initialization for
// module-system files: an executable whose Main is a `module` calls only
// `runtime_initialize_*`, and `meta import`ed modules are never initialized at
// run time. Lasm extends the same idea to every program by reachability.
// Each initializer function ("unit": `initialize_M`, `runtime_initialize_M` or
// `meta_initialize_M`) is wrapped with wasm-ld --wrap:
//   kept unit:    the wrapper calls the real initializer;
//   skipped unit: the wrapper only calls, in the original order, the
//                 initializers the real one calls (so every kept module is still
//                 initialized exactly once, in Lean's import order).
// A unit is kept when any Lean global it assigns (a nullary constant or an
// `initialize`/`builtin_initialize` result) is referenced by code that is live
// without it; this is iterated to a fixpoint with wasm-ld's own map. Closed
// terms are initialized lazily by Lean 4.35 and need no unit.
// A skipped unit's body must not reference any global that the delivered
// program can read (planInitializers checks this with one more probe link);
// otherwise every unit is kept, as before. The remaining difference from native
// Lean is that side effects of skipped initializers that are not visible through
// Lean globals (for example printing during initialization) do not happen. This
// matches upstream's `meta import` semantics.
import { createReadStream, existsSync, readFileSync } from 'node:fs';
import { createInterface } from 'node:readline';
import { wasmObjects } from './wasm-objects.mjs';

// Lean IO primitives with effects outside Lean's heap: console, files, processes,
// environment and exit. Allocation, references, tasks and clocks are excluded.
export const hasExternalEffect = name => /^(?:lean_get_(?:set_)?std(?:out|err|in)$|lean_io_prim_|lean_io_process_|lean_io_(?:exit|getenv|remove_file|remove_dir|create_dir|rename|app_path|current_dir|set_current_dir|read_dir|realpath|metadata|symlink_metadata|create_tempfile|create_tempdir|hard_link|chmod)\b|l_IO_(?:print|println|eprint|eprintln|FS_|Process_|setStdout|setStderr|setStdin|getStdout|getStderr|getStdin)|l_IO_appendLn|l_IO_appendToFile)/.test(name);
// A C function that is not part of Lean's runtime or generated code: typically a
// package's FFI (for example leansqlite registering its external classes).
export const isForeignFunction = name => !/^(?:lp?_|lean_|_lean_|(?:runtime_|meta_)?initialize_|__)/.test(name)
  && !['memcpy', 'memmove', 'memset', 'memcmp', 'strlen', 'abort'].includes(name);
export const isInitializerUnit = name => /^(?:runtime_|meta_)?initialize_[A-Za-z0-9_]+$/.test(name);
// Per-module guard flags and Lean 4.35's lazily initialized closed terms.
const ignoredData = name => /^_G_(?:runtime_|meta_)?initialized$/.test(name) || name.includes('___closed__')
  || name.endsWith('_once');

/** Initializer units of the given objects and archives: ordered initializer calls
 * and the data symbols each body references (the globals it assigns). */
export function initializerUnits(files, { graph } = {}) {
  const units = new Map();
  for (const { file, member, object } of wasmObjects(files)) {
    if (graph) {
      // Whole-program reference graph (definitions keyed by name; local symbols
      // by object), used only to attribute a shared global to skipped units.
      const key = index => { const symbol = object.symbols[index]; return symbol.local ? `${file}\0${member}\0${symbol.name}` : symbol.name; };
      for (const [index, references] of object.references) {
        const name = key(index);
        if (!graph.has(name)) graph.set(name, references.map(key));
      }
    }
    const defined = new Set(), definedData = new Set(), functions = new Map();
    for (const symbol of object.symbols) if (!symbol.undefined) (symbol.kind === 0 ? defined : symbol.kind === 1 ? definedData : new Set()).add(symbol.name);
    for (const [index, references] of object.references) functions.set(object.symbols[index].name, references);
    // Data a unit's body reaches through code in its own object (its initFns),
    // and whether that code calls a Lean IO primitive with an external effect.
    const reaches = name => {
      const seen = new Set([name]), pending = [name], result = new Set();
      let effects = false;
      while (pending.length) for (const reference of functions.get(pending.pop()) ?? []) {
        const symbol = object.symbols[reference];
        if (symbol.kind === 1) result.add(symbol.name);
        else if (symbol.kind === 0 && symbol.undefined && (hasExternalEffect(symbol.name) || isForeignFunction(symbol.name))) effects = true;
        else if (symbol.kind === 0 && !symbol.undefined && !isInitializerUnit(symbol.name) && !seen.has(symbol.name)) {
          seen.add(symbol.name); pending.push(symbol.name);
        }
      }
      return { data: result, effects };
    };
    for (const [index, references] of object.references) {
      const name = object.symbols[index].name;
      if (!isInitializerUnit(name) || object.symbols[index].local) continue;
      const calls = [], data = new Set(), initTargets = new Set();
      let afterInitFn = false;
      for (const reference of references) {
        const symbol = object.symbols[reference];
        if (symbol.kind === 0 && isInitializerUnit(symbol.name) && symbol.name !== name) calls.push(symbol.name);
        else if (symbol.kind === 0 && symbol.name.includes('_initFn')) afterInitFn = true;
        else if (symbol.kind === 1 && !ignoredData(symbol.name) && definedData.has(symbol.name)) {
          // Lean's EmitC stores an `initialize`/`builtin_initialize` result right
          // after calling its initFn; nullary constants come from `_init_` code.
          data.add(symbol.name);
          if (afterInitFn) initTargets.add(symbol.name);
          afterInitFn = false;
        }
      }
      if (units.has(name)) throw new Error(`Lean initializer ${name} is defined twice (${units.get(name).file}, ${file})`);
      const reached = reaches(name);
      units.set(name, { name, calls, data: [...data], initTargets: [...initTargets], reaches: reached.data, effects: reached.effects,
        file, member, siblings: defined });
    }
  }
  return units;
}

/** Units reachable from the roots through initializer calls, in first-visit order. */
export function initializerClosure(units, roots) {
  const seen = new Set(), order = [];
  const visit = name => {
    if (seen.has(name) || !units.has(name)) return;
    seen.add(name); order.push(name);
    for (const call of units.get(name).calls) visit(call);
  };
  for (const root of roots) visit(root);
  return order;
}

/** C wrappers for every unit in the closure. `mode` 'plan' wraps kept units around
 * their real bodies and replaces the others with ordered call chains; 'bodies'
 * makes every wrapper a no-op and adds an entry that runs only the given bodies. */
export function initializerWrappers(units, closure, { keep, bodies } = {}) {
  const lines = ['// Generated by Lasm: runtime initialization plan (src/application-initialization.mjs).',
    '#include <lean/lean.h>', '#include <stdbool.h>'];
  for (const name of closure) lines.push(`lean_object* __real_${name}(uint8_t);`, `lean_object* __wrap_${name}(uint8_t);`);
  for (const name of closure) {
    if (bodies) { lines.push(`lean_object* __wrap_${name}(uint8_t builtin) { (void)builtin; return lean_io_result_mk_ok(lean_box(0)); }`); continue; }
    if (keep.has(name)) { lines.push(`lean_object* __wrap_${name}(uint8_t builtin) { return __real_${name}(builtin); }`); continue; }
    lines.push(`lean_object* __wrap_${name}(uint8_t builtin) {`, '  static bool done = false;',
      '  if (done) return lean_io_result_mk_ok(lean_box(0));', '  done = true;', '  lean_object* res;');
    for (const call of units.get(name).calls) if (closure.includes(call))
      lines.push(`  res = __wrap_${call}(builtin); if (lean_io_result_is_error(res)) return res; lean_dec_ref(res);`);
    lines.push('  return lean_io_result_mk_ok(lean_box(0));', '}');
  }
  if (bodies) {
    // Replaces the program's own entry object (left out of this probe link).
    lines.push('int main(int argc, char **argv) {', '  (void)argc; (void)argv;');
    for (const name of bodies) lines.push(`  __real_${name}(1);`);
    lines.push('  return 0;', '}');
  }
  return lines.join('\n') + '\n';
}

/** Symbols that survived wasm-ld's garbage collection, from its -Map output. */
export async function readLiveSymbols(path) {
  const data = new Set(), code = new Set();
  const stream = createReadStream(path), lines = createInterface({ input: stream, crlfDelay: Infinity });
  let region = '', inputColumn;
  try {
    for await (const line of lines) {
      const row = /^\s*(?:[0-9a-f]+|-)\s+[0-9a-f]+\s+[0-9a-f]+( +)(\S.*)$/.exec(line);
      if (!row) continue;
      const column = row[1].length, text = row[2];
      // Output sections (CODE, DATA, CUSTOM(name)) and, inside DATA, output
      // segments (.rodata, .bss, em_lib_deps) share the first column.
      if (column === 1) { if (/^[A-Z]+(?:\(|$)/.test(text)) region = text.replace(/\(.*$/, ''); continue; }
      const input = /:\((.+)\)$/.exec(text);
      if (input) {
        inputColumn ??= column;
        if (region === 'CODE' && !input[1].startsWith('.')) code.add(input[1]);
        continue;
      }
      if (region === 'DATA' && inputColumn !== undefined && column > inputColumn) data.add(text);
    }
  } finally { lines.close(); stream.destroy(); }
  return { data, code };
}

/** Plan the initialization of a program. `probe(wrappersSource, wrapFlags, { bodies })`
 * links once and returns the map's live symbols. Returns the kept units, the
 * wrappers to link and diagnostics. */
/** Skipped units whose code (through any function) references one of the targets. */
export function unitsReaching(graph, candidates, targets) {
  const reverse = new Map();
  for (const [name, references] of graph) for (const reference of references) {
    let list = reverse.get(reference);
    if (!list) reverse.set(reference, list = []);
    list.push(name);
  }
  const seen = new Set(targets), pending = [...targets];
  while (pending.length) for (const caller of reverse.get(pending.pop()) ?? [])
    if (!seen.has(caller)) { seen.add(caller); pending.push(caller); }
  return candidates.filter(name => seen.has(name));
}

/** `initialize`/`builtin_initialize` results (the only Lean globals that can refer to
 * mutable state) in generated C: `l_x = lean_io_result_get_value(res);`. */
export function cInitTargets(source) {
  return [...source.matchAll(/^(lp?_[A-Za-z0-9_]+) = (?:lean_unbox\w*\()?lean_io_result_get_value\(res\)/gm)].map(match => match[1]);
}

/** The reviewed list for Lean's own libraries (scripts/initialization/InitTargets.lean). */
export function coreInitTargets(version) {
  const file = new URL(`./lean-init-targets-${version}.json`, import.meta.url);
  if (!existsSync(file)) return undefined;
  const list = JSON.parse(readFileSync(file, 'utf8'));
  if (list.lean !== version || !Array.isArray(list.initTargets)) throw new Error(`Invalid Lean initializer list for ${version}`);
  return list.initTargets.map(([symbol]) => symbol);
}

export async function planInitializers({ objects, archives, probe, log = () => {}, forceKeep, initTargets }) {
  const graph = new Map();
  const units = initializerUnits([...objects, ...archives], { graph });
  // The program's entry object: Lean's generated `main` calls its own module's initializer.
  const entry = [...units.values()].find(unit => !unit.member && ['main', '__main_argc_argv', '__main_void'].some(name => unit.siblings.has(name)));
  const roots = entry ? [...units.values()].filter(unit => unit.file === entry.file).map(unit => unit.name) : [];
  if (!roots.length) return undefined;
  const closure = initializerClosure(units, roots);
  const wrap = closure.map(name => `-Wl,--wrap=${name}`);
  const exclude = entry.file;
  let baseline;
  // An initializer of the program's own code (not the packaged Lean libraries)
  // that performs console, file, process or environment IO, or calls a package's
  // C function (C state is invisible to this analysis), always runs, as natively.
  const keep = new Set([...roots, ...closure.filter(name => !units.get(name).member && units.get(name).effects)]);
  // Maintainer diagnostics only: force-keep units whose names match.
  if (forceKeep) for (const name of closure) if (forceKeep.test(name)) keep.add(name);
  // Only `initialize` results can refer to mutable state (IO.Ref and similar);
  // nullary constants are immutable. Without a list, every assigned global counts.
  const mutable = initTargets ?? new Set(closure.flatMap(name => units.get(name).data));
  let live, skipped, shared = [];
  for (let attempt = 1; ; attempt++) {
    for (let round = 1; ; round++) {
      live = await probe(initializerWrappers(units, closure, { keep }), wrap);
      const added = closure.filter(name => !keep.has(name) && units.get(name).data.some(symbol => live.data.has(symbol)));
      log(`Initialization plan round ${round}: ${keep.size} kept, ${added.length} added`);
      if (!added.length) break;
      for (const name of added) keep.add(name);
    }
    skipped = closure.filter(name => !keep.has(name));
    if (!skipped.length) { shared = []; break; }
    // A skipped body must not reach an `initialize` result (IO.Ref and similar)
    // that the delivered program uses: that is how one module's initializer
    // registers something with another's (a plugin registry). Nullary constants
    // are immutable. C and C++ runtime tables are read-only or internal, and
    // Lean's C++ compiler/kernel state is rejected by the application policy.
    // Compare the skipped bodies alone with an empty program.
    const reached = await probe(initializerWrappers(units, closure, { bodies: skipped }), wrap, { bodies: true, exclude });
    baseline ??= await probe(initializerWrappers(units, closure, { bodies: [] }), wrap, { bodies: true, exclude });
    shared = [...reached.data].filter(symbol => mutable.has(symbol) && live.data.has(symbol) && !baseline.data.has(symbol));
    log(`Initialization plan: ${skipped.length} of ${closure.length} initializers skipped; ${shared.length} shared globals${shared.length ? ': ' + shared.slice(0, 40).join(' ') : ''}`);
    if (!shared.length) break;
    // Keep the units whose code uses such a global, then plan again.
    const culprits = unitsReaching(graph, skipped, shared);
    if (!culprits.length || attempt >= 8) break;
    for (const name of culprits) keep.add(name);
  }
  return { units, closure, keep, skipped, shared, wrap, live };
}
