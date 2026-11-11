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
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as tier from './node-tier2.mjs';

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
const webNames = new Set(['URL', 'AbortSignal', 'ReadableStream', 'WritableStream', 'CryptoKey', 'Blob', 'Function', 'ArrayBuffer']);
function namedType(n, where) {
  const mapped = tier.typeNames[n];
  if (mapped === undefined) fail(`${where}: the docs' type ${JSON.stringify(n)} is not in node-tier2.mjs typeNames`);
  if (mapped === 'bytes') return 'Uint8Array';
  if (defined.has(mapped)) return defined.get(mapped);
  return mapped;
}
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
    alts.push(namedType(tok, ctx.where));
  }
  // Bytes: one alternative (a Uint8Array is accepted wherever the docs list ArrayBuffer beside typed arrays).
  let unique = [...new Set(alts)];
  if (unique.includes('Uint8Array') && unique.includes('ArrayBuffer')) unique = unique.filter(a => a !== 'ArrayBuffer');
  if (unique.includes('any')) unique = ['any'];
  if (!unique.length) return 'undefined';
  const t = unique.length === 1 ? unique[0] : `(${unique.join(' or ')})`;
  return nullable && t !== 'any' ? `${t}?` : t;
}

// ---------- lowering ----------

const capital = s => s[0].toUpperCase() + s.slice(1);
/** The Node versions the docs say added a member (`meta.added`: the release line's first and its backports), as an attribute. */
const addedOf = node => node.meta?.added?.length ? `LasmAdded="${node.meta.added.join(', ')}"` : null;
/** A member's documented signature (`fsPromises.readFile(path[, options])`), for its doc comment. */
const signatureOf = node => (/`([^`]+)`/.exec(node.textRaw)?.[1] ?? node.textRaw).replace(/"/g, "'");
/** WebIDL keywords are escaped with a leading underscore where a name is expected (`boolean _bigint`). */
const idlKeywords = new Set(['any', 'async', 'attribute', 'bigint', 'boolean', 'byte', 'callback', 'const', 'constructor', 'deleter', 'dictionary',
  'double', 'enum', 'float', 'getter', 'includes', 'inherit', 'interface', 'iterable', 'long', 'maplike', 'mixin', 'namespace', 'object', 'octet',
  'optional', 'or', 'partial', 'readonly', 'record', 'required', 'sequence', 'setlike', 'setter', 'short', 'static', 'stringifier', 'symbol',
  'typedef', 'undefined', 'unrestricted', 'unsigned', 'true', 'false', 'null', 'Infinity', 'NaN']);
const escapeName = n => idlKeywords.has(n) ? '_' + n : n;
const dicts = []; // IDL text
const dictNames = new Set();
/** A dictionary of documented option members (`fsPromises.ReadFileOptions`); nested ones are named after their member. */
function makeDictionary(ns, base, options, where, overrides, path) {
  let lean = base, n = 2;
  while (dictNames.has(`${ns}.${lean}`)) lean = base + n++;
  dictNames.add(`${ns}.${lean}`);
  const name = idlName(`${ns}.${lean}`);
  defined.set(`${ns}.${lean}`, name);
  const members = [];
  for (const o of options) {
    if (!/^[A-Za-z_$][\w$]*$/.test(o.name)) continue; // `fs.constants.COPYFILE_EXCL` and the like: values, not members
    const at = `${path}.${o.name}`;
    const type = overrides[at] ? proseType(overrides[at]) : lowerType(docType(o), { where: `${where} ${at}`, options: o.options,
      makeDict: opts => makeDictionary(ns, lean + capital(o.name), opts, where, overrides, at) });
    const def = defaultLiteral(o.default);
    members.push(`  ${type} ${escapeName(o.name)}${def !== undefined ? ' = ' + def : ''};`);
  }
  dicts.push(`[LasmNamespace="${ns}", LasmName="${lean}"]\ndictionary ${name} {\n${members.join('\n')}\n};`);
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
  const where = `${doc} ${c.heading ?? c.statics?.heading}`;
  const members = [];
  const take = (section, prefix, isStatic) => {
    for (const k of ['methods', 'classMethods', 'properties', 'ctors']) for (const node of section.node[k] ?? []) {
      const sig = parseSignature(node.textRaw);
      let name;
      if (k === 'properties') { name = /^`([^`]+)`/.exec(node.textRaw)?.[1] ?? (/^Type:/.test(node.textRaw) ? node.name : null); if (!name) continue; }
      else if (!sig) continue;
      else {
        name = sig.name;
        if (prefix && name.startsWith(prefix)) name = name.slice(prefix.length);
        else if (k === 'classMethods' && name.startsWith(c.path + '.')) name = name.slice(c.path.length + 1);
        else if (prefix) continue;
        if (name.includes('.') || name.includes('[')) name = name.includes('[') ? name.slice(name.indexOf('[')) : name;
      }
      if (name.includes('.') && !(c.statics && isStatic)) continue;
      members.push({ node, kind: k, name, sig, stability: stabilityOf(node, [...section.parents, section.node]), isStatic: isStatic || k === 'classMethods' });
    }
  };
  if (c.heading) take(findSection(all, c.heading), c.prefix, false);
  if (c.statics) take(findSection(all, c.statics.heading), c.statics.prefix, true);
  const keyOf = m => m.sig ? `${m.name}(${m.node.textRaw.match(/\(([^)]*)\)/)[1]})` : m.name;
  const selected = members.filter(m => {
    if (c.only) return c.only.includes(m.name) || c.only.includes(keyOf(m));
    return !(c.exclude && (m.name in c.exclude));
  });
  const absent = what => strict ? fail(`${where}: ${what} is not documented`) : out.absent.push(`${where}: ${what}`);
  for (const o of c.only ?? []) if (!members.some(m => m.name === o || keyOf(m) === o)) absent(o);
  for (const e of Object.keys(c.exclude ?? {})) if (!members.some(m => m.name === e)) absent(`excluded ${e}`);
  const lines = [];
  for (const m of selected) {
    if (m.stability !== 2) {
      if (c.only?.includes(m.name)) fail(`${where}: ${m.name} has stability ${m.stability}, not 2 (Stable)`);
      out.skipped.push(`${m.kind === 'properties' ? '' : ''}${c.prefix ?? c.statics.prefix}${m.name}: stability ${m.stability}`);
      continue;
    }
    const docName = m.kind === 'properties' ? `${(c.prefix ?? '').replace(/\.$/, '')}.${m.name}`.replace(/^\./, '') : m.sig.name;
    const proseKey = [`${docName}(${m.sig ? m.node.textRaw.match(/\(([^)]*)\)/)[1] : ''})`, docName].find(k => tier.prose[k]);
    const p = proseKey ? tier.prose[proseKey] : null;
    if (p) {
      out.proseUsed.add(proseKey);
      const text = memberText(m.node) + ' ' + plainText(section(all, m).desc ?? '');
      if (!text.includes(p.quote)) fail(`${docName}: the docs no longer say ${JSON.stringify(p.quote)} (node-tier2.mjs prose)`);
    }
    const comment = `  // ${m.node.textRaw.replace(/\s+/g, ' ').slice(0, 200)} [${doc}.md]`;
    if (m.kind === 'properties') {
      const type = p?.returns ? proseType(p.returns) : lowerType(docType(m.node), { where: `${where} ${m.name}` });
      lines.push(comment, `  [${[`LasmSignature="${docName}"`, addedOf(m.node)].filter(Boolean).join(', ')}] ${c.kind === 'namespace' ? '' : m.isStatic ? 'static ' : ''}readonly attribute ${type} ${escapeName(m.name)};`);
      continue;
    }
    const s = m.node.signatures?.[0];
    if (!s) fail(`${docName}: no signature`);
    const typed = new Map((s.params ?? []).map(x => [x.name.replace(/^\.\.\./, ''), x]));
    let params = m.sig.params.map(x => {
      const d = typed.get(x.name);
      if (!d) fail(`${docName}: parameter ${x.name} has no documented type`);
      return { ...x, doc: d };
    });
    let promisify = !!p?.promisify, ret;
    const last = params.at(-1);
    if (last && last.name === 'callback' && /^Function$/.test(String(last.doc.type).trim())) {
      if (last.optional || p?.promisify) params = params.slice(0, -1);
      else {
        params = params.slice(0, -1);
        promisify = true;
        const value = last.doc.options?.[1];
        if (!p?.returns && !value) fail(`${docName}: the callback's result is not documented`);
        if (!p?.returns) ret = `Promise<${lowerType(docType(value), { where: docName })}>`;
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
      if (!r) ret = 'undefined';
      else if (/^Promise$/.test(r.type)) {
        const desc = plainText(r.desc ?? '');
        const t = /\{([^}]+)\}/.exec(r.desc ?? '') ?? /Fulfills with (?:an? |the )?\{([^}]+)\}/.exec(r.textRaw);
        if (/^Fulfills with `?undefined`? upon success\.?$/.test(desc) || /^Fulfills with undefined upon success\.?$/.test(desc)) ret = 'Promise<undefined>';
        else if (t) ret = `Promise<${lowerType(t[1], { where: docName })}>`;
        else fail(`${docName}: the promise's result is prose only (${JSON.stringify(desc)}): state it in node-tier2.mjs prose`);
      } else ret = lowerType(docType(r), { where: `${docName} result` });
    }
    // Overloads for leading optional parameters: without them, and with them.
    const firstRequired = params.findIndex(x => !x.optional);
    const lastRequired = params.findLastIndex(x => !x.optional);
    const variants = [];
    if (firstRequired > 0 && params.slice(0, firstRequired).every(x => x.optional)) {
      variants.push(params.slice(firstRequired));
      variants.push(params.map((x, i) => i < firstRequired ? { ...x, optional: false } : x));
    } else variants.push(params);
    for (const ps of variants) {
      if (ps.some((x, i) => x.optional && ps.slice(i + 1).some(y => !y.optional && !y.variadic))) fail(`${docName}: an optional parameter before a required one`);
      const makeDict = (opts, prm) => makeDictionary(ns, p?.name?.[prm] ?? `${capital(m.name)}${capital(prm)}`, opts, docName, p?.params ?? {}, prm);
      const args = ps.map(x => {
        const override = p?.params?.[x.name];
        let type = override ? proseType(override) : lowerType(docType(x.doc), { where: `${docName} ${x.name}`, options: x.doc.options, makeDict: opts => makeDict(opts, x.name) });
        if (x.variadic) return `${type.replace(/\?$/, '')}... ${x.name}`;
        if (x.optional) type = type.replace(/\?$/, '');
        return `${x.optional ? 'optional ' : ''}${type} ${x.name}`;
      });
      // WebIDL reserves `toString` (and a few others) as identifiers: such a member is written `toString_`, named by LasmName.
      const reserved = ['toString', 'constructor', 'toJSON', 'prototype'].includes(m.name);
      const attrs = [promisify ? 'LasmPromisify' : null, c.kind === 'bytes' && !m.isStatic ? 'LasmBytesThis' : null,
        reserved ? `LasmName="${m.name}"` : null, `LasmSignature="${signatureOf(m.node)}"`, addedOf(m.node)].filter(Boolean);
      lines.push(comment, `  ${attrs.length ? `[${attrs.join(', ')}] ` : ''}${c.kind !== 'namespace' && m.isStatic ? 'static ' : ''}${ret} ${m.name}${reserved ? '_' : ''}(${args.join(', ')});`);
    }
    void lastRequired;
  }
  const attrs = [`LasmModule="${c.jsModule}"`, c.path ? `LasmPath="${c.path}"` : null, `LasmLeanModule="${mod.name}"`, `LasmDoc="${doc}"`,
    c.name.includes('.') ? `LasmNamespace="${c.name.split('.')[0]}", LasmName="${c.name.split('.').slice(1).join('.')}"` : `LasmName="${c.name}"`,
    c.kind === 'bytes' ? 'LasmNoHandle' : null].filter(Boolean);
  const head = c.kind === 'namespace' ? `namespace ${c.name}` : `interface ${idlName(c.name)}${c.extends ? ' : ' + idlName(c.extends) : ''}`;
  out.defs.push(`// ${c.heading ?? c.statics.heading} (${doc}.md), node:${c.jsModule.slice(5)}\n[${attrs.join(', ')}]\n${head} {\n${lines.join('\n')}\n};`);
}
const section = (all, m) => all.find(s => s.node === m.node)?.parents.at(-1) ?? {};

