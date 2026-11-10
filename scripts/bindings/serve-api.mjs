// Lowers the HTTP server declarations of Deno and Bun (their TypeScript
// declaration files at the pinned release tags; scripts/bindings/serve-tier2.mjs
// selects what) to WebIDL: scripts/bindings/deno.idl and bun.idl, which
// generate-web.mjs turns into Lasm.JS.Deno and Lasm.JS.Bun with the mapping rules
// of Lasm.JS.Web (docs/JS_BINDINGS.md, "Lasm.JS.Deno and Lasm.JS.Bun"). The files
// are fetched from raw.githubusercontent.com, checked against serve-api.lock.json,
// and cached in .work/serve-api/.
//
//   node scripts/bindings/serve-api.mjs                # write deno.idl and bun.idl
//   node scripts/bindings/serve-api.mjs --check        # exit 1 if either differs
//   node scripts/bindings/serve-api.mjs --update-lock  # record the files' hashes (after a version bump)
//
// Lowering rules (each documented in docs/JS_BINDINGS.md):
//   - a declared interface the runtime hands to Lean (a server, a request's info,
//     an address) is a WebIDL interface, its properties readonly attributes; one
//     Lean passes to the runtime (options) is a dictionary, a property without `?`
//     `required`, a method of it a callback member;
//   - `string` → DOMString, `boolean` → boolean, `number` → double unless
//     serve-tier2.mjs's `integers` narrows it (quoting the doc comment), `void` →
//     undefined, `unknown` → any; `null` and `undefined` alternatives make a type
//     nullable (an optional member drops `undefined`);
//   - a union of string literals is an enum named after its member
//     (`NetAddr.transport` → NetAddrTransport); literals with `(string & {})` (any
//     string, with suggestions) are DOMString;
//   - `T | Promise<T>` (and Bun's `MaybePromise<T>`) is Promise<T>: Lean's handler is
//     asynchronous, so it always returns a promise; in a callback's result, `void`
//     alternatives beside a value are dropped (recorded in the IDL);
//   - a function type is a callback named after the type alias or the member
//     (`ServeOptions.onError` → ServeOptionsOnError); a `this` parameter is dropped;
//   - a generic parameter is instantiated once, as serve-tier2.mjs says
//     (`Addr` = NetAddr): a second instantiation fails the lowering;
//   - `A & B` of selected object types is a dictionary inheriting A with B's
//     members, named in serve-tier2.mjs; a parameter whose type is a union of object
//     types gives one overload per alternative;
//   - members and overloads whose doc comment says @experimental, UNSTABLE or
//     @deprecated are never lowered.
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as tier from './serve-tier2.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const lockFile = join(root, 'scripts', 'bindings', 'serve-api.lock.json');
const cacheDir = join(root, '.work', 'serve-api');
const check = process.argv.includes('--check');
const updateLock = process.argv.includes('--update-lock');
export const fail = message => { throw new Error(`serve-api: ${message}`); };

// ---------- the declaration files, pinned ----------

const lock = existsSync(lockFile) ? JSON.parse(readFileSync(lockFile, 'utf8')) : {};
async function loadFile(host, file) {
  const local = join(cacheDir, host.name, host.tag, file);
  let text;
  if (existsSync(local)) text = readFileSync(local, 'utf8');
  else {
    const url = `https://raw.githubusercontent.com/${host.repo}/${host.tag}/${file}`;
    const response = await fetch(url);
    if (!response.ok) fail(`${url}: HTTP ${response.status}`);
    text = await response.text();
  }
  const sha256 = createHash('sha256').update(text).digest('hex');
  const key = `${host.name} ${host.tag}`;
  if (updateLock) (lock[key] ??= {})[file] = sha256;
  else if (lock[key]?.[file] !== sha256) fail(`${host.repo}@${host.tag} ${file} has SHA-256 ${sha256}, not the pinned ${lock[key]?.[file]} (serve-api.lock.json)`);
  if (!existsSync(local)) { mkdirSync(dirname(local), { recursive: true }); writeFileSync(local, text); }
  return text;
}

// ---------- reading a declaration file ----------

/** The text with comments blanked (`code`), and with string contents blanked too
 * (`shape`, for bracket matching), offsets preserved; the JSDoc blocks. */
export function blank(text) {
  const code = text.split(''), shape = text.split(''), docs = [];
  const clear = (arr, from, to) => { for (let k = from; k < to; k++) if (arr[k] !== '\n') arr[k] = ' '; };
  let i = 0;
  while (i < text.length) {
    const c = text[i], n = text[i + 1];
    if (c === '/' && n === '*') {
      const close = text.indexOf('*/', i + 2), e = close < 0 ? text.length : close + 2;
      if (text[i + 2] === '*' && text[i + 3] !== '/') docs.push({ start: i, end: e, text: text.slice(i, e) });
      clear(code, i, e); clear(shape, i, e); i = e; continue;
    }
    if (c === '/' && n === '/') {
      const close = text.indexOf('\n', i), e = close < 0 ? text.length : close;
      clear(code, i, e); clear(shape, i, e); i = e; continue;
    }
    if (c === '"' || c === "'" || c === '`') {
      let j = i + 1;
      while (j < text.length && text[j] !== c) j += text[j] === '\\' ? 2 : 1;
      clear(shape, i + 1, j); i = j + 1; continue;
    }
    i++;
  }
  return { code: code.join(''), shape: shape.join(''), docs };
}

