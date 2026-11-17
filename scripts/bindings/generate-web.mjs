// Generates the standard bindings (docs/JS_BINDINGS.md, "Standard bindings"):
//   - Lasm.JS.Web (library/Lasm/JS/Web/*.lean, library/Lasm/JS/Web.lean): the whole web platform, every spec of
//     the pinned @webref/idl (parsed by webidl2) as it is, one module per spec; web-rules.mjs holds only what the
//     IDL cannot say. It also writes library/Lasm/JS/Web/availability.json (web-availability.mjs) for
//     `lasm build --target`'s check;
//   - Lasm.JS.Node (library/Lasm/JS/Node/*.lean, library/Lasm/JS/Node.lean): the
//     Node.js modules of scripts/bindings/node-tier2.mjs, from Node's API docs
//     lowered to WebIDL by scripts/bindings/node-api.mjs (scripts/bindings/node.idl);
//   - Lasm.JS.Deno and Lasm.JS.Bun, from serve-api.mjs's lowering of their declarations.
// One mapping from WebIDL to Lean serves all (docs/BINDING_RULES.md); Lasm.JS.Node, Deno and Bun use
// Lasm.JS.Web's types (URL, AbortSignal, ReadableStream).
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
import * as rules from './web-rules.mjs';
import * as compat from './web-availability.mjs';
import * as nodeTier from './node-tier2.mjs';
import * as serveTier from './serve-tier2.mjs';
import * as cloudflareTier from './cloudflare-tier3.mjs';
import * as overrides from './overrides.mjs';

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
const nodeOutDir = join(root, 'library', 'Lasm', 'JS', 'Node');
const NS = 'Lasm.JS.Web';
const NODE_NS = 'Lasm.JS.Node';
const nodeIdlFile = join(root, 'scripts', 'bindings', 'node.idl');

const fail = message => { throw new Error(`generate-web: ${message}`); };

// The runtimes generated from TypeScript declarations: Lasm.JS.Deno and Lasm.JS.Bun (serve-tier2.mjs),
// Lasm.JS.Cloudflare (cloudflare-tier3.mjs).
const hosts = [...serveTier.hosts, ...cloudflareTier.hosts];
/** What a host's declarations are, for doc comments: `Deno 2.9.6`, `@cloudflare/workers-types 5.20261019.1`. */
const hostSource = h => `${h.npm ?? h.name} ${h.version}`;
// The reviewed override table (scripts/bindings/overrides.json; docs/BINDING_RULES.md), for the
// namespaces this generator writes.
const ov = overrides.forNamespaces([NS, NODE_NS, ...hosts.map(h => `Lasm.JS.${h.name}`)]);

// ---------- reading the IDL ----------

const specTitles = {};
const asts = [];
const defs_reserved = new Set();
// Every spec of webref, read whole (web-rules.mjs excludes none).
const webSpecs = new Set(readdirSync(idlDir).filter(f => f.endsWith('.idl')).map(f => f.slice(0, -4)).filter(s => !rules.excludedSpecs[s]).sort());
for (const s of Object.keys(rules.excludedSpecs)) if (!existsSync(join(idlDir, s + '.idl'))) fail(`web-rules.mjs excludes ${s}, which webref does not have`);
/** Interfaces of excluded specs: known to be interfaces, not generated. */
const otherInterfaces = new Set();
for (const spec of readdirSync(idlDir).filter(f => f.endsWith('.idl')).map(f => f.slice(0, -4)).sort()) {
  const text = readFileSync(join(idlDir, spec + '.idl'), 'utf8');
  const source = /^\/\/ Source: (.*)$/m.exec(text);
  specTitles[spec] = source ? source[1] : spec;
  for (const d of webidl2.parse(text)) {
    if (d.type === 'eof') continue;
    if (webSpecs.has(spec)) { asts.push({ spec, d: JSON.parse(JSON.stringify(d)) }); if (d.name) defs_reserved.add(d.name); continue; }
    if (!d.partial && ['enum', 'dictionary', 'typedef', 'callback', 'callback interface'].includes(d.type)) asts.push({ spec, d: JSON.parse(JSON.stringify(d)) });
    if (!d.partial && d.type === 'interface') otherInterfaces.add(d.name);
  }
}
for (const d of webidl2.parse(rules.syntheticIdl)) asts.push({ spec: 'synthetic', d: JSON.parse(JSON.stringify(d)) });
// Lasm.JS.Node: Node's documented API, lowered to WebIDL (node-api.mjs). Its
// definitions carry their JavaScript module (LasmModule, LasmPath), Lean module
// (LasmLeanModule) and Lean name (LasmNamespace, LasmName) as extended attributes.
const nodeIdl = readFileSync(nodeIdlFile, 'utf8');
for (const d of webidl2.parse(nodeIdl)) {
  if (d.type === 'eof') continue;
  const doc = (d.extAttrs ?? []).find(a => a.name === 'LasmDoc')?.rhs.value.slice(1, -1);
  const spec = 'node-' + (doc ?? 'api');
  specTitles[spec] = `Node.js ${nodeTier.version} documentation${doc ? `, ${doc}.md` : ''}`;
  if (defs_reserved.has(d.name)) fail(`node.idl defines ${d.name}, which a web specification defines too`);
  asts.push({ spec, d: JSON.parse(JSON.stringify(d)) });
}
// Lasm.JS.Deno and Lasm.JS.Bun: the runtimes' HTTP server declarations, lowered to
// WebIDL by serve-api.mjs (deno.idl, bun.idl). Their definitions carry their runtime
// (LasmHost), Lean module (LasmLeanModule), Lean name (LasmName), TypeScript name
// (LasmPath) and declaration file (LasmFile) as extended attributes.
for (const host of hosts) {
  for (const d of webidl2.parse(readFileSync(join(root, 'scripts', 'bindings', `${host.name.toLowerCase()}.idl`), 'utf8'))) {
    if (d.type === 'eof') continue;
    const file = (d.extAttrs ?? []).find(a => a.name === 'LasmFile')?.rhs.value.slice(1, -1);
    const spec = `${host.name.toLowerCase()}-${file ?? 'api'}`;
    specTitles[spec] = `${hostSource(host)} type declarations${file ? `, ${file}` : ''}`;
    if (defs_reserved.has(d.name)) fail(`${host.name.toLowerCase()}.idl defines ${d.name}, which a web specification defines too`);
    asts.push({ spec, d: JSON.parse(JSON.stringify(d)) });
  }
}

const extAttr = (node, name) => node.extAttrs?.find(a => a.name === name);
const unquote = v => typeof v === 'string' && /^".*"$/.test(v) ? v.slice(1, -1) : v;
const extValue = a => !a?.rhs ? undefined : Array.isArray(a.rhs.value) ? a.rhs.value.map(v => unquote(v.value)) : unquote(a.rhs.value);

/** Merged definitions by IDL name. */
const defs = new Map();
const includes = new Map();
/** The spec of each `I includes M` statement: a mixin's own members belong to the spec that includes it. */
const includesSpec = new Map();
for (const { spec, d } of asts) {
  if (d.type === 'includes') {
    if (!includes.has(d.target)) includes.set(d.target, []);
    includes.get(d.target).push(d.includes);
    includesSpec.set(`${d.target} includes ${d.includes}`, spec);
    continue;
  }
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

// Rule A11 (docs/BINDING_RULES.md): a `number` of a source that does not type integers (Node's
// docs, TypeScript declarations, lowered to WebIDL `double`) is an integer when its name is in
// the integer table (overrides.json `integers`): `unsigned long long` (Nat) or `long long` (Int).
// WebIDL from webref types its integers itself and is left as it is.
const webrefSpecs = new Set([...readdirSync(idlDir).filter(f => f.endsWith('.idl')).map(f => f.slice(0, -4)), 'synthetic']);
const narrow = (t, owner, name) => {
  if (!t || t.union || t.generic || !['double', 'unrestricted double'].includes(t.idlType)) return;
  const type = ov.integer(owner, name);
  if (type) Object.assign(t, { narrowedFrom: `${t.idlType} /* integer: ${type} */`, idlType: type === 'Nat' ? 'unsigned long long' : 'long long' });
};
for (const d of defs.values()) {
  if (d.type === 'callback' && d.spec && !webrefSpecs.has(d.spec)) for (const a of d.arguments ?? []) narrow(a.idlType, d.name, a.name);
  for (const m of d.members) {
    if (webrefSpecs.has(m.spec)) continue;
    if (m.type === 'attribute' || m.type === 'field') narrow(m.idlType, d.name, m.name);
    if (m.type === 'operation' || m.type === 'constructor') for (const a of m.arguments) narrow(a.idlType, d.name, a.name);
  }
}

// A dictionary that contains itself (Service Workers' RouterCondition, through `sequence<RouterCondition> _or`)
// would be a recursive Lean structure: the member that closes the cycle is `any` (Data) instead (0.3-14).
{
  const state = new Map(); // dictionary → 'active' | 'done'
  const walk = (t, onType) => {
    if (!t) return;
    if (t.union || t.generic) { for (const x of t.idlType) walk(x, onType); return; }
    if (typeof t.idlType !== 'string') return walk(t.idlType, onType);
    onType(t);
  };
  const visitDict = name => {
    state.set(name, 'active');
    const d = defs.get(name);
    const fields = [];
    for (let x = d; x; x = x.inheritance && defs.get(x.inheritance)) fields.push(...x.members.filter(m => m.type === 'field'));
    const seenTypedefs = new Set();
    const onType = t => {
      const target = defs.get(t.idlType);
      if (!target) return;
      if (target.type === 'typedef' && !seenTypedefs.has(t.idlType)) { seenTypedefs.add(t.idlType); return walk(target.idlType, onType); }
      if (target.type !== 'dictionary') return;
      if (state.get(t.idlType) === 'active') Object.assign(t, { narrowedFrom: `${t.idlType} /* recursive: any */`, idlType: 'any' });
      else if (!state.has(t.idlType)) visitDict(t.idlType);
    };
    for (const f of fields) walk(f.idlType, onType);
    state.set(name, 'done');
  };
  for (const d of [...defs.values()].filter(d => d.type === 'dictionary').sort((a, b) => a.name < b.name ? -1 : 1)) if (!state.has(d.name)) visitDict(d.name);
}

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
  // An all-capitals value (Deno's "SIGTERM", "AAAA") in lower case: sigterm, aaaa.
  if (/^[A-Z][A-Z0-9_]*$/.test(value) && /[A-Z]{2}/.test(value)) return value.toLowerCase().replace(/_+(.)?/g, (_, c) => c ? c.toUpperCase() : '');
  let s = value.replace(/[^A-Za-z0-9]+(.)?/g, (_, c) => c ? c.toUpperCase() : '');
  if (/^[0-9]/.test(s)) s = 'v' + s;
  s = s[0].toLowerCase() + s.slice(1);
  return s;
}
const namespaceOf = d => extValue(extAttr(d, 'LegacyNamespace'));
/** The name a definition is known by: Lasm.JS.Node's LasmName (`Stats` of `Node_fs_Stats`), a rename, or its IDL name. */
function displayName(name) {
  const d = def(name);
  return (d && extValue(extAttr(d, 'LasmName'))) ?? rules.renames[name] ?? name;
}
/** The Lean name (under Lasm.JS.Web or Lasm.JS.Node) of an IDL definition. */
function leanTypeName(name) {
  const d = def(name);
  const base = displayName(name);
  const ns = d && (namespaceOf(d) ?? extValue(extAttr(d, 'LasmNamespace')));
  return ns ? `${ns}.${base}` : base;
}
/** A Node definition's JavaScript module (`node:fs/promises`), else globalThis. */
const jsModuleOf = name => { const d = def(name); return (d && extValue(extAttr(d, 'LasmModule'))) ?? 'globalThis'; };
/** The JavaScript path (from globalThis, or from a Node definition's module) of an interface. */
const jsPath = name => {
  const d = def(name);
  if (d && extAttr(d, 'LasmModule')) return extValue(extAttr(d, 'LasmPath')) ?? fail(`${name} has no LasmPath`);
  // Lasm.JS.Deno and Lasm.JS.Bun: the class's path from globalThis (`Deno.FsFile`).
  if (d && extAttr(d, 'LasmHost') && d.type === 'interface') return extValue(extAttr(d, 'LasmPath'));
  const ns = d && namespaceOf(d); return ns ? `${ns}.${name}` : name;
};
/** A member's name: LasmName where WebIDL reserves it (`toString_`), else its own. */
const memberName = m => extValue(extAttr(m, 'LasmName')) ?? m.name;

// ---------- exposure ----------

/** A definition's or member's `[Exposed]` list (`['Window', 'Worker']`), or null when it inherits its interface's. */
const exposedList = node => { const e = extValue(extAttr(node, 'Exposed')); return e === undefined ? null : Array.isArray(e) ? e : [e]; };

// ---------- modules ----------
// Lasm.JS.Web is the whole web platform of the pinned @webref/idl: one module per spec,
// `Lasm.JS.Web.<Spec>` (UpperCamel of the shortname: `fetch` → Fetch, `hr-time` → HrTime), all in
// namespace Lasm.JS.Web (docs/JS_BINDINGS.md, "Lasm.JS.Web"; docs/api/decisions/0.3.md 0.3-1). A module holds
// its spec's interfaces and namespaces, and the members its partials and mixins add to interfaces of other
// specs (`Navigator.geolocation` is in Geolocation). `Window` is the global object of a page: its members
// (with those of its mixins, WindowOrWorkerGlobalScope's among them) are top-level functions on globalThis
// (`document`, `fetch`), each in the module of the spec that adds it. Specs that name each other in a cycle
// are one module. Lasm.JS.Node, Deno and Bun come after, and use its types.
// One context for all: every generated interface is visible to every module (ctxTier is 2: WindowProxy is
// Window). ctxExt is whether the module is outside Lasm.JS.Web, whose unions are its own.
let ctxTier = 2;
let ctxExt = false;
const inTier = (t, f, ext = ctxExt) => {
  const saved = [ctxTier, ctxExt]; ctxTier = t; ctxExt = ext;
  try { return f(); } finally { [ctxTier, ctxExt] = saved; }
};
/** Whether a module is outside Lasm.JS.Web. */
const extModule = key => nsOf(key) !== NS;
/** Runs `f` in the context of module `key`. */
const inModule = (key, f) => inTier(2, f, extModule(key));
/** Runs `f` in the context of the module that owns the supporting type `key` (or the current one). */
const inOwner = (key, f) => moduleOfType.has(key) ? inTier(2, f, extModule(moduleOfType.get(key))) : f();
// Lasm.JS.Node's modules: its members are its node.idl definitions marked with its LasmLeanModule.
const nodeDefs = [...defs.values()].filter(d => extAttr(d, 'LasmLeanModule') && !extAttr(d, 'LasmHost'));
const nodeModules = nodeTier.modules.map(m => {
  const mine = nodeDefs.filter(d => extValue(extAttr(d, 'LasmLeanModule')) === m.name);
  return { name: m.name, title: m.title, specs: `Node.js ${nodeTier.version} documentation, ${m.doc}.md`, tier: 2, ns: NODE_NS, key: `${NODE_NS}.${m.name}`,
    interfaces: mine.filter(d => d.type === 'interface').map(d => d.name), namespaces: mine.filter(d => d.type === 'namespace').map(d => d.name) };
});
// Lasm.JS.Deno and Lasm.JS.Bun (serve-tier2.mjs): their IDL's definitions marked with their LasmHost and LasmLeanModule.
const hostOf = d => extValue(extAttr(d, 'LasmHost'));
const hostModules = hosts.flatMap(h => h.modules.map(m => {
  const mine = [...defs.values()].filter(d => hostOf(d) === h.name && extValue(extAttr(d, 'LasmLeanModule')) === m.name);
  return { name: m.name, title: m.title, specs: `${hostSource(h)} type declarations`, tier: 2, ns: `Lasm.JS.${h.name}`, key: `Lasm.JS.${h.name}.${m.name}`,
    host: h, interfaces: mine.filter(d => d.type === 'interface').map(d => d.name), namespaces: mine.filter(d => d.type === 'namespace').map(d => d.name),
    // Lasm.JS.Cloudflare: every selected dictionary, callback and enum is generated, also one no member names
    // (ExportedHandler and its handlers, which a program passes to Lasm.JS.exportDefault).
    extraTypes: h.rich ? mine.filter(d => ['dictionary', 'callback', 'enum'].includes(d.type)).map(d => d.name) : undefined };
}));
const allModules = [...nodeModules, ...hostModules];
const moduleTier = new Map(allModules.map(m => [m.key, 2]));
if (moduleTier.size !== allModules.length) fail('two modules share a name');
const moduleNs = new Map(allModules.map(m => [m.key, m.ns]));
/** A module's Lean namespace. */
const nsOf = key => moduleNs.get(key) ?? key.slice(0, key.lastIndexOf('.'));
/** The first components of Lasm.JS.Node's names (`path` of `path.PathObject`, `fsPromises`). */
const nodeNamespaces = new Set(nodeDefs.flatMap(d => [extValue(extAttr(d, 'LasmNamespace')), d.type === 'namespace' ? extValue(extAttr(d, 'LasmName')) : null]).filter(Boolean));

