// Which declarations of @cloudflare/workers-types are Cloudflare's own (Jordan, 2026-11-16:
// Lasm.JS.Cloudflare generates every one of them, and the web platform's types are
// Lasm.JS.Web's, never repeated). The rule is mechanical:
//
// - web: a declaration whose name the web platform's WebIDL (the pinned @webref/idl) defines
//   (Request, CacheStorage, WebSocket), a global of WindowOrWorkerGlobalScope (fetch,
//   setTimeout), or WebAssembly. Lasm.JS.Web declares these.
// - web support: a declaration not in the web platform's IDL whose name extends a web
//   declaration's (`CustomEventCustomEventInit`, `SubtleCryptoSignAlgorithm`) and that only
//   web declarations use: workerd's names for the web types' own dictionaries.
// - node: Node's globals in workers-types (Buffer, process, global, setImmediate): Lasm.JS.Node's.
// - own: everything else, which cloudflare-tier3.mjs assigns to a Lean module.
//
// `classify` is pure (the declarations and the set of web names in, the classes out), so
// test/web-bindings.test.mjs checks it on small inputs.
import { readFileSync, readdirSync } from 'node:fs';
import { createRequire } from 'node:module';
import { dirname, join } from 'node:path';

const require = createRequire(import.meta.url);

/** The names the web platform's IDL defines, and the members of its global scopes. */
export function webNames() {
  const webidl2 = require('webidl2');
  const idlDir = dirname(require.resolve('@webref/idl/package.json'));
  const names = new Set(), globals = new Set();
  const scopes = ['WindowOrWorkerGlobalScope', 'WorkerGlobalScope', 'Window', 'EventTarget', 'WindowEventHandlers', 'GlobalEventHandlers'];
  for (const f of readdirSync(idlDir).filter(f => f.endsWith('.idl')).sort()) {
    let ast;
    try { ast = webidl2.parse(readFileSync(join(idlDir, f), 'utf8')); } catch { continue; }
    for (const d of ast) {
      if (d.name) names.add(d.name);
      if (scopes.includes(d.name)) for (const m of d.members ?? []) if (m.name) globals.add(m.name);
    }
  }
  // The globals every JavaScript runtime has that the IDL above declares elsewhere (console,
  // the timers of the HTML standard's global scope, Web Crypto's crypto, the Cache API's caches).
  for (const n of ['console', 'self', 'onmessage', 'structuredClone', 'reportError', 'queueMicrotask', 'setTimeout', 'setInterval',
    'clearTimeout', 'clearInterval', 'btoa', 'atob', 'fetch', 'crypto', 'caches', 'performance', 'scheduler', 'navigator', 'origin',
    'addEventListener', 'removeEventListener', 'dispatchEvent']) globals.add(n);
  return { names, globals };
}

const NODE = ['Buffer', 'process', 'global', 'setImmediate', 'clearImmediate', 'Immediate'];
const ident = /[A-Za-z_$][A-Za-z0-9_$]*(?:\.[A-Za-z_$][A-Za-z0-9_$]*)*/g;
const textOf = d => d.text ?? `${d.header} ${d.src.code.slice(d.body[0], d.body[1])}`;

/** decls: serve-api's declarations(); web: webNames(). → { web, webSupport, node, own } (names). */
export function classify(decls, web) {
  const names = new Set(decls.map(d => d.name));
  const isWeb = d => d.name.startsWith('WebAssembly.') || (d.kind === 'interface' || d.kind === 'type' ? web.names.has(d.name) : web.globals.has(d.name));
  const W = new Set(decls.filter(isWeb).map(d => d.name));
  const referrers = new Map([...names].map(n => [n, new Set()]));
  for (const d of decls) for (const r of new Set(textOf(d).match(ident) ?? [])) if (names.has(r) && r !== d.name) referrers.get(r).add(d.name);
  const support = new Set();
  for (let changed = true; changed;) {
    changed = false;
    for (const d of decls) {
      if (W.has(d.name) || support.has(d.name) || NODE.includes(d.name)) continue;
      const rs = referrers.get(d.name);
      if (!rs.size || ![...rs].every(r => W.has(r) || support.has(r))) continue;
      if (![...W].some(w => d.name !== w && d.name.startsWith(w) && /^[A-Z]/.test(d.name.slice(w.length)))) continue;
      support.add(d.name); changed = true;
    }
  }
  const node = decls.filter(d => NODE.includes(d.name)).map(d => d.name);
  const own = decls.filter(d => !W.has(d.name) && !support.has(d.name) && !NODE.includes(d.name));
  return { web: [...W], webSupport: [...support], node, own };
}