const opens = { '(': ')', '[': ']', '{': '}' };
/** The index of the bracket closing the one at `at` (in a `shape`). */
function matchClose(shape, at) {
  let depth = 0;
  for (let i = at; i < shape.length; i++) {
    const c = shape[i];
    if (c in opens) depth++;
    else if (c === ')' || c === ']' || c === '}') { depth--; if (depth === 0) return i; }
  }
  fail(`unbalanced ${shape[at]} at ${at}`);
}
/** The index of the first `ch` at bracket depth 0 (angle brackets included, `=>` excepted) from `from`, or -1. */
function findTop(shape, from, to, chars, angles = true) {
  let depth = 0;
  for (let i = from; i < to; i++) {
    const c = shape[i];
    if (depth === 0 && chars.includes(c)) return i;
    if (c in opens || (angles && c === '<')) depth++;
    else if (c === ')' || c === ']' || c === '}' || (angles && c === '>' && shape[i - 1] !== '=')) depth--;
  }
  return -1;
}
const docBefore = (src, pos) => {
  let best = null;
  for (const d of src.docs) if (d.end <= pos && src.code.slice(d.end, pos).trim() === '') best = d;
  return best ? best.text : '';
};
const squash = s => s.replace(/\s+/g, ' ').replace(/([(<\[]) /g, '$1').replace(/,? ([)>\]])/g, '$1').trim();

