import { mkdir, readFile, writeFile, stat, rename, rm, copyFile } from 'node:fs/promises';
import { existsSync, readFileSync } from 'node:fs';
import { planNativeInputs } from './application-native.mjs';
import { join, resolve, dirname, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash, randomUUID } from 'node:crypto';
import { provisionLean, selectLeanVersion, toolchainCatalog } from './managed-lean.mjs';
import { provisionLinkToolchain, linkToolchainCatalog } from './managed-link-toolchain.mjs';
import { provisionGit } from './managed-git.mjs';
import { hashFile, managedCacheDirectory } from './managed-artifacts.mjs';
import { withCacheLease } from './cache-lifecycle.mjs';
import { applicationRuntime } from './application-runtime.mjs';
import { applicationSources, findApplicationProject } from './application-sources.mjs';
import { linkApplication, selectedLinkDriver } from './application-link.mjs';
import { copyApplicationHost, writeApplicationEntrypoint } from './application-output.mjs';
import { outputReceipt, fileInventory, reusableOutput, deliverOutput } from './application-files.mjs';
import { withApplicationLock } from './application-lock.mjs';
import { applicationPolicy } from './application-policy.mjs';
import { insideDirectory } from './platform.mjs';
import { applicationSupport, requireApplicationSupport } from './application-support.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const helpers = ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs',
  'function-table-index.mjs', 'table-growth.mjs'];
const digest = value => createHash('sha256').update(value).digest('hex');

async function buildDriverIdentity() {
  const files = await fileInventory(join(root, 'src'));
  for (const name of helpers) files['scripts/' + name] = await hashFile(join(root, 'scripts/full-lean', name));
  files.package = await hashFile(join(root, 'package.json'));
  const native = join(root, 'src/native');
  if (!existsSync(native)) Object.assign(files, Object.fromEntries(Object.entries(await fileInventory(join(root, '.cache/native-host'))).map(([name, hash]) => ['native/' + name, hash])));
  return digest(JSON.stringify(files));
}

/** Managed native elaboration and AOT linking, with content-verified build reuse. */
export async function buildApplication(file, options = {}) {
  requireApplicationSupport();
  const source = resolve(file);
  if (!source.endsWith('.lean') || !(await stat(source)).isFile()) throw new Error(`Expected an existing Lean source: ${source}`);
  const directory = findApplicationProject(source) ?? dirname(source);
  return withApplicationLock(join(directory, '.lake/lasm/application-build.lock'), () =>
    withCacheLease(options.cache ?? managedCacheDirectory(), () => buildLockedApplication(source, options), {
      onWait: () => options.progress?.({ stage: 'Waiting for tool cache repair to finish' }),
    }), {
    onWait: () => options.progress?.({ stage: 'Waiting for another build in this project to finish' }),
  });
}

