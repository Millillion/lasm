// Lasm's own Lean library (`import Lasm.JS`, `import Lasm.Fetch`, `import Lasm.UI`), shipped with the compiler package
// in library/ and compiled into the managed Lean prefix when Lasm assembles it
// (so `import Lasm.JS` resolves like a standard library module, from standalone
// sources and Lake projects alike, with no Lake dependency). The generated C of
// its modules and the C glue are linked only into programs that import it.
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync, statSync } from 'node:fs';
import { dirname, join, toNamespacedPath } from 'node:path';
import { fileURLToPath } from 'node:url';
import { executableName } from './platform.mjs';

const root = fileURLToPath(new URL('../library/', import.meta.url));
// Lean versions the library is compiled for, and its modules in import order.
export const libraryLeanVersions = ['4.35.0'];
export const libraryModules = ['Lasm.JS.Core', 'Lasm.JS.Json', 'Lasm.JS.Meta', 'Lasm.JS',
  // Lasm.Fetch (docs/FETCH.md): one HTTP handler for Node, WASI, Fastly and the edge.
  'Lasm.Fetch', 'Lasm.Fastly', 'Lasm.Fetch.Assets', 'Lasm.Fetch.Embed', 'Lasm.KV',
  // Lasm.Web (docs/BROWSER.md): web-platform bindings on Lasm.JS.
  'Lasm.Web.Types', 'Lasm.Web.Dom', 'Lasm.Web.Events', 'Lasm.Web.Timers', 'Lasm.Web.Fetch', 'Lasm.Web.Url', 'Lasm.Web.Storage',
  'Lasm.Web.History', 'Lasm.Web.WebSocket', 'Lasm.Web.Crypto', 'Lasm.Web.Console', 'Lasm.Web.Canvas', 'Lasm.Web.App', 'Lasm.Web',
  // Lasm.UI (docs/UI.md): the Elm-architecture frontend framework.
  'Lasm.UI.Html', 'Lasm.UI.Diff', 'Lasm.UI.Model', 'Lasm.UI.Encode', 'Lasm.UI.Elements', 'Lasm.UI.Cmd', 'Lasm.UI.Subs',
  'Lasm.UI.Url', 'Lasm.UI.App', 'Lasm.UI.Render', 'Lasm.UI.Syntax', 'Lasm.UI',
  // Lasm.RPC (docs/RPC.md): typed endpoints shared by a Lasm.Fetch server and a Lasm.UI app.
  'Lasm.RPC.Core', 'Lasm.RPC.Server', 'Lasm.RPC.Client', 'Lasm.RPC'];
// Lasm.UI's proofs (library/Lasm/UI/Proofs*) are checked by scripts/ui/lean-tests.mjs, not shipped.

export const glueSource = join(root, 'c', 'lasm_js.c');
// Lasm.Fetch's glue on Node and the edge (WASI builds link src/wasi/lasm_fetch_wasi.c).
export const fetchGlueSource = join(root, 'c', 'lasm_fetch.c');
// Lasm.JS.Meta (deriving, `@[js]`) uses Lean's elaborator: only prefixes that
// contain it (the extended tier) get the library.
const requiredOlean = ['Lean', 'Elab', 'Deriving', 'Basic.olean'];
const sourceFile = module => join(root, ...module.split('.')) + '.lean';

/** Identity of the library sources, part of the assembled prefix's provenance. */
export function libraryIdentity() {
  const hash = createHash('sha256').update(JSON.stringify({ schema: 1, modules: libraryModules }));
  for (const module of libraryModules) hash.update(module).update(readFileSync(sourceFile(module)));
  return hash.digest('hex');
}

/** The library's outputs (the .olean, the generated C and the source copy of
 * every module), relative to a Lean prefix. */
export const libraryOutputs = () => libraryModules.flatMap(module => {
  const parts = module.split('.');
  return [['lib', 'lean', ...parts].join('/') + '.olean', ['lib', 'lasm', 'c', ...parts].join('/') + '.c',
    ['src', 'lean', ...parts].join('/') + '.lean'];
});
const prebuiltDirectory = version => join(root, 'prebuilt', `lean-${version}`);

/** The shipped compilation of the library for one Lean release, when it is the
 * compilation of these sources by that release (scripts/build-library-prebuilt.mjs).
 * Lean's .olean files and generated C do not depend on the host platform
 * (Lean's own tier archives are shared by all five), so one build serves all. */
export function prebuiltLibrary(version, commit) {
  const directory = prebuiltDirectory(version), manifestFile = join(directory, 'manifest.json');
  if (!existsSync(manifestFile)) return undefined;
  const manifest = JSON.parse(readFileSync(manifestFile, 'utf8'));
  if (manifest.schema !== 1 || manifest.lean !== version || manifest.leanCommit !== commit || manifest.library !== libraryIdentity()) return undefined;
  const outputs = libraryOutputs();
  if (JSON.stringify(Object.keys(manifest.files).sort()) !== JSON.stringify([...outputs].sort())) return undefined;
  for (const [name, sha256] of Object.entries(manifest.files))
    if (createHash('sha256').update(readFileSync(join(directory, ...name.split('/')))).digest('hex') !== sha256)
      throw new Error(`Lasm's prebuilt Lean library is damaged (${name}); reinstall the Lasm package`);
  return { directory, files: manifest.files };
}

