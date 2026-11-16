// Lowers Node's API documentation (doc/api/<module>.json of the pinned Node.js
// version) to WebIDL: scripts/bindings/node.idl, which generate-web.mjs turns into
// Lasm.JS.Node with the mapping rules of Lasm.JS.Web (docs/JS_BINDINGS.md,
// "Lasm.JS.Node"). The selection and what the docs say only in prose are in
// node-tier2.mjs; the docs' files are fetched from nodejs.org and checked against
// node-api.lock.json, and cached in .work/node-api/.
//
//   node scripts/bindings/node-api.mjs                # write node.idl and node-api-26.json
//   node scripts/bindings/node-api.mjs --check        # exit 1 if either differs
//   node scripts/bindings/node-api.mjs --update-lock  # record the docs' hashes (after a version bump)
//
// Lowering rules (each documented in docs/JS_BINDINGS.md):
//   - a method's parameters, their order and which are optional come from its
//     documented signature (`readFile(path[, options])`), their types from the
//     docs' type annotations ({string|Buffer|URL}); `null` makes a type nullable;
//   - an `{Object}` parameter whose members are documented becomes a dictionary
//     (`fsPromises.ReadFileOptions`), else `object`;
//   - Buffer, TypedArray, DataView and Uint8Array are bytes (ByteArray);
//   - an optional trailing `callback` is left out (the synchronous form:
//     `crypto.randomBytes(size)`); a required trailing callback `(err, value)` is
//     the promise of `value`, called through util.promisify (`crypto.scrypt`);
//   - an optional parameter before a required one (`randomInt([min, ]max)`) gives
//     two overloads, without and with it;
//   - `Promise` results are `Promise<T>`, T from the docs' "Fulfills with
//     `undefined`" / "Fulfills with the {T}", else from node-tier2.mjs's prose.
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as tier from './node-tier2.mjs';
import { createRequire } from 'node:module';
const webidl2 = createRequire(import.meta.url)('webidl2');

const root = fileURLToPath(new URL('../../', import.meta.url));
const lockFile = join(root, 'scripts', 'bindings', 'node-api.lock.json');
const idlFile = join(root, 'scripts', 'bindings', 'node.idl');
const diffFile = join(root, 'scripts', 'bindings', 'node-api-26.json');
const cacheDir = join(root, '.work', 'node-api');
const check = process.argv.includes('--check');
const updateLock = process.argv.includes('--update-lock');
const fail = message => { throw new Error(`node-api: ${message}`); };

// ---------- the docs, pinned ----------

const lock = existsSync(lockFile) ? JSON.parse(readFileSync(lockFile, 'utf8')) : {};
async function loadDoc(version, doc) {
  const file = join(cacheDir, `v${version}`, `${doc}.json`);
  let text;
  if (existsSync(file)) text = readFileSync(file, 'utf8');
  else {
    const url = `https://nodejs.org/dist/v${version}/docs/api/${doc}.json`;
    const response = await fetch(url);
    if (!response.ok) fail(`${url}: HTTP ${response.status}`);
    text = await response.text();
  }
  const sha256 = createHash('sha256').update(text).digest('hex');
  if (updateLock) { (lock[version] ??= {})[doc] = sha256; }
  else if (lock[version]?.[doc] !== sha256) fail(`v${version} ${doc}.json has SHA-256 ${sha256}, not the pinned ${lock[version]?.[doc]} (node-api.lock.json)`);
  if (!existsSync(file)) { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); }
  return JSON.parse(text);
}

// ---------- reading a doc tree ----------

