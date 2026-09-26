import { mkdir, readFile, writeFile, stat, rename, rm, copyFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, resolve, dirname, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { createHash, randomUUID } from 'node:crypto';
import { provisionLean, selectLeanVersion, toolchainCatalog } from './managed-lean.mjs';
import { provisionSdk, sdkCatalog } from './managed-sdk.mjs';
import { provisionGit } from './managed-git.mjs';
import { hashFile } from './managed-artifacts.mjs';
import { applicationRuntime } from './application-runtime.mjs';
import { applicationSources, findApplicationProject } from './application-sources.mjs';
import { linkApplication } from './application-link.mjs';
import { copyApplicationHost, writeApplicationEntrypoint } from './application-output.mjs';
import { outputReceipt, fileInventory, reusableOutput, deliverOutput } from './application-files.mjs';
import { withApplicationLock } from './application-lock.mjs';
import { applicationMetadata, copyApplicationMetadata } from './application-metadata.mjs';
import { insideDirectory } from './platform.mjs';
import { applicationSupport, requireApplicationSupport } from './application-support.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const helpers = ['emscripten-pre.js', 'host-pre.js', 'host-library.js', 'lean-symbol-loader.mjs',
  'function-table-index.mjs', 'table-growth.mjs', 'preserve-web-worker.mjs'];
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
  return withApplicationLock(join(directory, '.lake/lasm/application-build.lock'), () => buildLockedApplication(source, options));
}

async function buildLockedApplication(source, { target = 'node', output, rebuild = false, verbose = false,
  cache, runtimeDirectory, log = console.error } = {}) {
  if (!['node', 'deno', 'bun'].includes(target)) throw new Error('Invalid application target');
  // Check the bundle before expensive tool provisioning; a missing package must
  // never make an otherwise pointless multi-gigabyte compiler download.
  const selection = await selectLeanVersion(source);
  const runtime = await applicationRuntime({ ...selection, commit: toolchainCatalog.lean[selection.version].commit }, { directory: runtimeDirectory });
  log(`Preparing Lean ${selection.version} for ${target}…`);
  const lean = await provisionLean(source, { cache, log });
  if (sdkCatalog.version !== runtime.manifest.emscripten) throw new Error('The managed SDK and application runtime do not match');
  const project = findApplicationProject(source), directory = project ?? dirname(source);
  const git = project ? await provisionGit({ cache, log }) : undefined;
  const work = join(directory, '.lake/lasm/applications', digest(source).slice(0, 16));
  await mkdir(work, { recursive: true });
  const generated = applicationSources(source, lean, work, { log: verbose ? log : () => {}, git });
  const metadata = await applicationMetadata(generated, lean);
  const modules = [];
  for (let i = 0; i < generated.sources.length; i++) modules.push({
    module: generated.inputs[i].module, sourceSha256: await hashFile(generated.inputs[i].source),
    cSha256: await hashFile(generated.sources[i]),
  });
  const memoryMode = target === 'bun' ? 2 : 1;
  const recipe = { schema: 1, lean: lean.version, leanCommit: lean.commit, nativeLeanIdentity: lean.identity,
    emscripten: sdkCatalog.version, sdkCatalogIdentity: digest(JSON.stringify(sdkCatalog)),
    runtimeIdentity: runtime.identity, buildDriverIdentity: await buildDriverIdentity(),
    ...(git ? { gitIdentity: git.identity, gitVersion: git.version } : {}),
    ...(metadata ? { moduleDataIdentity: metadata.identity, moduleDataBytes: metadata.manifest.bytes } : {}),
    target, host: `${process.platform}-${process.arch}`, memoryMode, modules };
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
  await linkApplication({ sources: generated.sources, sdk, runtime, work: temporary, dist,
    leanVersion: lean.version, memoryMode, verbose });
  copyApplicationHost(dist); writeApplicationEntrypoint(dist, target, { node: applicationSupport()?.node });
  await copyApplicationMetadata(metadata, dist);
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
