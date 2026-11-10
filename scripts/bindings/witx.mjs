// A reader of witx, the interface language of Fastly Compute's host ABI
// (scripts/fastly/witx/*.witx, Viceroy v0.21.1's compute-at-edge-abi): the
// s-expressions, `(typename …)` definitions and `(module …)` functions with
// their `;;;` doc comments. Used by scripts/bindings/generate-fastly.mjs.
//
// The model: { types: Map(name → type), modules: [{ name, doc, funcs: [{ name, doc, params, result }] }] },
// where a type is { kind: 'builtin', name } | { kind: 'named', name } | { kind: 'enum', repr, cases } |
// { kind: 'flags', repr, flags } | { kind: 'record', fields } | { kind: 'handle' } | { kind: 'pointer', to } |
// { kind: 'list', of } | { kind: 'string' } | { kind: 'char8' } | { kind: 'usize' } | { kind: 'tuple', of } |
// { kind: 'expected', ok, error }.
import { readFileSync } from 'node:fs';
import { dirname, join } from 'node:path';

/** Tokens of a witx file; `;;;` comments become doc tokens attached to the next form. */
function tokenize(text, file) {
  const tokens = [];
  let doc = [];
  for (let i = 0; i < text.length;) {
    const c = text[i];
    if (c === ';' && text[i + 1] === ';') {
      const end = text.indexOf('\n', i);
      const line = text.slice(i, end < 0 ? text.length : end);
      if (line.startsWith(';;;')) doc.push(line.slice(3).replace(/^ /, ''));
      i = end < 0 ? text.length : end + 1;
      continue;
    }
    if (/\s/.test(c)) { i++; continue; }
    if (c === '(') { tokens.push({ t: '(', doc: doc.length ? doc.join('\n').trim() : null }); doc = []; i++; continue; }
    if (c === ')') { tokens.push({ t: ')' }); doc = []; i++; continue; }
    if (c === '"') {
      const end = text.indexOf('"', i + 1);
      if (end < 0) throw new Error(`${file}: unterminated string`);
      tokens.push({ t: 'str', v: text.slice(i + 1, end) }); i = end + 1; continue;
    }
    let j = i;
    while (j < text.length && !/[\s()";]/.test(text[j])) j++;
    tokens.push({ t: 'atom', v: text.slice(i, j) }); i = j;
  }
  return tokens;
}

/** S-expressions: arrays of atoms (strings), { str } and nested arrays (with .doc). */
function parse(text, file) {
  const tokens = tokenize(text, file);
  let at = 0;
  const form = () => {
    const token = tokens[at++];
    if (token.t === 'atom') return token.v;
    if (token.t === 'str') return { str: token.v };
    if (token.t !== '(') throw new Error(`${file}: unexpected ${token.t}`);
    const list = [];
    list.doc = token.doc;
    while (tokens[at]?.t !== ')') { if (at >= tokens.length) throw new Error(`${file}: unbalanced parentheses`); list.push(form()); }
    at++;
    return list;
  };
  const forms = [];
  while (at < tokens.length) forms.push(form());
  return forms;
}

const builtins = new Set(['u8', 'u16', 'u32', 'u64', 's8', 's16', 's32', 's64', 'f32', 'f64']);
const name = atom => { if (typeof atom !== 'string' || !atom.startsWith('$')) throw new Error(`witx: expected a $name, got ${JSON.stringify(atom)}`); return atom.slice(1); };

function type(x) {
  if (typeof x === 'string') {
    if (builtins.has(x)) return { kind: 'builtin', name: x };
    if (x === 'string') return { kind: 'string' };
    return { kind: 'named', name: name(x) };
  }
  const [head, ...rest] = x;
  switch (head) {
    case 'handle': return { kind: 'handle' };
    case 'list': return { kind: 'list', of: type(rest[0]) };
    case 'tuple': return { kind: 'tuple', of: rest.map(type) };
    case '@witx':
      if (rest[0] === 'pointer' || rest[0] === 'const_pointer') return { kind: 'pointer', to: type(rest[1]), const: rest[0] === 'const_pointer' };
      if (rest[0] === 'char8') return { kind: 'char8' };
      if (rest[0] === 'usize') return { kind: 'usize' };
      throw new Error(`witx: unknown (@witx ${rest[0]})`);
    case 'enum': {
      const [[, , repr], ...cases] = rest;
      return { kind: 'enum', repr, cases: cases.map(name) };
    }
    case 'flags': {
      const [[, , repr], ...flags] = rest;
      return { kind: 'flags', repr, flags: flags.map(name) };
    }
    case 'record':
      return { kind: 'record', fields: rest.map(f => ({ name: name(f[1]), type: type(f[2]) })) };
    case 'expected': {
      let ok = null, error = null;
      for (const part of rest) {
        if (Array.isArray(part) && part[0] === 'error') error = type(part[1]);
        else ok = type(part);
      }
      return { kind: 'expected', ok, error };
    }
    default: throw new Error(`witx: unknown type form (${head} …)`);
  }
}

/** Reads `file` and the files it `use`s. */
export function readWitx(file) {
  const types = new Map(), typeDocs = new Map(), modules = [], seen = new Set();
  const read = path => {
    if (seen.has(path)) return;
    seen.add(path);
    for (const f of parse(readFileSync(path, 'utf8'), path)) {
      if (f[0] === 'use') { read(join(dirname(path), f[1].str)); continue; }
      if (f[0] === 'typename') { types.set(name(f[1]), type(f[2])); typeDocs.set(name(f[1]), f.doc); continue; }
      if (f[0] === 'module') {
        const module = { name: name(f[1]), doc: f.doc, funcs: [] };
        for (const g of f.slice(2)) {
          if (!Array.isArray(g) || g[0] !== '@interface') continue;
          const [, , [, exportName], ...parts] = g;
          const fn = { name: exportName.str, doc: g.doc, params: [], result: null };
          for (const p of parts) {
            if (p[0] === 'param') fn.params.push({ name: name(p[1]), type: type(p[2]) });
            else if (p[0] === 'result') fn.result = type(p[2]);
          }
          module.funcs.push(fn);
        }
        modules.push(module);
        continue;
      }
      throw new Error(`${path}: unknown top-level form (${f[0]} …)`);
    }
  };
  read(file);
  return { types, typeDocs, modules };
}
