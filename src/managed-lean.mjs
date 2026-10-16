import { readFile, stat, mkdir, link, copyFile, symlink } from 'node:fs/promises';
import { constants } from 'node:fs';
import { join, dirname, resolve, toNamespacedPath } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact, deriveArtifact, validateArtifact, managedCacheDirectory } from './managed-artifacts.mjs';
import { assertSupportedHost, executableName } from './platform.mjs';
import { verifyNativeProgram } from './native-program.mjs';
import { windowsToolPrefix } from './windows-tool-paths.mjs';
import { findApplicationProject, standaloneImportsModules } from './application-sources.mjs';

export const toolchainCatalog = JSON.parse(await readFile(new URL('./toolchains.json', import.meta.url), 'utf8'));

/** Standard Lean/Elan project pins, found from the source file towards the root. */
export async function selectLeanVersion(file, catalog = toolchainCatalog) {
  let directory = resolve(file);
  if (!(await stat(directory)).isDirectory()) directory = dirname(directory);
  for (;;) {
    const pin = join(directory, 'lean-toolchain');
    let text;
    try { text = (await readFile(pin, 'utf8')).trim(); }
    catch (error) { if (error.code !== 'ENOENT') throw error; }
    if (text !== undefined) {
      const match = /^(?:leanprover\/lean4:)?v?(\d+\.\d+\.\d+)$/.exec(text);
      if (!match || !catalog.lean[match[1]]) throw new Error(`Unsupported Lean toolchain ${JSON.stringify(text)} in ${pin}. Supported managed versions: ${Object.keys(catalog.lean).join(', ')}. The project pin was not changed.`);
      return { version: match[1], pin };
    }
    const parent = dirname(directory);
    if (parent === directory) return { version: catalog.defaultLean, pin: null };
    directory = parent;
  }
}

/** The catalog's distribution for one host: tiered archives, or one full archive. */
export function leanDistribution(release, host, { distribution = 'tiers' } = {}) {
  const tiers = release.tiers;
  if (distribution !== 'full' && tiers?.bin?.[host]) {
    if (!Array.isArray(tiers.core) || !tiers.core.length || !Array.isArray(tiers.extended) || !tiers.extended.length
        || !Array.isArray(tiers.extendedModules) || !tiers.extendedModules.length
        || tiers.extendedModules.some(name => typeof name !== 'string' || !/^[A-Z][A-Za-z0-9_]*$/.test(name)))
      throw new Error('Invalid tiered Lean catalog entry');
    for (const artifact of [tiers.bin[host], ...tiers.core, ...tiers.extended]) validateArtifact(artifact);
    return { kind: 'tiers', bin: tiers.bin[host], core: tiers.core, extended: tiers.extended, extendedModules: tiers.extendedModules };
  }
  if (!release.artifacts?.[host]) return null;
  return { kind: 'full', artifact: release.artifacts[host] };
}

/** Hard-link one verified artifact tree into a prefix under assembly. */
async function linkArtifactTree(source, receipt, destination, owners, name) {
  for (const [path, entry] of Object.entries(receipt.files).sort(([a], [b]) => a < b ? -1 : a > b ? 1 : 0)) {
    const target = join(destination, ...path.split('/'));
    if (entry.type === 'directory') {
      if (owners.has(path) && owners.get(path) !== 'directory') throw new Error(`Lean archive ${name} conflicts at ${path}`);
      owners.set(path, 'directory');
      await mkdir(target, { recursive: true });
      continue;
    }
    if (owners.has(path)) throw new Error(`Lean archives ${owners.get(path)} and ${name} both contain ${path}`);
    owners.set(path, name);
    await mkdir(dirname(target), { recursive: true });
    if (entry.type === 'symlink') { await symlink(entry.target, target); continue; }
    const from = join(source, ...path.split('/'));
    try { await link(from, target); }
    catch (error) {
      if (!['EXDEV', 'EPERM', 'EACCES', 'ENOTSUP', 'EMLINK'].includes(error.code)) throw error;
      await copyFile(from, target, constants.COPYFILE_EXCL);
    }
  }
}

/** One physical prefix: Lean finds its sysroot from bin/../lib/lean. The
 * receipt-verified prefix is keyed by every component's identity; components
 * are only downloaded or rechecked when the prefix itself must be assembled. */
