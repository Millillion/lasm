// The edge link (Phase 7, docs/EDGE.md): the Node build's application objects
// and initializer plan, relinked without threads as an ES module for isolates.
// Differences from src/application-link.mjs: wasm64 code lowered to 32-bit
// memory (-sMEMORY64=2), no -pthread/PROXY_TO_PTHREAD/MAIN_MODULE, the
// single-threaded runtime archives (edge-runtime.mjs), 4 MiB initial memory
// with growth and a 1 MiB C stack, JSPI with the event pump and `main` as the
// only promising exports, and the edge host glue (edge-pre.js, edge-library.js,
// lasm_js_edge.c). Engines without JSPI (Supabase's edge runtime) get the
// Asyncify link instead (suspend 'asyncify'): Binaryen's asyncify pass, with
// the suspending import list limited to the host's one wait (lasm_edge_wait). The Node link driver replays it from its recording
// (src/link-driver/recipe-emscripten-<version>-edge.json, byte-identical to
// emcc's output: scripts/edge/compare-edge-link.mjs); emcc remains the fallback.
import { readFileSync, writeFileSync, mkdirSync, existsSync } from 'node:fs';
import { basename, join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { executableName } from '../platform.mjs';
import { linkWithNode, bundledNativeSigs, linkTemporaryDirectory, removeTemporary } from '../link-driver/link.mjs';
import { liveMembers, memberFiles, wasmImports } from '../application-live-members.mjs';
import { compileObject } from '../link-driver/compile.mjs';
import { compactInitializerWrappers } from './edge-initializers.mjs';

let recipeCache;
/** The Node link driver's recording of the edge link (scripts/edge/derive-edge-recipe.mjs). */
export function edgeRecipe() {
  return recipeCache ??= JSON.parse(readFileSync(new URL('../link-driver/recipe-emscripten-6.0.9-edge.json', import.meta.url), 'utf8'));
}

/** How Lean's blocking waits suspend: JSPI (every engine that has it), Asyncify
 * (engines without JSPI), or not at all (blocking waits stop the instance). */
export const edgeSuspendModes = Object.freeze(['jspi', 'asyncify', 'none']);
/** The recipe mode that records each suspension's link (none: not recorded). */
export const edgeRecipeMode = suspend => ({ jspi: 'edge', asyncify: 'edge-asyncify' })[suspend];
/** Whether the Node link driver has a recording of this suspension's link. */
export const edgeRecipeHas = (suspend, recipe = edgeRecipe()) => !!recipe.link.modes[edgeRecipeMode(suspend)];
// The Asyncify data buffer that holds Lean's unwound stack while it waits.
export const asyncifyStackBytes = 1 << 20;

const here = fileURLToPath(new URL('./', import.meta.url));
const readResponse = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));

/** Edge link settings, part of the edge build's identity. */
export const edgeLinkSettings = Object.freeze({ memory64: 2, initialMiB: 4, stackMiB: 1, maximumMiB: 2048, malloc: 'mimalloc', optimize: '-Oz' });

/** linkWork: the Node build's kept link directory (link.rsp, objects, exports.json). */
/** optimize false (dev profile): Binaryen runs only the passes the program
 * needs (memory64 lowering, Asyncify; no -Oz) and the JavaScript dead-code
 * passes are skipped; the Node link driver only. */
/** `members` (dev, src/application-live-members.mjs): { record, directory,
 * save(record) }: link with the archive members the previous full edge link of
 * this program kept, accepted when the program imports nothing new. */
