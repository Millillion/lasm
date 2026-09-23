import { mkdir, readdir, readFile, writeFile, lstat, rename, rm, cp, copyFile } from 'node:fs/promises';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { join, resolve, dirname, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash, randomUUID } from 'node:crypto';
import { provisionLean, selectLeanVersion, toolchainCatalog } from './managed-lean.mjs';
import { provisionSdk, sdkCatalog } from './managed-sdk.mjs';
import { hashFile } from './managed-artifacts.mjs';
import { applicationRuntime } from './application-runtime.mjs';
import { applicationSources, findApplicationProject } from './application-sources.mjs';
import { readApplicationSymbols } from './application-symbols.mjs';
import { copyApplicationHost, writeApplicationEntrypoint } from './application-output.mjs';
import { executableName, responseFile, insideDirectory } from './platform.mjs';
import { connectLeanSymbolLoader } from '../scripts/full-lean/lean-symbol-loader.mjs';
import { indexFunctionTable } from '../scripts/full-lean/function-table-index.mjs';
import { optimizeMainTableGrowth } from '../scripts/full-lean/table-growth.mjs';
import { preserveWebWorker } from '../scripts/full-lean/preserve-web-worker.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const helpers = ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs',
  'function-table-index.mjs', 'table-growth.mjs', 'preserve-web-worker.mjs'];
const digest = value => createHash('sha256').update(value).digest('hex');
const outputReceipt = '.lasm-application.json';

async function fileInventory(directory, skip = new Set()) {
  const files = {};
  async function walk(base) {
    for (const entry of (await readdir(base, { withFileTypes: true })).sort((a, b) => a.name.localeCompare(b.name))) {
      const file = join(base, entry.name), name = relative(directory, file).replaceAll('\\', '/');
      if (skip.has(name)) continue;
      if (entry.isDirectory()) await walk(file);
      else if (entry.isFile()) files[name] = await hashFile(file);
      else throw new Error(`Unexpected link or special file in application build inputs: ${name}`);
    }
  }
  await walk(directory); return files;
}

async function buildDriverIdentity() {
  const files = await fileInventory(join(root, 'src'));
  for (const name of helpers) files['scripts/' + name] = await hashFile(join(root, 'scripts/full-lean', name));
  files.package = await hashFile(join(root, 'package.json'));
  const native = join(root, 'src/native');
  if (!existsSync(native)) Object.assign(files, Object.fromEntries(Object.entries(await fileInventory(join(root, '.cache/native-host'))).map(([name, hash]) => ['native/' + name, hash])));
  return digest(JSON.stringify(files));
}

async function reusableOutput(directory, signature) {
  try {
    if (!(await lstat(directory)).isDirectory() || !(await lstat(join(directory, outputReceipt))).isFile()) return false;
    const previous = JSON.parse(await readFile(join(directory, outputReceipt), 'utf8'));
    return previous.schema === 1 && previous.signature === signature
      && JSON.stringify(await fileInventory(directory, new Set([outputReceipt]))) === JSON.stringify(previous.files);
  } catch (error) { if (error.code === 'ENOENT' || error instanceof SyntaxError) return false; throw error; }
}

async function deliverOutput(cached, output, signature) {
  if (output === cached) return;
  if (await reusableOutput(output, signature)) return;
  await mkdir(dirname(output), { recursive: true });
  if (existsSync(output)) {
    if (!(await lstat(output)).isDirectory()) throw new Error('Application output must be an ordinary directory');
    const entries = await readdir(output);
    if (entries.length && !entries.includes(outputReceipt)) throw new Error(`Output directory is not a Lasm application build: ${output}. Choose --output with an empty directory.`);
  }
  const staging = output + '.lasm-' + randomUUID(), previous = output + '.previous-' + randomUUID();
  await cp(cached, staging, { recursive: true });
  let moved = false;
  try {
    if (existsSync(output)) { await rename(output, previous); moved = true; }
    await rename(staging, output);
  } catch (error) {
    if (moved && !existsSync(output)) await rename(previous, output);
    throw error;
  } finally { await rm(staging, { recursive: true, force: true }); }
  if (moved) await rm(previous, { recursive: true, force: true });
}

