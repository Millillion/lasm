// Lowers Cloudflare Workers' runtime API declarations (@cloudflare/workers-types'
// index.d.ts at the pinned version; scripts/bindings/cloudflare-tier3.mjs selects
// what) to WebIDL: scripts/bindings/cloudflare.idl, which generate-web.mjs turns into
// Lasm.JS.Cloudflare with the mapping rules of Lasm.JS.Web (docs/JS_BINDINGS.md,
// "Cloudflare Workers: Lasm.JS.Cloudflare"). The package is fetched from the npm
// registry, its index.d.ts checked against cloudflare-api.lock.json, and cached in
// .work/cloudflare-api/.
//
//   node scripts/bindings/cloudflare-api.mjs                # write cloudflare.idl
//   node scripts/bindings/cloudflare-api.mjs --check        # exit 1 if it differs
//   node scripts/bindings/cloudflare-api.mjs --update-lock  # record the file's hash (after a version bump)
//
// The lowering is serve-api.mjs's (lowerHost), with its rich rules (cloudflare-tier3.mjs
// sets `rich`): declared classes are interfaces; a generic parameter is its default;
// method overloads are each lowered or excluded; a parameter of one string literal type
// is passed as that string and names its overload (`get(key, type: "json")` → getJson);
// `Map<string, V>` and `Record<string, V>` are records; `Partial<D>` is D when every
// member of D is optional; an object literal type is a dictionary named after its owner;
// a type alias of object types (`{…} | {…}`) is one dictionary whose members not in every
// alternative are optional; an unselected type alias stands for its definition.
import { createHash } from 'node:crypto';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { gunzipSync } from 'node:zlib';
import { lowerHost, declarations, membersOf, parseType, aliasBody } from './serve-api.mjs';
import { classify, webNames } from './cloudflare-classify.mjs';
import * as tier from './cloudflare-tier3.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const lockFile = join(root, 'scripts', 'bindings', 'cloudflare-api.lock.json');
const cacheDir = join(root, '.work', 'cloudflare-api');
const check = process.argv.includes('--check');
const updateLock = process.argv.includes('--update-lock');
const fail = message => { throw new Error(`cloudflare-api: ${message}`); };

/** The files of a tar archive: { path: bytes }. */
export function untar(bytes) {
  const out = {};
  for (let at = 0; at + 512 <= bytes.length;) {
    const header = bytes.subarray(at, at + 512);
    if (header.every(b => b === 0)) break;
    const field = (from, length) => Buffer.from(header.subarray(from, from + length)).toString('latin1').replace(/\0.*$/s, '');
    const name = field(0, 100), prefix = field(345, 155);
    const size = parseInt(field(124, 12).trim() || '0', 8);
    const type = String.fromCharCode(header[156] || 48);
    if (type === '0') out[prefix ? `${prefix}/${name}` : name] = bytes.subarray(at + 512, at + 512 + size);
    at += 512 + Math.ceil(size / 512) * 512;
  }
  return out;
}

const lock = existsSync(lockFile) ? JSON.parse(readFileSync(lockFile, 'utf8')) : {};
async function loadFile(host, file) {
  const local = join(cacheDir, host.version, file);
  let text;
  if (existsSync(local)) text = readFileSync(local, 'utf8');
  else {
    const base = host.npm.split('/').at(-1);
    const url = `https://registry.npmjs.org/${host.npm}/-/${base}-${host.version}.tgz`;
    const response = await fetch(url);
    if (!response.ok) fail(`${url}: HTTP ${response.status}`);
    const files = untar(gunzipSync(Buffer.from(await response.arrayBuffer())));
    const bytes = files[`package/${file}`] ?? fail(`${url} has no package/${file}`);
    text = Buffer.from(bytes).toString('utf8');
  }
  const sha256 = createHash('sha256').update(text).digest('hex');
  const key = `${host.npm}@${host.version}`;
  if (updateLock) (lock[key] ??= {})[file] = sha256;
  else if (lock[key]?.[file] !== sha256) fail(`${key} ${file} has SHA-256 ${sha256}, not the pinned ${lock[key]?.[file]} (cloudflare-api.lock.json)`);
  if (!existsSync(local)) { mkdirSync(dirname(local), { recursive: true }); writeFileSync(local, text); }
  return text;
}

