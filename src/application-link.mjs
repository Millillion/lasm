// Shared object compilation and linking for ordinary generated Lean C and
// unchanged upstream foreign-runtime test drivers. The CLI owns provisioning,
// project discovery and caching; this helper uses its verified inputs.
import { writeFile } from 'node:fs/promises';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { readApplicationSymbols, readInitializationFreeCppSymbols } from './application-symbols.mjs';
import { readApplicationLinkRequirements, reachabilityRegistry, canSpecializeInitialization, selectiveInitialization } from './application-reachability.mjs';
import { requireAotApplication } from './application-policy.mjs';
import { executableName, responseFile } from './platform.mjs';
import { bundledRecipe, compileObject, emscriptenCache } from './link-driver/compile.mjs';
import { bundledNativeSigs, linkTemporaryDirectory, linkWithNode, removeTemporary } from './link-driver/link.mjs';
import { connectLeanSymbolLoader } from '../scripts/full-lean/lean-symbol-loader.mjs';
import { indexFunctionTable } from '../scripts/full-lean/function-table-index.mjs';
import { optimizeMainTableGrowth } from '../scripts/full-lean/table-growth.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));

/** src/platform.mjs responseFile, read back (one JSON-quoted argument per line). */
const readResponseArguments = file => readFileSync(file, 'utf8').split('\n').filter(Boolean).map(line => line.slice(1, -1).replace(/\\(.)/g, '$1'));

/** Emscripten labels each --pre-js in the glue with the path it was given.
 * Name these files only by basename, so program.cjs does not depend on the
 * package location or the random build directory. Comments only; no code.
 * Each label must occur exactly once (separators compared portably). */
export function relabelPreJs(glue, files) {
  const portable = path => path.replaceAll('\\', '/');
  const wanted = new Map(files.map(file => [portable(file), portable(file).split('/').pop()]));
  const seen = new Map();
  const result = glue.replace(/^(\/\/ (?:end )?include: )(.*)$/gm, (line, marker, path) => {
    const name = wanted.get(portable(path));
    if (name === undefined) return line;
    seen.set(marker + path, (seen.get(marker + path) ?? 0) + 1);
    return marker + name;
  });
  if (seen.size !== 2 * files.length || [...seen.values()].some(count => count !== 1))
    throw new Error('Unexpected Emscripten pre-js labels in the application glue');
  return result;
}

/** Experimental (docs/TOOLCHAIN_SLIMMING.md Phase 2), internal maintainer switch
 * LASM_LINK_DRIVER; the default remains emcc.
 *   'node'          compiles with the SDK's clang and performs both links with
 *                   the Node link driver (src/link-driver/link.mjs): no emcc and
 *                   no Python;
 *   'node-compile'  milestone B: Node/clang compiles, emcc still links. */
export const linkDrivers = Object.freeze(['emcc', 'node-compile', 'node']);
export function selectedLinkDriver(value = process.env.LASM_LINK_DRIVER) {
  if (value === undefined || value === '') return 'emcc';
  if (linkDrivers.includes(value)) return value;
  throw new Error(`Unsupported LASM_LINK_DRIVER ${JSON.stringify(value)}`);
}

