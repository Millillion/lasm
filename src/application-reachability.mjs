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
    // whose imports are not available at build time. Record that requirement;
    // the application policy rejects it rather than shipping the full compiler.
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
// that output is discarded and the ahead-of-time application build is rejected.
// It must never be present in a delivered static executable.
export const reachabilityRegistry = 'void *lasm_lookup_lean_symbol(const char *name) { (void)name; return 0; }\n';

// Audited Lean 4.34.1 runtime: initialize/init.cpp initializes the entire Lean
// compiler for *any* Lean import. runtime/init_module.cpp supplies the ordinary
// runtime on its own. Use that smaller initializer only when no stateful
// libleancpp code or data survives linking. Shared inline helpers are classified
// above. Applications retaining compiler state are rejected by the policy.
// An updated runtime must be reviewed before it can use this specialization.
export function canSpecializeInitialization(runtime) {
  return ['4034cb85407d75be21ba2cb1fb063065aebe7cef48bbd82543f759bb6d35a4cf',
    '4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d',
    // Lean 4.35.0 (CI handoff node-runtime-inputs-38960639129): init.cpp's default
    // (non-LEAN_MINIMAL_CORE_INIT) path changed only in comments and
    // runtime/init_module.cpp is byte-identical to 4.34.1; libleancpp links the
    // default `initialize` object, not `initialize_minimal`.
    '7482333e0a70a6aee12a540e11a48f31fd56c86761e7b3477f4a46ae310f80d3',
    // Lean 4.35.0 (CI handoff node-runtime-inputs-39080448291, source f79ab96): only
    // lib/liblasmhost.a differs from the entry above, and within it only
    // node-async.cpp.o (lean_uv_tcp_send/lean_uv_udp_send borrow array parts with
    // lean_array_get_core). Every Init/Std/Lean/Lake/libleancpp archive, the
    // headers and exports.json are byte-identical, so no initialization path changed.
    '36cf596b617bea6e360a96321aff1e41b8e5c4ee20abdc7d8a7e474b9a5cc6e4',
    // Lean 4.35.0 (CI handoff node-runtime-inputs-39287146914, source d20932e): again
    // only lib/liblasmhost.a differs from the entry above, and within it only
    // node-async.cpp.o (one-call asynchronous start, op 94; batched completion poll,
    // op 95). That object only changes how host requests and completions are
    // exchanged and contains no initialization code. Every
    // Init/Std/Lean/Lake/libleancpp archive, the headers and exports.json are
    // byte-identical, so no initialization path changed.
    '84934c27498e0b97bd6e3d88253729704dc551aa8900f2fa4da919e9df40fcc4',
    // Lean 4.35.0 (CI build 39373118465, source 336d2d3, handoff fb3c0fe8…): adds
    // lib/libLeanExport.a (upstream's LeanExport library: the LeanExport root and
    // LeanExport.Basic/Json/Parse, ordinary Lean module objects whose initializers
    // run only when imported) and lists it in target.json (libraries,
    // standardModules 2538 → 2542, audit hash). Every other file, including all
    // Init/Std/Lean/Lake/libleancpp/libleanrt/liblasmhost archives, the headers,
    // exports.json and liblasmsymbols.a, is byte-identical to the entry above, so
    // no libleancpp initialization path changed.
    'd1b1394ce2df4f9af2624cbd9bcca2162ee051da6be60ec38b08119c33fbd981',
    // Lean 4.35.0 (CI build 39437915868, source 076f9e5, handoff e00eaaa3…): the
    // nonlinear-environment patch lets should_abort_on_nonlinearity() read
    // LEAN_ABORT_ON_NONLINEAR. Only lib/libleanrt.a and target.json (its hash and
    // the patch record) differ from the entry above; within libleanrt.a only
    // object.cpp.o, and within it only lean_copy_expand_array_nonlinear,
    // lean_copy_sarray_nonlinear, lean_copy_string_nonlinear and
    // lean_string_utf8_set (the getenv check and its panic path). Every other
    // function, including initialize_object/finalize_object, differs only by data
    // offsets of the added strings. The cold rebuild's Init/Std/Lean/LeanExport/
    // Lake/libleancpp/liblasmhost archives, headers, exports.json and
    // liblasmsymbols.a are byte-identical, so no initialization path changed.
    '7aa5028c6226405b322961b289f955043824a49c997bec3f3e262647c045557c',
    // Lean 4.35.0 without GMP (decision 5; CI build 40066905228, source c328a40,
    // handoff 6c985e0a…): USE_GMP=OFF selects Lean's own mpz/mpn code. The
    // Init/Std/Lean/LeanExport/Lake archives and liblasmsymbols.a are byte-identical
    // to the entry above (reused after header, patch and sampled-object checks),
    // as are liblasmhost.a and libuv.a; lib/libgmp.a is gone. In libleanrt.a only
    // mpz.cpp.o, object.cpp.o, compact.cpp.o and sharecommon.cpp.o changed; in
    // libleancpp.a only name, name_generator, ffi, module, num and print.cpp.o.
    // Their initialize_*/finalize_* functions (name, name_generator, num, print,
    // object) and object.cpp's static constructor disassemble identically apart
    // from code offsets; none gained a static constructor, and the libleancpp
    // members' data symbols are unchanged. init.cpp and init_module.cpp objects are
    // byte-identical, so no initialization path changed.
    '8b3e33e03df54e6125227b5d1d442fc8db072ffe1ea1dd3f3bf5df8707675562',
    // Lean 4.35.0 (CI build 40332716905, source e5eb6b9, handoff 17c98bbc…, patch
    // node-threads): only libleanrt's thread.cpp.o and liblasmhost's node-async.cpp.o
    // differ from the entry above (every other file except exports.json, which adds
    // _lasm_main_thread_is_current, is byte-identical). thread.cpp.o: lean_run_main
    // runs `main` on the calling thread and records it (lasm_main_thread_is_current);
    // node-async.cpp.o: initialize_libuv no longer starts the completion thread, which
    // starts with the first asynchronous request. Neither object has a static
    // constructor; no module initializer, init.cpp or init_module.cpp object changed,
    // so no Lean initialization path changed.
    '1b868b43e734e0ab3d67e53179522c8e248b91e5f2e1727d343c760370d1b4fb',
    // Lean 4.35.0 (CI build 40471483055, source 9f91d31, handoff d0809622…, standard
    // libraries reused): only libleanrt's event_loop.cpp.o (lean_uv_event_loop_alive
    // and _configure renamed lasm_original_*, overridden by the host bridge) and
    // liblasmhost's node-async.cpp.o (those two, cancel_call, release_cancelled)
    // differ from the entry above. Neither has a static constructor; no module
    // initializer, init.cpp or init_module.cpp object changed.
    '79968781629d674bc8b506b3050c367ebc14503c869bc45436244c49ee5aee02',
    // Lean 4.35.0 (CI build 40518682274, source af51365, handoff 0646c068…): only
    // liblasmhost's node-async.cpp.o differs (UDP receives use the startup check).
    '9921c696161a9852442863a19e16990f2d540aa369adaa353906504bb589649a'].includes(runtime.identity);
}
export const selectiveInitialization = 'void lean_initialize_runtime_module(void);\n'
  + 'void __wrap_lean_initialize(void) { lean_initialize_runtime_module(); }\n';
