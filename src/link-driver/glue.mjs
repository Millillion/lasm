// Port of the parts of Emscripten 6.0.9 tools/emscripten.py (emscript,
// finalize_wasm's export bookkeeping, update_settings_glue) and
// tools/js_manipulation.py that turn Wasm metadata and the JS compiler's output
// into the glue program (Phase 2 Node link driver). Only the configuration
// Lasm records (src/link-driver/recipe-*.json) is supported: settings that
// would select other branches are rejected rather than guessed.
import { comparePythonStrings, isIdentifier, pythonSorted, pythonStrip, pythonSplit, truthy, universalNewlines } from './python.mjs';
import { ExternType, Type, typeToSig } from './wasm.mjs';

// tools/shared.py symbol helpers.
const internalStartStop = new Set(['__start_em_asm', '__stop_em_asm', '__start_em_js', '__stop_em_js',
  '__start_em_lib_deps', '__stop_em_lib_deps', '__em_lib_deps']);
export const isInternalGlobal = name => internalStartStop.has(name) || name.startsWith('__em_js__') || name.startsWith('__em_lib_deps');
export const isInternalSymbol = name => isInternalGlobal(name)
  || ['__asyncify_data', '__asyncify_state', '__indirect_function_table', 'memory'].includes(name)
  || name.startsWith('dynCall_') || name.startsWith('orig$');
export function asmjsMangle(name) {
  if (name === '__main_argc_argv') name = 'main';
  return isInternalSymbol(name) ? name : '_' + name;
}
export const isCSymbol = name => name.startsWith('_');
export const demangleCSymbolName = name => !isCSymbol(name) ? '$' + name : name.slice(1);

/** Settings that select code paths this port does not implement. */
export const requiredSettings = {
  SIDE_MODULE: 0, WASM2JS: 0, WASM_ESM_INTEGRATION: 0, MODULARIZE: 0, MINIMAL_RUNTIME: 0, ASYNCIFY: 0,
  STANDALONE_WASM: 0, WASM_BIGINT: 1, DYNCALLS: 0, SAFE_HEAP: 0, AUTODEBUG: 0, SHARED_WASMGC: 0, EMBIND_GEN_MODE: 0,
  LINKABLE: 0, USE_ASAN: 0, EXPORT_ALL: 0, SINGLE_FILE: 0, WASM_BINDGEN: 0, EMBIND_AOT: 0, EVAL_CTORS: 0,
  CAN_ADDRESS_2GB: 0, SUPPORT_BIG_ENDIAN: 0, CROSS_ORIGIN_STORAGE: 0, SPLIT_MODULE: 0, EXECUTABLE: 0,
  USE_CLOSURE_COMPILER: 0, GENERATE_SOURCE_MAP: 0, GENERATE_DWARF: 0, EMIT_NAME_SECTION: 0, EMIT_SYMBOL_MAP: 0,
  EMIT_PRODUCERS_SECTION: 0, MINIFY_WASM_IMPORTS_AND_EXPORTS: 0, LEGACY_VM_SUPPORT: 0, INCLUDE_FULL_LIBRARY: 0,
  SEPARATE_DWARF: 0, ASYNCIFY_ADD: [], ASYNCIFY_ONLY: [], ASYNCIFY_REMOVE: [], ASYNCIFY_ADVISE: 0,
  BINARYEN_EXTRA_PASSES: '', EMULATE_FUNCTION_POINTER_CASTS: 0, BINARYEN_IGNORE_IMPLICIT_TRAPS: 0,
  ERROR_ON_WASM_CHANGES_AFTER_LINK: 0, WASM: 1, FAKE_DYLIBS: 0, SIDE_MODULE_IMPORTS: [],
};
export function checkSupportedSettings(settings, supported = {}) {
  // A recipe mode may name other values it was recorded and checked with (the
  // edge link: MODULARIZE=1, ASYNCIFY=2 for JSPI, MAIN_MODULE=0, MEMORY64=2).
  for (const [key, recorded] of Object.entries(requiredSettings)) {
    const value = Object.hasOwn(supported, key) ? supported[key] : recorded;
    const actual = settings.get(key);
    if (truthy(actual) !== truthy(value) || (typeof value === 'number' && value && Number(actual) !== value))
      throw new Error(`The Node link driver does not implement ${key}=${JSON.stringify(actual)}`);
  }
  const mainModule = supported.MAIN_MODULE ?? 2, memory64 = supported.MEMORY64 ?? 1;
  if (Number(settings.get('MAIN_MODULE')) !== mainModule) throw new Error(`The Node link driver implements only MAIN_MODULE=${mainModule} here`);
  if (Number(settings.get('MEMORY64')) !== memory64) throw new Error(`The Node link driver implements only MEMORY64=${memory64} here`);
}