export async function linkApplication({ sources, sdk, runtime, work, dist, leanVersion, memoryMode, verbose = true, progress,
  linkDriver = selectedLinkDriver(), linkIntermediates }) {
  if (![1, 2].includes(memoryMode)) throw new Error('Invalid application memory mode');
  // The recipe records memory mode 1 only (MEMORY64=1, 8 GiB maximum).
  if (linkDriver === 'node' && memoryMode !== 1) throw new Error('The Node link driver has no recording for this memory mode');
  if (!Array.isArray(sources) || !sources.length) throw new Error('Application C sources are required');
  if (leanVersion !== runtime.manifest.lean) throw new Error('Application and runtime versions differ');
  const compileFlags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN',
    '-sMEMORY64=1', '-ffunction-sections', '-fdata-sections', '-I', join(runtime.directory, 'include')];
  // Ordinary CLI users need Lean diagnostics and build progress. Detailed
  // generated-C/SDK warnings remain available with --verbose; failures retain
  // their captured diagnostics for the CLI's error reporter.
  if (!linkDrivers.includes(linkDriver)) throw new Error('Invalid application link driver');
  const nodeLink = linkDriver === 'node', nodeCompile = linkDriver !== 'emcc';
  // The Node driver never runs emcc, em++ or Python: any SDK driver call is a bug.
  const execute = nodeLink ? tool => { throw new Error(`The Node link driver must not run ${tool}`); }
    : (tool, args) => sdk.execute(tool, args, {
      stdio: verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024,
    });
  if (nodeCompile && !existsSync(join(emscriptenCache(sdk), 'sysroot_install.stamp')))
    throw new Error('The Node compile driver needs installed Emscripten system headers (a prebuilt or emcc-initialized cache)');
  const recipe = nodeCompile ? bundledRecipe() : undefined;
  // Tool diagnostics as emcc shows them: inherited with --verbose, else captured for the error reporter.
  const toolStdio = verbose ? ['ignore', 'inherit', 'inherit'] : ['ignore', 'pipe', 'pipe'];
  const runLink = (mode, args) => {
    if (!nodeLink) return execute('em++', args);
    const temp = linkTemporaryDirectory(work, mode);
    try {
      return linkWithNode({ recipe, mode, args: args.flatMap(arg => arg.startsWith('@') ? readResponseArguments(arg.slice(1)) : [arg]),
        sdk, cache: emscriptenCache(sdk), temp, intermediates: linkIntermediates && join(linkIntermediates, mode),
        nativeSigs: bundledNativeSigs(recipe), stdio: toolStdio });
    } finally { removeTemporary(temp); }
  };
  const compile = (source, object) => nodeCompile
    ? compileObject({ sdk, flags: compileFlags, source, object, settings: {
      stdio: verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024 } })
    : execute('emcc', [...compileFlags, '-c', source, '-o', object]);
  const objects = [];
  for (let index = 0; index < sources.length; index++) {
    progress?.({ stage: `Compiling application module ${index + 1} of ${sources.length}` });
    const object = join(work, `module-${index}.o`);
    compile(sources[index], object);
    objects.push(object);
  }
  progress?.({ stage: 'Preparing application symbols' });
  const registry = readApplicationSymbols(sources, objects, join(sdk.prefix, 'bin', executableName('llvm-nm')),
    runtime.manifest.applicationSymbolHook);
  const probeC = join(work, 'reachability.c'), probeObject = join(work, 'reachability.o');
  await writeFile(probeC, reachabilityRegistry);
  compile(probeC, probeObject);
  const initializeObject = join(work, 'initialization.o');
  const specializeInitialization = canSpecializeInitialization(runtime);
  const analysis = { initializationFreeCppSymbols: specializeInitialization
    ? readInitializationFreeCppSymbols(join(runtime.directory, 'lib/libleancpp.a'),
      join(sdk.prefix, 'bin', executableName('llvm-nm'))) : new Set() };
  const initializationInputs = [];
  if (specializeInitialization) {
    const initializeC = join(work, 'initialization.c'); await writeFile(initializeC, selectiveInitialization);
    compile(initializeC, initializeObject);
    initializationInputs.push(initializeObject, '-Wl,--wrap=lean_initialize');
  }
  const exportsFile = join(work, 'exports.json');
  // Explicit application C exports remain roots. Ordinary Lean declarations,
  // data and imported standard libraries follow the linker's reachability.
  const staticExports = [...new Set(['_main', '_malloc', '_free', ...registry.foreignExports])].sort();
  await writeFile(exportsFile, JSON.stringify(staticExports) + '\n');
  // Bake the verified release into the private runtime prelude. It must not
  // depend on mutable process environment or alter Lean's visible environment.
  const applicationPrelude = join(work, 'application-pre.js');
  await writeFile(applicationPrelude, `Module.lasmLeanVersion = ${JSON.stringify(leanVersion)};\n`);
  const preJs = [join(root, 'scripts/full-lean/emscripten-pre.js'), applicationPrelude, join(root, 'scripts/full-lean/host-pre.js')];
  const mapFile = join(work, 'reachability.map');
  // The checked loader transformations use LF templates. Emscripten otherwise
  // defaults to host line endings, making identical Windows output look like
  // semantic drift. Ask the pinned driver to emit the same format everywhere.
  const link = ['--output-eol=linux', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`, '-sMALLOC=mimalloc',
    '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
    '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2',
    '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
    `-sMAXIMUM_MEMORY=${memoryMode === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
    '-Wno-experimental', '-Wno-pthreads-mem-growth', '-Wl,--start-group',
    ...runtime.manifest.libraries.map(name => join(runtime.directory, name)), '-Wl,--end-group',
    ...preJs.flatMap(file => ['--pre-js', file]),
    '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', join(dist, 'program.cjs')];
  const argumentsFile = join(work, 'link.rsp');
  // Classify the live graph before expensive optimization. In particular, a
  // runtime evaluator must not optimize the full compiler twice.
  await writeFile(argumentsFile, responseFile([...objects, probeObject, ...initializationInputs,
    '-O0', '-Wl,-Map=' + mapFile, ...link]));
  progress?.({ stage: 'Checking required runtime code' });
  runLink('probe', ['@' + argumentsFile]);
  const requirements = await readApplicationLinkRequirements(mapFile, analysis);
  requirements.specializedInitialization = specializeInitialization && requirements.mode === 'static';
  // Fail during the build, before a full-runtime link or module-data packaging.
  // The executable under analysis is temporary and is never delivered.
  requireAotApplication(requirements);
  {
    // The lookup marker is dead. Omit its object from the final link so no
    // delivered executable contains a null implementation of dynamic lookup.
    // -g1 preserves checked JS loader shapes without Wasm names or DWARF.
    const finalMap = join(work, 'final.map');
    await writeFile(argumentsFile, responseFile([...objects, ...initializationInputs, '-Oz', '-g1', '-Wl,-Map=' + finalMap, ...link]));
    progress?.({ stage: 'Linking application and Lean runtime' });
    runLink('final', ['@' + argumentsFile]);
    const finalRequirements = await readApplicationLinkRequirements(finalMap, analysis);
    requireAotApplication(finalRequirements);
  }
  progress?.({ stage: 'Preparing the application launcher' });
  const glue = join(dist, 'program.cjs');
  writeFileSync(glue, connectLeanSymbolLoader(relabelPreJs(readFileSync(glue, 'utf8'), preJs), true, { packageSymbols: true }));
  await indexFunctionTable(join(dist, 'program.wasm'), glue);
  writeFileSync(glue, optimizeMainTableGrowth(readFileSync(glue, 'utf8')));
  return requirements;
}