/** Every interface, type alias and function of a file, by qualified name (`Deno.HttpServer`, `Bun.Serve.Options`). */
export function declarations(text, file) {
  const src = { ...blank(text), file };
  const out = [];
  const head = /^(?:export\s+)?(?:declare\s+)?/;
  (function block(start, end, prefix) {
    let i = start;
    while (i < end) {
      while (i < end && /\s/.test(src.shape[i])) i++;
      if (i >= end) break;
      const rest = src.shape.slice(i, Math.min(end, i + 300)).replace(head, m => ' '.repeat(m.length));
      const lead = rest.length - rest.trimStart().length;
      const body = rest.trimStart();
      const qual = n => [...prefix, n].join('.');
      let m;
      if ((m = /^(?:namespace|module)\s+("[^"]*"|[\w$.]+)\s*\{/.exec(body))) {
        const open = i + lead + m[0].length - 1, close = matchClose(src.shape, open);
        const name = m[1].startsWith('"') ? src.code.slice(i + lead + m[0].indexOf('"') + 1, i + lead + m[0].lastIndexOf('"')) : m[1];
        // `declare module "bun"` is Bun's global object.
        block(open + 1, close, [...prefix, ...(name === 'bun' ? ['Bun'] : name.split('.'))]);
        i = close + 1; continue;
      }
      if ((m = /^global\s*\{/.exec(body))) {
        const open = i + lead + m[0].length - 1, close = matchClose(src.shape, open);
        block(open + 1, close, prefix); i = close + 1; continue;
      }
      if ((m = /^interface\s+([\w$]+)/.exec(body))) {
        const open = findTop(src.shape, i + lead + m[0].length, end, '{');
        const close = matchClose(src.shape, open);
        out.push({ kind: 'interface', name: qual(m[1]), header: squash(src.code.slice(i + lead + m[0].length, open)), src, body: [open + 1, close],
          doc: docBefore(src, i) });
        i = close + 1; continue;
      }
      if ((m = /^(?:abstract\s+)?(?:class|enum)\s/.exec(body))) {
        const open = findTop(src.shape, i, end, '{', false);
        i = open < 0 ? end : matchClose(src.shape, open) + 1; continue;
      }
      const stop = findTop(src.shape, i, end, ';', false);
      const e = stop < 0 ? end : stop;
      if ((m = /^type\s+([\w$]+)/.exec(body))) out.push({ kind: 'type', name: qual(m[1]), text: src.code.slice(i + lead, e), src, at: i, doc: docBefore(src, i) });
      else if ((m = /^function\s+([\w$]+)/.exec(body))) out.push({ kind: 'function', name: qual(m[1]), text: src.code.slice(i + lead, e), src, at: i, doc: docBefore(src, i) });
      i = e + 1;
    }
  })(0, text.length, []);
  return out;
}

/** The members of an interface body or object literal type: [{ name, kind, optional, readonly, params, type, doc, text }]. */
export function membersOf(src, from, to) {
  const out = [];
  let i = from;
  while (i < to) {
    let e = findTop(src.shape, i, to, ';,', true);
    if (e < 0) e = to;
    const raw = src.code.slice(i, e);
    if (raw.trim()) {
      const at = i + raw.length - raw.trimStart().length;
      out.push({ ...parseMember(raw.trim(), src.shape.slice(at, at + raw.trim().length)), doc: docBefore(src, at), text: squash(raw) });
    }
    i = e + 1;
  }
  return out;
}
function parseMember(text, shape) {
  let s = 0;
  const ws = () => { while (/\s/.test(text[s])) s++; };
  let readonly = false;
  if (/^readonly\s/.test(text)) { readonly = true; s = 8; ws(); }
  let name;
  if (text[s] === '[') { const close = matchClose(shape, s); name = text.slice(s, close + 1); s = close + 1; }
  else { const m = /^[\w$]+|^"[^"]*"/.exec(text.slice(s)); if (!m) fail(`cannot read the member ${text.slice(0, 80)}`); name = m[0]; s += m[0].length; }
  ws();
  let optional = false;
  if (text[s] === '?') { optional = true; s++; ws(); }
  if (text[s] === '<') { const close = findTop(shape, s + 1, shape.length, '>'); s = close + 1; ws(); }
  if (text[s] === '(') {
    const close = matchClose(shape, s);
    const params = splitParams(text.slice(s + 1, close), shape.slice(s + 1, close));
    let r = close + 1; while (/\s/.test(text[r])) r++;
    if (text[r] !== ':') fail(`no result type: ${text.slice(0, 80)}`);
    return { name, kind: 'method', optional, readonly, params, type: squash(text.slice(r + 1)) };
  }
  if (text[s] === ':') {
    if (name.startsWith('[') && name.includes(':')) return { name, kind: 'index', optional, readonly, type: squash(text.slice(s + 1)) };
    return { name, kind: 'property', optional, readonly, type: squash(text.slice(s + 1)) };
  }
  fail(`cannot read the member ${text.slice(0, 80)}`);
}
/** `a: A, b?: B, ...c: C[]` → [{ name, optional, rest, type }]. */
export function splitParams(text, shape) {
  const out = [];
  let i = 0;
  while (i < text.length) {
    let e = findTop(shape, i, text.length, ',', true);
    if (e < 0) e = text.length;
    const p = text.slice(i, e).trim();
    if (p) {
      const m = /^(\.\.\.)?([\w$]+)(\?)?\s*:\s*([\s\S]*)$/.exec(p);
      if (!m) fail(`cannot read the parameter ${p}`);
      out.push({ name: m[2], rest: !!m[1], optional: !!m[3], type: squash(m[4]) });
    }
    i = e + 1;
  }
  return out;
}
/** The overloads of a function declaration's text: [{ params, type }]. */
function functionSignature(text) {
  const { shape } = blank(text);
  const m = /function\s+[\w$]+\s*/.exec(shape);
  let at = m.index + m[0].length;
  if (shape[at] === '<') at = findTop(shape, at + 1, shape.length, '>') + 1;
  const paren = shape.indexOf('(', at);
  const close = matchClose(shape, paren);
  const params = splitParams(text.slice(paren + 1, close), shape.slice(paren + 1, close));
  const r = text.indexOf(':', close);
  return { params, type: squash(text.slice(r + 1)) };
}
/** The right-hand side of a type alias (after the `=` that follows its generic parameters). */
function aliasBody(d) {
  const { shape } = blank(d.text);
  const m = /type\s+[\w$]+\s*/.exec(shape);
  const eq = findTop(shape, m.index + m[0].length, shape.length, '=');
  return d.text.slice(eq + 1);
}
const paramKey = params => params.map(p => `${p.rest ? '...' : ''}${p.name}${p.optional ? '?' : ''}: ${p.type.replace(/^[&|]\s*/, '')}`).join(', ');

// ---------- types ----------

const tokenRe = /\s*(=>|\.\.\.|"(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*'|`[^`]*`|[A-Za-z_$][\w$]*(?:\.[A-Za-z_$][\w$]*)*|\d+|[|&()<>[\]{},:?;=])/y;
function tokenize(text) {
  const out = [];
  tokenRe.lastIndex = 0;
  let m;
  while (tokenRe.lastIndex < text.length && (m = tokenRe.exec(text))) out.push({ t: m[1], at: m.index + m[0].length - m[1].length });
  if (text.slice(tokenRe.lastIndex).trim()) fail(`cannot read the type ${text}`);
  return out;
}
/** A TypeScript type → { k: name|lit|union|inter|array|fn|obj, … }. */
export function parseType(text) {
  const toks = tokenize(text);
  let p = 0;
  const peek = () => toks[p]?.t, next = () => toks[p++]?.t;
  const expect = t => { if (next() !== t) fail(`expected ${t} in the type ${text}`); };
  const closeOf = from => { let d = 0; for (let k = from; k < toks.length; k++) { if (['(', '[', '{', '<'].includes(toks[k].t)) d++; else if ([')', ']', '}', '>'].includes(toks[k].t)) { d--; if (d === 0) return k; } } return -1; };
  function union() {
    if (peek() === '|') next();
    const alts = [inter()];
    while (peek() === '|') { next(); alts.push(inter()); }
    return alts.length === 1 ? alts[0] : { k: 'union', alts };
  }
  function inter() {
    if (peek() === '&') next();
    const parts = [postfix()];
    while (peek() === '&') { next(); parts.push(postfix()); }
    return parts.length === 1 ? parts[0] : { k: 'inter', parts };
  }
  function postfix() {
    let t = primary();
    while (peek() === '[' && toks[p + 1]?.t === ']') { p += 2; t = { k: 'array', inner: t }; }
    if (peek() === 'extends') fail(`conditional types are not lowered: ${text}`);
    return t;
  }
  function primary() {
    const t = peek();
    if (t === undefined) fail(`unexpected end of the type ${text}`);
    if (t === '(') {
      const close = closeOf(p);
      if (toks[close + 1]?.t === '=>') {
        const inner = text.slice(toks[p].at + 1, toks[close].at);
        p = close + 2;
        const ret = union();
        return { k: 'fn', params: splitParams(inner, blank(inner).shape), ret };
      }
      next(); const inner = union(); expect(')'); return inner;
    }
    if (t === '{') {
      const close = closeOf(p);
      const body = text.slice(toks[p].at + 1, toks[close].at);
      p = close + 1;
      return { k: 'obj', body };
    }
    if (/^["'`]/.test(t)) { next(); if (t[0] === '`') fail(`template literal types are not lowered: ${text}`); return { k: 'lit', value: JSON.parse(t[0] === "'" ? `"${t.slice(1, -1)}"` : t) }; }
    if (/^\d/.test(t)) { next(); return { k: 'num', value: +t }; }
    if (['keyof', 'typeof', 'infer', 'unique'].includes(t)) fail(`${t} types are not lowered: ${text}`);
    next();
    const n = { k: 'name', name: t, args: [] };
    if (peek() === '<') {
      next();
      n.args.push(union());
      while (peek() === ',') { next(); n.args.push(union()); }
      expect('>');
    }
    return n;
  }
  const t = union();
  if (p !== toks.length) fail(`cannot read the type ${text} (at ${toks[p].t})`);
  return t;
}
export const typeText = t => {
  switch (t.k) {
  case 'name': return t.name + (t.args.length ? `<${t.args.map(typeText).join(', ')}>` : '');
  case 'lit': return JSON.stringify(t.value);
  case 'num': return String(t.value);
  case 'union': return t.alts.map(a => a.k === 'fn' ? `(${typeText(a)})` : typeText(a)).join(' | ');
  case 'inter': return t.parts.map(a => a.k === 'union' ? `(${typeText(a)})` : typeText(a)).join(' & ');
  case 'array': return `${typeText(t.inner)}[]`;
  case 'fn': return `(${t.params.map(x => `${x.name}${x.optional ? '?' : ''}: ${x.type}`).join(', ')}) => ${typeText(t.ret)}`;
  case 'obj': return `{${squash(t.body)}}`;
  default: return '?';
  }
};

// ---------- lowering ----------

const capital = s => s ? s[0].toUpperCase() + s.slice(1) : s;
const unstable = doc => /@experimental|\bUNSTABLE\b|@deprecated/.exec(doc)?.[0];
const quoteAttr = s => JSON.stringify(s.replace(/"/g, "'"));

export function lowerHost(host, files) {
  const decls = files.flatMap(({ file, text }) => declarations(text, file));
  const strip = n => n.startsWith(host.global + '.') ? n.slice(host.global.length + 1) : n;
  const byName = new Map();
  for (const d of decls) {
    const n = strip(d.name);
    if (d.kind === 'function') { if (!byName.has('fn:' + n)) byName.set('fn:' + n, []); byName.get('fn:' + n).push(d); }
    else if (!byName.has(n)) byName.set(n, d);
  }
  const find = n => byName.get(n) ?? fail(`${host.name}: ${n} is not declared in ${host.files.join(', ')}`);
  const selected = new Map(host.declarations.map(s => [s.name, s]));
  const leanOf = s => s.lean ?? s.name.split('.').at(-1);
  const idlName = lean => `${host.name}_${lean}`;
  const defs = [];          // IDL text blocks, in order
  const extra = new Map();  // generated enums and callbacks: IDL name → text
  const excluded = [];      // [what, reason]
  const integersUsed = new Set();
  const fileOf = d => d.src.file.split('/').at(-1);
  const attrs = (d, more = {}) => {
    const a = { LasmHost: host.name, LasmLeanModule: more.module, LasmFile: d ? fileOf(d) : undefined, ...more };
    delete a.module;
    return `[${Object.entries(a).filter(([, v]) => v !== undefined).map(([k, v]) => v === true ? k : `${k}=${quoteAttr(String(v))}`).join(', ')}]`;
  };

  /** A selected declaration's IDL name from a name the declarations use, checking its type arguments. */
  function refName(n, args, where) {
    const s = selected.get(n) ?? [...selected.values()].find(x => x.lean === n);
    if (!s) return null;
    for (const a of args) {
      const at = typeText(a).replace(new RegExp(`^${host.global}\\.`), '');
      if (!(at in host.instantiate) && !Object.values(host.instantiate).includes(at))
        fail(`${where}: ${n}<${args.map(typeText).join(', ')}> is a second instantiation (serve-tier2.mjs instantiates ${JSON.stringify(host.instantiate)})`);
    }
    return idlName(leanOf(s));
  }
  const isNullish = t => t.k === 'name' && (t.name === 'null' || t.name === 'undefined');
  const isVoid = t => t.k === 'name' && t.name === 'void';
  const isPromise = t => t.k === 'name' && t.name === 'Promise';
  const anyString = t => t.k === 'inter' && t.parts.length === 2 && t.parts[0].k === 'name' && t.parts[0].name === 'string' && t.parts[1].k === 'obj' && !t.parts[1].body.trim();
  const flat = t => t.k === 'union' ? t.alts.flatMap(flat)
    : t.k === 'name' && t.name === 'MaybePromise' ? [t.args[0], { k: 'name', name: 'Promise', args: [t.args[0]] }] : [t];

  /** ctx: { where, owner, member, role: arg|result|field|attr|cbArg|cbResult, doc, intKey, optional, callbackName } */
  function lower(t, ctx) {
    const alts = flat(t);
    if (alts.length > 1 || t.k === 'lit') return lowerUnion(alts, ctx);
    switch (t.k) {
    case 'name': return lowerName(t, ctx);
    case 'array': return `sequence<${lower(t.inner, { ...ctx, intKey: null })}>`;
    case 'fn': return lowerCallback(t, ctx);
    case 'inter': {
      const key = t.parts.map(typeText).join(' & ');
      const name = host.intersections[key];
      if (anyString(t)) return 'DOMString';
      if (!name) fail(`${ctx.where}: the intersection ${key} is not named in serve-tier2.mjs intersections`);
      return idlName(name);
    }
    default: fail(`${ctx.where}: the type ${typeText(t)} is not lowered`);
    }
  }
  function lowerUnion(alts, ctx) {
    let nullable = false;
    let rest = [];
    for (const a of alts) {
      if (isNullish(a)) { if (!(ctx.optional && a.name === 'undefined')) nullable = true; continue; }
      rest.push(a);
    }
    const note = [];
    // T | Promise<T>: a promise (Lean's handler is asynchronous).
    if (rest.some(isPromise)) {
      let inner = rest.map(a => isPromise(a) ? a.args[0] : a);
      if (ctx.role === 'cbResult' && inner.some(a => !isVoid(a))) {
        if (inner.some(isVoid)) note.push('void alternatives dropped');
        inner = inner.filter(a => !isVoid(a));
      }
      const unique = [...new Map(inner.map(a => [typeText(a), a])).values()];
      const innerType = unique.length === 1 ? lower(unique[0], { ...ctx, role: 'promised' }) : lowerUnion(unique, { ...ctx, role: 'promised' });
      ctx.notes?.push(...note);
      return `Promise<${innerType}${nullable ? '?' : ''}>`;
    }
    if (ctx.role === 'cbResult' && rest.some(isVoid) && rest.some(a => !isVoid(a))) { ctx.notes?.push('void alternatives dropped'); rest = rest.filter(a => !isVoid(a)); }
    const lits = rest.filter(a => a.k === 'lit');
    let base;
    if (lits.length && lits.length === rest.length) base = enumOf(lits.map(l => l.value), ctx);
    else if (lits.length && rest.every(a => a.k === 'lit' || anyString(a))) base = 'DOMString';
    else if (rest.length === 1) base = lower(rest[0], ctx);
    else base = `(${rest.map(a => lower(a, ctx)).join(' or ')})`;
    return nullable ? `${base}?` : base;
  }
  function enumOf(values, ctx) {
    const lean = `${ctx.owner}${capital(ctx.member)}`;
    const name = idlName(lean);
    const text = `${attrs(null, { module: ctx.module, LasmName: lean })}\nenum ${name} { ${values.map(v => JSON.stringify(v)).join(', ')} };`;
    if (extra.has(name) && extra.get(name) !== text) fail(`${ctx.where}: two enums named ${lean}`);
    extra.set(name, text);
    return name;
  }
  function lowerName(t, ctx) {
    const n = t.name.startsWith(host.global + '.') ? t.name.slice(host.global.length + 1) : t.name;
    switch (n) {
    case 'string': return 'DOMString';
    case 'boolean': return 'boolean';
    case 'bigint': return 'bigint';
    case 'void': case 'undefined': return 'undefined';
    case 'any': return 'any';
    case 'number': {
      const spec = ctx.intKey && host.integers[ctx.intKey];
      if (!spec) return 'double';
      if (!squash(ctx.doc.replace(/^\s*\/?\*+\/?/gm, '')).includes(spec.quote)) fail(`${ctx.where}: integers[${ctx.intKey}] quotes "${spec.quote}", which its doc comment no longer says`);
      integersUsed.add(ctx.intKey);
      return spec.type;
    }
    case 'Promise': return `Promise<${t.args.length ? lower(t.args[0], { ...ctx, role: 'promised', intKey: null }) : 'undefined'}>`;
    }
    if (n in host.instantiate) return lower(parseType(host.instantiate[n]), ctx);
    const ref = refName(n, t.args, ctx.where);
    if (ref) return ref;
    if (n in host.typeNames) {
      const mapped = host.typeNames[n];
      const r = refName(mapped, t.args, ctx.where);
      return r ?? mapped;
    }
    fail(`${ctx.where}: the type ${typeText(t)} is neither selected nor in serve-tier2.mjs typeNames`);
  }
  function lowerCallback(fn, ctx) {
    const lean = ctx.callbackName ?? `${ctx.owner}${capital(ctx.member)}`;
    const name = idlName(lean);
    const notes = [];
    const params = fn.params.filter(p => p.name !== 'this').map(p =>
      `${p.optional ? 'optional ' : ''}${lower(parseType(p.type), { ...ctx, role: 'cbArg', intKey: null, optional: p.optional, where: `${ctx.where} (${p.name})` })} ${p.name}`);
    const ret = lower(fn.ret, { ...ctx, role: 'cbResult', intKey: null, notes, optional: false });
    const comment = `// ${ctx.signature ?? typeText(fn)}${notes.length ? ` (${[...new Set(notes)].join('; ')})` : ''}`;
    const text = `${comment}\n${attrs(ctx.decl, { module: ctx.module, LasmName: lean, LasmSignature: ctx.signature ?? typeText(fn) })}\ncallback ${name} = ${ret} (${params.join(', ')});`;
    if (extra.has(name) && extra.get(name) !== text) fail(`${ctx.where}: two callbacks named ${lean}`);
    extra.set(name, text);
    return name;
  }

  /** The members of a selected object type, with the ones not taken recorded. */
  function takeMembers(s, members, owner, only = null) {
    const ex = s.exclude ?? {};
    const taken = [];
    for (const m of members) {
      const tag = unstable(m.doc);
      if (tag) { excluded.push([`${owner}.${m.name}`, `${tag} in its declaration`]); continue; }
      if (m.name in ex) { excluded.push([`${owner}.${m.name}`, ex[m.name]]); continue; }
      if (only && !only.includes(m.name)) fail(`${host.name} ${owner}.${m.name}: not in \`only\` and not excluded (serve-tier2.mjs)`);
      if (m.kind === 'index') fail(`${host.name} ${owner}: an index signature is not lowered`);
      taken.push(m);
    }
    return taken;
  }
  function heritage(d) {
    let h = d.header;
    if (h.startsWith('<')) h = h.slice(findTop(blank(h).shape, 1, h.length, '>') + 1);
    const m = /^\s*extends\s+(.*)$/.exec(h);
    if (!m) return [];
    const { shape } = blank(m[1]);
    const out = [];
    for (let i = 0; i < m[1].length;) {
      let e = findTop(shape, i, m[1].length, ',');
      if (e < 0) e = m[1].length;
      out.push(parseType(m[1].slice(i, e)));
      i = e + 1;
    }
    return out;
  }

  // The functions of the global object (Deno.serve, Bun.serve).
  const nsMembers = [];
  for (const [fname, f] of Object.entries(host.functions)) {
    const overloads = byName.get('fn:' + fname) ?? fail(`${host.name}.${fname} is not declared`);
    const seen = new Set();
    for (const o of overloads) {
      const sig = functionSignature(o.text);
      const key = paramKey(sig.params);
      const tag = unstable(o.doc);
      const sel = f.overloads[key];
      if (tag) { if (sel) fail(`${host.name}.${fname}(${key}) is ${tag}, but serve-tier2.mjs selects it`); excluded.push([`${host.global}.${fname}(${key})`, `${tag} in its declaration`]); continue; }
      if (!sel) fail(`${host.name}.${fname}(${key}): an overload serve-tier2.mjs neither lowers nor excludes`);
      seen.add(key);
      if (sel.exclude) { excluded.push([`${host.global}.${fname}(${key})`, sel.exclude]); continue; }
      const signature = `${host.global}.${fname}(${key}): ${sig.type}`;
      const ctx0 = { owner: '', member: fname, module: f.module, decl: o, doc: o.doc, signature };
      // A parameter split into one overload per union alternative.
      let variants = [sig.params.map(p => ({ ...p, t: parseType(p.type) }))];
      for (const [pname, names] of Object.entries(sel.split ?? {})) {
        variants = variants.flatMap(v => {
          const i = v.findIndex(p => p.name === pname);
          const alts = flat(v[i].t);
          if (alts.length !== names.length) fail(`${signature}: split ${pname} names ${names.length} alternatives, the type has ${alts.length}`);
          return alts.map((a, k) => v.map((p, j) => j === i ? { ...p, name: names[k], t: a } : p));
        });
      }
      for (const v of variants) {
        const ret = lower(parseType(sig.type), { ...ctx0, role: 'result', where: signature });
        const args = v.map(p => `${p.optional ? 'optional ' : ''}${lower(p.t, { ...ctx0, role: 'arg', where: `${signature} (${p.name})`, callbackName: null, optional: p.optional, intKey: `${fname}.${p.name}` })}${p.rest ? '...' : ''} ${p.name}`);
        nsMembers.push(`  // ${signature}\n  ${attrs(o, { LasmSignature: signature })} ${ret} ${fname}(${args.join(', ')});`);
      }
    }
    for (const key of Object.keys(f.overloads)) if (!seen.has(key)) fail(`${host.name}.${fname}(${key}) is selected but not declared`);
  }
  defs.push(`// The global ${host.global}\n${attrs(null, { module: host.functions[Object.keys(host.functions)[0]].module, LasmPath: host.global })}\nnamespace ${host.global} {\n${nsMembers.join('\n')}\n};`);

  for (const s of host.declarations) {
    const lean = leanOf(s);
    const name = idlName(lean);
    const ctxOf = (m, d) => ({ owner: lean, member: m.name, module: s.module, doc: m.doc, decl: d, where: `${host.name} ${s.name}.${m.name}`,
      signature: `${s.name}.${m.text}` });
    if (s.as === 'callback') {
      const d = find(s.name);
      if (d.kind !== 'type') fail(`${s.name} is not a type alias`);
      const rhs = aliasBody(d);
      const t = parseType(rhs);
      if (t.k !== 'fn') fail(`${s.name} is not a function type`);
      lowerCallback(t, { owner: lean, member: '', module: s.module, doc: d.doc, decl: d, where: `${host.name} ${s.name}`, callbackName: lean,
        signature: squash(d.text.replace(/^export\s+/, '')) });
      continue;
    }
    // The members, from the declaration or composed from several.
    const sources = s.compose ?? [{ from: s.name }];
    let members = [];
    let parent = null;
    let first = null;
    for (const c of sources) {
      const d = find(c.from);
      first ??= d;
      let ms;
      if (d.kind === 'interface') {
        ms = membersOf(d.src, d.body[0], d.body[1]);
        if (!s.compose) for (const h of heritage(d)) {
          const hn = typeText(h).replace(/<.*$/, '').replace(new RegExp(`^${host.global}\\.`), '');
          const ref = refName(hn, h.args ?? [], `${s.name} extends`);
          if (ref) { if (parent) fail(`${s.name}: two selected bases`); parent = ref; }
          else if (!(hn in host.notSelected)) fail(`${s.name} extends ${hn}, which is neither selected nor in serve-tier2.mjs notSelected`);
        }
        else for (const h of heritage(d)) {
          // A composed dictionary takes its sources' bases' members by listing them as sources.
          const hn = typeText(h).replace(/<.*$/, '');
          if (!sources.some(x => x.from === hn || x.from === `Serve.${hn}`)) fail(`${s.name}: ${c.from} extends ${hn}, which is not a source`);
        }
      } else if (d.kind === 'type' && c.alternative !== undefined) {
        const t = parseType(aliasBody(d));
        const alt = flat(t)[c.alternative];
        if (alt?.k !== 'obj') fail(`${c.from} alternative ${c.alternative} is not an object type`);
        // Members of an object literal: their doc comments and text are the alternative's.
        const altSrc = { ...blank(alt.body), file: d.src.file };
        ms = membersOf(altSrc, 0, alt.body.length);
      } else fail(`${c.from} is not an interface`);
      members.push(...takeMembers(s, ms, s.name, c.only ?? null).map(m => ({ ...m, d })));
    }
    for (const k of Object.keys(s.exclude ?? {})) if (!excluded.some(([w]) => w === `${s.name}.${k}`)) fail(`${s.name}.${k} is excluded but not a member`);
    const lines = [];
    for (const m of members) {
      const ctx = ctxOf(m, m.d);
      lines.push(`  // ${m.text}`);
      const intKey = `${s.name}.${m.name}`;
      if (s.as === 'interface') {
        if (m.kind === 'property') lines.push(`  ${attrs(m.d, { LasmSignature: m.text })} readonly attribute ${lower(parseType(m.type), { ...ctx, role: 'attr', intKey })} ${m.name};`);
        else {
          const args = m.params.filter(p => p.name !== 'this').map(p => `${p.optional ? 'optional ' : ''}${lower(parseType(p.type), { ...ctx, role: 'arg', intKey: `${intKey}.${p.name}`, optional: p.optional, where: `${ctx.where} (${p.name})` })}${p.rest ? '...' : ''} ${p.name}`);
          lines.push(`  ${attrs(m.d, { LasmSignature: m.text })} ${lower(parseType(m.type), { ...ctx, role: 'result', intKey })} ${m.name}(${args.join(', ')});`);
        }
      } else {
        const t = m.kind === 'method' ? lowerCallback({ k: 'fn', params: m.params, ret: parseType(m.type) }, ctx)
          : lower(parseType(m.type), { ...ctx, role: 'field', intKey, optional: m.optional });
        lines.push(`  ${m.optional ? '' : 'required '}${t} ${m.name};`);
      }
    }
    const path = `${host.global}.${s.name}`;
    const head = attrs(first, { module: s.module, LasmName: lean, LasmPath: path });
    defs.push(`// ${s.as === 'interface' ? 'interface' : 'options'} ${path}\n${head}\n${s.as === 'interface' ? 'interface' : 'dictionary'} ${name}${parent ? ' : ' + parent : ''} {\n${lines.join('\n')}\n};`);
  }
  // Intersections: a dictionary inheriting the first part, with the others' members.
  for (const [key, lean] of Object.entries(host.intersections)) {
    const [a, ...rest] = key.split(' & ');
    const base = refName(a, [], key) ?? fail(`intersection ${key}: ${a} is not selected`);
    const lines = [];
    for (const b of rest) {
      const s = selected.get(b) ?? fail(`intersection ${key}: ${b} is not selected`);
      const d = find(b);
      for (const m of takeMembers(s, membersOf(d.src, d.body[0], d.body[1]), b)) {
        lines.push(`  // ${m.text}`);
        lines.push(`  ${m.optional ? '' : 'required '}${lower(parseType(m.type), { owner: leanOf(s), member: m.name, module: s.module, doc: m.doc, where: `${key}.${m.name}`, role: 'field', intKey: `${b}.${m.name}`, optional: m.optional })} ${m.name};`);
      }
    }
    defs.push(`// options ${key}\n${attrs(null, { module: selected.get(a).module, LasmName: lean, LasmPath: `${host.global}.${key}` })}\ndictionary ${idlName(lean)} : ${base} {\n${lines.join('\n')}\n};`);
  }
  for (const k of Object.keys(host.integers)) if (!integersUsed.has(k)) fail(`${host.name}: integers[${k}] is not used`);
  return { idl: [...defs, ...extra.values()].join('\n\n'), excluded };
}

// ---------- writing ----------

export async function lowerAll() {
  const results = [];
  for (const host of tier.hosts) {
    const files = [];
    for (const file of host.files) files.push({ file, text: await loadFile(host, file) });
    const { idl, excluded } = lowerHost(host, files);
    const header = `// GENERATED by scripts/bindings/serve-api.mjs from the ${host.name} ${host.version} TypeScript declarations
// (${host.files.map(f => `https://github.com/${host.repo}/blob/${host.tag}/${f}`).join(',\n//  ')};
// ${host.license}), for what serve-tier2.mjs selects; do not edit. Comments quote each
// member's declaration. generate-web.mjs turns this into Lasm.JS.${host.name}.
//
// Not lowered (serve-tier2.mjs; the declarations' own @experimental and UNSTABLE tags):
${excluded.map(([w, r]) => `//   - ${w}: ${r}`).join('\n')}
${Object.entries(host.notSelected).map(([w, r]) => `//   - ${w} (not selected): ${r}`).join('\n')}
`;
    results.push({ file: join(root, 'scripts', 'bindings', `${host.name.toLowerCase()}.idl`), text: `${header}\n${idl}\n` });
  }
  return results;
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const results = await lowerAll();
  if (updateLock) { writeFileSync(lockFile, JSON.stringify(lock, null, 1) + '\n'); console.log(`wrote ${lockFile}`); }
  let stale = [];
  for (const { file, text } of results) {
    const current = existsSync(file) ? readFileSync(file, 'utf8') : null;
    if (current === text) continue;
    if (check) stale.push(file.slice(root.length));
    else { writeFileSync(file, text); console.log(`wrote ${file.slice(root.length)}`); }
  }
  if (check && stale.length) { console.error(`stale: ${stale.join(', ')}. Run node scripts/bindings/serve-api.mjs and commit the result.`); process.exit(1); }
  if (check) console.log(`deno.idl and bun.idl are the lowering of the pinned declarations (${tier.hosts.map(h => `${h.name} ${h.version}`).join(', ')}).`);
}