/** emscripten.py maybe_disable_filesystem. */
function maybeDisableFilesystem(settings, imports) {
  if (truthy(settings.get('FORCE_FILESYSTEM')) || truthy(settings.get('INCLUDE_FULL_LIBRARY'))) return;
  if (Number(settings.get('MAIN_MODULE')) === 1) return;
  if (!truthy(settings.get('FILESYSTEM'))) { settings.set('SYSCALLS_REQUIRE_FILESYSTEM', 0); return; }
  const sideImports = settings.get('SIDE_MODULE_IMPORTS').map(demangleCSymbolName);
  const all = new Set([...imports, ...sideImports]);
  const syscalls = [...all].filter(name => name.startsWith('__syscall_') || name.startsWith('fd_') || name === 'path_open');
  const allowed = new Set(['__syscall_ioctl', 'fd_seek', 'fd_write', 'fd_close', 'fd_fdstat_get']);
  if (syscalls.every(name => allowed.has(name))) settings.set('SYSCALLS_REQUIRE_FILESYSTEM', 0);
}

/** emscripten.py update_settings_glue. Returns binaryen feature flags. */
export function updateSettingsGlue(settings, metadata, weakImports) {
  maybeDisableFilesystem(settings, metadata.imports);
  const exported = new Set(metadata.allExports);
  settings.set('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE', pythonSorted(new Set([...settings.get('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE'),
    ...metadata.imports].filter(name => !exported.has(name)))));
  if (truthy(settings.get('MAIN_MODULE'))) settings.set('WEAK_IMPORTS', [...settings.get('WEAK_IMPORTS'), ...weakImports]);
  settings.set('WASM_EXPORTS', [...metadata.allExports]);
  settings.set('HAVE_EM_ASM', Boolean(truthy(settings.get('MAIN_MODULE')) || metadata.emAsmConsts.size !== 0));
  const binaryenFeatures = ['--mvp-features', ...metadata.features];
  if (Number(settings.get('ASYNCIFY')) === 2) binaryenFeatures.push('--enable-reference-types');
  if (truthy(settings.get('PTHREADS')) && !binaryenFeatures.includes('--enable-threads')) throw new Error('assertion failed: threads feature');
  if (truthy(settings.get('MEMORY64')) && !binaryenFeatures.includes('--enable-memory64')) throw new Error('assertion failed: memory64 feature');
  const wasmExports = settings.get('WASM_EXPORTS');
  const hasMain = Boolean(truthy(settings.get('MAIN_MODULE')) || truthy(settings.get('PROXY_TO_PTHREAD')) || truthy(settings.get('STANDALONE_WASM'))
    || wasmExports.includes('main') || wasmExports.includes('__main_argc_argv'));
  settings.set('HAS_MAIN', hasMain);
  const include = [...settings.get('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE')];
  if (hasMain && !truthy(settings.get('MINIMAL_RUNTIME'))) include.push('$exitJS', '$handleException');
  const readsParams = Boolean(metadata.mainReadsParams || truthy(settings.get('MAIN_MODULE')));
  settings.set('MAIN_READS_PARAMS', readsParams);
  if (readsParams && !truthy(settings.get('STANDALONE_WASM'))) include.push('$stringToUTF8OnStack');
  if (hasMain && readsParams) include.push(truthy(settings.get('MEMORY64')) ? '$HEAPU64' : '$HEAPU32');
  if (truthy(settings.get('STACK_OVERFLOW_CHECK')) && !truthy(settings.get('SIDE_MODULE')) && !metadata.functionExports.has('emscripten_stack_get_end'))
    throw new Error('assertion failed: emscripten_stack_get_end is not exported');
  for (const deps of metadata.jsDeps) include.push(...deps.split(','));
  settings.set('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE', include);
  return binaryenFeatures;
}