/** The host with every declaration of Cloudflare's own selected (cloudflare-classify.mjs), each
 * in the module its name's area gives, and the web platform's types mapped to Lasm.JS.Web's
 * (webTypeName). A declaration the tier lists keeps the tier's entry. */
export function selectAll(host, files, web = webNames()) {
  const decls = files.flatMap(({ file, text }) => declarations(text, file, { classes: true }));
  const classes = classify(decls, web);
  const listed = new Set(host.declarations.map(d => d.name));
  const moduleOf = name => (host.areas.find(([re]) => re.test(name)) ?? [null, 'Services'])[1];
  const auto = [];
  for (const d of classes.own) {
    if (listed.has(d.name) || auto.some(a => a.name === d.name) || d.name in host.notSelected || d.name in (host.typeParameters ?? {}) || d.name in host.typeNames) continue;
    if (d.kind === 'interface') {
      const methods = membersOf(d.src, d.body[0], d.body[1]).some(m => m.kind === 'method' || m.kind === 'constructor');
      auto.push({ name: d.name, as: d.class || methods ? 'interface' : 'dictionary', module: moduleOf(d.name) });
    } else if (d.kind === 'type') {
      // A generic type alias is a type-level helper (Rpc.Stub<T>), lowered where it is used, as is
      // an alias of a union of string literals (an enum where used) or of another type.
      const head = d.text.replace(/^(?:export\s+)?(?:declare\s+)?type\s+[\w$]+\s*/, '');
      let t;
      try { t = parseType(aliasBody(d)); } catch { continue; }
      if (t.k === 'fn') auto.push({ name: d.name, as: 'callback', module: moduleOf(d.name) });
      else if (!head.startsWith('<') && (t.k === 'obj' || (t.k === 'inter' && t.parts.every(x => x.k === 'obj' || x.k === 'name')) || (t.k === 'union' && t.alts.every(x => x.k === 'obj'))))
        auto.push({ name: d.name, as: 'dictionary', module: moduleOf(d.name), merge: true });
    }
  }
  // A declaration inside a namespace or module (`TailStream.TailEvent`, `cloudflare:pipelines.Pipeline`)
  // is named by its last part, unless another declaration has that name: then by every part
  // (`TailStreamTailEvent`).
  const shortName = n => n.split('.').at(-1);
  const count = new Map();
  for (const n of [...host.declarations, ...auto].map(d => d.lean ?? shortName(d.name)).concat(classes.web.map(shortName))) count.set(n, (count.get(n) ?? 0) + 1);
  for (const d of auto) if (d.name.includes('.') && count.get(shortName(d.name)) > 1)
    d.lean = d.name.split('.').map(p => p.replace(/^[a-z]+:/, '').replace(/(^|[-_])([a-z])/g, (_, __, c) => c.toUpperCase())).join('');
  const typeNames = { ...host.typeNames };
  for (const n of classes.web) if (!n.includes('.') && !(n in typeNames)) typeNames[n] = tier.webTypeName(n);
  return { ...host, declarations: [...host.declarations, ...auto], typeNames };
}

/** The host with its modules merged where they use each other's types and ordered so that a
 * module only uses earlier ones' (from the lowered IDL's LasmLeanModule and references). */
