// A reader for the WIT (WebAssembly Interface Type) files of the WASI
// interfaces Lasm binds (scripts/bindings/generate-wasi-http.mjs): packages,
// interfaces with `use`, type aliases, records, variants, enums, flags,
// resources (constructors, methods, static functions) and functions, with
// their `///` docs and `@since`/`@unstable`/`@deprecated` gates. Worlds are
// skipped. It follows the WIT grammar of the component model
// (https://github.com/WebAssembly/component-model/blob/main/design/mvp/WIT.md)
// as far as these files use it, and fails on anything else.

/** The tokens of a WIT file: { t: 'id'|'punct'|'version'|'doc', v }. */
function tokenize(text, file) {
  const tokens = [];
  let i = 0, doc = [];
  const fail = msg => { throw new Error(`${file}: ${msg} at offset ${i}`); };
  while (i < text.length) {
    const c = text[i];
    if (/\s/.test(c)) { i++; continue; }
    if (text.startsWith('///', i)) {
      const end = text.indexOf('\n', i);
      doc.push(text.slice(i + 3, end < 0 ? text.length : end).replace(/^ /, ''));
      i = end < 0 ? text.length : end + 1; continue;
    }
    if (text.startsWith('//', i)) { const end = text.indexOf('\n', i); i = end < 0 ? text.length : end + 1; continue; }
    if (text.startsWith('/*', i)) { const end = text.indexOf('*/', i); if (end < 0) fail('unterminated comment'); i = end + 2; continue; }
    if (text.startsWith('->', i)) { tokens.push({ t: 'punct', v: '->', doc }); doc = []; i += 2; continue; }
    if ('{}()<>,:;=./@*_'.includes(c) && !(c === '_' && /[A-Za-z0-9-]/.test(text[i + 1] ?? ''))) {
      // A version follows `@` in package paths (`wasi:io@0.2.12`, `@since(version = 0.2.0)`).
      tokens.push({ t: 'punct', v: c, doc }); doc = []; i++;
      continue;
    }
    const version = /^\d+\.\d+\.\d+(?:-[A-Za-z0-9.-]+)?/.exec(text.slice(i));
    if (version && (tokens.at(-1)?.v === '@' || tokens.at(-1)?.v === '=')) { tokens.push({ t: 'version', v: version[0], doc }); doc = []; i += version[0].length; continue; }
    const ident = /^%?[A-Za-z][A-Za-z0-9-]*/.exec(text.slice(i));
    if (ident) { tokens.push({ t: 'id', v: ident[0].replace(/^%/, ''), raw: ident[0], doc }); doc = []; i += ident[0].length; continue; }
    fail(`unexpected ${JSON.stringify(c)}`);
  }
  return tokens;
}