let strict = true;
async function lower(version) {
  strict = version === tier.version;
  defined.clear(); dicts.length = 0; dictNames.clear();
  for (const m of tier.modules) for (const c of m.containers) if (c.kind !== 'namespace') defined.set(c.name, idlName(c.name));
  for (const x of tier.proseIdl) {
    const m = /LasmNamespace="(\w+)"\]\s*dictionary (\w+)/.exec(x.idl);
    defined.set(`${m[1]}.${m[2]}`, idlName(`${m[1]}.${m[2]}`));
    dictNames.add(`${m[1]}.${m[2]}`);
  }
  defined.set('path.PathObject', idlName('path.PathObject'));
  const out = { defs: [], skipped: [], proseUsed: new Set(), absent: [] };
  const trees = {};
  for (const doc of tier.docs) trees[doc] = await loadDoc(version, doc);
  for (const x of tier.proseIdl) {
    const text = docText(trees[x.doc]);
    if (!text.includes(x.quote)) fail(`${x.doc}: the docs no longer say ${JSON.stringify(x.quote)} (node-tier2.mjs proseIdl)`);
    const m = /LasmNamespace="(\w+)"\]\s*dictionary (\w+) \{(.*)\};/.exec(x.idl);
    dicts.push(`[LasmNamespace="${m[1]}", LasmName="${m[2]}"]\ndictionary ${idlName(`${m[1]}.${m[2]}`)} {\n${m[3].trim().split(';').filter(s => s.trim()).map(s => `  ${proseType(s.trim())};`).join('\n')}\n};`);
  }
  for (const mod of tier.modules) {
    const all = sections(trees[mod.doc]);
    for (const c of mod.containers) lowerContainer(mod.doc, all, mod, c, out);
  }
  if (strict) for (const k of [...Object.keys(tier.prose), ...Object.keys(tier.corrections)]) if (!out.proseUsed.has(k)) fail(`prose or correction ${k} matches no selected member`);
  return { idl: [...out.defs, ...dicts].join('\n\n') + '\n', skipped: out.skipped, absent: out.absent };
}

const header = version => `// GENERATED by scripts/bindings/node-api.mjs from the Node.js ${version} API documentation
// (https://nodejs.org/dist/v${version}/docs/api/<module>.json; MIT, Copyright Node.js
// contributors), for the members node-tier2.mjs selects; do not edit. Comments quote
// each member's documented signature. generate-web.mjs turns this into Lasm.JS.Node.
`;
const base = await lower(tier.version);
const files = new Map([[idlFile, header(tier.version) + '\n' + base.idl]]);
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
