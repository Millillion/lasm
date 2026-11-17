// `lasm build --target X` refuses a program that calls a Lasm.JS.Web API that X does not provide
// (docs/JS_BINDINGS.md, "Availability per target"; docs/api/decisions/0.3.md 0.3-10). Each generated binding is
// `@[macro_inline]` and passes its full name to `Internal.api`, so the program's generated C holds that name as
// a string literal at each call site; library/Lasm/JS/Web/availability.json (scripts/bindings/generate-web.mjs,
// from compatibility data) says where each is missing.
import { readFileSync } from 'node:fs';

const tableFile = new URL('../library/Lasm/JS/Web/availability.json', import.meta.url);
let table;
const loadTable = () => (table ??= JSON.parse(readFileSync(tableFile, 'utf8')));

/** The runtime whose availability a target needs; function platforms (lambda, vercel, …) run on Node. */
export function targetRuntime(target) {
  return { browser: 'browser', node: 'node', deno: 'deno', 'deno-deploy': 'deno', 'supabase-edge': 'deno', bun: 'bun',
    workers: 'workerd', 'vercel-edge': 'edge-light', 'netlify-edge': 'netlify' }[target ?? 'node'] ?? 'node';
}

/** The Lasm.JS.Web bindings (full Lean names) that these generated C texts call, unavailable somewhere, and the
 * availability guards (`Lasm.JS.Web.Navigator.gpu?`, 0.3-11) they call. */
export function referencedWebApis(texts, apis = loadTable().apis) {
  const found = new Set();
  for (const text of texts) for (const [, name] of text.matchAll(/"(Lasm\.JS\.Web\.[^"\\]+)"/g))
    if (apis[name] || name.endsWith('?') && apis[name.slice(0, -1)]) found.add(name);
  return [...found].sort();
}

/** The interface of a binding's full name (`Lasm.JS.Web.GPU.requestAdapter` → `GPU`); none for a global (`fetch`). */
const ownerOf = lean => { const parts = lean.split('.'); return parts.length > 4 ? parts[3] : undefined; };

/**
 * The interfaces a program gets only through its availability guards (0.3-11): the result of each guarded binding
 * (`Navigator.gpu?` gives a GPU), and what their unavailable members return in turn (GPUAdapter, GPUDevice, …).
 * Their members need no guard of their own: without the API, the program never has such a value.
 */
export function guardedInterfaces(names, runtime, { apis, interfaces } = loadTable()) {
  // Only interfaces the runtime lacks: a value of any other one the program may have from an unguarded API.
  const lacking = t => (interfaces[t] ?? '').split(' ').includes(runtime);
  const types = new Set(names.filter(n => n.endsWith('?')).map(n => apis[n.slice(0, -1)]?.[2]).filter(t => t && lacking(t)));
  const byOwner = new Map();
  for (const [lean, entry] of Object.entries(apis)) {
    const owner = ownerOf(lean);
    if (owner && entry[2]) byOwner.set(owner, [...(byOwner.get(owner) ?? []), entry[2]]);
  }
  for (const t of types) for (const next of byOwner.get(t) ?? []) if (lacking(next)) types.add(next);
  return types;
}

/** One message per referenced API that `target` lacks, naming the API, the target and where it is available. A
 * guard is never refused, nor a member of an interface only a guard gives (0.3-11). */
export function webAvailabilityErrors(names, target, { apis, runtimes, interfaces = {} } = loadTable()) {
  const runtime = targetRuntime(target);
  const guarded = guardedInterfaces(names, runtime, { apis, interfaces });
  const errors = [];
  for (const lean of names) {
    if (lean.endsWith('?') || guarded.has(ownerOf(lean))) continue;
    const [path, missing] = apis[lean];
    const lacking = missing.split(' ');
    if (!lacking.includes(runtime)) continue;
    const where = Object.keys(runtimes).filter(r => !lacking.includes(r)).map(r => runtimes[r]);
    errors.push(`${lean} (${path}) is not available on --target ${target ?? 'node'} (${runtimes[runtime]}).`
      + (where.length ? ` It is available on ${where.join('; ')}.` : ' The compatibility data lists it on none of Lasm\'s targets.'));
  }
  return errors;
}

/** Throws when the program calls web APIs the target lacks. */
export function assertWebAvailable(texts, target) {
  const errors = webAvailabilityErrors(referencedWebApis(texts), target);
  if (!errors.length) return;
  const error = new Error(`This program uses web APIs that --target ${target ?? 'node'} does not provide:\n  ${errors.join('\n  ')}\n`
    + 'The availability comes from compatibility data (docs/JS_BINDINGS.md, "Availability per target"). Use another target, '
    + 'an API the target has, or the API\'s availability guard, which gives none where the platform lacks it '
    + '(`if let some gpu ← (← navigator).gpu? then … else …`).');
  error.code = 'LASM_WEB_UNAVAILABLE';
  throw error;
}
