import { readFileSync } from 'node:fs';
import { fileURLToPath } from 'node:url';
import { delimiter, dirname, join } from 'node:path';

/** Supply standard Lean deployment paths while preserving explicit overrides. */
export function prepareApplicationMetadata(entrypoint, env = process.env) {
  const root = dirname(fileURLToPath(new URL('./lean/metadata.json', entrypoint)));
  let metadata;
  try { metadata = JSON.parse(readFileSync(join(root, 'metadata.json'), 'utf8')); }
  catch (error) { if (error.code === 'ENOENT') return; throw error; }
  if (metadata.schema !== 1 || !Array.isArray(metadata.roots)
    || metadata.roots.some(name => typeof name !== 'string' || !/^packages\/\d+$/.test(name)))
    throw new Error('Invalid deployed Lean module-data manifest');
  env.LEAN_SYSROOT ??= root;
  env.LEAN_PATH ??= [...metadata.roots, 'lib/lean'].map(name => join(root, name)).join(delimiter);
}
