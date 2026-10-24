import { readFile, stat, copyFile, mkdir } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, dirname, resolve, toNamespacedPath } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact, deriveArtifact, validateArtifact, managedCacheDirectory, linkArtifactTree, hashFile } from './managed-artifacts.mjs';
import { assertSupportedHost, executableName } from './platform.mjs';
import { compileLibrary, libraryIdentity, libraryLeanVersions } from './lasm-library.mjs';
import { verifyNativeProgram } from './native-program.mjs';
import { windowsToolPrefix } from './windows-tool-paths.mjs';
import { findApplicationProject, standaloneImportsModules, macosSdk, macosSdkMissing } from './application-sources.mjs';

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
    // The C tier (Lean's clang as `cc`, headers, link libraries) for packages with C code.
    const c = tiers.c?.[host];
    if (c) {
      validateArtifact(c);
      if (c.multiarch !== undefined && c.multiarch !== null && !/^[a-z0-9_]+-linux-gnu$/.test(c.multiarch)) throw new Error('Invalid tiered Lean catalog entry');
    }
    return { kind: 'tiers', bin: tiers.bin[host], core: tiers.core, extended: tiers.extended, extendedModules: tiers.extendedModules,
      ...(c ? { c } : {}) };
  }
  if (!release.artifacts?.[host]) return null;
  return { kind: 'full', artifact: release.artifacts[host] };
}

/** One physical prefix: Lean finds its sysroot from bin/../lib/lean. The
 * receipt-verified prefix is keyed by every component's identity; components
 * are only downloaded or rechecked when the prefix itself must be assembled. */
export async function assembleLeanPrefix(version, release, components, options = {}) {
  const cache = options.cache ?? managedCacheDirectory();
  const provenance = { kind: 'lean-prefix', schema: 1, version, commit: release.commit,
    components: components.map(({ artifact }) => validateArtifact(artifact)),
    // Lasm's own library (Lasm.JS), compiled into prefixes with Lean's elaborator.
    lasmLibrary: libraryIdentity() };
  // macOS C tier: Lean's archive links against Apple's lib/libc/libSystem.tbd, an SDK
  // file Lasm does not redistribute. The prefix takes the user's own SDK copy instead.
  let libSystem;
  if ((options.platform ?? process.platform) === 'darwin' && components.some(({ artifact }) => /-c\.tar\.zst$/.test(artifact.name))) {
    const sdk = macosSdk();
    if (!sdk) throw new Error(macosSdkMissing);
    libSystem = join(sdk, 'usr', 'lib', 'libSystem.tbd');
    provenance.macosSdkLibSystemSha256 = await hashFile(libSystem);
  }
  options.progress?.({ stage: `Checking Lean ${version} installation` });
  return deriveArtifact(provenance, async tree => {
    const owners = new Map();
    for (const { artifact, label } of components) {
      const installed = await provisionArtifact(artifact, { ...options, cache, label });
      options.progress?.({ stage: `Assembling Lean ${version}` });
      await linkArtifactTree(installed.directory, installed.receipt, tree, owners, artifact.name, 'Lean archive');
    }
    // A C tier that still carries the file (lean-4.35.0-c-v1) keeps its own copy.
    if (libSystem && !existsSync(join(tree, 'lib', 'libc', 'libSystem.tbd'))) {
      await mkdir(join(tree, 'lib', 'libc'), { recursive: true });
      await copyFile(libSystem, join(tree, 'lib', 'libc', 'libSystem.tbd'));
    }
    if (libraryLeanVersions.includes(version)) options.progress?.({ stage: `Compiling Lasm's Lean library for Lean ${version}` });
    compileLibrary(tree, version, { platform: options.platform });
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
  const tiered = async (components, tier, details = {}) => finish(await assembleLeanPrefix(selection.version, release, components, options),
    { distribution: 'tiers', tier, components: components.map(({ artifact }) => validateArtifact(artifact)), ...details });
  // Packages with C code: the extended tier plus the C tier, when the catalog has one.
  if (options.native) {
    if (!distribution.c) return finish(await provisionArtifact(release.artifacts[host], { ...options, label: `Lean ${selection.version} and Lake` }),
      { distribution: 'full' });
    const { name, url, sha256, bytes, format, root, maximumExtractedBytes } = distribution.c;
    return tiered([...extended, { artifact: { name, url, sha256, bytes, format, root, maximumExtractedBytes },
      label: `Lean ${selection.version} C compiler and headers` }], 'native',
    { cCompiler: { multiarch: distribution.c.multiarch ?? null } });
  }
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