/** emscripten.py finalize_wasm, after metadata: record EMSCRIPTEN_KEEPALIVE
 * exports as requested exports. Returns the names added. */
export function addUnexpectedExports(settings, metadata, jsSyms, userRequestedExports) {
  const expected = new Set(settings.get('EXPORTED_FUNCTIONS'));
  for (const name of settings.get('REQUIRED_EXPORTS')) expected.add(asmjsMangle(name));
  for (const name of settings.get('EXPORT_IF_DEFINED')) expected.add(asmjsMangle(name));
  for (const deps of Object.values(jsSyms)) for (const name of deps) expected.add(asmjsMangle(name));
  const unexpected = metadata.allExports.filter(name => !isInternalSymbol(name)).map(asmjsMangle).filter(name => !expected.has(name));
  if (metadata.allExports.includes('main') || metadata.allExports.includes('__main_argc_argv')) {
    // EXPORTED_FUNCTIONS is always a user setting here, and must contain _main
    // (settings.instantiateSettings): no `unused-main` branch.
    if (!settings.get('USER_EXPORTS').includes('_main')) throw new Error('assertion failed: _main is a user export');
    unexpected.push('_main');
  }
  for (const name of unexpected) userRequestedExports.add(name);
  settings.set('EXPORTED_FUNCTIONS', [...settings.get('EXPORTED_FUNCTIONS'), ...unexpected]);
  return unexpected;
}

/** emscripten.py parentheses_match */
function parenthesesMatch(body, open, close) {
  if (close < 0) close += body.length;
  let count = 1;
  for (let i = open + 1; i <= close; i++) {
    if (body[i] === body[open]) count++;
    else if (body[i] === body[close]) { count--; if (count <= 0) return i === close; }
  }
  return false;
}

/** emscripten.py trim_asm_const_body */
export function trimAsmConstBody(body) {
  body = pythonStrip(body);
  let original;
  while (original !== body) {
    original = body;
    if (body.length > 1 && body[0] === '"' && body.at(-1) === '"') body = pythonStrip(body.slice(1, -1).replaceAll('\\"', '"'));
    if (body.length > 1 && body[0] === '{' && body.at(-1) === '}' && parenthesesMatch(body, 0, -1)) body = pythonStrip(body.slice(1, -1));
    if (body.length > 1 && body[0] === '(' && body.at(-1) === ')' && parenthesesMatch(body, 0, -1)) body = pythonStrip(body.slice(1, -1));
  }
  return body;
}

/** emscripten.py create_asm_consts: [address, function source] sorted by address. */
export function createAsmConsts(metadata) {
  const result = [];
  for (const [address, constant] of metadata.emAsmConsts) {
    const body = trimAsmConstBody(constant);
    let arity = 0;
    for (let i = 0; i < 16; i++) if (constant.includes(`$${i}`)) arity = i + 1;
    const args = Array.from({ length: arity }, (_, i) => `$${i}`).join(', ');
    result.push([address, body.includes('arguments') ? `function(${args}) { ${body} }` : `(${args}) => { ${body} }`]);
  }
  return result.sort((a, b) => a[0] - b[0]);
}

