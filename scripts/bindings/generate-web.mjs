// Generates Lasm.JS.Web (library/Lasm/JS/Web/*.lean, library/Lasm/JS/Web.lean):
// spec-faithful Lean bindings of the WinterTC Minimum Common Web API, from the
// WebIDL of the pinned @webref/idl (parsed by webidl2). The mapping rules are
// in docs/JS_BINDINGS.md ("Standard bindings"); the interface list is
// scripts/bindings/web-tier1.mjs.
//
//   node scripts/bindings/generate-web.mjs          # write the modules
//   node scripts/bindings/generate-web.mjs --check  # exit 1 if a committed module differs
//
// Development dependencies only (@webref/idl, webidl2, pinned in package.json):
// the generated .lean files are committed and shipped; users never run this.
import { createRequire } from 'node:module';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as tier from './web-tier1.mjs';
import * as browser from './web-browser.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const require = createRequire(import.meta.url);
const webidl2 = require('webidl2');
const idlDir = dirname(require.resolve('@webref/idl/package.json'));
const webrefVersion = JSON.parse(readFileSync(join(idlDir, 'package.json'), 'utf8')).version;
const packageVersion = (entry, name) => {
  for (let dir = dirname(entry); dir !== dirname(dir); dir = dirname(dir)) {
    const file = join(dir, 'package.json');
    if (existsSync(file)) { const p = JSON.parse(readFileSync(file, 'utf8')); if (p.name === name) return p.version; }
  }
  throw new Error(`no package.json for ${name}`);
};
const webidl2Version = packageVersion(require.resolve('webidl2'), 'webidl2');
const check = process.argv.includes('--check');
const outDir = join(root, 'library', 'Lasm', 'JS', 'Web');
const NS = 'Lasm.JS.Web';

const fail = message => { throw new Error(`generate-web: ${message}`); };

// ---------- reading the IDL ----------

const specTitles = {};
const asts = [];
// Tier 1's specs, then the browser tier's (scripts/bindings/web-browser.mjs).
const fullSpecs = [...tier.specs, ...browser.specs];
for (const spec of fullSpecs) {
  const text = readFileSync(join(idlDir, spec + '.idl'), 'utf8');
  const source = /^\/\/ Source: (.*)$/m.exec(text);
  specTitles[spec] = source ? source[1] : spec;
  for (const d of webidl2.parse(text)) asts.push({ spec, d: JSON.parse(JSON.stringify(d)) });
}
// Every other spec of webref is read for the enums, dictionaries, typedefs and
// callbacks it defines (not its interfaces or partials), so that a type a tier-1
// member names is generated wherever it is defined: ReferrerPolicy (Referrer
// Policy), and Web Crypto's KeyFormat and KeyUsage, which webref moves to the
// Modern Algorithms spec that extends them.
/** Interfaces of the specs read only for their types (WebGLRenderingContext): known to be interfaces, not generated. */
const otherInterfaces = new Set();
const typeSpecs = readdirSync(idlDir).filter(f => f.endsWith('.idl')).map(f => f.slice(0, -4)).filter(s => !fullSpecs.includes(s)).sort();
for (const spec of typeSpecs) {
  const text = readFileSync(join(idlDir, spec + '.idl'), 'utf8');
  const source = /^\/\/ Source: (.*)$/m.exec(text);
  specTitles[spec] = source ? source[1] : spec;
  for (const d of webidl2.parse(text)) {
    if (!d.partial && ['enum', 'dictionary', 'typedef', 'callback', 'callback interface'].includes(d.type)) asts.push({ spec, d: JSON.parse(JSON.stringify(d)) });
    if (!d.partial && d.type === 'interface') otherInterfaces.add(d.name);
  }
}
for (const d of webidl2.parse(tier.syntheticIdl)) asts.push({ spec: 'synthetic', d: JSON.parse(JSON.stringify(d)) });

const extAttr = (node, name) => node.extAttrs?.find(a => a.name === name);
const extValue = a => !a?.rhs ? undefined : Array.isArray(a.rhs.value) ? a.rhs.value.map(v => v.value) : a.rhs.value;

/** Merged definitions by IDL name. */
const defs = new Map();
const includes = new Map();
for (const { spec, d } of asts) {
  if (d.type === 'includes') { if (!includes.has(d.target)) includes.set(d.target, []); includes.get(d.target).push(d.includes); continue; }
  if (d.type === 'eof') continue;
  const key = d.name;
  const existing = defs.get(key);
  const members = (d.members ?? []).map(m => ({ ...m, spec }));
  if (!existing) defs.set(key, { type: d.type, name: d.name, inheritance: d.inheritance ?? null, extAttrs: d.extAttrs ?? [],
    members, spec: d.partial ? null : spec, idlType: d.idlType, arguments: d.arguments, values: d.values, partialOnly: !!d.partial, ast: d });
  else {
    if (existing.type !== d.type) fail(`${key} is both ${existing.type} and ${d.type}`);
    existing.members.push(...members);
    if (!d.partial) Object.assign(existing, { inheritance: d.inheritance ?? null, extAttrs: d.extAttrs ?? [], spec, partialOnly: false, ast: d,
      idlType: d.idlType, arguments: d.arguments, values: d.values });
  }
}
const def = name => defs.get(name);

// ---------- names ----------

const leanKeywords = new Set(['at', 'by', 'do', 'else', 'end', 'fun', 'have', 'if', 'in', 'let', 'match', 'mut', 'then', 'with', 'where',
  'from', 'show', 'this', 'return', 'for', 'unless', 'try', 'catch', 'finally', 'break', 'continue', 'import', 'open', 'namespace',
  'section', 'def', 'structure', 'instance', 'class', 'deriving', 'forall', 'Type', 'Prop', 'Sort', 'universe', 'variable', 'macro',
  'syntax', 'local', 'private', 'protected', 'public', 'partial', 'unsafe', 'noncomputable', 'theorem', 'example', 'abbrev',
  'inductive', 'extends', 'notation', 'prefix', 'infix', 'infixl', 'infixr', 'postfix', 'mutual', 'attribute', 'export', 'nomatch',
  'nofun', 'calc', 'suffices', 'obtain', 'module', 'meta', 'opaque', 'axiom', 'set_option', 'termination_by', 'decreasing_by',
  // Every identifier-like token of Lean 4.35 with Lean and Std imported (Lean.Parser's token table): `repeat`, `matches`, `until`.
  'Prop', 'Sort', 'StateRefT', 'Type', 'abbrev', 'add_decl_doc', 'assert_not_exists', 'assert_not_imported', 'at', 'attribute',
  'axiom', 'bif', 'binder_predicate', 'break', 'builtin_cbv_simproc', 'builtin_cbv_simproc_decl', 'builtin_dsimproc',
  'builtin_dsimproc_decl', 'builtin_grind_propagator', 'builtin_initialize', 'builtin_simproc', 'builtin_simproc_decl', 'by',
  'by_elab', 'calc', 'catch', 'cbv_eval', 'cbv_simproc', 'cbv_simproc_decl', 'class', 'coinductive', 'coinductive_fixpoint',
  'continue', 'dbg_trace', 'declare_bitwise_int_theorems', 'declare_bitwise_uint_theorems', 'declare_command_config_elab',
  'declare_command_config_elab_legacy', 'declare_config_elab', 'declare_config_elab_legacy', 'declare_core_config_elab',
  'declare_eval_bin', 'declare_eval_bin_bitwise', 'declare_eval_bin_bool_pred', 'declare_int_theorems', 'declare_simp_like_tactic',
  'declare_sint_simprocs', 'declare_syntax_cat', 'declare_term_config_elab', 'declare_uint_simprocs', 'declare_uint_theorems',
  'decreasing_by', 'def', 'def_eval_config_item', 'deprecated_module', 'deprecated_syntax', 'deriving', 'do', 'docs_to_verso',
  'dsimproc', 'dsimproc_decl', 'elab', 'elab_rules', 'elab_stx_quot', 'else', 'end', 'eval_prec', 'eval_prio', 'example', 'exists',
  'export', 'extends', 'finally', 'for', 'forall', 'from', 'fun', 'generalizing', 'grind_annotated', 'grind_pattern',
  'grind_propagator', 'have', 'haveI', 'hiding', 'idbg', 'if', 'import', 'in', 'include', 'include_str', 'inductive',
  'inductive_fixpoint', 'inferInstanceAs', 'infix', 'infixl', 'infixr', 'init_grind_norm', 'init_quot', 'initialize', 'instance',
  'leading_parser', 'let', 'letI', 'let_delayed', 'let_expr', 'let_fun', 'let_tmp', 'local', 'logNamedError', 'logNamedErrorAt',
  'logNamedWarning', 'logNamedWarningAt', 'macro', 'macro_rules', 'match', 'match_expr', 'matches', 'max_prec', 'meta', 'mod_cast',
  'monotonicity_by', 'mut', 'mutual', 'namespace', 'nat_lit', 'no_index', 'nofun', 'nomatch', 'noncomputable', 'nonrec',
  'norm_cast_add_elim', 'notation', 'omit', 'opaque', 'open', 'partial', 'partial_fixpoint', 'postfix', 'prefix', 'private',
  'protected', 'public', 'recall', 'recommended_spelling', 'register_builtin_option', 'register_error_explanation',
  'register_grind_attr', 'register_label_attr', 'register_linter_set', 'register_option', 'register_parser_alias',
  'register_simp_attr', 'register_sym_dsimp', 'register_sym_simp', 'register_sym_simp_attr', 'register_tactic_tag', 'renaming',
  'repeat', 'reprove', 'return', 'run_cmd', 'run_elab', 'run_meta', 'scoped', 'seal', 'section', 'set_library_suggestions',
  'set_option', 'show', 'show_panel_widgets', 'show_term', 'show_term_elab', 'simproc', 'simproc_decl', 'sorry', 'structure',
  'suffices', 'syntax', 'tactic_alt', 'tactic_extension', 'tactic_name', 'tactic_tag', 'termination_by', 'test_extern', 'then',
  'theorem', 'throwError', 'throwErrorAt', 'throwNamedError', 'throwNamedErrorAt', 'trailing_parser', 'try', 'unif_hint',
  'universe', 'unless', 'unlock_limits', 'unsafe', 'unseal', 'until', 'using', 'variable', 'where', 'while', 'with',
  'with_annotate_term', 'with_weak_namespace', 'without_expected_type',
  'fun', 'λ', 'Σ', 'Π', 'exists', 'sorry', 'omit', 'include', 'initialize', 'builtin_initialize', 'elab', 'mod', 'at']);
