// The edge runtime (Phase 7, docs/EDGE.md): Lean's C++ runtime and Lasm's host
// bridge built single-threaded (build-application-runtime.mjs --profile edge,
// CI edge-runtime.yml). It replaces three archives of the Node runtime bundle;
// every other archive (the standard libraries) is the Node bundle's own.
import { readFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { hashFile, provisionArtifact } from '../managed-artifacts.mjs';

export const edgeRuntimeCatalog = JSON.parse(await readFile(new URL('../edge-runtimes.json', import.meta.url), 'utf8'));

const root = fileURLToPath(new URL('../../', import.meta.url));
export const edgeArchives = ['libleanrt.a', 'libleancpp.a', 'liblasmhost.a'];

/** Locates and verifies the edge runtime for a verified Node runtime bundle:
 * LASM_EDGE_RUNTIME (maintainers, CI), the package's targets/<name>-edge, or the
 * catalog's archive (src/edge-runtimes.json), provisioned like every other tool:
 * from the on-demand npm package @lasm/lean-edge-runtime when present, else over
 * HTTPS, verified by SHA-256 before extraction. */
export async function edgeRuntime(nodeRuntime, { directory = process.env.LASM_EDGE_RUNTIME, catalog = edgeRuntimeCatalog, ...provision } = {}) {
  const lean = nodeRuntime.manifest.lean;
  const name = `${nodeRuntime.manifest.name ?? 'lean-' + lean + '-wasm64'}-edge`;
  if (!directory && existsSync(join(root, 'targets', name, 'libraries.json'))) directory = join(root, 'targets', name);
  if (!directory) {
    const artifact = catalog.lean?.[lean];
    if (!artifact) throw new Error(`Lasm has no edge runtime for Lean ${lean}; edge targets support ${Object.keys(catalog.lean ?? {}).join(', ') || 'no Lean version'}.`);
    if (artifact.baseRuntimeManifestSha256 !== nodeRuntime.identity)
      throw new Error(`The cataloged edge runtime for Lean ${lean} belongs to another runtime build (${artifact.baseRuntimeManifestSha256})`);
    const { baseRuntimeManifestSha256, source, ...download } = artifact;
    const installed = await provisionArtifact(download, { label: `Lean ${lean} edge runtime`, ...provision });
    directory = installed.directory; // the archive root is stripped on extraction
  }
  directory = resolve(directory);
  const manifestFile = join(directory, 'libraries.json');
  if (!existsSync(manifestFile))
    throw new Error(`The Lean ${lean} edge runtime is missing or incomplete (${manifestFile})`);
  const manifest = JSON.parse(await readFile(manifestFile, 'utf8'));
  if (manifest.schema !== 1 || manifest.profile !== 'edge') throw new Error('Unrecognized edge runtime manifest');
  if (manifest.baseRuntimeManifestSha256 !== nodeRuntime.identity)
    throw new Error(`The edge runtime was built for runtime ${manifest.baseRuntimeManifestSha256}, not this Lasm's ${nodeRuntime.identity}`);
  const libraries = {};
  for (const archive of edgeArchives) {
    const file = join(directory, 'lib', archive);
    const sha256 = existsSync(file) ? await hashFile(file) : null;
    if (!sha256 || sha256 !== manifest.files?.[archive]) throw new Error(`Edge runtime archive ${archive} is missing or changed`);
    libraries[archive] = file;
  }
  return { directory, manifest, libraries, identity: JSON.stringify(manifest.files) };
}