const selectedInterfaces = new Map(); // IDL name → module key
const moduleOfType = new Map();       // IDL name or union key → module key
for (const m of allModules) for (const name of m.interfaces ?? []) {
  const d = def(name);
  if (!d || d.type !== 'interface') fail(`interface ${name} not found`);
  selectedInterfaces.set(name, m.key);
  moduleOfType.set(name, m.key);
}
for (const m of allModules) for (const n of m.namespaces ?? []) if (!def(n) || def(n).type !== 'namespace') fail(`namespace ${n} not found`);
const tierOfKey = () => 2;
/** Whether an interface is generated. */
const visibleInterface = n => selectedInterfaces.has(n);
/** The spec of a web definition or member, for its module (rules.syntheticIdl's are the WebAssembly JS API's). */
const specOfMember = spec => spec === 'synthetic' ? 'wasm-js-api' : spec;
const specModuleName = spec => rules.moduleNames[spec] ?? spec.split(/[^A-Za-z0-9]+/).filter(Boolean).map(capital).join('');
const webModules = new Map(); // key → module
const mergedInto = new Map(); // a module merged into another (a cycle) → that one
function webModuleOf(spec) {
  spec = specOfMember(spec);
  if (!webSpecs.has(spec)) fail(`no web module for spec ${spec}`);
  let key = `${NS}.${specModuleName(spec)}`;
  while (mergedInto.has(key)) key = mergedInto.get(key);
  if (!webModules.has(key)) {
    webModules.set(key, { name: key.slice(NS.length + 1), key, tier: 2, ns: NS, specSet: new Set(),
      interfaces: [], contributions: [], globalMembers: [], nsMembers: [] });
    moduleTier.set(key, 2);
    moduleNs.set(key, NS);
  }
  const m = webModules.get(key);
  if (m.specSet.size && !m.specSet.has(spec) && ![...m.specSet].every(s => specModuleName(s) === specModuleName(spec))) fail(`specs ${[...m.specSet]} and ${spec} share the module name ${key}`);
  m.specSet.add(spec);
  return key;
}
// Every interface the web specs define, in its spec's module.
for (const d of [...defs.values()].filter(d => d.type === 'interface' && !d.partialOnly && d.spec && webSpecs.has(specOfMember(d.spec))
  && !rules.excludedInterfaces[d.name]).sort((a, b) => a.name < b.name ? -1 : 1)) {
  const key = webModuleOf(d.spec);
  webModules.get(key).interfaces.push(d.name);
  selectedInterfaces.set(d.name, key);
  moduleOfType.set(d.name, key);
}
for (const n of Object.keys(rules.excludedInterfaces)) if (!def(n)) fail(`web-rules.mjs excludes ${n}, which no spec defines`);
/** Window, whose members are the page's globals (top-level functions), not methods of its handle. */
const GLOBAL = 'Window';
// Lasm.JS.Web.Types: the handle type of every web interface (a structure over a Value, with its instances), so
// that a spec's module needs no other spec's module to name its interfaces; the specs name each other's
// interfaces everywhere (DOM and HTML, HTML and WebCodecs, Fetch and Streams), never so each other's dictionaries.
const TYPES = `${NS}.Types`;
moduleTier.set(TYPES, 2);
moduleNs.set(TYPES, NS);
const isWebInterface = n => nsOf(selectedInterfaces.get(n) ?? '') === NS;
for (const [n, k] of selectedInterfaces) if (isWebInterface(n)) moduleOfType.set(n, TYPES);
/** The types module of a web spec's enum (`Lasm.JS.Web.Types.Fetch` for RequestCredentials), or null. */
function enumOwner(name) {
  const d = def(name);
  return d && d.spec && !d.partialOnly && webSpecs.has(specOfMember(d.spec)) ? `${NS}.Types.${webModules.get(webModuleOf(d.spec)).name}` : null;
}
/** The module of a supporting type (dictionary, enum, callback, typedef'd union) a web spec defines, or null. */
function definedOwner(name) {
  const d = def(name);
  // Enums name nothing, so they go to the first module that uses one (which never makes a cycle).
  return d && d.spec && !d.partialOnly && webSpecs.has(specOfMember(d.spec)) && !['interface', 'namespace', 'enum', 'interface mixin'].includes(d.type) ? webModuleOf(d.spec) : null;
}

const promiseOfUndefined = JSON.parse(JSON.stringify(webidl2.parse('interface X { Promise<undefined> f(); };')[0].members[0].idlType));

/** Members of an interface: its own (and partials'), then its mixins'. */
function allMembersOf(name) {
  const d = def(name);
  const members = [...d.members];
  for (const mixin of includes.get(name) ?? []) {
    const md = def(mixin);
    if (!md) fail(`mixin ${mixin} not found`);
    // The mixin's own members are added by the spec of the `includes` statement (LinkStyle's `sheet` on
    // HTMLStyleElement, by HTML); a partial mixin's members by the partial's spec.
    const by = includesSpec.get(`${name} includes ${mixin}`);
    members.push(...md.members.map(m => m.spec === md.spec && by ? { ...m, spec: by } : m));
  }
  // The same member declared by two specs (CaptureController's constructor, in Screen Capture and in a spec
  // that extends it) is one member: the first declaration, its own interface's spec before partials.
  const own = members.filter(m => m.spec === d.spec), rest = members.filter(m => m.spec !== d.spec);
  const seen = new Set();
  return [...own, ...rest].filter(m => {
    // An overload named by its constant argument (LasmOverloadName, Lasm.JS.Cloudflare's `get(key, 'arrayBuffer')`) is its own member.
    const key = `${m.type} ${m.special ?? ''} ${m.name ?? ''}(${(m.arguments ?? []).map(a => idlText(a.idlType)).join(',')}) ${extValue(extAttr(m, 'LasmOverloadName')) ?? ''}`;
    if (m.type !== 'const' && seen.has(key)) return false;
    seen.add(key);
    return !rules.excludedMembers[`${name}.${m.name}`];
  });
}
/** The module that generates member `m` of interface `name`: its spec's, for a web interface. */
function memberModule(name, m) {
  const home = selectedInterfaces.get(name);
  return nsOf(home) === NS ? webModuleOf(m.spec) : home;
}
/**
 * Members of an interface, all of them (every exposure: each carries its `[Exposed]` in its doc comment).
 * With `module`, only the members that module generates (a spec's partials go to the spec's module).
 */
function membersOf(name, module = null) {
  let members = allMembersOf(name);
  if (module) members = members.filter(m => memberModule(name, m) === module);
  // Operations the specs type as returning a promise that the engines do not return (scrollIntoView):
  // read as Promise<undefined>, which awaits either (web-rules.mjs, undefinedPromises).
  return members.map(m => m.type === 'operation' && rules.undefinedPromises.includes(`${name}.${m.name}`)
    ? { ...m, specIdlType: m.idlType, idlType: promiseOfUndefined } : m);
}

// What each web module adds to interfaces of other modules, its globals and its namespaces' members.
for (const [name, home] of [...selectedInterfaces]) {
  if (nsOf(home) !== NS) continue;
  // Window's members are also globals: top-level functions on globalThis (`document`), beside the methods of a
  // Window handle (another window: an iframe's `contentWindow`, `window.open`'s result).
  if (name === GLOBAL) for (const m of membersOf(name)) if (m.name) webModules.get(memberModule(name, m)).globalMembers.push(m);
  const by = new Set();
  for (const m of membersOf(name)) { const key = memberModule(name, m); if (key !== home) by.add(key); }
  for (const key of [...by].sort()) webModules.get(key).contributions.push(name);
}
for (const d of [...defs.values()].filter(d => d.type === 'namespace' && d.spec && webSpecs.has(specOfMember(d.spec)))) {
  for (const m of d.members.filter(m => m.name)) {
    const wm = webModules.get(webModuleOf(m.spec));
    let entry = wm.nsMembers.find(e => e.ns === d.name);
    if (!entry) wm.nsMembers.push(entry = { ns: d.name, members: [] });
    entry.members.push(m);
  }
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
  else s = t.narrowedFrom ?? idlText(t.idlType);
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
  n = rules.aliases[n] ?? n;
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
    // LasmTypeParameter (Lasm.JS.Cloudflare's Env): a type the program declares, a Lean type
    // parameter read with its FromJS (typeBinders).
    if (extAttr(d, 'LasmTypeParameter')) { const p = extValue(extAttr(d, 'LasmTypeParameter')); return { k: 'prim', lean: p, idl: n, typeParam: p }; }
    if (d.idlType.union) return makeUnion(d.idlType.idlType, n, d.idlType.nullable);
    return resolve(d.idlType);
  default: return { k: 'unknown', idl: n };
  }
}
/** The Lean type parameters (LasmTypeParameter) that resolved types mention, as implicit
 * binders read with FromJS: ` {Env : Type} [FromJS Env]`. */
function typeBinders(...ts) {
  const ps = new Set(ts.flatMap(function tp(t) { return !t ? [] : t.typeParam ? [t.typeParam] : t.inner ? tp(t.inner) : []; }));
  return [...ps].map(p => ` {${p} : Type} [FromJS ${p}]`).join('');
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
  return lowerName(displayName(n));
}
function typeKeyName(t) {
  if (t.nullable) return 'Nullable' + typeKeyName({ ...t, nullable: false });
  if (t.generic === 'sequence' || t.generic === 'FrozenArray') return 'SequenceOf' + typeKeyName(t.idlType[0]);
  if (t.generic === 'record') return 'RecordOf' + typeKeyName(t.idlType[1]);
  if (t.generic === 'Promise') return 'PromiseOf' + typeKeyName(t.idlType[0]);
  if (t.union) return t.idlType.map(typeKeyName).join('Or');
  return displayName(t.idlType).split(' ').map(capital).join('');
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
    let key = (browserOnly ? 'browser:' : '') + (typedefName ?? flat.alts.map(idlText).join('|'));
    // Lasm.JS.Web never uses a union of Lasm.JS.Node's or Deno's or Bun's (another namespace): it makes its own.
    if (!ctxExt && unions.get(key)?.ext) key = 'web:' + key;
    if (!unions.has(key)) {
      // A host's union typedef (Lasm.JS.Cloudflare's) is named by LasmName, in the host's namespace.
      const hostTypedef = typedefName && def(typedefName) && hostOf(def(typedefName));
      let name = typedefName ? (rules.renames[typedefName] ?? (hostTypedef ? displayName(typedefName) : typedefName)) : flat.alts.map(typeKeyName).join('Or');
      // A union of a Lasm.JS.Node dictionary or class in a namespace lives in that namespace
      // (`fsPromises.ReadFileOptionsOrDOMString` beside `FileHandle.ReadFileOptionsOrDOMString`).
      const home = flat.alts.map(t => !t.union && !t.generic && def(t.idlType) && extValue(extAttr(def(t.idlType), 'LasmNamespace'))).find(Boolean);
      if (home) name = `${home}.${name}`;
      const same = [...unions.values()].find(o => o.name === name && o.ext === ctxExt && (o.host ?? null) === (hostTypedef || null));
      // The rest of the browser platform (tier 3) takes the union tiers 1 and 2 already generate under the
      // name (where those tiers resolved a member it sees as an interface as Value): one type per name.
      // Two IDL unions with one Lean shape (`double or sequence<double>` and its `unrestricted` twin) are one type.
      if (same && same.alts.length === resolved.length && same.alts.every((x, i) => argType(x.t) === argType(resolved[i]))) {
        unions.set(key, same);
        r = { k: 'union', key: same.key };
        return (flat.nullable || outerNullable) && r.k !== 'nullable' ? { k: 'nullable', inner: r } : r;
      }
      if (same) fail(`two unions are named ${name}: ${same.key} [${same.alts.map(x => argType(x.t))}] and ${key} [${resolved.map(argType)}]`);
      const u = { key, name, alts: [], typedef: typedefName, ext: ctxExt, host: hostTypedef || null };
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
  // A bigint is told apart from a number (Lean's Data has both).
  case 'prim': return t.idl === 'bigint' ? 'bigint' : { String: 'string', Bool: 'bool', Int: 'number', Nat: 'number', Float: 'number', ByteArray: 'bytes', Value: 'ref', Data: 'any', Unit: 'any' }[t.lean];
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
  // A union read back as Value or Data has no FromJS of its own type (a dictionary holding one is not readable).
  case 'union': return ['fromjs', 'decode'].includes(unionRead(unions.get(t.key)));
  default: return true;
  }
}
const dictReadableMemo = new Map();
function dictReadable(name) {
  if (dictReadableMemo.has(name)) return dictReadableMemo.get(name);
  dictReadableMemo.set(name, false);
  const ok = inOwner(name, () => dictFields(name).every(f => { const t = resolve(f.idlType); return readable(t) && !needsPost(t); }));
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
  // A nullable ArrayBuffer is read as data: a reference-mode result (Value) is a reference
  // for null too, so Option Value is never none.
  case 'nullable': return t.inner.k === 'arraybuffer' ? 'Data' : needsPost(t.inner) ? `Option ${paren(reqType(t.inner))}` : retType(t);
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
  case 'nullable': if (t.inner.k === 'arraybuffer') return 'Support.nullableArrayBufferBytes';
    return `(fun x => x.mapM ${postFn(t.inner)})`;
  case 'seq': return `(fun x => x.mapM ${postFn(t.inner)})`;
  case 'union': return `${unions.get(t.key).name}.decode`;
  }
}
/** Lean expression (pure) converting `v` of argType(t) to Data. */
// Lasm.JS.Deno and Lasm.JS.Bun: a `bigint` argument is a JavaScript bigint whatever its size (Deno KV's KvU64, Bun's
// hashes and seeds reject numbers), where Lasm.JS's `toJS` of an Int gives a number below 2^53.
const toData = (t, v) => t.k === 'prim' && t.idl === 'bigint' && emittingHost ? `(Data.bigint ${v})` : `toJS ${v}`;

