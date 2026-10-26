// Phase 2 Node link driver, milestone C (docs/TOOLCHAIN_SLIMMING.md): perform
// Lasm's probe (-O0) and final (-Oz -g1) links without emcc or Python. The
// native and JavaScript tools emcc runs (wasm-ld, llvm-objcopy, Binaryen,
// Emscripten's compiler.mjs and acorn-optimizer.mjs) run directly, with the
// arguments recorded from emcc in the versioned recipe; the Python logic
// between them is ported in settings.mjs, metadata.mjs and glue.mjs.
//
// Only Lasm's recorded configuration is accepted: the em++ flags must equal the
// recipe's for the mode, and settings that select unported code paths throw.
// With `intermediates`, every file emcc saves under EMCC_DEBUG=1 is written with
// emcc's name (emcc-NN-name), so each step can be compared with a recording.
import { copyFileSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import path from 'node:path';
import { tmpdir } from 'node:os';
import { scriptPrefix } from '../js-runtime.mjs';
import { executableName } from '../platform.mjs';
import { Settings, instantiateSettings } from './settings.mjs';
import { extractMetadata, updateMetadata } from './metadata.mjs';
import { WasmModule, getWeakImports } from './wasm.mjs';
import { addUnexpectedExports, asmjsMangle, assembleGlue, checkSupportedSettings, createAsmConsts, createEmJs,
  demangleCSymbolName, handleLicense, isCSymbol, isInternalSymbol, updateSettingsGlue } from './glue.mjs';
import { dedupList, pythonJsonDumps, pythonStrip, truthy, universalNewlines } from './python.mjs';

export const linkModes = Object.freeze(['probe', 'final']);
const placeholder = /<([a-z-]+)>/g;

/** tools/response_file.py create_response_file_contents */
export function emscriptenResponseFile(args, platform = process.platform) {
  const escapes = platform === 'win32' ? ['\\', '"'] : ['\\', '"', "'"];
  return args.map(arg => {
    for (const char of escapes) arg = arg.replaceAll(char, '\\' + char);
    return (arg.includes(' ') ? `"${arg}"` : arg) + '\n';
  }).join('');
}

/** Python shlex.join, whose length tools/building.py measures. */
export function shlexJoin(args) {
  return args.map(arg => !arg ? "''" : /[^\w@%+=:,./-]/.test(arg) ? `'${arg.replaceAll("'", `'"'"'`)}'` : arg).join(' ');
}
/** tools/building.py get_command_with_possible_response_file: emcc passes the
 * arguments directly unless shlex.join(cmd) exceeds 7000 characters. The choice
 * matters on Windows, where wasm-ld reads response files with Windows quoting and
 * so keeps the escaped (doubled) backslashes in input names (visible in maps). */
export const responseFileThreshold = 7000;
export function needsResponseFile(command) {
  return [...shlexJoin(command)].length > responseFileThreshold;
}

/** Split Lasm's em++ arguments into what the recipe records as fixed flags and
 * the per-application inputs. Inputs and -Wl, flags keep their order (they
 * become wasm-ld's input list); --start-group/--end-group are dropped as
 * tools/building.py lld_flags does. */
export function parseLinkArguments(recipe, mode, args) {
  // Without a recipe (recipe derivation) only the shape is parsed.
  const spec = recipe && recipe.link?.modes?.[mode];
  if (recipe && !spec) throw new Error(`The link-driver recipe has no ${mode} link`);
  const flags = [];
  const result = { inputs: [], preJs: [], jsLibraries: [], output: null, exportsFile: null, mapFile: null, flags };
  for (let index = 0; index < args.length; index++) {
    const arg = args[index];
    if (['--pre-js', '--js-library', '-o'].includes(arg)) {
      const value = args[++index];
      if (value === undefined) throw new Error(`Option ${arg} requires an argument`);
      if (arg === '--pre-js') result.preJs.push(value);
      else if (arg === '--js-library') result.jsLibraries.push(value);
      else result.output = value;
    } else if (arg.startsWith('-Wl,')) {
      for (const item of arg.slice(4).split(',')) {
        if (item === '--start-group' || item === '--end-group') continue;
        if (item.startsWith('-Map=')) { if (result.mapFile) throw new Error('Repeated link map'); result.mapFile = item.slice(5); }
        result.inputs.push(item);
      }
    } else if (!arg.startsWith('-')) {
      if (!/\.(?:o|a)$/.test(arg)) throw new Error(`Unrecorded link input ${arg}`);
      result.inputs.push(arg);
    } else if (arg.startsWith('-sEXPORTED_FUNCTIONS=@')) {
      result.exportsFile = arg.slice('-sEXPORTED_FUNCTIONS=@'.length);
      flags.push('-sEXPORTED_FUNCTIONS=@<exports>');
    } else flags.push(arg);
  }
  const expected = spec?.emccFlags ?? flags;
  if (flags.length !== expected.length || flags.some((flag, index) => flag !== expected[index]))
    throw new Error(`The Node link driver has no recording for these ${mode} link flags: ${JSON.stringify(flags)}`);
  const extension = spec?.output ?? '.cjs';
  if (!result.output?.endsWith(extension) || !result.exportsFile || !result.mapFile || result.jsLibraries.length !== 1 || !result.preJs.length)
    throw new Error(`The Node link driver needs -o FILE${extension}, -sEXPORTED_FUNCTIONS=@FILE, -Wl,-Map=FILE, --pre-js and one --js-library`);
  return result;
}

/** tools/link.py: -sEXPORTED_FUNCTIONS=@file with a JSON list. */
function readExportsFile(file) {
  const text = universalNewlines(readFileSync(file, 'utf8')).trim();
  if (!text.startsWith('[')) throw new Error('The Node link driver supports only JSON export lists');
  const list = JSON.parse(text);
  if (!Array.isArray(list) || list.some(item => typeof item !== 'string')) throw new Error('Invalid export list');
  return list;
}

/** tools/building.py create_stub_object contents. */
export function stubObject(jsSyms) {
  return ['#STUB', ...Object.entries(jsSyms).filter(([name]) => !name.startsWith('$'))
    .map(([name, deps]) => `${name}: ${deps.join(',')}`)].join('\n');
}

/** tools/link.py run(): native dependencies of the JS symbols the program uses. */
export function addJsDependencies(settings, jsInfo) {
  const jsSyms = jsInfo.deps, required = [...settings.get('REQUIRED_EXPORTS')];
  const add = symbol => { if (Object.hasOwn(jsSyms, symbol) && jsSyms[symbol].length) required.push(...jsSyms[symbol]); };
  for (const symbol of settings.get('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE')) add(symbol);
  for (const symbol of jsInfo.extraLibraryFuncs) add(symbol);
  for (const symbol of settings.get('EXPORTED_RUNTIME_METHODS')) add(demangleCSymbolName(symbol));
  for (const symbol of settings.get('EXPORTED_FUNCTIONS')) add(demangleCSymbolName(symbol));
  settings.set('REQUIRED_EXPORTS', required);
  // tools/link.py phase_calculate_system_libraries… js_info: JS library
  // functions marked async are suspending imports (ASYNCIFY, and JSPI's 2).
  if (truthy(settings.get('ASYNCIFY'))) {
    settings.set('ASYNCIFY_IMPORTS_EXCEPT_JS_LIBS', [...settings.get('ASYNCIFY_IMPORTS')]);
    settings.set('ASYNCIFY_IMPORTS', [...settings.get('ASYNCIFY_IMPORTS'), ...jsInfo.asyncFuncs.map(name => '*.' + name)]);
  }
  // phase_link: remove duplicates added by the driver and libraries.
  for (const key of ['EXPORTED_FUNCTIONS', 'REQUIRED_EXPORTS', 'EXPORT_IF_DEFINED']) settings.set(key, dedupList(settings.get(key)));
  return jsSyms;
}

/** tools/building.py lld_flags_for_executable: the --export lists. */
export function linkerExports(settings, jsSyms) {
  const exports = settings.get('EXPORTED_FUNCTIONS').filter(isCSymbol).map(demangleCSymbolName)
    .filter(name => !Object.hasOwn(jsSyms, name));
  exports.push(...settings.get('REQUIRED_EXPORTS'));
  const kind = truthy(settings.get('ERROR_ON_UNDEFINED_SYMBOLS')) ? '--export=' : '--export-if-defined=';
  return { exports: exports.map(name => kind + name),
    exportIfDefined: settings.get('EXPORT_IF_DEFINED').map(name => `--export-if-defined=${name}`) };
}

/** Expand a recorded argument template. List placeholders occupy a whole
 * argument; path placeholders are joined with the platform's separator. */
export function expandArguments(template, values, platform = process.platform) {
  const paths = platform === 'win32' ? path.win32 : path.posix;
  return template.flatMap(arg => {
    const whole = /^<([a-z-]+)>$/.exec(arg);
    if (whole && Array.isArray(values[whole[1]])) return values[whole[1]];
    const pathMatch = /^(-L|--graph-file=)?<([a-z-]+)>((?:\/[^/<>]+)+)$/.exec(arg);
    if (pathMatch && typeof values[pathMatch[2]] === 'string')
      return [(pathMatch[1] ?? '') + paths.join(values[pathMatch[2]], ...pathMatch[3].slice(1).split('/'))];
    return [arg.replace(placeholder, (match, name) => {
      if (typeof values[name] !== 'string') throw new Error(`Unresolved link-driver placeholder ${match} in ${arg}`);
      return values[name];
    })];
  });
}

const jsSymbolsCache = new Map();

/** tools/link.py: run one link mode. Returns { wasm, js, map } paths. */
export function linkWithNode({ recipe, mode, args, sdk, cache, temp, intermediates, nativeSigs, execute = execFileSync,
  stdio = ['ignore', 'pipe', 'inherit'], timeout = 1800_000, platform = process.platform, warn, mapOnly = false, optimize = true }) {
  // emcc's diagnostics reach the user only when its stderr does (Lasm --verbose).
  warn ??= stdio[2] === 'inherit' ? message => process.stderr.write(`emcc: warning: ${message}\n`) : () => {};
  const spec = recipe.link.modes[mode];
  const parsed = parseLinkArguments(recipe, mode, args);
  const paths = platform === 'win32' ? path.win32 : path.posix;
  const emscripten = sdk.driver;
  // Emscripten's JavaScript tools run on the compiler's own runtime (js-runtime.mjs).
  const node = process.execPath, nodePrefix = scriptPrefix();
  const tool = name => name === 'node' ? node : paths.join(sdk.prefix, 'bin', executableName(name, platform));
  const env = sdk.env;
  mkdirSync(temp, { recursive: true });
  let counter = 0;
  const saveText = (name, text) => { if (intermediates) { mkdirSync(intermediates, { recursive: true }); writeFileSync(path.join(intermediates, `emcc-${String(counter++).padStart(2, '0')}-${name}`), text); } };
  const saveFile = (name, file) => { if (intermediates) { mkdirSync(intermediates, { recursive: true }); copyFileSync(file, path.join(intermediates, `emcc-${String(counter++).padStart(2, '0')}-${name}`)); } };
  const run = (program, argv, { input, capture = false } = {}) => {
    const output = execute(tool(program), program === 'node' ? [...nodePrefix, ...argv] : argv, { env, input, timeout, windowsHide: true, maxBuffer: 512 * 1024 * 1024,
      stdio: [input === undefined ? 'ignore' : 'pipe', capture ? 'pipe' : stdio[1], stdio[2]], encoding: capture ? 'utf8' : undefined });
    return capture ? universalNewlines(output) : output;
  };

  const target = parsed.output, wasm = target.replace(/\.[cm]js$/, '.wasm');
  const settings = new Settings(instantiateSettings(spec.settings, { userExports: readExportsFile(parsed.exportsFile),
    preJs: parsed.preJs, jsLibrary: parsed.jsLibraries[0], emscripten, platform }), recipe.link.settingsDefaults);
  checkSupportedSettings(settings, spec.supported);
  const systemLibraries = paths.join(cache, 'sysroot', 'lib', ...recipe.link.systemLibraryDirectory.split('/'));
  const values = { emscripten, wasm, syslib: systemLibraries, inputs: parsed.inputs };
  const steps = spec.pipeline;
  let step = 0;
  const next = kind => {
    const entry = steps[step++];
    if (entry?.kind !== kind) throw new Error(`The ${mode} link recipe expects ${entry?.kind ?? 'no step'} where the driver runs ${kind}`);
    return entry;
  };

  // JS symbol inventory (tools/link.py get_js_sym_info).
  const settingsJson = settings.serialize();
  saveText('settings.json', settingsJson);
  const symbolsStep = next('symbols');
  // A pure function of the settings and the pinned Emscripten: the probe links
  // of one build share it (src/application-link.mjs plans with several probes).
  const symbolsArgs = expandArguments(symbolsStep.args, values, platform);
  const symbolsKey = createHash('sha256').update(JSON.stringify([tool(symbolsStep.program), symbolsArgs, settingsJson]))
    .update(readFileSync(parsed.jsLibraries[0])).digest('hex');
  let symbolsText = execute === execFileSync ? jsSymbolsCache.get(symbolsKey) : undefined;
  if (symbolsText === undefined) {
    symbolsText = run(symbolsStep.program, symbolsArgs, { input: settingsJson, capture: true });
    if (execute === execFileSync) { jsSymbolsCache.set(symbolsKey, symbolsText); if (jsSymbolsCache.size > 16) jsSymbolsCache.delete(jsSymbolsCache.keys().next().value); }
  }
  const jsInfo = JSON.parse(symbolsText);
  const jsSyms = addJsDependencies(settings, jsInfo);
  const stub = paths.join(temp, 'libemscripten_js_symbols.so');
  writeFileSync(stub, stubObject(jsSyms));

  // wasm-ld (tools/building.py link_lld), through a response file.
  const linkStep = next('wasm-ld');
  const { exports, exportIfDefined } = linkerExports(settings, jsSyms);
  const linkArgs = expandArguments(linkStep.args, { ...values, stub, exports, 'export-if-defined': exportIfDefined }, platform);
  let wasmLdArgs = linkArgs;
  if (needsResponseFile([tool(linkStep.program), ...linkArgs])) {
    const responseFile = paths.join(temp, 'wasm-ld.rsp');
    writeFileSync(responseFile, emscriptenResponseFile(linkArgs, platform));
    wasmLdArgs = ['@' + responseFile];
  }
  // mapOnly 'command': the caller runs wasm-ld itself (concurrent planning probes).
  if (mapOnly === 'command') return { program: tool(linkStep.program), args: wasmLdArgs, env };
  run(linkStep.program, wasmLdArgs);
  // Planning probes (src/application-initialization.mjs) need only wasm-ld's map.
  if (mapOnly) return;

  // finalize_wasm: strip sections, extract metadata, wasm-emscripten-finalize.
  saveFile('base.wasm', wasm);
  saveFile('strip.wasm', wasm);
  const stripStep = next('strip');
  run(stripStep.program, expandArguments(stripStep.args, values, platform));
  const metadata = extractMetadata(readFileSync(wasm), settings);
  // finalize_wasm runs wasm-emscripten-finalize only when the module needs it
  // (the recipe says: Lasm's Node links do, the edge link does not).
  if (steps[step]?.kind === 'finalize') {
    const finalizeStep = next('finalize');
    run(finalizeStep.program, expandArguments(finalizeStep.args, values, platform));
    saveFile('wasm-emscripten-finalize.wasm', wasm);
    updateMetadata(readFileSync(wasm), metadata);
  }
  const userRequestedExports = new Set(settings.get('EXPORTED_FUNCTIONS'));
  addUnexpectedExports(settings, metadata, jsSyms, userRequestedExports);

  // emscripten.py emscript
  settings.set('TARGET_BASENAME', paths.basename(target).replace(/\.[^.]*$/, ''));
  settings.set('TARGET_JS_NAME', paths.basename(target));
  settings.set('WASM_BINARY_FILE', paths.basename(wasm).replaceAll('\\', '/').replaceAll("'", "\\'").replaceAll('"', '\\"'));
  // emscripten.py update_settings_glue reads weak imports for MAIN_MODULE only.
  const features = updateSettingsGlue(settings, metadata, truthy(settings.get('MAIN_MODULE')) ? getWeakImports(new WasmModule(readFileSync(wasm))) : []);
  values.features = features;
  const asmConsts = createAsmConsts(metadata), emJsFuncs = createEmJs(settings, metadata);
  settings.set('EM_JS_SNIPPETS', [...emJsFuncs, ...asmConsts.map(([, func]) => func)]);
  if (metadata.invokeFuncs.length) settings.set('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE', [...settings.get('DEFAULT_LIBRARY_FUNCS_TO_INCLUDE'), '$getWasmTableEntry']);
  const glueSettings = settings.serialize();
  saveText('settings.json', glueSettings);
  const glueStep = next('glue');
  const compiled = run(glueStep.program, expandArguments(glueStep.args, values, platform), { input: glueSettings, capture: true });
  const extraJsExports = new Set();
  const glue = assembleGlue(settings, metadata, compiled, { asmConsts, emJsFuncs, nativeSigs, extraJsExports, warn });
  reportMissingExports(settings, jsInfoSymbols(compiled), warn);
  let finalJs = paths.join(temp, paths.basename(target).replace(/\.[^.]*$/, '') + '.js');
  writeFileSync(finalJs, glue);
  saveFile('original.js', finalJs);

  // tools/link.py phase_binaryen, as recorded.
  let acornCounter = 0, preclean = false;
  const acornOutput = () => paths.join(temp, `${paths.basename(finalJs).replace(/(\.jso\d+)?\.js$/, '')}.jso${++acornCounter}.js`);
  const writeInfo = (prefix, extra) => {
    const info = paths.join(temp, `${prefix}${acornCounter}.js`);
    // shutil.copyfile, then the JSON appended in text mode.
    writeFileSync(info, Buffer.concat([readFileSync(finalJs), Buffer.from('// EXTRA_INFO: ' + pythonJsonDumps(extra))]));
    return info;
  };
  // The dev profile (optimize: false) runs the final link's settings, libraries
  // and glue unchanged but leaves out the size optimizations: Binaryen's wasm-opt
  // and metadce, and the JavaScript dead-code passes tied to them. Every other
  // step (growableHeap, which the glue needs) runs as recorded.
  const sizeOnly = entry => entry.kind === 'wasm-opt' || entry.kind === 'dce-graph' || entry.kind === 'metadce'
    || entry.kind === 'acorn' && ['AJSDCE', 'applyDCEGraphRemovals'].includes(entry.pass);
  if (!optimize && mode !== 'final') throw new Error('Only the final link has an unoptimized (dev) profile');
  while (step < steps.length) {
    const entry = steps[step];
    if (!optimize && sizeOnly(entry)) { step++; continue; }
    if (entry.kind === 'wasm-opt') {
      step++;
      run(entry.program, expandArguments(entry.args, values, platform));
      saveFile('wasm-opt.wasm', wasm);
      saveFile('byn.wasm', wasm);
    } else if (entry.kind === 'acorn') {
      step++;
      const pass = entry.pass;
      if (entry.minify && !preclean) { saveFile('preclean.js', finalJs); saveFile('preclean.wasm', wasm); preclean = true; }
      const output = acornOutput();
      run(entry.program, expandArguments(entry.args, { ...values, js: finalJs, 'js-out': output }, platform));
      finalJs = output;
      saveFile(`${pass}.js`, finalJs);
    } else if (entry.kind === 'dce-graph') {
      step++;
      if (!preclean) throw new Error('The DCE graph step must follow a minify step');
      const graphText = run(entry.program, expandArguments(entry.args, { ...values,
        info: writeInfo('emcc_acorn_info_', { exports: settings.get('WASM_EXPORTS').map(name => [asmjsMangle(name), name]) }) }, platform), { capture: true });
      const { graph, importNames, exportNames } = prepareDceGraph(settings, JSON.parse(graphText), userRequestedExports, extraJsExports);
      const graphFile = paths.join(temp, 'emcc_dce_graph.json');
      writeFileSync(graphFile, pythonJsonDumps(graph, { indent: 2 }));
      const metadce = next('metadce');
      const out = run(metadce.program, expandArguments(metadce.args, { ...values, graph: graphFile }, platform), { capture: true });
      saveFile('wasm-metadce.wasm', wasm);
      const unused = unusedFromMetadce(settings, out, importNames, exportNames);
      const removal = steps[step];
      if (removal?.kind !== 'acorn' || removal.pass !== 'applyDCEGraphRemovals') throw new Error('The recipe must remove the DCE graph results');
      step++;
      if (unused.unusedImports.length || unused.unusedExports.length) {
        const info = writeInfo('emcc_acorn_info_removals_', unused);
        const output = acornOutput();
        run(removal.program, expandArguments(removal.args, { ...values, info, 'js-out': output }, platform));
        finalJs = output;
        saveFile('applyDCEGraphRemovals.js', finalJs);
      }
    } else if (entry.kind === 'minify-names') {
      // tools/building.py minify_wasm_imports_and_exports (the edge Asyncify
      // link: MINIFY_WASM_IMPORTS_AND_EXPORTS): wasm-opt renames the imports
      // and exports and prints the mapping, which the next acorn pass applies.
      step++;
      const mapping = parseMinifiedNames(run(entry.program, expandArguments(entry.args, values, platform), { capture: true }));
      saveFile('wasm-opt.wasm', wasm);
      const apply = steps[step];
      if (apply?.kind !== 'acorn' || apply.pass !== 'applyImportAndExportNameChanges') throw new Error('The recipe must apply the minified names');
      step++;
      const output = acornOutput();
      run(apply.program, expandArguments(apply.args, { ...values, info: writeInfo('emcc_acorn_info_', { mapping }), 'js-out': output }, platform));
      finalJs = output;
      saveFile('applyImportAndExportNameChanges.js', finalJs);
    } else if (entry.kind === 'modularize') {
      // tools/link.py modularize(): src/modularize.js, preprocessed with the
      // current settings and minified on its own, wraps the final JS.
      step++;
      if (preclean) { saveFile('postclean.js', finalJs); saveFile('postclean.wasm', wasm); preclean = false; }
      const modularizeSettings = settings.serialize();
      saveText('settings.json', modularizeSettings);
      const cwd = expandArguments([entry.cwd], values, platform)[0];
      let wrapper = universalNewlines(execute(tool(entry.program), expandArguments(entry.args, values, platform),
        { env, input: modularizeSettings, cwd, timeout, windowsHide: true, maxBuffer: 512 * 1024 * 1024,
          stdio: ['pipe', 'pipe', stdio[2]], encoding: 'utf8' }));
      if (entry.minify) {
        const source = paths.join(temp, 'modularize.js'), minified = paths.join(temp, 'modularize.min.js');
        writeFileSync(source, wrapper);
        run(entry.program, expandArguments(entry.minify, { ...values, js: source, 'js-out': minified }, platform));
        wrapper = readFileSync(minified, 'utf8');
        saveFile('--minify-whitespace.js', minified);
      }
      const pattern = '"<<< INNER_JS_CODE >>>"';
      if (!wrapper.includes(pattern)) throw new Error(`expected to find pattern in input JS: ${pattern}`);
      const modular = finalJs + '.modular.js';
      // shared.py do_replace: str.replace, every occurrence.
      writeFileSync(modular, wrapper.split(pattern).join(readFileSync(finalJs, 'utf8')));
      finalJs = modular;
      saveFile('modularized.js', finalJs);
    } else throw new Error(`Unknown link-driver step ${entry.kind}`);
  }
  if (preclean) { saveFile('postclean.js', finalJs); saveFile('postclean.wasm', wasm); }

  // phase_final_emitting: license handling, then the JS reaches its target.
  writeFileSync(target, handleLicense(settings, universalNewlines(readFileSync(finalJs, 'utf8'))));
  return { wasm, js: target, map: parsed.mapFile, requiredExports: [...userRequestedExports] };
}

/** tools/building.py minify_wasm_imports_and_exports: wasm-opt's mapping,
 * either "OLD => NEW" lines or JSON { imports: [[module, old, new]], exports:
 * [[old, new]] }. Insertion order is Python's dict order. */
export function parseMinifiedNames(out) {
  const mapping = {};
  const add = (old, name, what) => {
    if (Object.hasOwn(mapping, old)) throw new Error(`assertion failed: ${what} must be unique`);
    if (/^(?:0|[1-9]\d*)$/.test(old)) throw new Error(`Unsupported minified name ${old}`);
    mapping[old] = name;
  };
  if (!out || out[0] !== '{') {
    for (const line of out.split('\n')) {
      if (!line.includes(' => ')) continue;
      const parts = pythonStrip(line).split(' => ');
      if (parts.length !== 2) throw new Error(`Unexpected minified-name line ${line}`);
      add(parts[0], parts[1], 'imports');
    }
  } else {
    const parsed = JSON.parse(out);
    for (const [, old, name] of parsed.imports) add(old, name, 'imports');
    for (const [old, name] of parsed.exports) add(old, name, 'exports');
  }
  return mapping;
}

function jsInfoSymbols(compiled) {
  const at = compiled.indexOf('//FORWARDED_DATA:');
  return JSON.parse(compiled.slice(at + '//FORWARDED_DATA:'.length)).librarySymbols;
}

/** emscripten.py report_missing_exports (warnings only; IGNORE_MISSING_MAIN). */
function reportMissingExports(settings, librarySymbols, warn) {
  const defined = new Set([...settings.get('WASM_EXPORTS').map(asmjsMangle), ...librarySymbols]);
  for (const symbol of [...new Set(settings.get('USER_EXPORTS'))].filter(name => !defined.has(name)).sort())
    warn(`undefined exported symbol: "${symbol}" [-Wundefined]`);
}

const wasiImports = new Set(['environ_get', 'environ_sizes_get', 'args_get', 'args_sizes_get', 'fd_write', 'fd_close',
  'fd_read', 'fd_seek', 'fd_fdstat_get', 'fd_sync', 'fd_pread', 'fd_pwrite', 'proc_exit', 'clock_res_get',
  'clock_time_get', 'path_open', 'random_get']);

/** tools/building.py metadce: mark roots and WASI imports in the graph. */
export function prepareDceGraph(settings, graph, userRequestedExports, extraJsExports) {
  const required = new Set([...userRequestedExports, ...extraJsExports, ...settings.get('SIDE_MODULE_IMPORTS')]);
  for (const item of graph) if ('export' in item && (truthy(settings.get('EXPORT_ALL')) || required.has(asmjsMangle(item.export)))) item.root = true;
  for (const item of graph) if ('import' in item && wasiImports.has(item.import[1])) item.import[0] = settings.get('WASI_MODULE_NAME');
  const importNames = new Map(), exportNames = new Map(), sideImports = new Set(settings.get('SIDE_MODULE_IMPORTS'));
  for (const item of graph) {
    if ('import' in item) {
      importNames.set(item.name, item.import[1]);
      if (sideImports.has(asmjsMangle(item.import[1]))) item.root = true;
    } else if ('export' in item) exportNames.set(item.name, item.export);
  }
  return { graph, importNames, exportNames };
}

/** tools/building.py metadce: parse wasm-metadce's unused list. */
export function unusedFromMetadce(settings, output, importNames, exportNames) {
  const unusedImports = [], unusedExports = [];
  for (const line of output.split(/\r?\n/)) {
    if (!line.startsWith('unused:')) continue;
    const name = line.slice('unused:'.length).trim();
    if (truthy(settings.get('MAIN_MODULE')) && ['wasmMemory', 'wasmTable'].includes(name.split('$').at(-1))) continue;
    if (name.startsWith('emcc$import$')) unusedImports.push(importNames.get(name));
    else if (name.startsWith('emcc$export$') && truthy(settings.get('DECLARE_ASM_MODULE_EXPORTS'))) {
      const native = exportNames.get(name);
      if (!isInternalSymbol(native)) unusedExports.push(native);
    }
  }
  return { unusedImports, unusedExports };
}

/** A private temporary directory for one link, inside Lasm's build directory. */
// Node's mkdtemp, unlike its other fs calls, does not add the Windows long-path
// prefix, so a deep project failed with ENAMETOOLONG (upstream Lake test
// packageOverrides on windows-2025). Create it namespaced and return the
// ordinary path, which Node fs and the LLVM tools both accept beyond MAX_PATH.
// Binaryen's tools open their inputs with MAX_PATH-limited Windows paths, so a link
// inside a deep project failed (emcc_dce_graph.json at 278 characters in upstream
// packageOverrides). On Windows the temporary files go to the short system
// temporary directory; the delivered files stay in the build directory.
export function linkTemporaryDirectory(work, mode) {
  const base = process.platform === 'win32' ? tmpdir() : work;
  const created = mkdtempSync(path.toNamespacedPath(path.join(base, `node-link-${mode}-`)));
  return process.platform === 'win32' ? created.replace(/^\\\\\?\\UNC\\/, '\\\\').replace(/^\\\\\?\\/, '') : created;
}
export const removeTemporary = directory => rmSync(directory, { recursive: true, force: true });

const bundledSigs = new Map();
/** tools/native_sigs.py for the pinned Emscripten, as data (checked against the recipe). */
export function bundledNativeSigs(recipe) {
  const { file, sha256 } = recipe.link.nativeSigs;
  if (!bundledSigs.has(file)) {
    const bytes = readFileSync(new URL(`./${file}`, import.meta.url));
    if (createHash('sha256').update(bytes).digest('hex') !== sha256) throw new Error(`The link-driver data file ${file} does not match the recipe`);
    bundledSigs.set(file, JSON.parse(bytes.toString('utf8')));
  }
  return bundledSigs.get(file);
}
