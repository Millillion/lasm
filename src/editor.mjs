// Editor support (docs/GETTING_STARTED.md#editor): the Lean editor runs the
// project's own Lean toolchain (`lean-toolchain`, `leanprover/lean4:v4.35.0`,
// through elan), and Lasm's library (`import Lasm.JS`, `Lasm.UI`, the modules
// compiled on first import) comes from Lasm's Lake package, which the
// project's lakefile requires (decision 0.3-7, src/lake-library.mjs). Lasm's
// Lean is that same official Lean 4.35.0, so the editor, a native `lake build`
// and `lasm build` share one toolchain and Lake reuses each other's builds.
// Lasm changes nothing in elan (decision 0.7-25, issue #343): Lasm 0.3.0 to
// 0.10.0 linked Lasm's Lean as an elan toolchain (`lasm-4.35.0-…`) and set it
// as the project directory's elan override, which left a native `lake build`
// of a `lean_exe` without Lean's C compiler. lasm build, dev, init and editor
// remove such an override from the project's directory.
import { execFileSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, realpathSync, writeFileSync } from 'node:fs';
import { homedir } from 'node:os';
import { basename, delimiter, join, resolve } from 'node:path';
import { requiresLakePackage } from './lake-library.mjs';
import { programLibraryImports } from './lazy-library.mjs';
import { stepOutput } from './step-output.mjs';

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

/** The elan toolchain names Lasm 0.3.0 to 0.10.0 linked: `lasm-<Lean version>-<12 hex digits of its prefix>`. */
export const lasmToolchainPattern = /^lasm-\d+\.\d+\.\d+(?:-[0-9A-Za-z.]+)?-[0-9a-f]{12}$/;

const samePath = (a, b, platform) => platform === 'win32' ? a.toLowerCase() === b.toLowerCase() : a === b;
const canonical = path => { try { return realpathSync(path); } catch { return resolve(path); } };

/** The toolchain of elan's override for exactly this directory, from `$ELAN_HOME/settings.toml`
 * (`[overrides]`, `"<directory>" = "<toolchain>"`), or undefined. */
