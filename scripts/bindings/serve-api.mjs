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
//   - a declared interface of an object the runtime hands to Lean and keeps (a
//     server, a request's info) is a WebIDL interface, its properties readonly
//     attributes; one of plain data (an address: copied into Lean) or that Lean
//     passes to the runtime (options) is a dictionary, a property without `?`
//     `required`, a method of it a callback member (serve-tier2.mjs's `as`);
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
export function declarations(text, file, { classes = false } = {}) {
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
      // A class (workers-types' `declare abstract class D1Database`) is read as an interface
      // when the host asks for classes (its constructor and static members are not lowered).
      if (classes && (m = /^(?:abstract\s+)?class\s+([\w$]+)/.exec(body))) {
        const open = findTop(src.shape, i + lead + m[0].length, end, '{');
        const close = matchClose(src.shape, open);
        out.push({ kind: 'interface', class: true, name: qual(m[1]), header: squash(src.code.slice(i + lead + m[0].length, open)), src, body: [open + 1, close],
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
      else if (classes && (m = /^(?:const|let|var)\s+([\w$]+)\s*:/.exec(body))) out.push({ kind: 'const', name: qual(m[1]), text: squash(src.code.slice(i + lead, e)), type: squash(src.code.slice(i + lead + m[0].length, e)), src, at: i, doc: docBefore(src, i) });
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
  // A getter (`get body(): ReadableStream`) is a readonly property.
  const getter = /^get\s+[\w$]+\s*\(\s*\)/.exec(text.slice(s));
  if (getter) {
    const m = /^get\s+([\w$]+)\s*\(\s*\)\s*:/.exec(text.slice(s));
    if (!m) fail(`cannot read the getter ${text.slice(0, 80)}`);
    return { name: m[1], kind: 'property', optional: false, readonly: true, getter: true, type: squash(text.slice(s + m[0].length)) };
  }
  let name;
  if (text[s] === '[') { const close = matchClose(shape, s); name = text.slice(s, close + 1); s = close + 1; }
  else { const m = /^[\w$]+|^"[^"]*"/.exec(text.slice(s)); if (!m) fail(`cannot read the member ${text.slice(0, 80)}`); name = m[0]; s += m[0].length; }
  ws();
  let optional = false;
  if (text[s] === '?') { optional = true; s++; ws(); }
  let generics = '';
  if (text[s] === '<') { const close = findTop(shape, s + 1, shape.length, '>'); generics = text.slice(s + 1, close); s = close + 1; ws(); }
  if (text[s] === '(') {
    const close = matchClose(shape, s);
    const params = splitParams(text.slice(s + 1, close), shape.slice(s + 1, close));
    let r = close + 1; while (/\s/.test(text[r])) r++;
    if (text[r] !== ':') fail(`no result type: ${text.slice(0, 80)}`);
    return { name, kind: 'method', optional, readonly, params, type: squash(text.slice(r + 1)), generics };
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
  let at = m.index + m[0].length, generics = '';
  if (shape[at] === '<') { const close = findTop(shape, at + 1, shape.length, '>'); generics = text.slice(at + 1, close); at = close + 1; }
  const paren = shape.indexOf('(', at);
  const close = matchClose(shape, paren);
  const params = splitParams(text.slice(paren + 1, close), shape.slice(paren + 1, close));
  const r = text.indexOf(':', close);
  return { params, type: squash(text.slice(r + 1)), generics };
}
/** The right-hand side of a type alias (after the `=` that follows its generic parameters). */
function aliasBody(d) {
  const { shape } = blank(d.text);
  const m = /type\s+[\w$]+\s*/.exec(shape);
  const eq = findTop(shape, m.index + m[0].length, shape.length, '=');
  return d.text.slice(eq + 1);
}
/** A generic parameter list (`Key extends string = string, T = unknown`) → { name: default type text }
 * (`unknown` when there is no default). */
export function genericDefaults(text) {
  const out = {};
  if (!text || !text.trim()) return out;
  const { shape } = blank(text);
  for (let i = 0; i < text.length;) {
    let e = findTop(shape, i, text.length, ',');
    if (e < 0) e = text.length;
    const p = text.slice(i, e).trim();
    if (p) {
      const m = /^([\w$]+)/.exec(p);
      if (!m) fail(`cannot read the generic parameter ${p}`);
      const ps = blank(p).shape;
      const eq = findTop(ps, m[0].length, p.length, '=');
      out[m[1]] = eq < 0 ? 'unknown' : squash(p.slice(eq + 1));
    }
    i = e + 1;
  }
  return out;
}
/** A declaration's own generic parameters: an interface's or class's header, a type alias's name. */
function declGenerics(d) {
  if (d.kind === 'interface') return d.header.startsWith('<') ? genericDefaults(d.header.slice(1, findTop(blank(d.header).shape, 1, d.header.length, '>'))) : {};
  if (d.kind === 'type') {
    const { shape } = blank(d.text);
    const m = /type\s+[\w$]+\s*/.exec(shape);
    const at = m.index + m[0].length;
    return shape[at] === '<' ? genericDefaults(d.text.slice(at + 1, findTop(shape, at + 1, shape.length, '>'))) : {};
  }
  return {};
}
/** The object literal parts (`{ … }` at the top level) of a type alias's body, as member lists. */
function objectParts(d) {
  const body = aliasBody(d);
  const src = { ...blank(body), file: d.src.file };
  const parts = [];
  let depth = 0;
  for (let i = 0; i < body.length; i++) {
    const c = src.shape[i];
    if (c === '{' && depth === 0) { const close = matchClose(src.shape, i); parts.push(membersOf(src, i + 1, close)); i = close; continue; }
    if (c in opens || c === '<') depth++;
    else if (c === ')' || c === ']' || c === '}' || (c === '>' && src.shape[i - 1] !== '=')) depth--;
  }
  return parts;
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
    // `readonly T[]`: an array (Lean's arrays are values).
    if (t === 'readonly') { next(); return postfix(); }
    if (t === '[') fail(`tuple types are not lowered: ${text}`);
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
  // host.rich: the lowering rules for richer declarations (workers-types: classes, constants,
  // generics with defaults, method overloads, Map, Record, Partial, object literal types, type
  // aliases expanded where used). Deno's and Bun's declarations do not need them.
  const rich = !!host.rich;
  const decls = files.flatMap(({ file, text }) => declarations(text, file, { classes: rich }));
  const strip = n => host.global && n.startsWith(host.global + '.') ? n.slice(host.global.length + 1) : n;
  const byName = new Map();
  for (const d of decls) {
    const n = strip(d.name);
    if (d.kind === 'function') { if (!byName.has('fn:' + n)) byName.set('fn:' + n, []); byName.get('fn:' + n).push(d); }
    else if (d.kind === 'const') { if (!byName.has('const:' + n)) byName.set('const:' + n, d); }
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
    // rich: a generic declaration is lowered once, with its parameters' defaults (or the tier's
    // typeArgs); the arguments of a use are not checked.
    if (!rich) for (const a of args) {
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
    case 'obj': if (rich) return lowerObject(t, ctx); break;
    case 'inter': {
      const key = t.parts.map(typeText).join(' & ');
      const name = host.intersections[key];
      if (anyString(t)) return 'DOMString';
      // `D1Meta & Record<string, unknown>`: the declared part (the other keys are not read).
      if (rich) {
        const parts = t.parts.filter(x => !(x.k === 'name' && x.name === 'Record' && typeText(x.args[1] ?? { k: 'name', name: '', args: [] }) === 'unknown'));
        if (parts.length === 1) return lower(parts[0], ctx);
      }
      if (!name) fail(`${ctx.where}: the intersection ${key} is not named in serve-tier2.mjs intersections`);
      return idlName(name);
    }
    default: fail(`${ctx.where}: the type ${typeText(t)} is not lowered`);
    }
  }
  function lowerUnion(alts, ctx) {
    let nullable = false;
    let rest = [];
    // rich: alternatives that are unselected type aliases are spliced in (`D1SessionBookmark | D1SessionConstraint`).
    if (rich) alts = alts.flatMap(function expand(a) {
      const d = a.k === 'name' && !a.args.length && !selected.has(a.name) && !(a.name in host.typeNames) && !(ctx.generics && Object.hasOwn(ctx.generics, a.name)) && byName.get(a.name);
      return d && d.kind === 'type' ? flat(parseType(aliasBody(d))).flatMap(expand) : [a];
    });
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
    if (rich) {
      // `true | false` (merged object alternatives) is boolean; string literals beside `string` are a string.
      const isBool = a => a.k === 'name' && (a.name === 'true' || a.name === 'false' || a.name === 'boolean');
      if (rest.filter(isBool).length > 1) rest = [...rest.filter(a => !isBool(a)), { k: 'name', name: 'boolean', args: [] }];
      if (rest.some(a => a.k === 'name' && a.name === 'string') && rest.every(a => a.k === 'lit' || (a.k === 'name' && a.name === 'string') || anyString(a)))
        return nullable ? 'DOMString?' : 'DOMString';
      if (rest.length > 1 && !rest.some(a => a.k === 'lit')) {
        let lowered = [...new Set(rest.map(a => lower(a, ctx)))];
        // `unknown` (and what is read as any: Date) absorbs the other alternatives.
        if (lowered.includes('any')) return 'any';
        if (lowered.includes('ArrayBuffer') && lowered.includes('ArrayBufferView')) lowered = [...lowered.filter(x => x !== 'ArrayBuffer' && x !== 'ArrayBufferView'), 'BufferSource'];
        const base = lowered.length === 1 ? lowered[0] : unionTypedef(lowered, ctx);
        return nullable ? `${base}?` : base;
      }
    }
    const lits = rest.filter(a => a.k === 'lit');
    let base;
    if (lits.length && lits.length === rest.length) base = enumOf(lits.map(l => l.value), ctx);
    else if (lits.length && rest.every(a => a.k === 'lit' || anyString(a))) base = 'DOMString';
    else if (rest.length === 1) base = lower(rest[0], ctx);
    else if (rich) base = unionTypedef(rest.map(a => lower(a, ctx)), ctx);
    else base = `(${rest.map(a => lower(a, ctx)).join(' or ')})`;
    // WebIDL's any is never nullable (it holds null).
    if (rich && base === 'any') return 'any';
    return nullable ? `${base}?` : base;
  }
  /** rich: a union as a typedef of the host (`typedef (DOMString or sequence<DOMString>) Cloudflare_DOMStringOrSequenceOfDOMString`),
   * so that its Lean type is the host's, not one a web or Node module defines for the same union. */
  function unionTypedef(alts, ctx) {
    const keyName = idl => {
      let m;
      if ((m = /^sequence<(.*)>$/.exec(idl))) return 'SequenceOf' + keyName(m[1]);
      if ((m = /^record<DOMString, (.*)>$/.exec(idl))) return 'RecordOf' + keyName(m[1]);
      return idl.replace(/\?$/, '').replace(new RegExp(`^${host.name}_`), '').split(' ').map(capital).join('');
    };
    const lean = alts.map(keyName).join('Or');
    const name = idlName(lean);
    const text = `${attrs(null, { module: ctx.module, LasmName: lean })}\ntypedef (${alts.join(' or ')}) ${name};`;
    if (extra.has(name) && extra.get(name).split('\n')[1] !== text.split('\n')[1]) fail(`${ctx.where}: two unions named ${lean}`);
    if (!extra.has(name)) extra.set(name, text);
    return name;
  }
  function enumOf(values, ctx) {
    // An enum is named after its type alias (QueueContentType), else after its member.
    const lean = ctx.alias ?? `${ctx.owner}${capital(ctx.member)}`;
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
    if (rich) {
      // A generic parameter of the declaration or method being lowered: its default (or the
      // tier's typeArgs), `unknown` when it has none.
      if (ctx.generics && Object.hasOwn(ctx.generics, n)) {
        const g = { ...ctx.generics }; delete g[n];
        return lower(parseType(ctx.generics[n]), { ...ctx, generics: g });
      }
      const arg = i => t.args[i] ?? fail(`${ctx.where}: ${typeText(t)} needs ${i + 1} type arguments`);
      switch (n) {
      case 'never': return 'never';
      case 'true': case 'false': return 'boolean';
      case 'Array': case 'ReadonlyArray': case 'Iterable': return `sequence<${lower(arg(0), { ...ctx, intKey: null, alias: null })}>`;
      case 'Record':
        if (typeText(arg(0)) !== 'string') fail(`${ctx.where}: a Record keyed by ${typeText(arg(0))}`);
        return `record<DOMString, ${lower(arg(1), { ...ctx, intKey: null, alias: null })}>`;
      // A Map is read as a record (Lasm.JS.Cloudflare.Support.mapOf); the member is marked LasmMap.
      case 'Map':
        if (typeText(arg(0)) !== 'string') fail(`${ctx.where}: a Map keyed by ${typeText(arg(0))}`);
        ctx.flags?.add('map');
        return `record<DOMString, ${lower(arg(1), { ...ctx, intKey: null, alias: null })}>`;
      // Partial<D> of a dictionary whose members are all optional already (or undefined: left out).
      case 'Partial': {
        const inner = arg(0);
        const s = inner.k === 'name' && (selected.get(inner.name) ?? fail(`${ctx.where}: Partial<${typeText(inner)}> of an unselected type`));
        if (s.as !== 'dictionary') fail(`${ctx.where}: Partial<${typeText(inner)}> of a ${s.as}`);
        if (!s.partial) fail(`${ctx.where}: Partial<${typeText(inner)}>: the tier does not say its members are all optional (partial)`);
        return lower(inner, ctx);
      }
      }
    }
    const ref = refName(n, t.args, ctx.where);
    if (ref) return ref;
    if (n in host.typeNames) {
      const mapped = host.typeNames[n];
      const r = refName(mapped, t.args, ctx.where);
      return r ?? mapped;
    }
    // A type alias that is not selected stands for its definition (`D1SessionBookmark` = string);
    // a union of string literals is then an enum named after it.
    if (rich && byName.has(n) && byName.get(n).kind === 'type') {
      const d = byName.get(n);
      return lower(parseType(aliasBody(d)), { ...ctx, alias: n.split('.').at(-1), generics: { ...ctx.generics, ...declGenerics(d) } });
    }
    fail(`${ctx.where}: the type ${typeText(t)} is neither selected nor in ${host.tierFile ?? 'serve-tier2.mjs'} typeNames`);
  }
  /** An object literal type (`{ columnNames?: false }`, D1Meta's `timings`): a dictionary named after its owner and member. */
  function lowerObject(t, ctx) {
    const lean = `${ctx.owner}${capital(ctx.member)}${ctx.param ? capital(ctx.param) : ''}`;
    const name = idlName(lean);
    const src = { ...blank(t.body), file: ctx.decl ? ctx.decl.src.file : '' };
    const lines = [];
    for (const m of membersOf(src, 0, t.body.length)) {
      if (m.kind !== 'property') fail(`${ctx.where}: the object type ${typeText(t)} has a ${m.kind}`);
      const ft = lower(parseType(m.type), { ...ctx, owner: lean, member: m.name, param: null, role: 'field', intKey: null, optional: m.optional, alias: null });
      if (ft === 'never' || ft === 'undefined') continue;
      lines.push(`  // ${m.text}\n  ${m.optional ? '' : 'required '}${ft} ${m.name};`);
    }
    const text = `// ${typeText(t)}\n${attrs(null, { module: ctx.module, LasmName: lean })}\ndictionary ${name} {\n${lines.join('\n')}\n};`;
    if (extra.has(name) && extra.get(name) !== text) fail(`${ctx.where}: two object types named ${lean}`);
    extra.set(name, text);
    return name;
  }
  function lowerCallback(fn, ctx) {
    const lean = ctx.callbackName ?? `${ctx.owner}${capital(ctx.member)}${ctx.param ? capital(ctx.param) : ''}`;
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
    // Overloads (a method declared more than once): each is lowered or excluded in the tier's
    // `overloads`, by its parameter list.
    const count = new Map();
    for (const m of members) count.set(m.name, (count.get(m.name) ?? 0) + 1);
    const seenOverloads = new Set();
    for (const m of members) {
      const tag = unstable(m.doc);
      const key = m.kind === 'method' ? paramKey(m.params) : null;
      const label = count.get(m.name) > 1 ? `${owner}.${m.name}(${key})` : `${owner}.${m.name}`;
      const decided = s.overloads && Object.hasOwn(s.overloads, m.name) && Object.hasOwn(s.overloads[m.name], key) ? s.overloads[m.name][key] : null;
      if (tag) { excluded.push([label, `${tag} in its declaration`]); if (decided) fail(`${label} is ${tag}, but the tier decides it`); continue; }
      if (Object.hasOwn(ex, m.name)) { excluded.push([`${owner}.${m.name}`, ex[m.name]]); continue; }
      if (count.get(m.name) > 1) {
        const sel = decided ?? fail(`${host.name} ${label}: an overload the tier neither lowers nor excludes`);
        seenOverloads.add(`${m.name}(${key})`);
        if (sel.exclude) { excluded.push([label, sel.exclude]); continue; }
      }
      if (only && !only.includes(m.name)) fail(`${host.name} ${owner}.${m.name}: not in \`only\` and not excluded (serve-tier2.mjs)`);
      if (m.kind === 'index') fail(`${host.name} ${owner}: an index signature is not lowered`);
      taken.push(m);
    }
    for (const [name, os] of Object.entries(s.overloads ?? {})) for (const key of Object.keys(os))
      if (members.some(m => m.name === name) && !seenOverloads.has(`${name}(${key})`) && !members.some(m => m.name === name && unstable(m.doc) && paramKey(m.params) === key))
        fail(`${host.name} ${owner}.${name}(${key}) is decided in the tier but not declared`);
    return taken;
  }
  /** The alternatives of a type of object types, each a member list (rich: `merge`). */
  function objectAlternatives(t, where) {
    switch (t.k) {
    case 'union': return t.alts.flatMap(a => objectAlternatives(a, where));
    case 'inter': return t.parts.reduce((acc, p) => acc.flatMap(x => objectAlternatives(p, where).map(y => [...x, ...y])), [[]]);
    case 'obj': { const src = { ...blank(t.body), file: '' }; return [membersOf(src, 0, t.body.length)]; }
    case 'name': {
      if (t.name === 'Record' && typeText(t.args[1]) === 'unknown') return [[]];
      const d = find(t.name);
      if (d.kind !== 'interface') fail(`${where}: ${t.name} is not an object type`);
      return [membersOf(d.src, d.body[0], d.body[1])];
    }
    default: fail(`${where}: ${typeText(t)} is not an object type`);
    }
  }
  function mergeAlternatives(alts) {
    const names = [...new Set(alts.flatMap(a => a.map(m => m.name)))];
    return names.map(n => {
      const found = alts.map(a => a.find(m => m.name === n));
      const present = found.filter(Boolean);
      if (present.some(m => m.kind !== 'property')) fail(`merged member ${n} is not a property`);
      const types = [...new Set(present.map(m => m.type))];
      const optional = found.some(m => !m || m.optional);
      const type = types.length === 1 ? types[0] : types.map(x => `(${x})`).join(' | ');
      return { ...present[0], optional, type, text: `${n}${optional ? '?' : ''}: ${type}` };
    });
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
  for (const [fname, f] of Object.entries(host.functions ?? {})) {
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
  if (host.functions) defs.push(`// The global ${host.global}\n${attrs(null, { module: host.functions[Object.keys(host.functions)[0]].module, LasmPath: host.global })}\nnamespace ${host.global} {\n${nsMembers.join('\n')}\n};`);
  // rich: the globals and module exports the tier selects (`caches`; `connect` of
  // cloudflare:sockets), one namespace per Lean module and JavaScript module.
  for (const g of host.globals ?? []) {
    const lines = [];
    for (const e of g.members) {
      const d = e.const ? byName.get('const:' + e.const) ?? fail(`${host.name}: const ${e.const} is not declared`)
        : (byName.get('fn:' + e.function) ?? fail(`${host.name}: function ${e.function} is not declared`))[0];
      const tag = unstable(d.doc);
      if (tag) fail(`${host.name} ${e.name} is ${tag}`);
      const ctx = { owner: '', member: e.name, module: g.module, decl: d, doc: d.doc, generics: {}, where: `${host.name} ${e.const ?? e.function}` };
      if (e.const) {
        const signature = d.text.replace(/^(?:export\s+)?(?:declare\s+)?/, '');
        lines.push(`  // ${signature}\n  ${attrs(d, { LasmSignature: signature })} readonly attribute ${lower(parseType(d.type), { ...ctx, role: 'attr' })} ${e.name};`);
      } else {
        const fns = byName.get('fn:' + e.function);
        if (fns.length !== 1) fail(`${host.name}: ${e.function} has overloads`);
        const sig = functionSignature(d.text);
        const signature = `${e.name}(${paramKey(sig.params)}): ${sig.type}`;
        const c = { ...ctx, generics: genericDefaults(sig.generics), signature };
        const args = sig.params.map(p => `${p.optional ? 'optional ' : ''}${lower(parseType(p.type), { ...c, role: 'arg', param: p.name, optional: p.optional, where: `${c.where} (${p.name})` })}${p.rest ? '...' : ''} ${p.name}`);
        lines.push(`  // ${signature}\n  ${attrs(d, { LasmSignature: signature })} ${lower(parseType(sig.type), { ...c, role: 'result' })} ${e.name}(${args.join(', ')});`);
      }
    }
    defs.push(`// ${g.jsModule === 'globalThis' ? 'Globals' : `The exports of ${g.jsModule}`}\n${attrs(null, { module: g.module, LasmModule: g.jsModule === 'globalThis' ? undefined : g.jsModule, LasmPath: '' })}\nnamespace ${idlName(g.idl)} {\n${lines.join('\n')}\n};`);
  }

  for (const s of host.declarations) {
    const lean = leanOf(s);
    const name = idlName(lean);
    const genericsOf = (d, m) => rich ? { ...declGenerics(d), ...(s.typeArgs ?? {}), ...genericDefaults(m?.generics) } : undefined;
    const ctxOf = (m, d) => ({ owner: lean, member: m.name, module: s.module, doc: m.doc, decl: d, where: `${host.name} ${s.name}.${m.name}`,
      signature: `${s.name}.${m.text}`, generics: genericsOf(d, m) });
    if (s.as === 'callback') {
      const d = find(s.name);
      if (d.kind !== 'type') fail(`${s.name} is not a type alias`);
      const rhs = aliasBody(d);
      const t = parseType(rhs);
      if (t.k !== 'fn') fail(`${s.name} is not a function type`);
      lowerCallback(t, { owner: lean, member: '', module: s.module, doc: d.doc, decl: d, where: `${host.name} ${s.name}`, callbackName: lean,
        signature: squash(d.text.replace(/^export\s+/, '')), generics: genericsOf(d) });
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
      if (s.merge) {
        // rich: a type alias of object types (`{…} | {…}`, `A & ({…} | {…})`) as one dictionary: a member
        // in every alternative keeps its optionality, the others are optional; differing types are a union.
        if (d.kind !== 'type') fail(`${s.name}: merge needs a type alias`);
        ms = mergeAlternatives(objectAlternatives(parseType(aliasBody(d)), s.name));
      } else if (d.kind === 'type' && c.objectPart !== undefined) {
        ms = objectParts(d)[c.objectPart] ?? fail(`${c.from} has no object part ${c.objectPart}`);
      } else if (d.kind === 'interface') {
        ms = membersOf(d.src, d.body[0], d.body[1]);
        if (!s.compose) for (const h of heritage(d)) {
          const hn = typeText(h).replace(/<.*$/, '').replace(new RegExp(`^${host.global}\\.`), '');
          const ref = refName(hn, h.args ?? [], `${s.name} extends`);
          if (ref) { if (parent) fail(`${s.name}: two selected bases`); parent = ref; }
          else if (!(hn in host.notSelected)) fail(`${s.name} extends ${hn}, which is neither selected nor in ${host.tierFile ?? 'serve-tier2.mjs'} notSelected`);
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
      const intKey = `${s.name}.${m.name}`;
      // WebIDL reserves a few identifiers (`toString`): such a member is written `toString_`, named by LasmName.
      const reserved = rich && ['toString', 'constructor', 'toJSON', 'prototype'].includes(m.name);
      const idlMember = reserved ? `${m.name}_` : m.name;
      const more = reserved ? { LasmName: m.name } : {};
      if (s.as === 'interface') {
        const flags = new Set();
        if (m.kind === 'property') {
          let t = lower(parseType(m.type), { ...ctx, role: 'attr', intKey, flags });
          if (rich && (t === 'never' || t === 'undefined')) { excluded.push([`${s.name}.${m.name}`, `its type is ${m.type}: it is never present`]); continue; }
          // rich: an optional property (`httpMetadata?: R2HTTPMetadata`) may be absent: nullable.
          if (rich && m.optional && t !== 'any' && !t.endsWith('?')) t += '?';
          lines.push(`  // ${m.text}`);
          lines.push(`  ${attrs(m.d, { LasmSignature: m.text, ...more, LasmMap: flags.has('map') || undefined })} readonly attribute ${t} ${idlMember};`);
        } else {
          // rich: a parameter of one string literal type (`type: "json"`) is passed as that string, and
          // the overload is named with it (`get(key, type: "json")` → getJson).
          const constants = rich ? m.params.filter(p => parseType(p.type).k === 'lit') : [];
          const overloadName = constants.length ? m.name + constants.map(p => capital(parseType(p.type).value.replace(/[^A-Za-z0-9]+(.)?/g, (_, c) => c ? c.toUpperCase() : ''))).join('') : undefined;
          // A rest parameter (`...values: unknown[]`) is variadic in its element type.
          const restType = p => { const t = parseType(p.type); return p.rest && rich && t.k === 'array' ? t.inner : t; };
          const args = m.params.filter(p => p.name !== 'this').map(p => constants.includes(p)
            ? `[LasmConstant=${quoteAttr(parseType(p.type).value)}] DOMString ${p.name}`
            : `${p.optional ? 'optional ' : ''}${lower(restType(p), { ...ctx, role: 'arg', intKey: `${intKey}.${p.name}`, optional: p.optional, where: `${ctx.where} (${p.name})`, param: rich ? p.name : undefined })}${p.rest ? '...' : ''} ${p.name}`);
          const ret = lower(parseType(m.type), { ...ctx, role: 'result', intKey, flags });
          lines.push(`  // ${m.text}`);
          lines.push(`  ${attrs(m.d, { LasmSignature: m.text, ...more, LasmOverloadName: overloadName, LasmMap: flags.has('map') || undefined })} ${ret} ${idlMember}(${args.join(', ')});`);
        }
      } else {
        const t = m.kind === 'method' ? lowerCallback({ k: 'fn', params: m.params, ret: parseType(m.type) }, ctx)
          : lower(parseType(m.type), { ...ctx, role: 'field', intKey, optional: m.optional });
        if (rich && (t === 'never' || t === 'undefined')) { excluded.push([`${s.name}.${m.name}`, `its type is ${m.type}: it is never present`]); continue; }
        lines.push(`  // ${m.text}`);
        lines.push(`  ${m.optional ? '' : 'required '}${t} ${m.name};`);
      }
    }
    const path = host.global ? `${host.global}.${s.name}` : s.name;
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
