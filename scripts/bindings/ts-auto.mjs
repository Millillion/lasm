// Lowers a runtime's whole global namespace (`Deno.*`) from its TypeScript
// declarations to WebIDL, for generate-web.mjs. serve-api.mjs reads the
// declarations (pinned, hashes checked) and calls lowerAuto for a host whose
// tier entry (deno-tier2.mjs) says `auto: true`. Where serve-api.mjs's selection
// mode lowers the declarations a tier file lists, this lowers every function,
// constant and class the namespace declares, and every type they reach, except
// what the tier file excludes (each exclusion with its reason, written into the
// IDL's header). The rules (docs/JS_BINDINGS.md, "Lasm.JS.Deno"):
//
//   - a function, a constant (`const pid: number`) and a class are lowered; an
//     interface or type alias is lowered when a lowered member uses it;
//   - a member, function or declaration whose doc comment says @experimental,
//     UNSTABLE or @deprecated is not lowered, except the declarations the tier
//     file takes from its unstable files (`unstable`, with the reason);
//   - a class is a WebIDL interface (a handle) with its constructors and static
//     members; an interface (or object literal type) is an interface when it has
//     a required method or a Promise-typed property (an object the runtime keeps),
//     else a dictionary (plain data, copied: options, results such as FileInfo),
//     unless the tier file's `as` says otherwise;
//   - `extends` of a lowered type is the IDL parent; `extends AsyncIterable<T>` and
//     `[Symbol.asyncIterator]` are `async iterable<T>`; an `AsyncIterable<T>` result
//     is a generated interface `<T>AsyncIterable`; Disposable and AsyncDisposable
//     (`using`, which Lean does not have) are dropped with the Symbol-keyed members;
//   - a generic declaration is lowered once per instantiation: its declared
//     defaults (the tier file's `defaults` for a default that is a union of object
//     types) give the plain name, a type alias naming an instantiation gives its
//     name (`TcpListener` = `Listener<TcpConn, NetAddr>`), other instantiations add
//     their arguments' names (`ConnUnixAddr`); a generic method's parameter is its
//     default, or `unknown`;
//   - overloads: the first keeps the name, the others add `With` and their first
//     parameter whose name differs, else the name of the first parameter type that
//     differs (`connectWithUnixConnectOptions`), unless the tier file's `names`
//     names it;
//   - the types are serve-api.mjs's (`string` → DOMString, a union of string
//     literals → an enum named after the alias or the member, a function type → a
//     callback), plus: a TypeScript enum is its number (`unsigned long`), `Date` and
//     `object` are `object` (Data), `{ [k: string]: T }` and `Record<string, T>` are
//     `record<DOMString, T>`, `Iterable<T>`, `Array<T>` and `T[]` are sequences,
//     `Uint8Array<…>` and the other byte views are `Uint8Array`; a `symbol`
//     alternative of a union is dropped (Lean has no Symbol values to pass).
import { blank, declarations, findTop, matchClose, docBefore, squash, membersOf, parseMember, splitParams, parseType, typeText, functionSignature, aliasBody, fail } from './serve-api.mjs';