const kinds = ['modules', 'globals', 'classes', 'methods', 'classMethods', 'properties', 'ctors', 'miscs'];
/** Every section with a heading, with its parent chain. */
function sections(node, parents = [], out = []) {
  for (const k of kinds) for (const child of node[k] ?? []) {
    out.push({ node: child, kind: k, parents });
    sections(child, [...parents, child], out);
  }
  return out;
}
const findSection = (all, heading) => {
  const found = all.filter(s => s.node.textRaw === heading && ['modules', 'globals', 'classes', 'miscs'].includes(s.kind));
  if (found.length !== 1) fail(`${found.length} sections headed ${JSON.stringify(heading)}`);
  return found[0];
};
const stabilityOf = (node, parents) => {
  for (const n of [node, ...[...parents].reverse()]) if (n.stability !== undefined) return n.stability;
  return 2;
};
const plainText = html => (html ?? '').replace(/<[^>]*>/g, '').replace(/`/g, '').replace(/&lt;/g, '<').replace(/&gt;/g, '>').replace(/&quot;/g, '"')
  .replace(/&#x([0-9a-f]+);/gi, (_, h) => String.fromCodePoint(parseInt(h, 16))).replace(/&#([0-9]+);/g, (_, d) => String.fromCodePoint(+d)).replace(/&amp;/g, '&').replace(/\s+/g, ' ');
/** All the text of a doc tree (descriptions and headings). */
const docText = node => {
  const parts = [];
  (function walk(n) {
    if (Array.isArray(n)) { n.forEach(walk); return; }
    if (!n || typeof n !== 'object') return;
    for (const [k, v] of Object.entries(n)) {
      if (typeof v === 'string') { if (k === 'desc' || k === 'textRaw') parts.push(plainText(v)); }
      else walk(v);
    }
  })(node);
  return parts.join(' ');
};
/** The documentation text of a member (its description, parameters and result). */
const memberText = node => plainText([node.desc, ...(node.signatures ?? []).flatMap(s => [s.return?.textRaw,
  ...(s.params ?? []).flatMap(function all(p) { return [p.textRaw, ...(p.options ?? []).flatMap(all)]; })]), node.textRaw].join(' '));

/** The documented type of a parameter, option, property or result: its `type`, or,
 * where the docs write an array as `{T}[]` (Node 26's), `T[]`. */
function docType(entry) {
  const m = /\{([^}]+)\}((?:\\?\[\\?\])+)/.exec(entry?.textRaw ?? '');
  if (m) return m[1].split('|').map(t => t.trim() + '[]'.repeat(m[2].replace(/\\/g, '').length / 2)).join('|');
  return entry?.type ?? /\{([^}]+)\}/.exec(entry?.textRaw ?? '')?.[1];
}
/** `name(a[, b[, c]])` → { name, params: [{ name, optional, variadic }] }. */
function parseSignature(textRaw) {
  const m = /`([^`(]+)\(([^)]*)\)`/.exec(textRaw);
  if (!m) return null;
  const params = [];
  let depth = 0;
  for (const t of m[2].matchAll(/\[|\]|(\.\.\.)?([A-Za-z_$][\w$]*)/g)) {
    if (t[0] === '[') depth++;
    else if (t[0] === ']') depth--;
    else params.push({ name: t[2], optional: depth > 0, variadic: !!t[1] });
  }
  return { name: m[1], params };
}

// ---------- types ----------

const idlName = name => 'Node_' + name.replace(/\./g, '_');
/** Every Node-side name the IDL defines (classes, namespaces' dictionaries). */
const defined = new Map(); // doc/Lean name (fs.Stats, FileHandle.ReadResult) → IDL name
const webNames = new Set(['URL', 'AbortSignal', 'ReadableStream', 'WritableStream', 'CryptoKey', 'Blob', 'Function', 'ArrayBuffer', 'Headers']);
function namedType(n, where) {
  const mapped = tier.typeNames[n];
  if (mapped === 'bytes') return 'Uint8Array';
  if (mapped !== undefined) return defined.has(mapped) ? defined.get(mapped) : mapped;
  if (defined.has(n)) return defined.get(n);
  // A class the docs name without its module (`Socket` for net.Socket) or with it (`fs.Stats`).
  const byLast = [...defined.keys()].filter(k => k.split('.').at(-1) === n.split('.').at(-1) && !/^[a-z]/.test(n.split('.').at(-1)));
  if (byLast.length === 1) return defined.get(byLast[0]);
  // A web standard class (Lasm.JS.Web's).
  if (webInterfaces.has(n) || webInterfaces.has(n.split('.').at(-1))) return n.split('.').at(-1);
  // A type the docs name that no generated class or web standard defines: any value.
  unknownTypes.add(`${n} (${where})`);
  return 'any';
}
const unknownTypes = new Set();
const excludedUsed = new Set();
/** A type written in node-tier2.mjs (WebIDL with the docs' names) → WebIDL. */
const proseType = text => text.replace(/\bbytes\b/g, 'Uint8Array').replace(/[A-Za-z_][\w]*(?:\.[A-Za-z_][\w]*)+|\b[A-Z][\w]*\b/g, n =>
  defined.has(n) ? defined.get(n) : n);

/** The docs' `{a|b|c[]}` → WebIDL, making dictionaries of documented options. */
function lowerType(typeText, ctx) {
  const tokens = String(typeText).replace(/\\/g, '').split('|').map(s => s.trim()).filter(Boolean);
  let nullable = false;
  const alts = [];
  for (const tok of tokens) {
    if (tok === 'null' || tok === 'undefined') { nullable = true; continue; }
    const seq = /^(.*)\[\]$/.exec(tok);
    if (seq) { alts.push(`sequence<${lowerType(seq[1], { ...ctx, options: null })}>`); continue; }
    if (tok === 'Object' && ctx.options?.length) { alts.push(ctx.makeDict(ctx.options)); continue; }
    // `{this}`: the object the method is called on, as the class's own type.
    if (tok === 'this') { alts.push(currentSelf ? defined.get(currentSelf) ?? fail(`${ctx.where}: {this} of ${currentSelf}`) : fail(`${ctx.where}: {this} outside a class`)); continue; }
    alts.push(namedType(tok, ctx.where));
  }
  // Bytes: one alternative (a Uint8Array is accepted wherever the docs list ArrayBuffer beside typed arrays).
  let unique = [...new Set(alts)];
  if (unique.includes('Uint8Array') && unique.includes('ArrayBuffer')) unique = unique.filter(a => a !== 'ArrayBuffer');
  if (unique.includes('any') || (unique.length > 1 && unique.some(u => u.startsWith('Promise<')))) unique = ['any'];
  if (!unique.length) return 'undefined';
  const t = unique.length === 1 ? unique[0] : `(${unique.join(' or ')})`;
  return nullable && t !== 'any' ? `${t}?` : t;
}

// ---------- lowering ----------

const capital = s => s[0].toUpperCase() + s.slice(1);
/** An event's name as part of an identifier: `Debugger.paused` → `DebuggerPaused`. */
const eventId = name => name.split(/[^A-Za-z0-9]+/).filter(Boolean).map(capital).join('');
/** The Node versions the docs say added a member (`meta.added`: the release line's first and its backports), as an attribute. */
const addedOf = node => node.meta?.added?.length ? `LasmAdded="${node.meta.added.join(', ')}"` : null;
/** A member's documented signature (`fsPromises.readFile(path[, options])`), for its doc comment. */
const signatureOf = node => (/`([^`]+)`/.exec(node.textRaw)?.[1] ?? node.textRaw).replace(/"/g, "'");
/** WebIDL keywords are escaped with a leading underscore where a name is expected (`boolean _bigint`). */
const idlKeywords = new Set(['any', 'async', 'attribute', 'bigint', 'boolean', 'byte', 'callback', 'const', 'constructor', 'deleter', 'dictionary',
  'double', 'enum', 'float', 'getter', 'includes', 'inherit', 'interface', 'iterable', 'long', 'maplike', 'mixin', 'namespace', 'object', 'octet',
  'optional', 'or', 'partial', 'readonly', 'record', 'required', 'sequence', 'setlike', 'setter', 'short', 'static', 'stringifier', 'symbol',
  'typedef', 'undefined', 'unrestricted', 'unsigned', 'true', 'false', 'null', 'Infinity', 'NaN']);
const escapeName = n => ['constructor', 'toString', 'toJSON', 'prototype'].includes(n) ? n + '_' : idlKeywords.has(n) ? '_' + n : n;
const dicts = []; // IDL text
/** The class being lowered (`{this}` is its type). */
let currentSelf = null;
const dictNames = new Set();
/** A dictionary of documented option members (`fsPromises.ReadFileOptions`); nested ones are named after their member. */
function makeDictionary(ns, base, options, where, overrides, path) {
  let lean = base, n = 2;
  while (dictNames.has(`${ns}.${lean}`)) lean = base + n++;
  dictNames.add(`${ns}.${lean}`);
  const name = idlName(`${ns}.${lean}`);
  defined.set(`${ns}.${lean}`, name);
  const mark = dicts.length;
  const members = [];
  for (const o of options) {
    if (!/^[A-Za-z_$][\w$]*$/.test(o.name)) continue; // `fs.constants.COPYFILE_EXCL` and the like: values, not members
    const at = `${path}.${o.name}`;
    const type = overrides[at] ? proseType(overrides[at]) : lowerType(docType(o), { where: `${where} ${at}`, options: o.options,
      makeDict: opts => makeDictionary(ns, lean + capital(o.name), opts, where, overrides, at) });
    const def = defaultLiteral(o.default);
    members.push(`  ${type} ${escapeName(o.name)}${def !== undefined ? ' = ' + def : ''};`);
  }
  // The same options documented again for another overload (`http.request(options)` and `http.request(url, options)`): one dictionary.
  const body = members.join('\n');
  const same = lean !== base && dicts.slice(0, mark).find(d => d.startsWith(`[LasmNamespace="${ns}", LasmName="${base}"]\n`) && d.endsWith(`{\n${body}\n};`));
  if (same && dicts.length === mark) { dictNames.delete(`${ns}.${lean}`); defined.delete(`${ns}.${lean}`); return idlName(`${ns}.${base}`); }
  dicts.push(`[LasmNamespace="${ns}", LasmName="${lean}"]\ndictionary ${name} {\n${body}\n};`);
  return name;
}
/** A documented default that is a JavaScript literal, as a WebIDL default. */
function defaultLiteral(text) {
  if (!text) return undefined;
  const t = text.replace(/`/g, '').trim();
  if (/^'[^']*'$/.test(t)) return JSON.stringify(t.slice(1, -1));
  if (/^-?\d+(\.\d+)?$/.test(t)) return t;
  if (t === 'true' || t === 'false' || t === 'null') return t;
  return undefined;
}