// ---------- usage: which declarations each module needs ----------

const needTo = new Set(), needFrom = new Set(); // type keys (dict/union names)
const typeKey = t => t.k === 'union' ? 'union:' + t.key : t.k === 'dict' || t.k === 'enum' || t.k === 'callback' || t.k === 'iface' ? t.name : null;

function visit(t, mode, module) {
  if (!t) return;
  if (t.k === 'nullable' || t.k === 'seq' || t.k === 'record' || t.k === 'promise') return visit(t.inner, t.k === 'promise' && mode === 'to' ? 'none' : mode, module);
  const key = typeKey(t);
  if (!key) return;
  const first = !moduleOfType.has(key);
  // A web spec's dictionary, enum, callback or typedef'd union lives in that spec's module; an inline union in
  // the first module that uses it.
  if (first) moduleOfType.set(key, (t.k === 'union' ? unions.get(t.key).typedef && !ctxExt && definedOwner(unions.get(t.key).typedef)
    : t.k === 'enum' ? enumOwner(t.name) : t.k !== 'iface' && definedOwner(t.name)) || module);
  if (mode === 'to') { if (needTo.has(key)) return; needTo.add(key); }
  else if (mode === 'from') { if (needFrom.has(key)) return; needFrom.add(key); }
  else if (!first) return;
  const owner = moduleOfType.get(key);
  inTier(2, () => {
    if (t.k === 'dict') for (const f of dictFields(t.name)) visit(resolve(f.idlType), mode, owner);
    if (t.k === 'union') for (const a of unions.get(t.key).alts) visit(a.t, mode, owner);
    if (t.k === 'callback') {
      // A callback handle is made from a Lean function: its arguments are read, its result written.
      const c = callbackSignature(t.name);
      for (const a of c.args) visit(resolve(a.idlType), 'from', owner);
      // A promise the Lean function returns is resolved with its value, written to JavaScript.
      visit(c.ret.k === 'promise' ? c.ret.inner : c.ret, 'to', owner);
      needTo.add(key); needFrom.add(key);
    }
  }, extModule(owner));
}
function callbackSignature(name) {
  const d = def(name);
  if (d.type === 'callback') return { args: d.arguments, ret: resolve(d.idlType), idl: d };
  const op = d.members.find(m => m.type === 'operation');
  return { args: op.arguments, ret: resolve(op.idlType), idl: op };
}

// ---------- module order ----------

// The interfaces a type names, through dictionaries, typedefs, unions and callbacks (not through interfaces).
function namedInterfaces(t, out, seen = new Set()) {
  if (!t) return;
  if (t.union || t.generic) { for (const x of t.idlType) namedInterfaces(x, out, seen); return; }
  if (typeof t.idlType !== 'string') return namedInterfaces(t.idlType, out, seen);
  const n = rules.aliases[t.idlType] ?? t.idlType;
  if (seen.has(n)) return;
  seen.add(n);
  const d = def(n);
  if (!d) return;
  if (d.type === 'interface') out.add(n);
  else if (d.type === 'dictionary') for (const f of dictFields(n)) namedInterfaces(f.idlType, out, seen);
  else if (d.type === 'typedef') namedInterfaces(d.idlType, out, seen);
  else if (d.type === 'callback') { namedInterfaces(d.idlType, out, seen); for (const a of d.arguments) namedInterfaces(a.idlType, out, seen); }
  else if (d.type === 'callback interface') for (const op of d.members.filter(x => x.type === 'operation')) {
    namedInterfaces(op.idlType, out, seen); for (const a of op.arguments) namedInterfaces(a.idlType, out, seen);
  }
}
/** The alternatives of a union type, through typedefs (null when `t` is not a union). */
function unionAlternatives(t) {
  if (t.generic) return null;
  if (t.union) return t.idlType.flatMap(x => unionAlternatives(x) ?? [x]);
  const d = typeof t.idlType === 'string' && def(t.idlType);
  return d?.type === 'typedef' ? unionAlternatives(d.idlType) : null;
}
const memberInterfaces = (m, out) => {
  // A result union of interfaces only (OffscreenCanvas.getContext's contexts) is read back as a Value.
  const alts = m.idlType && m.type !== 'constructor' && unionAlternatives(m.idlType.generic === 'Promise' ? m.idlType.idlType[0] : m.idlType);
  const valueRead = alts && alts.every(x => !x.generic && !x.union && def(x.idlType)?.type === 'interface');
  if (m.idlType && !valueRead) namedInterfaces(m.idlType, out);
  for (const a of m.arguments ?? []) namedInterfaces(a.idlType, out);
};
/** The web modules owning the supporting types a type names directly (an inline union's alternatives too). */
function typeOwners(t, out, inUnion = false) {
  if (!t) return;
  if (t.union) { for (const x of t.idlType) typeOwners(x, out, true); return; }
  if (t.generic) { for (const x of t.idlType) typeOwners(x, out); return; }
  if (typeof t.idlType !== 'string') return typeOwners(t.idlType, out, inUnion);
  const d = def(t.idlType);
  if (!d || d.type === 'interface') return;
  // A typedef'd union inside a union is spliced into it; a typedef of anything else is its type.
  if (d.type === 'typedef' && (inUnion || !d.idlType.union)) return typeOwners(d.idlType, out, inUnion);
  const o = definedOwner(t.idlType);
  if (o) out.add(o);
}
/** The supporting types a type refers to inside its own definition. */
function definitionTypes(name) {
  const d = def(name);
  if (d.type === 'dictionary') return dictFields(name).map(f => f.idlType);
  if (d.type === 'typedef') return [d.idlType];
  if (d.type === 'callback') return [d.idlType, ...d.arguments.map(a => a.idlType)];
  if (d.type === 'callback interface') return d.members.filter(x => x.type === 'operation').flatMap(op => [op.idlType, ...op.arguments.map(a => a.idlType)]);
  return [];
}
const memberTypes = m => [...(Array.isArray(m.idlType) ? m.idlType : [m.idlType]), ...(m.arguments ?? []).map(a => a.idlType)].filter(Boolean);
/** The other web modules a web module's declarations need. */
function webDeps(wm) {
  const owners = new Set();
  const add = t => typeOwners(t, owners);
  for (const i of wm.interfaces) for (const m of membersOf(i, wm.key)) memberTypes(m).forEach(add);
  for (const i of wm.contributions) for (const m of membersOf(i, wm.key)) memberTypes(m).forEach(add);
  for (const m of wm.globalMembers) memberTypes(m).forEach(add);
  for (const e of wm.nsMembers) for (const m of e.members) memberTypes(m).forEach(add);
  // The supporting types the module's specs define, with what they name.
  for (const d of defs.values()) if (definedOwner(d.name) === wm.key) definitionTypes(d.name).forEach(add);
  owners.delete(wm.key);
  return owners;
}
// Every spec that defines a supporting type has its module (it may hold only those).
for (const d of [...defs.values()]) { definedOwner(d.name); if (d.type === 'enum' && d.spec && webSpecs.has(specOfMember(d.spec))) webModuleOf(d.spec); }
// Cycles (Tarjan's strongly connected components) are merged into one module, named after its specs.
for (;;) {
  const keys = [...webModules.keys()].sort();
  const deps = new Map(keys.map(k => [k, [...webDeps(webModules.get(k))].sort()]));
  let index = 0; const idx = new Map(), low = new Map(), stack = [], on = new Set(), sccs = [];
  const strong = v => {
    idx.set(v, index); low.set(v, index); index++; stack.push(v); on.add(v);
    for (const w of deps.get(v)) {
      if (!idx.has(w)) { strong(w); low.set(v, Math.min(low.get(v), low.get(w))); }
      else if (on.has(w)) low.set(v, Math.min(low.get(v), idx.get(w)));
    }
    if (low.get(v) === idx.get(v)) { const c = []; let w; do { w = stack.pop(); on.delete(w); c.push(w); } while (w !== v); sccs.push(c); }
  };
  for (const k of keys) if (!idx.has(k)) strong(k);
  const cycles = sccs.filter(c => c.length > 1);
  if (process.env.LASM_CYCLES) for (const c of cycles) console.error(`cycle: ${c.join(' ')}`);
  if (!cycles.length) {
    // Tarjan emits components dependencies first: that is the module order, before Lasm.JS.Node, Deno and Bun.
    const ordered = sccs.map(c => webModules.get(c[0]));
    for (const m of ordered) {
      const specs = [...m.specSet].sort();
      Object.assign(m, { title: specs.join(', '), specs: specs.map(x => specTitles[x]).join('; ') });
      // A parent interface before its children (the Lean structure extends it).
      const depth = n => { const p = def(n).inheritance; return p && m.interfaces.includes(p) ? 1 + depth(p) : 0; };
      m.interfaces.sort((a, b) => depth(a) - depth(b) || (a < b ? -1 : 1));
    }
    // The handle types, one module per spec module (`Lasm.JS.Web.Types.Fetch`), so a program links only the handle
    // types of the specs it imports; each imports only its parents' (inheritance is acyclic), ordered by it.
    const typesOf = new Map();
    for (const m of ordered) for (const i of m.interfaces) typesOf.set(i, `${NS}.Types.${m.name}`);
    // A spec's enums are there too: they name nothing, so the types modules stay acyclic.
    const hasEnum = new Set([...defs.values()].filter(d => d.type === 'enum' && d.spec && webSpecs.has(specOfMember(d.spec))).map(d => webModuleOf(d.spec)));
    const typeModules = [...new Set(ordered.filter(m => m.interfaces.length || hasEnum.has(m.key)).map(m => `${NS}.Types.${m.name}`))];
    const typeDeps = new Map(typeModules.map(k => [k, new Set()]));
    for (const [i, k] of typesOf) { const p = def(i).inheritance; if (p && typesOf.has(p) && typesOf.get(p) !== k) typeDeps.get(k).add(typesOf.get(p)); }
    const sortedTypes = [], state = new Map();
    const place = k => {
      if (state.get(k) === 'done') return;
      if (state.get(k) === 'active') fail(`the handle types of ${k} and its parents' form a cycle`);
      state.set(k, 'active'); for (const d of [...typeDeps.get(k)].sort()) place(d); state.set(k, 'done'); sortedTypes.push(k);
    };
    for (const k of typeModules) place(k);
    for (const k of sortedTypes) { moduleTier.set(k, 2); moduleNs.set(k, NS); }
    for (const [i, k] of typesOf) moduleOfType.set(i, k);
    allModules.unshift(...sortedTypes.map(k => ({ name: k.slice(NS.length + 1), key: k, tier: 2, ns: NS, typesFor: k.slice(NS.length + 7),
      title: `the handle types of ${k.slice(NS.length + 7)}'s interfaces`, specs: webModules.get(`${NS}.${k.slice(NS.length + 7)}`).specs, interfaces: [] })), ...ordered);
    break;
  }
  for (const c of cycles) {
    const members = c.map(k => webModules.get(k)).sort((a, b) => a.key < b.key ? -1 : 1);
    const name = members.map(m => m.name).join('And');
    const merged = { name, key: `${NS}.${name}`, tier: 2, ns: NS, specSet: new Set(members.flatMap(m => [...m.specSet])),
      interfaces: members.flatMap(m => m.interfaces), contributions: [...new Set(members.flatMap(m => m.contributions))].sort(),
      globalMembers: members.flatMap(m => m.globalMembers), nsMembers: [] };
    for (const m of members) for (const e of m.nsMembers) {
      const found = merged.nsMembers.find(x => x.ns === e.ns);
      if (found) found.members.push(...e.members); else merged.nsMembers.push({ ns: e.ns, members: [...e.members] });
    }
    merged.contributions = merged.contributions.filter(i => !merged.interfaces.includes(i));
    for (const m of members) { webModules.delete(m.key); mergedInto.set(m.key, merged.key); }
    webModules.set(merged.key, merged);
    moduleTier.set(merged.key, 2); moduleNs.set(merged.key, NS);
    for (const i of merged.interfaces) selectedInterfaces.set(i, merged.key);
  }
}

// The members to generate, per module.
const planEntry = m => ({ ...m, ifaces: m.interfaces ?? [], namespaces: m.namespaces ?? [],
  contributions: m.contributions ?? [], globalMembers: m.globalMembers ?? [], nsMembers: m.nsMembers ?? [] });
const plan = allModules.map(planEntry);
const promiseRet = t => t.k === 'promise';
function visitMember(m, module) {
  if (m.type === 'operation' || m.type === 'constructor') {
    for (const a of m.arguments) visit(resolve(a.idlType), 'to', module);
    if (m.idlType) { const r = resolve(m.idlType); visit(promiseRet(r) ? r.inner : r, 'from', module); }
  } else if (m.type === 'attribute') {
    const r = resolve(m.idlType);
    visit(promiseRet(r) ? r.inner : r, 'from', module);
    if (!m.readonly) visit(r, 'to', module);
  } else if (m.type === 'iterable' && (!m.async || /^(deno|bun)-/.test(m.spec ?? ''))) {
    for (const t of m.idlType) visit(resolve(t), 'from', module);
  }
}
for (const m of plan) inModule(m.key, () => {
  for (const i of m.ifaces) {
    const d = def(i);
    if (d.inheritance && selectedInterfaces.has(d.inheritance)) visit({ k: 'iface', name: d.inheritance }, 'none', m.key);
    for (const mem of membersOf(i, m.key)) visitMember(mem, m.key);
  }
  for (const i of m.contributions) {
    visit({ k: 'iface', name: i }, 'none', m.key);
    for (const mem of membersOf(i, m.key)) visitMember(mem, m.key);
  }
  for (const x of m.extraTypes ?? []) {
    const d = def(x);
    if (!d) fail(`extra type ${x} not found`);
    if (m.host && moduleOfType.has(x)) continue;
    visit(resolveName(x), 'to', m.key);
  }
  for (const mem of m.globalMembers) visitMember(mem, m.key);
  for (const e of m.nsMembers) for (const mem of e.members) visitMember(mem, m.key);
  // Lasm.JS.Node's, Deno's and Bun's namespaces.
  for (const n of m.namespaces) for (const mem of def(n).members) visitMember(mem, m.key);
  // Every dictionary, callback and enum a spec defines, used by a member or not: specs take some through `object`
  // arguments in prose (Streams' UnderlyingSource, Web Crypto's algorithm dictionaries). Written to JavaScript.
  if (nsOf(m.key) === NS && !m.typesFor) for (const d of defs.values())
    if (definedOwner(d.name) === m.key && ['dictionary', 'callback', 'callback interface', 'enum'].includes(d.type)
      || d.type === 'enum' && d.spec && webSpecs.has(specOfMember(d.spec)) && webModuleOf(d.spec) === m.key) visit(resolveName(d.name), 'to', m.key);
});


