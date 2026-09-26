import { readFile, stat } from 'node:fs/promises';
import { join, dirname, resolve } from 'node:path';
import { execFileSync } from 'node:child_process';
import { provisionArtifact } from './managed-artifacts.mjs';
import { executableName } from './platform.mjs';

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

export async function provisionLean(file, options = {}) {
  const catalog = options.catalog ?? toolchainCatalog;
  const selection = await selectLeanVersion(file, catalog);
  const release = catalog.lean[selection.version];
  const platform = options.platform ?? process.platform, arch = options.arch ?? process.arch;
  const host = `${platform}-${arch}`;
  const artifact = release.artifacts[host];
  if (!artifact) throw new Error(`Managed Lean ${selection.version} is not implemented for ${host}. ${release.unavailable?.[host] ?? 'No matching native artifact is available.'} This platform remains an implementation gap.`);
  const installed = await provisionArtifact(artifact, { ...options, label: `Lean ${selection.version} and Lake` });
  const lean = join(installed.directory, 'bin', executableName('lean', platform));
  const lake = join(installed.directory, 'bin', executableName('lake', platform));
  // An archive checksum is provenance; this check also prevents accidentally
  // pairing a native compiler with another release's runtime/serialized files.
  const commit = execFileSync(lean, ['--githash'], { encoding: 'utf8', timeout: 30_000, windowsHide: true }).trim();
  if (commit !== release.commit) throw new Error(`Managed Lean identity mismatch: expected ${release.commit}, received ${commit}`);
  return { ...selection, ...installed, prefix: installed.directory, lean, lake, commit, platform: host };
}