function lowerContainer(doc, all, mod, c, out) {
  const ns = c.name;
  const where = `${doc} ${c.heading ?? c.name}`;
  const classSec = c.section ?? (c.heading && !c.sections && c.kind !== 'namespace' ? findSection(all, c.heading) : null);
  const members = [];
  const take = (section, prefix, isStatic) => {
    const parents = [...section.parents, section.node];
    for (const k of ['methods', 'classMethods', 'properties', 'ctors']) for (const node0 of section.node[k] ?? []) {
      // Overloads documented as sections of one heading (`server.listen()` with `server.listen(options[, callback])`, …):
      // each is a member, the heading itself is not.
      const sig0 = parseSignature(node0.textRaw);
      const nested = k === 'methods' && sig0 && (node0.methods ?? []).filter(n => parseSignature(n.textRaw)?.name === sig0.name);
      for (const node of nested?.length ? nested : [node0]) {
      const sig = parseSignature(node.textRaw);
      let name, classStatic = false;
      if (k === 'properties') {
        name = /^`([^`]+)`/.exec(node.textRaw)?.[1] ?? (/^Type:/.test(node.textRaw) ? node.name : null); if (!name) continue;
        if (prefix && name.startsWith(prefix) && !name.slice(prefix.length).includes('.')) name = name.slice(prefix.length);
      }
      else if (!sig) continue;
      else {
        name = sig.name;
        if (prefix && name.startsWith(prefix)) name = name.slice(prefix.length);
        // A static method documented beside the instance methods (`SocketAddress.parse(input)`, `BlockList.isBlockList(value)`).
        else if (c.path && name.startsWith(c.path + '.')) { name = name.slice(c.path.length + 1); classStatic = true; }
        else if (prefix) continue;
        if (name.includes('.') || name.includes('[')) name = name.includes('[') ? name.slice(name.indexOf('[')) : name;
      }
      if (name.includes('.') && !(c.statics && isStatic)) continue;
      const pars = node === node0 ? parents : [...parents, node0];
      members.push({ node, kind: k, name, sig, stability: stabilityOf(node, pars), isStatic: isStatic || classStatic || k === 'classMethods' });
      }
    }
  };
  if (c.sections) for (const s of c.sections) take(s, c.prefix, false);
  else if (classSec) take(classSec, c.prefix, false);
  for (const x of c.extraSections ?? []) take(x.section, c.prefix, false);
  if (c.statics?.sections) for (const s of c.statics.sections) for (const pr of c.statics.prefixes) take(s, pr, true);
  else if (c.statics) take(findSection(all, c.statics.heading), c.statics.prefix, true);
  // The same member found twice (a heading and its overload sections, two prefixes, two places): once.
  const memberKey = m => `${m.isStatic}:${m.name}(${m.sig ? m.node.textRaw.match(/\(([^)]*)\)/)?.[1] ?? '' : ''})`;
  for (let i = members.length - 1; i >= 0; i--) if (members.findIndex(m => (m.node === members[i].node && m.name === members[i].name) || memberKey(m) === memberKey(members[i])) < i) members.splice(i, 1);
  const keyOf = m => m.sig ? `${m.name}(${m.node.textRaw.match(/\(([^)]*)\)/)[1]})` : m.name;
  if (c.webMembers) for (const m of members.filter(m => c.webMembers.has(m.name))) out.web.push(`${c.name}.${m.name} (Lasm.JS.Web.${c.webOf}.${m.name})`);
  if (c.webMembers) members.splice(0, members.length, ...members.filter(m => !c.webMembers.has(m.name)));
  const selected = members.filter(m => {
    if (c.only) return c.only.includes(m.name) || c.only.includes(keyOf(m));
    return !(c.exclude && (m.name in c.exclude || keyOf(m) in c.exclude));
  });
  const absent = what => strict ? fail(`${where}: ${what} is not documented`) : out.absent.push(`${where}: ${what}`);
  for (const o of c.only ?? []) if (!members.some(m => m.name === o || keyOf(m) === o)) absent(o);
  for (const e of Object.keys(c.exclude ?? {})) if (!members.some(m => m.name === e || keyOf(m) === e)) absent(`excluded ${e}`);
  const self = c.kind === 'namespace' ? null : c.name;
  currentSelf = self;
  // `Extends:` as documented, or the stated parent with the sentence that gives it (extendsQuote).
  if (classSec && c.kind === 'class') {
    const sec = classSec;
    const documented = c.documentedExtends ?? /Extends: <([^>]+)>/.exec(plainText(sec.node.desc))?.[1] ?? null;
    if (c.extendsQuote) {
      if (!docText(out.trees[c.extendsQuote.doc]).includes(c.extendsQuote.quote)) fail(`${where}: the ${c.extendsQuote.doc} docs no longer say ${JSON.stringify(c.extendsQuote.quote)} (extendsQuote)`);
    } else if (c.extends && c.extends !== documented && c.extends !== tier.typeNames[documented] && c.extends.split('.').at(-1) !== documented?.split('.').at(-1)) absent(`Extends: ${c.extends} (the docs say ${documented})`);
  }
  const lines = [];
  // Events: a typed listener (a callback of the documented arguments) and `on<Event>` / `once<Event>`, which call
  // emitter.on / emitter.once with the event's name and return the emitter (as those do).
  if (classSec && c.kind === 'class') {
    const sec = classSec;
    for (const e of sec.node.events ?? []) {
      const stability = stabilityOf(e, [...sec.parents, sec.node]);
      const key = `${c.name}#${e.name}`;
      if (!/^[A-Za-z][\w.:-]*$/.test(e.name)) { out.computed.push(`${doc}: ${key}: not an event name (a placeholder for many)`); continue; }
      if (c.events && !c.events.includes(e.name)) continue;
      if (stability !== 2) out.skipped.push(`${key}: stability ${stability} (generated, marked)`);
      const p = tier.eventProse[key];
      let params = e.params ?? [];
      if (p) {
        out.proseUsed.add(key);
        if (!plainText([e.desc, ...params.map(x => x.textRaw)].join(' ')).includes(p.quote)) absent(`${key}: eventProse ${JSON.stringify(p.quote)}`);
      }
      // Arguments listed in prose only (no types): the listener takes the arguments as they come.
      const prosy = !p && !params.length && /<li><code>[A-Za-z_]\w*<\/code>/.test(e.desc ?? '');
      if (prosy) out.untyped.push(`${key}: the arguments are listed in prose only (any... args)`);
      const args = prosy ? ['any... args'] : p ? p.args.map(a => `${proseType(a.type)} ${a.name}`) : params.map((x, i) => {
        // `Type: {net.Socket}` (an argument documented without a name) is `value` (`value2`, …).
        const n = x.name === 'Type' ? (params.length === 1 ? 'value' : `value${i + 1}`) : x.name;
        return `${lowerType(docType(x), { where: `${key} ${n}`, options: x.options,
          makeDict: opts => makeDictionary(c.name, `${eventId(e.name)}${capital(n)}`, opts, key, {}, n) })} ${escapeName(n)}`;
      });
      const cb = `${eventId(e.name)}Listener`;
      const cbIdl = idlName(`${c.name}.${cb}`);
      defined.set(`${c.name}.${cb}`, cbIdl);
      dicts.push(`[LasmNamespace="${c.name}", LasmName="${cb}"]\ncallback ${cbIdl} = undefined (${args.join(', ')});`);
      const evAttrs = [`LasmEvent="${e.name}"`, `LasmSignature="Event: '${e.name}'"`, addedOf(e), stability !== 2 ? `LasmStability="${stability}"` : null].filter(Boolean).join(', ');
      lines.push(`  // Event: '${e.name}' [${doc}.md]`,
        `  [${evAttrs}] ${idlName(c.name)} on${eventId(e.name)}(${cbIdl} listener);`,
        `  [${evAttrs}, LasmOnce] ${idlName(c.name)} once${eventId(e.name)}(${cbIdl} listener);`);
    }
  }
  // A constructor the docs give as a heading only (`new Agent([options])`): the stated signature, checked against the
  // class's documented parameters.
  if (c.ctor) {
    const sec = classSec;
    const sigs = sec.node.signatures ?? [];
    const parsed = parseSignature('`' + c.ctor.replace(/^new /, '') + '`');
    if (sigs.length !== 1 && !(sigs.length === 0 && !parsed.params.length)) fail(`${where}: ${sigs.length} documented constructor signatures`);
    if (!sigs.length && !docText(sec.node).includes(c.ctor.replace(/\(\)$/, ''))) fail(`${where}: the docs do not mention ${c.ctor}`);
    const typed = new Map((sigs[0]?.params ?? []).map(x => [x.name, x]));
    if (parsed.params.map(x => x.name).join() !== [...typed.keys()].join()) fail(`${where}: ${c.ctor} has parameters ${[...typed.keys()].join(', ')} in the docs`);
    const idlArgs = parsed.params.map(x => {
      const cp = tier.prose[`${c.name}.constructor`];
      if (cp) { out.proseUsed.add(`${c.name}.constructor`); if (!docText(sec.node).includes(cp.quote)) absent(`${c.ctor}: prose ${JSON.stringify(cp.quote)}`); }
      const override = cp?.params?.[x.name];
      const t = override ? proseType(override) : lowerType(docType(typed.get(x.name)), { where: `${where} ${c.ctor} ${x.name}`, options: typed.get(x.name).options,
        makeDict: opts => makeDictionary(c.name, `New${capital(x.name)}`, opts, c.ctor, {}, x.name), self });
      return `${x.optional ? 'optional ' : ''}${x.optional ? t.replace(/\?$/, '') : t} ${escapeName(x.name)}`;
    });
    lines.push(`  // ${c.ctor} [${doc}.md]`, `  [${[`LasmSignature="${c.ctor}"`, addedOf(sec.node)].filter(Boolean).join(', ')}] constructor(${idlArgs.join(', ')});`);
  }
  for (const m of selected) { const mark = lines.length, dmark = dicts.length; try {
    if (!/^[A-Za-z_$][\w$]*$/.test(m.name)) { out.computed.push(`${doc}: ${c.prefix}${m.name}: a computed key (index or Symbol), not a named member`); continue; }
    const stab = m.stability !== 2 ? `LasmStability="${m.stability}"` : null;
    const ex = [`${c.prefix}${m.name}`, m.sig ? `${m.sig.name}(${m.node.textRaw.match(/\(([^)]*)\)/)[1]})` : null, m.sig?.name].find(k => k && k in tier.exclude);
    if (ex) { out.excluded.push(`${ex}: ${tier.exclude[ex]}`); excludedUsed.add(ex); continue; }
    if (stab) out.skipped.push(`${c.prefix}${m.name}: stability ${m.stability} (generated, marked)`);
    const docName = m.kind === 'properties' ? `${(c.prefix ?? '').replace(/\.$/, '')}.${m.name}`.replace(/^\./, '') : m.sig.name;
    const proseKey = [`${docName}(${m.sig ? m.node.textRaw.match(/\(([^)]*)\)/)[1] : ''})`, docName].find(k => tier.prose[k]);
    const p0 = proseKey ? tier.prose[proseKey] : null;
    const p = p0 && (!p0.in || p0.in === c.name) ? p0 : null;
    if (p) {
      out.proseUsed.add(proseKey);
      // quoteDoc: the sentence is elsewhere in the module's docs (`net.connect()`: "Aliases to net.createConnection()").
      const text = p.quoteDoc ? docText(out.trees[doc]) : memberText(m.node) + ' ' + plainText(section(all, m).desc ?? '');
      if (!text.includes(p.quote)) absent(`${docName}: prose ${JSON.stringify(p.quote)} (node-tier2.mjs prose)`);
    }
    const comment = `  // ${m.node.textRaw.replace(/\s+/g, ' ').slice(0, 200)} [${doc}.md]`;
    if (m.kind === 'properties') {
      const dt = docType(m.node);
      const prosy = !p?.returns && (!dt || dt === 'property');
      if (prosy) out.untyped.push(`${docName}: the property's type is prose only (any)`);
      const type = p?.returns ? proseType(p.returns) : prosy ? 'any' : lowerType(dt, { where: `${where} ${m.name}` });
      lines.push(comment, `  [${[`LasmSignature="${docName}"`, addedOf(m.node), stab].filter(Boolean).join(', ')}] ${c.kind === 'namespace' ? '' : m.isStatic ? 'static ' : ''}readonly attribute ${type} ${escapeName(m.name)};`);
      continue;
    }
    const s = m.node.signatures?.[0];
    if (!s) fail(`${docName}: no signature`);
    const typed = new Map((s.params ?? []).map(x => [x.name.replace(/^\.\.\./, ''), x]));
    let params = m.sig.params.map(x => {
      const d = typed.get(x.name) ?? (p?.params?.[x.name] ? { name: x.name } : null);
      if (!d) { out.untyped.push(`${docName}: parameter ${x.name} has no documented type (any)`); return { ...x, doc: { name: x.name, type: 'any' } }; }
      return { ...x, doc: d };
    });
    let promisify = !!p?.promisify, ret;
    const last = params.at(-1);
    if (last && last.name === 'callback' && /^Function$/.test(String(last.doc.type).trim())) {
      // A required callback(err[, value]): the promise of its value, through util.promisify. One with more values, or
      // whose arguments are not documented as (err, value), is a function argument, as documented.
      const cbArgs = last.doc.options ?? [];
      const errFirst = /^err(or)?$/.test(cbArgs[0]?.name ?? '');
      if (last.optional || p?.promisify) params = params.slice(0, -1);
      else if (p?.returns || (errFirst && cbArgs.length <= 2)) {
        params = params.slice(0, -1);
        promisify = true;
        const value = cbArgs[1];
        if (!p?.returns) ret = value ? `Promise<${lowerType(docType(value), { where: docName })}>` : 'Promise<undefined>';
      }
    }
    if (p?.returns) ret = proseType(p.returns);
    const fix = tier.corrections[docName];
    if (fix) {
      out.proseUsed.add(docName);
      if (s.return?.type !== fix.docType) fail(`${docName}: the docs now type the result {${s.return?.type}}, not {${fix.docType}}: review node-tier2.mjs corrections`);
      ret = proseType(fix.returns);
    }
    if (!ret) {
      const r = s.return;
      // `Returns: {T}` written in the description instead of the signature (`net.getDefaultAutoSelectFamily()`).
      const inDesc = /Returns: <([^>]+)>/.exec(plainText(m.node.desc));
      if (!r && inDesc) ret = lowerType(inDesc[1], { where: `${docName} result` });
      else if (!r) ret = 'undefined';
      else if (!docType(r) && r.type !== 'Promise') { out.untyped.push(`${docName}: the result's type is prose only (any)`); ret = 'any'; }
      else if (/^Promise$/.test(r.type)) {
        const desc = plainText(r.desc ?? '');
        const t = /\{([^}]+)\}/.exec(r.desc ?? '') ?? /Fulfills with (?:an? |the )?\{([^}]+)\}/.exec(r.textRaw);
        if (/^Fulfills with `?undefined`? upon success\.?$/.test(desc) || /^Fulfills with undefined upon success\.?$/.test(desc)) ret = 'Promise<undefined>';
        else if (t) ret = `Promise<${lowerType(t[1], { where: docName })}>`;
        else { out.untyped.push(`${docName}: the promise's result is prose only (Promise<any>)`); ret = 'Promise<any>'; }
      } else ret = lowerType(docType(r), { where: `${docName} result` });
    }
    // Overloads for leading optional parameters: without them, and with them.
    const firstRequired = params.findIndex(x => !x.optional);
    const lastRequired = params.findLastIndex(x => !x.optional);
    const variants = [];
    if (firstRequired > 0 && params.slice(0, firstRequired).every(x => x.optional)) {
      variants.push(params.slice(firstRequired));
      variants.push(params.map((x, i) => i < firstRequired ? { ...x, optional: false } : x));
    } else if (params.some((x, i) => x.optional && params.slice(i + 1).some(y => !y.optional && !y.variadic))) {
      // An optional parameter between required ones (`fs.read(fd[, options], callback)` kept as a function argument):
      // without the optional ones before the last required, and with them.
      const lr = params.findLastIndex(y => !y.optional && !y.variadic);
      variants.push(params.filter((x, i) => !(x.optional && i < lr)));
      variants.push(params.map((x, i) => i < lr ? { ...x, optional: false } : x));
    } else variants.push(params);
    for (const ps of variants) {
      const makeDict = (opts, prm) => makeDictionary(ns, p?.name?.[prm] ?? `${capital(m.name)}${capital(prm)}`, opts, docName, p?.params ?? {}, prm);
      const args = ps.map(x => {
        const override = p?.params?.[x.name];
        let type = override ? proseType(override) : lowerType(docType(x.doc), { where: `${docName} ${x.name}`, options: x.doc.options, makeDict: opts => makeDict(opts, x.name) });
        if (x.variadic) return `${type.replace(/\?$/, '')}... ${escapeName(x.name)}`;
        if (x.optional) type = type.replace(/\?$/, '');
        return `${x.optional ? 'optional ' : ''}${type} ${escapeName(x.name)}`;
      });
      // WebIDL reserves `toString` (and a few others) as identifiers: such a member is written `toString_`, named by LasmName.
      const reserved = ['toString', 'constructor', 'toJSON', 'prototype'].includes(m.name);
      const attrs = [promisify ? 'LasmPromisify' : null, c.kind === 'bytes' && !m.isStatic ? 'LasmBytesThis' : null,
        reserved ? `LasmName="${m.name}"` : null, `LasmSignature="${signatureOf(m.node)}"`, addedOf(m.node), stab].filter(Boolean);
      lines.push(comment, `  ${attrs.length ? `[${attrs.join(', ')}] ` : ''}${c.kind !== 'namespace' && m.isStatic ? 'static ' : ''}${ret} ${reserved ? m.name + '_' : escapeName(m.name)}(${args.join(', ')});`);
    }
    void lastRequired;
    } catch (error) {
      if (!String(error.message).startsWith('node-api: ')) throw error;
      lines.length = mark; dicts.length = dmark;
      out.notLowered.push(`${doc}: ${c.name}.${m.name}: ${error.message.slice(10)}`);
    }
  }
  const attrs = [`LasmModule="${c.jsModule}"`, c.path ? `LasmPath="${c.path}"` : null, `LasmLeanModule="${mod.name}"`, `LasmDoc="${doc}"`,
    c.name.includes('.') ? `LasmNamespace="${c.name.split('.')[0]}", LasmName="${c.name.split('.').slice(1).join('.')}"` : `LasmName="${c.name}"`,
    c.kind === 'bytes' ? 'LasmNoHandle' : null].filter(Boolean);
  const head = c.kind === 'namespace' ? `namespace ${c.name.includes('.') ? idlName(c.name) : c.name}` : `interface ${idlName(c.name)}${c.extends ? ' : ' + idlName(c.extends) : ''}`;
  out.defs.push(`// ${c.heading ?? c.statics.heading} (${doc}.md), node:${c.jsModule.slice(5)}\n[${attrs.join(', ')}]\n${head} {\n${lines.join('\n')}\n};`);
}
const section = (all, m) => all.find(s => s.node === m.node)?.parents.at(-1) ?? {};

