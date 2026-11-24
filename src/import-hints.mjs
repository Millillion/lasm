// Missing-import hints (docs/api/decisions/0.3.md, 0.3-20). Lasm's generated bindings are per module, with no
// catch-all import (Jordan, 2026-11-16), so a program that uses `fetch` without `import Lasm.JS.Web.Fetch` gets
// Lean's "Unknown identifier". The generator (scripts/bindings/generate-web.mjs) writes an index of every public
// declaration of every module of Lasm's library (Lasm.JS's core, Lasm.JS.Web, Node, Deno, Bun and Cloudflare,
// Lasm.UI, Lasm.Fastly, Lasm.WASI, …) and the module a program imports for it
// (library/Lasm/JS/import-index.json); a build or dev error on an unknown name that the index knows gets the
// exact import to add.
import { readFileSync, readdirSync } from 'node:fs';
import { join } from 'node:path';

const indexFile = new URL('../library/Lasm/JS/import-index.json', import.meta.url);
/** The generated namespaces: a module of Lasm.JS.<Host>, whose names the index writes without `Lasm.JS.<Host>.`. */
export const indexHosts = ['Web', 'Node', 'Deno', 'Bun', 'Cloudflare'];
/** The generated namespace (`Node`) a module belongs to, or undefined. */
export const moduleHost = module => { const [, js, host] = module.split('.'); return js === 'JS' && indexHosts.includes(host) ? host : undefined; };
/** What the index leaves off a module's names: `Lasm.JS.<Host>.` for the generated namespaces, `Lasm.` otherwise. */
export const indexPrefix = module => { const host = moduleHost(module); return host ? `Lasm.JS.${host}.` : 'Lasm.'; };

// ---------- writing the index (the generator) ----------