/** emscripten.py func_type_to_sig */
export function funcTypeToSig(type) {
  if (type.returns.length > 1) throw new Error('assertion failed: One return type expected.');
  return typeToSig(type.returns.length ? type.returns[0] : Type.VOID) + type.params.map(typeToSig).join('');
}

/** emscripten.py create_em_js */
export function createEmJs(settings, metadata) {
  const result = [], separator = '<::>';
  for (const [name, raw] of metadata.emJsFuncs) {
    const at = raw.indexOf(separator);
    if (at < 0) throw new Error('assertion failed: EM_JS separator');
    let args = pythonStrip(raw.slice(0, at).slice(1, -1));
    const body = raw.slice(at + separator.length);
    const list = !args || args === 'void' ? [] : args.split(',');
    args = list.filter(Boolean).map(arg => pythonSplit(arg).at(-1).replaceAll('*', '')).join(',');
    result.push(`function ${name}(${args}) ${body}`);
    if ((truthy(settings.get('MAIN_MODULE')) || Number(settings.get('ASYNCIFY')) === 2) && metadata.emJsFuncTypes.has(name))
      result.push(`${name}.sig = '${funcTypeToSig(metadata.emJsFuncTypes.get(name))}';`);
  }
  return result;
}

/** js_manipulation.py make_invoke, for WASM_BIGINT and DYNCALLS=0. */
export function makeInvoke(settings, sig) {
  const args = ['index', ...Array.from({ length: sig.length - 1 }, (_, i) => `a${i + 1}`)];
  const ret = sig[0] !== 'v' ? 'return ' : '';
  const exceptionalReturn = sig[0] === 'j' ? '\n    return 0n;' : '';
  const callArgs = [...args];
  if (truthy(settings.get('MEMORY64'))) callArgs[0] = `Number(${callArgs[0]})`;
  const body = `${ret}getWasmTableEntry(${callArgs[0]})(${callArgs.slice(1).join(',')});`;
  return `function invoke_${sig}(${args.join(',')}) {\n  var sp = stackSave();\n  try {\n    ${body}\n  } catch(e) {\n    stackRestore(sp);\n    if (!(e instanceof EmscriptenEH)) throw e;\n    _setThrew(1, 0);${exceptionalReturn}\n  }\n}`;
}

/** js_manipulation.py make_wasm64_wrapper */
export function makeWasm64Wrapper(sig) {
  if (!sig.toLowerCase().includes('p')) throw new Error('assertion failed: wasm64 wrapper without pointers');
  const args = Array.from({ length: sig.length - 1 }, (_, i) => `a${i}`);
  const converted = args.map((arg, i) => {
    const type = sig[i + 1];
    if (type === 'p') return `BigInt(${arg})`;
    if (type === 'P') return `BigInt(${arg} ? ${arg} : 0)`;
    if (type !== '_') throw new Error(`assertion failed: signature letter ${type}`);
    return arg;
  });
  let result = `f(${converted.join(', ')})`;
  if (sig[0] === 'p') result = `Number(${result})`;
  return `  var makeWrapper_${sig} = (f) => (${args.join(', ')}) => ${result};\n`;
}

const asanHelpers = ['__asan_loadN', '__asan_storeN'];

/** emscripten.py create_pointer_conversion_wrappers (MEMORY64). */
export function createPointerConversionWrappers(settings, metadata, nativeSigs) {
  const sigs = new Map(Object.entries(nativeSigs));
  for (const entry of settings.get('SIGNATURE_CONVERSIONS')) { const [symbol, sig] = entry.split(':'); sigs.set(symbol, sig); }
  for (const helper of asanHelpers) sigs.set(helper, '_pp');
  let wrappers = `
// Argument name here must shadow the \`wasmExports\` global so
// that it is recognised by metadce and minify-import-export-names
// passes.
function applySignatureConversions(wasmExports) {
  // First, make a copy of the incoming exports object
  wasmExports = Object.assign({}, wasmExports);
`;
  const seen = new Set(), wrap = [];
  for (const [symbol, type] of metadata.functionExports) {
    if (symbol.startsWith('dynCall_') && type.params[0] === Type.I64) {
      const letters = [...symbol.split('_').at(-1)].map(letter => letter === 'p' ? 'p' : '_');
      letters.splice(1, 0, 'p');
      sigs.set(symbol, letters.join(''));
    }
    const sig = sigs.get(symbol);
    if (sig) {
      if (!seen.has(sig)) { wrappers += makeWasm64Wrapper(sig); seen.add(sig); }
      wrap.push(symbol);
    }
  }
  for (const symbol of wrap) wrappers += `\n  wasmExports['${symbol}'] = makeWrapper_${sigs.get(symbol)}(wasmExports['${symbol}']);`;
  return wrappers + '\n  return wasmExports;\n}';
}