// ---------- the containers: every class and every module-level name of each doc ----------

/** The interfaces, namespaces and dictionaries of the pinned @webref/idl (web standards: Lasm.JS.Web's, not generated again). */
const webInterfaces = new Set();
/** Their member names (with their mixins' and partials'). */
const webMembers = new Map();
{
  const dir = join(root, 'node_modules', '@webref', 'idl');
  const includes = [];
  for (const f of readdirSync(dir).filter(f => f.endsWith('.idl'))) for (const d of webidl2.parse(readFileSync(join(dir, f), 'utf8'))) {
    if (d.type === 'includes') { includes.push(d); continue; }
    if (!d.name) continue;
    if (['interface', 'namespace', 'dictionary'].includes(d.type)) webInterfaces.add(d.name);
    if (!webMembers.has(d.name)) webMembers.set(d.name, new Set());
    for (const m of d.members ?? []) if (m.name) webMembers.get(d.name).add(m.name);
  }
  for (const i of includes) for (const n of webMembers.get(i.includes) ?? []) webMembers.get(i.target)?.add(n);
}
/** `Class: \`fs.Stats\``, `Class: \`ELDHistogram extends Histogram\`` → { name, extends }. */
const classHeading = textRaw => {
  const m = /^Class: `([\w.$]+)(?: extends ([\w.$]+))?`/.exec(textRaw ?? '');
  return m && { name: m[1], extends: m[2] ?? null };
};
/** The owner of a member (`fs` of `fs.readFile(path)`, `filehandle` of `filehandle.read()`), or null for a bare name. */
const ownerOf = textRaw => {
  const m = /^`(?:new )?([^`(\s]+?)(?:\(|`)/.exec(textRaw ?? '');
  if (!m || m[1].includes('[')) return null;
  const n = m[1];
  return n.includes('.') ? n.slice(0, n.lastIndexOf('.')) : null;
};
const memberKinds = ['methods', 'classMethods', 'properties', 'ctors'];
/** Lean module names of the containers (`fs.Stats`, `Hash`), and which doc each class came from (for name clashes). */
function autoContainers(mod, tree, out) {
  const all = sections(tree);
  const jsModule = tier.jsModules.docs[mod.doc] ?? `node:${mod.doc}`;
  const containers = [];
  const classSections = all.filter(s => s.kind === 'classes' || (s.kind === 'miscs' && classHeading(s.node.textRaw)));
  const inClass = new Set(classSections.map(s => s.node));
  // Classes.
  for (const sec of classSections) {
    const h = classHeading(sec.node.textRaw);
    if (!h) continue;
    const last = h.name.split('.').at(-1);
    if (webInterfaces.has(last) && !tier.notWeb[`${mod.doc}:${h.name}`]) { out.web.push(`${mod.doc}: ${h.name} (Lasm.JS.Web.${last})`); continue; }
    // The prefix the docs use for the instance (`stats.` of fs.Stats): the most common owner of its members.
    const counts = new Map();
    for (const k of memberKinds) for (const n of sec.node[k] ?? []) {
      const o = ownerOf(n.textRaw);
      if (o && o !== h.name && o !== last && o !== h.name.split('.')[0]) counts.set(o, (counts.get(o) ?? 0) + 1);
    }
    const prefix = [...counts].sort((a, b) => b[1] - a[1])[0]?.[0];
    const meta = tier.classes[h.name] ?? {};
    const documented = /Extends: <([^>]+)>/.exec(plainText(sec.node.desc))?.[1] ?? h.extends;
    const qual = h.name.includes('.') ? h.name.slice(0, h.name.indexOf('.')) : null;
    const ownerModule = qual && tier.jsModules.owners[qual];
    containers.push({ kind: meta.kind ?? 'class', section: sec, heading: sec.node.textRaw, name: h.name,
      jsModule: ownerModule ?? jsModule, path: 'path' in meta ? meta.path : h.name.includes('.') ? h.name.slice(h.name.indexOf('.') + 1) : h.name,
      prefix: prefix ? prefix + '.' : '', extends: meta.extends ?? documented, extendsQuote: meta.extendsQuote, ctor: meta.ctor, documentedExtends: documented });
  }
  // Namespaces: every lowercase module-level owner of members outside the classes (`fs`, `fsPromises`, `dns`).
  const owners = new Map();
  for (const s of [{ node: tree, parents: [] }, ...all]) {
    if (inClass.has(s.node) || s.parents.some(p => inClass.has(p))) continue;
    for (const k of memberKinds) for (const n of s.node[k] ?? []) {
      const o = ownerOf(n.textRaw);
      if (!o || !/^[a-z_][\w]*(\.[a-z_]\w*)?$/i.test(o)) continue;
      if (classSections.some(c => { const n = classHeading(c.node.textRaw)?.name; return n === o || n?.split('.').at(-1) === o; })) continue; // statics (`Buffer.from`, `stream.Readable.from`)
      if (!owners.has(o)) owners.set(o, []);
      if (!owners.get(o).includes(s)) owners.get(o).push(s);
    }
  }
  for (const [o, secs] of owners) {
    // An instance's members documented outside its class section (`readable._read()` for implementers, `resolver.cancel()`).
    const cls = o !== mod.doc && containers.find(c => c.kind !== 'namespace' && c.prefix === o + '.');
    if (cls) { for (const sec of secs) (cls.extraSections ??= []).push({ section: sec, doc: mod.doc }); continue; }
    // An object the docs describe without a `Class:` heading (`tracing.enable()` of a `Tracing` object): a class without an export.
    const inst = tier.instances[`${mod.doc}:${o}`];
    if (inst === null) { out.unowned.push(`${mod.doc}: ${o} (${tier.instancesWhy[`${mod.doc}:${o}`]})`); continue; }
    if (inst) {
      containers.push({ kind: 'class', sections: secs, heading: `${inst} (${mod.doc}.md)`, name: inst, jsModule, path: inst.split('.').at(-1), prefix: o + '.', extends: null });
      continue;
    }
    if (/^[A-Z]/.test(o) && !tier.jsModules.owners[o]) { out.unowned.push(`${mod.doc}: members of ${o}`); continue; }
    // A web standard namespace (`console`): Lasm.JS.Web's.
    if (webInterfaces.has(o) && webMembers.has(o)) { out.web.push(`${mod.doc}: ${o} (Lasm.JS.Web.${o})`); continue; }
    // Node's object of a web standard interface with Node's own additions (`performance`: Performance): the additions.
    const webOf = webInterfaces.has(capital(o)) ? capital(o) : null;
    containers.push({ kind: 'namespace', sections: secs, heading: `${o} (${mod.doc}.md)`, name: o, jsModule: tier.jsModules.owners[o] ?? jsModule,
      webMembers: webOf ? webMembers.get(webOf) : null, webOf,
      path: tier.jsModules.owners[o] || o === mod.doc || o === mod.doc.replace(/_/g, '') ? null : o.startsWith(mod.doc + '.') ? o.slice(mod.doc.length + 1) : o, prefix: o + '.' });
  }
  // Statics of classes documented outside the class section (`Buffer.from`, `stream.Readable.from`).
  for (const c of containers.filter(c => c.kind !== 'namespace')) {
    const last = c.name.split('.').at(-1);
    const st = [];
    for (const s of all) {
      if (s.node === c.section?.node) continue;
      if ((s.node.methods ?? []).concat(s.node.properties ?? [], s.node.classMethods ?? []).some(n => [c.name, last].includes(ownerOf(n.textRaw)))) st.push(s);
    }
    if (st.length) c.statics = { sections: st, prefixes: [c.name + '.', last + '.'] };
  }
  return containers;
}

let strict = true;
async function lower(version) {
  strict = version === tier.version;
  defined.clear(); dicts.length = 0; dictNames.clear();
  const trees = {};
  const out = { defs: [], skipped: [], proseUsed: new Set(), absent: [], trees, notLowered: [], computed: [], web: [], unowned: [], untyped: [], dropped: [], clashes: [], excluded: [] };
  for (const doc of tier.docs) trees[doc] = await loadDoc(version, doc);
  // Every module's containers first, so that each type is known wherever it is used.
  const plan = tier.modules.map(mod => ({ mod, containers: autoContainers(mod, trees[mod.doc], out) }));
  // A class documented twice (AsyncLocalStorage in async_hooks.md and async_context.md): the first. Two classes of one
  // bare name in different modules (cluster's and worker_threads' Worker): both named with their module (`cluster.Worker`).
  const seen = new Map();
  for (const p of plan) for (const c of p.containers) {
    const prev = seen.get(c.name);
    if (!prev) { seen.set(c.name, { p, c }); continue; }
    // The same class or namespace documented in two places (stream.Readable for consumers and for implementers,
    // AsyncLocalStorage in async_hooks.md and async_context.md): one container with the members of both.
    if (prev.c.jsModule === c.jsModule && prev.c.kind === c.kind) {
      p.containers.splice(p.containers.indexOf(c), 1);
      if (c.section) (prev.c.extraSections ??= []).push({ section: c.section, doc: p.mod.doc });
      if (c.sections) prev.c.sections.push(...(prev.p === p ? c.sections : []));
      if (c.statics) prev.c.statics = prev.c.statics ? { ...prev.c.statics, sections: [...prev.c.statics.sections, ...c.statics.sections] } : c.statics;
      out.clashes.push(`${c.name}: documented in ${prev.p.mod.doc}.md and ${p.mod.doc}.md (one ${c.kind} with the members of both)`);
      continue;
    }
    const q = x => x.jsModule.slice(5).replace(/\//g, '_');
    out.clashes.push(`${c.name}: ${prev.c.jsModule} and ${c.jsModule} (named ${q(prev.c)}.${c.name} and ${q(c)}.${c.name})`);
    if (!prev.c.name.includes('.')) prev.c.name = `${q(prev.c)}.${prev.c.name}`;
    c.name = `${q(c)}.${c.name}`;
  }
  for (const p of plan) for (const c of p.containers) if (c.kind !== 'namespace') defined.set(c.name, idlName(c.name));
  // A class whose documented parent is not generated (a web class, or none of Node's): no parent.
  for (const p of plan) for (const c of p.containers) if (c.extends && !defined.has(c.extends)) {
    const mapped = tier.typeNames[c.extends];
    const bare = defined.has(mapped) ? mapped : [...defined.keys()].filter(k => k.split('.').at(-1) === c.extends.split('.').at(-1));
    if (typeof bare === 'string') c.extends = bare;
    else if (bare.length === 1) c.extends = bare[0];
    else { out.dropped.push(`${c.name} extends ${c.extends}: ${webInterfaces.has(c.extends) ? 'a Lasm.JS.Web class' : 'not a generated class'}`); c.extends = null; }
  }
  for (const x of tier.proseIdl) {
    const m = /LasmNamespace="([\w.]+)"\]\s*dictionary (\w+)/.exec(x.idl);
    defined.set(`${m[1]}.${m[2]}`, idlName(`${m[1]}.${m[2]}`));
    dictNames.add(`${m[1]}.${m[2]}`);
  }
  defined.set('path.PathObject', idlName('path.PathObject'));
  for (const x of tier.proseIdl) {
    const text = docText(trees[x.doc]);
    if (!text.includes(x.quote)) {
      if (strict) fail(`${x.doc}: the docs no longer say ${JSON.stringify(x.quote)} (node-tier2.mjs proseIdl)`);
      out.absent.push(`${x.doc}: proseIdl ${JSON.stringify(x.quote)}`);
    }
    const m = /LasmNamespace="([\w.]+)"\]\s*dictionary (\w+) \{(.*)\};/.exec(x.idl);
    dicts.push(`[LasmNamespace="${m[1]}", LasmName="${m[2]}"]\ndictionary ${idlName(`${m[1]}.${m[2]}`)} {\n${m[3].trim().split(';').filter(s => s.trim()).map(s => `  ${proseType(s.trim())};`).join('\n')}\n};`);
  }
  for (const p of plan) {
    const all = sections(trees[p.mod.doc]);
    // Parents before children within a module.
    const done = new Set(), ordered = [];
    const visit = c => { if (done.has(c)) return; done.add(c); const parent = p.containers.find(x => x.name === c.extends); if (parent) visit(parent); ordered.push(c); };
    p.containers.forEach(visit);
    for (const c of ordered) lowerContainer(p.mod.doc, all, p.mod, c, out);
  }
  if (strict) for (const k of [...Object.keys(tier.prose), ...Object.keys(tier.corrections), ...Object.keys(tier.eventProse)]) if (!out.proseUsed.has(k)) fail(`prose or correction ${k} matches no selected member`);
  return { idl: [...out.defs, ...dicts].join('\n\n') + '\n', skipped: out.skipped, absent: out.absent, report: out };
}

const header = version => `// GENERATED by scripts/bindings/node-api.mjs from the Node.js ${version} API documentation
// (https://nodejs.org/dist/v${version}/docs/api/<module>.json; MIT, Copyright Node.js
// contributors), for the members node-tier2.mjs selects; do not edit. Comments quote
// each member's documented signature. generate-web.mjs turns this into Lasm.JS.Node.
`;
const base = await lower(tier.version);
const files = new Map([[idlFile, header(tier.version) + '\n' + base.idl]]);
// The Lean modules in an order where each comes after the modules whose types it uses (Lean modules cannot import
// each other in a cycle; a cycle fails here). Starting order: node-tier2.mjs's.
{
  const blocks = base.idl.split(/\n\n(?=\/\/|\[)/);
  const owner = new Map(), text = new Map();
  for (const b of blocks) {
    const name = /(?:interface|namespace|dictionary|callback) (\w+)/.exec(b)?.[1];
    if (!name) continue;
    text.set(name, b);
    const lm = /LasmLeanModule="(\w+)"/.exec(b)?.[1];
    if (lm && /^(?:\/\/[^\n]*\n)*\[[^\n]*\]\n(?:interface|namespace)/.test(b)) owner.set(name, lm);
  }
  const deps = new Map(tier.modules.map(m => [m.name, new Set()]));
  for (const [name, m] of owner) {
    const seen = new Set([name]), stack = [name];
    while (stack.length) for (const r of (text.get(stack.pop()) ?? '').matchAll(/\bNode_\w+/g)) {
      if (seen.has(r[0])) continue;
      seen.add(r[0]);
      if (owner.has(r[0])) { if (owner.get(r[0]) !== m) deps.get(m).add(owner.get(r[0])); } else stack.push(r[0]);
    }
  }
  const ordered = [], state = new Map();
  const visit = (m, path) => {
    if (state.get(m) === 'done') return;
    if (state.get(m) === 'active') fail(`the Lean modules use each other's types in a cycle: ${[...path, m].join(' → ')}`);
    state.set(m, 'active');
    for (const d of tier.modules.map(x => x.name).filter(x => deps.get(m).has(x))) visit(d, [...path, m]);
    state.set(m, 'done');
    ordered.push(tier.modules.find(x => x.name === m));
  };
  for (const m of tier.modules) visit(m.name, []);
  files.set(join(root, 'scripts', 'bindings', 'node-modules.json'), JSON.stringify({
    $comment: 'GENERATED by scripts/bindings/node-api.mjs: the Lasm.JS.Node modules in import order (each after the modules whose types it uses), with the modules each uses; do not edit.',
    modules: ordered.map(m => ({ ...m, uses: tier.modules.map(x => x.name).filter(x => deps.get(m.name).has(x)) })) }, null, 1) + '\n');
}
// What the lowering did not take as documented, for review: members not lowered (and why), types the docs name that
// nothing defines (any), arguments given only in prose, web classes left to Lasm.JS.Web, parents dropped, name clashes.
{
  const r = base.report;
  files.set(join(root, 'scripts', 'bindings', 'node-coverage.json'), JSON.stringify({
    $comment: `GENERATED by scripts/bindings/node-api.mjs (Node.js ${tier.version} docs): what Lasm.JS.Node does not take exactly as documented; do not edit.`,
    excluded: r.excluded, computedKeys: r.computed, notLowered: r.notLowered, unknownTypes: [...unknownTypes].sort(), untyped: r.untyped, webClasses: r.web,
    parentsDropped: r.dropped, nameClashes: r.clashes, ownersWithoutNamespace: r.unowned, notStable: r.skipped }, null, 1) + '\n');
  for (const k of Object.keys(tier.exclude)) if (!excludedUsed.has(k)) fail(`exclude ${k} matches no documented member`);
}
// What differs in the newer LTS's docs, member by member (reviewed when it changes).
const newer = await lower(tier.compareVersion).catch(error => ({ error: String(error.message) }));
const memberLines = idl => new Set(idl.split('\n').filter(l => /^\s{2}\S/.test(l) && !/^\s*\/\//.test(l)).map(l => l.trim()));
let comparison;
if (newer.error) comparison = { version: tier.compareVersion, error: newer.error };
else {
  const a = memberLines(base.idl), b = memberLines(newer.idl);
  comparison = { version: tier.compareVersion, onlyIn24: [...a].filter(l => !b.has(l)), onlyIn26: [...b].filter(l => !a.has(l)),
    skippedIn24: base.skipped, skippedIn26: newer.skipped, notDocumentedIn26: newer.absent };
}
files.set(diffFile, JSON.stringify({ $comment: `GENERATED by scripts/bindings/node-api.mjs: the lowered members (node.idl) for Node.js ${tier.version} that differ in the ${tier.compareVersion} docs, and the selected members not taken for their stability; do not edit.`, ...comparison }, null, 1) + '\n');
if (updateLock) { writeFileSync(lockFile, JSON.stringify(lock, null, 1) + '\n'); console.log(`wrote ${lockFile.slice(root.length)}`); }
let stale = [];
for (const [file, text] of files) {
  const current = existsSync(file) ? readFileSync(file, 'utf8') : null;
  if (current === text) continue;
  if (check) { stale.push(file.slice(root.length)); continue; }
  writeFileSync(file, text);
  console.log(`wrote ${file.slice(root.length)}`);
}
if (stale.length) { console.error(`stale: ${stale.join(', ')}. Run node scripts/bindings/node-api.mjs and commit the result.`); process.exit(1); }
if (check) console.log(`node.idl is up to date (Node.js ${tier.version} docs).`);
