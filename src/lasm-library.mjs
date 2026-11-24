// Lasm's own Lean library (`import Lasm.JS`, `import Lasm.UI`, `import Lasm.Fastly`, `import Lasm.WASI.Http`), shipped with the compiler package
// in library/ and compiled into the managed Lean prefix when Lasm assembles it
// (so `import Lasm.JS` resolves like a standard library module, from standalone
// sources and Lake projects alike, with no Lake dependency). The generated C of
// its modules and the C glue are linked only into programs that import it.
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readFileSync, readdirSync } from 'node:fs';
import { dirname, join, toNamespacedPath } from 'node:path';
import { fileURLToPath } from 'node:url';
import { executableName } from './platform.mjs';
import { compiledLazyModules, importsOfSource, lazyModules } from './lazy-library.mjs';

const root = fileURLToPath(new URL('../library/', import.meta.url));
// Lean versions the library is compiled for, and its modules in import order.
export const libraryLeanVersions = ['4.35.0'];
// The generated Lasm.Fastly modules: Types, one per witx module, then the umbrella module.
const fastlyModules = ['Types', 'Cache', 'ConfigStore', 'HttpCache', 'Shielding', 'Abi', 'Uap', 'HttpBody', 'Log', 'HttpReq',
  'HttpDownstream', 'HttpResp', 'Dictionary', 'Geo', 'DeviceDetection', 'Erl', 'ObjectStore', 'ImageOptimizer', 'KvStore', 'SecretStore',
  'Backend', 'AsyncIo', 'Purge', 'ComputeRuntime', 'Acl'].map(name => `Lasm.Fastly.${name}`).concat('Lasm.Fastly');
// Lasm.JS.Web's generated modules, one per web spec, in import order, then the umbrella module (generate-web.mjs).
// Lasm.JS.Web's modules compiled with the prefix (and prebuilt): those the templates and the example apps import,
// with what they import (test/web-bindings.test.mjs checks the templates and examples need no other). Every other
// module of the whole platform ships as source and is compiled on first import (src/lazy-library.mjs, 0.3-6).
export const eagerWebRoots = ['Lasm.JS.Web.Dom', 'Lasm.JS.Web.Fetch', 'Lasm.JS.Web.Html', 'Lasm.JS.Web.Url', 'Lasm.JS.Web.Websockets'];
/** Lasm.JS.Web's prebuilt modules, read from the library at `library` (by default library/) on first use: the
 * closure of eagerWebRoots and of what the host modules import, in modules.json's order. */
export const eagerWebModules = (library = root) => {
  const all = JSON.parse(readFileSync(join(library, 'Lasm', 'JS', 'Web', 'modules.json'), 'utf8')).modules;
  const need = new Set();
  const visit = module => {
    if (need.has(module) || !all.includes(module)) return;
    need.add(module);
    for (const imported of importsOfSource(readFileSync(join(library, ...module.split('.')) + '.lean', 'utf8'))) visit(imported);
  };
  // And whatever Lasm.JS.Node, Deno and Bun (compiled with the prefix) import of it.
  const hostRoots = ['Node', 'Deno', 'Bun'].flatMap(host => {
    const dir = join(library, 'Lasm', 'JS', host);
    const files = [`${dir}.lean`, ...(existsSync(dir) ? readdirSync(dir).filter(f => f.endsWith('.lean')).map(f => join(dir, f)) : [])];
    return files.filter(existsSync).flatMap(file => importsOfSource(readFileSync(file, 'utf8')));
  });
  [...eagerWebRoots, ...hostRoots].forEach(visit);
  return all.filter(module => need.has(module));
};
// The generated Lasm.WASI.Http modules: one per WIT interface, then the umbrella module.
// Http.Respond is hand-written (whole bodies and respond), imported by the umbrella module.
const wasiHttpModules = ['Io.Error', 'Io.Poll', 'Io.Streams', 'Clocks.MonotonicClock', 'Http.Types', 'Http.OutgoingHandler',
  'Http.IncomingHandler', 'Http.Respond', 'Http'].map(name => `Lasm.WASI.${name}`);