// ---------- emitting ----------

const order = plan.map(m => m.key);
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
    if (!extModule(module) && extModule(owner)) fail(`${module} uses ${key} of ${owner}, outside Lasm.JS.Web`);
    out.get(module).imports.add(owner);
  }
}

/** Lasm.JS.Deno's and Lasm.JS.Bun's IDL names (`Deno_HttpServer`) as their Lean names, in doc comments. */
const hostDoc = s => s.replace(/\b(?:Deno|Bun|Cloudflare)_[A-Za-z0-9_]+/g, n => def(n) ? leanTypeName(n) : n);
const docText = s => s.replace(/-\//g, '- /').replace(/\b(?:Node|Deno|Bun|Cloudflare)_[A-Za-z0-9_]+/g, n => def(n) ? leanTypeName(n) : n);
const memberIdl = (m, owner) => {
  const args = a => a.map(x => `${x.optional ? 'optional ' : ''}${idlText(x.idlType)}${x.variadic ? '...' : ''} ${x.name}`).join(', ');
  switch (m.type) {
  case 'constructor': return `constructor(${args(m.arguments)})`;
  case 'operation': return `${m.special ? m.special + ' ' : ''}${idlText(m.specIdlType ?? m.idlType)} ${memberName(m)}(${args(m.arguments)})`;
  case 'attribute': return `${m.special ? m.special + ' ' : ''}${m.readonly ? 'readonly ' : ''}attribute ${idlText(m.idlType)} ${m.name}`;
  default: return `${m.type} ${owner}`;
  }
};
/** A Lasm.JS.Node member's documented signature (LasmSignature), quoted before its WebIDL. */
const nodeSignature = m => {
  const sig = extValue(extAttr(m, 'LasmSignature')), added = extValue(extAttr(m, 'LasmAdded'));
  return sig ? `\`${sig}\`${added ? ` (added in Node.js ${added})` : ''}: ` : '';
};
const specOf = spec => spec === 'synthetic' ? 'written for Lasm (docs/JS_BINDINGS.md)' : specTitles[spec];

// Arguments: Lean binders and the JavaScript argument array.
function argumentList(args, module = null) {
  const binders = [], values = [], pre = [];
  let rest = null;
  // In Lasm.JS.Node, an argument named like a namespace (`path`, `crypto`) would hide it in the signature.
  const names = new Set(['self', ...(module && nsOf(module) === NODE_NS ? nodeNamespaces : [])]);
  for (const a of args) {
    // LasmConstant (Lasm.JS.Cloudflare): an argument of one string literal type, passed as that string.
    const constant = extValue(extAttr(a, 'LasmConstant'));
    if (constant !== undefined) { values.push(`toJS ${JSON.stringify(constant)}`); continue; }
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
    } else if (otherView(t) && !['BufferSource', 'ArrayBufferView', 'AllowSharedBufferSource'].includes(t.idl)) {
      // A typed array other than Uint8Array (ImageData's Uint8ClampedArray): made from the bytes in JavaScript.
      binders.push(`(${id(name)} : ByteArray)`);
      pre.push(`let ${name}View ← Support.typedArray "${t.idl}" ${id(name)}`);
      values.push(`.ref ${name}View ""`);
    } else { binders.push(`(${id(name)} : ${argType(t)})`); values.push(toData(t, id(name))); }
  }
  const array = `#[${values.join(', ')}]`;
  return { binders: binders.join(' '), args: rest ? `(Support.argsWith ${array} ${rest})` : `(Support.args ${array})`, arity: args.length, pre };
}
/** A definition's right-hand side (after `:=`) with the argument conversions that need IO (`pre`) first. */
function withPre(al, rhs) {
  if (!al.pre.length) return rhs;
  return ` do\n  ${al.pre.join('\n  ')}\n  ${rhs.trimStart().replace(/^do\n {2}/, '')}`;
}

/** The result: Lean type, and how to finish a host call that requested reqType. */
function resultOf(idlType, member = null) {
  const r = resolve(idlType);
  const async = promiseRet(r);
  const t = async ? r.inner : r;
  const lean = retType(t);
  // LasmMap (Lasm.JS.Cloudflare): a JavaScript Map, read as a record (Lasm.JS.Cloudflare.Support.mapOf).
  if (member && extAttr(member, 'LasmMap')) {
    if (t.k !== 'record' || needsPost(t.inner)) fail(`${member.name}: LasmMap on a result that is not a record`);
    return { async, t, lean, req: 'Value', post: `Support.mapOf ${paren(retType(t.inner))}` };
  }
  // A program-declared type (LasmTypeParameter, Workers' Env) is read as data and decoded with
  // its FromJS; an object that is not plain is copied first (Support.declared).
  if (t.typeParam) return { async, t, lean, req: 'Data', post: `Support.declared ${t.typeParam}` };
  // An interface result is read as a reference and wrapped: some runtimes return
  // plain objects for interface instances (Bun's navigator), which data would copy.
  if (t.k === 'iface') return { async, t, lean, req: 'Value', post: 'wrap' };
  // A nullable result read as a Value (getContext's RenderingContext?, a union of interfaces)
  // is requested as data: a reference-mode result is a reference for null too, so
  // Option Value would never be none. Data mode makes an object a reference and null null.
  if (t.k === 'nullable' && retType(t.inner) === 'Value') return { async, t, lean, req: 'Data', post: 'Support.optionalValue' };
  // A dictionary holding a record is read through structuredClone: Node's
  // URLPattern returns its groups as objects that are not plain.
  const dict = t.k === 'nullable' ? t.inner : t;
  if (dict.k === 'dict' && dictReadable(dict.name) && holdsRecord(dict)) return { async, t, lean, req: 'Value', post: `Support.cloneAs ${paren(lean)}` };
  // A record result is read through Object.entries (Lasm.JS.Web.Support.recordOf): Node's
  // process.env is not a plain object, and Deno's is a Proxy that structuredClone rejects.
  // A nullable record (D1's first(), R2's customMetadata) is read as data, none for null or
  // undefined (Option Value would be a reference to null). Lasm.JS.Deno and Lasm.JS.Bun read records as data.
  if (dict.k === 'record' && !needsPost(dict.inner) && !emittingHost) return t.k === 'nullable'
    ? { async, t, lean, req: 'Data', post: `Support.optionalRecordOf ${paren(retType(dict.inner))}` }
    : { async, t, lean, req: 'Value', post: `Lasm.JS.Web.Support.recordOf ${paren(retType(dict.inner))}` };
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
// In an Async result, a decoding lambda (`fun x => x.mapM …` of an optional ArrayBuffer) is an IO action, lifted.
const asyncPost = (post, x) => post.startsWith('(fun ') ? `(${applyPost(post, x)} : IO _)` : applyPost(post, x);
const finish = (call, res) => res.post ? `do\n  let r ← ${call}\n  ${res.async ? asyncPost(res.post, 'r') : applyPost(res.post, 'r')}` : call;
const monad = res => res.async ? 'Async' : 'IO';
const binding = (name, path, construct, arity, ns = NS, module = 'globalThis') =>
  `{ name := "${ns}.${name}", module := "${module}", path := "${path}", construct := ${construct}, arity := ${arity} }`;

/** A module export's member (`Support.getExport` of Lasm.JS.Node.Support; for Lasm.JS.Deno and Lasm.JS.Bun, whose
 * modules do not import it, the same through Lasm.JS.require). */
const exportOf = (jsModule, path, type, host) => !host ? `Support.getExport "${jsModule}" ${path} ${type}`
  : `(do\n    let o ← ${JSON.parse(path).slice(0, -1).reduce((acc, k) => `(← ${acc}).get ${JSON.stringify(k)} Value`, `Lasm.JS.require "${jsModule}"`)}\n    o.get ${JSON.stringify(JSON.parse(path).at(-1))} ${type})`;
/** Overload names: the first overload keeps the name, the others add `With` and their first differing argument. */
function overloadNames(group) {
  if (group.length === 0) return [];
  if (group.length === 1) return [group[0].name];
  const first = group[0].arguments;
  const names = group.map((m, i) => {
    // Lasm.JS.Deno and Lasm.JS.Bun name their overloads in the lowering (ts-auto.mjs).
    const given = extValue(extAttr(m, 'LasmLeanName'));
    if (given) return given;
    if (i === 0) return m.name;
    const idx = m.arguments.findIndex((a, j) => first[j]?.name !== a.name);
    if (idx >= 0) return `${m.name}With${capital(m.arguments[idx].name)}`;
    // The same argument names: a shorter overload adds its arity (`first0`); one of the same length differs
    // only by its arguments' types, and adds them (RTCDataChannel's send(data): `sendWithBlob`).
    return m.arguments.length !== first.length ? `${m.name}${m.arguments.length}` : withTypes(m);
  });
  // Two overloads that would get one name: each adds all its argument names (FileHandle's
  // read(options) and read(buffer, options): readWithOptions, readWithBufferOptions).
  const named = names.map((n, i) => i > 0 && names.indexOf(n) !== i ? `${group[i].name}With${group[i].arguments.map(a => capital(a.name)).join('')}` : n);
  // Still one name: each one after the first adds its argument types instead.
  return named.map((n, i) => i > 0 && named.indexOf(n) !== i ? withTypes(group[i]) : n);
}
/** An overload's name with its argument types: `sendWithBlob`. */
const withTypes = m => `${m.name}With${m.arguments.map(a => typeKeyName(a.idlType)).join('')}`;
const constructorName = 'new';

// ---------- the web APIs a program references (for `lasm build --target`'s availability check) ----------
// Every generated function of Lasm.JS.Web that calls the platform is `@[noinline]`, so a program's generated C
// names it, and is recorded with the compatibility-data paths that say where it exists (0.3-10).
/** { lean: full Lean name, paths: [[root, …keys]] in order of preference, result: the Lean interface type it returns }. */
const apiDecls = [];
// Compatibility data (web-availability.mjs) with Lasm's reviewed corrections (availability-overrides.json).
const rcd = await compat.loadRuntimeCompat();
const { overrides: availabilityOverrides } = JSON.parse(readFileSync(join(root, 'scripts', 'bindings', 'availability-overrides.json'), 'utf8'));
const usedAvailabilityOverrides = new Set();
/** Where a binding is available: { path, missing: [runtime] }. */
function whereAvailable(lean, paths) {
  const where = compat.availability(paths, rcd);
  const path = Object.values(where).find(w => w.path)?.path ?? paths[0].join('.');
  // An entry names a binding (its Lean name), a compatibility path, or a path and everything under it (`api.URLPattern.*`).
  const matches = o => o.api === lean || o.api === path || o.api.endsWith('.*') && (path === o.api.slice(0, -2) || path.startsWith(o.api.slice(0, -1)));
  for (const o of availabilityOverrides) if (matches(o)) {
    usedAvailabilityOverrides.add(o.api);
    for (const r of o.runtimes) { if (!where[r]) fail(`availability-overrides.json: unknown runtime ${r}`); where[r].ok = o.available; }
  }
  return { path, missing: Object.keys(where).filter(r => !where[r].ok) };
}
/** The Lean interface type a member returns (`Navigator.gpu` → `GPU`), through Promise and nullable, if any. */
function resultInterface(member) {
  if (member.type === 'constructor') return leanTypeName(apiOwner.name);
  if (!member.idlType || member.type === 'cast') return undefined;
  let r = resolve(member.idlType);
  while (r && (r.k === 'promise' || r.k === 'nullable')) r = r.inner;
  return r?.k === 'iface' ? leanTypeName(r.name) : undefined;
}
/** Where an interface itself is available (its compatibility path), for the guards of its members. */
const interfaceMissing = new Map();
const missingOfInterface = name => {
  if (!interfaceMissing.has(name)) interfaceMissing.set(name, whereAvailable(`${NS}.${leanTypeName(name)}`, [compatBase(name)]).missing);
  return interfaceMissing.get(name);
};
let apiOwner = null; // { kind: 'interface', name } | { kind: 'global' } | { kind: 'namespace', name }
/** The compatibility-data root and key of an interface or namespace: WebAssembly's are under `webassembly.api`. */
const compatBase = name => {
  const d = def(name);
  return d && namespaceOf(d) === 'WebAssembly' ? ['webassembly', 'api', name] : name === 'WebAssembly' ? ['webassembly', 'api'] : ['api', name];
};
/** A web API definition's text, `@[noinline]`, recorded with its compatibility paths. */
function api(member, text) {
  const lean = /\ndef (\S+)/.exec(text)[1].replaceAll('«', '').replaceAll('»', '');
  // Lasm.JS.Node, Deno and Bun: the same data representation, with no availability record.
  if (apiOwner.kind === 'ext') return macroInline(text, `${apiOwner.ns}.${lean}`);
  const key = member.type === 'constructor' ? null : member.type === 'iterable' ? member.key : member.name;
  let paths;
  if (apiOwner.kind === 'global') {
    const event = /^on(.+)$/.exec(key);
    paths = [['api', key], ...(event ? [['api', 'Window', `${event[1]}_event`]] : []), ['api', 'Window', key]];
  } else {
    const base = compatBase(apiOwner.name);
    if (member.type === 'cast') paths = [base];
    else if (member.type === 'constructor') paths = [[...base, apiOwner.name.split('.').at(-1)], base];
    else {
      const event = member.type === 'attribute' && /^on(.+)$/.exec(key);
      paths = [...(event ? [[...base, `${event[1]}_event`]] : []), ...(member.special === 'static' || apiOwner.kind === 'namespace' ? [[...base, `${key}_static`]] : []),
        [...base, key], base];
    }
  }
  apiDecls.push({ lean: `${NS}.${lean}`, paths, result: resultInterface(member) });
  const plain = macroInline(text, `${NS}.${lean}`);
  const guard = guardOf(member, key, text, lean, paths);
  return guard ? `${plain}\n\n${guard}` : plain;
}
/**
 * Rule 0.3-11, the availability guard: `X?` runs binding X where the platform has it (`'gpu' in navigator`) and
 * returns `none` where it does not. Generated for every binding some supported runtime lacks that a program can
 * reach without a guard of its own: a global, a namespace member, a static member, a constructor, or an instance
 * member its interface's runtimes do not all have (`Response.bytes` on an older Node). The members of an
 * interface that only a guard gives (GPU's, behind `Navigator.gpu?`) need none: `lasm build --target` allows them
 * where the guard's result is the only way to them (src/web-availability.mjs).
 */
function guardOf(member, key, text, lean, paths) {
  if (!['attribute', 'operation', 'constructor'].includes(member.type)) return null;
  const { missing } = whereAvailable(`${NS}.${lean}`, paths);
  if (!missing.length) return null;
  const at = text.indexOf('\ndef ');
  const lineEnd = text.indexOf('\n', at + 1) < 0 ? text.length : text.indexOf('\n', at + 1);
  const header = text.slice(at + 1, lineEnd);
  // A setter has nothing to give back; the getter's guard covers the attribute.
  if (member.type === 'attribute' && / : IO Unit :=/.test(header) && /\(value : /.test(header)) return null;
  const isStatic = member.special === 'static';
  const instance = apiOwner.kind === 'interface' && member.type !== 'constructor' && !isStatic;
  let check;
  if (apiOwner.kind === 'global') check = `Internal.hasGlobal [${JSON.stringify(key)}]`;
  else if (apiOwner.kind === 'namespace') check = `Internal.hasGlobal [${[...apiOwner.name.split('.'), key].map(k => JSON.stringify(k)).join(', ')}]`;
  else if (member.type === 'constructor') check = `Internal.hasGlobal [${jsPath(apiOwner.name).split('.').map(k => JSON.stringify(k)).join(', ')}]`;
  else if (isStatic) check = `Internal.hasGlobal [${[...jsPath(apiOwner.name).split('.'), key].map(k => JSON.stringify(k)).join(', ')}]`;
  else {
    // An instance member its interface's runtimes all have needs no guard of its own.
    const ownerMissing = missingOfInterface(apiOwner.name);
    if (missing.every(r => ownerMissing.includes(r))) return null;
    if (!/\(self : [^)]+\)/.test(header)) return null;
    check = `Internal.has self.val ${JSON.stringify(key)}`;
  }
  const typeAt = Math.max(header.lastIndexOf(' : IO '), header.lastIndexOf(' : Async '));
  const defineAt = header.indexOf(':=', typeAt);
  const monad = header.slice(typeAt + 3, defineAt).trim().split(' ')[0];
  const result = header.slice(typeAt + 3 + monad.length + 1, defineAt).trim();
  const name = /^def (\S+)/.exec(header)[1];
  // `X?`; a quoted name keeps its quotes around the whole (`CSS.«in?»`).
  let signature = header.slice(0, typeAt).replace(/^def (\S+)/, `def ${name.endsWith('»') ? name.slice(0, -1) + '?»' : name + '?'}`);
  if (instance) signature = signature.replace(/\(self : /, "(self' : ");
  let body = text.slice(at + 1 + defineAt + 2);
  // The binding records inside name the guard too: the program's C must not hold the unguarded name (0.3-10).
  body = body.replaceAll(JSON.stringify(`${NS}.${lean}`), JSON.stringify(`${NS}.${lean}?`));
  const lines = body.startsWith(' do\n') ? body.slice(4).split('\n') : body.startsWith('\n') ? body.slice(1).split('\n') : ['  ' + body.trim()];
  const idl = /`([^`]+)`/.exec(text.slice(0, at))?.[1] ?? lean;
  const guarded = `/-- \`${idl}\` where the platform has it (${instance ? `\`'${key}' in self\`` : 'its global'}), else \`none\` (rule 0.3-11). -/\n`
    + `${signature} : ${monad} (Option ${paren(result)}) := do\n`
    + (instance ? `  let self := self'\n` : '')
    + `  if !(← ${check}) then return none\n  let lasmGuarded ← do\n${lines.map(l => '  ' + l).join('\n')}\n  return some lasmGuarded`;
  return macroInline(guarded, `${NS}.${lean}?`);
}
/**
 * A web binding as data (0.3-12): `@[macro_inline]`, so it has no code of its own and a program's call site gets
 * the generic Lasm.JS call, wrapped in `Internal.api "<full name>"` (the error names the binding, and
 * `lasm build --target` finds the program's web APIs by these names in its C). macro_inline substitutes the
 * arguments as they are written, so every parameter must occur exactly once in the body: checked here.
 */
