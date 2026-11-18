// `@lasm/cli/lean`: Lasm's own Lean, for tools that check a project's proofs
// with the same Lean the build uses (docs/api/decisions/0.7.md, 0.7-19).
// It installs the managed Lean on first use, as `lasm build` does.
import { dirname, join } from 'node:path';
import { provisionLean } from './managed-lean.mjs';

/** Lasm's Lean for the project of `source` (a `.lean` file; its
 * `lean-toolchain` picks the version): the `lean` and `lake` executables, the
 * version, and the directory of Lean's own compiled library (for `LEAN_PATH`).
 * `progress` receives `{ stage }` events while it installs. */
export async function lasmLean(source, { progress } = {}) {
  const installed = await provisionLean(source, { modules: 'extended', progress });
  return { version: installed.version, lean: installed.lean, lake: installed.lake,
    libraryDirectory: join(dirname(dirname(installed.lake)), 'lib', 'lean') };
}
