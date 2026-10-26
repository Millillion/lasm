// Lasm's own Lean library (`import Lasm.JS`, `import Lasm.UI`), shipped with the compiler package
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
  'Lasm.UI.Html', 'Lasm.UI.Diff', 'Lasm.UI.Model', 'Lasm.UI.Encode', 'Lasm.UI.Elements', 'Lasm.UI.Cmd', 'Lasm.UI.Sub',
  'Lasm.UI.Url', 'Lasm.UI.App', 'Lasm.UI.Render', 'Lasm.UI.Syntax', 'Lasm.UI',
  'Lasm.UI.Proofs.Basic', 'Lasm.UI.Proofs.Lists', 'Lasm.UI.Proofs.Children', 'Lasm.UI.Proofs.TwoEnded',
  'Lasm.UI.Proofs.Diff', 'Lasm.UI.Proofs'];
export const glueSource = join(root, 'c', 'lasm_js.c');
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

/** Whether any generated C initializes a library module (its Lean code imports it). */
export function importsLibrary(sources) {
  return sources.some(file => /initialize_Lasm_(?:JS|UI)\b|initialize_Lasm_(?:JS|UI)_/.test(readFileSync(file, 'latin1')));
}

const initializer = module => new RegExp(`initialize_${module.replaceAll('.', '_')}\\b`);

/** The library modules a program's generated C needs: those it initializes and,
 * transitively, the ones their initializers initialize. */
export function neededLibraryModules(texts, cText) {
  const needed = new Set();
  const queue = libraryModules.filter(module => texts.some(text => initializer(module).test(text)));
  while (queue.length) {
    const module = queue.pop();
    if (needed.has(module)) continue;
    needed.add(module);
    const text = cText(module);
    for (const other of libraryModules) if (!needed.has(other) && initializer(other).test(text)) queue.push(other);
  }
  return libraryModules.filter(module => needed.has(module));
}

/** The generated C (from the prefix) of the library modules the program uses,
 * and the Lasm.JS C glue when it uses Lasm.JS, for the link. */
export function librarySources(lean, programSources = []) {
  const sources = [], inputs = [];
  const cFile = module => join(lean.prefix, 'lib', 'lasm', 'c', ...module.split('.')) + '.c';
  for (const module of libraryModules)
    if (!existsSync(cFile(module))) throw new Error(`This program imports Lasm's library (${module}), which needs Lean ${libraryLeanVersions.join(' or ')} with Lean's elaborator libraries (the extended tier); it is missing from ${lean.prefix}`);
  const texts = programSources.map(file => readFileSync(file, 'latin1'));
  const modules = programSources.length ? neededLibraryModules(texts, module => readFileSync(cFile(module), 'latin1')) : libraryModules;
  for (const module of modules) {
    const parts = module.split('.');
    sources.push(cFile(module)); inputs.push({ module: '+' + module, source: join(lean.prefix, 'src', 'lean', ...parts) + '.lean' });
  }
  if (modules.includes('Lasm.JS.Core')) { sources.push(glueSource); inputs.push({ module: 'lasm_js.c', source: glueSource }); }
  return { sources, inputs };
}

/** Every file of the library, for package checks. */
export function libraryFiles(directory = root) {
  return readdirSync(directory).flatMap(name => {
    const path = join(directory, name);
    return statSync(path).isDirectory() ? libraryFiles(path) : [path];
  });
}