/** Parses one WIT file: { package: { namespace, name, version }, interfaces: [...] }. */
export function parseWit(text, file = 'wit') {
  const tokens = tokenize(text, file);
  let at = 0;
  const peek = (k = 0) => tokens[at + k];
  const fail = msg => { throw new Error(`${file}: ${msg} (near ${JSON.stringify(tokens.slice(at, at + 6).map(t => t.v).join(' '))})`); };
  const next = () => tokens[at++] ?? fail('unexpected end');
  const is = v => peek()?.v === v && peek().t !== 'version';
  const expect = v => { const t = next(); if (t.v !== v) fail(`expected ${v}`); return t; };
  const ident = () => { const t = next(); if (t.t !== 'id') fail('expected an identifier'); return t.v; };
  const docOf = t => (t?.doc ?? []).join('\n').trim();

  /** Gates before an item: @since(version = x), @unstable(feature = f), @deprecated(version = x). */
  function gates() {
    const g = { doc: docOf(peek()) };
    while (is('@')) {
      next();
      const kind = ident();
      expect('(');
      const key = ident(); expect('=');
      const value = next().v;
      expect(')');
      g[kind] = { [key]: value };
      g.doc ||= docOf(peek());
    }
    return g;
  }
  /** A package path: ns:pkg/iface@version or a local name. */
  function usePath() {
    const first = ident();
    if (!is(':')) return { local: first };
    next();
    const pkg = ident(); expect('/');
    const iface = ident();
    let version = null;
    if (is('@')) { next(); version = next().v; }
    return { namespace: first, package: pkg, interface: iface, version };
  }
  function type() {
    const name = ident();
    const generic = ['list', 'option', 'result', 'tuple', 'borrow', 'own'];
    if (!generic.includes(name) || !is('<')) {
      if (name === 'result') return { kind: 'result', ok: null, err: null };
      if (['bool', 'u8', 'u16', 'u32', 'u64', 's8', 's16', 's32', 's64', 'f32', 'f64', 'char', 'string'].includes(name)) return { kind: name };
      return { kind: 'ref', name };
    }
    next();
    let t;
    if (name === 'result') {
      let ok = null;
      if (is('_')) next(); else ok = type();
      let err = null;
      if (is(',')) { next(); err = type(); }
      t = { kind: 'result', ok, err };
    } else if (name === 'tuple') {
      const of = [type()];
      while (is(',')) { next(); of.push(type()); }
      t = { kind: 'tuple', of };
    } else if (name === 'borrow' || name === 'own') t = { kind: name, name: ident() };
    else t = { kind: name, of: type() };
    expect('>');
    return t;
  }
  function params() {
    expect('(');
    const ps = [];
    while (!is(')')) {
      const name = ident(); expect(':');
      ps.push({ name, type: type() });
      if (is(',')) next();
    }
    expect(')');
    return ps;
  }
  function funcSig() {
    expect('func');
    const ps = params();
    let result = null;
    if (is('->')) { next(); result = type(); }
    return { params: ps, result };
  }
  function braced(item) {
    expect('{');
    const items = [];
    while (!is('}')) items.push(item());
    expect('}');
    return items;
  }
  function interfaceItem() {
    const g = gates();
    const t = peek();
    if (t.v === 'use') {
      next();
      const path = usePath();
      expect('.'); expect('{');
      const names = [];
      while (!is('}')) {
        const name = ident();
        let as = name;
        if (is('as')) { next(); as = ident(); }
        names.push({ name, as });
        if (is(',')) next();
      }
      expect('}'); expect(';');
      return { item: 'use', path, names, ...g };
    }
    if (t.v === 'type') { next(); const name = ident(); expect('='); const ty = type(); expect(';'); return { item: 'type', name, def: { kind: 'alias', of: ty }, ...g }; }
    if (t.v === 'record') {
      next(); const name = ident();
      const fields = braced(() => { const fg = gates(); const n = ident(); expect(':'); const ft = type(); if (is(',')) next(); return { name: n, type: ft, ...fg }; });
      return { item: 'type', name, def: { kind: 'record', fields }, ...g };
    }
    if (t.v === 'variant' || t.v === 'enum' || t.v === 'flags') {
      const kind = next().v; const name = ident();
      const cases = braced(() => {
        const cg = gates(); const n = ident();
        let ct = null;
        if (kind === 'variant' && is('(')) { next(); ct = type(); expect(')'); }
        if (is(',')) next();
        return { name: n, type: ct, ...cg };
      });
      return { item: 'type', name, def: kind === 'flags' ? { kind: 'flags', flags: cases } : { kind: 'variant', enum: kind === 'enum', cases }, ...g };
    }
    if (t.v === 'resource') {
      next(); const name = ident();
      const members = [];
      if (is(';')) next();
      else {
        expect('{');
        while (!is('}')) {
          const mg = gates();
          if (is('constructor')) { next(); members.push({ kind: 'constructor', name: 'constructor', params: params(), result: null, ...mg }); expect(';'); continue; }
          const n = ident(); expect(':');
          let isStatic = false;
          if (is('static')) { next(); isStatic = true; }
          members.push({ kind: isStatic ? 'static' : 'method', name: n, ...funcSig(), ...mg });
          expect(';');
        }
        expect('}');
      }
      return { item: 'type', name, def: { kind: 'resource', members }, ...g };
    }
    if (t.t === 'id' && peek(1)?.v === ':') {
      const name = ident(); expect(':');
      const sig = funcSig(); expect(';');
      return { item: 'func', name, ...sig, ...g };
    }
    fail('unexpected item');
  }
  function skipBraces() {
    expect('{');
    for (let depth = 1; depth;) { const t = next(); if (t.v === '{') depth++; if (t.v === '}') depth--; }
  }

  const out = { package: null, interfaces: [] };
  while (at < tokens.length) {
    const g = gates();
    const t = peek();
    if (!t) break;
    if (t.v === 'package') {
      next();
      const namespace = ident(); expect(':'); const name = ident();
      let version = null;
      if (is('@')) { next(); version = next().v; }
      expect(';');
      out.package = { namespace, name, version };
      continue;
    }
    if (t.v === 'interface') {
      next(); const name = ident();
      out.interfaces.push({ name, items: braced(interfaceItem), ...g });
      continue;
    }
    if (t.v === 'world') { next(); ident(); skipBraces(); continue; }
    fail('unexpected top-level item');
  }
  return out;
}