export function directoryOverride(elanHome, directory, platform = process.platform) {
  let text;
  try { text = readFileSync(join(elanHome, 'settings.toml'), 'utf8'); } catch { return undefined; }
  const wanted = [directory, resolve(directory), canonical(directory)];
  let overrides = false;
  for (const line of text.split(/\r?\n/)) {
    const table = /^\s*\[([^\]]*)\]\s*(?:#.*)?$/.exec(line);
    if (table) { overrides = table[1].trim() === 'overrides'; continue; }
    const entry = overrides && /^\s*"((?:[^"\\]|\\.)*)"\s*=\s*"([^"]*)"\s*(?:#.*)?$/.exec(line);
    if (!entry) continue;
    let path;
    try { path = JSON.parse(`"${entry[1]}"`); } catch { continue; }
    if (wanted.some(candidate => samePath(candidate, path, platform))) return entry[2];
  }
  return undefined;
}

/**
 * Removes the elan override to Lasm's own toolchain that Lasm 0.3.0 to 0.10.0 set on the project's directory
 * (issue #343). An override to any other toolchain is the user's and stays. Returns
 * { status: 'removed' | 'failed', toolchain, message? }, or undefined when there is none.
 */
export function removeLasmOverride({ project, elan, log = console.error, run = execFileSync, env = process.env }) {
  const toolchain = directoryOverride(elan.home, project);
  if (!toolchain || !lasmToolchainPattern.test(toolchain)) return undefined;
  try {
    run(elan.executable, ['override', 'unset', '--path', project],
      { cwd: project, env: { ...env, ELAN_HOME: elan.home }, stdio: ['ignore', 'pipe', 'pipe'], timeout: 60_000, windowsHide: true });
  } catch (error) {
    const message = (stepOutput(error) || String(error.message)).trim().split('\n')[0];
    log(`[lasm] Editor: could not remove this directory's elan override to Lasm's toolchain ${toolchain} (${message}); `
      + 'run `elan override unset` here, so that `lake` and the editor use the project\'s lean-toolchain.');
    return { status: 'failed', toolchain, message };
  }
  log(`[lasm] Editor: removed this directory's elan override to Lasm's toolchain ${toolchain}, which an older Lasm set: `
    + '`lake` and the Lean editor now use the project\'s lean-toolchain, with Lean\'s own C compiler, and Lasm\'s library comes from '
    + 'its Lake package (restart the Lean server if it is open).');
  return { status: 'removed', toolchain };
}

/**
 * The editor's side of a Lake project, after a lasm command: removes an elan override an older Lasm set
 * (removeLasmOverride), and when the lakefile does not require Lasm's Lake package but the project imports
 * `Lasm.*`, says once how to add it (`lasm editor`). Without elan, says once how to get the editor (always
 * when explicit). Returns { status: 'ready' | 'no-require' | 'no-elan' | 'removed' | 'failed', toolchain?, message? }.
 */
export function setupEditor({ project, log = console.error, env = process.env, run = execFileSync, explicit = false, requires = requiresLakePackage,
  imports = programLibraryImports }) {
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
  const removed = removeLasmOverride({ project, elan, log, run, env });
  if (removed) return removed;
  if (requires(project)) return { status: 'ready' };
  if (!explicit && !marker?.requireHinted && imports(project).length) {
    log('[lasm] Editor: this project imports Lasm\'s library, which the Lean editor finds through Lasm\'s Lake package: '
      + 'run `npx lasm editor` once to add it to the lakefile.');
    writeMarker(project, { ...marker, requireHinted: true });
  }
  return { status: 'no-require' };
}

/** After a good build: the editor's side of a Lake project (setupEditor), unless disabled (LASM_EDITOR=0) or on
 * CI. Needs no Lean: the build (or lasm init) has made Lasm's Lake package link. Never fails the build. */
export async function autoSetupEditor(source, { log = console.error, env = process.env, run = execFileSync, find } = {}) {
  if (env.LASM_EDITOR === '0' || (env.CI && env.CI !== 'false' && env.LASM_EDITOR !== '1')) return undefined;
  try {
    const project = (find ?? (await import('./application-sources.mjs')).findApplicationProject)(source);
    if (!project) return undefined;
    return setupEditor({ project, log, env, run });
  } catch (error) {
    log(`[lasm] Editor setup skipped: ${String(error.message).split('\n')[0]}`);
    return { status: 'failed' };
  }
}

/** Makes the lazily compiled Lasm library modules the project's files import resolvable in the editor
 * (src/lake-library.mjs, 0.3-7): the project's `.lake/lasm-library` link to Lasm's Lake package, made or repaired;
 * when the lakefile requires that package, Lake builds them on demand. Otherwise, unless `compile` is false
 * (lasm init's cached-only setup), Lasm compiles them into the prefix now (src/lazy-library.mjs).
 * Returns { compiled: the modules compiled now, lake: whether Lake builds them }. */
export async function compileProjectLibrary(project, lean, log = console.error, { compile = true, cache, eager, root } = {}) {
  // `eager` and `root`: Lasm's prebuilt module list and library sources (a test's own library), by default the real ones.
  const libraryModules = eager ?? (await import('./lasm-library.mjs')).libraryModules;
  const { ensureLakeLibrary, lakefileOf } = await import('./lake-library.mjs');
  if (lakefileOf(project) && ensureLakeLibrary(project, lean.prefix, { eager: libraryModules, cache, root }).required) return { compiled: [], lake: true };
  if (!compile) return { compiled: [], lake: false };
  const { ensureProgramLibrary } = await import('./lazy-library.mjs');
  const { withApplicationLock } = await import('./application-lock.mjs');
  return { ...await ensureProgramLibrary(lean.prefix, project, { eager: libraryModules, root, log, lock: withApplicationLock }), lake: false };
}

/** lasm init's step: the `.lake/lasm-library` link (0.3-7) for a Lake project, with Lasm's Lean if it is already on
 * this machine (cachedOnly); otherwise the first build makes it. Never fails. Returns whether the link was made. */
export async function linkProjectLibrary(project, { cachedOnly = true, provision, compileLibrary = compileProjectLibrary } = {}) {
  try {
    const lean = await (provision ?? (await import('./managed-lean.mjs')).provisionLean)(project, { log: () => {}, cachedOnly });
    await compileLibrary(project, lean, () => {}, { compile: false });
    return true;
  } catch { return false; }
}

/** `lasm editor [directory]`: Lasm's Lake package required, linked and up to date, the project's lean-toolchain, and
 * no elan override from an older Lasm. Exit code 0 when the editor can resolve `import Lasm.*`. */
export async function runEditor({ input = '.' } = {}, { provision, env = process.env, run = execFileSync, log = console.error } = {}) {
  const { findApplicationProject, lakeNativePackages } = await import('./application-sources.mjs');
  const directory = resolve(input);
  const project = existsSync(join(directory, 'lakefile.toml')) || existsSync(join(directory, 'lakefile.lean')) ? directory : findApplicationProject(join(directory, 'Main.lean'));
  if (!project) throw new Error(`lasm editor works in a Lake project (a directory with lakefile.toml); ${input} is not in one.`);
  const { createBuildProgress } = await import('./build-progress.mjs');
  const progress = createBuildProgress({ log });
  let lean;
  try { lean = await (provision ?? (await import('./managed-lean.mjs')).provisionLean)(project, { progress: event => progress.update(event) }); }
  finally { progress.finish(); }
  // Without a manifest, Lake resolves the workspace once (writing lake-manifest.json with the project's other
  // dependencies) before Lasm's entry is added to it: the editor's `lake setup-file` never writes the manifest.
  if (!existsSync(join(project, 'lake-manifest.json'))) {
    try { lakeNativePackages(project, lean); }
    catch (error) { log(`[lasm] Editor: Lake could not resolve this project's dependencies (${String(error.message).split('\n')[0]}); run \`lake update\` here.`); }
  }
  // Lasm's library as a Lake package (0.3-7): the lakefile requires it, so Lake builds the modules compiled on first import.
  const { addLakeRequire, lakefileOf } = await import('./lake-library.mjs');
  if (addLakeRequire(project)) log(`[lasm] Editor: added Lasm's library to ${basename(lakefileOf(project))} ([[require]] "lasm", path .lake/lasm-library), so Lake builds its modules on first import, in the editor too.`);
  await compileProjectLibrary(project, lean, log);
  // The editor runs the project's toolchain: Lasm's Lean version, so that Lasm's library loads in it.
  const pin = join(project, 'lean-toolchain');
  if (!existsSync(pin)) {
    writeFileSync(pin, `leanprover/lean4:v${lean.version}\n`);
    log(`[lasm] Editor: wrote lean-toolchain (leanprover/lean4:v${lean.version}), the Lean that Lasm's library is compiled with.`);
  }
  const result = setupEditor({ project, log, env, run, explicit: true });
  if (result.status === 'no-elan' || result.status === 'failed') return 1;
  log(`[lasm] Editor: the Lean editor resolves \`import Lasm.*\` in ${basename(project)} with the project's own Lean (lean-toolchain, through elan) `
    + 'and Lasm\'s Lake package (.lake/lasm-library); restart its Lean server if it is open. Lasm changes nothing in elan.');
  return 0;
}