function installDebugWrapper(settings, symbol) {
  if (truthy(settings.get('MINIMAL_RUNTIME')) || !truthy(settings.get('ASSERTIONS'))) return false;
  if (['__asan_', '__lsan_', 'emscripten_stack_', '_emscripten_stack_'].some(prefix => symbol.startsWith(prefix))) return false;
  return !['__trap', 'emscripten_get_sbrk_ptr', 'pthread_self'].includes(symbol);
}

/** emscripten.py create_receiving (DECLARE_ASM_MODULE_EXPORTS, not MODULARIZE). */
export function createReceiving(settings, { functionExports, otherExports, librarySymbols, aliases, extraJsExports }) {
  const assertions = truthy(settings.get('ASSERTIONS'));
  const shouldExport = symbol => extraJsExports.has(symbol)
    || (truthy(settings.get('EXPORT_KEEPALIVE')) && settings.get('EXPORTED_FUNCTIONS').includes(symbol));
  const dynCallAssignment = librarySymbols.includes('dynCalls');
  const receiving = ['\n// Imports from the Wasm binary.'];
  if (!truthy(settings.get('DECLARE_ASM_MODULE_EXPORTS'))) return '';
  const exports = new Map();
  for (const [name, type] of functionExports) if (name !== '__wasm_call_ctors') exports.set(name, type);
  for (const [entry, info] of otherExports) exports.set(entry.name, { otherExport: [entry, info] });
  const mangled = [...[...exports.keys()].map(asmjsMangle), ...Object.keys(aliases)];
  const declarations = mangled.filter(isIdentifier);
  if (assertions) {
    const declarationSet = new Set(declarations);
    for (const symbol of mangled) {
      const moduleExport = shouldExport(symbol);
      if (!declarationSet.has(symbol) && !moduleExport) continue;
      let assignment = `var ${symbol}`;
      if (moduleExport) assignment = declarationSet.has(symbol) ? assignment + ` = Module['${symbol}']` : `Module['${symbol}']`;
      receiving.push(`${assignment} = makeInvalidEarlyAccess('${symbol}');`);
    }
  } else if (declarations.length) receiving.push(`var ${declarations.join(',\n  ')};\n`);
  const aliasInverse = new Map();
  for (const [symbol, alias] of Object.entries(aliases)) {
    if (!exports.has(alias)) throw new Error(`assertion failed: expected alias target (${alias}) to be exported`);
    if (!aliasInverse.has(alias)) aliasInverse.set(alias, []);
    aliasInverse.get(alias).push(symbol);
  }
  receiving.push('\nfunction assignWasmExports(wasmExports) {');
  if (assertions) for (const symbol of exports.keys())
    receiving.push(`  assert(typeof wasmExports['${symbol}'] != 'undefined', 'missing Wasm export: ${symbol}');`);
  for (const [symbol, info] of exports) {
    const isFunction = !info.otherExport;
    const name = asmjsMangle(symbol);
    let assignment = name;
    if (dynCallAssignment && isFunction && symbol.startsWith('dynCall_')) assignment += ` = dynCalls['${symbol.slice(8)}']`;
    if (shouldExport(name)) {
      if (isIdentifier(name)) assignment += ` = Module['${name}']`;
      else assignment = `Module['${name}']`;
    } else if (!isIdentifier(name)) continue;
    for (const target of aliasInverse.get(symbol) ?? []) {
      assignment += ` = ${target}`;
      if (settings.get('EXPORTED_RUNTIME_METHODS').includes(target)) assignment += ` = Module['${target}']`;
    }
    if (isFunction && installDebugWrapper(settings, symbol)) {
      receiving.push(`  ${assignment} = createExportWrapper('${symbol}', wasmExports['${symbol}'], ${info.params.length});`);
    } else if (!isFunction && info.otherExport[0].kind === ExternType.GLOBAL && !info.otherExport[1].mutable) {
      let value = `wasmExports['${symbol}'].value`;
      if (truthy(settings.get('MEMORY64'))) value = `Number(${value})`;
      receiving.push(`  ${assignment} = ${value};`);
    } else receiving.push(`  ${assignment} = wasmExports['${symbol}'];`);
  }
  receiving.push('}');
  return receiving.join('\n');
}