const id = name => leanKeywords.has(name) || !/^[A-Za-z_][A-Za-z0-9_']*$/.test(name) ? `«${name}»` : name;
const capital = s => s ? s[0].toUpperCase() + s.slice(1) : s;
/** lowerCamel of an IDL name, lowering a leading run of capitals: DOMString → domString, URLSearchParams → urlSearchParams. */
function lowerName(name) {
  const words = name.split(/[\s-]+/).filter(Boolean);
  const joined = words.map((w, i) => i ? capital(w) : w).join('');
  const m = /^([A-Z]+)(?=[A-Z][a-z]|$|[0-9])/.exec(joined);
  if (m && m[1].length > 1) return m[1].toLowerCase() + joined.slice(m[1].length);
  return joined[0].toLowerCase() + joined.slice(1);
}
/** Constructor name of an enum value: "no-cors" → noCors, "" → empty. */
function enumCtor(value) {
  if (value === '') return 'empty';
  let s = value.replace(/[^A-Za-z0-9]+(.)?/g, (_, c) => c ? c.toUpperCase() : '');
  if (/^[0-9]/.test(s)) s = 'v' + s;
  s = s[0].toLowerCase() + s.slice(1);
  return s;
}
const namespaceOf = d => extValue(extAttr(d, 'LegacyNamespace'));
/** The Lean name (under Lasm.JS.Web) of an IDL definition. */
function leanTypeName(name) {
  const d = def(name);
  const base = tier.renames[name] ?? name;
  const ns = d && namespaceOf(d);
  return ns ? `${ns}.${base}` : base;
}
/** The JavaScript path (from globalThis) of an interface. */
const jsPath = name => { const d = def(name); const ns = d && namespaceOf(d); return ns ? `${ns}.${name}` : name; };

// ---------- exposure ----------

const exposedToWorkers = node => {
  const e = extValue(extAttr(node, 'Exposed'));
  if (e === undefined) return true;
  const list = Array.isArray(e) ? e : [e];
  return list.some(x => x === '*' || /Worker/.test(x));
};

// ---------- selection ----------

const exposedToWindow = node => {
  const e = extValue(extAttr(node, 'Exposed'));
  if (e === undefined) return true;
  const list = Array.isArray(e) ? e : [e];
  return list.some(x => x === '*' || x === 'Window');
};

// ---------- tiers ----------
// Tier 1 (web-tier1.mjs, the modules of Lasm.JS.Web) and the browser tier
// (web-browser.mjs, the modules Lasm.JS.Web.Browser adds). The tier being
// generated (ctxTier) decides which members an interface has (exposed to
// workers, or to Window) and which selected interfaces a type may name: tier 1
// sees only tier 1's, so its output does not depend on the browser tier.
// Supporting types are resolved in the tier of the module that owns them.
let ctxTier = 1;
const inTier = (t, f) => { const saved = ctxTier; ctxTier = t; try { return f(); } finally { ctxTier = saved; } };
const allModules = [...tier.modules.map(m => ({ ...m, tier: 1 })), ...browser.modules.map(m => ({ ...m, tier: 2 }))];
const moduleTier = new Map(allModules.map(m => [m.name, m.tier]));
if (moduleTier.size !== allModules.length) fail('two modules share a name');

const selectedInterfaces = new Map(); // IDL name → module
const moduleOfType = new Map();       // IDL name or union key → module name
const configIdl = n => n.startsWith('WebAssembly.') ? n.slice('WebAssembly.'.length) : n;
for (const m of allModules) for (const n of m.interfaces ?? []) {
  const name = configIdl(n);
  const d = def(name);
  if (!d || d.type !== 'interface') fail(`interface ${n} not found`);
  if (selectedInterfaces.has(name)) fail(`interface ${n} is selected twice`);
  selectedInterfaces.set(name, m.name);
  moduleOfType.set(name, m.name);
}
for (const m of allModules) for (const n of m.namespaces ?? []) if (!def(n) || def(n).type !== 'namespace') fail(`namespace ${n} not found`);
/** The tier of a supporting type's (or interface's) owner, or the current one before it has an owner. */
const tierOfKey = key => moduleOfType.has(key) ? moduleTier.get(moduleOfType.get(key)) : ctxTier;
/** Whether an interface is selected and visible from the current tier. */
const visibleInterface = n => selectedInterfaces.has(n) && moduleTier.get(selectedInterfaces.get(n)) <= ctxTier;
// In the browser tier an interface's parent must be generated too (the Lean structure extends it).
for (const m of browser.modules) for (const n of m.interfaces) {
  const parent = def(n).inheritance;
  if (parent && !selectedInterfaces.has(parent)) fail(`${n} extends ${parent}, which is not selected`);
}
/** Whether a member is an event handler IDL attribute (`onclick`), not generated in the browser tier. */
const isEventHandler = m => m.type === 'attribute' && !m.idlType.union && !m.idlType.generic && browser.eventHandlerTypes.includes(m.idlType.idlType);

/** Members of an interface: its own (and partials'), then its mixins'. */
function membersOf(name) {
  const d = def(name);
  let members = [...d.members];
  const excluded = ctxTier >= 2 ? browser.excludeMixins[name] ?? [] : [];
  for (const mixin of includes.get(name) ?? []) {
    if (excluded.includes(mixin)) continue;
    const md = def(mixin);
    if (!md) fail(`mixin ${mixin} not found`);
    members.push(...md.members);
  }
  members = members.filter(ctxTier >= 2 ? exposedToWindow : exposedToWorkers);
  if (ctxTier >= 2) members = members.filter(m => !isEventHandler(m));
  const only = tier.memberFilter[name];
  if (only) members = members.filter(m => only.includes(m.name));
  return members;
}

// ---------- types ----------
// A resolved type: { k, ... }
//   prim (lean: String|Bool|Int|Nat|Float|Data|Unit|Value|ByteArray), arraybuffer, nullable(inner), seq(inner),
//   record(inner), promise(inner), iface(name), dict(name), enum(name), callback(name), union(u), unknown(idl)

const integerTypes = { 'byte': 'Int', 'octet': 'Nat', 'short': 'Int', 'unsigned short': 'Nat', 'long': 'Int', 'unsigned long': 'Nat',
  'long long': 'Int', 'unsigned long long': 'Nat', 'bigint': 'Int' };
const floatTypes = ['float', 'unrestricted float', 'double', 'unrestricted double'];
const viewTypes = ['ArrayBufferView', 'BufferSource', 'AllowSharedBufferSource', 'Int8Array', 'Int16Array', 'Int32Array', 'Uint8Array',
  'Uint16Array', 'Uint32Array', 'Uint8ClampedArray', 'BigInt64Array', 'BigUint64Array', 'Float16Array', 'Float32Array', 'Float64Array', 'DataView'];

const unions = new Map(); // key → { key, name, alts: [{ ctor, t }], typedef }

function idlText(t) {
  if (typeof t === 'string') return t;
  let s;
  if (t.union) s = '(' + t.idlType.map(idlText).join(' or ') + ')';
  else if (t.generic) s = `${t.generic}<${t.idlType.map(idlText).join(', ')}>`;
  else s = idlText(t.idlType);
  return s + (t.nullable ? '?' : '');
}

function resolve(t) {
  let r = resolveInner(t);
  if (t.nullable && r.k !== 'nullable') r = { k: 'nullable', inner: r };
  return r;
}
function resolveInner(t) {
  if (t.union) return makeUnion(t.idlType, null);
  if (t.generic) {
    const args = t.idlType;
    switch (t.generic) {
    case 'sequence': case 'FrozenArray': case 'ObservableArray': return { k: 'seq', inner: resolve(args[0]) };
    case 'record': return { k: 'record', inner: resolve(args[1]) };
    case 'Promise': return { k: 'promise', inner: resolve(args[0]) };
    case 'async_sequence': return { k: 'prim', lean: 'Data' };
    default: fail(`unknown generic ${t.generic}`);
    }
  }
  return resolveName(t.idlType);
}
function resolveName(n) {
  if (ctxTier >= 2) n = browser.aliases[n] ?? n;
  // CSSOMString is DOMString or USVString, as the implementation chooses (CSSOM).
  if (['DOMString', 'USVString', 'ByteString', 'CSSOMString'].includes(n)) return { k: 'prim', lean: 'String', idl: n };
  if (n === 'boolean') return { k: 'prim', lean: 'Bool', idl: n };
  if (integerTypes[n]) return { k: 'prim', lean: integerTypes[n], idl: n };
  if (floatTypes.includes(n)) return { k: 'prim', lean: 'Float', idl: n };
  if (n === 'any' || n === 'object') return { k: 'prim', lean: 'Data', idl: n };
  if (n === 'undefined') return { k: 'prim', lean: 'Unit', idl: n };
  if (n === 'symbol') return { k: 'prim', lean: 'Value', idl: n };
  if (viewTypes.includes(n)) return { k: 'prim', lean: 'ByteArray', idl: n };
  if (n === 'ArrayBuffer' || n === 'SharedArrayBuffer') return { k: 'arraybuffer', idl: n };
  const d = def(n);
  if (!d) return { k: 'unknown', idl: n };
  switch (d.type) {
  case 'interface':
    return visibleInterface(n) ? { k: 'iface', name: n } : { k: 'unknown', idl: n };
  case 'dictionary': return { k: 'dict', name: n };
  case 'enum': return { k: 'enum', name: n };
  case 'callback': case 'callback interface': return { k: 'callback', name: n };
  case 'typedef':
    if (d.idlType.union) return makeUnion(d.idlType.idlType, n, d.idlType.nullable);
    return resolve(d.idlType);
  default: return { k: 'unknown', idl: n };
  }
}
/** Flattened alternatives of a union (typedef'd unions inside are spliced in). */
function flatAlternatives(types, out = { alts: [], nullable: false }) {
  for (const t of types) {
    if (t.nullable) out.nullable = true;
    if (t.union) { flatAlternatives(t.idlType, out); continue; }
    if (!t.generic && typeof t.idlType === 'string') {
      const d = def(t.idlType);
      if (d?.type === 'typedef' && d.idlType.union && !viewTypes.includes(t.idlType)) {
        if (d.idlType.nullable) out.nullable = true;
        flatAlternatives(d.idlType.idlType, out); continue;
      }
      if (t.idlType === 'undefined') { out.nullable = true; continue; }
    }
    out.alts.push(t);
  }
  return out;
}
function altBaseName(t) {
  if (t.generic === 'sequence' || t.generic === 'FrozenArray') return 'sequence';
  if (t.generic === 'record') return 'record';
  if (t.generic === 'Promise') return 'promise';
  const n = t.idlType;
  return lowerName(tier.renames[n] ?? n);
}
function typeKeyName(t) {
  if (t.generic === 'sequence' || t.generic === 'FrozenArray') return 'SequenceOf' + typeKeyName(t.idlType[0]);
  if (t.generic === 'record') return 'RecordOf' + typeKeyName(t.idlType[1]);
  if (t.generic === 'Promise') return 'PromiseOf' + typeKeyName(t.idlType[0]);
  if (t.union) return t.idlType.map(typeKeyName).join('Or');
  return (tier.renames[t.idlType] ?? t.idlType).split(' ').map(capital).join('');
}
function makeUnion(types, typedefName, outerNullable = false) {
  const flat = flatAlternatives(types);
  let r;
  // Typed arrays of either kind (ImageDataArray: Uint8ClampedArray or Float16Array) are bytes.
  if (flat.alts.length > 1 && flat.alts.every(t => !t.generic && !t.union && !t.nullable && viewTypes.includes(t.idlType))) r = resolve(flat.alts[0]);
  else if (flat.alts.length === 1) r = resolve(flat.alts[0]);
  else {
    // A union that names a browser interface is resolved anew in the browser tier.
    const resolved = flat.alts.map(resolve);
    const browserOnly = ctxTier >= 2 && resolved.some(namesBrowserInterface);
    const key = (browserOnly ? 'browser:' : '') + (typedefName ?? flat.alts.map(idlText).join('|'));
    if (!unions.has(key)) {
      const name = typedefName ? (tier.renames[typedefName] ?? typedefName) : flat.alts.map(typeKeyName).join('Or');
      if ([...unions.values()].some(o => o.name === name)) fail(`two unions are named ${name} (one in each tier)`);
      const u = { key, name, alts: [], typedef: typedefName };
      unions.set(key, u);
      const used = new Set();
      flat.alts.forEach((t, i) => {
        let ctor = altBaseName(t), j = 2;
        while (used.has(ctor)) ctor = altBaseName(t) + j++;
        used.add(ctor);
        u.alts.push({ ctor, t: resolved[i], idl: idlText(t) });
      });
    }
    r = { k: 'union', key };
  }
  if ((flat.nullable || outerNullable) && r.k !== 'nullable') r = { k: 'nullable', inner: r };
  return r;
}

function namesBrowserInterface(t) {
  if (t.k === 'nullable' || t.k === 'seq' || t.k === 'record' || t.k === 'promise') return namesBrowserInterface(t.inner);
  if (t.k === 'iface') return moduleTier.get(selectedInterfaces.get(t.name)) >= 2;
  if (t.k === 'union') return unions.get(t.key).alts.some(a => namesBrowserInterface(a.t));
  return false;
}

// ---------- shapes (for reading unions back) ----------

function shape(t) {
  switch (t.k) {
  case 'prim': return { String: 'string', Bool: 'bool', Int: 'number', Nat: 'number', Float: 'number', ByteArray: 'bytes', Value: 'ref', Data: 'any', Unit: 'any' }[t.lean];
  case 'arraybuffer': return 'ref';
  case 'seq': return 'array';
  case 'record': case 'dict': return 'object';
  case 'iface': case 'callback': case 'unknown': return 'ref';
  case 'enum': return 'string';
  default: return 'any';
  }
}
/** A typed array result that may not be a Uint8Array (ImageData's Uint8ClampedArray): Lasm.JS reads only a Uint8Array as bytes. */
const otherView = t => t.k === 'prim' && t.lean === 'ByteArray' && t.idl !== 'Uint8Array';
const needsPost = t => t.k === 'arraybuffer' || otherView(t) || (t.k === 'nullable' || t.k === 'seq') && needsPost(t.inner)
  || t.k === 'union' && unionRead(unions.get(t.key)) === 'decode';
/** How a union is read back: 'fromjs' (an instance), 'decode' (an IO decoder: it holds an ArrayBuffer), 'value' (only interfaces), 'data'. */
function unionRead(u) {
  const shapes = u.alts.map(a => shape(a.t));
  const distinct = new Set(shapes).size === shapes.length && !shapes.includes('any')
    && u.alts.every(a => a.t.k !== 'promise' && a.t.k !== 'nullable' && (a.t.k !== 'union') && readable(a.t));
  if (distinct) return u.alts.some(a => needsPost(a.t)) ? 'decode' : 'fromjs';
  // Only interfaces (generated or not: HTMLCanvasElement.getContext's contexts): a reference.
  if (u.alts.every(a => a.t.k === 'iface' || a.t.k === 'unknown' && (def(a.t.idl)?.type === 'interface' || otherInterfaces.has(a.t.idl)))) return 'value';
  return 'data';
}
/** Whether a type has a FromJS reading (possibly through an IO decoder). */
function readable(t) {
  switch (t.k) {
  case 'nullable': case 'seq': case 'record': return readable(t.inner) && !(t.k === 'record' && needsPost(t.inner));
  case 'dict': return dictReadable(t.name);
  case 'promise': return false;
  default: return true;
  }
}
const dictReadableMemo = new Map();
function dictReadable(name) {
  if (dictReadableMemo.has(name)) return dictReadableMemo.get(name);
  dictReadableMemo.set(name, false);
  const ok = inTier(tierOfKey(name), () => dictFields(name).every(f => { const t = resolve(f.idlType); return readable(t) && !needsPost(t); }));
  dictReadableMemo.set(name, ok);
  return ok;
}
function dictFields(name) {
  const d = def(name);
  const parent = d.inheritance && def(d.inheritance) ? dictFields(d.inheritance) : [];
  return [...parent, ...d.members.filter(m => m.type === 'field')];
}

// ---------- Lean type text ----------

const paren = s => /\s/.test(s) && !/^\(.*\)$/.test(s) ? `(${s})` : s;
/** Lean type for a value passed to JavaScript. */
function argType(t) {
  switch (t.k) {
  case 'prim': return t.lean;
  case 'arraybuffer': return 'ByteArray';
  case 'nullable': return `Option ${paren(argType(t.inner))}`;
  case 'seq': return `Array ${paren(argType(t.inner))}`;
  case 'record': return `Record ${paren(argType(t.inner))}`;
  case 'promise': return 'Value';
  case 'iface': case 'dict': case 'enum': case 'callback': return leanTypeName(t.name);
  case 'union': return unions.get(t.key).name;
  case 'unknown': return 'Value';
  }
}
/** Lean type of a value read from JavaScript (after any IO decoding). */
function retType(t) {
  switch (t.k) {
  case 'prim': return t.lean;
  case 'arraybuffer': return 'ByteArray';
  case 'nullable': return `Option ${paren(retType(t.inner))}`;
  case 'seq': return `Array ${paren(retType(t.inner))}`;
  case 'record': return `Record ${paren(retType(t.inner))}`;
  case 'promise': return 'Value';
  case 'iface': case 'enum': case 'callback': return leanTypeName(t.name);
  case 'dict': return dictReadable(t.name) ? leanTypeName(t.name) : 'Data';
  case 'union': { const u = unions.get(t.key), how = unionRead(u); return how === 'fromjs' || how === 'decode' ? u.name : how === 'value' ? 'Value' : 'Data'; }
  case 'unknown': return 'Data';
  }
}
/** The FromJS type requested from the host (before IO decoding). */
function reqType(t) {
  if (otherView(t)) return 'Data';
  switch (t.k) {
  case 'arraybuffer': return 'Value';
  case 'nullable': return needsPost(t.inner) ? `Option ${paren(reqType(t.inner))}` : retType(t);
  case 'seq': return needsPost(t.inner) ? `Array ${paren(reqType(t.inner))}` : retType(t);
  case 'union': return unionRead(unions.get(t.key)) === 'decode' ? 'Data' : retType(t);
  default: return retType(t);
  }
}
/** IO decoding from reqType to retType, as a function expression, or null. */
function postFn(t) {
  if (!needsPost(t)) return null;
  if (otherView(t)) return 'Support.viewBytes';
  switch (t.k) {
  case 'arraybuffer': return 'Support.arrayBufferBytes';
  case 'nullable': case 'seq': return `(fun x => x.mapM ${postFn(t.inner)})`;
  case 'union': return `${unions.get(t.key).name}.decode`;
  }
}
/** Lean expression (pure) converting `v` of argType(t) to Data. */
const toData = (t, v) => `toJS ${v}`;

// ---------- usage: which declarations each module needs ----------

const needTo = new Set(), needFrom = new Set(); // type keys (dict/union names)
const typeKey = t => t.k === 'union' ? 'union:' + t.key : t.k === 'dict' || t.k === 'enum' || t.k === 'callback' || t.k === 'iface' ? t.name : null;

function visit(t, mode, module) {
  if (!t) return;
  if (t.k === 'nullable' || t.k === 'seq' || t.k === 'record' || t.k === 'promise') return visit(t.inner, t.k === 'promise' && mode === 'to' ? 'none' : mode, module);
  const key = typeKey(t);
  if (!key) return;
  const first = !moduleOfType.has(key);
  if (first) moduleOfType.set(key, module);
  if (mode === 'to') { if (needTo.has(key)) return; needTo.add(key); }
  else if (mode === 'from') { if (needFrom.has(key)) return; needFrom.add(key); }
  else if (!first) return;
  const owner = moduleOfType.get(key);
  inTier(moduleTier.get(owner), () => {
    if (t.k === 'dict') for (const f of dictFields(t.name)) visit(resolve(f.idlType), mode, owner);
    if (t.k === 'union') for (const a of unions.get(t.key).alts) visit(a.t, mode, owner);
    if (t.k === 'callback') {
      // A callback handle is made from a Lean function: its arguments are read, its result written.
      const c = callbackSignature(t.name);
      for (const a of c.args) visit(resolve(a.idlType), 'from', owner);
      visit(c.ret, 'to', owner);
      needTo.add(key); needFrom.add(key);
    }
  });
}
function callbackSignature(name) {
  const d = def(name);
  if (d.type === 'callback') return { args: d.arguments, ret: resolve(d.idlType), idl: d };
  const op = d.members.find(m => m.type === 'operation');
  return { args: op.arguments, ret: resolve(op.idlType), idl: op };
}

// The members to generate, per module.
const plan = allModules.map(m => ({ ...m, ifaces: (m.interfaces ?? []).map(configIdl), globals: m.globals ?? [], namespaces: m.namespaces ?? [],
  windowGlobals: m.windowGlobals ?? [] }));
const globalMixin = def('WindowOrWorkerGlobalScope');
const globalMember = n => {
  const found = globalMixin.members.filter(x => x.name === n);
  if (!found.length) fail(`global ${n} not found`);
  return found;
};
/** A member of Window (with its mixins and partials) that the browser tier also generates as a global (`document`). */
const windowMember = n => {
  const found = inTier(2, () => membersOf('Window')).filter(x => x.name === n);
  if (!found.length) fail(`Window member ${n} not found`);
  return found;
};
const promiseRet = t => t.k === 'promise';
function visitMember(m, module) {
  if (m.type === 'operation' || m.type === 'constructor') {
    for (const a of m.arguments) visit(resolve(a.idlType), 'to', module);
    if (m.idlType) { const r = resolve(m.idlType); visit(promiseRet(r) ? r.inner : r, 'from', module); }
  } else if (m.type === 'attribute') {
    const r = resolve(m.idlType);
    visit(promiseRet(r) ? r.inner : r, 'from', module);
    if (!m.readonly) visit(r, 'to', module);
  } else if (m.type === 'iterable' && !m.async) {
    for (const t of m.idlType) visit(resolve(t), 'from', module);
  }
}
for (const m of plan) inTier(m.tier, () => {
  for (const i of m.ifaces) {
    const d = def(i);
    if (d.inheritance && selectedInterfaces.has(d.inheritance)) visit({ k: 'iface', name: d.inheritance }, 'none', m.name);
    for (const mem of membersOf(i)) visitMember(mem, m.name);
  }
  for (const g of m.globals) for (const mem of globalMember(g)) visitMember(mem, m.name);
  for (const n of m.namespaces) for (const mem of def(n).members.filter(exposedToWorkers)) visitMember(mem, m.name);
  for (const g of m.windowGlobals) for (const mem of windowMember(g)) visitMember(mem, m.name);
  for (const x of m.extraTypes ?? []) {
    const d = def(x);
    if (!d) fail(`extra type ${x} not found`);
    visit(resolveName(x), 'to', m.name);
  }
});

// ---------- emitting ----------

const order = plan.map(m => m.name);
const out = new Map(order.map(n => [n, { decls: [], imports: new Set() }]));
const moduleIndex = n => order.indexOf(n);
function requireType(module, t) {
  if (!t) return;
  if (t.k === 'nullable' || t.k === 'seq' || t.k === 'record' || t.k === 'promise') return requireType(module, t.inner);
  const key = typeKey(t);
  if (!key) return;
  const owner = moduleOfType.get(key);
  if (!owner) fail(`no module for ${key}`);
  if (owner !== module) {
    if (moduleIndex(owner) > moduleIndex(module)) fail(`${module} uses ${key} of the later module ${owner}`);
    out.get(module).imports.add(owner);
  }
}

const docText = s => s.replace(/-\//g, '- /');
const memberIdl = (m, owner) => {
  const args = a => a.map(x => `${x.optional ? 'optional ' : ''}${idlText(x.idlType)}${x.variadic ? '...' : ''} ${x.name}`).join(', ');
  switch (m.type) {
  case 'constructor': return `constructor(${args(m.arguments)})`;
  case 'operation': return `${m.special ? m.special + ' ' : ''}${idlText(m.idlType)} ${m.name}(${args(m.arguments)})`;
  case 'attribute': return `${m.special ? m.special + ' ' : ''}${m.readonly ? 'readonly ' : ''}attribute ${idlText(m.idlType)} ${m.name}`;
  default: return `${m.type} ${owner}`;
  }
};
const specOf = spec => spec === 'synthetic' ? 'written for Lasm (docs/JS_BINDINGS.md)' : specTitles[spec];

// Arguments: Lean binders and the JavaScript argument array.
function argumentList(args) {
  const binders = [], values = [];
  let rest = null;
  const names = new Set(['self']);
  for (const a of args) {
    let name = a.name;
    while (names.has(name)) name += '_';
    names.add(name);
    const t = resolve(a.idlType);
    if (a.variadic) { binders.push(`(${id(name)} : Array ${paren(argType(t))} := #[])`); rest = `(${id(name)}.map toJS)`; continue; }
    if (a.optional) {
      const inner = t.k === 'nullable' ? t.inner : t;
      const lt = argType(inner);
      if (lt === 'Data') { binders.push(`(${id(name)} : Data := .undefined)`); values.push(id(name)); }
      else { binders.push(`(${id(name)} : Option ${paren(lt)} := none)`); values.push(`Support.optional ${id(name)}`); }
    } else { binders.push(`(${id(name)} : ${argType(t)})`); values.push(toData(t, id(name))); }
  }
  const array = `#[${values.join(', ')}]`;
  return { binders: binders.join(' '), args: rest ? `(Support.argsWith ${array} ${rest})` : `(Support.args ${array})`, arity: args.length };
}

/** The result: Lean type, and how to finish a host call that requested reqType. */
function resultOf(idlType) {
  const r = resolve(idlType);
  const async = promiseRet(r);
  const t = async ? r.inner : r;
  const lean = retType(t);
  // An interface result is read as a reference and wrapped: some runtimes return
  // plain objects for interface instances (Bun's navigator), which data would copy.
  if (t.k === 'iface') return { async, t, lean, req: 'Value', post: 'wrap' };
  // A dictionary holding a record is read through structuredClone: Node's
  // URLPattern returns its groups as objects that are not plain.
  const dict = t.k === 'nullable' ? t.inner : t;
  if (dict.k === 'dict' && dictReadable(dict.name) && holdsRecord(dict)) return { async, t, lean, req: 'Value', post: `Support.cloneAs ${paren(lean)}` };
  return { async, t, lean, req: paren(reqType(t)), post: postFn(t) };
}
function holdsRecord(t, seen = new Set()) {
  if (t.k === 'record') return true;
  if (t.k === 'nullable' || t.k === 'seq') return holdsRecord(t.inner, seen);
  if (t.k === 'union') return unions.get(t.key).alts.some(a => holdsRecord(a.t, seen));
  if (t.k === 'dict' && !seen.has(t.name)) { seen.add(t.name); return dictFields(t.name).some(f => holdsRecord(resolve(f.idlType), seen)); }
  return false;
}
const applyPost = (post, x) => post === 'wrap' ? `pure { val := ${x} }` : `${post} ${x}`;
const finish = (call, res) => res.post ? `do\n  let r ← ${call}\n  ${applyPost(res.post, 'r')}` : call;
const monad = res => res.async ? 'Async' : 'IO';
const binding = (name, path, construct, arity) =>
  `{ name := "${NS}.${name}", module := "globalThis", path := "${path}", construct := ${construct}, arity := ${arity} }`;

/** Overload names: the first overload keeps the name, the others add `With` and their first differing argument. */
function overloadNames(group) {
  if (group.length === 0) return [];
  if (group.length === 1) return [group[0].name];
  const first = group[0].arguments;
  return group.map((m, i) => {
    if (i === 0) return m.name;
    const idx = m.arguments.findIndex((a, j) => first[j]?.name !== a.name);
    return idx >= 0 ? `${m.name}With${capital(m.arguments[idx].name)}` : `${m.name}${m.arguments.length}`;
  });
}
const constructorName = 'new';

function emitInterface(module, name) {
  const d = def(name);
  const o = out.get(module);
  const T = leanTypeName(name);
  const parent = d.inheritance && selectedInterfaces.has(d.inheritance) ? leanTypeName(d.inheritance) : null;
  const decls = [];
  const header = `/-- \`interface ${jsPath(name)}${d.inheritance ? ' : ' + d.inheritance : ''}\` (${specOf(d.spec)}): a handle to the JavaScript object. -/`;
  if (parent) decls.push(`${header}\nstructure ${T} extends ${parent}`);
  else decls.push(`${header}\nstructure ${T} where\n  /-- The JavaScript object. -/\n  val : Value`);
  decls.push(`instance : Nonempty ${T} := ⟨{ val := Classical.ofNonempty }⟩`);
  decls.push(`instance : ToJS ${T} := ⟨fun x => .ref x.val ""⟩`);
  decls.push(`instance : FromJS ${T} := ⟨fun | .ref v _ => .ok { val := v } | _ => .error "", "${NS}.${T}", .data⟩`);
  // An instance where its parent is expected (an HTMLElement for a Node argument).
  if (parent) decls.push(`instance : Coe ${T} ${parent} := ⟨${T}.to${parent.split('.').at(-1)}⟩`);
  o.types.push(decls.join('\n'));

  const members = membersOf(name);
  const taken = new Set(['mk', 'val', 'rec', 'recOn', 'casesOn', 'noConfusion', 'noConfusionType', 'ctorIdx', 'ofFn', 'ofSyncFn']);
  const take = (n, what) => { if (taken.has(n)) fail(`${T}.${n} (${what}) is generated twice`); taken.add(n); return n; };
  const staticNames = new Set(members.filter(m => m.special === 'static').map(m => m.name));
  const instanceNames = new Set(members.filter(m => m.special !== 'static' && m.name).map(m => m.name));
  const fns = [];
  const doc = (m, extra = '') => `/-- \`${docText(memberIdl(m, name))}\`${extra} -/`;
  // Constructors.
  // [HTMLConstructor] constructors construct only custom elements (subclasses); for the element itself they throw.
  const ctors = members.filter(m => m.type === 'constructor' && !extAttr(m, 'HTMLConstructor'));
  overloadNames(ctors.map(c => ({ ...c, name: constructorName }))).forEach((n, i) => {
    const c = ctors[i];
    for (const a of c.arguments) requireType(module, resolve(a.idlType));
    const al = argumentList(c.arguments);
    fns.push(`${doc(c)}\ndef ${T}.${id(take(n, 'constructor'))}${al.binders ? ' ' + al.binders : ''} : IO ${T} :=\n  Lasm.JS.Binding.invoke ${T} ${binding(`${T}.${n}`, jsPath(name), true, al.arity)}\n    ${al.args} (await := false)`);
  });
  // Constants.
  for (const c of members.filter(m => m.type === 'const')) {
    const t = resolve(c.idlType);
    const v = c.value.type === 'number' ? c.value.value : c.value.type === 'boolean' ? String(c.value.value) : fail(`const ${c.name}`);
    fns.push(`/-- \`const ${idlText(c.idlType)} ${c.name} = ${v}\` -/\ndef ${T}.${id(take(c.name, 'const'))} : ${retType(t)} := ${v}`);
  }
  // Attributes.
  for (const a of members.filter(m => m.type === 'attribute')) {
    const r = resolve(a.idlType);
    requireType(module, r);
    const res = resultOf(a.idlType);
    const isStatic = a.special === 'static';
    const getName = take(isStatic && instanceNames.has(a.name) ? 'static' + capital(a.name) : a.name, 'attribute');
    if (isStatic) {
      const call = `Support.getGlobal [${jsPath(name).split('.').map(s => `"${s}"`).join(', ')}, "${a.name}"] ${res.async ? 'Value' : res.req}`;
      fns.push(`${doc(a)}\ndef ${T}.${id(getName)} : ${monad(res)} ${paren(res.lean)} := ${res.async ? `do\n  let p ← ${call}\n  ${finish(`p.await ${res.req}`, res).replace(/^do\n {2}/, '')}` : finish(call, res)}`);
    } else if (res.async) {
      fns.push(`${doc(a)}\ndef ${T}.${id(getName)} (self : ${T}) : Async ${paren(res.lean)} := do\n  let p ← self.val.get "${a.name}" Value\n  ${res.post ? `let r ← p.await ${res.req}\n  ${applyPost(res.post, 'r')}` : `p.await ${res.req}`}`);
    } else {
      fns.push(`${doc(a)}\ndef ${T}.${id(getName)} (self : ${T}) : IO ${paren(res.lean)} := ${finish(`self.val.get "${a.name}" ${res.req}`, res)}`);
    }
    if (!a.readonly && !isStatic) {
      const setName = take('set' + capital(a.name), 'setter');
      fns.push(`/-- Sets \`${a.name}\`: \`${docText(memberIdl(a, name))}\` -/\ndef ${T}.${id(setName)} (self : ${T}) (value : ${argType(r)}) : IO Unit :=\n  self.val.set "${a.name}" (${toData(r, 'value')})`);
    }
    if (a.special === 'stringifier') {
      fns.push(`/-- The stringifier (\`${a.name}\`). -/\ndef ${T}.${id(take('toString', 'stringifier'))} (self : ${T}) : IO String := self.val.callMethod "toString" #[] String`);
    }
  }
  // Operations, grouped by name and static-ness.
  const ops = members.filter(m => m.type === 'operation');
  const groups = new Map();
  for (const op of ops) {
    if (op.special === 'stringifier' && !op.name) {
      fns.push(`/-- The stringifier. -/\ndef ${T}.${id(take('toString', 'stringifier'))} (self : ${T}) : IO String := self.val.callMethod "toString" #[] String`);
      continue;
    }
    // Unnamed getters, setters and deleters (DOMStringMap's properties, Window's named elements) have no method to call.
    if (!op.name) continue;
    const key = (op.special === 'static' ? 'static ' : '') + op.name;
    if (!groups.has(key)) groups.set(key, []);
    groups.get(key).push(op);
  }
  for (const group of groups.values()) {
    overloadNames(group).forEach((n0, i) => {
      const op = group[i];
      const isStatic = op.special === 'static';
      const n = isStatic && instanceNames.has(op.name) ? 'static' + capital(n0) : n0;
      for (const a of op.arguments) requireType(module, resolve(a.idlType));
      requireType(module, resolve(op.idlType));
      const al = argumentList(op.arguments);
      const res = resultOf(op.idlType);
      let body;
      if (isStatic) {
        const b = binding(`${T}.${n}`, `${jsPath(name)}.${op.name}`, false, al.arity);
        body = res.async ? `Lasm.JS.Binding.invokeAsync ${res.req} ${b}\n    ${al.args}` : `Lasm.JS.Binding.invoke ${res.req} ${b}\n    ${al.args} (await := false)`;
        fns.push(`${doc(op)}\ndef ${T}.${id(take(n, 'static operation'))}${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${res.post ? ' ' + finish(body, res) : '\n  ' + body}`);
      } else {
        body = res.async ? `self.val.callMethodAwait "${op.name}" ${al.args} ${res.req}` : `self.val.callMethod "${op.name}" ${al.args} ${res.req}`;
        fns.push(`${doc(op)}\ndef ${T}.${id(take(n, 'operation'))} (self : ${T})${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${res.post ? ' ' + finish(body, res) : '\n  ' + body}`);
      }
    });
  }
  // Pair iterables: entries, keys and values as arrays.
  for (const it of members.filter(m => m.type === 'iterable' && m.idlType.length === 2)) {
    const [k, v] = it.idlType.map(resolve);
    for (const t of [k, v]) requireType(module, t);
    if (needsPost(k) || needsPost(v)) fail(`${T}: iterable needing decoding`);
    const K = paren(retType(k)), V = paren(retType(v));
    const idl = `iterable<${it.idlType.map(idlText).join(', ')}>`;
    fns.push(`/-- \`${idl}\`: \`entries()\`, collected into an array. -/\ndef ${T}.${id(take('entries', 'iterable'))} (self : ${T}) : IO (Array (${K} × ${V})) :=\n  Support.iterate self.val "entries" (Array (${K} × ${V}))`);
    fns.push(`/-- \`${idl}\`: \`keys()\`, collected into an array. -/\ndef ${T}.${id(take('keys', 'iterable'))} (self : ${T}) : IO (Array ${K}) :=\n  Support.iterate self.val "keys" (Array ${K})`);
    fns.push(`/-- \`${idl}\`: \`values()\`, collected into an array. -/\ndef ${T}.${id(take('values', 'iterable'))} (self : ${T}) : IO (Array ${V}) :=\n  Support.iterate self.val "values" (Array ${V})`);
  }
  // Value iterables (NodeList, DOMTokenList): `values()`, collected into an array.
  for (const it of members.filter(m => m.type === 'iterable' && m.idlType.length === 1)) {
    const v = resolve(it.idlType[0]);
    requireType(module, v);
    if (needsPost(v)) fail(`${T}: iterable needing decoding`);
    const V = paren(retType(v));
    fns.push(`/-- \`iterable<${idlText(it.idlType[0])}>\`: \`values()\`, collected into an array. -/\ndef ${T}.${id(take('values', 'iterable'))} (self : ${T}) : IO (Array ${V}) :=\n  Support.iterate self.val "values" (Array ${V})`);
  }
  if (parent) requireType(module, { k: 'iface', name: d.inheritance });
  o.decls.push(...fns);
}

function emitNamespaceOrGlobal(module, owner, members, pathPrefix, leanPrefix) {
  const o = out.get(module);
  const groups = new Map();
  for (const m of members) {
    if (m.type === 'attribute') {
      const r = resolve(m.idlType);
      requireType(module, r);
      const res = resultOf(m.idlType);
      const path = [...pathPrefix, m.name].map(s => `"${s}"`).join(', ');
      const call = `Support.getGlobal [${path}] ${res.async ? 'Value' : res.req}`;
      o.decls.push(`/-- \`${docText(memberIdl(m, owner))}\` (${specOf(m.spec)}) -/\ndef ${leanPrefix}${id(m.name)} : ${monad(res)} ${paren(res.lean)} := ${res.async ? `do\n  let p ← ${call}\n  p.await ${res.req}` : finish(call, res)}`);
      continue;
    }
    if (m.type !== 'operation') fail(`${owner}: unsupported member ${m.type}`);
    if (!groups.has(m.name)) groups.set(m.name, []);
    groups.get(m.name).push(m);
  }
  for (const group of groups.values()) {
    overloadNames(group).forEach((n, i) => {
      const op = group[i];
      for (const a of op.arguments) requireType(module, resolve(a.idlType));
      requireType(module, resolve(op.idlType));
      const al = argumentList(op.arguments);
      const res = resultOf(op.idlType);
      if (tier.numberResults.includes(op.name) && !pathPrefix.length) Object.assign(res, { req: 'Value', post: `Support.number ${paren(res.lean)}` });
      const b = binding(`${leanPrefix}${n}`, [...pathPrefix, op.name].join('.'), false, al.arity);
      const body = res.async ? `Lasm.JS.Binding.invokeAsync ${res.req} ${b}\n    ${al.args}` : `Lasm.JS.Binding.invoke ${res.req} ${b}\n    ${al.args} (await := false)`;
      o.decls.push(`/-- \`${docText(memberIdl(op, owner))}\` (${specOf(op.spec)}) -/\ndef ${leanPrefix}${id(n)}${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${res.post ? ' ' + finish(body, res) : '\n  ' + body}`);
    });
  }
}

// Supporting types: enums, callbacks (handles), dictionaries and unions.
function emitEnum(name) {
  const d = def(name), T = leanTypeName(name);
  const ctors = d.values.map(v => ({ v: v.value, c: enumCtor(v.value) }));
  if (new Set(ctors.map(x => x.c)).size !== ctors.length) fail(`enum ${name}: constructor names collide`);
  const lines = [`/-- \`enum ${name}\` (${specOf(d.spec)}): ${ctors.map(x => JSON.stringify(x.v)).join(', ')}. -/`, `inductive ${T} where`];
  for (const x of ctors) lines.push(`  /-- ${JSON.stringify(x.v)} -/\n  | ${id(x.c)}`);
  lines.push('  deriving BEq, Repr, Inhabited');
  lines.push(`instance : ToJS ${T} := ⟨fun\n${ctors.map(x => `  | .${id(x.c)} => .string ${JSON.stringify(x.v)}`).join('\n')}⟩`);
  lines.push(`instance : FromJS ${T} where\n  fromJS\n${ctors.map(x => `    | .string ${JSON.stringify(x.v)} => .ok .${id(x.c)}`).join('\n')}\n    | _ => .error "not a value of the enumeration"\n  typeName := "${NS}.${T}"`);
  return lines.join('\n');
}
function emitCallback(module, name) {
  const d = def(name), T = leanTypeName(name);
  const c = callbackSignature(name);
  const sig = d.type === 'callback' ? `callback ${name} = ${idlText(d.idlType)} (${c.args.map(a => `${a.optional ? 'optional ' : ''}${idlText(a.idlType)}${a.variadic ? '...' : ''} ${a.name}`).join(', ')})`
    : `callback interface ${name} { ${memberIdl(c.idl, name)}; }`;
  const params = [], reads = [];
  c.args.forEach((a, i) => {
    const t = resolve(a.idlType);
    requireType(module, t);
    if (a.variadic) { params.push('Array Data'); reads.push(`(args.extract ${i} args.size)`); return; }
    const opt = a.optional && retType(t) !== 'Data' && t.k !== 'nullable';
    const R = opt ? `Option ${paren(retType(t))}` : retType(t);
    const Q = opt ? `Option ${paren(reqType(t))}` : reqType(t);
    params.push(paren(R));
    const post = postFn(t);
    reads.push(post ? `(← ${opt ? `(fun x => x.mapM ${post})` : post} (← Support.arg ${paren(Q)} args ${i}))` : `(← Support.arg ${paren(Q)} args ${i})`);
  });
  let ret = c.ret.k === 'promise' ? c.ret.inner : c.ret;
  requireType(module, ret);
  const R = paren(argType(ret));
  const fnType = m => [...params, `${m} ${R}`].join(' → ');
  const call = reads.length ? `f ${reads.join(' ')}` : 'f';
  const lines = [`/-- \`${docText(sig)}\` (${specOf(d.spec)}): a JavaScript function, made from a Lean function with \`ofFn\` (asynchronous) or \`ofSyncFn\`. -/`,
    `structure ${T} where\n  /-- The JavaScript function. -/\n  val : Value`,
    `instance : Nonempty ${T} := ⟨{ val := Classical.ofNonempty }⟩`,
    `instance : ToJS ${T} := ⟨fun x => .ref x.val ""⟩`,
    `instance : FromJS ${T} := ⟨fun | .ref v _ => .ok { val := v } | _ => .error "", "${NS}.${T}", .data⟩`,
    `/-- A JavaScript function that runs \`f\` asynchronously (\`Lasm.JS.Function.ofFn\`): it returns a promise at once and \`f\` runs as a Lean task, holding no Lean thread while it awaits. -/\ndef ${T}.ofFn (f : ${fnType('Async')}) : IO ${T} := do\n  return { val := ← Lasm.JS.Function.ofFn fun ${reads.length ? 'args' : '_'} => do return toJS (← ${call}) }`,
    `/-- A JavaScript function that runs \`f\` synchronously (\`Lasm.JS.Function.ofSyncFn\`): JavaScript waits for its result (needed where the caller uses it at once: an event listener calling \`preventDefault\`, a queuing strategy's \`size\`). -/\ndef ${T}.ofSyncFn (f : ${fnType('IO')}) : IO ${T} := do\n  return { val := ← Lasm.JS.Function.ofSyncFn fun ${reads.length ? 'args' : '_'} => do return toJS (← ${call}) }`];
  return lines.join('\n');
}
function emitDict(module, name) {
  const d = def(name), T = leanTypeName(name);
  const fields = dictFields(name);
  const lines = [`/-- \`dictionary ${name}${d.inheritance ? ' : ' + d.inheritance : ''}\` (${specOf(d.spec)}); members that are not \`required\` are \`Option\`s, \`none\` leaving them out. -/`, `structure ${T} where`];
  const entries = [];
  for (const f of fields) {
    const t = resolve(f.idlType);
    requireType(module, t);
    const inner = t.k === 'nullable' && !f.required ? t.inner : t;
    const fieldDoc = `  /-- \`${f.required ? 'required ' : ''}${idlText(f.idlType)} ${f.name}${f.default ? ' = ' + defaultText(f.default) : ''}\` -/`;
    if (f.required) { lines.push(`${fieldDoc}\n  ${id(f.name)} : ${argType(t)}`); entries.push(`("${f.name}", ${toData(t, `d.${id(f.name)}`)})`); }
    else if (argType(inner) === 'Data') { lines.push(`${fieldDoc}\n  ${id(f.name)} : Data := .undefined`); entries.push(`("${f.name}", d.${id(f.name)})`); }
    else { lines.push(`${fieldDoc}\n  ${id(f.name)} : Option ${paren(argType(inner))} := none`); entries.push(`("${f.name}", Support.optional d.${id(f.name)})`); }
  }
  if (!fields.length) lines[1] = `structure ${T} where`;
  const decl = [lines.join('\n')];
  if (needTo.has(name)) decl.push(`instance : ToJS ${T} := ⟨fun ${fields.length ? 'd' : '_'} => Support.fields #[${entries.join(',\n    ')}]⟩`);
  if (needFrom.has(name) && dictReadable(name)) {
    const reads = fields.map(f => {
      const t = resolve(f.idlType);
      const inner = t.k === 'nullable' && !f.required ? t.inner : t;
      const R = f.required ? retType(t) : retType(inner) === 'Data' ? 'Data' : `Option ${paren(retType(inner))}`;
      return `${id(f.name)} := ← Lasm.JS.readField ${paren(R)} d "${f.name}"`;
    });
    decl.push(`instance : FromJS ${T} where\n  fromJS d := ${fields.length ? `do return {\n    ${reads.join(',\n    ')} }` : `match d with | .object _ => .ok {} | _ => .error ""`}\n  typeName := "${NS}.${T}"`);
  }
  return decl.join('\n');
}
function defaultText(v) {
  switch (v.type) {
  case 'string': return JSON.stringify(v.value);
  case 'sequence': return '[]';
  case 'dictionary': return '{}';
  case 'null': return 'null';
  default: return String(v.value);
  }
}
const shapePattern = { string: '.string _', bool: '.bool _', number: '.number _', bytes: '.bytes _', array: '.array _', object: '.object _', ref: '.ref _ _' };
function emitUnion(module, key) {
  const u = unions.get(key);
  const how = unionRead(u);
  if (!needTo.has('union:' + key) && how !== 'fromjs' && how !== 'decode') return null;
  const lines = [`/-- \`${u.typedef ? `typedef ${u.alts.map(a => a.idl).join(' or ')} ${u.typedef}` : `(${u.alts.map(a => a.idl).join(' or ')})`}\`: one constructor per member type. -/`, `inductive ${u.name} where`];
  for (const a of u.alts) { requireType(module, a.t); lines.push(`  /-- \`${a.idl}\` -/\n  | ${id(a.ctor)} (value : ${argType(a.t)})`); }
  const decl = [lines.join('\n')];
  const k = 'union:' + key;
  if (needTo.has(k)) decl.push(`instance : ToJS ${u.name} := ⟨fun\n${u.alts.map(a => `  | .${id(a.ctor)} v => ${toData(a.t, 'v')}`).join('\n')}⟩`);
  // A value of a member type where the union is expected (`setAttribute "title" "x"`, `fetch "https://…"`): one
  // coercion per member whose Lean type no other member has (not Data or Value, which stand for many).
  if (needTo.has(k)) for (const a of u.alts) {
    const L = argType(a.t);
    if (L === 'Data' || L === 'Value' || u.alts.filter(b => argType(b.t) === L).length > 1) continue;
    decl.push(`instance : Coe ${paren(L)} ${u.name} := ⟨.${id(a.ctor)}⟩`);
  }
  if (needFrom.has(k)) {
    const how = unionRead(u);
    if (how === 'fromjs') decl.push(`instance : FromJS ${u.name} where\n  fromJS\n${u.alts.map(a => `    | d@(${shapePattern[shape(a.t)]}) => (FromJS.fromJS d : Except String ${a.t.k === 'unknown' ? 'Value' : paren(retType(a.t))}).map .${id(a.ctor)}`).join('\n')}\n    | _ => .error ""\n  typeName := "${NS}.${u.name}"`);
    if (how === 'decode') decl.push(`/-- Reads a \`${u.name}\` (one member is an ArrayBuffer, copied with one more host call). -/\ndef ${u.name}.decode (d : Data) : IO ${u.name} :=\n  match d with\n${u.alts.map(a => {
      const post = postFn(a.t);
      return `  | ${shapePattern[shape(a.t)]} => do return .${id(a.ctor)} (← ${post ? `${post} (← Lasm.JS.decodeAs ${paren(reqType(a.t))} "${u.name}" d)` : `Lasm.JS.decodeAs ${paren(retType(a.t))} "${u.name}" d`})`;
    }).join('\n')}\n  | _ => throw (IO.userError s!"Lasm.JS.Web: expected a ${u.name}, received JavaScript {d.describe}")`);
  }
  return decl.join('\n');
}

// Collect per module, in dependency order within the module.
for (const o of out.values()) Object.assign(o, { types: [], support: [] });
for (const m of plan) inTier(m.tier, () => { for (const i of m.ifaces) emitInterface(m.name, i); });
for (const m of plan) inTier(m.tier, () => {
  emitNamespaceOrGlobal(m.name, 'WindowOrWorkerGlobalScope', m.globals.flatMap(globalMember), [], '');
  for (const n of m.namespaces) emitNamespaceOrGlobal(m.name, n, def(n).members.filter(exposedToWorkers), [n], `${n}.`);
  emitNamespaceOrGlobal(m.name, 'Window', m.windowGlobals.flatMap(windowMember), [], '');
});
// Supporting declarations, topologically sorted per module.
const supportKeys = [...moduleOfType.keys()].filter(k => !selectedInterfaces.has(k));
const depsOf = key => inTier(tierOfKey(key), () => {
  const deps = [];
  const walk = t => {
    if (!t) return;
    if (t.k === 'nullable' || t.k === 'seq' || t.k === 'record' || t.k === 'promise') return walk(t.inner);
    const k = typeKey(t);
    if (k && !selectedInterfaces.has(k)) deps.push(k);
  };
  if (key.startsWith('union:')) for (const a of unions.get(key.slice(6)).alts) walk(a.t);
  else {
    const d = def(key);
    if (d.type === 'dictionary') for (const f of dictFields(key)) walk(resolve(f.idlType));
    if (d.type === 'callback' || d.type === 'callback interface') { const c = callbackSignature(key); c.args.forEach(a => walk(resolve(a.idlType))); walk(c.ret); }
  }
  return deps;
});
const emitted = new Set();
function emitSupport(key, stack = []) {
  if (emitted.has(key)) return;
  if (stack.includes(key)) fail(`recursive types: ${[...stack, key].join(' → ')}`);
  for (const dep of depsOf(key)) emitSupport(dep, [...stack, key]);
  emitted.add(key);
  const module = moduleOfType.get(key);
  const o = out.get(module);
  const text = inTier(moduleTier.get(module), () => {
    if (key.startsWith('union:')) return emitUnion(module, key.slice(6));
    const d = def(key);
    return d.type === 'enum' ? emitEnum(key) : d.type === 'dictionary' ? emitDict(module, key) : emitCallback(module, key);
  });
  if (text !== null) o.support.push(text);
}
// Enums first (nothing depends on order for them), then the rest in first-use order.
for (const k of supportKeys.filter(k => !k.startsWith('union:') && def(k).type === 'enum')) emitSupport(k);
for (const k of supportKeys) emitSupport(k);

// ---------- writing ----------

const generatedBy = `GENERATED by scripts/bindings/generate-web.mjs from @webref/idl ${webrefVersion} (webidl2 ${webidl2Version}); do not edit.
Regenerate with \`node scripts/bindings/generate-web.mjs\`; the mapping is in docs/JS_BINDINGS.md ("Standard bindings").
The doc comments quote the WebIDL of the specifications they name: WHATWG standards (CC BY 4.0)
and W3C specifications (W3C Software and Document License), with attribution to each.`;
const files = new Map();
const specsUsed = new Map(order.map(n => [n, new Set()]));
for (const m of plan) {
  const o = out.get(m.name);
  const imports = ['Lasm.JS.Web.Support', ...order.filter(n => o.imports.has(n)).map(n => `${NS}.${n}`)];
  const text = [`/-
${NS}.${m.name}: ${m.title} (${m.specs}).
${generatedBy}
-/`, ...imports.map(i => `import ${i}`), '', `namespace ${NS}`, 'open Lasm.JS', '',
  ...o.types.flatMap(t => [t, '']), ...o.support.flatMap(t => [t, '']), ...o.decls.flatMap(t => [t, '']), `end ${NS}`, ''].join('\n');
  files.set(join(outDir, `${m.name}.lean`), text);
}
files.set(join(root, 'library', 'Lasm', 'JS', 'Web.lean'), [`/-
${NS}: the WinterTC Minimum Common Web API (https://min-common-api.proposal.wintertc.org/),
available on every JavaScript target Lasm supports: Node, Bun, Deno, Cloudflare Workers and the
other edge platforms, and browsers. Spec-faithful bindings on Lasm.JS: interfaces are handle
types, Promise results are \`Async\`, nullable values \`Option\`s, dictionaries structures
(docs/JS_BINDINGS.md, "Standard bindings").
${generatedBy}
-/`, ...plan.filter(m => m.tier === 1).map(m => `import ${NS}.${m.name}`), ''].join('\n'));
files.set(join(outDir, 'Browser.lean'), [`/-
${NS}.Browser: everything Lasm.JS.Web has in a browser: the Minimum Common Web API (\`import Lasm.JS.Web\`)
and the browser tier (scripts/bindings/web-browser.mjs): the DOM and the HTML elements, the window,
location, history and storage, user-interface events, canvas 2D and WebSocket
(docs/JS_BINDINGS.md, "The browser tier").
${generatedBy}
-/`, `import ${NS}`, ...plan.filter(m => m.tier === 2).map(m => `import ${NS}.${m.name}`), ''].join('\n'));

// The generated surface, for the availability probes: tier 1's (test/fixtures/js-web)
// and the browser tier's (test/browser/platform).
const surfaceOf = t => {
const surface = {};
for (const m of plan.filter(m => m.tier === t)) inTier(t, () => {
  for (const i of m.ifaces) {
    const members = membersOf(i);
    surface[jsPath(i)] = {
      module: m.name,
      static: [...new Set(members.filter(x => x.special === 'static' && x.name).map(x => x.name))],
      // [LegacyUnforgeable] attributes are own properties of each instance, not of the prototype.
      prototype: [...new Set(members.filter(x => x.special !== 'static' && (x.type === 'operation' || x.type === 'attribute') && x.name
        && !extAttr(x, 'LegacyUnforgeable')).map(x => x.name))],
    };
  }
  for (const g of m.globals) surface[g] = { module: m.name, global: true };
  for (const n of m.namespaces) surface[n] = { module: m.name, namespace: [...new Set(def(n).members.filter(exposedToWorkers).map(x => x.name))] };
  for (const g of m.windowGlobals) surface[g] = { module: m.name, global: true };
});
return surface;
};
const surface = surfaceOf(1), browserSurface = surfaceOf(2);
files.set(join(root, 'scripts', 'bindings', 'web-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (@webref/idl ${webrefVersion})`, surface }, null, 2) + '\n');

// The same surface as Lean data for the conformance program's availability probe.
files.set(join(root, 'test', 'fixtures', 'js-web', 'Surface.lean'), `/-
${generatedBy}
The generated surface (scripts/bindings/web-surface.json), for the availability probe of Main.lean.
-/
namespace Surface

/-- \`{path: {static?, prototype?, global?, namespace?}}\` for every generated interface, global and namespace. -/
def json : String := r#"${JSON.stringify(surface)}"#

end Surface
`);
files.set(join(root, 'scripts', 'bindings', 'browser-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (@webref/idl ${webrefVersion})`, surface: browserSurface }, null, 2) + '\n');
files.set(join(root, 'test', 'browser', 'platform', 'Surface.lean'), `/-
${generatedBy}
The browser tier's generated surface (scripts/bindings/browser-surface.json), for the availability probe of Bindings.lean.
-/
namespace Surface

/-- \`{path: {static?, prototype?, global?}}\` for every interface and global of the browser tier. -/
def json : String := r#"${JSON.stringify(browserSurface)}"#

end Surface
`);

let stale = [];
for (const [file, text] of files) {
  const current = existsSync(file) ? readFileSync(file, 'utf8') : null;
  if (current === text) continue;
  if (check) { stale.push(file.slice(root.length)); continue; }
  mkdirSync(dirname(file), { recursive: true });
  writeFileSync(file, text);
  console.log(`wrote ${file.slice(root.length)}`);
}
if (check) {
  const known = new Set([...files.keys()].map(f => f.slice(root.length)));
  for (const name of existsSync(outDir) ? readdirSync(outDir) : []) {
    const rel = join('library', 'Lasm', 'JS', 'Web', name);
    if (name !== 'Support.lean' && !known.has(rel)) stale.push(rel + ' (not generated)');
  }
  if (stale.length) {
    console.error(`Lasm.JS.Web is stale: ${stale.join(', ')}. Run node scripts/bindings/generate-web.mjs and commit the result.`);
    process.exit(1);
  }
  console.log(`Lasm.JS.Web is up to date (@webref/idl ${webrefVersion}).`);
}
