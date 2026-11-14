// Regenerates library/prebuilt/lean-<version>/: Lasm's Lean library (Lasm.JS)
// compiled by the managed Lean release, shipped so that assembling a Lean prefix
// copies it instead of compiling it on every new machine (src/lasm-library.mjs
// prebuiltLibrary). Run after changing library/ or the Lean pin; the unit test
// test/lasm-library-prebuilt.test.mjs fails while the shipped copy is stale.
//   node scripts/build-library-prebuilt.mjs [LEAN_VERSION]
import { cpSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { createHash } from 'node:crypto';
import { dirname, join } from 'node:path';
import { tmpdir } from 'node:os';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';
import { compileLibrary, libraryIdentity, libraryOutputs } from '../src/lasm-library.mjs';
import { provisionLean, toolchainCatalog } from '../src/managed-lean.mjs';

const root = fileURLToPath(new URL('../', import.meta.url));
const version = process.argv[2] ?? toolchainCatalog.defaultLean;
const release = toolchainCatalog.lean[version];
if (!release) throw new Error(`Unknown Lean ${version}`);
// The extended tier (Lean's elaborator), as for any program that imports Lasm.JS.
const probe = mkdtempSync(join(tmpdir(), 'lasm-library-prebuilt-'));
try {
  writeFileSync(join(probe, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
  writeFileSync(join(probe, 'lean-toolchain'), `leanprover/lean4:v${version}\n`);
  const lean = await provisionLean(join(probe, 'Main.lean'), { modules: 'extended' });
  // Compile into a hard-linked scratch copy of the prefix whose library outputs
  // are removed first (so no write reaches the managed cache's own files).
  if (process.platform === 'win32') throw new Error('Run this maintainer script on Linux or macOS');
  const tree = join(probe, 'prefix');
  execFileSync('cp', ['-al', lean.prefix, tree]);
  for (const path of ['lib/lean/Lasm', 'lib/lean/Lasm.olean', 'lib/lasm', 'src/lean/Lasm']) rmSync(join(tree, path), { recursive: true, force: true });
  if (!compileLibrary(tree, version)) throw new Error('The Lean prefix cannot compile Lasm.JS');
  const output = join(root, 'library', 'prebuilt', `lean-${version}`);
  rmSync(output, { recursive: true, force: true });
  const files = {};
  for (const name of libraryOutputs()) {
    const target = join(output, ...name.split('/'));
    mkdirSync(dirname(target), { recursive: true });
    cpSync(join(tree, ...name.split('/')), target);
    files[name] = createHash('sha256').update(readFileSync(target)).digest('hex');
  }
  writeFileSync(join(output, 'manifest.json'), JSON.stringify({ schema: 1, lean: version, leanCommit: release.commit,
    library: libraryIdentity(), files }, null, 2) + '\n');
  console.log(`Wrote ${output} (${Object.keys(files).length} files)`);
} finally { rmSync(probe, { recursive: true, force: true }); }