/** emscripten.py create_sending */
export function createSending(settings, metadata, librarySymbols) {
  const items = new Map(metadata.invokeFuncs.map(name => [name, name]));
  for (const name of metadata.imports) items.set(name, metadata.emJsFuncs.has(name) ? name : asmjsMangle(name));
  // add_standard_wasm_imports: IMPORTED_MEMORY only (SAFE_HEAP, SHARED_WASMGC and AUTODEBUG are rejected).
  if (truthy(settings.get('IMPORTED_MEMORY'))) items.set('memory', 'wasmMemory');
  const wasmExports = new Set(metadata.functionExports.keys()), library = new Set(librarySymbols);
  for (const name of [...settings.get('EXPORTED_FUNCTIONS'), ...settings.get('SIDE_MODULE_IMPORTS')]) {
    if (library.has(name) && isCSymbol(name)) {
      const demangled = demangleCSymbolName(name);
      if (!wasmExports.has(demangled)) items.set(demangled, name);
    }
  }
  const sorted = [...items].sort((a, b) => comparePythonStrings(a[0], b[0]));
  const prefix = truthy(settings.get('MAYBE_CLOSURE_COMPILER')) ? '/** @export */\n  ' : '';
  const elements = sorted.map(([key, value]) => key === value ? `${prefix}${key}` : `${prefix}${key}: ${value}`);
  return '{\n  ' + elements.join(',\n  ') + '\n}';
}

/** textwrap.indent(text, '  ') (non-blank lines) then str.strip(). */
const indentStrip = text => pythonStrip(text.split(/(?<=\n)/).map(line => pythonStrip(line) ? '  ' + line : line).join(''));

/** emscripten.py create_module */
export function createModule(settings, metadata, { functionExports, otherExports, librarySymbols, aliases, extraJsExports, nativeSigs }) {
  const module = [createReceiving(settings, { functionExports, otherExports, librarySymbols, aliases, extraJsExports })];
  const sending = createSending(settings, metadata, librarySymbols);
  if (truthy(settings.get('PTHREADS')) || truthy(settings.get('WASM_WORKERS'))) {
    module.push(`  var wasmImports;\n  function assignWasmImports() {\n    wasmImports = ${indentStrip(sending)};\n  }`);
  } else module.push(`var wasmImports = ${sending};`);
  if (settings.get('SUPPORT_LONGJMP') === 'emscripten' || !truthy(settings.get('DISABLE_EXCEPTION_CATCHING'))) {
    module.push(...metadata.invokeFuncs.map(name => makeInvoke(settings, name.slice('invoke_'.length))));
  } else if (metadata.invokeFuncs.length) throw new Error('assertion failed: invoke_ functions exported but exceptions and longjmp are both disabled');
  if (truthy(settings.get('MEMORY64'))) module.push(createPointerConversionWrappers(settings, metadata, nativeSigs));
  return module.filter(Boolean).join('\n\n') + '\n';
}

