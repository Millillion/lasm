// A Lean application, a Lasm runtime and an SDK for src/application-link.mjs
// linkApplication with the stand-in toolchain (toolchain.mjs): the Lean C of a
// two-module program, runtime archives of relocatable objects, and an
// Emscripten SDK whose emcc and em++ run in-process (the 'emcc' link driver) or
// whose clang, wasm-ld and Emscripten JavaScript step are stand-in programs
// (the 'node' link driver).
import { mkdirSync, mkdtempSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { registerProgram } from './programs.mjs';
import { temporaryDirectory, archive, compileToObject, emscriptenGlue, expandResponseFiles, installTools, linkObjects, parseLinkCommand, programModule, wasmObject } from './toolchain.mjs';
import { bundledRecipe } from '../../../src/link-driver/compile.mjs';

/** A runtime identity that src/application-reachability.mjs has reviewed for
 * selective initialization, and one it has not. */
export const specializedIdentity = '9921c696161a9852442863a19e16990f2d540aa369adaa353906504bb589649a';

export const mainModule = ({ extra = '', calls = '' } = {}) => `// Lean compiler output
// Module: Main
// Imports: Init Helper
#include <lean/lean.h>
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Helper(uint8_t builtin);
LEAN_EXPORT lean_object* l_Helper_get(lean_object*);
LEAN_EXPORT lean_object* l_greeting;
static bool _G_initialized = false;
LEAN_EXPORT lean_object* l_main(lean_object* w) {
  ${calls}
  return l_Helper_get(l_greeting);
}
${extra}
LEAN_EXPORT lean_object* initialize_Main(uint8_t builtin) {
  lean_object * res;
  if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
  _G_initialized = true;
  res = initialize_Init(builtin);
  if (lean_io_result_is_error(res)) return res;
  lean_dec_ref(res);
  res = initialize_Helper(builtin);
  if (lean_io_result_is_error(res)) return res;
  lean_dec_ref(res);
  l_greeting = l_Init_mkString();
  return lean_io_result_mk_ok(lean_box(0));
}
int main(int argc, char ** argv) {
  lean_initialize();
  initialize_Main(1);
  lean_io_mark_end_initialization();
  return l_main(lean_io_mk_world());
}
`;

export const helperModule = ({ extra = '' } = {}) => `// Lean compiler output
// Module: Helper
// Imports: Init
#include <lean/lean.h>
lean_object* initialize_Init(uint8_t builtin);
LEAN_EXPORT lean_object* l_Helper_ref;
LEAN_EXPORT lean_object* l_Helper_unused;
LEAN_EXPORT lean_object* l_Helper_get(lean_object* x) {
  return l_Helper_ref;
}
LEAN_EXPORT lean_object* l_Helper_initFn(lean_object* w) {
  return lean_st_mk_ref(w);
}
${extra}
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Helper(uint8_t builtin) {
  lean_object * res;
  if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
  _G_initialized = true;
  res = initialize_Init(builtin);
  if (lean_io_result_is_error(res)) return res;
  lean_dec_ref(res);
  res = l_Helper_initFn(lean_io_mk_world());
l_Helper_ref = lean_io_result_get_value(res);
  l_Helper_unused = l_Init_mkString();
  return lean_io_result_mk_ok(lean_box(0));
}
`;

/** Runtime archives: Init (a module initializer and its data), leanrt (the C
 * runtime, malloc, Lean's initialization) and leancpp (the compiler state that
 * lean_initialize pulls in, and module-data access). */
export function writeRuntime(directory, { identity = 'stand-in-runtime', leanInitializeInRuntime = false, extraInit = [], registerTarget, dataInitializerCalls = [] } = {}) {
  mkdirSync(join(directory, 'lib'), { recursive: true });
  mkdirSync(join(directory, 'include'), { recursive: true });
  const lib = (name, members) => writeFileSync(join(directory, 'lib', name), archive(members.map(([member, spec]) => [member, wasmObject(spec)])));
  lib('libInit.a', [
    ['Prelude.o', { functions: [{ name: 'initialize_Init', refs: ['initialize_Init_Data', 'l_Init_table'] }, { name: 'l_Init_mkString', refs: ['l_Init_table'] }],
      data: [{ name: 'l_Init_table' }] }],
    // Init.Data's initializer registers something: by default in its own
    // registry, or (registerTarget) in a global of the program.
    ['Data.o', { functions: [{ name: 'initialize_Init_Data', refs: ['l_Init_Data_value', 'l_Init_register', ...dataInitializerCalls] }, { name: 'l_Init_register', refs: [registerTarget ?? 'l_Init_registry'] }],
      data: [{ name: 'l_Init_Data_value' }, { name: 'l_Init_registry' }], undefinedData: registerTarget ? [registerTarget] : [] }],
    ...extraInit]);
  lib('libleanrt.a', [
    ['object.o', { functions: [{ name: 'lean_st_mk_ref' }, { name: 'malloc' }, { name: 'free' }, { name: 'lean_io_mark_end_initialization' },
      { name: 'lean_initialize_runtime_module' }, ...(leanInitializeInRuntime ? [{ name: 'lean_initialize', refs: ['lean_initialize_runtime_module'] }] : [])] }],
    ['dl.o', { functions: [{ name: 'dlopen', refs: ['lean_read_module_data'] }] }]]);
  lib('libleancpp.a', [
    ['init.o', { functions: leanInitializeInRuntime ? [{ name: 'lean_compiler_state' }] : [{ name: 'lean_initialize', refs: ['lean_initialize_runtime_module', 'lean_compiler_state'] }, { name: 'lean_compiler_state' }] }],
    ['module.o', { functions: [{ name: 'lean_read_module_data' }] }],
    // An inline C++ helper: a weak definition any archive may carry.
    ['inline.o', { functions: [{ name: 'lean_inline_helper', weak: true }] }]]);
  return { directory, identity, manifest: { lean: '4.35.0', libraries: ['lib/libInit.a', 'lib/libleanrt.a', 'lib/libleancpp.a'],
    applicationSymbolHook: 'lasm_lookup_application_symbol' } };
}

/** The work of an em++ link: link, map, program.wasm and its glue; --why-extract rows. */
function link(args, linkLog) {
  const command = parseLinkCommand(expandResponseFiles(args));
  const exports = command.exportsFile ? JSON.parse(readFileSync(command.exportsFile, 'utf8')).map(name => name.replace(/^_/, '')) : [];
  linkLog?.push(command);
  const linked = linkObjects({ inputs: command.inputs, wrap: command.wrap, roots: exports });
  if (command.map) writeFileSync(command.map, linked.map);
  if (command.whyExtract) writeFileSync(command.whyExtract, linked.whyExtract);
  writeFileSync(command.output.replace(/\.[cm]?js$/, '.wasm'), programModule(linked.imports));
  const preJs = [];
  const all = expandResponseFiles(args);
  all.forEach((arg, index) => { if (arg === '--pre-js') preJs.push(all[index + 1]); });
  writeFileSync(command.output, emscriptenGlue(preJs));
  return linked;
}

/** An SDK for the emcc driver: emcc and em++ in-process, llvm-nm a stand-in program. */
export function emccSdk(base, { failCompile } = {}) {
  const tools = installTools(join(base, 'sdk'), ['llvm-nm']);
  const calls = [], links = [];
  const sdk = {
    prefix: tools.prefix, env: {}, driverIdentity: 'stand-in-emcc',
    execute(tool, args, options) {
      calls.push({ tool, args, options });
      if (tool === 'emcc') {
        const source = args[args.indexOf('-c') + 1];
        const text = readFileSync(source, 'utf8');
        if (failCompile?.(text)) throw Object.assign(new Error('Command failed: emcc'), { status: 1, stderr: `${source}:1:1: error: stand-in compile failure\n` });
        writeFileSync(args[args.indexOf('-o') + 1], compileToObject(text));
        return;
      }
      if (tool === 'em++') return link(args, links);
      throw new Error(`unexpected tool ${tool}`);
    },
  };
  return { sdk, tools, calls, links };
}

/** An SDK for the Node link driver: the recorded toolchain identity, an
 * Emscripten cache with installed headers, stand-in clang and wasm-ld, and a
 * stand-in Emscripten whose compiler.mjs reports no JavaScript symbols. */
export function nodeSdk(base) {
  const recipe = bundledRecipe();
  const tools = installTools(join(base, 'sdk'), ['clang', 'llvm-nm', 'wasm-ld', 'llvm-objcopy']);
  const cache = join(base, 'emscripten-cache'), emscripten = join(base, 'emscripten');
  mkdirSync(cache, { recursive: true });
  writeFileSync(join(cache, 'sysroot_install.stamp'), '');
  mkdirSync(join(emscripten, 'tools'), { recursive: true });
  // Emscripten's JavaScript symbol step (run in-process; logged as compiler.mjs).
  writeFileSync(join(emscripten, 'tools', 'compiler.mjs'), '// stand-in\n');
  registerProgram(join(emscripten, 'tools', 'compiler.mjs'), 'compiler.mjs', tools.log);
  const platform = `${process.platform}-${process.arch}`;
  const sdk = { prefix: tools.prefix, env: { ...process.env, LASM_BUILD_JOBS: '2', LASM_STAND_IN_SDK: '1' }, cache, driver: emscripten, platform,
    toolchain: { shared: recipe.toolchain.shared, native: recipe.toolchain.native[platform] },
    execute(tool) { throw new Error(`the Node link driver ran ${tool}`); } };
  return { sdk, tools };
}

/** A project: the C of Main and Helper, a work and dist directory and a runtime. */
export function project({ main = mainModule(), helper = helperModule(), extra = [], runtime: runtimeOptions } = {}) {
  const base = temporaryDirectory('lasm-application-plan-');
  const sourceDirectory = join(base, 'c');
  mkdirSync(sourceDirectory, { recursive: true });
  const sources = [['Main.c', main], ['Helper.c', helper], ...extra].map(([name, text]) => { const file = join(sourceDirectory, name); writeFileSync(file, text); return file; });
  const work = join(base, 'work'), dist = join(base, 'dist');
  mkdirSync(work, { recursive: true }); mkdirSync(dist, { recursive: true });
  const runtime = writeRuntime(join(base, 'runtime'), runtimeOptions);
  return { base, sources, work, dist, runtime };
}

/** A module whose initializer only initializes its imports (Lean's EmitC for a
 * module without closed terms or `initialize` declarations). */
export const trivialModule = name => `// Lean compiler output
// Module: ${name}
#include <lean/lean.h>
lean_object* initialize_Init(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_${name}(uint8_t builtin) {
  lean_object * res;
  if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
  _G_initialized = true;
  res = initialize_Init(builtin);
  if (lean_io_result_is_error(res)) return res;
  lean_dec_ref(res);
  return lean_io_result_mk_ok(lean_box(0));
}
`;