const capital = s => s ? s[0].toUpperCase() + s.slice(1) : s;
const quoteAttr = s => JSON.stringify(String(s).replace(/"/g, "'").replace(/\s+/g, ' '));
const tagOf = doc => /@experimental|\bUNSTABLE\b|@deprecated/.exec(doc ?? '')?.[0];
const categoryOf = doc => /@category\s+([^\n*@]+)/.exec(doc ?? '')?.[1]?.trim();

/** `<A extends X = Y, B>` at the start of a header → [{ name, constraint, def }] and the rest of the header. */
function typeParams(header) {
  const h = header.trim();
  if (!h.startsWith('<')) return { params: [], rest: h };
  const { shape } = blank(h);
  const close = findTop(shape, 1, h.length, '>');
  const inner = h.slice(1, close), innerShape = shape.slice(1, close);
  const params = [];
  for (let i = 0; i < inner.length;) {
    let e = findTop(innerShape, i, inner.length, ',');
    if (e < 0) e = inner.length;
    const p = inner.slice(i, e).trim().replace(/^const\s+/, '');
    if (!p) { i = e + 1; continue; }
    const m = /^([\w$]+)(?:\s+extends\s+([\s\S]+?))?(?:\s*=\s*([\s\S]+))?$/.exec(p);
    if (!m) fail(`cannot read the type parameter ${p}`);
    params.push({ name: m[1], constraint: m[2] && squash(m[2]), def: m[3] && squash(m[3]) });
    i = e + 1;
  }
  return { params, rest: h.slice(close + 1).trim() };
}
/** `extends A<x>, B implements C` → [type AST] (extends and implements alike). */
function heritageOf(rest) {
  const out = [];
  for (const m of rest.matchAll(/\b(?:extends|implements)\s+([\s\S]*?)(?=\s+(?:extends|implements)\s|$)/g)) {
    const text = m[1];
    const { shape } = blank(text);
    for (let i = 0; i < text.length;) {
      let e = findTop(shape, i, text.length, ',');
      if (e < 0) e = text.length;
      out.push(parseType(text.slice(i, e).trim()));
      i = e + 1;
    }
  }
  return out;
}
/** The type parameters of a type alias declaration. */
function aliasParams(d) {
  const { shape } = blank(d.text);
  const m = /type\s+[\w$]+\s*/.exec(shape);
  const at = m.index + m[0].length;
  if (shape[at] !== '<') return { params: [] };
  return typeParams(d.text.slice(at, findTop(shape, at + 1, shape.length, '>') + 1));
}
/** The members of a class body: [{ name, kind: property|method|ctor, static, readonly, optional, params, type, doc, text, setter }]. */
function classMembers(src, from, to) {
  const out = [];
  let i = from;
  while (i < to) {
    let e = findTop(src.shape, i, to, ';', true);
    if (e < 0) e = to;
    const raw0 = src.code.slice(i, e);
    if (raw0.trim()) {
      const at = i + raw0.length - raw0.trimStart().length;
      let text = raw0.trim();
      const doc = docBefore(src, at);
      const mods = new Set();
      let m;
      while ((m = /^(static|readonly|private|protected|public|abstract|declare|override)\s+/.exec(text))) { mods.add(m[1]); text = text.slice(m[0].length); }
      const base = { static: mods.has('static'), readonly: mods.has('readonly'), private: mods.has('private') || mods.has('protected'), doc, text: squash(raw0) };
      if ((m = /^constructor\s*\(/.exec(text))) {
        const { shape } = blank(text);
        const open = m[0].length - 1, close = matchClose(shape, open);
        out.push({ ...base, name: 'constructor', kind: 'ctor', params: splitParams(text.slice(open + 1, close), shape.slice(open + 1, close)) });
      } else if ((m = /^(get|set)\s+([\w$]+)\s*\(/.exec(text))) {
        const { shape } = blank(text);
        const open = m[0].length - 1, close = matchClose(shape, open);
        if (m[1] === 'get') {
          const r = text.indexOf(':', close);
          out.push({ ...base, name: m[2], kind: 'property', readonly: true, type: squash(text.slice(r + 1)) });
        } else out.push({ ...base, name: m[2], kind: 'setter', params: splitParams(text.slice(open + 1, close), shape.slice(open + 1, close)) });
      } else {
        const { shape } = blank(text);
        out.push({ ...parseMember(text, shape), ...base, readonly: base.readonly || undefined });
      }
    }
    i = e + 1;
  }
  // A getter with a setter is a writable property.
  for (const s of out.filter(x => x.kind === 'setter')) { const g = out.find(x => x.kind === 'property' && x.name === s.name); if (g) g.readonly = false; }
  return out.filter(x => x.kind !== 'setter');
}

/** Lowers a host's namespace. Returns { idl, excluded, modules }. */
export function lowerAuto(host, files) {
  const G = host.global;
  const all = files.flatMap(({ file, text }) => declarations(text, file).map(d => ({ ...d, file })));
  const excluded = [];     // [what, reason]
  const exclude = (what, reason) => { if (!excluded.some(([w]) => w === what)) excluded.push([what, reason]); };
  const used = new Set();  // keys of host.exclude, names, as, intersections, unstable used
  const strip = n => n.startsWith(G + '.') ? n.slice(G.length + 1) : n;
  const unstableFiles = new Set(Object.keys(host.unstable ?? {}));
  // The declarations of the namespace, by name (interfaces merged).
  const byName = new Map(), fns = new Map();
  for (const d0 of all) {
    // A JavaScript module of the runtime (`declare module "bun:sqlite"`): its declarations, loaded from that module.
    const root = (host.roots ?? []).find(r => d0.name.startsWith(r + '.'));
    const d = root ? { ...d0, name: `${G}.${d0.name.slice(root.length + 1)}`, jsModule: root } : d0;
    if (!d.name.startsWith(G + '.')) continue;
    const n = strip(d.name);
    if (root) used.add(`root:${root}`);
    if (unstableFiles.has(d.file)) {
      const take = host.unstable[d.file];
      if (!take.names.includes(n.split('.')[0])) continue;
      used.add(`unstable:${n.split('.')[0]}`);
      d.unstableTaken = take.reason;
    }
    if (d.kind === 'function') { if (!fns.has(n)) fns.set(n, []); fns.get(n).push(d); continue; }
    if (d.kind === 'interface' && byName.get(n)?.kind === 'interface') { byName.get(n).more.push(d); continue; }
    if (!byName.has(n)) byName.set(n, { ...d, more: [] });
  }
  for (const [f, t] of Object.entries(host.unstable ?? {})) for (const n of t.names) if (!used.has(`unstable:${n}`)) fail(`${host.name}: unstable ${n} is not declared in ${f}`);
  // A nested namespace's declaration: its namespaces capitalised in front (`udp.Socket` → `UdpSocket`, apart from the function `udpSocket`).
  const leanOf = n => n.includes('.') ? n.split('.').map(capital).join('') : n;
  /** A name as declared, looked up from a nested namespace outwards (`HostnamePortServeOptions` in `Serve`). */
  const scoped = (n, scope = '') => { n = strip(n); for (let sc = scope; sc; sc = sc.split('.').slice(0, -1).join('.')) if (byName.has(`${sc}.${n}`)) return `${sc}.${n}`; return n; };
  const idl = lean => `${host.name}_${lean.replace(/\./g, '_')}`;
  const moduleOfCategory = (doc, where, file) => {
    const c = categoryOf(doc);
    if (!c) return host.fileModules?.[file?.split('/').at(-1)] ?? null;
    const m = host.categories[c];
    if (m === undefined) fail(`${host.name} ${where}: @category ${c} is not in the tier file's categories`);
    return m;
  };

  // Output: IDL definitions by IDL name, with their module (assigned at the end) and text.
  const defs = new Map();   // idl name → { text: () => string, module, deps:Set }
  const problems = [];
  const tryMember = (where, f) => { try { return f(); } catch (e) { problems.push(`${where}: ${e.message.replace(/^serve-api: /, '')}`); return null; } };
  const isExcluded = (key, doc, decl) => {
    if (key in host.exclude) { used.add(key); return host.exclude[key]; }
    const tag = tagOf(doc);
    if (tag && !(decl?.unstableTaken && tag !== '@deprecated')) return `${tag} in its declaration`;
    return null;
  };

  // ---------- types ----------
  const objectRequests = new Map(); // key → idl name
  const dictFieldNames = new Map(); // dictionary IDL name → { parent, names }
  const enumTexts = new Map();
  const attrs = (more) => `[${Object.entries({ LasmHost: host.name, ...more }).filter(([, v]) => v !== undefined && v !== null).map(([k, v]) => v === true ? k : `${k}=${quoteAttr(v)}`).join(', ')}]`;
  const isNullish = t => t.k === 'name' && (t.name === 'null' || t.name === 'undefined');
  const isVoid = t => t.k === 'name' && t.name === 'void';
  const isPromise = t => t.k === 'name' && t.name === 'Promise';
  const anyString = t => t.k === 'inter' && t.parts.length === 2 && t.parts[0].k === 'name' && t.parts[0].name === 'string' && t.parts[1].k === 'obj' && !t.parts[1].body.trim();
  const flat = t => t.k === 'union' ? t.alts.flatMap(flat) : [t];
  const bytes = new Set(['Uint8Array', 'Uint8ClampedArray', 'ArrayBufferView', 'ArrayBufferLike', 'BufferSource', 'Buffer', 'NodeJS.TypedArray', 'SharedArrayBuffer', 'DataView']);
  const sequences = new Set(['Array', 'ReadonlyArray', 'Iterable', 'ArrayLike']);

  function addDef(name, mod, text, origin) {
    if (defs.has(name)) { if (defs.get(name).text !== text) fail(`two definitions named ${name} (${origin})`); return name; }
    defs.set(name, { text, mod, origin });
    return name;
  }
  function enumOf(values, lean, ctx) {
    const name = idl(lean);
    addDef(name, ctx.mod, `${attrs({ LasmLeanModule: '@', LasmName: lean })}\nenum ${name} { ${values.map(v => JSON.stringify(v)).join(', ')} };`, ctx.where);
    return name;
  }
  /** A TypeScript type (AST) → WebIDL type text. ctx: { where, owner, member, role, optional, subst, mod, doc, intKey, notes } */
  /** The type with generic parameters replaced (inside names' arguments, unions, intersections and arrays). */
  const substT = (t, s) => !s || !s.size ? t : t.k === 'name' ? (s.has(t.name) && !t.args.length ? s.get(t.name) : { ...t, args: t.args.map(a => substT(a, s)) })
    : t.k === 'union' ? { ...t, alts: t.alts.map(a => substT(a, s)) } : t.k === 'inter' ? { ...t, parts: t.parts.map(a => substT(a, s)) }
    : t.k === 'array' ? { ...t, inner: substT(t.inner, s) } : t;
  /** The members of an object-like type (an object literal, a dictionary-like interface, an intersection of them), or null. */
  /** A method of an options object as a function-typed member (`fetch(req, server): Response` → a callback). */
  const asProperty = m => m.kind === 'method' ? { ...m, kind: 'property', method: true, type: `(${m.params.map(p => `${p.rest ? '...' : ''}${p.name}${p.optional ? '?' : ''}: ${p.type}`).join(', ')}) => ${m.type}` } : m;
  /** Alternatives with each intersection's alias and XOR parts expanded and distributed (to a fixed point). */
  function spreadObjects(alts, scope) {
    const expand = x => {
      if (x.k === 'name' && /(^|\.)XOR$/.test(x.name)) return { k: 'union', alts: x.args };
      const d = x.k === 'name' && byName.get(scoped(x.name, scope));
      if (d?.kind !== 'type') return x;
      const { params } = aliasParams(d);
      const sub = new Map(params.map((p, i) => [p.name, x.args[i] ?? parseType(p.def ?? 'unknown')]));
      return substT(parseType(aliasBody(d)), sub);
    };
    let out = alts;
    for (let round = 0; round < 6; round++) {
      const next = out.flatMap(a => {
        if (a.k === 'union') return a.alts;
        if (a.k !== 'inter') return [a];
        const parts = a.parts.map(expand).flatMap(x => x.k === 'inter' ? x.parts : [x]);
        let combos = [[]];
        for (const part of parts) combos = combos.flatMap(c => (part.k === 'union' ? part.alts : [part]).map(y => [...c, y]));
        return combos.map(ps => ({ k: 'inter', parts: ps.flatMap(x => x.k === 'inter' ? x.parts : [x]) }));
      });
      if (next.map(typeText).join('|') === out.map(typeText).join('|')) break;
      out = next;
    }
    return out;
  }
  function objectMembers(t, scope = '') {
    if (t.k === 'obj') { const ms = membersOf({ ...blank(t.body), file: '' }, 0, t.body.length).map(asProperty); return ms.some(m => m.kind === 'index' || m.kind === 'call' || (m.method && !m.optional && false)) ? null : ms; }
    if (t.k === 'inter') { const parts = t.parts.map(x => objectMembers(x, scope)); return parts.some(x => !x) ? null : parts.flat(); }
    if (t.k === 'name') {
      const d = byName.get(scoped(t.name, scope));
      if (d?.kind !== 'interface') return null;
      const { params: ps, rest } = typeParams(d.header);
      // A generic interface's members with its arguments (or defaults) written in.
      const write = ty => ps.reduce((acc, p, i) => acc.replace(new RegExp(`\\b${p.name}\\b`, 'g'), `(${t.args[i] ? typeText(t.args[i]) : p.def ?? 'unknown'})`), ty);
      let ms = [d, ...d.more].flatMap(x => membersOf(x.src, x.body[0], x.body[1]));
      // A method of an options object is a function-typed member (`fetch(req, server): Response` → a callback).
      ms = ms.map(asProperty);
      if (ps.length) ms = ms.map(m => ({ ...m, type: write(m.type) }));
      if (ms.some(m => (m.method && !m.optional) || (m.kind === 'property' && /^Promise\b/.test(m.type)) || m.kind === 'index' || m.kind === 'call')) return null;
      // The members of its bases (`extends BaseServeOptions<WebSocketData>`), after its own.
      const sc = strip(d.name).split('.').slice(0, -1).join('.');
      for (const h of heritageOf(rest)) {
        if (h.k !== 'name' || ['Disposable', 'AsyncDisposable'].includes(h.name)) continue;
        const base = objectMembers(parseType(write(typeText(h))), sc);
        if (!base) return null;
        for (const b of base) if (!ms.some(m => m.name === b.name)) ms.push(b);
      }
      return ms;
    }
    return null;
  }
  /** A union of object types: one dictionary; a member's type is the union of its types, optional where an alternative lacks it. */
  function mergeObjects(alts, lean, ctx) {
    const name = idl(lean);
    if (objectRequests.has(`merge:${lean}`)) return name;
    objectRequests.set(`merge:${lean}`, name);
    const each = alts.map(a => objectMembers(a, ctx.scope));
    const names = [...new Set(each.flat().map(m => m.name))];
    const lines = [];
    for (const n of names) {
      const ms = each.map(x => x.find(m => m.name === n));
      const optional = ms.some(m => !m || m.optional);
      let types = [...new Set(ms.filter(Boolean).map(m => m.type))];
      // A callback member declared differently per alternative (Bun's fetch, with or without WebSockets): the first one.
      if (types.length > 1 && types.every(x => { try { return parseType(x).k === 'fn'; } catch { return false; } })) types = [types[0]];
      const t = parseType(types.map(x => `(${x})`).join(' | '));
      const lt = lower(t, { ...ctx, owner: lean, member: n, role: 'field', optional, enumName: null, intKey: `${lean}.${n}`, doc: ms.find(Boolean)?.doc ?? '' });
      lines.push(`  // ${n}: ${types.join(' | ')}${optional ? ' (optional)' : ''}`);
      lines.push(`  ${optional ? '' : 'required '}${optional ? lt.replace(/\?$/, '') : lt} ${escape(n)};`);
    }
    addDef(name, ctx.mod, `// the union ${alts.map(typeText).join(' | ')}, as one dictionary\n${attrs({ LasmLeanModule: '@', LasmName: lean, LasmPath: `${G}.${lean}` })}\ndictionary ${name} {\n${lines.join('\n')}\n};`, ctx.where);
    return name;
  }
  function lower(t, ctx) {
    if (t.k === 'name' && ctx.subst?.has(t.name) && !t.args.length) return lower(ctx.subst.get(t.name), { ...ctx, subst: null });
    t = substT(t, ctx.subst);
    // An intersection with a union inside: the union of the intersections.
    if (t.k === 'inter' && t.parts.some(x => x.k === 'union')) {
      let combos = [[]];
      for (const part of t.parts) combos = combos.flatMap(c => (part.k === 'union' ? part.alts : [part]).map(a => [...c, a]));
      t = { k: 'union', alts: combos.map(parts => ({ k: 'inter', parts })) };
    }
    let alts = flat(t);
    if (alts.some(a => a.k === 'name' && (a.name === 'symbol' || a.name === 'unique'))) {
      alts = alts.filter(a => !(a.k === 'name' && a.name === 'symbol'));
      if (!alts.length) fail('a symbol type');
    }
    if (alts.length > 1 || t.k === 'lit') return lowerUnion(alts, ctx);
    t = alts[0];
    switch (t.k) {
    case 'name': return lowerName(t, ctx);
    case 'array': return `sequence<${lower(t.inner, { ...ctx, intKey: null })}>`;
    case 'fn': return lowerCallback(t, ctx);
    case 'num': return 'double';
    // A tuple: an array of its element types (the one type they share, else any).
    case 'tuple': {
      const els = [...new Set(t.elems.map(e => lower(e, { ...ctx, intKey: null, role: ctx.role === 'arg' ? 'arg' : 'result' })))];
      return `sequence<${els.length === 1 ? els[0] : 'any'}>`;
    }
    case 'obj': {
      // `{ [k: string]: T }`: a record.
      const ms = membersOf({ ...blank(t.body), file: '' }, 0, t.body.length);
      if (ms.length === 1 && ms[0].kind === 'index') return `record<DOMString, ${lower(parseType(ms[0].type), { ...ctx, intKey: null })}>`;
      return objectType({ kind: 'literal', body: t.body, lean: `${ctx.owner}${capital(ctx.member)}` }, [], ctx);
    }
    case 'inter': {
      if (anyString(t)) return 'DOMString';
      // A part that is a type alias of a union (Bun's FetchOrRoutes): its union, distributed below.
      if (t.parts.some(x => x.k === 'name' && /(^|\.)XOR$/.test(x.name))) return lower({ k: 'inter', parts: t.parts.map(x => x.k === 'name' && /(^|\.)XOR$/.test(x.name) ? { k: 'union', alts: x.args } : x) }, ctx);
      if (t.parts.some(x => x.k === 'name' && byName.get(scoped(x.name, ctx.scope))?.kind === 'type')) {
        const expand = x => {
          const d = x.k === 'name' && byName.get(scoped(x.name, ctx.scope));
          if (d?.kind !== 'type') return x;
          const { params } = aliasParams(d);
          const sub = new Map(params.map((p, i) => [p.name, x.args[i] ?? parseType(p.def ?? 'unknown')]));
          return substT(parseType(aliasBody(d)), sub);
        };
        return lower({ k: 'inter', parts: t.parts.map(expand).flatMap(x => x.k === 'inter' ? x.parts : [x]) }, ctx);
      }
      // Bun's XOR<A, B> parts are unions: distribute.
      if (t.parts.some(x => x.k === 'name' && /(^|\.)XOR$/.test(x.name))) return lower({ k: 'inter', parts: t.parts.map(x => x.k === 'name' && /(^|\.)XOR$/.test(x.name) ? { k: 'union', alts: x.args } : x) }, ctx);
      const key = t.parts.map(typeText).join(' & ');
      const name = host.intersections?.[key];
      if (!name) fail(`the intersection ${key} is not named in the tier file's intersections`);
      used.add(`intersection:${key}`);
      return intersection(key, name, t.parts, ctx);
    }
    default: fail(`the type ${typeText(t)} is not lowered`);
    }
  }
  function lowerUnion(alts, ctx) {
    let nullable = false;
    let rest = [];
    for (const a of alts) {
      if (isNullish(a)) { if (!(ctx.optional && a.name === 'undefined')) nullable = true; continue; }
      rest.push(a);
    }
    // Only null or undefined (`replacer?: undefined | null`): any value is passed through.
    if (!rest.length) return 'any';
    if (rest.some(isPromise)) {
      let inner = rest.map(a => isPromise(a) ? a.args[0] ?? { k: 'name', name: 'void', args: [] } : a);
      if (ctx.role === 'cbResult' && inner.some(a => !isVoid(a))) inner = inner.filter(a => !isVoid(a));
      const unique = [...new Map(inner.map(a => [typeText(a), a])).values()];
      const it = unique.length === 1 ? lower(unique[0], { ...ctx, role: 'promised' }) : lowerUnion(unique, { ...ctx, role: 'promised' });
      return `Promise<${it}${nullable && !it.endsWith('?') ? '?' : ''}>`;
    }
    if (ctx.role === 'cbResult' && rest.some(isVoid) && rest.some(a => !isVoid(a))) rest = rest.filter(a => !isVoid(a));
    // Intersections of aliases of unions (Bun's XOR<…> & XOR<…>): spread into their object alternatives first.
    rest = spreadObjects(rest, ctx.scope);
    if (rest.length > 1 && rest.every(a => objectMembers(a, ctx.scope))) {
      const base = mergeObjects(rest, ctx.enumName ?? `${ctx.owner}${capital(ctx.member)}`, ctx);
      return nullable ? `${base}?` : base;
    }
    // A union of number literals (`-1 | 0 | 1`): a number.
    if (rest.length && rest.every(a => a.k === 'num')) return nullable ? 'double?' : 'double';
    if (rest.some(a => a.k === 'num') && rest.every(a => a.k === 'num' || (a.k === 'name' && a.name === 'number'))) return nullable ? 'double?' : 'double';
    const lits = rest.filter(a => a.k === 'lit');
    let base;
    if (lits.length && lits.length === rest.length && lits.every(l => typeof l.value === 'string')) base = enumOf(lits.map(l => l.value), ctx.enumName ?? `${ctx.owner}${capital(ctx.member)}`, ctx);
    else if (lits.length && rest.every(a => (a.k === 'lit' && typeof a.value === 'string') || anyString(a) || (a.k === 'name' && a.name === 'string'))) base = 'DOMString';
    else if (rest.length === 1) base = lower(rest[0], { ...ctx, enumName: null });
    else {
      // String literals beside other types: their enum (a member of the union); object types beside
      // others: one dictionary (`<name>Object`).
      let nonLit = rest.filter(a => a.k !== 'lit');
      const objs = nonLit.filter(a => a.k !== 'name' && objectMembers(a, ctx.scope));
      if (objs.length) {
        const lean = `${ctx.enumName ?? `${ctx.owner}${capital(ctx.member)}`}Object`;
        const merged = objs.length > 1 ? mergeObjects(objs, lean, ctx) : objectType({ kind: 'literal', body: objs[0].body, lean }, [], ctx);
        nonLit = [...nonLit.filter(a => !objs.includes(a)), { k: 'name', name: '__idl', idl: merged, args: [] }];
      }
      const members = lits.length ? [lits.length === 1 && typeof lits[0].value === 'string' ? 'DOMString' : enumOf(lits.map(l => l.value), `${ctx.enumName ?? `${ctx.owner}${capital(ctx.member)}`}Literal`, ctx), ...nonLit.map(a => lower(a, { ...ctx, enumName: null }))]
        : rest.map(a => lower(a, { ...ctx, enumName: null }));
      const uniq = [...new Set(members.map(m => m.replace(/\?$/, '')))];
      if (members.some(m => m.endsWith('?'))) nullable = true;
      // `object` (a Date, a Map, an object of another module) beside other types: the union is any value (Data).
      if (uniq.includes('any') || uniq.includes('object')) base = 'any';
      else if (uniq.length === 1) base = uniq[0];
      else {
        // A union is a typedef named after its alias or member (`FsFileSeekOffset`), so that it is Deno's own type.
        // Named after its alias, else after its members as Lasm.JS.Web names unions (`DOMStringOrURL`).
        const keyName = x => { const q = x.replace(/\?$/, ''); let m;
          if ((m = /^sequence<(.*)>$/.exec(q))) return 'SequenceOf' + keyName(m[1]);
          if ((m = /^record<[^,]*,\s*(.*)>$/.exec(q))) return 'RecordOf' + keyName(m[1]);
          if ((m = /^Promise<(.*)>$/.exec(q))) return 'PromiseOf' + keyName(m[1]);
          return q.replace(new RegExp(`^${host.name}_`), '').split(' ').map(capital).join(''); };
        let lean = ctx.enumName ?? uniq.map(keyName).join('Or');
        const text = n => `${attrs({ LasmLeanModule: '@', LasmName: n })}\ntypedef (${uniq.join(' or ')}) ${idl(n)};`;
        if (defs.has(idl(lean)) && defs.get(idl(lean)).text !== text(lean)) lean += 'Union';
        base = addDef(idl(lean), ctx.mod, `${attrs({ LasmLeanModule: '@', LasmName: lean })}\ntypedef (${uniq.join(' or ')}) ${idl(lean)};`, ctx.where);
      }
    }
    return nullable && base !== 'any' && !base.endsWith('?') ? `${base}?` : base;
  }
  function lowerName(t, ctx) {
    const n = strip(t.name);
    if (t.name === '__idl') return t.idl;
    switch (n) {
    case 'string': return 'DOMString';
    case 'boolean': case 'true': case 'false': return 'boolean';
    case 'bigint': return 'bigint';
    case 'void': case 'undefined': return 'undefined';
    case 'null': return 'undefined';
    case 'never': return 'undefined';
    case 'this': return ctx.self ?? fail('`this` outside a class or interface');
    case 'any': case 'unknown': return 'any';
    case 'object': case 'Date': case 'Object': case 'Error': return 'object';
    case 'number': {
      const spec = ctx.intKey && host.integers?.[ctx.intKey];
      if (!spec) return 'double';
      if (!squash((ctx.doc ?? '').replace(/^\s*\/?\*+\/?/gm, '')).includes(spec.quote)) fail(`integers[${ctx.intKey}] quotes "${spec.quote}", which its doc comment no longer says`);
      used.add(`integer:${ctx.intKey}`);
      return spec.type;
    }
    case 'Promise': return `Promise<${t.args.length ? lower(t.args[0], { ...ctx, role: 'promised', intKey: null }) : 'undefined'}>`;
    case 'Record': return `record<DOMString, ${lower(t.args[1], { ...ctx, intKey: null })}>`;
    case 'NodeJS.Dict': case 'Dict': return `record<DOMString, ${lower(t.args[0], { ...ctx, intKey: null })}>`;
    case 'Required': case 'Partial': case 'Readonly': return lower(t.args[0], ctx);
    case 'SyntaxError': case 'TypeError': case 'RangeError': return 'object';
    case 'AsyncIterable': case 'AsyncIterableIterator': case 'AsyncGenerator': {
      const el = lower(t.args[0], { ...ctx, role: 'result', intKey: null });
      const lean = `${el.replace(/\?$/, '').replace(new RegExp(`^${host.name}_`), '').replace(/[^A-Za-z0-9]/g, '')}AsyncIterable`;
      return addDef(idl(lean), ctx.mod, `// AsyncIterable<${typeText(t.args[0])}>\n${attrs({ LasmLeanModule: '@', LasmName: lean, LasmPath: `AsyncIterable<${typeText(t.args[0])}>` })}\ninterface ${idl(lean)} {\n  async iterable<${el}>;\n};`, ctx.where);
    }
    }
    // Bun's XOR<A, B> (exactly one of two option shapes, written with mapped types): the union A | B.
    if (/(^|\.)XOR$/.test(n)) return lower({ k: 'union', alts: t.args }, ctx);
    // Pick<T, …> and Omit<T, …>: T (the members outside the pick are optional members a caller leaves out).
    if (n === 'Pick' || n === 'Omit') return lower(t.args[0], ctx);
    if (n === 'Map' || n === 'Set' || n === 'WeakMap') return 'object';
    if (sequences.has(n)) return `sequence<${lower(t.args[0], { ...ctx, intKey: null })}>`;
    if (bytes.has(n)) return 'Uint8Array';
    if (n in (host.typeNames ?? {})) { used.add(`type:${n}`); return host.typeNames[n]; }
    // A namespace alias (`SpawnOptions` = `Spawn`).
    { const [head, ...tail] = n.split('.'); const al = tail.length && byName.get(head); if (al?.kind === 'nsalias') return lowerName({ ...t, name: [al.target, ...tail].join('.') }, ctx); }
    // A name inside a nested namespace (`Filter` in `Bun.Image`) is that namespace's first.
    for (let sc = ctx.scope ?? ''; sc; sc = sc.split('.').slice(0, -1).join('.')) if (byName.has(`${sc}.${n}`)) return lowerName({ ...t, name: `${sc}.${n}` }, { ...ctx, scope: '' });
    const d = byName.get(n);
    if (!d) fail(`the type ${typeText(t)} is neither declared in ${G} nor in the tier file's typeNames`);
    const why = isExcluded(n, d.doc, d);
    if (why) fail(`the type ${n} is not lowered (${why})`);
    if (d.kind === 'enum') return addDef(idl(leanOf(n)), moduleOfCategory(d.doc, n) ?? ctx.mod, `// enum ${G}.${n} (a TypeScript enum: its numbers)\n${attrs({ LasmLeanModule: '@', LasmName: leanOf(n), LasmPath: `${G}.${n}` })}\ntypedef unsigned long ${idl(leanOf(n))};`, n) && idl(leanOf(n));
    if (d.kind === 'type') {
      const { params } = aliasParams(d);
      const args = t.args.map(a => substT(a, ctx.subst));
      const dflt = p => parseType(host.defaults?.[`${n}.${p.name}`] ?? host.defaults?.[p.name] ?? host.defaults?.[strip(p.def ?? '')] ?? p.def ?? p.constraint ?? 'unknown');
      const subst = new Map(params.map((p, i) => [p.name, args[i] ?? dflt(p)]));
      // An instantiation other than the defaults adds its arguments' names (ServeHandlerUnixAddr).
      const isDefault = params.every((p, i) => !args[i] || strip(typeText(args[i])) === strip(typeText(dflt(p))));
      const aliasLean = isDefault ? leanOf(n) : `${leanOf(n)}${args.map(a => capital(strip(typeText(a)).replace(/<.*$/, '').replace(/[^A-Za-z0-9]/g, ''))).join('')}`;
      // A type alias the declarations compute (an indexed type), stated plainly in the tier file's overrides.
      const ov = host.overrides?.[n];
      if (ov) used.add(`override:${n}`);
      const rhs = parseType(ov?.type ?? aliasBody(d));
      // An alias of an instantiation is that instantiation, named by the alias.
      if (rhs.k === 'name' && !params.length && byName.get(strip(rhs.name))?.kind !== 'type' && rhs.args.length) return objectRef(strip(rhs.name), rhs.args, { ...ctx, aliasName: leanOf(n) });
      void t;
      if (rhs.k === 'fn') return lowerCallback(rhs, { ...ctx, subst, callbackName: aliasLean, mod: moduleOfCategory(d.doc, n) ?? ctx.mod, signature: squash(d.text.replace(/^export\s+/, '')) });
      if (rhs.k === 'obj') return objectType({ kind: 'literal', body: rhs.body, lean: aliasLean, doc: d.doc, file: d.file, path: `${G}.${n}` }, [], { ...ctx, mod: moduleOfCategory(d.doc, n) ?? ctx.mod });
      return lower(rhs, { ...ctx, subst, enumName: aliasLean, owner: aliasLean, member: '', scope: n.split('.').slice(0, -1).join('.'), mod: moduleOfCategory(d.doc, n) ?? ctx.mod });
    }
    return objectRef(n, t.args.map(a => substT(a, ctx.subst)), ctx);
  }
  function lowerCallback(fn, ctx) {
    const lean = ctx.callbackName ?? `${ctx.owner}${capital(ctx.member)}`;
    const name = idl(lean);
    const params = fn.params.filter(p => p.name !== 'this').map(p => {
      const t = parseType(p.type);
      if (p.rest) return `${lower(t.k === 'array' ? t.inner : t, { ...ctx, role: 'cbArg', intKey: null, callbackName: null, enumName: null, owner: lean, member: p.name })}... ${p.name}`;
      return `${p.optional ? 'optional ' : ''}${lower(t, { ...ctx, role: 'cbArg', intKey: null, optional: p.optional, callbackName: null, enumName: null, owner: lean, member: p.name, where: `${ctx.where} (${p.name})` }).replace(p.optional ? /\?$/ : /$^/, '')} ${p.name}`;
    });
    const ret = lower(fn.ret, { ...ctx, role: 'cbResult', intKey: null, optional: false, callbackName: null, enumName: null, owner: lean, member: 'Result' });
    const sig = ctx.signature ?? typeText(fn);
    return addDef(name, ctx.mod, `// ${sig}\n${attrs({ LasmLeanModule: '@', LasmName: lean, LasmSignature: sig })}\ncallback ${name} = ${ret} (${params.join(', ')});`, ctx.where);
  }

  /** A reference to a declared class or interface, instantiated. */
  function objectRef(n, args, ctx) {
    const d = byName.get(n);
    if (!d || !['interface', 'class'].includes(d.kind)) fail(`${n} is not an interface or class`);
    const { params } = typeParams(d.header);
    // The arguments, with defaults (a default that the tier file overrides first).
    const eff = params.map((p, i) => args[i] ? args[i] : parseType(host.defaults?.[`${n}.${p.name}`] ?? host.defaults?.[p.name] ?? host.defaults?.[strip(p.def ?? '')] ?? p.def ?? p.constraint ?? 'unknown'));
    const isDefault = params.every((p, i) => !args[i] || strip(typeText(args[i])) === strip(typeText(parseType(host.defaults?.[`${n}.${p.name}`] ?? host.defaults?.[p.name] ?? host.defaults?.[strip(p.def ?? '')] ?? p.def ?? p.constraint ?? 'unknown'))));
    for (const p of params) if (host.defaults?.[p.name]) used.add(`default:${p.name}`);
    const argNames = eff.map(a => strip(typeText(a)).replace(/<.*$/, '').replace(/[^A-Za-z0-9]/g, ''));
    const aliasKey = `${n}<${eff.map(a => strip(typeText(a))).join(', ')}>`;
    const lean = isDefault ? leanOf(n) : (host.instances?.[aliasKey] ?? ctx.aliasName ?? aliasFor(n, eff) ?? `${leanOf(n)}${argNames.map(capital).join('')}`);
    if (host.instances?.[aliasKey]) used.add(`instance:${aliasKey}`);
    return objectType({ kind: d.kind, decl: d, lean, path: `${G}.${n}`, subst: new Map(params.map((p, i) => [p.name, eff[i]])), key: aliasKey }, args, ctx);
  }
  function aliasFor(n, eff) {
    const want = `${n}<${eff.map(a => strip(typeText(a))).join(', ')}>`;
    for (const [an, d] of byName) if (d.kind === 'type') {
      const rhs = (() => { try { return parseType(aliasBody(d)); } catch { return null; } })();
      if (rhs?.k === 'name' && strip(rhs.name) === n && `${n}<${rhs.args.map(a => strip(typeText(a))).join(', ')}>` === want) return leanOf(an);
    }
    return null;
  }
  function intersection(key, lean, parts, ctx) {
    const name = idl(lean);
    if (objectRequests.has(`inter:${key}`)) return name;
    objectRequests.set(`inter:${key}`, name);
    const [a, ...rest] = parts;
    const base = lower(a, { ...ctx, role: 'field' });
    const lines = [];
    for (const b of rest) {
      let ms;
      if (b.k === 'obj') ms = membersOf({ ...blank(b.body), file: '' }, 0, b.body.length);
      else if (b.k === 'name' && byName.get(strip(b.name))?.kind === 'interface') { const bd = byName.get(strip(b.name)); ms = [bd, ...bd.more].flatMap(x => membersOf(x.src, x.body[0], x.body[1])); }
      else fail(`intersection ${key}: ${typeText(b)} is not an object type`);
      const inherited = new Set();
      for (let p0 = base; p0 && dictFieldNames.has(p0);) { for (const f of dictFieldNames.get(p0).names) inherited.add(f); p0 = dictFieldNames.get(p0).parent; }
      for (const m of ms) {
        // A member the base declares too (a narrower type: `compact: false`): the base's.
        if (inherited.has(m.name)) continue;
        lines.push(`  // ${m.text}`);
        lines.push(`  ${m.optional ? '' : 'required '}${lower(parseType(m.type), { ...ctx, owner: lean, member: m.name, role: 'field', optional: m.optional })} ${m.name};`);
      }
    }
    addDef(name, ctx.mod, `// options ${key}\n${attrs({ LasmLeanModule: '@', LasmName: lean, LasmPath: `${G}.${key}` })}\ndictionary ${name} : ${base} {\n${lines.join('\n')}\n};`, key);
    return name;
  }

  /** An object type (class, interface or literal), lowered once per instantiation. */
  function objectType(o, args, ctx) {
    const name = idl(o.lean);
    const reqKey = o.kind === 'literal' ? `lit:${o.lean}` : `${o.key}`;
    if (objectRequests.has(reqKey)) return objectRequests.get(reqKey);
    objectRequests.set(reqKey, name);
    const d = o.decl;
    const mod = (d && moduleOfCategory(d.doc, o.path, d.file)) ?? ctx.mod;
    const subst = o.subst ?? new Map();
    // Members (interfaces merged), and the heritage.
    let members = [], heritage = [], rest = '';
    if (o.kind === 'literal') members = membersOf({ ...blank(o.body), file: o.file ?? '' }, 0, o.body.length);
    else for (const part of [d, ...(d.more ?? [])]) {
      members.push(...(d.kind === 'class' ? classMembers(part.src, part.body[0], part.body[1]) : membersOf(part.src, part.body[0], part.body[1])));
      rest = typeParams(part.header).rest;
      heritage.push(...heritageOf(rest));
    }
    const lean = o.lean;
    const path = o.path ?? `${G}.${lean}`;
    let parent = null;
    const lines = [];
    const scope = d ? strip(d.name).split('.').slice(0, -1).join('.') : (ctx.scope ?? '');
    const ctxM = m => ({ where: `${host.name} ${path}.${m.name}`, owner: lean, member: m.name, mod, doc: m.doc, subst, intKey: `${path.slice(G.length + 1)}.${m.name}`, self: name, scope });
    for (const h of heritage) {
      const hn = strip(h.name ?? '');
      if (['Disposable', 'AsyncDisposable'].includes(hn)) continue;
      if (['AsyncIterable', 'AsyncIterableIterator'].includes(hn)) {
        const el = tryMember(`${path} extends ${hn}`, () => lower(h.args[0], { where: path, owner: lean, member: 'value', mod, subst, role: 'result' }));
        if (el) lines.push(`  async iterable<${el}>;`);
        continue;
      }
      if (hn in (host.typeNames ?? {}) && host.typeNames[hn] !== 'any') { if (parent) fail(`${path}: two parents`); parent = host.typeNames[hn]; used.add(`type:${hn}`); continue; }
      const hd = byName.get(scoped(hn, scope));
      if (!hd) { exclude(`${path} extends ${typeText(h)}`, 'not declared in the namespace'); continue; }
      const ref = tryMember(`${path} extends ${hn}`, () => lower(h, { where: path, owner: lean, member: 'parent', mod, subst, role: 'field', scope: d ? strip(d.name).split('.').slice(0, -1).join('.') : '' }));
      if (!ref) continue;
      if (!parent) parent = ref;
      else fail(`${path}: two lowered parents (${parent}, ${ref})`);
    }
    // Handle or dictionary.
    let as = host.as?.[lean] ?? host.as?.[path.slice(G.length + 1)];
    if (as) used.add(`as:${host.as[lean] ? lean : path.slice(G.length + 1)}`);
    if (!as) as = d?.kind === 'class' || members.some(m => m.kind === 'method' && !m.optional && !m.name.startsWith('['))
      || members.some(m => m.kind === 'property' && /^Promise\b/.test(m.type)) || heritage.some(h => h.k === 'name' && /^(AsyncIterable|AsyncIterableIterator|ReadableStream|WritableStream|EventTarget)$/.test(h.name))
      || (parent && !/\bdictionary\s/.test(defs.get(parent)?.text ?? 'interface ')) ? 'interface' : 'dictionary';
    // Members, with overloads named.
    const groups = new Map();
    for (let m of members) {
      const key = `${path.slice(G.length + 1)}.${m.name}`;
      if (m.private) continue;
      if (m.name.startsWith('[')) {
        if (/Symbol\.asyncIterator/.test(m.name)) { exclude(key, 'the async iterator: lowered as `async iterable` (values and an iterator)'); continue; }
        exclude(key, 'a Symbol-keyed member (explicit resource management or a well-known Symbol), which Lean code does not call'); continue;
      }
      if (m.kind === 'index') { exclude(key, 'an index signature'); continue; }
      if (m.kind === 'call') { exclude(`${key}${m.type.slice(0, 40)}`, 'a call or construct signature (the object is itself a function, called with Lasm.JS\'s Value.call)'); continue; }
      const why = isExcluded(key, m.doc, d);
      if (why) { exclude(key, why); continue; }
      const ov = host.overrides?.[key];
      if (ov) {
        used.add(`override:${key}`);
        // An overridden rest parameter (a conditional rest tuple) is one optional parameter.
        m = { ...m, params: m.params?.map(p => ov.params?.[p.name] ? { ...p, type: ov.params[p.name], rest: false, optional: p.optional || p.rest } : p), type: ov.type ?? m.type, text: `${m.text} (read as ${ov.type ?? ''}${ov.params ? ` ${JSON.stringify(ov.params)}` : ''}: ${ov.reason})` };
      }
      const gk = `${m.static ? 'static ' : ''}${m.kind === 'ctor' ? 'constructor' : m.name}`;
      if (!groups.has(gk)) groups.set(gk, []);
      groups.get(gk).push(m);
    }
    for (const [gk, group] of groups) {
      const names = tryMember(`${path}.${gk}`, () => overloadNames(group, `${path.slice(G.length + 1)}`));
      if (!names) continue;
      group.forEach((m, i) => {
        const line = tryMember(`${path}.${m.name}`, () => {
          const c = ctxM(m);
          const mSubst = new Map([...subst, ...methodTypeParams(m)]);
          if (as === 'dictionary' && reservedNames.has(m.name)) { exclude(`${path.slice(G.length + 1)}.${m.name}`, `a dictionary member named ${m.name}, which WebIDL reserves`); return null; }
          if (as === 'dictionary') {
            const t = m.kind === 'method' ? lowerCallback({ k: 'fn', params: m.params, ret: parseType(m.type) }, { ...c, subst: mSubst })
              : lower(parseType(m.type), { ...c, role: 'field', optional: m.optional, subst: mSubst });
            return `  // ${m.text}\n  ${m.optional ? '' : 'required '}${m.optional ? t.replace(/\?$/, '') : t} ${escape(m.name)};`;
          }
          const a = { LasmSignature: m.text, LasmLeanName: names[i] !== (m.kind === 'ctor' ? 'new' : m.name) ? names[i] : null, LasmName: reservedNames.has(m.name) && m.kind !== 'ctor' ? m.name : null };
          if (m.kind === 'property') {
            const t = lower(parseType(m.type), { ...c, role: 'attr', optional: false, subst: mSubst });
            // Writable: a class's field that is not readonly, and an interface's function-typed property (an event
            // handler: `onchange`); other interface properties describe what the runtime gives (readonly).
            const ro = d?.kind === 'class' ? !!m.readonly : (!!m.readonly || !/=>/.test(m.type));
            return `  // ${m.text}\n  ${attrs(a)} ${m.static ? 'static ' : ''}${ro ? 'readonly ' : ''}attribute ${m.optional && !t.endsWith('?') && t !== 'any' ? t + '?' : t} ${escape(m.name)};`;
          }
          const args = argList(m.params, { ...c, subst: mSubst, member: names[i] });
          if (m.kind === 'ctor') return `  // ${m.text}\n  ${attrs(a)} constructor(${args});`;
          return `  // ${m.text}\n  ${attrs(a)} ${m.static ? 'static ' : ''}${lower(parseType(m.type), { ...c, role: 'result', subst: mSubst })} ${escape(m.name)}(${args});`;
        });
        if (line) lines.push(line);
      });
      void gk;
    }
    // A dictionary member its parent already declares (TypeScript re-declares it narrower) is the parent's.
    if (as === 'dictionary' && parent) {
      const inherited = new Set();
      for (let p0 = parent; p0 && dictFieldNames.has(p0);) { for (const f of dictFieldNames.get(p0).names) inherited.add(f); p0 = dictFieldNames.get(p0).parent; }
      for (let k = lines.length - 1; k >= 0; k--) { const f = / (\S+);$/.exec(lines[k])?.[1]; if (f && inherited.has(f.replace(/^_/, ''))) lines.splice(k, 1); }
    }
    if (as === 'dictionary') dictFieldNames.set(name, { parent, names: lines.map(l => / (\S+);$/.exec(l)?.[1]?.replace(/^_/, '')).filter(Boolean) });
    const head = attrs({ LasmLeanModule: '@', LasmFile: d?.file?.split('/').at(-1), LasmName: lean, LasmModule: d?.jsModule, LasmPath: d?.jsModule ? path.slice(G.length + 1) : path });
    addDef(name, mod, `// ${as === 'interface' ? (d?.kind === 'class' ? 'class' : 'interface') : 'object'} ${path}${o.key && o.key !== `${path.slice(G.length + 1)}<>` && !o.key.endsWith('<>') ? ` (${o.key})` : ''}\n${head}\n${as} ${name}${parent ? ' : ' + parent : ''} {\n${lines.join('\n')}\n};`, path);
    return name;
  }
  const escapeWords = new Set(['any', 'async', 'attribute', 'bigint', 'boolean', 'byte', 'callback', 'const', 'constructor', 'deleter', 'dictionary', 'double', 'enum',
    'float', 'getter', 'includes', 'inherit', 'interface', 'iterable', 'long', 'maplike', 'mixin', 'namespace', 'object', 'octet', 'optional', 'or', 'partial',
    'readonly', 'record', 'required', 'sequence', 'setlike', 'setter', 'short', 'static', 'stringifier', 'symbol', 'typedef', 'undefined', 'unrestricted', 'unsigned',
    'true', 'false', 'null', 'Infinity', 'NaN']);
  // Names WebIDL reserves even escaped: written `toString_` with the real name in LasmName (as Lasm.JS.Node does).
  const reservedNames = new Set(['toString', 'toJSON', 'prototype', 'constructor']);
  const escape = n => reservedNames.has(n) ? n + '_' : escapeWords.has(n) ? '_' + n : n;
  function methodTypeParams(m) {
    const out = [];
    if (!m.text) return out;
    const g = /^(?:static\s+|readonly\s+)*[\w$]+\??\s*(<[^(]*>)\s*\(/.exec(m.text);
    if (g) for (const p of typeParams(g[1]).params) out.push([p.name, parseType(p.def ?? p.constraint ?? 'unknown')]);
    return out;
  }
  function argList(params, c) {
    return params.filter(p => p.name !== 'this').map(p => {
      const t = parseType(p.type);
      const cc = { ...c, role: 'arg', optional: p.optional, intKey: `${c.intKey}.${p.name}`, owner: `${c.owner}${capital(c.member)}`, member: p.name, where: `${c.where} (${p.name})` };
      if (p.rest) return `${lower(t.k === 'array' ? t.inner : t.k === 'name' && sequences.has(t.name) ? t.args[0] : t, cc).replace(/\?$/, '')}... ${escape(p.name)}`;
      let lt = lower(t, cc);
      if (p.optional) lt = lt.replace(/\?$/, '');
      return `${p.optional ? 'optional ' : ''}${lt} ${escape(p.name)}`;
    }).join(', ');
  }
  /** Lean names of a group of overloads (see the rules above). */
  function overloadNames(group, owner) {
    const base = group[0].kind === 'ctor' ? 'new' : group[0].name;
    if (group.length === 1) return [base];
    const first = group[0].params ?? [];
    const names = group.map((m, i) => {
      const key = m.sigKey ?? sigKey(owner, base, m.params);
      if (host.names?.[key]) { used.add(`name:${key}`); return host.names[key]; }
      if (i === 0) return base;
      const ps = m.params ?? [];
      const idx = ps.findIndex((p, j) => first[j]?.name !== p.name);
      if (idx >= 0) return `${base}With${capital(ps[idx].name)}`;
      const tdx = ps.findIndex((p, j) => first[j]?.type !== p.type);
      if (tdx >= 0) return `${base}With${typeNameOf(ps[tdx].type)}`;
      return `${base}${ps.length}`;
    });
    // Overloads told apart by keyword arguments (Redis's `"FNX"`, `"WITHSCORES"`): the keywords the first overload lacks.
    const lits = m => (m.params ?? []).map(p => /^\s*"([^"]*)"\s*$/.exec(p.type)?.[1]).filter(Boolean);
    names.forEach((n, i) => {
      if (i === 0 || names.indexOf(n) === i && names.lastIndexOf(n) === i) return;
      const k = lits(group[i]).filter(l => !lits(group[0]).includes(l)).map(l => capital(l.toLowerCase().replace(/[^a-z0-9]+/g, '')));
      if (k.length && !(m => m.sigKey && host.names?.[m.sigKey])(group[i])) names[i] = `${base}${k.join('')}`;
    });
    const dup = names.find((n, i) => names.indexOf(n) !== i);
    if (dup) fail(`${owner}.${base}: two overloads named ${dup}; name them in the tier file's names (${group.map(m => m.sigKey ?? sigKey(owner, base, m.params)).join(' | ')})`);
    return names;
  }
  const sigKey = (owner, base, params) => `${owner ? owner + '.' : ''}${base}(${(params ?? []).map(p => `${p.rest ? '...' : ''}${p.name}${p.optional ? '?' : ''}: ${normType(p.type)}`).join(', ')})`;
  const normType = x => { try { return typeText(parseType(x)); } catch { return x.replace(/^[&|]\s*/, ''); } };
  const typeNameOf = t => strip(t).replace(/<.*$/, '').split(/[^A-Za-z0-9]+/).filter(Boolean).map(capital).join('');

  // ---------- the namespace: functions, constants, classes ----------
  const nsLines = new Map(); // module → lines
  /** Lines of the namespace definition of a Lean module, a nested namespace (`dns` of `Bun.dns.lookup`) and a JavaScript module. */
  const pushNs = (mod, line, sub = '', jsModule = '') => { const k = `${mod}|${sub}|${jsModule}`; if (!nsLines.has(k)) nsLines.set(k, []); nsLines.get(k).push(line); };
  const lastName = n => n.split('.').at(-1);
  const subOf = n => n.split('.').slice(0, -1).join('.');
  for (const [n, overloads] of fns) {
    if (n.includes('.')) { const top = n.split('.')[0]; if (top in host.exclude) { used.add(top); exclude(`${G}.${top}`, host.exclude[top]); continue; } }
    const taken = [];
    for (const o of overloads) {
      const sig = functionSignature(o.text);
      const key = sigKey('', n, sig.params);
      const cat = categoryOf(o.doc);
      const why = (cat && host.excludeCategories?.[cat]) ?? isExcluded(key, o.doc, o) ?? isExcluded(n, '', o);
      if (cat && host.excludeCategories?.[cat]) used.add(`category:${cat}`);
      if (why) { exclude(`${G}.${key}`, why); continue; }
      let text = squash(o.text.replace(/^export\s+(declare\s+)?/, ''));
      const fov = host.overrides?.[n];
      if (fov) {
        used.add(`override:${n}`);
        sig.params = sig.params.map(p => fov.params?.[p.name] ? { ...p, type: fov.params[p.name] } : p);
        if (fov.type) sig.type = fov.type;
        text += ` (read as ${fov.type ?? ''}${fov.params ? ` ${JSON.stringify(fov.params)}` : ''}: ${fov.reason})`;
      }
      // A parameter whose type is a union of object types: one overload per alternative (the tier file's split names them).
      const split = host.split?.[key];
      if (split) {
        used.add(`split:${key}`);
        let variants = [sig.params];
        for (const [pname, pnames] of Object.entries(split)) variants = variants.flatMap(v => {
          const i = v.findIndex(p => p.name === pname);
          const alts = flat(parseType(v[i].type));
          if (alts.length !== pnames.length) fail(`${key}: split ${pname} names ${pnames.length} alternatives of ${alts.length}`);
          return alts.map((a, k) => v.map((p, j) => j === i ? { ...p, name: pnames[k], type: typeText(a) } : p));
        });
        for (const v of variants) taken.push({ o, sig: { ...sig, params: v }, name: n, params: v, kind: 'method', text, sigKey: sigKey('', n, v) });
      } else taken.push({ o, sig, name: n, params: sig.params, kind: 'method', text, sigKey: key });
    }
    if (!taken.length) continue;
    const names = tryMember(`${G}.${n}`, () => overloadNames(taken, ''));
    if (!names) continue;
    taken.forEach((t, i) => {
      const mod = moduleOfCategory(t.o.doc, n, t.o.file) ?? fail(`${G}.${n} has no @category`);
      const line = tryMember(`${G}.${n}`, () => {
        const g = /function\s+[\w$]+\s*(<[^(]*>)\s*\(/.exec(t.o.text);
        const subst = new Map(g ? typeParams(g[1]).params.map(p => [p.name, parseType(p.def ?? p.constraint ?? 'unknown')]) : []);
        const c = { where: `${host.name} ${G}.${n}`, owner: '', member: n, mod, doc: t.o.doc, subst, intKey: n, scope: subOf(n) };
        const camel = names[i].split('.').map((x, k) => k ? capital(x) : x).join('');
        const ret = lower(parseType(t.sig.type), { ...c, role: 'result', owner: capital(camel), member: 'Result' });
        const args = argList(t.params, { ...c, owner: '', member: camel });
        const a = { LasmFile: t.o.file.split('/').at(-1), LasmSignature: `${G}.${t.text.replace(/^function\s+/, '')}`, LasmLeanName: names[i] !== n ? names[i] : null };
        return `  // ${G}.${t.text.replace(/^function\s+/, '')}\n  ${attrs({ ...a, LasmLeanName: a.LasmLeanName ? lastName(a.LasmLeanName) : null })} ${ret} ${escape(lastName(n))}(${args});`;
      });
      if (line) pushNs(mod, line, subOf(n), t.o.jsModule ?? '');
    });
  }
  for (const [n, d] of byName) {
    const top = n.split('.')[0];
    if (n.includes('.')) { if (top in host.exclude) { used.add(top); exclude(`${G}.${top}`, host.exclude[top]); continue; } }
    if (d.kind === 'const') {
      const cat = categoryOf(d.doc);
      const why = (cat && host.excludeCategories?.[cat]) ?? isExcluded(n, d.doc, d);
      if (why) { exclude(`${G}.${n}`, why); continue; }
      const mod = moduleOfCategory(d.doc, n, d.file) ?? fail(`${G}.${n} has no @category`);
      const line = tryMember(`${G}.${n}`, () => {
        const c = { where: `${host.name} ${G}.${n}`, owner: n.split('.').map(capital).join(''), member: '', mod, doc: d.doc, intKey: n, role: 'attr', scope: subOf(n) };
        const cov = host.overrides?.[n];
        if (cov) used.add(`override:${n}`);
        let t = parseType(cov?.type ?? d.type);
        const type = t.k === 'obj' ? objectType({ kind: 'literal', body: t.body, lean: n.split('.').map(capital).join(''), doc: d.doc, file: d.file, path: `${G}.${n}` }, [], c) : lower(t, c);
        return `  // ${G}.${n}: ${d.type}\n  ${attrs({ LasmFile: d.file.split('/').at(-1), LasmSignature: `${d.mutable ? 'var' : 'const'} ${G}.${n}: ${d.type}` })} readonly attribute ${type} ${escape(lastName(n))};`;
      });
      if (line) pushNs(mod, line, subOf(n), d.jsModule ?? '');
    } else if (d.kind === 'class') {
      const cat = categoryOf(d.doc);
      const why = (cat && host.excludeCategories?.[cat]) ?? isExcluded(n, d.doc, d);
      if (cat && host.excludeCategories?.[cat]) used.add(`category:${cat}`);
      if (why) { exclude(`${G}.${n}`, why); continue; }
      tryMember(`${G}.${n}`, () => objectRef(n, [], { where: `${host.name} ${G}.${n}`, mod: moduleOfCategory(d.doc, n, d.file) }));
    }
  }
  if (problems.length) fail(`${host.name}: ${problems.length} members are neither lowered nor excluded:\n  ${problems.join('\n  ')}`);
  for (const k of Object.keys(host.exclude)) if (!used.has(k) && !excluded.some(([w]) => w.endsWith(`.${k}`) || w === `${G}.${k}` || w.startsWith(`${G}.${k}(`))) fail(`${host.name}: exclude ${k} matches nothing`);
  for (const k of Object.keys(host.overrides ?? {})) if (!used.has(`override:${k}`)) fail(`${host.name}: override ${k} matches no member`);
  for (const k of Object.keys(host.split ?? {})) if (!used.has(`split:${k}`)) fail(`${host.name}: split ${k} matches no overload`);
  for (const k of Object.keys(host.names ?? {})) if (!used.has(`name:${k}`)) fail(`${host.name}: names ${k} matches no overload`);
  for (const k of Object.keys(host.as ?? {})) if (!used.has(`as:${k}`)) fail(`${host.name}: as ${k} matches no lowered type`);
  for (const k of Object.keys(host.intersections ?? {})) if (!used.has(`intersection:${k}`)) fail(`${host.name}: intersection ${k} is not used`);
  for (const k of Object.keys(host.integers ?? {})) if (!used.has(`integer:${k}`)) fail(`${host.name}: integers ${k} is not used`);
  for (const k of Object.keys(host.instances ?? {})) if (!used.has(`instance:${k}`)) fail(`${host.name}: instances ${k} is not used`);

  // ---------- modules ----------
  // A type's module is the earliest (in the tier file's order) of its own category's and its users'.
  const order = host.modules.map(m => m.name);
  const rank = m => { const r = order.indexOf(m); if (r < 0) fail(`${host.name}: module ${m} is not in the tier file's modules`); return r; };
  for (const [k, lines] of nsLines) {
    const [mod, sub, jsModule] = k.split('|');
    const name = idl(`ns${mod}${sub.split('.').map(capital).join('')}${jsModule ? jsModule.replace(/[^A-Za-z0-9]/g, '') : ''}`);
    const path = jsModule ? sub : [G, sub].filter(Boolean).join('.');
    addDef(name, mod, `// ${jsModule ? `The module ${jsModule}` : `The global ${G}`}${sub ? `.${sub}` : ''}: ${host.modules.find(m => m.name === mod)?.title}\n${attrs({ LasmLeanModule: mod, LasmModule: jsModule || null, LasmPath: path || null, LasmLeanPrefix: sub ? `${sub}.` : null })}\nnamespace ${name} {\n${lines.join('\n')}\n};`, `${G} (${mod})`);
  }
  for (const r of host.roots ?? []) if (!used.has(`root:${r}`)) fail(`${host.name}: root ${r} declares nothing`);
  const refs = name => new Set([...defs.get(name).text.matchAll(new RegExp(`\\b${host.name}_[A-Za-z0-9_]+`, 'g'))].map(m => m[0]).filter(r => r !== name && defs.has(r)));
  for (const [, v] of defs) if (!v.mod) v.mod = order[order.length - 1];
  for (let changed = true; changed;) {
    changed = false;
    for (const [name, v] of defs) for (const r of refs(name)) if (rank(defs.get(r).mod) > rank(v.mod)) { defs.get(r).mod = v.mod; changed = true; }
  }
  const text = [...defs.values()].map(v => v.text.replace('LasmLeanModule="@"', `LasmLeanModule=${quoteAttr(v.mod)}`));
  const modules = order.filter(m => [...defs.values()].some(v => v.mod === m));
  return { idl: text.join('\n\n'), excluded, modules };
}