export async function assembleLeanPrefix(version, release, components, options = {}) {
  const cache = options.cache ?? managedCacheDirectory();
  const provenance = { kind: 'lean-prefix', schema: 1, version, commit: release.commit,
    components: components.map(({ artifact }) => validateArtifact(artifact)) };
  options.progress?.({ stage: `Checking Lean ${version} installation` });
  return deriveArtifact(provenance, async tree => {
    const owners = new Map();
    for (const { artifact, label } of components) {
      const installed = await provisionArtifact(artifact, { ...options, cache, label });
      options.progress?.({ stage: `Assembling Lean ${version}` });
      await linkArtifactTree(installed.directory, installed.receipt, tree, owners, artifact.name);
    }
  }, { cache, log: options.log, signal: options.signal, progress: options.progress });
}

export async function provisionLean(file, options = {}) {
  const catalog = options.catalog ?? toolchainCatalog;
  const selection = await selectLeanVersion(file, catalog);
  const release = catalog.lean[selection.version];
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  assertSupportedHost(platform, arch);
  const host = `${platform}-${arch}`;
  const distribution = leanDistribution(release, host, options);
  if (!distribution) throw new Error(`Managed Lean ${selection.version} is not implemented for ${host}. ${release.unavailable?.[host] ?? 'No matching native artifact is available.'} This platform remains an implementation gap.`);
  const finish = async (installed, details) => {
    // Lake replaces LEAN_PATH for child compilers. Lean's own appDir resolves
    // junctions, so its bin directory must physically have a short path.
    if (platform === 'win32') options.progress?.({ stage: 'Preparing native Windows compiler paths' });
    const executionPrefix = platform === 'win32' ? await windowsToolPrefix(installed.directory,
      { receipt: installed.receipt, log: options.log, progress: options.progress, signal: options.signal }) : installed.directory;
    // Lake puts its executable-derived library root ahead of LEAN_PATH. Preserve
    // the Windows namespace in GetModuleFileName as well as in our environment,
    // so nested module files do not fall back to MAX_PATH-limited spellings.
    const program = name => {
      const file = join(executionPrefix, 'bin', executableName(name, platform));
      return platform === 'win32' ? toNamespacedPath(file) : file;
    };
    const lean = program('lean'), lake = program('lake');
    const nativePrograms = {};
    for (const [name, program] of [['lean', lean], ['lake', lake]])
      nativePrograms[name] = await verifyNativeProgram(program, platform, arch);
    // An archive checksum is provenance; this check also prevents accidentally
    // pairing a native compiler with another release's runtime/serialized files.
    const commit = execFileSync(lean, ['--githash'], { encoding: 'utf8', timeout: 30_000, windowsHide: true }).trim();
    if (commit !== release.commit) throw new Error(`Managed Lean identity mismatch: expected ${release.commit}, received ${commit}`);
    return { ...selection, ...installed, prefix: installed.directory, executionPrefix, lean, lake, commit, platform: host, nativePrograms,
      ...details };
  };
  if (distribution.kind === 'full')
    return finish(await provisionArtifact(distribution.artifact, { ...options, label: `Lean ${selection.version} and Lake` }),
      { distribution: 'full' });
  const label = (name, items, index) => items.length > 1 ? `${name} (${index + 1}/${items.length})` : name;
  const core = [{ artifact: distribution.bin, label: `Lean ${selection.version} compiler` },
    ...distribution.core.map((artifact, index, items) => ({ artifact, label: label(`Lean ${selection.version} standard library`, items, index) }))];
  const extended = [...core, ...distribution.extended.map((artifact, index, items) =>
    ({ artifact, label: label(`Lean ${selection.version} Lean and Lake libraries`, items, index) }))];
  const tiered = async (components, tier) => finish(await assembleLeanPrefix(selection.version, release, components, options),
    { distribution: 'tiers', tier, components: components.map(({ artifact }) => validateArtifact(artifact)) });
  // Lake projects elaborate their lakefile and Lasm's Lake query module, both
  // of which import Lake. Only a standalone source can be satisfied by core.
  const source = resolve(file);
  let modules = options.modules ?? 'auto';
  if (modules === 'auto' && (!source.endsWith('.lean') || (await stat(source)).isDirectory() || findApplicationProject(source)))
    modules = 'extended';
  if (modules === 'extended') return tiered(extended, 'extended');
  const minimal = await tiered(core, 'core');
  if (modules === 'core') return minimal;
  options.progress?.({ stage: 'Checking Lean imports' });
  if (!standaloneImportsModules(source, minimal, distribution.extendedModules)) return minimal;
  return tiered(extended, 'extended');
}