async function buildLockedApplication(source, { output, rebuild = false, verbose = false,
  cache, runtimeDirectory, log = console.error, progress } = {}) {
  // Check the bundle before expensive tool provisioning; a missing package must
  // never make an otherwise pointless multi-gigabyte compiler download.
  const selection = await selectLeanVersion(source);
  progress?.({ stage: `Checking Lean ${selection.version} runtime` });
  const runtime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit }, { directory: runtimeDirectory });
  if (!progress) log(`Preparing Lean ${selection.version} for Node…`);
  let lean = await provisionLean(source, { cache, log, progress });
  // The default Node link driver uses the minimal link toolchain. The emcc and
  // node-compile maintainer drivers (LASM_LINK_DRIVER) need the full SDK and its
  // private Python, which ordinary builds never download.
  const linkDriver = selectedLinkDriver();
  const sdkCatalog = linkDriver === 'node' ? undefined : (await import('./managed-sdk.mjs')).sdkCatalog;
  const emscripten = linkDriver === 'node' ? linkToolchainCatalog.version : sdkCatalog.version;
  if (emscripten !== runtime.manifest.emscripten) throw new Error('The managed compiler tools and application runtime do not match');
  const project = findApplicationProject(source), directory = project ?? dirname(source);
  const git = project ? await provisionGit({ cache, log, progress }) : undefined;
  const work = join(directory, '.lake/lasm/applications', digest(source).slice(0, 16));
  await mkdir(work, { recursive: true });
  progress?.({ stage: project ? 'Checking Lean sources and Lake dependencies' : 'Checking Lean sources and imports' });
  let generated = applicationSources(source, lean, work, { log: verbose ? log : () => {}, git });
  if (generated.needsFullLean) {
    // Lake packages with C code build it natively with Lean's own compiler, as Lake does.
    progress?.({ stage: `Packages with C code (${generated.native.map(item => item.package).join(', ')}) need the complete Lean ${lean.version} release` });
    lean = await provisionLean(source, { cache, log, progress, distribution: 'full' });
    generated = applicationSources(source, lean, work, { log: verbose ? log : () => {}, git });
  }
  const nativeCompilations = generated.nativeLink
    ? planNativeInputs(generated.nativeLink, { leanPrefix: lean.prefix, runtimeInclude: join(runtime.directory, 'include') }) : [];
  progress?.({ stage: 'Checking application inputs and cached build' });
  const modules = [];
  for (let i = 0; i < generated.sources.length; i++) modules.push({
    module: generated.inputs[i].module, sourceSha256: await hashFile(generated.inputs[i].source),
    cSha256: await hashFile(generated.sources[i]),
  });
  const memoryMode = 1;
  // A tiered Lean is identified by its assembled prefix, which is keyed by the
  // identities of the binaries and every module-data archive it contains.
  const recipe = { schema: 1, lean: lean.version, leanCommit: lean.commit, nativeLeanIdentity: lean.identity,
    ...(lean.distribution === 'tiers' ? { nativeLeanTier: lean.tier, nativeLeanComponents: lean.components } : {}),
    // Outputs of different link drivers and tool sets never share a cache entry.
    emscripten, linkDriver, ...(linkDriver === 'node'
      ? { linkToolchainIdentity: digest(JSON.stringify(linkToolchainCatalog)) }
      : { sdkCatalogIdentity: digest(JSON.stringify(sdkCatalog)) }),
    runtimeIdentity: runtime.identity, buildDriverIdentity: await buildDriverIdentity(),
    ...(git ? { gitIdentity: git.identity, gitVersion: git.version } : {}),
    applicationPolicy,
    target: 'node', host: `${process.platform}-${process.arch}`, node: applicationSupport()?.node,
    minimumGlibc: applicationSupport()?.minimumGlibc, memoryMode, modules,
    ...(nativeCompilations.length ? { nativeObjects: nativeCompilations.map(item => ({ object: item.object, identity: item.identity,
      sourceSha256: createHash('sha256').update(readFileSync(item.source)).digest('hex'), args: item.extraArgs })) } : {}) };
  const signature = digest(JSON.stringify(recipe)), cached = join(work, signature, 'dist');
  output = resolve(output ?? cached);
  if (insideDirectory(output, source) || insideDirectory(output, work) && output !== cached)
    throw new Error('Output directory must not contain application sources or its build cache');
  if (!rebuild && await reusableOutput(cached, signature)) {
    progress?.({ stage: 'Reusing verified application build' });
    await deliverOutput(cached, output, signature);
    return { ...JSON.parse(await readFile(join(cached, 'build-info.json'), 'utf8')), output, cached, signature, cacheHit: true };
  }
  // No compiler tool runs on an unchanged application. The tool catalog and
  // link driver are still part of the cache identity. Revalidate the tools only
  // when compilation actually needs to execute them.
  const sdk = linkDriver === 'node' ? await provisionLinkToolchain({ cache, log, progress })
    : await (await import('./managed-sdk.mjs')).provisionSdk({ cache, log, progress });
  if (!progress) log(`Building ${relative(process.cwd(), source) || source} for Node…`);
  const temporary = join(work, '.build-' + randomUUID()), dist = join(temporary, 'dist');
  await mkdir(dist, { recursive: true });
  let linkRequirements;
  try {
    linkRequirements = await linkApplication({ sources: generated.sources, sdk, runtime, work: temporary, dist,
      leanVersion: lean.version, memoryMode, verbose, progress, linkDriver, objectCache: join(work, 'objects'), nativeCompilations });
  } catch (error) {
    // This unique staging directory contains only this failed build's files.
    // Preserve any previously delivered application and avoid retaining probes.
    if (!process.env.LASM_KEEP_LINK_WORK) await rm(temporary, { recursive: true, force: true });
    throw error;
  }
  progress?.({ stage: 'Packaging the application and runtime support' });
  copyApplicationHost(dist); writeApplicationEntrypoint(dist, {
    node: applicationSupport()?.node, minimumGlibc: applicationSupport()?.minimumGlibc,
  });
  await copyFile(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), join(dist, 'THIRD_PARTY_NOTICES.txt'));
  const buildInfo = { ...recipe, signature, linkRequirements,
    ...(linkDriver === 'node' ? { linkToolchain: { identity: sdk.identity, ...sdk.toolchain } }
      : { sdkIdentity: sdk.identity, sdkDriverIdentity: sdk.driverIdentity }) };
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
  progress?.({ stage: 'Verifying and writing application output' });
  await deliverOutput(cached, output, signature);
  // Maintainer diagnostics only: LASM_KEEP_LINK_WORK keeps the link probes and maps.
  if (!process.env.LASM_KEEP_LINK_WORK) await rm(temporary, { recursive: true, force: true });
  return { ...buildInfo, output, cached, signature, cacheHit: false };
}
