// The source launcher (lasm-node.js) uses managed Lean, which supports only
// src/toolchains.json's defaultLean, while the legacy builder of these tests
// (buildMain, resolveLean) uses the repository root's Lean 4.32 pin. A fixture
// is compiled by both, so the launcher gets a copy outside the repository,
// pinned to the managed Lean.
import { copyFileSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { provisionLean } from '../../src/managed-lean.mjs';

const { defaultLean } = JSON.parse(readFileSync(new URL('../../src/toolchains.json', import.meta.url), 'utf8'));

/** A copy of `source` in its own pinned directory; removed after test `t`. */
export function launcherSource(t, source) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-launcher-source-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  writeFileSync(join(directory, 'lean-toolchain'), `leanprover/lean4:v${defaultLean}\n`);
  copyFileSync(source, join(directory, 'Main.lean'));
  return join(directory, 'Main.lean');
}

/** stderr without the launcher's own `[lasm] …` progress lines (build and run notices). */
export function programStderr(text) {
  return text.split(/(?<=\n)/).filter(line => !line.startsWith('[lasm] ')).join('');
}

/** The managed native Lean (the launcher's release) for `source`: the native oracle of its output. */
export async function managedLean(source) {
  return (await provisionLean(source, { native: true, log: () => {} })).lean;
}
