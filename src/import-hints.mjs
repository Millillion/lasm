// Missing-import hints (docs/api/decisions/0.3.md, 0.3-20). Lasm's generated bindings are per module, with no
// catch-all import (Jordan, 2026-11-16), so a program that uses `fetch` without `import Lasm.JS.Web.Fetch` gets
// Lean's "Unknown identifier". The generator (scripts/bindings/generate-web.mjs) writes an index of every
// declaration of Lasm.JS.Web, Node, Deno, Bun and Cloudflare and the module that defines it
// (library/Lasm/JS/import-index.json); a build or dev error on an unknown name that the index knows gets the
// exact import to add.
import { readFileSync } from 'node:fs';

const indexFile = new URL('../library/Lasm/JS/import-index.json', import.meta.url);
/** The generated namespaces, as the index groups them: a module of Lasm.JS.<Host>. */
export const indexHosts = ['Web', 'Node', 'Deno', 'Bun', 'Cloudflare'];

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

/**
 * The index: for each module (`Lasm.JS.Web.Fetch`), its declarations without the `Lasm.JS.<Host>.` prefix
 * (`fetch`, `Response.new`), grouped by owner. `sources` maps module names to their Lean text. A per-spec types module
 * (`Lasm.JS.Web.Types.Fetch`) is indexed under its spec's module, which programs import.
 */
export function buildImportIndex(sources, { generatedBy } = {}) {
  const modules = {};
  for (const [module, text] of [...sources].sort(([a], [b]) => a < b ? -1 : a > b ? 1 : 0)) {
    const host = module.split('.')[2];
    if (!indexHosts.includes(host)) continue;
    const spec = module.replace(/^Lasm\.JS\.Web\.Types\./, 'Lasm.JS.Web.');
    const target = sources.has(spec) ? spec : module;
    const prefix = `Lasm.JS.${host}.`;
    const own = declaredNames(text).filter(n => n.startsWith(prefix)).map(n => n.slice(prefix.length));
    if (own.length) modules[target] = [...new Set([...(modules[target] ?? []), ...own])].sort();
  }
  // Grouped by owner (`Response`: `new`, `text`, …; `""` for top-level names), which keeps the file small.
  const grouped = {};
  for (const [module, own] of Object.entries(modules)) {
    const g = {};
    for (const n of own) { const i = n.lastIndexOf('.'); (g[i < 0 ? '' : n.slice(0, i)] ??= []).push(n.slice(i + 1)); }
    grouped[module] = g;
  }
  return { schema: 1, ...(generatedBy ? { generatedBy } : {}), modules: grouped };
}

// ---------- reading it (the CLI) ----------

let loaded;
/** Uses `index` (the index's data) for every later hint instead of the shipped file: tests give their own. */
export function useImportIndex(index) { loaded = loadImportIndex(index); }
/** Full declaration name → the modules that define it. */
export function loadImportIndex(index) {
  if (!index && loaded) return loaded;
  let data = index;
  if (!data) { try { data = JSON.parse(readFileSync(indexFile, 'utf8')); } catch { data = { modules: {} }; } }
  const names = new Map();
  for (const [module, groups] of Object.entries(data.modules ?? {})) {
    const prefix = `Lasm.JS.${module.split('.')[2]}.`;
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

/** The modules defining `name` as written: a full name itself; otherwise under `Lasm.JS.` and under each generated
 * namespace, every match (`serve` is Lasm.JS.Node's, Deno's and Bun's). */
export function modulesDefining(name, names = loadImportIndex()) {
  if (names.has(name)) return names.get(name);
  return [...new Set([`Lasm.JS.${name}`, ...indexHosts.map(h => `Lasm.JS.${h}.${name}`)].flatMap(full => names.get(full) ?? []))];
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
      ...modules.map(m => `  import ${m}  (${m.split('.')[2]})`));
  }
  return lines;
}
