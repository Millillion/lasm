// Library modules compiled on first import (docs/api/decisions/0.3.md, 0.3-6; docs/HOW_LASM_WORKS.md, "Lasm's
// library"). The generated bindings (Lasm.JS.Web, Lasm.JS.Node, Lasm.JS.Deno, Lasm.JS.Bun, Lasm.JS.Cloudflare)
// are too large to ship compiled whole. Their Lean sources ship in library/, a small core set ships compiled
// (src/lasm-library.mjs libraryModules, library/prebuilt), and any other module under these namespaces is
// compiled into the managed Lean prefix the first time a program (or `lasm editor`) imports it, together with
// the modules it imports. Each compiled module is stamped with the hash of its source and of its dependencies'
// stamps, so a new Lasm version recompiles only what changed. Modules that do not depend on each other compile
// in parallel; every output is written to a temporary file and renamed into place. The compile lock lives next to
// the prefix, in its parent's .locks/, never inside the prefix's verified contents.
import { createHash } from 'node:crypto';
import { spawn } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, readdirSync, realpathSync, renameSync, rmSync, statSync, writeFileSync, copyFileSync } from 'node:fs';
import { availableParallelism, totalmem } from 'node:os';
import { basename, dirname, join, relative, toNamespacedPath } from 'node:path';
import { fileURLToPath } from 'node:url';
import { executableName } from './platform.mjs';

export const libraryRoot = fileURLToPath(new URL('../library/', import.meta.url));

/** The generated binding namespaces whose modules (and umbrella module, `Lasm.JS.Deno`) may be compiled on first import. */
export const lazyNamespaces = ['Lasm.JS.Web.', 'Lasm.JS.Node.', 'Lasm.JS.Deno.', 'Lasm.JS.Bun.', 'Lasm.JS.Cloudflare.'];
export const isLazyNamespace = module => lazyNamespaces.some(prefix => module.startsWith(prefix) || module === prefix.slice(0, -1));

/** A module's source in the shipped library. */
export const librarySourceFile = (module, root = libraryRoot) => join(root, ...module.split('.')) + '.lean';

