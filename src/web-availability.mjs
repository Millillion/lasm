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

/** The Lasm.JS.Web bindings (full Lean names) that these generated C texts call, unavailable somewhere. */
export function referencedWebApis(texts, apis = loadTable().apis) {
  const found = new Set();
  for (const text of texts) for (const [, name] of text.matchAll(/"(Lasm\.JS\.Web\.[^"\\]+)"/g)) if (apis[name]) found.add(name);
  return [...found].sort();
}

/** One message per referenced API that `target` lacks, naming the API, the target and where it is available. */
export function webAvailabilityErrors(names, target, { apis, runtimes } = loadTable()) {
  const runtime = targetRuntime(target);
  const errors = [];
  for (const lean of names) {
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
    + 'The availability comes from compatibility data (docs/JS_BINDINGS.md, "Availability per target"); use another target, or an API the target has.');
  error.code = 'LASM_WEB_UNAVAILABLE';
  throw error;
}