/** An array computed on first use and kept: every array operation (`includes`, spread, `indexOf`) reads it. */
export function lazyArray(compute) {
  let value;
  const array = () => (value ??= compute());
  return new Proxy([], {
    get: (_, key) => { const a = array(), v = Reflect.get(a, key, a); return typeof v === 'function' ? v.bind(a) : v; },
    has: (_, key) => Reflect.has(array(), key),
    ownKeys: () => Reflect.ownKeys(array()),
    getOwnPropertyDescriptor: (_, key) => Reflect.getOwnPropertyDescriptor(array(), key),
  });
}
// Lasm's library modules compiled with the prefix, in import order. Lazy: it reads library/Lasm/JS/Web's
// module list and sources, and importing this module must touch no file (mutation sandboxes have no library/).
export const libraryModules = lazyArray(() => ['Lasm.JS.Core', 'Lasm.JS.Json', 'Lasm.JS.Meta', 'Lasm.JS',
  // Lasm.Fastly (docs/WASI_FASTLY_BINDINGS.md): Fastly Compute's host ABI, generated from its witx
  // by scripts/bindings/generate-fastly.mjs (fastlyModules, in import order).
  ...fastlyModules,
  // Lasm.WASI.Http (docs/WASI_FASTLY_BINDINGS.md): the wasi:http proxy world, generated from the
  // WASI 0.2.12 WIT by scripts/bindings/generate-wasi-http.mjs (wasiHttpModules, in import order).
  ...wasiHttpModules,
  // Lasm.JS.Web (docs/JS_BINDINGS.md, "Lasm.JS.Web"): the whole web platform, generated from the WebIDL of
  // @webref/idl by scripts/bindings/generate-web.mjs (eagerWebModules, in import order).
  'Lasm.JS.Web.Support', ...eagerWebModules(),
  // Lasm.JS.Node (docs/JS_BINDINGS.md, "Lasm.JS.Node"): Node's core set, compiled (scripts/bindings/node-modules.json
  // `core`, in import order). Every other Lasm.JS.Node.* module ships as source and is compiled on first import
  // (src/lazy-library.mjs). No umbrella module: programs import each module they use (0.4-39).
  'Lasm.JS.Node.Support', 'Lasm.JS.Node.AsyncHooks', 'Lasm.JS.Node.Events', 'Lasm.JS.Node.Stream',
  'Lasm.JS.Node.Buffer', 'Lasm.JS.Node.Path', 'Lasm.JS.Node.Os', 'Lasm.JS.Node.Net', 'Lasm.JS.Node.Process',
  'Lasm.JS.Node.Readline', 'Lasm.JS.Node.Fs', 'Lasm.JS.Node.Crypto', 'Lasm.JS.Node.ChildProcess',
  // Node.serve (docs/JS_BINDINGS.md, "Serving HTTP on Node: Node.serve"): provided by Lasm, hand-written, not generated.
  'Lasm.JS.Node.Serve',
  // Lasm.JS.Deno and Lasm.JS.Bun (docs/JS_BINDINGS.md, "Standard bindings for Deno" and "...for Bun"): their modules ship
  // as source and compile on first import (src/lazy-library.mjs), except Deno KV, which the templates use
  // (docs/api/decisions/0.4.md, 0.4-20, amended by 0.4-47).
  'Lasm.JS.Deno.Kv',
  // Lasm.JS.Cloudflare (docs/JS_BINDINGS.md, "Cloudflare Workers: Lasm.JS.Cloudflare"): Workers' runtime APIs,
  // generated from @cloudflare/workers-types (scripts/bindings/cloudflare-api.mjs, generate-web.mjs).
  // Prebuilt: the core a Worker's fetch handler and its KV and D1 bindings need (API_DECISIONS 0.5-16); every
  // other Lasm.JS.Cloudflare module compiles on first import (src/lazy-library.mjs).
  'Lasm.JS.Cloudflare.Support', 'Lasm.JS.Cloudflare.Kv', 'Lasm.JS.Cloudflare.D1', 'Lasm.JS.Cloudflare.Workers',
  // Lasm.UI (docs/UI.md): the Elm-architecture frontend framework.
  'Lasm.UI.Html', 'Lasm.UI.Diff', 'Lasm.UI.Model', 'Lasm.UI.Encode', 'Lasm.UI.Elements', 'Lasm.UI.Cmd', 'Lasm.UI.Subs',
  'Lasm.UI.Url', 'Lasm.UI.Mount', 'Lasm.UI.App', 'Lasm.UI.Render', 'Lasm.UI.Syntax', 'Lasm.UI']);
// The proofs-only modules (library/Lasm/UI/Proofs*, each library's Spec.lean and Theorems.lean;
// library/PROOFS.md) are checked by scripts/library-proofs.mjs (Lasm.UI's also by scripts/ui/lean-tests.mjs), not shipped.