/** The modules a Lean source imports (its header's `import` commands, with any `public`/`meta`/`private`). */
export function importsOfSource(text) {
  const imports = [];
  for (const line of text.replace(/\/-[\s\S]*?-\//g, '').split('\n')) {
    const m = /^\s*(?:(?:public|private|meta)\s+)*import\s+(.+?)\s*(?:--.*)?$/.exec(line);
    if (m) imports.push(...m[1].split(/\s+/).filter(Boolean));
  }
  return imports;
}

/** Every module shipped as source under the lazy namespaces that is not in `eager` (compiled with the prefix). */
export function lazyModules(eager, root = libraryRoot) {
  const found = [];
  const walk = (dir, prefix) => {
    if (!existsSync(dir)) return;
    for (const entry of readdirSync(dir).sort()) {
      const path = join(dir, entry);
      if (statSync(path).isDirectory()) walk(path, `${prefix}${entry}.`);
      else if (entry.endsWith('.lean')) {
        const module = prefix + entry.slice(0, -5);
        if (isLazyNamespace(module) && !eager.includes(module)) found.push(module);
      }
    }
  };
  for (const prefix of lazyNamespaces) {
    const umbrella = prefix.slice(0, -1), parts = umbrella.split('.');
    // The umbrella module (library/Lasm/JS/Deno.lean), which imports the namespace's modules.
    if (existsSync(join(root, ...parts) + '.lean') && !eager.includes(umbrella)) found.push(umbrella);
    walk(join(root, ...parts), prefix);
  }
  return found;
}

/**
 * The lazy modules `roots` need, with their lazy dependencies (from the sources' imports), dependencies first.
 * `isLazy(module)` says whether a module is compiled on demand; others are already in the prefix.
 */
export function lazyClosure(roots, { isLazy, read = module => readFileSync(librarySourceFile(module), 'utf8') }) {
  const order = [], state = new Map(), deps = new Map();
  const visit = module => {
    if (state.get(module) === 'done') return;
    if (state.get(module) === 'active') throw new Error(`Lasm's library modules import each other in a cycle: ${module}`);
    state.set(module, 'active');
    const own = importsOfSource(read(module)).filter(isLazy);
    deps.set(module, own);
    for (const d of own) visit(d);
    state.set(module, 'done');
    order.push(module);
  };
  for (const r of roots) if (isLazy(r)) visit(r);
  return { order, deps };
}

/** The `import Lasm.*` of a program's Lean files: the source's directory tree (a Lake project's, when there is one). */
export function programLibraryImports(directory) {
  const imports = new Set();
  const skip = new Set(['.lake', 'node_modules', '.git', 'dist', '.cache', 'build']);
  const walk = (dir, depth) => {
    if (depth > 8) return;
    let entries;
    try { entries = readdirSync(dir, { withFileTypes: true }); } catch { return; }
    for (const e of entries) {
      if (e.isDirectory()) { if (!skip.has(e.name) && !e.name.startsWith('.')) walk(join(dir, e.name), depth + 1); continue; }
      if (!e.name.endsWith('.lean')) continue;
      try { for (const m of importsOfSource(readFileSync(join(dir, e.name), 'utf8'))) if (m.startsWith('Lasm.')) imports.add(m); } catch {}
    }
  };
  walk(directory, 0);
  return [...imports].sort();
}

/** How many modules compile at once: half the cores, and about one per 3 GB of memory (a big module needs ~2 GB). */
export function defaultJobs({ cores = availableParallelism(), memory = totalmem() } = {}) {
  return Math.max(1, Math.min(Math.floor(cores / 2), Math.floor(memory / (3 * 1024 ** 3))));
}

// The stamp: the module's identity and the inventory entries of its outputs, which the managed cache's
// verification of the prefix accepts in place of its receipt (src/managed-artifacts.mjs lazyLibraryEntries).
const stampFile = (tree, module) => join(tree, 'lib', 'lasm', 'lazy', `${module}.json`);
const readStamp = (tree, module) => { try { return JSON.parse(readFileSync(stampFile(tree, module), 'utf8')); } catch { return undefined; } };
const entryOf = file => {
  const bytes = readFileSync(file), stat = statSync(file);
  return { type: 'file', bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'),
    ...(process.platform === 'win32' ? {} : { executable: !!(stat.mode & 0o111) }) };
};
const outputsOf = (tree, module) => {
  const parts = module.split('.');
  return { olean: join(tree, 'lib', 'lean', ...parts) + '.olean', c: join(tree, 'lib', 'lasm', 'c', ...parts) + '.c',
    source: join(tree, 'src', 'lean', ...parts) + '.lean' };
};

/** The lock that serializes compiles into the prefix `tree`: in `.locks/` beside it, outside its verified contents
 * (a lock file stays after its holder exits, which the next build's integrity check would refuse). */
export const lazyLockPath = tree => join(dirname(tree), '.locks', `lazy-${basename(tree)}.lock`);

/** Lean compiling one module of the library into the prefix `tree` (as src/lasm-library.mjs compileLibrary).
 * The source is read where it ships (`root`), so nothing but finished outputs ever enters the prefix. */
export function leanCompileCommand(tree, { source, olean, c, root = join(tree, 'src', 'lean') }, platform = process.platform) {
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/i.test(key)) delete env[key];
  Object.assign(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192' });
  if (platform === 'win32') Object.assign(env, { LEAN_SYSROOT: toNamespacedPath(tree), LEAN_PATH: toNamespacedPath(join(tree, 'lib', 'lean')) });
  const native = path => platform === 'win32' ? toNamespacedPath(path) : path;
  return { program: native(join(tree, 'bin', executableName('lean', platform))),
    args: ['-j1', '-s8192', '-R', root, '-Dcompiler.postponeCompile=false', '-o', olean, '-c', c, source], env };
}

const runLean = ({ program, args, env }) => new Promise((resolveRun, reject) => {
  const child = spawn(program, args, { env, windowsHide: true, stdio: ['ignore', 'pipe', 'pipe'] });
  let output = '';
  child.stdout.on('data', d => { output += d; });
  child.stderr.on('data', d => { output += d; });
  child.on('error', reject);
  child.on('close', code => code === 0 ? resolveRun() : reject(new Error(`Lean could not compile a module of Lasm's library:\n${output.slice(-8000)}`)));
});

/**
 * Compiles into the prefix `tree` every lazy module `roots` need that is missing or stale. Each module's outputs
 * go to temporary files first and are renamed into place once Lean has finished, the stamp last, so an
 * interrupted compile leaves no partial .olean (the module is compiled again next time).
 * Returns { compiled: [module], ms }.
 */
export async function ensureLazyModules(tree, roots, { eager, root = libraryRoot, log = message => console.error(message),
  jobs = defaultJobs(), platform = process.platform, compile = runLean, lock = async (_path, action) => action() } = {}) {
  const lazy = new Set(lazyModules(eager, root));
  const read = module => readFileSync(librarySourceFile(module, root), 'utf8');
  const { order, deps } = lazyClosure(roots, { isLazy: m => lazy.has(m), read });
  if (!order.length) return { compiled: [], ms: 0 };
  // A module's identity: its source and its dependencies' identities.
  const identity = new Map();
  for (const m of order) identity.set(m, createHash('sha256').update(read(m)).update(deps.get(m).map(d => identity.get(d)).join(',')).digest('hex'));
  const upToDate = m => {
    const o = outputsOf(tree, m);
    return existsSync(o.olean) && existsSync(o.c) && readStamp(tree, m)?.identity === identity.get(m);
  };
  if (order.every(upToDate)) return { compiled: [], ms: 0 };
  return lock(lazyLockPath(tree), async () => {
    const todo = order.filter(m => !upToDate(m)); // again, under the lock: another process may have compiled them
    if (!todo.length) return { compiled: [], ms: 0 };
    const started = Date.now();
    log(`[lasm] Compiling ${todo.length} Lasm library module${todo.length > 1 ? 's' : ''} on first use (${todo.slice(0, 4).join(', ')}${todo.length > 4 ? ', …' : ''})…`);
    const pending = new Set(todo), done = new Set(order.filter(m => !pending.has(m))), running = new Map();
    const startOne = m => {
      const o = outputsOf(tree, m);
      for (const f of Object.values(o)) mkdirSync(dirname(f), { recursive: true });
      mkdirSync(dirname(stampFile(tree, m)), { recursive: true });
      const tmp = { olean: `${o.olean}.tmp-${process.pid}`, c: `${o.c}.tmp-${process.pid}`, source: `${o.source}.tmp-${process.pid}` };
      log(`[lasm] Compiling ${m} (first use)…`);
      const promise = compile(leanCompileCommand(tree, { source: librarySourceFile(m, root), root, olean: tmp.olean, c: tmp.c }, platform)).then(() => {
        copyFileSync(librarySourceFile(m, root), tmp.source);
        renameSync(tmp.olean, o.olean);
        renameSync(tmp.c, o.c);
        renameSync(tmp.source, o.source);
        const name = file => relative(realpathSync(tree), realpathSync(file)).split(/[\\/]/).join('/');
        const stamp = { schema: 1, module: m, identity: identity.get(m), files: Object.fromEntries(Object.values(o).map(f => [name(f), entryOf(f)])) };
        writeFileSync(`${stampFile(tree, m)}.tmp-${process.pid}`, JSON.stringify(stamp) + '\n');
        renameSync(`${stampFile(tree, m)}.tmp-${process.pid}`, stampFile(tree, m));
      }, error => {
        for (const f of Object.values(tmp)) rmSync(f, { force: true });
        throw error;
      });
      running.set(m, promise.then(() => m));
    };
    while (pending.size || running.size) {
      for (const m of [...pending]) {
        if (running.size >= jobs) break;
        if (deps.get(m).every(d => done.has(d))) { pending.delete(m); startOne(m); }
      }
      if (!running.size) throw new Error(`Lasm's library modules could not be ordered: ${[...pending].join(', ')}`);
      const finished = await Promise.race(running.values());
      running.delete(finished);
      done.add(finished);
    }
    const ms = Date.now() - started;
    log(`[lasm] Compiled ${todo.length} Lasm library module${todo.length > 1 ? 's' : ''} in ${(ms / 1000).toFixed(1)} s.`);
    return { compiled: todo, ms };
  });
}

/**
 * A build's or the editor's step: compiles into `prefix` the lazy modules the Lean files under `directory`
 * import. Messages go to `progress` (as stages) when there is one, else to `log`; `lock` is
 * src/application-lock.mjs withApplicationLock, so builds of different projects share the compiles.
 */
export function ensureProgramLibrary(prefix, directory, { eager, root, log = message => console.error(message), progress, lock } = {}) {
  return ensureLazyModules(prefix, programLibraryImports(directory), {
    eager, ...(root ? { root } : {}), log: message => (progress ? progress({ stage: message.replace(/^\[lasm\] /, '') }) : log(message)),
    lock: lock && ((path, action) => lock(path, action, { onWait: () => progress?.({ stage: 'Waiting for another build compiling Lasm library modules' }) })) });
}

/** The lazy modules compiled into the prefix, in an order where each comes after the modules it imports. */
export function compiledLazyModules(tree, eager, root = libraryRoot) {
  const present = lazyModules(eager, root).filter(m => readStamp(tree, m) && existsSync(outputsOf(tree, m).c));
  const set = new Set(present);
  return lazyClosure(present, { isLazy: m => set.has(m), read: m => readFileSync(librarySourceFile(m, root), 'utf8') }).order;
}

export const relativeToLibrary = file => relative(libraryRoot, file);