/** The public declarations of a Lean source: full names, from `namespace` blocks and declaration keywords. */
export function declaredNames(text) {
  const names = [], stack = [];
  for (const line of text.split('\n')) {
    let m;
    if ((m = /^namespace (\S+)\s*$/.exec(line))) { stack.push(m[1]); continue; }
    if ((m = /^end (\S+)\s*$/.exec(line)) && stack.at(-1) === m[1]) { stack.pop(); continue; }
    // Not indexed: enum values (`@[match_pattern] abbrev RequestMode.noCors`, written `.noCors`) and checked
    // downcasts (`cast?`), which come with their type.
    if (/^@\[match_pattern\]/.test(line)) continue;
    m = /^(?:@\[[^\]]*\]\s*)*(?:(?:protected|noncomputable|partial|unsafe) )*(?:def|structure|inductive|abbrev|opaque|class) ([^\s:({[]+)/.exec(line);
    if (m && !/^private /.test(line) && !m[1].endsWith('.cast?')) names.push([...stack, m[1]].join('.'));
  }
  return names;
}

/** Every Lean source under `directory` (library/Lasm: every module of Lasm's library), sorted. */
export const libraryLeanFiles = directory => readdirSync(directory, { recursive: true }).map(String).filter(name => name.endsWith('.lean')).sort().map(name => join(directory, name));

/** The modules a Lean source imports. */
export const importedModules = text => [...text.matchAll(/^import (\S+)\s*$/gm)].map(m => m[1]);
/** The top-level namespaces a Lean source opens (`namespace Lasm.UI`), the roots a program `open`s. */
export const openedNamespaces = text => [...text.matchAll(/^namespace (Lasm(?:\.\S+)?)\s*$/gm)].map(m => m[1]);

/**
 * The module a program imports for `module`'s declarations: a per-spec types module (`Lasm.JS.Web.Types.Fetch`)
 * comes with its spec's module; a module that a re-export module above it imports (`Lasm.UI.Html` from `Lasm.UI`,
 * `Lasm.JS.Core` from `Lasm.JS`) comes with that one. `sources` maps module names to their Lean text.
 */
export function importingModule(module, sources) {
  const spec = module.replace(/^Lasm\.JS\.Web\.Types\./, 'Lasm.JS.Web.');
  if (spec !== module && sources.has(spec)) return spec;
  const parts = module.split('.');
  for (let n = 2; n < parts.length; n++) {
    const above = parts.slice(0, n).join('.'), text = sources.get(above);
    if (text !== undefined && declaredNames(text).length === 0 && importedModules(text).includes(module)) return above;
  }
  return module;
}

/**
 * The index: for each module a program imports (importingModule), its public declarations without indexPrefix
 * (`fetch`, `Response.new`; `UI.div`), grouped by owner; names in an `Internal` namespace are left out. `roots` are
 * the namespaces the modules open, under which a program writes the names. `sources` maps module names to their
 * Lean text: every module of Lasm's library.
 */
export function buildImportIndex(sources, { generatedBy } = {}) {
  const modules = {}, roots = new Set();
  for (const [module, text] of [...sources].sort(([a], [b]) => a < b ? -1 : a > b ? 1 : 0)) {
    const target = importingModule(module, sources), prefix = indexPrefix(target);
    const own = declaredNames(text).filter(n => n.startsWith(prefix) && !n.split('.').includes('Internal')).map(n => n.slice(prefix.length));
    if (!own.length) continue;
    modules[target] = [...new Set([...(modules[target] ?? []), ...own])].sort();
    for (const root of openedNamespaces(text)) roots.add(root);
  }
  // Grouped by owner (`Response`: `new`, `text`, …; `""` for top-level names), which keeps the file small.
  const grouped = {};
  for (const [module, own] of Object.entries(modules)) {
    const g = {};
    for (const n of own) { const i = n.lastIndexOf('.'); (g[i < 0 ? '' : n.slice(0, i)] ??= []).push(n.slice(i + 1)); }
    grouped[module] = g;
  }
  return { schema: 2, ...(generatedBy ? { generatedBy } : {}), roots: [...roots].sort(), modules: grouped };
}

// ---------- reading it (the CLI) ----------

let loaded;
/** Uses `index` (the index's data) for every later hint instead of the shipped file: tests give their own. */
export function useImportIndex(index) { loaded = loadImportIndex(index); }
/** Full declaration name → the modules that define it; `.roots`: the namespaces a program writes names under. */
export function loadImportIndex(index) {
  if (!index && loaded) return loaded;
  let data = index;
  if (!data) { try { data = JSON.parse(readFileSync(indexFile, 'utf8')); } catch { data = { modules: {} }; } }
  const names = new Map();
  // Lasm.JS's core first, then each generated namespace (one hint per runtime, in this order), then the others,
  // and last `Lasm` itself (`Fastly.HttpReq.new` after `open Lasm`).
  const first = ['Lasm.JS', ...indexHosts.map(h => `Lasm.JS.${h}`)];
  names.roots = [...first, ...(data.roots ?? []).filter(r => !first.includes(r) && r !== 'Lasm'), 'Lasm'];
  for (const [module, groups] of Object.entries(data.modules ?? {})) {
    const prefix = indexPrefix(module);
    for (const [owner, own] of Object.entries(groups))
      for (const n of own) { const full = prefix + (owner ? owner + '.' : '') + n; names.set(full, [...(names.get(full) ?? []), module]); }
  }
  if (!index) loaded = names;
  return names;
}

/** The names a Lean error message says are unknown (Lean 4.35's wordings). */
export function unknownNames(message) {
  const text = String(message);
  if (!/unknown (?:identifier|constant)|does not contain|unknown namespace/i.test(text)) return [];
  return [...new Set([...text.matchAll(/[`'‘]([^`'’\s]+)[`'’]/g)].map(m => m[1].replace(/^@/, '')))];
}

/** The modules defining `name` as written: a full name itself; otherwise under each namespace a program opens
 * (names.roots), every match (`serve` is Lasm.JS.Node's, Deno's and Bun's). */
export function modulesDefining(name, names = loadImportIndex()) {
  if (names.has(name)) return names.get(name);
  return [...new Set((names.roots ?? []).map(root => `${root}.${name}`).flatMap(full => names.get(full) ?? []))];
}

/** The hint lines for one Lean error message: the import to add, or the choice when several modules define it. */
export function missingImportHints(message, names = loadImportIndex()) {
  const lines = [];
  for (const written of unknownNames(message)) {
    const modules = modulesDefining(written, names);
    // As a program writes it: Lean's full name without the generated namespace (`WritableStream.getWriter`).
    const name = written.replace(new RegExp(`^Lasm\\.JS\\.(?:${indexHosts.join('|')})\\.`), '');
    if (modules.length === 1) lines.push(`hint: ${name} is defined in ${modules[0]}; add: import ${modules[0]}`);
    else if (modules.length > 1) lines.push(`hint: ${name} is defined in several modules; add the one for your runtime:`,
      ...modules.map(m => `  import ${m}  (${moduleHost(m) ?? m.split('.')[1]})`));
  }
  return lines;
}