/** Managed native elaboration and AOT linking, with content-verified build reuse. */
export async function buildApplication(file, { target = 'node', output, rebuild = false, verbose = false,
  cache, runtimeDirectory, log = console.error } = {}) {
  if (!['node', 'deno', 'bun'].includes(target)) throw new Error('Invalid application target');
  const source = resolve(file);
  if (!source.endsWith('.lean') || !(await lstat(source)).isFile()) throw new Error(`Expected an existing Lean source: ${source}`);
  // Check the bundle before expensive tool provisioning; a missing package must
  // never make an otherwise pointless multi-gigabyte compiler download.
  const selection = await selectLeanVersion(source);
  const runtime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit }, { directory: runtimeDirectory });
  log(`Preparing Lean ${selection.version} for ${target}…`);
  const lean = await provisionLean(source, { cache, log });
  if (sdkCatalog.version !== runtime.manifest.emscripten) throw new Error('The managed SDK and application runtime do not match');
  const project = findApplicationProject(source), directory = project ?? dirname(source);
  const work = join(directory, '.lake/lasm/applications', digest(source).slice(0, 16));
  await mkdir(work, { recursive: true });
  const generated = applicationSources(source, lean, work, { log: verbose ? log : () => {} });
  const modules = [];
  for (let i = 0; i < generated.sources.length; i++) modules.push({
    module: generated.inputs[i].module, sourceSha256: await hashFile(generated.inputs[i].source),
    cSha256: await hashFile(generated.sources[i]),
  });
  const memoryMode = target === 'bun' ? 2 : 1;
  const recipe = { schema: 1, lean: lean.version, leanCommit: lean.commit, nativeLeanIdentity: lean.identity,
    emscripten: sdkCatalog.version, sdkCatalogIdentity: digest(JSON.stringify(sdkCatalog)),
    runtimeIdentity: runtime.identity, buildDriverIdentity: await buildDriverIdentity(), target, memoryMode, modules };
  const signature = digest(JSON.stringify(recipe)), cached = join(work, signature, 'dist');
  output = resolve(output ?? cached);
  if (insideDirectory(output, source) || insideDirectory(output, work) && output !== cached)
    throw new Error('Output directory must not contain application sources or its build cache');
  if (!rebuild && await reusableOutput(cached, signature)) {
    await deliverOutput(cached, output, signature);
    return { ...JSON.parse(await readFile(join(cached, 'build-info.json'), 'utf8')), output, cached, signature, cacheHit: true };
  }
  // No compiler SDK code runs on an unchanged application. Its catalog and
  // reviewed driver repairs are still part of the cache identity. Revalidate
  // the full SDK/Python trees when compilation actually needs to execute them.
  const sdk = await provisionSdk({ cache, log });
  log(`Building ${relative(process.cwd(), source) || source} for ${target}…`);
  const temporary = join(work, '.build-' + randomUUID()), dist = join(temporary, 'dist');
  await mkdir(dist, { recursive: true });
  const compileFlags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN',
    '-sMEMORY64=1', '-I', join(runtime.directory, 'include')];
  const execute = (tool, args) => sdk.execute(tool, args, { stdio: 'inherit', timeout: 1800_000 });
  const objects = [];
  for (let index = 0; index < generated.sources.length; index++) {
    const object = join(temporary, `module-${index}.o`);
    execute('emcc', [...compileFlags, '-c', generated.sources[index], '-o', object]);
    objects.push(object);
  }
  const registry = readApplicationSymbols(generated.sources, objects, join(sdk.prefix, 'bin', executableName('llvm-nm')),
    runtime.manifest.applicationSymbolHook);
  const registryC = join(temporary, 'application-symbols.c'), registryObject = join(temporary, 'application-symbols.o');
  await writeFile(registryC, registry.source);
  execute('emcc', [...compileFlags, '-c', registryC, '-o', registryObject]);
  objects.push(registryObject);
  const exportsFile = join(temporary, 'exports.json');
  await writeFile(exportsFile, JSON.stringify([...new Set([...JSON.parse(await readFile(join(runtime.directory, 'exports.json'), 'utf8')), ...registry.exports])].sort()) + '\n');
  const link = [...objects, '-O1', '-pthread', '-fwasm-exceptions', `-sMEMORY64=${memoryMode}`, '-sMALLOC=mimalloc',
    '-sMAIN_MODULE=2', `-sEXPORTED_FUNCTIONS=@${exportsFile}`, '-sPROXY_TO_PTHREAD=1', '-sPTHREAD_POOL_SIZE=4',
    '-sEXPORTED_RUNTIME_METHODS=stringToNewUTF8', '-sEXIT_RUNTIME=1', '-sNODERAWFS=1',
    '-sALLOW_MEMORY_GROWTH=1', '-sGROWABLE_ARRAYBUFFERS=1', '-sSTACK_OVERFLOW_CHECK=2',
    '-Wl,--export-if-defined=__cpp_exception', '-sINITIAL_MEMORY=134217728',
    `-sMAXIMUM_MEMORY=${memoryMode === 1 ? 8589934592 : 4294967296}`, '-sSTACK_SIZE=67108864',
    '-Wno-experimental', '-Wno-pthreads-mem-growth', '-Wl,--start-group',
    ...runtime.manifest.libraries.map(name => join(runtime.directory, name)), '-Wl,--end-group',
    '--pre-js', join(root, 'scripts/full-lean/emscripten-pre.js'),
    '--pre-js', join(root, 'scripts/full-lean/host-pre.js'),
    '--js-library', join(root, 'scripts/full-lean/host-library.js'), '-o', join(dist, 'program.cjs')];
  const argumentsFile = join(temporary, 'link.rsp'); await writeFile(argumentsFile, responseFile(link));
  execute('em++', ['@' + argumentsFile]);
  const glue = join(dist, 'program.cjs');
  writeFileSync(glue, connectLeanSymbolLoader(readFileSync(glue, 'utf8'), true, { packageSymbols: true }));
  await indexFunctionTable(join(dist, 'program.wasm'), glue);
  writeFileSync(glue, optimizeMainTableGrowth(readFileSync(glue, 'utf8'))); preserveWebWorker(glue);
  copyApplicationHost(dist); writeApplicationEntrypoint(dist, target);
  await copyFile(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), join(dist, 'THIRD_PARTY_NOTICES.txt'));
  const buildInfo = { ...recipe, signature, sdkIdentity: sdk.identity, sdkDriverIdentity: sdk.driverIdentity };
  await writeFile(join(dist, 'build-info.json'), JSON.stringify(buildInfo, null, 2) + '\n');
  await writeFile(join(dist, outputReceipt), JSON.stringify({ schema: 1, signature, files: await fileInventory(dist) }) + '\n');
  await mkdir(dirname(cached), { recursive: true });
  // Concurrent builds have private temporary directories. A complete matching
  // result wins; no process can reuse another process's partially written output.
  if (await reusableOutput(cached, signature) && !rebuild) await rm(dist, { recursive: true });
  else {
    if (existsSync(cached)) await rm(cached, { recursive: true });
    await rename(dist, cached);
  }
  await deliverOutput(cached, output, signature);
  await rm(temporary, { recursive: true, force: true });
  return { ...buildInfo, output, cached, signature, cacheHit: false };
}
