// The edge runtime (Phase 7, docs/EDGE.md): Lean's C++ runtime and Lasm's host
// bridge built single-threaded (build-application-runtime.mjs --profile edge,
// CI edge-runtime.yml). It replaces three archives of the Node runtime bundle;
// every other archive (the standard libraries) is the Node bundle's own.
import { readFile } from 'node:fs/promises';
import { existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { hashFile } from '../managed-artifacts.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
export const edgeArchives = ['libleanrt.a', 'libleancpp.a', 'liblasmhost.a'];

/** Locates and verifies the edge runtime for a verified Node runtime bundle.
 * LASM_EDGE_RUNTIME (maintainers, CI) or the package's targets/<name>-edge. */
export async function edgeRuntime(nodeRuntime, { directory = process.env.LASM_EDGE_RUNTIME } = {}) {
  const name = `${nodeRuntime.manifest.name ?? 'lean-' + nodeRuntime.manifest.lean + '-wasm64'}-edge`;
  directory = resolve(directory ?? join(root, 'targets', name));
  const manifestFile = join(directory, 'libraries.json');
  if (!existsSync(manifestFile))
    throw new Error(`The Lean ${nodeRuntime.manifest.lean} edge runtime is missing (${manifestFile}). Edge targets are experimental; maintainers supply it with LASM_EDGE_RUNTIME (the edge-runtime.yml artifact).`);
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
