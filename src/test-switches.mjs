// Build switches for Lasm's own tests only: undocumented for users, listed in
// docs/TESTING.md, never set by the CLI.
//
// LASM_TEST_UNOPTIMIZED=1: build the program with optimization off, for the
// differential tester's optimization differential (scripts/differential/run.mjs
// targets node-O0, wasi-O0, deno-O0): the program's C at clang -O0, the Node
// link without Binaryen's optimization passes (the unoptimized probe link, as
// LASM_LINK_DEBUG), the edge link as in the dev profile (only the passes the
// program needs) and WASI's wasm-opt at -O0 (lowering passes only). The
// precompiled runtime archives are unchanged. The switch is part of the build's
// cache identity, so optimized and unoptimized outputs never share a cache entry.
import { copyFileSync, mkdirSync, writeFileSync } from 'node:fs';
import { join } from 'node:path';

export const testUnoptimized = (env = process.env) => env.LASM_TEST_UNOPTIMIZED === '1';

// LASM_TEST_LINK_EVIDENCE=DIR: every wasm-ld link Lasm runs (the Node link
// driver's final, probe and edge links, and the WASI link) also leaves wasm-ld's
// output module and its -Map file in a new directory under DIR, and the WASI
// link its wasm-opt step's input, output and arguments, for the toolchain's
// translation validation (scripts/link-validation/, docs/TESTING.md#translation-validation-of-the-toolchain).
// It changes no output, and is not part of the cache identity: a build served
// from the cache links nothing and leaves nothing.
export const linkEvidenceDirectory = (env = process.env) => env.LASM_TEST_LINK_EVIDENCE || undefined;
let evidenceCount = 0;
/** Copies `files` ({ name: source path }) and `meta` into a new directory under
 * LASM_TEST_LINK_EVIDENCE; returns it, or undefined when the switch is off. */
export function saveLinkEvidence(kind, files, meta = {}, env = process.env) {
  const root = linkEvidenceDirectory(env);
  if (!root) return undefined;
  const name = `${Date.now().toString(36)}-${process.pid}-${String(evidenceCount++).padStart(3, '0')}-${kind.replace(/[^A-Za-z0-9_-]/g, '_')}`;
  const directory = join(root, name);
  mkdirSync(directory, { recursive: true });
  for (const [file, source] of Object.entries(files)) copyFileSync(source, join(directory, file));
  writeFileSync(join(directory, 'evidence.json'), JSON.stringify({ kind, files: Object.keys(files), ...meta }, null, 1) + '\n');
  return directory;
}
