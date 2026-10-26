// Editor support (docs/GETTING_STARTED.md#editor): Lasm's Lean library
// (`import Lasm.UI`, `Lasm.Fetch`, …) is compiled into Lasm's own managed Lean
// prefix, not into the official toolchain the Lean editor extension runs. Lasm
// links that prefix as an elan toolchain and sets it as the project's elan
// override, so `lake serve` (the language server) resolves every `Lasm.*`
// import with exactly the Lean and library that `lasm build` uses. The project's
// files are unchanged (`lean-toolchain` keeps `leanprover/lean4:v4.35.0`); the
// override is per machine and per directory (`elan override unset` undoes it).
import { execFileSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { homedir } from 'node:os';
import { basename, delimiter, join } from 'node:path';

const markerFile = project => join(project, '.lake', 'lasm', 'editor.json');
const readMarker = project => { try { return JSON.parse(readFileSync(markerFile(project), 'utf8')); } catch { return undefined; } };
const writeMarker = (project, value) => {
  try { mkdirSync(join(project, '.lake', 'lasm'), { recursive: true }); writeFileSync(markerFile(project), JSON.stringify(value, null, 2) + '\n'); } catch {}
};

/** elan's home and executable, or undefined when elan is not installed. */
export function findElan(env = process.env, platform = process.platform) {
  const home = env.ELAN_HOME || join(homedir(), '.elan');
  const name = platform === 'win32' ? 'elan.exe' : 'elan';
  const candidates = [...(env.PATH ?? env.Path ?? '').split(delimiter).filter(Boolean).map(directory => join(directory, name)), join(home, 'bin', name)];
  const executable = candidates.find(file => existsSync(file));
  return executable ? { home, executable } : undefined;
}

/** The elan toolchain name for one managed prefix (its directory is content-addressed). */
export const editorToolchainName = (version, prefix) => `lasm-${version}-${basename(prefix).slice(0, 12)}`;

/**
 * Make the Lean editor see `Lasm.*` in this Lake project. Returns
 * { status: 'linked' | 'current' | 'no-elan' | 'failed', toolchain?, message? }.
 * Prints a line only when something changed (or once without elan; always when explicit).
 */
export function setupEditor({ project, prefix, version, log = console.error, env = process.env, run = execFileSync, explicit = false }) {
  const elan = findElan(env);
  const marker = readMarker(project);
  if (!elan) {
    if (explicit || !marker?.hinted) {
      log('[lasm] Editor: to make the Lean editor resolve `import Lasm.*`, install the Lean 4 extension for VS Code '
        + '(it installs elan), then run `npx lasm editor` in this project.');
      writeMarker(project, { ...marker, hinted: true });
    }
    return { status: 'no-elan' };
  }
  const toolchain = editorToolchainName(version, prefix);
  const linked = existsSync(join(elan.home, 'toolchains', toolchain));
  if (!explicit && linked && marker?.toolchain === toolchain && marker?.prefix === prefix && marker?.elanHome === elan.home)
    return { status: 'current', toolchain };
  const options = { cwd: project, env: { ...env, ELAN_HOME: elan.home }, stdio: ['ignore', 'pipe', 'pipe'], timeout: 60_000, windowsHide: true };
  try {
    if (!linked) run(elan.executable, ['toolchain', 'link', toolchain, prefix], options);
    run(elan.executable, ['override', 'set', toolchain], options);
  } catch (error) {
    const message = String(error.stderr ?? error.message).trim().split('\n')[0];
    log(`[lasm] Editor: could not set up elan toolchain ${toolchain}: ${message}`);
    return { status: 'failed', toolchain, message };
  }
  writeMarker(project, { toolchain, prefix, elanHome: elan.home });
  log(`[lasm] Editor: linked Lasm's Lean ${version} as the elan toolchain ${toolchain} and set it as this directory's `
    + 'elan override, so the Lean editor resolves `import Lasm.*` (restart its Lean server if it is open). '
    + `Nothing else in elan changes. Undo: elan override unset${explicit ? '' : '; LASM_EDITOR=0 stops lasm doing this'}.`);
  return { status: 'linked', toolchain };
}

/** After a good build: set up the editor for a Lake project, unless disabled
 * (LASM_EDITOR=0) or on CI. Never fails the build. */
export async function autoSetupEditor(source, { log = console.error, env = process.env, cachedOnly = false } = {}) {
  if (env.LASM_EDITOR === '0' || (env.CI && env.CI !== 'false' && env.LASM_EDITOR !== '1')) return undefined;
  try {
    const { findApplicationProject } = await import('./application-sources.mjs');
    const project = findApplicationProject(source);
    if (!project) return undefined;
    const { provisionLean } = await import('./managed-lean.mjs');
    let lean;
    try { lean = await provisionLean(project, { log: () => {}, cachedOnly }); }
    catch (error) {
      // lasm init on a machine without Lasm's Lean yet: the first build sets the editor up.
      if (error.code === 'ERR_LASM_NOT_CACHED') {
        log('[lasm] Editor: the first npm run dev (or npx lasm editor) links Lasm\'s Lean for the Lean editor; Lasm installs it then.');
        return { status: 'not-cached' };
      }
      throw error;
    }
    return setupEditor({ project, prefix: lean.executionPrefix, version: lean.version, log, env });
  } catch (error) {
    log(`[lasm] Editor setup skipped: ${String(error.message).split('\n')[0]}`);
    return { status: 'failed' };
  }
}

/** `lasm editor [directory]`: set up (or refresh) the editor explicitly. */
export async function runEditor({ input = '.' } = {}) {
  const { resolve } = await import('node:path');
  const { findApplicationProject } = await import('./application-sources.mjs');
  const directory = resolve(input);
  const project = existsSync(join(directory, 'lakefile.toml')) || existsSync(join(directory, 'lakefile.lean')) ? directory : findApplicationProject(join(directory, 'Main.lean'));
  if (!project) throw new Error(`lasm editor works in a Lake project (a directory with lakefile.toml); ${input} is not in one.`);
  const { provisionLean } = await import('./managed-lean.mjs');
  const { createBuildProgress } = await import('./build-progress.mjs');
  const progress = createBuildProgress();
  let lean;
  try { lean = await provisionLean(project, { progress: event => progress.update(event) }); }
  finally { progress.finish(); }
  const result = setupEditor({ project, prefix: lean.executionPrefix, version: lean.version, explicit: true });
  return result.status === 'linked' || result.status === 'current' ? 0 : 1;
}
