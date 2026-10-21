// Shared object compilation and linking for ordinary generated Lean C and
// unchanged upstream foreign-runtime test drivers. The CLI owns provisioning,
// project discovery and caching; this helper uses its verified inputs.
import { writeFile } from 'node:fs/promises';
import { copyFileSync, existsSync, mkdirSync, readdirSync, readFileSync, renameSync, rmSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { join } from 'node:path';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { readApplicationSymbols, readInitializationFreeCppSymbols } from './application-symbols.mjs';
import { readApplicationLinkRequirements, reachabilityRegistry, canSpecializeInitialization, selectiveInitialization } from './application-reachability.mjs';
import { requireAotApplication } from './application-policy.mjs';
import { describeLibrary, dynamicLoadingStubs, librariesForUndefinedSymbols, undefinedSymbols as linkUndefinedSymbols, UnsupportedNativeLibrary } from './application-native.mjs';
import { cInitTargets, coreInitTargets, initializerWrappers, planInitializers, readLiveSymbols } from './application-initialization.mjs';
import { archiveMembers, explainRejection, parseWhyExtract, undefinedSymbols } from './application-diagnosis.mjs';
import { executableName, responseFile } from './platform.mjs';
import { bundledRecipe, checkToolchainIdentity, compileObject, emscriptenCache } from './link-driver/compile.mjs';
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

/** Link drivers (docs/TOOLCHAIN_SLIMMING.md Phase 2), internal maintainer switch
 * LASM_LINK_DRIVER:
 *   'node'          the default: compiles with clang and performs both links with
 *                   the Node link driver (src/link-driver/link.mjs) using the
 *                   managed link toolchain (src/managed-link-toolchain.mjs): no
 *                   emcc and no Python;
 *   'emcc'          maintainer comparison and recording: emcc from the full
 *                   managed SDK and its private Python;
 *   'node-compile'  milestone B: Node/clang compiles, emcc still links (full SDK). */
export const linkDrivers = Object.freeze(['emcc', 'node-compile', 'node']);
export const defaultLinkDriver = 'node';
export function selectedLinkDriver(value = process.env.LASM_LINK_DRIVER) {
  if (value === undefined || value === '') return defaultLinkDriver;
  if (linkDrivers.includes(value)) return value;
  throw new Error(`Unsupported LASM_LINK_DRIVER ${JSON.stringify(value)}`);
}

/** Diagnostics for a rejected probe link; never masks the rejection itself. */
function rejectionExplanation({ requirements, whyExtractFile, objects, runtime, nm }) {
  try {
    const nmText = args => execFileSync(nm, args, { encoding: 'utf8', maxBuffer: 1024 * 1024 * 1024, stdio: ['ignore', 'pipe', 'ignore'] });
    const members = runtime.manifest.libraries.filter(name => !/lib(?:lasmsymbols|gmp)\.a$/.test(name))
      .flatMap(name => archiveMembers(join(runtime.directory, name), nmText([join(runtime.directory, name)])));
    return explainRejection({ rows: parseWhyExtract(readFileSync(whyExtractFile, 'utf8')), userObjects: objects, requirements,
      members, userSymbols: undefinedSymbols(nmText(['--undefined-only', ...objects])) });
  } catch { return []; }
}

export async function linkApplication({ sources, sdk, runtime, work, dist, leanVersion, memoryMode, verbose = true, progress,
  linkDriver = selectedLinkDriver(), linkIntermediates, objectCache, initialization = process.env.LASM_INITIALIZATION, nativeCompilations = [], nativeUnavailable = [] }) {
  let initializationPlan;
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
  if (nodeCompile) checkToolchainIdentity(recipe, sdk);
  // Tool diagnostics as emcc shows them: inherited with --verbose, else captured for the error reporter.
  const toolStdio = verbose ? ['ignore', 'inherit', 'inherit'] : ['ignore', 'pipe', 'pipe'];
  const runLinkOnce = (mode, args, { mapOnly = false } = {}) => {
    if (!nodeLink) return execute('em++', args);
    const temp = linkTemporaryDirectory(work, mode);
    try {
      return linkWithNode({ recipe, mode, args: args.flatMap(arg => arg.startsWith('@') ? readResponseArguments(arg.slice(1)) : [arg]),
        sdk, cache: emscriptenCache(sdk), temp, intermediates: linkIntermediates && join(linkIntermediates, mode),
        nativeSigs: bundledNativeSigs(recipe), stdio: toolStdio, mapOnly });
    } finally { removeTemporary(temp); }
  };
  // A link that fails on undefined symbols names the native libraries the program
  // declared but Lasm could not compile, and known prebuilt libraries by symbol.
  const runLink = (...args) => {
    try { return runLinkOnce(...args); }
    catch (error) {
      const output = `${error.stderr ?? ''}\n${error.stdout ?? ''}\n${error.message ?? ''}`;
      const symbols = linkUndefinedSymbols(output);
      const known = librariesForUndefinedSymbols(output).filter(({ library }) => !nativeUnavailable.some(item => describeLibrary(item.library).name === library));
      if (symbols.length && (nativeUnavailable.length || known.length))
        throw Object.assign(new UnsupportedNativeLibrary([...nativeUnavailable, ...known.map(({ library }) => ({ library }))], symbols), { cause: error });
      throw error;
    }
  };
  const compile = (source, object) => nodeCompile
    ? compileObject({ sdk, flags: compileFlags, source, object, settings: {
      stdio: verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024 } })
    : execute('emcc', [...compileFlags, '-c', source, '-o', object]);
  const objects = [];
  // Unchanged generated C reuses its object from the project's previous build:
  // the key covers the C bytes, the compiler flags (without the runtime path),
  // the runtime identity, the compiler tools and the link driver.
  const objectKey = source => createHash('sha256').update(JSON.stringify({ schema: 1, runtime: runtime.identity, linkDriver,
    tools: sdk.toolchain ?? sdk.driverIdentity ?? null, flags: compileFlags.filter(flag => flag !== join(runtime.directory, 'include')) }))
    .update(readFileSync(source)).digest('hex');
  const usedObjects = new Set();
  if (objectCache) mkdirSync(objectCache, { recursive: true });
  for (let index = 0; index < sources.length; index++) {
    progress?.({ stage: `Compiling application module ${index + 1} of ${sources.length}` });
    const object = join(work, `module-${index}.o`);
    const cached = objectCache && join(objectCache, objectKey(sources[index]) + '.o');
    if (cached && existsSync(cached)) copyFileSync(cached, object);
    else {
      compile(sources[index], object);
      if (cached) { const partial = cached + '.' + process.pid + '.partial'; copyFileSync(object, partial); renameSync(partial, cached); }
    }
    if (cached) usedObjects.add(cached);
    objects.push(object);
  }
  // Package C code (src/application-native.mjs), linked like archive members:
  // only objects that the program reaches are kept.
  const nativeObjects = [];
  for (let index = 0; index < nativeCompilations.length; index++) {
    const item = nativeCompilations[index];
    progress?.({ stage: `Compiling package C code ${index + 1} of ${nativeCompilations.length}` });
    const object = join(work, `native-${index}.o`);
    const key = createHash('sha256').update(JSON.stringify({ schema: 1, native: item.identity, args: item.extraArgs, runtime: runtime.identity,
      linkDriver, tools: sdk.toolchain ?? sdk.driverIdentity ?? null })).update(readFileSync(item.source)).digest('hex');
    const cached = objectCache && join(objectCache, key + '.o');
    if (cached && existsSync(cached)) copyFileSync(cached, object);
    else {
      if (!nodeCompile) throw new Error('Package C code requires the Node compile driver');
      compileObject({ sdk, flags: compileFlags, source: item.source, object, extraArgs: item.extraArgs, settings: {
        stdio: verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024, cwd: item.cwd } });
      if (cached) { const partial = cached + '.' + process.pid + '.partial'; copyFileSync(object, partial); renameSync(partial, cached); }
    }
    if (cached) usedObjects.add(cached);
    nativeObjects.push(object);
  }
  if (nativeObjects.length) {
    const stubC = join(work, 'package-dl.c'), stubObject = join(work, 'package-dl.o');
    await writeFile(stubC, dynamicLoadingStubs); compile(stubC, stubObject); nativeObjects.push(stubObject);
  }
  const nativeInputs = nativeObjects.length ? ['-Wl,--start-lib', ...nativeObjects, '-Wl,--end-lib'] : [];
  // Keep only this build's objects; the cache never grows across edits.
  if (objectCache) for (const name of readdirSync(objectCache))
    if (!usedObjects.has(join(objectCache, name))) rmSync(join(objectCache, name), { force: true });
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
  // A C entry point `int main(void)` defines only __main_void. The exported `main`
  // (__main_argc_argv) would then resolve to the first archive member defining it:
  // since Lean 4.35, upstream LeanExport's tool `main`, which pulls Lean's compiler
  // (upstream misc_dir/rc_sticky was rejected). Define it as Emscripten's libc does.
  const definedEntries = new Set(objects.flatMap(file => execFileSync(join(sdk.prefix, 'bin', executableName('llvm-nm')),
    ['--defined-only', '--extern-only', '--just-symbol-name', file], { encoding: 'utf8', maxBuffer: 64 * 1024 * 1024, windowsHide: true })
    .split(/\r?\n/)));
  const entryObject = join(work, 'entry.o');
  if (definedEntries.has('__main_void') && !definedEntries.has('__main_argc_argv')) {
    const entryC = join(work, 'entry.c');
    await writeFile(entryC, 'int __main_void(void);\nint __main_argc_argv(int argc, char **argv) { return __main_void(); }\n');
    compile(entryC, entryObject);
    initializationInputs.push(entryObject);
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
  const mapFile = join(work, 'reachability.map'), whyExtractFile = join(work, 'why-extract.txt');
  // The checked loader transformations use LF templates. Emscripten otherwise
  // defaults to host line endings, making identical Windows output look like
  // semantic drift. Ask the pinned driver to emit the same format everywhere.
  const linkWith = exports => ['--output-eol=linux', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`, '-sMALLOC=mimalloc',
    '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exports}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
    '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2',
    '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
    `-sMAXIMUM_MEMORY=${memoryMode === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
    '-Wno-experimental', '-Wno-pthreads-mem-growth', '-Wl,--start-group',
    ...runtime.manifest.libraries.map(name => join(runtime.directory, name)), '-Wl,--end-group',
    ...preJs.flatMap(file => ['--pre-js', file]),
    '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', join(dist, 'program.cjs')];
  const link = linkWith(exportsFile);
  const argumentsFile = join(work, 'link.rsp');
  // Runtime initialization plan (src/application-initialization.mjs): initializers
  // of build-time-only modules (tactics, elaborators, attributes) are not linked.
  const planInputs = [];
  if (!['all', 'native'].includes(initialization)) {
    const wrappersC = join(work, 'initializers.c'), wrappersObject = join(work, 'initializers.o');
    const planMap = join(work, 'initializers.map'), planArguments = join(work, 'initializers.rsp');
    const bodiesExports = join(work, 'initializers-exports.json');
    await writeFile(bodiesExports, JSON.stringify(['_main', '_malloc', '_free']) + '\n');
    progress?.({ stage: 'Planning runtime initialization' });
    const plan = await planInitializers({ objects, archives: runtime.manifest.libraries.map(name => join(runtime.directory, name)),
      log: verbose ? message => console.error(message) : () => {},
      forceKeep: process.env.LASM_INITIALIZATION_KEEP ? new RegExp(process.env.LASM_INITIALIZATION_KEEP) : undefined,
      initTargets: (core => core && new Set([...core, ...sources.flatMap(file => cInitTargets(readFileSync(file, 'utf8')))]))(coreInitTargets(leanVersion)),
      async probe(source, wrapFlags, { bodies = false, exclude } = {}) {
        await writeFile(wrappersC, source); compile(wrappersC, wrappersObject);
        await writeFile(planArguments, responseFile([...objects.filter(file => file !== exclude), ...nativeInputs, probeObject, wrappersObject,
          ...initializationInputs.filter(file => !bodies || file !== entryObject),
          '-O0', '-Wl,-Map=' + planMap, ...wrapFlags, ...linkWith(bodies ? bodiesExports : exportsFile)]));
        runLink('probe', ['@' + planArguments], { mapOnly: true });
        return readLiveSymbols(planMap);
      } });
    if (plan?.skipped.length && !plan.shared.length) {
      await writeFile(wrappersC, initializerWrappers(plan.units, plan.closure, { keep: plan.keep }));
      compile(wrappersC, wrappersObject);
      planInputs.push(wrappersObject, ...plan.wrap);
      initializationPlan = { units: plan.closure.length, kept: plan.keep.size, skipped: plan.skipped.length };
    } else if (plan) initializationPlan = { units: plan.closure.length, kept: plan.closure.length, skipped: 0,
      ...(plan.shared.length ? { sharedGlobals: plan.shared.slice(0, 20) } : {}) };
  }
  // Classify the live graph before expensive optimization. In particular, a
  // runtime evaluator must not optimize the full compiler twice.
  await writeFile(argumentsFile, responseFile([...objects, ...nativeInputs, probeObject, ...initializationInputs, ...planInputs,
    '-O0', '-Wl,-Map=' + mapFile, '-Wl,--why-extract=' + whyExtractFile, ...link]));
  progress?.({ stage: 'Checking required runtime code' });
  runLink('probe', ['@' + argumentsFile]);
  const requirements = await readApplicationLinkRequirements(mapFile, analysis);
  requirements.specializedInitialization = specializeInitialization && requirements.mode === 'static';
  if (initializationPlan) requirements.initializationPlan = initializationPlan;
  // Fail during the build, before a full-runtime link or module-data packaging.
  // The executable under analysis is temporary and is never delivered.
  try { requireAotApplication(requirements); }
  catch (error) {
    if (error.code !== 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE') throw error;
    requireAotApplication(requirements, { explanation: rejectionExplanation({ requirements, whyExtractFile, objects, runtime,
      nm: join(sdk.prefix, 'bin', executableName('llvm-nm')) }) });
  }
  {
    // The lookup marker is dead. Omit its object from the final link so no
    // delivered executable contains a null implementation of dynamic lookup.
    // -g1 preserves checked JS loader shapes without Wasm names or DWARF.
    const finalMap = join(work, 'final.map');
    // Maintainer diagnostics only: LASM_LINK_DEBUG delivers the unoptimized probe link (with Wasm names).
    const debug = !!process.env.LASM_LINK_DEBUG;
    await writeFile(argumentsFile, responseFile([...objects, ...nativeInputs, ...initializationInputs, ...planInputs,
      ...(debug ? ['-O0'] : ['-Oz', '-g1']), '-Wl,-Map=' + finalMap, ...link]));
    progress?.({ stage: 'Linking application and Lean runtime' });
    runLink(debug ? 'probe' : 'final', ['@' + argumentsFile]);
    const finalRequirements = await readApplicationLinkRequirements(finalMap, analysis);
    requireAotApplication(finalRequirements);
  }
  progress?.({ stage: 'Preparing the application launcher' });
  const glue = join(dist, 'program.cjs');
  writeFileSync(glue, connectLeanSymbolLoader(relabelPreJs(readFileSync(glue, 'utf8'), preJs), true, { packageSymbols: true }));
  await indexFunctionTable(join(dist, 'program.wasm'), glue);
  if (!process.env.LASM_LINK_DEBUG) writeFileSync(glue, optimizeMainTableGrowth(readFileSync(glue, 'utf8')));
  return requirements;
}
