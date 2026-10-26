import { mkdir, readFile, writeFile, stat, rename, rm } from 'node:fs/promises';
import { existsSync, readFileSync } from 'node:fs';
import { planNativeInputs } from './application-native.mjs';
import { join, resolve, dirname, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash, randomUUID } from 'node:crypto';
import { provisionLean, selectLeanVersion, toolchainCatalog } from './managed-lean.mjs';
import { provisionLinkToolchain, linkToolchainCatalog } from './managed-link-toolchain.mjs';
import { checkSystemGit } from './system-git.mjs';
import { hashFile, managedCacheDirectory, verificationRecords } from './managed-artifacts.mjs';
import { withCacheLease } from './cache-lifecycle.mjs';
import { applicationRuntime } from './application-runtime.mjs';
import { applicationSources, findApplicationProject } from './application-sources.mjs';
import { importsLibrary, librarySources } from './lasm-library.mjs';
import { planNodeModules, copyNodeModules } from './application-npm.mjs';
import { readBindings, checkBindings, requireValidBindings } from './application-binding-check.mjs';
import { linkApplication, selectedLinkDriver, buildProfiles } from './application-link.mjs';
import { copyApplicationHost, writeApplicationEntrypoint, minimumApplicationNode, minimumApplicationGlibc } from './application-output.mjs';
import { applicationNativeTargets } from './native-bundle.mjs';
import { outputReceipt, fileInventory, reusableOutput, deliverOutput } from './application-files.mjs';
import { withApplicationLock } from './application-lock.mjs';
import { applicationPolicy } from './application-policy.mjs';
import { insideDirectory } from './platform.mjs';
import { requireApplicationSupport } from './application-support.mjs';
import { applicationNotices, lakeDependencyLicenses, dependencyNotices } from './notices.mjs';

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
  cache, runtimeDirectory, log = console.error, progress, profile = 'release', keepLinkWork = false } = {}) {
  // Edge targets (src/edge/edge-build.mjs) relink the compiled program: they
  // need this build's link inputs. true: a cached result is linked again;
  // 'if-built': keep them only when this build links anyway.
  if (keepLinkWork === true) rebuild = true;
  if (!buildProfiles.includes(profile)) throw new Error(`Unknown build profile ${JSON.stringify(profile)}: use ${buildProfiles.join(' or ')}`);
  // Check the bundle before expensive tool provisioning; a missing package must
  // never make an otherwise pointless multi-gigabyte compiler download.
  const selection = await selectLeanVersion(source);
  progress?.({ stage: `Checking Lean ${selection.version} runtime` });
  const runtime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit }, { directory: runtimeDirectory, stamps: verificationRecords(cache ?? managedCacheDirectory()) });
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
  // Lasm ships no Git: a project with Git or Reservoir dependencies needs the system
  // `git` (src/system-git.mjs), checked before Lake runs.
  if (project) checkSystemGit(project);
  const work = join(directory, '.lake/lasm/applications', digest(source).slice(0, 16));
  await mkdir(work, { recursive: true });
  progress?.({ stage: project ? 'Checking Lean sources and Lake dependencies' : 'Checking Lean sources and imports' });
  let generated = applicationSources(source, lean, work, { log: verbose ? log : () => {} });
  if (generated.needsCCompiler) {
    // Lake packages with C code build it natively with Lean's own clang, as Lake does.
    progress?.({ stage: `Packages with C code (${generated.native.map(item => item.package).join(', ')}) need Lean's C compiler and headers` });
    lean = await provisionLean(source, { cache, log, progress, native: true });
    generated = applicationSources(source, lean, work, { log: verbose ? log : () => {} });
  }
  const { compilations: nativeCompilations, unavailable: nativeUnavailable } = generated.nativeLink
    ? planNativeInputs(generated.nativeLink, { leanPrefix: [lean.prefix, lean.executionPrefix], runtimeInclude: join(runtime.directory, 'include') })
    : { compilations: [], unavailable: [] };
  // Licence files of the Lake dependencies whose code is compiled in (dist/licenses/).
  const dependencyLicenses = project ? lakeDependencyLicenses(project,
    [...generated.inputs.map(input => input.source), ...nativeCompilations.map(item => item.source)],
    { exclude: [lean.prefix, lean.executionPrefix] }) : [];
  // Programs that import Lasm.JS link its generated C and C glue.
  const usesJs = importsLibrary(generated.sources);
  if (usesJs) {
    const library = librarySources(lean);
    generated = { ...generated, sources: [...generated.sources, ...library.sources], inputs: [...generated.inputs, ...library.inputs] };
  }
  // npm packages for Lasm.JS: package.json next to the lakefile (or the source).
  const nodeModules = planNodeModules(directory);
  // Lasm.JS bindings must name existing JavaScript functions.
  let jsBindings;
  if (usesJs) {
    progress?.({ stage: 'Checking Lasm.JS bindings' });
    jsBindings = checkBindings(directory, readBindings(lean, generated.env, generated.oleans(), { cache: join(work, 'bindings') }));
    for (const warning of requireValidBindings(jsBindings)) log(`Lasm.JS binding warning: ${warning}`);
  }
  progress?.({ stage: 'Checking application inputs and cached build' });
  const modules = [];
  for (let i = 0; i < generated.sources.length; i++) modules.push({
    module: generated.inputs[i].module, sourceSha256: await hashFile(generated.inputs[i].source),
    cSha256: await hashFile(generated.sources[i]),
  });
  const memoryMode = 1;
  // A tiered Lean is identified by its assembled prefix, which is keyed by the
  // identities of the binaries and every module-data archive it contains.
  // The profile is part of the identity: dev and release outputs never share a cache entry.
  const recipe = { schema: 1, profile, lean: lean.version, leanCommit: lean.commit, nativeLeanIdentity: lean.identity,
    ...(lean.distribution === 'tiers' ? { nativeLeanTier: lean.tier, nativeLeanComponents: lean.components } : {}),
    // Outputs of different link drivers and tool sets never share a cache entry.
    emscripten, linkDriver, ...(linkDriver === 'node'
      ? { linkToolchainIdentity: digest(JSON.stringify(linkToolchainCatalog)) }
      : { sdkCatalogIdentity: digest(JSON.stringify(sdkCatalog)) }),
    runtimeIdentity: runtime.identity, buildDriverIdentity: await buildDriverIdentity(),
    applicationPolicy,
    target: 'node', host: `${process.platform}-${process.arch}`, nativeTargets: applicationNativeTargets(),
    minimumNode: minimumApplicationNode, minimumGlibc: minimumApplicationGlibc, memoryMode, modules,
    ...(dependencyLicenses.length ? { dependencyLicenses: dependencyLicenses.map(({ name, files }) =>
      ({ name, files: files.map(({ name, sha256 }) => ({ name, sha256 })) })) } : {}),
    ...(nativeCompilations.length ? { nativeObjects: nativeCompilations.map(item => ({ object: item.object, identity: item.identity,
      sourceSha256: createHash('sha256').update(readFileSync(item.source)).digest('hex'), args: item.extraArgs })) } : {}),
    ...(nativeUnavailable.length ? { nativeUnavailable } : {}),
    ...(usesJs ? { lasmJs: true } : {}),
    ...(nodeModules ? { nodeModules: { identity: nodeModules.identity, packages: nodeModules.packages } } : {}) };
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
      leanVersion: lean.version, memoryMode, verbose, progress, linkDriver, objectCache: join(work, 'objects'), sharedCache: join(cache ?? managedCacheDirectory(), 'objects'), analysisCache: join(cache ?? managedCacheDirectory(), 'analysis'), profile, nativeCompilations, nativeUnavailable });
  } catch (error) {
    // This unique staging directory contains only this failed build's files.
    // Preserve any previously delivered application and avoid retaining probes.
    if (!process.env.LASM_KEEP_LINK_WORK) await rm(temporary, { recursive: true, force: true });
    throw error;
  }
  progress?.({ stage: 'Packaging the application and runtime support' });
  copyApplicationHost(dist); writeApplicationEntrypoint(dist);
  await writeFile(join(dist, 'THIRD_PARTY_NOTICES.txt'),
    applicationNotices(runtime.manifest, await readFile(join(runtime.directory, 'THIRD_PARTY_NOTICES.txt'), 'utf8'))
    + dependencyNotices(dependencyLicenses));
  for (const pkg of dependencyLicenses) for (const file of pkg.files) {
    await mkdir(join(dist, 'licenses', pkg.name), { recursive: true });
    await writeFile(join(dist, 'licenses', pkg.name, file.name), await readFile(file.path));
  }
  if (nodeModules) {
    progress?.({ stage: `Copying ${nodeModules.packages.length} npm packages` });
    copyNodeModules(nodeModules, dist);
  }
  const buildInfo = { ...recipe, signature, linkRequirements, ...(jsBindings ? { jsBindings } : {}),
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
  if (!process.env.LASM_KEEP_LINK_WORK && !keepLinkWork) await rm(temporary, { recursive: true, force: true });
  return { ...buildInfo, output, cached, signature, cacheHit: false, ...(keepLinkWork ? { linkWork: temporary } : {}) };
}
