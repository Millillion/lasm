// Shared object compilation and linking for ordinary generated Lean C and
// unchanged upstream foreign-runtime test drivers. The CLI owns provisioning,
// project discovery and caching; this helper uses its verified inputs.
import { readFile, writeFile } from 'node:fs/promises';
import { readFileSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { readApplicationSymbols } from './application-symbols.mjs';
import { executableName, responseFile } from './platform.mjs';
import { connectLeanSymbolLoader } from '../scripts/full-lean/lean-symbol-loader.mjs';
import { indexFunctionTable } from '../scripts/full-lean/function-table-index.mjs';
import { optimizeMainTableGrowth } from '../scripts/full-lean/table-growth.mjs';
import { preserveWebWorker } from '../scripts/full-lean/preserve-web-worker.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));

export async function linkApplication({ sources, sdk, runtime, work, dist, leanVersion, memoryMode, verbose = true }) {
  if (![1, 2].includes(memoryMode)) throw new Error('Invalid application memory mode');
  if (!Array.isArray(sources) || !sources.length) throw new Error('Application C sources are required');
  if (leanVersion !== runtime.manifest.lean) throw new Error('Application and runtime versions differ');
  const compileFlags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN',
    '-sMEMORY64=1', '-I', join(runtime.directory, 'include')];
  // Ordinary CLI users need Lean diagnostics and build progress. Detailed
  // generated-C/SDK warnings remain available with --verbose; failures retain
  // their captured diagnostics for the CLI's error reporter.
  const execute = (tool, args) => sdk.execute(tool, args, {
    stdio: verbose ? 'inherit' : ['ignore', 'pipe', 'pipe'], timeout: 1800_000, maxBuffer: 8 * 1024 * 1024,
  });
  const objects = [];
  for (let index = 0; index < sources.length; index++) {
    const object = join(work, `module-${index}.o`);
    execute('emcc', [...compileFlags, '-c', sources[index], '-o', object]);
    objects.push(object);
  }
  const registry = readApplicationSymbols(sources, objects, join(sdk.prefix, 'bin', executableName('llvm-nm')),
    runtime.manifest.applicationSymbolHook);
  const registryC = join(work, 'application-symbols.c'), registryObject = join(work, 'application-symbols.o');
  await writeFile(registryC, registry.source);
  execute('emcc', [...compileFlags, '-c', registryC, '-o', registryObject]);
  objects.push(registryObject);
  const exportsFile = join(work, 'exports.json');
  await writeFile(exportsFile, JSON.stringify([...new Set([...JSON.parse(await readFile(join(runtime.directory, 'exports.json'), 'utf8')), ...registry.exports])].sort()) + '\n');
  // Bake the verified release into the private runtime prelude. It must not
  // depend on mutable process environment or alter Lean's visible environment.
  const applicationPrelude = join(work, 'application-pre.js');
  await writeFile(applicationPrelude, `Module.lasmLeanVersion = ${JSON.stringify(leanVersion)};\n`);
  const link = [...objects, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`, '-sMALLOC=mimalloc',
    '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
    '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2',
    '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
    `-sMAXIMUM_MEMORY=${memoryMode === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
    '-Wno-experimental', '-Wno-pthreads-mem-growth', '-Wl,--start-group',
    ...runtime.manifest.libraries.map(name => join(runtime.directory, name)), '-Wl,--end-group',
    '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
    '--pre-js', applicationPrelude,
    '--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
    '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', join(dist, 'program.cjs')];
  const argumentsFile = join(work, 'link.rsp'); await writeFile(argumentsFile, responseFile(link));
  execute('em++', ['@' + argumentsFile]);
  const glue = join(dist, 'program.cjs');
  writeFileSync(glue, connectLeanSymbolLoader(readFileSync(glue, 'utf8'), true, { packageSymbols: true }));
  await indexFunctionTable(join(dist, 'program.wasm'), glue);
  writeFileSync(glue, optimizeMainTableGrowth(readFileSync(glue, 'utf8'))); preserveWebWorker(glue);
}