/** emscripten.py apply_static_code_hooks */
export function applyStaticCodeHooks(settings, forwarded, code) {
  const inject = name => {
    const hook = forwarded[name];
    const text = hook ? `// Begin ${name} hooks\n  ${hook}\n  // End ${name} hooks` : `// No ${name} hooks`;
    code = code.replaceAll(`<<< ${name} >>>`, text);
  };
  for (const name of ['ATMODULES', 'ATPRERUNS', 'ATINITS', 'ATPOSTCTORS']) inject(name);
  if (truthy(settings.get('HAS_MAIN'))) inject('ATMAINS');
  if (!truthy(settings.get('MINIMAL_RUNTIME')) || truthy(settings.get('HAS_MAIN'))) {
    inject('ATPOSTRUNS');
    if (truthy(settings.get('EXIT_RUNTIME'))) inject('ATEXITS');
  }
  return code;
}

/** The part of emscripten.py emscript() after the JS compiler ran: returns the
 * complete original glue and the data later phases need. */
export function assembleGlue(settings, metadata, compilerOutput, { asmConsts, emJsFuncs, nativeSigs, extraJsExports, warn = () => {} }) {
  const out = universalNewlines(compilerOutput);
  const marker = '//FORWARDED_DATA:';
  const at = out.indexOf(marker);
  if (at < 0) throw new Error('Did not receive forwarded data in pre output - process failed?');
  const glue = out.slice(0, at), forwarded = JSON.parse(out.slice(at + marker.length));
  if (forwarded.warnings) warn('warnings in JS library compilation [-Wjs-compiler]');
  const parts = glue.split('// EMSCRIPTEN_END_FUNCS');
  if (parts.length !== 2) throw new Error('The JS compiler output must contain one EMSCRIPTEN_END_FUNCS marker');
  let [pre] = parts;
  const [, post] = parts;
  if (truthy(settings.get('ASSERTIONS'))) {
    pre += 'function checkIncomingModuleAPI() {\n';
    const incoming = new Set(settings.get('INCOMING_MODULE_JS_API'));
    for (const symbol of settings.get('ALL_INCOMING_MODULE_JS_API')) if (!incoming.has(symbol)) pre += `  ignoredModuleProp('${symbol}');\n`;
    pre += '}\n';
  }
  for (const name of forwarded.extraExports) extraJsExports.add(name);
  const pairs = asmConsts.map(([key, value]) => `${key}: ${value}`);
  if (pairs.length || truthy(settings.get('MAIN_MODULE'))) pre += 'var ASM_CONSTS = {\n  ' + pairs.join(',  \n ') + '\n};\n';
  if (emJsFuncs.length) pre += emJsFuncs.join('\n') + '\n';
  const otherExports = metadata.otherExports.filter(([entry]) => !isInternalGlobal(entry.name));
  const module = createModule(settings, metadata, { functionExports: metadata.functionExports, otherExports,
    librarySymbols: forwarded.librarySymbols, aliases: forwarded.nativeAliases, extraJsExports, nativeSigs });
  settings.set('ALIASES', Object.keys(forwarded.nativeAliases));
  return applyStaticCodeHooks(settings, forwarded, pre + module + post);
}

// js_manipulation.py emscripten_license_regex and handle_license.
const licensePattern = /\/\*\*?(\s*\*?\s*@license)?(\s*\*?\s*Copyright \d+ The Emscripten Authors\s*\*?\s*SPDX-License-Identifier: MIT)+\s*\*\/\s*/g;
const emscriptenLicense = '/**\n * @license\n * Copyright 2010 The Emscripten Authors\n * SPDX-License-Identifier: MIT\n */\n';
export function handleLicense(settings, js) {
  const processed = js.replace(licensePattern, '');
  return truthy(settings.get('EMIT_EMSCRIPTEN_LICENSE')) ? emscriptenLicense + processed : processed;
}