function macroInline(text, fullName) {
  const at = text.indexOf('\ndef ');
  const lineEnd = text.indexOf('\n', at + 1) < 0 ? text.length : text.indexOf('\n', at + 1);
  const header = text.slice(at + 1, lineEnd);
  const typeAt = Math.max(header.lastIndexOf(' : IO '), header.lastIndexOf(' : Async '));
  if (typeAt < 0) fail(`${fullName}: no IO or Async result in ${header}`);
  const defineAt = at + 1 + header.indexOf(':=', typeAt);
  let body = text.slice(defineAt + 2);
  const params = [...header.slice(0, typeAt).matchAll(/\((«[^»]+»|[A-Za-z_][A-Za-z0-9_']*) :/g)].map(m => m[1]);
  for (const p of params) {
    const uses = body.replace(/"(?:[^"\\]|\\.)*"/g, '""').match(new RegExp(`(?<![A-Za-z0-9_'.«])${p.replace(/[«»]/g, x => '\\' + x)}(?![A-Za-z0-9_'»])(?! :=)`, 'g'))?.length ?? 0;
    if (uses !== 1) fail(`${fullName}: parameter ${p} occurs ${uses} times in its body (macro_inline needs exactly once)`);
  }
  body = body.startsWith(' do\n') ? body.slice(3) : body.startsWith('\n') ? body : '\n  ' + body.trimStart();
  return text.slice(0, at) + '\n@[macro_inline] ' + text.slice(at + 1, defineAt) + `:= Internal.api "${fullName}" do` + body;
}
/** The handle types of the web interfaces, for Lasm.JS.Web.Types. */
const handleDecls = [];
/** Names taken per interface, across the modules that generate its members. */
const takenNames = new Map();
/** Interface `name`'s handle type (with `declare`) and the members `module` generates. */
function emitInterface(module, name, declare = true) {
  const d = def(name);
  const o = out.get(module);
  apiOwner = nsOf(module) === NS ? { kind: 'interface', name } : { kind: 'ext', ns: nsOf(module) };
  const T = leanTypeName(name);
  const ns = nsOf(module), jsModule = jsModuleOf(name);
  const isNode = jsModule !== 'globalThis';
  const parent = d.inheritance && selectedInterfaces.has(d.inheritance) ? leanTypeName(d.inheritance) : null;
  const decls = [];
  const header = hostOf(d)
    ? `/-- \`interface ${extValue(extAttr(d, 'LasmPath'))}\` (${specOf(d.spec)}): a handle to the JavaScript object. -/`
    : isNode
    ? `/-- \`class ${leanTypeName(name)}${d.inheritance ? ' extends ' + leanTypeName(d.inheritance) : ''}\` of \`${jsModule}\` (${specOf(d.spec)}): a handle to the JavaScript object. -/`
    : `/-- \`interface ${jsPath(name)}${d.inheritance ? ' : ' + d.inheritance : ''}\` (${specOf(d.spec)}): a handle to the JavaScript object. -/`;
  // LasmNoHandle (Node's Buffer): no handle type, a Lean ByteArray stands for the object.
  if (declare && !extAttr(d, 'LasmNoHandle')) {
    // The parent projection is `to<Parent>` (`toEventEmitter`), or, where an ancestor's projection has that name
    // (https.Server → http.Server → net.Server), `to` and every component of the parent's name (`toHttpServer`).
    const ancestorsLast = [];
    for (let a = parent ? def(d.inheritance).inheritance : null; a && selectedInterfaces.has(a); a = def(a).inheritance) ancestorsLast.push(leanTypeName(a).split('.').at(-1));
    const projection = parent && ancestorsLast.includes(parent.split('.').at(-1) ?? '') ? 'to' + parent.split('.').map(capital).join('') : null;
    if (parent) decls.push(`${header}\nstructure ${T} extends ${projection ? projection + ' : ' : ''}${parent}`);
    else decls.push(`${header}\nstructure ${T} where\n  /-- The JavaScript object. -/\n  val : Value`);
    decls.push(`instance : Nonempty ${T} := ⟨{ val := Classical.ofNonempty }⟩`);
    decls.push(`instance : ToJS ${T} := ⟨fun x => .ref x.val ""⟩`);
    decls.push(`instance : FromJS ${T} := ⟨fun | .ref v _ => .ok { val := v } | _ => .error "", "${ns}.${T}", .data⟩`);
    // An instance where its parent is expected (an HTMLElement for a Node argument).
    if (parent) decls.push(`instance : Coe ${T} ${parent} := ⟨${T}.${projection ?? 'to' + parent.split('.').at(-1)}⟩`);
    // A web interface's handle type lives in Lasm.JS.Web.Types (ordered by inheritance when written).
    if (isWebInterface(name)) {
      handleDecls.push({ name, text: decls.join('\n'), module: moduleOfType.get(name) });
      if (parent) requireType(moduleOfType.get(name), { k: 'iface', name: d.inheritance });
    }
    else o.types.push(decls.join('\n'));
    // Rule A12: a checked downcast through the interface object's prototype (`instanceof`), for
    // every interface JavaScript code can name: not [LegacyNoInterfaceObject] ones, not Deno's and
    // Bun's declared-only interfaces, not Node classes their module does not export.
    const ctor = hostOf(d) || extAttr(d, 'LegacyNoInterfaceObject') ? null
      : isNode ? (extValue(extAttr(d, 'LasmPath')) ? `Support.getExport "${jsModule}" [${jsPath(name).split('.').map(s => `"${s}"`).join(', ')}] Value` : null)
      : `Support.getGlobal [${jsPath(name).split('.').map(s => `"${s}"`).join(', ')}] Value`;
    if (ctor) o.decls.push(api({ type: 'cast' }, `/-- \`v instanceof ${jsPath(name)}\`: \`some\` handle to \`v\` when it is one, else \`none\` (also when the runtime has no \`${jsPath(name)}\`). -/\ndef ${T}.cast? (v : Value) : IO (Option ${T}) :=\n  Lasm.JS.Web.Support.cast (${ctor}) (fun x => { val := x }) v`));
  }

  // Window's members are the page's globals (emitted as top-level functions), not methods of its handle.
  const members = membersOf(name, module);
  if (!takenNames.has(name)) takenNames.set(name, new Set(['mk', 'val', 'rec', 'recOn', 'casesOn', 'noConfusion', 'noConfusionType', 'ctorIdx', 'ofFn', 'ofSyncFn', 'cast?']));
  const taken = takenNames.get(name);
  const take = (n, what) => { if (taken.has(n)) fail(`${T}.${n} (${what}) is generated twice`); taken.add(n); return n; };
  // Static names clash with instance names of every module's members.
  const instanceNames = new Set(allMembersOf(name).filter(m => m.special !== 'static' && m.name).map(memberName));
  const fns = [];
  const doc = (m, extra = '') => `/-- ${nodeSignature(m)}\`${docText(memberIdl(m, name))}\`${extra}${m.specIdlType
    ? `: read as \`Promise<undefined>\`, since shipping browsers return \`undefined\` (awaited at once) where the spec now returns a promise` : ''} -/`;
  // Constructors.
  // [HTMLConstructor] constructors construct only custom elements (subclasses); for the element itself they throw.
  const ctors = members.filter(m => m.type === 'constructor' && !extAttr(m, 'HTMLConstructor'));
  overloadNames(ctors.map(c => ({ ...c, name: constructorName }))).map(n => ov.name(`${ns}.${T}.${n}`)).forEach((n, i) => {
    const c = ctors[i];
    for (const a of c.arguments) requireType(module, resolve(a.idlType));
    const al = argumentList(c.arguments, module);
    fns.push(api(c, `${doc(c)}\ndef ${T}.${id(take(n, 'constructor'))}${al.binders ? ' ' + al.binders : ''} : IO ${T} :=${withPre(al, `\n  Lasm.JS.Binding.invoke ${T} ${binding(`${T}.${n}`, jsPath(name), true, al.arity, ns, jsModule)}\n    ${al.args} (await := false)`)}`));
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
    const res = resultOf(a.idlType, a);
    const isStatic = a.special === 'static';
    const getName = take(isStatic && instanceNames.has(a.name) ? 'static' + capital(a.name) : a.name, 'attribute');
    if (isStatic) {
      const path = `[${jsPath(name).split('.').map(s => `"${s}"`).join(', ')}, "${a.name}"]`;
      const call = isNode ? exportOf(jsModule, path, res.async ? 'Value' : res.req, !!hostOf(d)) : `Support.getGlobal ${path} ${res.async ? 'Value' : res.req}`;
      fns.push(api(a, `${doc(a)}\ndef ${T}.${id(getName)} : ${monad(res)} ${paren(res.lean)} := ${res.async ? `do\n  let p ← ${call}\n  ${finish(`p.await ${res.req}`, res).replace(/^do\n {2}/, '')}` : finish(call, res)}`));
    } else if (res.async) {
      fns.push(api(a, `${doc(a)}\ndef ${T}.${id(getName)} (self : ${T}) : Async ${paren(res.lean)} := do\n  let p ← self.val.get "${a.name}" Value\n  ${res.post ? `let r ← p.await ${res.req}\n  ${asyncPost(res.post, 'r')}` : `p.await ${res.req}`}`));
    } else {
      fns.push(api(a, `${doc(a)}\ndef ${T}.${id(getName)} (self : ${T}) : IO ${paren(res.lean)} := ${finish(`self.val.get "${a.name}" ${res.req}`, res)}`));
    }
    if (!a.readonly && !isStatic) {
      const setName = take('set' + capital(a.name), 'setter');
      fns.push(api(a, `/-- Sets \`${a.name}\`: \`${docText(memberIdl(a, name))}\` -/\ndef ${T}.${id(setName)} (self : ${T}) (value : ${argType(r)}) : IO Unit :=\n  self.val.set "${a.name}" (${toData(r, 'value')})`));
    }
    if (a.special === 'stringifier') {
      fns.push(api({ type: 'operation', name: 'toString' }, `/-- The stringifier (\`${a.name}\`). -/\ndef ${T}.${id(take('toString', 'stringifier'))} (self : ${T}) : IO String := self.val.callMethod "toString" #[] String`));
    }
  }
  // Operations, grouped by name and static-ness.
  const ops = members.filter(m => m.type === 'operation').map(op => ({ ...op, name: op.name && memberName(op) }));
  const groups = new Map();
  for (const op of ops) {
    if (op.special === 'stringifier' && !op.name) {
      fns.push(api({ type: 'operation', name: 'toString' }, `/-- The stringifier. -/\ndef ${T}.${id(take('toString', 'stringifier'))} (self : ${T}) : IO String := self.val.callMethod "toString" #[] String`));
      continue;
    }
    // Unnamed getters, setters and deleters (DOMStringMap's properties, Window's named elements) have no method to call.
    if (!op.name) continue;
    // LasmOverloadName (Lasm.JS.Cloudflare): an overload named by its string literal argument (`getJson`).
    const fixed = extValue(extAttr(op, 'LasmOverloadName'));
    const key = fixed ? `fixed ${fixed}` : (op.special === 'static' ? 'static ' : '') + op.name;
    if (!groups.has(key)) groups.set(key, []);
    groups.get(key).push(op);
  }
  for (const group of groups.values()) {
    const fixed = extValue(extAttr(group[0], 'LasmOverloadName'));
    if (fixed && group.length > 1) fail(`${T}.${fixed}: two overloads with one LasmOverloadName`);
    (fixed ? [fixed] : overloadNames(group)).forEach((n0, i) => {
      const op = group[i];
      const isStatic = op.special === 'static';
      const n = ov.name(`${ns}.${T}.${isStatic && instanceNames.has(op.name) ? 'static' + capital(n0) : n0}`);
      for (const a of op.arguments) requireType(module, resolve(a.idlType));
      requireType(module, resolve(op.idlType));
      const al = argumentList(op.arguments, module);
      const res = resultOf(op.idlType, op);
      let body;
      if (isStatic) {
        const b = binding(`${T}.${n}`, `${jsPath(name)}.${op.name}`, false, al.arity, ns, jsModule);
        body = res.async ? `Lasm.JS.Binding.invokeAsync ${res.req} ${b}\n    ${al.args}` : `Lasm.JS.Binding.invoke ${res.req} ${b}\n    ${al.args} (await := false)`;
        fns.push(api(op, `${doc(op)}\ndef ${T}.${id(take(n, 'static operation'))}${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${withPre(al, res.post ? ' ' + finish(body, res) : '\n  ' + body)}`));
      } else if (extAttr(op, 'LasmBytesThis')) {
        // A method of the prototype called on bytes (Node's Buffer methods take any Uint8Array as `this`).
        if (res.async) fail(`${T}.${n}: an asynchronous method on bytes`);
        body = `Support.callOnBytes "${jsModule}" "${jsPath(name)}.prototype.${op.name}" self ${al.args} ${res.req}`;
        fns.push(api(op, `${doc(op)}\ndef ${T}.${id(take(n, 'operation'))} (self : ByteArray)${al.binders ? ' ' + al.binders : ''} : IO ${paren(res.lean)} :=${withPre(al, res.post ? ' ' + finish(body, res) : '\n  ' + body)}`));
      } else if (extAttr(op, 'LasmEvent')) {
        // Lasm.JS.Node's events: `on<Event>` / `once<Event>` call emitter.on / emitter.once with the event's name.
        const args = al.args.replace('(Support.args #[', `(Support.args #[toJS ${JSON.stringify(extValue(extAttr(op, 'LasmEvent')))}, `);
        body = `self.val.callMethod "${extAttr(op, 'LasmOnce') ? 'once' : 'on'}" ${args} ${res.req}`;
        fns.push(api(op, `${doc(op, `: calls \`${extAttr(op, 'LasmOnce') ? 'once' : 'on'}(${JSON.stringify(extValue(extAttr(op, 'LasmEvent')))}, listener)\``)}\ndef ${T}.${id(take(n, 'event'))} (self : ${T})${al.binders ? ' ' + al.binders : ''} : IO ${paren(res.lean)} :=${res.post ? ' ' + finish(body, res) : '\n  ' + body}`));
      } else {
        body = res.async ? `self.val.callMethodAwait "${op.name}" ${al.args} ${res.req}` : `self.val.callMethod "${op.name}" ${al.args} ${res.req}`;
        // LasmPromisify on a method (`server.getConnections(callback)`): the bound method through util.promisify.
        if (extAttr(op, 'LasmPromisify')) {
          if (!res.async) fail(`${T}.${n}: LasmPromisify without a Promise result`);
          body = `Support.promisifiedMethod ${res.req} self.val "${op.name}" ${al.args}`;
        }
        fns.push(api(op, `${doc(op)}\ndef ${T}.${id(take(n, 'operation'))} (self : ${T})${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${withPre(al, res.post ? ' ' + finish(body, res) : '\n  ' + body)}`));
      }
    });
  }
  // Pair iterables: entries, keys and values as arrays.
  for (const it of members.filter(m => m.type === 'iterable' && m.idlType.length === 2)) {
    const [k, v] = it.idlType.map(resolve);
    for (const t of [k, v]) requireType(module, t);
    // An iterable of ArrayBuffers (MediaKeyStatusMap's key IDs) would need decoding per entry: not generated (docs/JS_BINDINGS.md).
    if (needsPost(k) || needsPost(v)) continue;
    const K = paren(retType(k)), V = paren(retType(v));
    const idl = `iterable<${it.idlType.map(idlText).join(', ')}>`;
    fns.push(api({ type: 'iterable', key: 'entries' }, `/-- \`${idl}\`: \`entries()\`, collected into an array. -/\ndef ${T}.${id(take('entries', 'iterable'))} (self : ${T}) : IO (Array (${K} × ${V})) :=\n  Support.iterate self.val "entries" (Array (${K} × ${V}))`));
    fns.push(api({ type: 'iterable', key: 'keys' }, `/-- \`${idl}\`: \`keys()\`, collected into an array. -/\ndef ${T}.${id(take('keys', 'iterable'))} (self : ${T}) : IO (Array ${K}) :=\n  Support.iterate self.val "keys" (Array ${K})`));
    fns.push(api({ type: 'iterable', key: 'values' }, `/-- \`${idl}\`: \`values()\`, collected into an array. -/\ndef ${T}.${id(take('values', 'iterable'))} (self : ${T}) : IO (Array ${V}) :=\n  Support.iterate self.val "values" (Array ${V})`));
  }
  // Lasm.JS.Deno and Lasm.JS.Bun: an async iterable (`for await`): its iterator, read one value at a time, and
  // `values`, every value read to the end.
  for (const it of members.filter(m => m.type === 'iterable' && m.async && hostOf(d))) {
    const v = resolve(it.idlType[0]);
    requireType(module, v);
    const res = resultOf(it.idlType[0]);
    const V = paren(res.lean);
    const I = `${T}.Iterator`;
    const read = res.post ? `do\n      let r ← r.get "value" ${res.req}\n      ${applyPost(res.post, 'r').replace(/^pure /, 'return some <| ')}` : `return some (← r.get "value" ${res.req})`;
    fns.push(`/-- An iterator of \`async iterable<${docText(idlText(it.idlType[0]))}>\` (the object's \`[Symbol.asyncIterator]()\`). -/\nstructure ${I} where\n  /-- The JavaScript iterator. -/\n  val : Value`);
    fns.push(`/-- \`async iterable<${docText(idlText(it.idlType[0]))}>\`: a new iterator (\`[Symbol.asyncIterator]()\`). -/\ndef ${T}.${id(take('iterator', 'async iterable'))} (self : ${T}) : IO ${I} := do\n  let symbol ← (← (← Lasm.JS.global).get "Symbol" Value).get "asyncIterator" Value\n  let f ← self.val.get symbol Value\n  return { val := (← f.call #[] Value (this := .ref self.val "")) }`);
    fns.push(`/-- The next value, \`none\` at the end (\`await it.next()\`). -/\ndef ${I}.next (it : ${I}) : Async (Option ${V}) := do\n  let r ← it.val.callMethodAwait "next" #[] Value\n  if (← r.get "done" Bool) then return none\n  else ${read.replace(/\n {6}/g, '\n    ')}`);
    fns.push(`/-- Every value of \`async iterable<${docText(idlText(it.idlType[0]))}>\`, read to the end (\`for await\`). -/\npartial def ${T}.${id(take('values', 'async iterable'))} (self : ${T}) : Async (Array ${V}) := do\n  let it ← self.iterator\n  let rec loop (acc : Array ${V}) : Async (Array ${V}) := do\n    match ← it.next with\n    | some v => loop (acc.push v)\n    | none => return acc\n  loop #[]`);
  }
  // Value iterables (NodeList, DOMTokenList): `values()`, collected into an array.
  for (const it of members.filter(m => m.type === 'iterable' && m.idlType.length === 1 && !m.async)) {
    const v = resolve(it.idlType[0]);
    requireType(module, v);
    if (needsPost(v)) continue;
    const V = paren(retType(v));
    fns.push(api({ type: 'iterable', key: 'values' }, `/-- \`iterable<${idlText(it.idlType[0])}>\`: \`values()\`, collected into an array. -/\ndef ${T}.${id(take('values', 'iterable'))} (self : ${T}) : IO (Array ${V}) :=\n  Support.iterate self.val "values" (Array ${V})`));
  }
  if (parent && declare) requireType(module, { k: 'iface', name: d.inheritance });
  // The handle type: in Lasm.JS.Web.Types for a web interface, declared above otherwise.
  if (!declare || isWebInterface(name)) requireType(module, { k: 'iface', name });
  o.decls.push(...fns);
}

function emitNamespaceOrGlobal(module, owner, members, pathPrefix, leanPrefix, jsModule = 'globalThis') {
  const o = out.get(module);
  const ns = nsOf(module);
  apiOwner = nsOf(module) !== NS ? { kind: 'ext', ns: nsOf(module) } : owner === GLOBAL ? { kind: 'global' } : { kind: 'namespace', name: owner };
  const groups = new Map();
  for (const m of members) {
    if (m.type === 'attribute') {
      const r = resolve(m.idlType);
      requireType(module, r);
      const res = resultOf(m.idlType);
      const path = [...pathPrefix, m.name].map(s => `"${s}"`).join(', ');
      const call = jsModule === 'globalThis' ? `Support.getGlobal [${path}] ${res.async ? 'Value' : res.req}`
        : exportOf(jsModule, `[${path}]`, res.async ? 'Value' : res.req, emittingHost);
      o.decls.push(api(m, `/-- ${nodeSignature(m)}\`${docText(memberIdl(m, owner))}\` (${specOf(m.spec)}) -/\ndef ${leanPrefix}${id(m.name)}${typeBinders(r)} : ${monad(res)} ${paren(res.lean)} := ${res.async ? `do\n  let p ← ${call}\n  p.await ${res.req}` : finish(call, res)}`));
      continue;
    }
    if (m.type === 'const') {
      const v = m.value.type === 'number' ? m.value.value : m.value.type === 'boolean' ? String(m.value.value) : fail(`const ${m.name}`);
      o.decls.push(`/-- \`const ${idlText(m.idlType)} ${m.name} = ${v}\` (${specOf(m.spec)}) -/\ndef ${leanPrefix}${id(m.name)} : ${retType(resolve(m.idlType))} := ${v}`);
      continue;
    }
    if (m.type !== 'operation') fail(`${owner}: unsupported member ${m.type}`);
    if (!groups.has(m.name)) groups.set(m.name, []);
    groups.get(m.name).push(m);
  }
  for (const group of groups.values()) {
    overloadNames(group).map(n => ov.name(`${ns}.${leanPrefix}${n}`)).forEach((n, i) => {
      const op = group[i];
      for (const a of op.arguments) requireType(module, resolve(a.idlType));
      requireType(module, resolve(op.idlType));
      const al = argumentList(op.arguments, module);
      const res = resultOf(op.idlType);
      if (rules.numberResults.includes(op.name) && !pathPrefix.length && jsModule === 'globalThis') Object.assign(res, { req: 'Value', post: `Support.number ${paren(res.lean)}` });
      const b = binding(`${leanPrefix}${n}`, [...pathPrefix, op.name].join('.'), false, al.arity, ns, jsModule);
      let body = res.async ? `Lasm.JS.Binding.invokeAsync ${res.req} ${b}\n    ${al.args}` : `Lasm.JS.Binding.invoke ${res.req} ${b}\n    ${al.args} (await := false)`;
      // LasmPromisify: a Node function taking a final (err, value) callback, called through util.promisify.
      if (extAttr(op, 'LasmPromisify')) {
        if (!res.async) fail(`${owner}.${op.name}: LasmPromisify without a Promise result`);
        body = `Support.promisified ${res.req} "${jsModule}" "${[...pathPrefix, op.name].join('.')}" ${al.args}`;
      }
      o.decls.push(api(op, `/-- ${nodeSignature(op)}\`${docText(memberIdl(op, owner))}\` (${specOf(op.spec)}) -/\ndef ${leanPrefix}${id(n)}${al.binders ? ' ' + al.binders : ''} : ${monad(res)} ${paren(res.lean)} :=${withPre(al, res.post ? ' ' + finish(body, res) : '\n  ' + body)}`));
    });
  }
}

// Supporting types: enums, callbacks (handles), dictionaries and unions.
function emitEnum(name) {
  const d = def(name), T = leanTypeName(name);
  let ctors = d.values.map(v => ({ v: v.value, c: enumCtor(v.value) }));
  // "hex" and "HEX" (Bun's color formats): the all-capitals one keeps its capitals (hEX).
  ctors = ctors.map(x => ctors.some(y => y !== x && y.c === x.c) && /^[A-Z0-9_]+$/.test(x.v) ? { ...x, c: x.v[0].toLowerCase() + x.v.slice(1) } : x);
  // Values that differ only in case ("m" and "M"): the capitalised one is `upperM`.
  ctors = ctors.map(x => ctors.some(y => y !== x && y.c === x.c) && /^[A-Z]/.test(x.v) ? { ...x, c: 'upper' + x.v.replace(/[^A-Za-z0-9]/g, '') } : x);
  if (new Set(ctors.map(x => x.c)).size !== ctors.length) fail(`enum ${name}: constructor names collide`);
  // A WebIDL enum is a string with known values (0.3-17): a structure over the string, and one match pattern per
  // value (`.noCors`), about a tenth of an inductive's size. A value the pinned IDL lacks still reads.
  const lines = [`/-- \`enum ${hostDoc(name)}\` (${specOf(d.spec)}): ${ctors.map(x => JSON.stringify(x.v)).join(', ')}. -/`,
    `structure ${T} where\n  /-- A value from its string, unchecked: the generated values (\`.${id(ctors[0]?.c ?? 'x')}\`) are the normal way to make one. -/\n  unsafeOfString ::\n  /-- The string. -/\n  val : String\n  deriving BEq, Repr, Inhabited`];
  for (const x of ctors) lines.push(`/-- ${JSON.stringify(x.v)} -/\n@[match_pattern] abbrev ${T}.${id(x.c)} : ${T} := .unsafeOfString ${JSON.stringify(x.v)}`);
  lines.push(`instance : ToJS ${T} := ⟨fun x => .string x.val⟩`);
  lines.push(`instance : FromJS ${T} where\n  fromJS\n    | .string s => .ok (.unsafeOfString s)\n    | _ => .error "not a string"\n  typeName := "${nsOf(moduleOfType.get(name))}.${T}"`);
  return lines.join('\n');
}
function emitCallback(module, name) {
  const d = def(name), T = leanTypeName(name);
  const c = callbackSignature(name);
  const sig = d.type === 'callback' ? `callback ${name} = ${idlText(d.idlType)} (${c.args.map(a => `${a.optional ? 'optional ' : ''}${idlText(a.idlType)}${a.variadic ? '...' : ''} ${a.name}`).join(', ')})`
    : `callback interface ${name} { ${memberIdl(c.idl, name)}; }`;
  const params = [], reads = [], resolved = [];
  c.args.forEach((a, i) => {
    const t = resolve(a.idlType);
    resolved.push(t);
    requireType(module, t);
    if (a.variadic) { params.push('Array Data'); reads.push(`(args.extract ${i} args.size)`); return; }
    const opt = a.optional && retType(t) !== 'Data' && t.k !== 'nullable';
    const R = opt ? `Option ${paren(retType(t))}` : retType(t);
    const Q = t.typeParam ? 'Data' : opt ? `Option ${paren(reqType(t))}` : reqType(t);
    params.push(paren(R));
    const post = t.typeParam ? `Support.declared ${t.typeParam}` : postFn(t);
    reads.push(post ? `(← ${opt ? `(fun x => x.mapM ${post})` : post} (← Support.arg ${paren(Q)} args ${i}))` : `(← Support.arg ${paren(Q)} args ${i})`);
  });
  let ret = c.ret.k === 'promise' ? c.ret.inner : c.ret;
  requireType(module, ret);
  const R = paren(argType(ret));
  const fnType = m => [...params, `${m} ${R}`].join(' → ');
  const call = reads.length ? `f ${reads.join(' ')}` : 'f';
  // Lasm.JS.Deno and Lasm.JS.Bun: the function's `length` is the callback's arity. Lasm.JS's
  // functions are variadic (length 0), and Deno.serve calls a handler of length 0 without
  // its request (a fast path for `() => new Response(…)`).
  const withLength = fn => !hostOf(d) ? `return { val := ${fn} }` : `let fn ${fn}\n  let _ : Value ← (← (← Lasm.JS.global).get "Object" Value).callMethod "defineProperty"\n    #[toJS fn, toJS "length", obj [("value", toJS ${c.args.filter(a => !a.variadic).length})]] Value\n  return { val := fn }`;
  const lines = [`/-- \`${docText(sig)}\` (${specOf(d.spec)}): a JavaScript function, made from a Lean function with \`ofFn\` (asynchronous) or \`ofSyncFn\`. -/`,
    `structure ${T} where\n  /-- The JavaScript function. -/\n  val : Value`,
    `instance : Nonempty ${T} := ⟨{ val := Classical.ofNonempty }⟩`,
    `instance : ToJS ${T} := ⟨fun x => .ref x.val ""⟩`,
    `instance : FromJS ${T} := ⟨fun | .ref v _ => .ok { val := v } | _ => .error "", "${nsOf(module)}.${T}", .data⟩`,

    `/-- A JavaScript function that runs \`f\` asynchronously (\`Lasm.JS.Function.ofFn\`): it returns a promise at once and \`f\` runs as a Lean task, holding no Lean thread while it awaits. -/\ndef ${T}.ofFn${typeBinders(...resolved)} (f : ${fnType('Async')}) : IO ${T} := do\n  ${withLength(`← Lasm.JS.Function.ofFn fun ${reads.length ? 'args' : '_'} => do return toJS (← ${call})`)}`,
    `/-- A JavaScript function that runs \`f\` synchronously (\`Lasm.JS.Function.ofSyncFn\`): JavaScript waits for its result (needed where the caller uses it at once: an event listener calling \`preventDefault\`, a queuing strategy's \`size\`). -/\ndef ${T}.ofSyncFn${typeBinders(...resolved)} (f : ${fnType('IO')}) : IO ${T} := do\n  ${withLength(`← Lasm.JS.Function.ofSyncFn fun ${reads.length ? 'args' : '_'} => do return toJS (← ${call})`)}`];
  // Rule A10: reviewed aliases of the mechanical name (overrides.json `aliases`).
  for (const a of ov.aliasesOf(`${nsOf(module)}.${T}`))
    lines.push(`/-- \`${a.alias.split('.').at(-1)}\`: \`${T}\` (an alias, docs/api/decisions/0.3.md ${a.decision}: ${docText(a.why)}). -/\nabbrev ${a.alias.slice(nsOf(module).length + 1)} := ${T}`);
  return lines.join('\n');
}
function emitDict(module, name) {
  const d = def(name), T = leanTypeName(name);
  const fields = dictFields(name);
  const lines = [`/-- \`dictionary ${docText(name)}${d.inheritance ? ' : ' + hostDoc(d.inheritance) : ''}\` (${specOf(d.spec)}); members that are not \`required\` are \`Option\`s, \`none\` leaving them out. -/`, `structure ${T} where`];
  const entries = [];
  for (const f of fields) {
    const t = resolve(f.idlType);
    requireType(module, t);
    const inner = t.k === 'nullable' && !f.required ? t.inner : t;
    const fieldDoc = `  /-- \`${f.required ? 'required ' : ''}${hostDoc(idlText(f.idlType))} ${f.name}${f.default ? ' = ' + defaultText(f.default) : ''}\` -/`;
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
      // A member of a type outside the tier (a Value field) is read as that Value.
      const rt = x => x.k === 'unknown' ? argType(x) : retType(x);
      const R = f.required ? rt(t) : rt(inner) === 'Data' ? 'Data' : `Option ${paren(rt(inner))}`;
      return `${id(f.name)} := ← Lasm.JS.readField ${paren(R)} d "${f.name}"`;
    });
    decl.push(`instance : FromJS ${T} where\n  fromJS d := ${fields.length ? `do return {\n    ${reads.join(',\n    ')} }` : `match d with | .object _ => .ok {} | _ => .error ""`}\n  typeName := "${nsOf(module)}.${T}"`);
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
const shapePattern = { string: '.string _', bool: '.bool _', number: '.number _', bigint: '.bigint _', bytes: '.bytes _', array: '.array _', object: '.object _', ref: '.ref _ _' };
function emitUnion(module, key) {
  const u = unions.get(key);
  const how = unionRead(u);
  if (!needTo.has('union:' + key) && how !== 'fromjs' && how !== 'decode') return null;
  const lines = [`/-- \`${docText(u.typedef ? `typedef ${u.alts.map(a => a.idl).join(' or ')} ${u.typedef}` : `(${u.alts.map(a => a.idl).join(' or ')})`)}\`: one constructor per member type. -/`, `inductive ${u.name} where`];
  for (const a of u.alts) { requireType(module, a.t); lines.push(`  /-- \`${docText(a.idl)}\` -/\n  | ${id(a.ctor)} (value : ${argType(a.t)})`); }
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
    if (how === 'fromjs') decl.push(`instance : FromJS ${u.name} where\n  fromJS\n${u.alts.map(a => `    | d@(${shapePattern[shape(a.t)]}) => (FromJS.fromJS d : Except String ${a.t.k === 'unknown' ? 'Value' : paren(retType(a.t))}).map .${id(a.ctor)}`).join('\n')}\n    | _ => .error ""\n  typeName := "${nsOf(module)}.${u.name}"`);
    if (how === 'decode') decl.push(`/-- Reads a \`${u.name}\` (one member is an ArrayBuffer, copied with one more host call). -/\ndef ${u.name}.decode (d : Data) : IO ${u.name} :=\n  match d with\n${u.alts.map(a => {
      const post = postFn(a.t);
      return `  | ${shapePattern[shape(a.t)]} => do return .${id(a.ctor)} (← ${post ? `${post} (← Lasm.JS.decodeAs ${paren(reqType(a.t))} "${u.name}" d)` : `Lasm.JS.decodeAs ${paren(retType(a.t))} "${u.name}" d`})`;
    }).join('\n')}\n  | _ => throw (IO.userError s!"${nsOf(module)}: expected a ${u.name}, received JavaScript {d.describe}")`);
  }
  return decl.join('\n');
}

