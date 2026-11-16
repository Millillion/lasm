// The reviewed override table of the generated bindings (scripts/bindings/overrides.json),
// as every binding generator reads it. The rules it refines are docs/BINDING_RULES.md:
//   - names: a generated function's Lean name (an overload's, rule A9) replaced by a reviewed one;
//   - aliases: an `abbrev` beside a generated callback type (rule A10);
//   - integers: names whose TypeScript or documented `number` is an integer (rule A11).
// A generator asks for the entries of the namespaces it generates (`forNamespaces`), marks
// each one it applies, and calls `unused()` at the end: a names or aliases entry that no
// generated declaration matched is an error, so the table never drifts from the declarations.
import { readFileSync } from 'node:fs';

const file = new URL('./overrides.json', import.meta.url);
const integerTypes = ['Nat', 'Int'];
const decisionId = /^A\d+(\.\d+)?$|^0\.\d-\d+$/;

/** Validates the table's shape; returns a list of problems (empty when it is well formed). */
export function validate(table) {
  const problems = [];
  const seen = new Set();
  for (const kind of ['names', 'aliases', 'integers']) {
    if (!Array.isArray(table[kind])) { problems.push(`${kind} is not an array`); continue; }
    for (const e of table[kind]) {
      const key = kind === 'names' ? e.binding : kind === 'aliases' ? e.alias : e.name;
      const where = `${kind} ${key ?? JSON.stringify(e)}`;
      if (typeof key !== 'string' || !key) problems.push(`${where}: no key`);
      if (seen.has(kind + ':' + key)) problems.push(`${where}: listed twice`);
      seen.add(kind + ':' + key);
      if (typeof e.decision !== 'string' || !decisionId.test(e.decision)) problems.push(`${where}: decision must be an API_DECISIONS id (A9.1, 0.3-2)`);
      if (typeof e.why !== 'string' || !e.why) problems.push(`${where}: no why`);
      if (kind === 'names' && !/^[a-z][A-Za-z0-9_]*[?!]?$/.test(e.name ?? '')) problems.push(`${where}: name must be a lowerCamel Lean identifier`);
      if (kind === 'names' && e.binding.split('.').at(-1) === e.name) problems.push(`${where}: renames to itself`);
      if (kind === 'aliases' && !/^[A-Z][A-Za-z0-9_]*$/.test(e.alias?.split('.').at(-1) ?? '')) problems.push(`${where}: alias must end in an UpperCamel name`);
      if (kind === 'aliases' && (typeof e.of !== 'string' || e.of.split('.').slice(0, -1).join('.') !== e.alias.split('.').slice(0, -1).join('.')))
        problems.push(`${where}: of must name a type in the alias's own namespace`);
      if (kind === 'integers' && !integerTypes.includes(e.type)) problems.push(`${where}: type must be ${integerTypes.join(' or ')}`);
    }
  }
  return problems;
}

/** The table, validated. */
export function load(text = readFileSync(file, 'utf8')) {
  const table = JSON.parse(text);
  const problems = validate(table);
  if (problems.length) throw new Error(`scripts/bindings/overrides.json: ${problems.join('; ')}`);
  return table;
}

/** The entries for the Lean namespaces a generator generates (`['Lasm.JS.Web', 'Lasm.JS.Node']`), with usage tracking. */
export function forNamespaces(namespaces, table = load()) {
  const mine = key => namespaces.some(ns => key.startsWith(ns + '.'));
  const names = new Map(table.names.filter(e => mine(e.binding)).map(e => [e.binding, e]));
  const aliases = table.aliases.filter(e => mine(e.alias));
  const integers = new Map(table.integers.map(e => [e.name, e]));
  const used = new Set();
  return {
    /** The reviewed name of the generated function `binding` (its full Lean name), or its own. */
    name(binding) {
      const e = names.get(binding);
      if (!e) return binding.split('.').at(-1);
      used.add('names:' + binding);
      return e.name;
    },
    /** The aliases of the generated type `type` (its full Lean name). */
    aliasesOf(type) {
      const found = aliases.filter(e => e.of === type);
      for (const e of found) used.add('aliases:' + e.alias);
      return found;
    },
    /** The integer type (Nat or Int) of a `number` named `name` in `owner` (an IDL definition name), or null. */
    integer(owner, name) { return (integers.get(`${owner}.${name}`) ?? integers.get(name))?.type ?? null; },
    /** The names and aliases entries for these namespaces that nothing matched. */
    unused() {
      return [...[...names.keys()].filter(k => !used.has('names:' + k)).map(k => `names ${k}`),
        ...aliases.filter(e => !used.has('aliases:' + e.alias)).map(e => `aliases ${e.alias}`)];
    },
  };
}