export function orderModules(host, idl) {
  const moduleOf = new Map(), refs = new Map();
  for (const block of idl.split(/\n\n+/)) {
    const m = /LasmLeanModule="([^"]+)"/.exec(block), d = /^(?:interface|dictionary|callback|enum|typedef|namespace)\s+(\w+)/m.exec(block);
    if (!m || !d) continue;
    moduleOf.set(d[1], m[1]);
    refs.set(d[1], new Set(block.slice(d.index).match(new RegExp(`\\b${host.name}_\\w+`, 'g')) ?? []));
  }
  const names = host.modules.map(m => m.name);
  const edges = new Map(names.map(n => [n, new Set()]));
  for (const [d, rs] of refs) for (const r of rs) { const a = moduleOf.get(d), b = moduleOf.get(r); if (a && b && a !== b) edges.get(a).add(b); }
  // Tarjan's strongly connected components.
  let index = 0; const idx = new Map(), low = new Map(), stack = [], on = new Set(), sccs = [];
  const visit = v => {
    idx.set(v, index); low.set(v, index); index++; stack.push(v); on.add(v);
    for (const w of edges.get(v)) {
      if (!idx.has(w)) { visit(w); low.set(v, Math.min(low.get(v), low.get(w))); }
      else if (on.has(w)) low.set(v, Math.min(low.get(v), idx.get(w)));
    }
    if (low.get(v) === idx.get(v)) { const c = []; let w; do { w = stack.pop(); on.delete(w); c.push(w); } while (w !== v); sccs.push(c); }
  };
  for (const n of names) if (!idx.has(n)) visit(n);
  // Tarjan emits a component after every component it uses: that order is the modules' order.
  const merged = new Map();
  for (const c of sccs) { const head = names.find(n => c.includes(n)); for (const n of c) merged.set(n, head); }
  const order = sccs.map(c => names.find(n => c.includes(n)));
  const byName = new Map(host.modules.map(m => [m.name, m]));
  const modules = order.map(n => {
    const parts = names.filter(x => merged.get(x) === n);
    return parts.length === 1 ? byName.get(n) : { name: n, title: parts.map(x => byName.get(x).title).join('; ') };
  });
  const remap = d => ({ ...d, module: merged.get(d.module) ?? d.module });
  return { ...host, modules, declarations: host.declarations.map(remap),
    globals: host.globals.map(g => ({ ...g, module: merged.get(g.module) ?? g.module })) };
}

export async function lowerAll() {
  const results = [];
  for (const host of tier.hosts) {
    const files = [];
    for (const file of host.files) files.push({ file, text: await loadFile(host, file) });
    let h = host.selectAll ? selectAll({ ...host, modules: host.areaModules }, files) : host;
    let { idl, excluded } = lowerHost(h, files);
    if (host.selectAll) {
      // Lean modules cannot import each other in a cycle: areas whose types use each other's
      // are one module (named after the first in the tier's order), and the modules go in the
      // order of their uses.
      h = orderModules(h, idl);
      ({ idl, excluded } = lowerHost(h, files));
      results.push({ file: join(root, 'scripts', 'bindings', `${host.name.toLowerCase()}-modules.json`), text: JSON.stringify(h.modules, null, 1) + '\n' });
    }
    const header = `// GENERATED by scripts/bindings/cloudflare-api.mjs from the ${host.npm} ${host.version} TypeScript declarations
// (${host.files.map(f => `https://www.npmjs.com/package/${host.npm}/v/${host.version}, ${f}`).join('; ')};
// ${host.license}), for what cloudflare-tier3.mjs selects; do not edit. Comments quote each
// member's declaration. generate-web.mjs turns this into Lasm.JS.${host.name}.
//
// Not lowered (cloudflare-tier3.mjs; the declarations' own @experimental, UNSTABLE and @deprecated tags):
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
  const stale = [];
  for (const { file, text } of results) {
    const current = existsSync(file) ? readFileSync(file, 'utf8') : null;
    if (current === text) continue;
    if (check) stale.push(file.slice(root.length));
    else { writeFileSync(file, text); console.log(`wrote ${file.slice(root.length)}`); }
  }
  if (check && stale.length) { console.error(`stale: ${stale.join(', ')}. Run node scripts/bindings/cloudflare-api.mjs and commit the result.`); process.exit(1); }
  if (check) console.log(`cloudflare.idl is the lowering of the pinned declarations (${tier.hosts.map(h => `${h.npm} ${h.version}`).join(', ')}).`);
}