export function linkEdgeProgram({ sdk, nodeRuntime, edge, linkWork, out, suspend = 'jspi', verbose = false, driver = sdk.toolchain ? 'node' : 'emcc', optimize = true, stepCache, members }) {
  if (!edgeSuspendModes.includes(suspend)) throw new Error(`Unknown edge suspension ${JSON.stringify(suspend)}`);
  const s = edgeLinkSettings;
  const rsp = readResponse(join(linkWork, 'link.rsp'));
  const nm = file => execFileSync(join(sdk.prefix, 'bin', executableName('llvm-nm')), ['--defined-only', '--just-symbol-name', file],
    { encoding: 'utf8', maxBuffer: 64 << 20, windowsHide: true });
  // Application objects and initializer wraps; Lasm.JS's Node glue (the object
  // defining lasm_js_available) is replaced by the edge glue.
  // A seeded dev link (src/application-link.mjs) also lists the lookup marker
  // object reachability.o, which the edge program never contains, and the Node
  // runtime's members (application-live-members.mjs) in place of its archives.
  const kept = rsp.filter(arg => arg.endsWith('.o') && basename(arg) !== 'reachability.o' && !arg.endsWith('.lasm-member.o') || arg.startsWith('-Wl,--wrap='));
  let objects = kept.filter(arg => !(arg.endsWith('.o') && /^lasm_js_available$/m.test(nm(arg))));
  const usesJs = objects.length !== kept.length;
  mkdirSync(out, { recursive: true });
  const stdio = verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'];
  const env = { ...sdk.env, EMCC_CORES: '1' };
  // Lasm.JS's edge glue: precompiled in the edge runtime (liblasmjsedge.a),
  // else compiled here (a runtime directory from an older edge-runtime.yml).
  const glue = [];
  if (usesJs) {
    if (edge.libraries['liblasmjsedge.a']) glue.push(edge.libraries['liblasmjsedge.a']);
    else if (driver === 'node') throw new Error('This edge runtime has no precompiled Lasm.JS glue (liblasmjsedge.a); the Node link driver cannot compile it');
    else {
      glue.push(join(out, 'lasm_js_edge.o'));
      sdk.execute('emcc', ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-fwasm-exceptions', '-sMEMORY64=1', '-ffp-contract=off',
        '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(nodeRuntime.directory, 'include'), '-c', join(here, 'lasm_js_edge.c'), '-o', glue[0]],
      { stdio, env, timeout: 600_000 });
    }
  }
  // The Node build's initializer wrappers, regenerated without call chains
  // (src/edge/edge-initializers.mjs) from its plan, compiled as the Node build
  // compiles its generated C (src/application-link.mjs compileFlags).
  const planFile = join(linkWork, 'initialization-plan.json');
  const wrappers = /[\\/]initializers-\d+\.o$/;
  if (existsSync(planFile) && objects.some(arg => wrappers.test(arg))) {
    const source = join(out, 'initializers-compact.c'), object = join(out, 'initializers-compact.o');
    writeFileSync(source, compactInitializerWrappers(JSON.parse(readFileSync(planFile, 'utf8'))));
    const flags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN', '-sMEMORY64=1',
      '-ffunction-sections', '-fdata-sections', '-I', join(nodeRuntime.directory, 'include')];
    if (driver === 'node') compileObject({ sdk, flags, source, object, settings: { stdio, timeout: 600_000, maxBuffer: 8 << 20 } });
    else sdk.execute('emcc', [...flags, '-c', source, '-o', object], { stdio, env, timeout: 600_000 });
    const first = objects.findIndex(arg => wrappers.test(arg));
    objects = objects.filter(arg => !wrappers.test(arg));
    objects.splice(first, 0, object);
  }
  const exportsList = JSON.parse(readFileSync(join(linkWork, 'exports.json'), 'utf8')).filter(name => !name.startsWith('_lasm_js_'));
  const exportsFile = join(out, 'exports.json');
  writeFileSync(exportsFile, JSON.stringify([...new Set([...exportsList, '_lasm_edge_pump', ...(usesJs ? ['_lasm_js_edge_sync'] : [])])]) + '\n');
  const archive = name => edge.libraries[`lib${name}.a`] ?? join(nodeRuntime.directory, 'lib', `lib${name}.a`);
  const libraries = nodeRuntime.manifest.libraries.map(file => file.replace(/^lib\/lib(.+)\.a$/, '$1'))
    .filter(name => name !== 'lasmsymbols').map(archive);
  const args = [...objects, '-Wl,--wrap=lean_io_mark_end_initialization', ...glue, s.optimize, '--output-eol=linux', '-fwasm-exceptions',
    `-sMEMORY64=${s.memory64}`, `-sMALLOC=${s.malloc}`, `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sMODULARIZE=1', '-sEXPORT_ES6=1',
    '-sENVIRONMENT=web', '-sEXIT_RUNTIME=0', '-sFILESYSTEM=0', '-sALLOW_MEMORY_GROWTH=1', `-sINITIAL_MEMORY=${s.initialMiB << 20}`,
    `-sMAXIMUM_MEMORY=${s.maximumMiB * 1048576}`, `-sSTACK_SIZE=${s.stackMiB << 20}`,
    '-sEXPORTED_RUNTIME_METHODS=callMain,HEAPU8,HEAPU32', '-sDYNAMIC_EXECUTION=0',
    '-sINCOMING_MODULE_JS_API=instantiateWasm,noInitialRun,print,printErr,onAbort',
    '-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE=$stackSave,$stackRestore', '-Wl,--export-if-defined=__cpp_exception', '-Wno-experimental',
    `-Wl,-Map=${join(out, 'program.map')}`, '-Wl,--start-group', ...libraries, '-Wl,--end-group',
    '--pre-js', join(linkWork, 'application-pre.js'), '--pre-js', join(here, 'edge-pre.js'), '--js-library', join(here, 'edge-library.js'),
    ...(suspend === 'jspi' ? ['-sJSPI', "-sJSPI_EXPORTS=['lasm_edge_pump','main']"] : []),
    ...(suspend === 'asyncify' ? ['-sASYNCIFY', `-sASYNCIFY_STACK_SIZE=${asyncifyStackBytes}`] : []),
    '-o', join(out, 'program.mjs')];
  writeFileSync(join(out, 'link-args.json'), JSON.stringify({ settings: s, suspend, driver, args }, null, 1) + '\n');
  if (driver === 'node') {
    // The Node link driver (src/link-driver/) replays the recorded edge link
    // (recipe-emscripten-<version>-edge.json) with the link toolchain and the
    // edge runtime's system libraries: no emcc and no Python.
    const recipe = edgeRecipe();
    if (!edgeRecipeHas(suspend, recipe)) throw new Error(`The edge recipe has no recording of the ${suspend} link`);
    if (!edge.sysroot) throw new Error('This edge runtime has no system libraries for the Node link driver');
    const link = linkArgs => {
      const temp = linkTemporaryDirectory(out, 'edge');
      try {
        linkWithNode({ recipe, mode: edgeRecipeMode(suspend), args: linkArgs, sdk, cache: edge.sysroot.cache, temp, nativeSigs: bundledNativeSigs(recipe),
          stdio: verbose ? ['ignore', 'inherit', 'inherit'] : ['ignore', 'pipe', 'pipe'], optimize, stepCache });
      } finally { removeTemporary(temp); }
    };
    const record = members?.record;
    let fast = false;
    if (!optimize && record?.liveMembers && record.imports && Object.keys(record.liveMembers).every(archive => libraries.includes(archive))) {
      try {
        const files = memberFiles(record.liveMembers, members.directory);
        link(args.flatMap(arg => arg === libraries[0] ? files : libraries.includes(arg) ? [] : [arg]));
        const imports = wasmImports(join(out, 'program.wasm')), allowed = new Set(record.imports);
        fast = !!imports && imports.every(item => allowed.has(item));
      } catch { /* link in full */ }
    }
    if (!fast) {
      link(args);
      if (!optimize && members) {
        try {
          const imports = wasmImports(join(out, 'program.wasm'));
          if (imports) members.save({ liveMembers: liveMembers(readFileSync(join(out, 'program.map'), 'utf8'), libraries), imports });
        } catch { /* no fast link next time */ }
      }
    }
  } else {
    if (!optimize) throw new Error('The edge dev profile needs the Node link driver');
    sdk.execute('em++', args, { stdio, env, timeout: 3_600_000, maxBuffer: 64 << 20 });
  }
  return { program: join(out, 'program.mjs'), wasm: join(out, 'program.wasm'), usesJs, suspend, driver };
}

/** The tools the edge link needs. With an edge runtime that carries the
 * system libraries and the precompiled glue, the Node link driver links with
 * Lasm's link toolchain (the same packages as every Node build); otherwise, or
 * with LASM_LINK_DRIVER=emcc, Emscripten's own driver from the managed SDK. */
export async function provisionEdgeLinker(edge, options = {}, env = process.env, suspend = 'jspi') {
  if (edge.sysroot && edge.libraries['liblasmjsedge.a'] && env.LASM_LINK_DRIVER !== 'emcc' && edgeRecipeHas(suspend)) {
    const { provisionLinkToolchain } = await import('../managed-link-toolchain.mjs');
    return provisionLinkToolchain(options);
  }
  const { provisionSdk } = await import('../managed-sdk.mjs');
  return provisionSdk(options);
}
