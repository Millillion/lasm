// Lasm's own Lean library (`import Lasm.JS`), shipped with the compiler package
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
export const libraryModules = ['Lasm.JS.Core', 'Lasm.JS.Json', 'Lasm.JS.Meta', 'Lasm.JS'];
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

/** Compiles the library into an assembled Lean prefix `tree` (bin/lean, lib/lean). */
export function compileLibrary(tree, version, { platform = process.platform } = {}) {
  if (!libraryLeanVersions.includes(version) || !existsSync(join(tree, 'lib', 'lean', ...requiredOlean))) return false;
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
    execFileSync(native(lean), ['-j1', '-s8192', '-R', native(join(tree, 'src', 'lean')), '-Dcompiler.postponeCompile=false',
      '-o', native(olean), '-c', native(c), native(source)], { env, windowsHide: true, encoding: 'utf8', timeout: 600_000,
      stdio: ['ignore', 'pipe', 'pipe'], maxBuffer: 16 * 1024 * 1024 });
  }
  return true;
}

/** Whether any generated C initializes a Lasm.JS module (its Lean code imports it). */
export function importsLibrary(sources) {
  return sources.some(file => readFileSync(file, 'latin1').includes('initialize_Lasm_JS'));
}

/** The library's generated C (from the prefix) and the glue, for the link. */
export function librarySources(lean) {
  const sources = [], inputs = [];
  for (const module of libraryModules) {
    const parts = module.split('.');
    const c = join(lean.prefix, 'lib', 'lasm', 'c', ...parts) + '.c';
    if (!existsSync(c)) throw new Error(`This program imports Lasm.JS, which needs Lean ${libraryLeanVersions.join(' or ')} with Lean's elaborator libraries (the extended tier); it is missing from ${lean.prefix}`);
    sources.push(c); inputs.push({ module: '+' + module, source: join(lean.prefix, 'src', 'lean', ...parts) + '.lean' });
  }
  sources.push(glueSource); inputs.push({ module: 'lasm_js.c', source: glueSource });
  return { sources, inputs };
}

/** Every file of the library, for package checks. */
export function libraryFiles(directory = root) {
  return readdirSync(directory).flatMap(name => {
    const path = join(directory, name);
    return statSync(path).isDirectory() ? libraryFiles(path) : [path];
  });
}
