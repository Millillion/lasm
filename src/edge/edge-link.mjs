// The edge link (Phase 7, docs/EDGE.md): the Node build's application objects
// and initializer plan, relinked without threads as an ES module for isolates.
// Differences from src/application-link.mjs: wasm64 code lowered to 32-bit
// memory (-sMEMORY64=2), no -pthread/PROXY_TO_PTHREAD/MAIN_MODULE, the
// single-threaded runtime archives (edge-runtime.mjs), 4 MiB initial memory
// with growth and a 1 MiB C stack, JSPI with the event pump and `main` as the
// only promising exports, and the edge host glue (edge-pre.js, edge-library.js,
// lasm_js_edge.c). The Node link driver has no recording of these settings, so
// this link uses Emscripten's own driver from the managed SDK.
import { readFileSync, writeFileSync, mkdirSync } from 'node:fs';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { executableName } from '../platform.mjs';

const here = fileURLToPath(new URL('./', import.meta.url));
const readResponse = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));

/** Edge link settings, part of the edge build's identity. */
export const edgeLinkSettings = Object.freeze({ memory64: 2, initialMiB: 4, stackMiB: 1, maximumMiB: 2048, malloc: 'mimalloc', optimize: '-Oz' });

/** linkWork: the Node build's kept link directory (link.rsp, objects, exports.json). */
export function linkEdgeProgram({ sdk, nodeRuntime, edge, linkWork, out, suspend = 'jspi', verbose = false }) {
  if (!['jspi', 'none'].includes(suspend)) throw new Error(`Unknown edge suspension ${JSON.stringify(suspend)}`);
  const s = edgeLinkSettings;
  const rsp = readResponse(join(linkWork, 'link.rsp'));
  const nm = file => execFileSync(join(sdk.prefix, 'bin', executableName('llvm-nm')), ['--defined-only', '--just-symbol-name', file],
    { encoding: 'utf8', maxBuffer: 64 << 20, windowsHide: true });
  // Application objects and initializer wraps; Lasm.JS's Node glue (the object
  // defining lasm_js_available) is replaced by the edge glue.
  const kept = rsp.filter(arg => arg.endsWith('.o') || arg.startsWith('-Wl,--wrap='));
  const objects = kept.filter(arg => !(arg.endsWith('.o') && /^lasm_js_available$/m.test(nm(arg))));
  const usesJs = objects.length !== kept.length;
  mkdirSync(out, { recursive: true });
  const stdio = verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'];
  const env = { ...sdk.env, EMCC_CORES: '1' };
  const glue = [];
  if (usesJs) {
    glue.push(join(out, 'lasm_js_edge.o'));
    sdk.execute('emcc', ['-O2', '-DNDEBUG', '-DLEAN_EXPORTING', '-DLEAN_EMSCRIPTEN', '-fwasm-exceptions', '-sMEMORY64=1', '-ffp-contract=off',
      '-fPIC', '-ffunction-sections', '-fdata-sections', '-I', join(nodeRuntime.directory, 'include'), '-c', join(here, 'lasm_js_edge.c'), '-o', glue[0]],
    { stdio, env, timeout: 600_000 });
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
    '-sINCOMING_MODULE_JS_API=instantiateWasm,noInitialRun,print,printErr,lasmEdgeJspi,onAbort',
    '-sDEFAULT_LIBRARY_FUNCS_TO_INCLUDE=$stackSave,$stackRestore', '-Wl,--export-if-defined=__cpp_exception', '-Wno-experimental',
    '-Wl,--start-group', ...libraries, '-Wl,--end-group',
    '--pre-js', join(linkWork, 'application-pre.js'), '--pre-js', join(here, 'edge-pre.js'), '--js-library', join(here, 'edge-library.js'),
    ...(suspend === 'jspi' ? ['-sJSPI', "-sJSPI_EXPORTS=['lasm_edge_pump','main']"] : []),
    '-o', join(out, 'program.mjs')];
  writeFileSync(join(out, 'link-args.json'), JSON.stringify({ settings: s, suspend, args }, null, 1) + '\n');
  sdk.execute('em++', args, { stdio, env, timeout: 3_600_000, maxBuffer: 64 << 20 });
  return { program: join(out, 'program.mjs'), wasm: join(out, 'program.wasm'), usesJs, suspend };
}

/** The tools the edge link needs: Emscripten's own driver from the managed SDK
 * (see the header). */
export async function provisionEdgeLinker(options = {}) {
  const { provisionSdk } = await import('../managed-sdk.mjs');
  return provisionSdk(options);
}