/** Compiles the library into an assembled Lean prefix `tree` (bin/lean, lib/lean),
 * or copies its shipped compilation for this Lean release (`commit`). */
export function compileLibrary(tree, version, { platform = process.platform, commit } = {}) {
  if (!libraryLeanVersions.includes(version) || !existsSync(join(tree, 'lib', 'lean', ...requiredOlean))) return false;
  const prebuilt = commit && prebuiltLibrary(version, commit);
  if (prebuilt) {
    for (const name of Object.keys(prebuilt.files)) {
      const target = join(tree, ...name.split('/'));
      mkdirSync(dirname(target), { recursive: true });
      copyFileSync(join(prebuilt.directory, ...name.split('/')), target);
    }
    return true;
  }
  const lean = join(tree, 'bin', executableName('lean', platform));
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/i.test(key)) delete env[key];
  Object.assign(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192' });
  // As src/application-sources.mjs nativeLeanEnvironment: deep cache paths on Windows.
  if (platform === 'win32') Object.assign(env, { LEAN_SYSROOT: toNamespacedPath(tree), LEAN_PATH: toNamespacedPath(join(tree, 'lib', 'lean')) });
  const native = path => platform === 'win32' ? toNamespacedPath(path) : path;
  for (const module of libraryModules) {
    const parts = module.split('.');
    const olean = join(tree, 'lib', 'lean', ...parts) + '.olean';
    const c = join(tree, 'lib', 'lasm', 'c', ...parts) + '.c';
    const source = join(tree, 'src', 'lean', ...parts) + '.lean';
    for (const file of [olean, c, source]) mkdirSync(dirname(file), { recursive: true });
    copyFileSync(sourceFile(module), source);
    // As src/application-sources.mjs: a namespaced executable and LEAN_PATH, ordinary arguments.
    execFileSync(native(lean), ['-j1', '-s8192', '-R', join(tree, 'src', 'lean'), '-Dcompiler.postponeCompile=false',
      '-o', olean, '-c', c, source], { env, windowsHide: true, encoding: 'utf8', timeout: 600_000,
      stdio: ['ignore', 'pipe', 'pipe'], maxBuffer: 16 * 1024 * 1024 });
  }
  return true;
}

// A module's initializer in Lean's generated C (module names here have no underscores).
const initializerCall = module => 'initialize_' + module.replaceAll('.', '_') + '(';
const libraryC = (lean, module) => join(lean.prefix, 'lib', 'lasm', 'c', ...module.split('.')) + '.c';

/** The library modules a program links: those whose initializer the program's
 * generated C calls, and the library modules those import, in import order. */
export function linkedLibraryModules(sources, { read = file => readFileSync(file, 'latin1'), libraryText } = {}) {
  const texts = sources.map(read);
  const linked = new Set();
  for (let changed = true; changed;) {
    changed = false;
    for (const module of libraryModules) {
      if (linked.has(module)) continue;
      const call = initializerCall(module);
      if (texts.some(text => text.includes(call)) || [...linked].some(other => libraryText(other).includes(call))) { linked.add(module); changed = true; }
    }
  }
  return libraryModules.filter(module => linked.has(module));
}

/** Whether any generated C initializes a module of Lasm's library (its Lean code imports it). */
export function importsLibrary(sources) {
  const texts = sources.map(file => readFileSync(file, 'latin1'));
  return libraryModules.some(module => texts.some(text => text.includes(initializerCall(module))));
}

/** The generated C (from the prefix) of the library modules the program links,
 * and the C glue, for the link; `modules` are those modules, `oleans` their
 * module data (for the binding check: library bindings name their JS modules). */
export function librarySources(lean, programSources) {
  const missing = module => !existsSync(libraryC(lean, module));
  if (libraryModules.some(missing)) throw new Error(`This program imports Lasm's library (Lasm.JS, Lasm.Fetch, Lasm.UI), which needs Lean ${libraryLeanVersions.join(' or ')} with Lean's elaborator libraries (the extended tier); it is missing from ${lean.prefix}`);
  const cache = new Map();
  const libraryText = module => { if (!cache.has(module)) cache.set(module, readFileSync(libraryC(lean, module), 'latin1')); return cache.get(module); };
  const modules = linkedLibraryModules(programSources, { libraryText });
  const sources = [], inputs = [];
  for (const module of modules) {
    sources.push(libraryC(lean, module)); inputs.push({ module: '+' + module, source: join(lean.prefix, 'src', 'lean', ...module.split('.')) + '.lean' });
  }
  sources.push(glueSource, fetchGlueSource);
  inputs.push({ module: 'lasm_js.c', source: glueSource }, { module: 'lasm_fetch.c', source: fetchGlueSource });
  const oleans = modules.map(module => join(lean.prefix, 'lib', 'lean', ...module.split('.')) + '.olean');
  return { sources, inputs, modules, oleans };
}

/** Every file of the library, for package checks. */
export function libraryFiles(directory = root) {
  return readdirSync(directory).flatMap(name => {
    const path = join(directory, name);
    return statSync(path).isDirectory() ? libraryFiles(path) : [path];
  });
}