export const glueSource = join(root, 'c', 'lasm_js.c');
// Headers the glue includes (the build's cache identity hashes them with it).
export const glueHeaders = [join(root, 'c', 'lasm_js_framing.h')];
// What a program with that glue links with (src/application-link.mjs): Lean's
// task waits and Emscripten's futex wait, wrapped by the glue (waits inside
// synchronous callbacks). The edge and WASI links replace the glue, so they drop these.
export const glueLinkFlags = ['lean_task_get', 'lean_io_wait_any_core', 'emscripten_futex_wait'].map(name => `-Wl,--wrap=${name}`);
// Std.Async binds of steps that complete at once, bounded in depth (#90): kept by
// every link, with its wrap (asyncLinkFlags), unlike the Node glue's.
export const asyncGlueSource = join(root, 'c', 'lasm_async.c');
// Lasm.Fastly's generated glue (scripts/bindings/generate-fastly.mjs): linked into programs that
// use Lasm.Fastly; every call fails with $unsupported except in --target fastly, whose WASI link
// compiles it with -DLASM_WASI_FASTLY (src/wasi/wasi-link.mjs).
export const fastlyGlueSource = join(root, 'c', 'lasm_fastly.c');
// Lasm.WASI.Http's generated glue (scripts/bindings/generate-wasi-http.mjs): linked into programs that
// use Lasm.WASI.Http, where every call fails, and into every --target wasi-http program with its host
// imports (-DLASM_WASI_HTTP, src/wasi/wasi-link.mjs).
export const wasiHttpGlueSource = join(root, 'c', 'lasm_wasi_http_bindings.c');
export const asyncLinkFlags = ['l___private_Std_Async_Basic_0__Std_Async_BaseAsync_bind_bindAsyncTask___redArg'].map(name => `-Wl,--wrap=${name}`);
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
export function linkedLibraryModules(sources, { read = file => readFileSync(file, 'latin1'), libraryText, modules: known = libraryModules } = {}) {
  const texts = sources.map(read);
  const linked = new Set();
  for (let changed = true; changed;) {
    changed = false;
    for (const module of known) {
      if (linked.has(module)) continue;
      const call = initializerCall(module);
      if (texts.some(text => text.includes(call)) || [...linked].some(other => libraryText(other).includes(call))) { linked.add(module); changed = true; }
    }
  }
  return known.filter(module => linked.has(module));
}

/** Whether any generated C initializes a module of Lasm's library (its Lean code imports it). */
export function importsLibrary(sources) {
  const texts = sources.map(file => readFileSync(file, 'latin1'));
  // The modules compiled on first import (src/lazy-library.mjs) count too: a program may import only those.
  return [...libraryModules, ...lazyModules(libraryModules)].some(module => texts.some(text => text.includes(initializerCall(module))));
}

/** The generated C (from the prefix) of the library modules the program links,
 * and the C glue, for the link; `modules` are those modules, `oleans` their
 * module data (for the binding check: library bindings name their JS modules). `supplied`: library modules
 * the program's own sources already compile (Lake built them, src/lake-library.mjs), linked from there only. */
export function librarySources(lean, programSources, { supplied } = {}) {
  const missing = module => !existsSync(libraryC(lean, module));
  if (libraryModules.some(missing)) throw new Error(`This program imports Lasm's library (Lasm.JS, Lasm.UI, …), which needs Lean ${libraryLeanVersions.join(' or ')} with Lean's elaborator libraries (the extended tier); it is missing from ${lean.prefix}`);
  const cache = new Map();
  const libraryText = module => { if (!cache.has(module)) cache.set(module, readFileSync(libraryC(lean, module), 'latin1')); return cache.get(module); };
  // The prefix's library: the modules compiled with it, then those compiled on first import.
  const theirs = new Set(supplied);
  const modules = linkedLibraryModules(programSources, { libraryText,
    modules: [...libraryModules, ...compiledLazyModules(lean.prefix, libraryModules)].filter(module => !theirs.has(module)) });
  const sources = [], inputs = [];
  for (const module of modules) {
    sources.push(libraryC(lean, module)); inputs.push({ module: '+' + module, source: join(lean.prefix, 'src', 'lean', ...module.split('.')) + '.lean' });
  }
  sources.push(glueSource, asyncGlueSource);
  inputs.push({ module: 'lasm_js.c', source: glueSource }, { module: 'lasm_async.c', source: asyncGlueSource });
  if (modules.some(module => module.startsWith('Lasm.Fastly.'))) {
    sources.push(fastlyGlueSource);
    inputs.push({ module: 'lasm_fastly.c', source: fastlyGlueSource });
  }
  if (modules.some(module => module.startsWith('Lasm.WASI.'))) {
    sources.push(wasiHttpGlueSource);
    inputs.push({ module: 'lasm_wasi_http_bindings.c', source: wasiHttpGlueSource });
  }
  const oleans = modules.map(module => join(lean.prefix, 'lib', 'lean', ...module.split('.')) + '.olean');
  return { sources, inputs, modules, oleans };
}