// Collect per module, in dependency order within the module.
for (const o of out.values()) Object.assign(o, { types: [], support: [] });
/** Whether the module being emitted is Lasm.JS.Deno's or Lasm.JS.Bun's. */
let emittingHost = false;
for (const m of plan) inModule(m.key, () => {
  emittingHost = /^Lasm\.JS\.(Deno|Bun)\./.test(m.key);
  for (const i of m.ifaces) emitInterface(m.key, i);
  for (const i of m.contributions) emitInterface(m.key, i, false);
});
for (const m of plan) inModule(m.key, () => {
  emittingHost = /^Lasm\.JS\.(Deno|Bun)\./.test(m.key);
  for (const n of m.namespaces) {
    const jsModule = jsModuleOf(n);
    // Lasm.JS.Deno and Lasm.JS.Bun: the runtime's global object's functions, at the top of the module's namespace (`Lasm.JS.Deno.serve`);
    // Lasm.JS.Cloudflare: globals (LasmPath "") and a module's exports (LasmModule `cloudflare:sockets`), likewise.
    if (hostOf(def(n))) {
      // Nested namespaces (`Bun.dns`) prefix their Lean names (`dns.lookup`); a runtime module (`bun:sqlite`) is loaded by name.
      const path = extValue(extAttr(def(n), 'LasmPath'));
      emitNamespaceOrGlobal(m.key, n, def(n).members.map(x => ({ ...x, name: memberName(x) })), path ? path.split('.') : [], extValue(extAttr(def(n), 'LasmLeanPrefix')) ?? '',
        extValue(extAttr(def(n), 'LasmModule')) ?? 'globalThis');
    }
    else emitNamespaceOrGlobal(m.key, n, def(n).members.map(x => ({ ...x, name: memberName(x) })), [], `${leanTypeName(n)}.`, jsModule);
  }
  emitNamespaceOrGlobal(m.key, GLOBAL, m.globalMembers, [], '');
  for (const e of m.nsMembers) emitNamespaceOrGlobal(m.key, e.ns, e.members, [e.ns], `${e.ns}.`);
});
// Supporting declarations, topologically sorted per module.
const supportKeys = [...moduleOfType.keys()].filter(k => !selectedInterfaces.has(k));
const depsOf = key => inOwner(key, () => {
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
  emittingHost = /^Lasm\.JS\.(Deno|Bun)\./.test(module);
  const text = inModule(module, () => {
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
const nodeGeneratedBy = `GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/node.idl, the Node.js ${nodeTier.version} API
documentation (doc/api/*.json; MIT, Copyright Node.js contributors) lowered to WebIDL by
scripts/bindings/node-api.mjs (webidl2 ${webidl2Version}); do not edit. Regenerate with
\`node scripts/bindings/node-api.mjs && node scripts/bindings/generate-web.mjs\`; the mapping is in
docs/JS_BINDINGS.md ("Lasm.JS.Node"). The doc comments quote each member's documented signature
and its lowered WebIDL.`;
const hostGeneratedBy = h => h.npm ? `GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/${h.name.toLowerCase()}.idl, the TypeScript
declarations of ${h.npm} ${h.version} (${h.files.join(', ')}; ${h.license})
lowered to WebIDL by scripts/bindings/${h.generator} (webidl2 ${webidl2Version}); do not edit. Regenerate with
\`node scripts/bindings/${h.generator} && node scripts/bindings/generate-web.mjs\`; the mapping is in
docs/JS_BINDINGS.md ("Cloudflare Workers: Lasm.JS.Cloudflare"). The doc comments quote each member's TypeScript
declaration and its lowered WebIDL.` : `GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/${h.name.toLowerCase()}.idl, the ${h.name} ${h.version}
TypeScript declarations (${h.files.join(', ')} of ${h.repo} at ${h.tag}; ${h.license})
lowered to WebIDL by scripts/bindings/serve-api.mjs (webidl2 ${webidl2Version}); do not edit. Regenerate with
\`node scripts/bindings/serve-api.mjs && node scripts/bindings/generate-web.mjs\`; the mapping is in
docs/JS_BINDINGS.md ("Lasm.JS.Deno and Lasm.JS.Bun"). The doc comments quote each member's TypeScript
declaration and its lowered WebIDL.`;
{
  const depth = n => { const p = def(n).inheritance; return p && isWebInterface(p) ? 1 + depth(p) : 0; };
  handleDecls.sort((a, b) => depth(a.name) - depth(b.name) || (a.name < b.name ? -1 : 1));
  for (const h of handleDecls) out.get(h.module).types.push(h.text);
}
// Lasm.JS.Web's helpers are in the namespace Lasm.JS.Web.Internal (0.3-3); Node's (getExport, promisified,
// callOnBytes) stay Lasm.JS.Node.Support.
const webHelpers = ['optional', 'args', 'argsWith', 'fields', 'arg', 'optionalValue', 'arrayBufferBytes', 'viewBytes', 'typedArray', 'number',
  'cloneAs', 'iterate', 'getGlobal', 'isInstance', 'cast', 'recordOf', 'nullableArrayBufferBytes'];
const internal = text => text.replace(new RegExp(`(?:Lasm\\.JS\\.Web\\.)?\\bSupport\\.(${webHelpers.join('|')})\\b`, 'g'), 'Internal.$1');
const files = new Map();
/** Lasm.JS.Node: an instance on a type with a namespaced name (`stream.Readable.CloseListener`, `FileHandle.CloseListener`)
 * is named after every component of it (`instFromJSStreamReadableCloseListener`): Lean's automatic name keeps only the
 * last (`instFromJSCloseListener`), which two such types share. */
const nameInstances = text => text.replace(/^instance : (\w+) ((?:[\w.]+|\([^()]*\))(?: (?:[\w.]+|\([^()]*\)))*)( :=| where)$|^instance : (\w+) ((?:[\w.]+|\([^()]*\))(?: (?:[\w.]+|\([^()]*\)))*) :=/gm, (all, c1, a1, end, c2, a2) => {
  const cls = c1 ?? c2, args = a1 ?? a2;
  if (!/[A-Za-z]\w*\.[A-Za-z]/.test(args)) return all;
  const flat = args.replace(/[()]/g, ' ').split(/\s+/).filter(Boolean).map(a => a.split('.').map(capital).join('')).join('');
  return `instance inst${cls}${flat} : ${cls} ${args}${end ?? ' :='}`;
});
const moduleFile = key => join(root, 'library', ...key.split('.')) + '.lean';
for (const m of plan) {
  const o = out.get(m.key);
  const isNode = m.ns === NODE_NS;
  const support = isNode ? 'Lasm.JS.Node.Support' : m.host?.support ?? 'Lasm.JS.Web.Support';
  const imports = [support, ...order.filter(n => o.imports.has(n))];
  const text = [`/-
${m.key}: ${m.title} (${m.specs}).
${isNode ? nodeGeneratedBy : m.host ? hostGeneratedBy(m.host) : generatedBy}
-/`, ...imports.map(i => `import ${i}`), '', `namespace ${m.ns}`, isNode || m.host ? 'open Lasm.JS Lasm.JS.Web' : 'open Lasm.JS',
  // Measured on the generated bindings: no injectivity or sizeOf lemmas, no extracted closed terms (smaller .olean, faster).
  'set_option genInjectivity false', 'set_option genSizeOfSpec false', 'set_option compiler.extract_closed false', '',
  ...o.types.flatMap(t => [t, '']), ...o.support.flatMap(t => [t, '']), ...o.decls.flatMap(t => [t, '']), `end ${m.ns}`, ''].join('\n');
  files.set(moduleFile(m.key), internal(isNode ? nameInstances(text) : text));
}
// Lasm.JS.Web: the umbrella module, and the module list src/lasm-library.mjs compiles (in import order).
const webPlan = plan.filter(m => m.ns === NS);
// No umbrella module (0.3-18): with modules compiled on first import, `import Lasm.JS.Web` would compile every spec.
// Where each web API is available (scripts/bindings/web-availability.mjs), for `lasm build --target`.
{
  const apis = {};
  for (const a of apiDecls) {
    const { path, missing } = whereAvailable(a.lean, a.paths);
    // [compatibility path, the runtimes that lack it, the interface it returns (for guarded uses, 0.3-11)].
    if (missing.length) apis[a.lean] = a.result ? [path, missing.join(' '), a.result] : [path, missing.join(' ')];
  }
  // The interfaces some runtime lacks: a guarded program's values of these exist only where the guard said so.
  const interfaces = {};
  for (const [name, home] of [...selectedInterfaces].sort(([a], [b]) => a < b ? -1 : 1)) if (nsOf(home) === NS) {
    const missing = missingOfInterface(name);
    if (missing.length) interfaces[leanTypeName(name)] = missing.join(' ');
  }
  for (const o of availabilityOverrides) if (!usedAvailabilityOverrides.has(o.api)) fail(`availability-overrides.json: ${o.api} matches no generated API`);
  files.set(join(outDir, 'availability.json'), JSON.stringify({
    generatedBy: `scripts/bindings/generate-web.mjs (@webref/idl ${webrefVersion}, @mdn/browser-compat-data ${compat.bcd.__meta.version}, ${compat.runtimeCompat.repo} ${compat.runtimeCompat.commit.slice(0, 12)})`,
    runtimes: Object.fromEntries(Object.entries(compat.runtimes).map(([id, r]) => [id, r.label])),
    apis, interfaces }) + '\n');
}
files.set(join(outDir, 'modules.json'), JSON.stringify({
  generatedBy: `scripts/bindings/generate-web.mjs (@webref/idl ${webrefVersion})`, modules: webPlan.map(m => m.key) }, null, 2) + '\n');
files.set(join(root, 'library', 'Lasm', 'JS', 'Node.lean'), [`/-
${NODE_NS}: the server-essential Node.js modules (node:fs/promises, node:path, node:os,
node:process, node:buffer, node:crypto, node:child_process, node:events, node:stream) as
documented for Node.js ${nodeTier.version}, for Node and for what Bun and Deno implement of them.
The same mapping as Lasm.JS.Web: classes are handle types, Promise results are \`Async\`,
options objects dictionaries (docs/JS_BINDINGS.md, "Lasm.JS.Node").
${nodeGeneratedBy}
-/`, ...order.filter(n => n.startsWith(NODE_NS + '.')).map(n => `import ${n}`), ''].join('\n'));

files.set(join(root, 'library', 'Lasm', 'JS', 'Cloudflare.lean'), [`/-
Lasm.JS.Cloudflare: the runtime APIs of Cloudflare Workers as declared by ${hostSource(cloudflareTier.hosts[0])}: the
bindings of a Worker's env (Workers KV, D1, R2, Durable Objects, Queues), the handlers (fetch, scheduled, queue) and
their ExecutionContext, the Cache API and TCP sockets, with Lasm.JS.Web's Request, Response and streams as their web
types. The same mapping as Lasm.JS.Web: bindings are handle types, Promise results are \`Async\`, options
dictionaries, handlers callbacks made from Lean functions (docs/JS_BINDINGS.md, "Cloudflare Workers: Lasm.JS.Cloudflare").
${hostGeneratedBy(cloudflareTier.hosts[0])}
-/`, ...order.filter(n => n.startsWith('Lasm.JS.Cloudflare.')).map(n => `import ${n}`), ''].join('\n'));
for (const h of serveTier.hosts) files.set(join(root, 'library', 'Lasm', 'JS', `${h.name}.lean`), [`/-
${h.auto ? `Lasm.JS.${h.name}: ${h.title} as declared for ${h.name} ${h.version} (every function, constant and class, with
the types they use), on Lasm.JS.Web's types. The same mapping as Lasm.JS.Web: classes and the objects the runtime
keeps are handle types, Promise results are \`Async\`, plain objects structures, callbacks made from Lean functions
(docs/JS_BINDINGS.md, "Lasm.JS.${h.name}").` : `Lasm.JS.${h.name}: ${h.name}'s HTTP server (\`${h.global}.serve\`) as declared for ${h.name} ${h.version}, with Lasm.JS.Web's
Request and Response as the handler's types. The same mapping as Lasm.JS.Web: the server is a handle type,
Promise results are \`Async\`, options dictionaries, the handler a callback made from a Lean function
(docs/JS_BINDINGS.md, "Lasm.JS.Deno and Lasm.JS.Bun").`}
${hostGeneratedBy(h)}
-/`, ...order.filter(n => n.startsWith(`Lasm.JS.${h.name}.`)).map(n => `import ${n}`), ''].join('\n'));

// The generated surface, for the availability probes (test/fixtures/js-web on the server runtimes,
// test/browser/platform on the engines): reported, never a failure.
const surface = {};
{
  const add = (path, module, kind, names) => {
    const e = (surface[path] ??= { module, static: [], prototype: [] });
    e[kind] = [...new Set([...e[kind], ...names])];
  };
  for (const m of webPlan) inModule(m.key, () => {
    for (const i of [...m.ifaces, ...m.contributions]) {
      if (extAttr(def(i), 'LegacyNoInterfaceObject')) continue;
      const members = membersOf(i, m.key);
      const home = selectedInterfaces.get(i).slice(NS.length + 1);
      add(jsPath(i), home, 'static', members.filter(x => x.special === 'static' && x.name).map(x => x.name));
      // [LegacyUnforgeable] attributes are own properties of each instance, not of the prototype.
      add(jsPath(i), home, 'prototype', members.filter(x => x.special !== 'static' && (x.type === 'operation' || x.type === 'attribute') && x.name
        && !extAttr(x, 'LegacyUnforgeable')).map(x => x.name));
    }
    for (const g of m.globalMembers) surface[g.name] = { module: m.name, global: true };
    for (const e of m.nsMembers) {
      const ns = (surface[e.ns] ??= { module: m.name, namespace: [] });
      ns.namespace = [...new Set([...ns.namespace, ...e.members.map(x => x.name)])];
    }
  });
}
files.set(join(root, 'scripts', 'bindings', 'web-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (@webref/idl ${webrefVersion})`, surface }, null, 2) + '\n');
// The same surface as Lean data for the conformance programs' availability probes.
for (const dir of [['test', 'fixtures', 'js-web'], ['test', 'browser', 'platform']]) files.set(join(root, ...dir, 'Surface.lean'), `/-
${generatedBy}
The generated surface (scripts/bindings/web-surface.json), for the availability probe.
-/
namespace Surface

/-- \`{path: {static?, prototype?, global?, namespace?}}\` for every generated interface, global and namespace. -/
def json : String := r#"${JSON.stringify(surface)}"#

end Surface
`);

// Lasm.JS.Node's surface: per JavaScript module and export, the members generated
// (classes without an export, FileHandle, are probed on an instance by the test).
const nodeSurface = [];
for (const m of plan.filter(m => m.ns === NODE_NS)) {
  for (const n of m.namespaces) nodeSurface.push({ lean: leanTypeName(n), module: jsModuleOf(n), path: '', leanModule: m.name,
    namespace: [...new Set(def(n).members.map(memberName))] });
  for (const i of m.ifaces) {
    const members = membersOf(i);
    nodeSurface.push({ lean: leanTypeName(i), module: jsModuleOf(i), path: extValue(extAttr(def(i), 'LasmPath')) ?? null, leanModule: m.name,
      static: [...new Set(members.filter(x => x.special === 'static').map(memberName))],
      prototype: [...new Set(members.filter(x => x.special !== 'static' && x.type === 'operation' && !extAttr(x, 'LasmEvent')).map(memberName))],
      // Documented events (`on<Event>` / `once<Event>` call emitter.on / emitter.once: not members of the object).
      ...(members.some(x => extAttr(x, 'LasmEvent')) ? { events: [...new Set(members.filter(x => extAttr(x, 'LasmEvent')).map(x => extValue(extAttr(x, 'LasmEvent'))))] } : {}),
      instance: [...new Set(members.filter(x => x.special !== 'static' && x.type === 'attribute').map(memberName))] });
  }
}
files.set(join(root, 'scripts', 'bindings', 'node-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (Node.js ${nodeTier.version} docs)`, surface: nodeSurface }, null, 2) + '\n');
files.set(join(root, 'test', 'fixtures', 'js-node', 'Surface.lean'), `/-
${nodeGeneratedBy}
The generated surface (scripts/bindings/node-surface.json), for the availability probe of Main.lean.
-/
namespace Surface

/-- \`[{lean, module, path, namespace?, static?, prototype?, instance?}]\` for every generated namespace and class. -/
def json : String := r#"${JSON.stringify(nodeSurface)}"#

end Surface
`);

// Lasm.JS.Deno's and Lasm.JS.Bun's surface: per runtime, the global's functions and
// the members of each interface, for the availability probe of test/fixtures/js-serve
// (the interfaces have no global constructor: they are probed on live objects).
const serveSurface = {};
for (const m of plan.filter(m => m.host && serveTier.hosts.includes(m.host))) {
  const h = (serveSurface[m.host.name] ??= { global: m.host.global, functions: [], interfaces: {} });
  // A global's members by their path below it (`dns.lookup` of Bun.dns); a runtime module's (`bun:sqlite`) are not the global's.
  const globalMembers = n => extAttr(def(n), 'LasmModule') ? [] : def(n).members.map(x => {
    const path = extValue(extAttr(def(n), 'LasmPath')) ?? '';
    return [...path.split('.').slice(1), memberName(x)].join('.');
  });
  for (const n of m.namespaces) h.functions.push(...new Set(globalMembers(n)));
  for (const i of m.ifaces) h.interfaces[displayName(i)] = [...new Set(membersOf(i).filter(x => x.name && x.special !== 'static').map(memberName))];
  (h.modules ??= {})[m.name] = { functions: [...new Set(m.namespaces.flatMap(globalMembers))], interfaces: m.ifaces.map(displayName) };
}
// What a conformance program probes: js-serve the HTTP servers (Deno's Serve module, Bun's), js-deno all of Lasm.JS.Deno.
const hostSurfaceOf = (host, modules) => {
  const h = serveSurface[host];
  if (!modules) return { global: h.global, functions: h.functions, interfaces: h.interfaces };
  const ms = modules.map(n => h.modules[n]).filter(Boolean);
  return { global: h.global, functions: ms.flatMap(x => x.functions), interfaces: Object.fromEntries(ms.flatMap(x => x.interfaces).map(i => [i, h.interfaces[i]])) };
};
const surfaceLean = (what, json) => `/-
GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/deno.idl and bun.idl; do not edit.
The generated surface (${what}), for the availability probe of Main.lean.
-/
namespace Surface

/-- \`{runtime: {global, functions, interfaces: {name: [member]}}}\`. -/
def json : String := r#"${JSON.stringify(json)}"#

end Surface
`;
files.set(join(root, 'test', 'fixtures', 'js-deno', 'Surface.lean'), surfaceLean('all of Lasm.JS.Deno', { Deno: hostSurfaceOf("Deno") }));
files.set(join(root, 'test', 'fixtures', 'js-bun', 'Surface.lean'), surfaceLean('all of Lasm.JS.Bun', { Bun: hostSurfaceOf("Bun") }));
const serveProbe = { Deno: hostSurfaceOf("Deno", ["Serve"]), Bun: hostSurfaceOf("Bun", ["Serve"]) };
for (const h of Object.values(serveSurface)) delete h.modules;
files.set(join(root, 'scripts', 'bindings', 'serve-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (${serveTier.hosts.map(h => `${h.name} ${h.version}`).join(', ')} declarations)`, surface: serveSurface }, null, 2) + '\n');
files.set(join(root, 'test', 'fixtures', 'js-serve', 'Surface.lean'), `/-
GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/deno.idl and bun.idl; do not edit.
The generated surface (Deno's HTTP server module and Bun's, of scripts/bindings/serve-surface.json), for the availability probe of Main.lean.
-/
namespace Surface

/-- \`{runtime: {global, functions, interfaces: {name: [member]}}}\` for Lasm.JS.Deno and Lasm.JS.Bun. -/
def json : String := r#"${JSON.stringify(serveProbe)}"#

end Surface
`);


// Lasm.JS.Cloudflare's surface: the globals and module exports, and the members of each
// interface, for the availability probe of test/fixtures/js-cloudflare (on live objects: the
// bindings of env, a handler's context, a stub).
const cloudflareSurface = { globals: {}, interfaces: {} };
for (const m of plan.filter(m => m.host && cloudflareTier.hosts.includes(m.host))) {
  for (const n of m.namespaces) {
    const module = extValue(extAttr(def(n), 'LasmModule')) ?? 'globalThis';
    (cloudflareSurface.globals[module] ??= []).push(...new Set(def(n).members.map(memberName)));
  }
  for (const i of m.ifaces) cloudflareSurface.interfaces[displayName(i)] = [...new Set(membersOf(i).map(memberName))];
}
files.set(join(root, 'scripts', 'bindings', 'cloudflare-surface.json'), JSON.stringify({ generatedBy: `scripts/bindings/generate-web.mjs (${cloudflareTier.hosts.map(hostSource).join(', ')} declarations)`, surface: cloudflareSurface }, null, 2) + '\n');
files.set(join(root, 'test', 'fixtures', 'js-cloudflare', 'Surface.lean'), `/-
GENERATED by scripts/bindings/generate-web.mjs from scripts/bindings/cloudflare.idl; do not edit.
The generated surface (scripts/bindings/cloudflare-surface.json), for the availability probe of Main.lean.
-/
namespace Surface

/-- \`{globals: {module: [name]}, interfaces: {name: [member]}}\` for Lasm.JS.Cloudflare. -/
def json : String := r#"${JSON.stringify(cloudflareSurface)}"#

end Surface
`);
const unusedOverrides = ov.unused();
if (unusedOverrides.length) fail(`scripts/bindings/overrides.json entries match no generated declaration: ${unusedOverrides.join(', ')}`);

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
  // Hand-written modules beside the generated ones: every tier's Support.lean, and
  // Lasm.JS.Node.Serve (Node.serve, which Lasm provides on lasm:node-serve: not a Node API).
  const handWritten = new Set([join('library', 'Lasm', 'JS', 'Node', 'Serve.lean')]);
  for (const [dir, tierName] of [[outDir, 'Web'], [nodeOutDir, 'Node'], ...hosts.map(h => [join(root, 'library', 'Lasm', 'JS', h.name), h.name])]) for (const name of existsSync(dir) ? readdirSync(dir) : []) {
    const rel = join('library', 'Lasm', 'JS', tierName, name);
    if (name === 'Types') {
      for (const t of readdirSync(join(dir, 'Types'))) if (!known.has(join(rel, t))) stale.push(join(rel, t) + ' (not generated)');
      continue;
    }
    if (name !== 'Support.lean' && !handWritten.has(rel) && !known.has(rel)) stale.push(rel + ' (not generated)');
  }
  if (stale.length) {
    console.error(`The standard bindings are stale: ${stale.join(', ')}. Run node scripts/bindings/generate-web.mjs and commit the result.`);
    process.exit(1);
  }
  console.log(`Lasm.JS.Web, Lasm.JS.Node, Lasm.JS.Deno, Lasm.JS.Bun and Lasm.JS.Cloudflare are up to date (@webref/idl ${webrefVersion}, Node.js ${nodeTier.version} docs, ${hosts.map(hostSource).join(', ')} declarations).`);
}
