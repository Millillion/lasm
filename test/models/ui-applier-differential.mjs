// The model differential of the Lasm.UI applier's DOM operations
// (docs/TESTING_STRATEGY.md §4): src/lasm-modules/ui-dom.mjs applies patch
// frames to a real DOM (happy-dom), and the Lean model of what it does
// (library/Lasm/UI/Proofs/Applier.lean, reading the bytes with the reference
// decoder of Proofs/Decode.lean; test/models/UiApplierModel.lean, one
// `lean --run` process) applies the same frames to its DOM tree. After every
// frame the two trees must be equal: every node, id, namespace, tag, text,
// attribute, property, style and listener (with its decoder's paths), in
// order; and a frame the model refuses (an id not in the document, an insert
// before a node that is not a child, into a text node or into the moved
// node's own subtree, attributes on a text node) must make the applier
// throw. Lasm.UI.Spec.applier_correct proves of the model that it performs
// every patch the diff writes as Lasm.UI.Model's `applyOps` says, so what
// this draws ties that proof to the JavaScript.
//
// Sessions:
//   - diff: views drawn at random (keyed and unkeyed children, reorders,
//     inserts, removals, kind, tag, text and attribute changes), rendered in
//     turn by Lean's `diff` and encoder (the runner's `views` request); every
//     patch must conform (Lasm.UI.Candidates.diff_conforms, below) and every
//     frame must apply;
//   - random: frames of random operations (inserts of new subtrees, moves,
//     removals, clears, text and attribute changes, decoder definitions; the
//     names and values interned, referenced by table index or spelled out),
//     chosen from the nodes the DOM holds, so most apply and some are refused;
//   - hydrate: a server-rendered DOM (the first frame's nodes, some changed,
//     dropped, added or separated by comments, with server attributes of
//     their own) adopted by the first frame (`createUi({ hydrate: true })`),
//     then random frames;
//   - fixtures: the 120 sessions Lean writes (test/fixtures/ui/patches.json),
//     applied from an empty root and hydrating their server-rendered HTML.
// What the model leaves out (Applier.lean) is not generated: operations on
// the mount root itself, ids of removed nodes or used twice, decoder ids
// defined twice, names the DOM refuses, properties that are DOM members
// (except `hidden`, compared as the member it is). A DOM property cannot be
// unset and `style.setProperty(n, "")` removes a style, so properties ""
// and false and the empty style compare as unset.
//
//   node test/models/ui-applier-differential.mjs [--runs N] [--seed S] [--lean PATH --olean DIR]
//
// provisions the managed Lean (src/toolchains.json defaultLean) with Lasm's library and compiles the
// model into a temporary directory (or uses `lean` at PATH with the model's
// modules already compiled in DIR), then checks `runs` sessions of each kind
// (default 1000). Run by the ui-applier-model workflow (docs/CI.md).
import { execFileSync, spawn } from 'node:child_process';
import { cpSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { Window } from 'happy-dom';
import { random } from '../helpers/property.mjs';
import { createUi } from '../../src/lasm-modules/ui-dom.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const runner = fileURLToPath(new URL('./UiApplierModel.lean', import.meta.url));
// The proof modules the runner imports, in import order (proofs-only: not in the library).
const modules = ['Proofs.Basic', 'Proofs.Lists', 'Proofs.Children', 'Proofs.TwoEnded', 'Proofs.Diff', 'Proofs', 'Proofs.Decode',
  'Proofs.Wire', 'Proofs.Applier', 'Proofs.Apply'].map(m => ['Lasm', 'UI', ...m.split('.')]);

// ---- The Lean model ----
async function start({ lean, olean } = {}) {
  let libPath, out, temporary = false;
  if (lean) {
    libPath = join(dirname(dirname(lean)), 'lib', 'lean');
    out = resolve(olean);
  } else {
    const { provisionLean } = await import('../../src/managed-lean.mjs');
    const work = mkdtempSync(join(tmpdir(), 'lasm-ui-applier-lean-'));
    try {
      writeFileSync(join(work, 'Main.lean'), 'import Lean\ndef main : IO Unit := pure ()\n');
      writeFileSync(join(work, 'lean-toolchain'), `leanprover/lean4:v${JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8')).defaultLean}\n`);
      const provisioned = await provisionLean(join(work, 'Main.lean'), { modules: 'extended',
        progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
      lean = provisioned.lean;
      libPath = join(provisioned.prefix, 'lib', 'lean');
    } finally {
      rmSync(work, { recursive: true, force: true });
    }
    // Lean takes a module's package (Lasm) from the first search path that
    // has it, so the library's compiled modules go beside the model.
    out = mkdtempSync(join(tmpdir(), 'lasm-ui-applier-'));
    temporary = true;
    cpSync(join(libPath, 'Lasm'), join(out, 'Lasm'), { recursive: true });
  }
  const env = { ...process.env, LEAN_NUM_THREADS: '1', LEAN_PATH: [out, libPath].join(process.platform === 'win32' ? ';' : ':') };
  for (const key of Object.keys(env)) if (/^(?:LEAN_(?!NUM_THREADS|PATH)|LAKE_|ELAN_)/.test(key)) delete env[key];
  if (temporary) {
    for (const parts of modules) {
      mkdirSync(join(out, ...parts.slice(0, -1)), { recursive: true });
      execFileSync(lean, ['-R', join(root, 'library'), '-o', join(out, ...parts) + '.olean', join(root, 'library', ...parts) + '.lean'],
        { env, stdio: ['ignore', 'inherit', 'inherit'], timeout: 600_000 });
    }
  }
  const child = spawn(lean, ['--run', runner], { stdio: ['pipe', 'pipe', 'inherit'], env });
  const waiting = [];
  let buffer = '', exited = null;
  child.stdout.setEncoding('utf8');
  child.stdout.on('data', chunk => {
    buffer += chunk;
    for (let i; (i = buffer.indexOf('\n')) >= 0;) {
      const line = buffer.slice(0, i);
      buffer = buffer.slice(i + 1);
      let answer;
      try { answer = JSON.parse(line); } catch { answer = { fault: `the Lean runner wrote ${JSON.stringify(line.slice(0, 500))}` }; }
      waiting.shift()?.resolve(answer);
    }
  });
  child.on('exit', (code, signal) => {
    exited = new Error(`the Lean model exited (${code ?? signal})`);
    for (const w of waiting.splice(0)) w.reject(exited);
  });
  return {
    ask: request => exited ? Promise.reject(exited) : new Promise((resolve, reject) => {
      waiting.push({ resolve, reject });
      child.stdin.write(JSON.stringify(request) + '\n');
    }),
    stop: () => { child.stdin.end(); if (temporary) rmSync(out, { recursive: true, force: true }); },
  };
}

// ---- Frames: the encoder of library/Lasm/UI/Encode.lean, with its choices drawn ----
const ATTRS = ['a0', 'a1', 'data-x', 'class', 'title'];
const PROPS = ['p0', 'p1'];
// Custom properties: the DOM keeps any value (a standard property drops one it cannot parse).
const STYLES = ['--s0', '--s1'];
const EVENTS = ['click', 'input', 'x-ev'];
const VALUES = ['', 'v', 'x y', 'λ', '<&">', '😀'];
const STYLE_VALUES = ['1px', 'red', 'x y', ''];
const TEXTS = ['', 'a', 'λ', ' ', '<&>', '😀 b'];
const TAGS = [[1, 'div'], [1, 'span'], [1, 'p'], [1, 'li'], [2, 'g'], [2, 'circle'], [3, 'mi']];
const POOL = [...ATTRS, ...PROPS, ...STYLES, ...EVENTS];

class Encoder {
  names = []; values = []; decoders = [];
  constructor(gen) { this.gen = gen; }
  begin() { this.bytes = []; }
  byte(b) { this.bytes.push(b); }
  v(n) { while (n >= 128) { this.bytes.push(n % 128 + 128); n = Math.floor(n / 128); } this.bytes.push(n); }
  raw(t) { const b = new TextEncoder().encode(t); this.v(b.length); this.bytes.push(...b); }
  interned(table, t) {
    const { gen } = this, at = table.indexOf(t);
    if (at >= 0 && gen.next() < 0.6) return this.v(at + 2);
    if (gen.next() < 0.5) { table.push(t); this.v(0); } else this.v(1);
    this.raw(t);
  }
  name(t) { this.interned(this.names, t); }
  value(t) { this.interned(this.values, t); }
  // A decoder shape under a new id (op 7).
  define() {
    const d = this.decoders.length, { gen } = this;
    const paths = gen.array(gen.int(0, 2), () => gen.array(gen.int(1, 2), () => gen.pick(['target', 'value', 'key', 'currentTarget', 'λ'])));
    this.byte(7); this.v(d); this.v(paths.length);
    for (const p of paths) { this.v(p.length); for (const s of p) this.raw(s); }
    this.decoders.push(paths);
  }
  // (happy-dom's MathML elements have no `style`, as browsers' have: no styles on them.)
  attrOp(setsOnly, noStyle = false) {
    const { gen } = this;
    const k = gen.pick(setsOnly || gen.next() < 0.6 ? [0, 0, 1, 2, 3, 4, 5] : [8, 9, 10, 11]);
    if ((k === 5 && this.decoders.length === 0) || (noStyle && (k === 4 || k === 10))) return this.attrOp(setsOnly, noStyle);
    this.byte(k);
    switch (k) {
    case 0: this.name(gen.pick(ATTRS)); this.value(gen.pick(VALUES)); break;
    case 1: this.name(gen.pick(PROPS)); this.value(gen.pick(VALUES)); break;
    case 2: case 3: case 9: this.name(gen.pick(PROPS)); break;
    case 4: this.name(gen.pick(STYLES)); this.value(gen.pick(STYLE_VALUES)); break;
    case 5: this.name(gen.pick(EVENTS)); this.v(gen.int(0, this.decoders.length - 1)); break;
    case 8: this.name(gen.pick(ATTRS)); break;
    case 10: this.name(gen.pick(STYLES)); break;
    case 11: this.name(gen.pick(EVENTS)); break;
    }
  }
  // A new subtree with fresh ids; returns its description (for a server rendering).
  node(ids, depth, setsOnly = false) {
    const { gen } = this, id = ids.next++;
    if (depth > 2 || gen.next() < 0.35) {
      const s = gen.pick(TEXTS);
      this.byte(0); this.v(id); this.raw(s);
      return { id, text: s };
    }
    const [kind, tag] = gen.pick(TAGS);
    this.byte(kind); this.v(id); this.name(tag);
    const n = gen.int(0, 3);
    this.v(n);
    const start = this.bytes.length;
    for (let i = 0; i < n; i++) this.attrOp(setsOnly, kind === 3);
    const head = this.bytes.slice(start);
    const count = gen.int(0, 3);
    this.v(count);
    const kids = [];
    for (let i = 0; i < count; i++) kids.push(this.node(ids, depth + 1, setsOnly));
    return { id, kind, tag, head, kids };
  }
}

// ---- Views, for Lean's diff ----
const KEYS = ['k0', 'k1', 'k2', 'k3', 'k4', 'k5', 'k6', 'k7'];
function genAttrs(gen) {
  return gen.array(gen.int(0, 3), () => {
    switch (gen.int(0, 4)) {
    case 0: return ['attr', gen.pick(ATTRS), gen.pick(VALUES)];
    case 1: return ['prop', gen.pick(PROPS), gen.next() < 0.5 ? gen.pick(VALUES) : gen.next() < 0.5];
    case 2: return ['style', gen.pick(STYLES), gen.pick(STYLE_VALUES)];
    default: return ['on', gen.pick(EVENTS), gen.array(gen.int(0, 2), () => [gen.pick(['target', 'value', 'key'])])];
    }
  });
}
function genHtml(gen, depth) {
  if (depth > 2 || gen.next() < 0.3) return ['t', gen.pick(TEXTS)];
  const [kind, tag] = gen.pick(TAGS);
  const ns = ['html', 'html', 'svg', 'mathml'][kind];
  const keyed = gen.next() < 0.4;
  const kids = keyed
    ? gen.array(gen.int(0, 6), (_, i) => { const h = genHtml(gen, depth + 1); return h[0] === 't' ? ['e', 'html', 'li', `k${i}`, [], [h]] : [...h.slice(0, 3), `k${i}`, ...h.slice(4)]; })
    : gen.array(gen.int(0, 4), () => genHtml(gen, depth + 1));
  return ['e', ns, tag, null, kind === 3 ? genAttrs(gen).filter(a => a[0] !== 'style') : genAttrs(gen), kids];
}
function mutateList(gen, list, depth) {
  let out = list.map(h => gen.next() < 0.6 ? mutate(gen, h, depth) : h);
  if (gen.next() < 0.3 && out.length) out.splice(gen.int(0, out.length - 1), 1);
  if (gen.next() < 0.3) {
    const keyed = out.length && out.every(h => h[0] === 'e' && h[3] !== null);
    const used = new Set(out.map(h => h[3]));
    const fresh = KEYS.find(k => !used.has(k));
    let h = genHtml(gen, depth + 1);
    if (keyed && fresh) h = h[0] === 't' ? ['e', 'html', 'li', fresh, [], [h]] : [...h.slice(0, 3), fresh, ...h.slice(4)];
    if (!keyed || fresh) out.splice(gen.int(0, out.length), 0, h);
  }
  if (gen.next() < 0.3) for (let j = out.length - 1; j > 0; j--) { const k = gen.int(0, j); [out[j], out[k]] = [out[k], out[j]]; }
  return out;
}
function mutate(gen, h, depth) {
  if (gen.next() < 0.1) return genHtml(gen, depth);
  if (h[0] === 't') return gen.next() < 0.5 ? ['t', gen.pick(TEXTS)] : h;
  const [, ns, tag, key, attrs, kids] = h;
  const attrs2 = gen.next() < 0.4 ? (ns === 'mathml' ? genAttrs(gen).filter(a => a[0] !== 'style') : genAttrs(gen)) : attrs;
  return ['e', ns, tag, key, attrs2, mutateList(gen, kids, depth + 1)];
}

// ---- The DOM, as both sides describe it ----
const NS = { 'http://www.w3.org/1999/xhtml': 'html', 'http://www.w3.org/2000/svg': 'svg', 'http://www.w3.org/1998/Math/MathML': 'mathml' };
const NS_URI = { html: 'http://www.w3.org/1999/xhtml', svg: 'http://www.w3.org/2000/svg', mathml: 'http://www.w3.org/1998/Math/MathML' };
// DOM members Lasm sets as properties (Lean's fixtures set `hidden`), compared as the member
// (of HTML elements; on others it is an expando).
const MEMBERS = ['hidden'];
const emptyProp = v => v === '' || v === false || v === 0 || v === undefined;
const bySlot = (a, b) => { const x = JSON.stringify([a[0], a[1]]), y = JSON.stringify([b[0], b[1]]); return x < y ? -1 : x > y ? 1 : 0; };

/** The applier's DOM under the root, and every name it holds. */
function observe(node, decoders, names) {
  if (node.nodeType === 3) return ['t', node.$i ?? null, node.data];
  if (node.nodeType !== 1) return ['other', node.nodeType];
  const slots = [];
  for (const a of node.getAttributeNames()) {
    names.add(a);
    if (a !== 'style' && !(node.namespaceURI === NS_URI.html && MEMBERS.includes(a))) slots.push(['attr', a, ['str', node.getAttribute(a)]]);
  }
  for (const p of Object.keys(node)) {
    // `data` on an element is where a text change on it lands (an expando the model ignores).
    if (p === '$i' || p === '$l' || p === 'data') continue;
    names.add(p);
    const v = node[p];
    if (!emptyProp(v)) slots.push(['prop', p, typeof v === 'boolean' ? ['prop', 'bool', v] : ['prop', 'str', String(v)]]);
  }
  for (let i = 0; i < (node.style?.length ?? 0); i++) {
    const s = node.style.item(i);
    names.add(s);
    const v = node.style.getPropertyValue(s);
    if (v !== '') slots.push(['style', s, ['str', v]]);
  }
  for (const [e, d] of Object.entries(node.$l ?? {})) { names.add(e); slots.push(['on', e, ['listener', e, decoders[d]]]); }
  for (const m of MEMBERS) if (!Object.hasOwn(node, m) && node[m]) slots.push(['member', m, true]);
  return ['e', node.$i ?? null, NS[node.namespaceURI], node.localName, slots.sort(bySlot), [...node.childNodes].map(c => observe(c, decoders, names))];
}

/** The model's DOM, normalized as the DOM shows it. */
function normalize(json) {
  if (json[0] === 't') return json;
  const [, id, ns, tag, slots, kids] = json;
  const out = [];
  for (const [kind, n, v] of slots) {
    if (kind === 'attr' && (n === 'style' || (ns === 'html' && MEMBERS.includes(n)))) continue;
    if (kind === 'prop' && ns === 'html' && MEMBERS.includes(n)) { if (v[2]) out.push(['member', n, true]); continue; }
    if (kind === 'prop' && emptyProp(v[2])) continue;
    if (kind === 'style' && v[1] === '') continue;
    out.push([kind, n, v]);
  }
  return ['e', id, ns, tag, out.sort(bySlot), kids.map(normalize)];
}

// ---- Sessions ----
// happy-dom inserts where the DOM refuses to (into a text node; before a node
// that is not a child of the parent): its insertion checks are made the DOM
// standard's here ("ensure pre-insert validity"), as every browser has them.
function strict(window) {
  const proto = window.Node.prototype, { insertBefore, appendChild } = proto;
  const valid = (parent, node, child) => {
    if (parent.nodeType !== 1 && parent.nodeType !== 9 && parent.nodeType !== 11) throw new window.DOMException('not a parent', 'HierarchyRequestError');
    for (let a = parent; a; a = a.parentNode) if (a === node) throw new window.DOMException('into its own subtree', 'HierarchyRequestError');
    if (child != null && child.parentNode !== parent) throw new window.DOMException('not a child', 'NotFoundError');
  };
  proto.insertBefore = function (node, child) { valid(this, node, child); return insertBefore.call(this, node, child); };
  proto.appendChild = function (node) { valid(this, node, null); return appendChild.call(this, node); };
  return window;
}
const page = () => {
  const window = strict(new Window({ url: 'https://app.test/' }));
  const el = window.document.createElement('div');
  window.document.body.appendChild(el);
  return { window, document: window.document, el };
};

/** The live nodes under the root (id → node), in document order. */
function liveNodes(el, dead) {
  const out = [];
  // (Under a retired node everything is retired: a clear of its parent would leave its inner ids in the table.)
  const walk = n => { for (let c = n.firstChild; c; c = c.nextSibling) if (c.$i !== undefined && !dead.has(c.$i)) { out.push(c); walk(c); } };
  walk(el);
  return out;
}
const subtreeIds = (n, into) => { if (n.$i !== undefined) into.add(n.$i); for (let c = n.firstChild; c; c = c.nextSibling) subtreeIds(c, into); return into; };

/** One random frame on the DOM under `el`. */
function randomFrame(gen, enc, el, ids, dead) {
  enc.begin();
  const nodes = liveNodes(el, dead);
  // Nodes moved in this frame (a removal also retires them: one may now be inside what it removes).
  const moved = [];
  const alive = () => nodes.filter(n => !dead.has(n.$i));
  const missing = () => ids.next + 1000 + gen.int(0, 9);
  const any = () => { const l = alive(); return gen.next() < 0.01 ? missing() : l.length ? gen.pick(l).$i : 0; };
  const element = () => { const l = alive().filter(n => n.nodeType === 1); return !l.length || gen.next() < 0.97 ? (l.length ? gen.pick(l).$i : 0) : gen.next() < 0.7 ? 0 : any(); };
  const childOf = p => {
    const parent = p === 0 ? el : nodes.find(n => n.$i === p);
    const kids = parent && !dead.has(p) ? [...parent.childNodes].filter(c => c.$i !== undefined && !dead.has(c.$i) && !moved.includes(c.$i)) : [];
    const r = gen.next();
    if (r < 0.4 || (!kids.length && r < 0.985)) return 0;
    if (r < 0.985) return gen.pick(kids).$i + 1;
    return r < 0.995 ? any() + 1 : missing() + 1;
  };
  // The nodes an op takes out of the document: their inner ids stay in the
  // applier's table until the frame is painted, so the session never names them again.
  const kill = id => {
    for (const m of [id, ...moved]) { const n = m === 0 ? null : nodes.find(x => x.$i === m); if (n) for (const d of subtreeIds(n, new Set())) dead.add(d); }
  };
  const count = gen.int(1, 8);
  for (let i = 0; i < count; i++) {
    // (With no node to name, an insert; a missing id is drawn now and then, not by default.)
    const r = alive().length ? gen.next() : 0.2;
    if (r < 0.05) enc.define();
    else if (r < 0.35) {
      const p = gen.next() < 0.3 ? 0 : gen.next() < 0.98 ? element() : any();
      enc.byte(1); enc.v(p); enc.v(childOf(p)); enc.node(ids, 0);
    } else if (r < 0.5) {
      const id = gen.next() < 0.005 ? 0 : any(), p = gen.next() < 0.3 ? 0 : element();
      const b = gen.next() < 0.03 ? id + 1 : childOf(p);
      moved.push(id);
      enc.byte(2); enc.v(p); enc.v(id); enc.v(b);
    } else if (r < 0.6) {
      const id = any();
      kill(id);
      enc.byte(3); enc.v(id);
    } else if (r < 0.65) {
      const p = gen.next() < 0.1 ? 0 : gen.next() < 0.85 ? element() : any();
      const parent = p === 0 ? el : nodes.find(n => n.$i === p);
      kill(0);
      if (parent) for (const c of parent.childNodes) if (c.$i !== undefined) kill(c.$i);
      enc.byte(4); enc.v(p);
    } else if (r < 0.75) {
      const texts = alive().filter(n => n.nodeType === 3);
      const id = texts.length && gen.next() < 0.8 ? gen.pick(texts).$i : gen.next() < 0.2 ? 0 : any();
      enc.byte(5); enc.v(id); enc.raw(gen.pick(TEXTS));
    } else {
      const id = gen.next() < 0.98 ? element() : any();
      if (id === 0) continue; // attributes of the root are outside the model
      const n = gen.int(1, 4);
      enc.byte(6); enc.v(id); enc.v(n);
      const target = nodes.find(x => x.$i === id);
      for (let k = 0; k < n; k++) enc.attrOp(false, target?.namespaceURI === NS_URI.mathml);
    }
  }
  return Uint8Array.from(enc.bytes);
}

/** A server rendering of the first frame's nodes, changed here and there. */
function serverOf(gen, desc, enc) {
  const out = [];
  for (const d of desc) {
    if (gen.next() < 0.15) out.push(['c']);
    const r = gen.next();
    if (r < 0.08) continue; // not rendered
    if (r < 0.16) { out.push(gen.next() < 0.5 ? ['t', gen.pick(TEXTS)] : ['e', 'html', gen.pick(['div', 'b']), [], []]); continue; }
    if (d.text !== undefined) { out.push(['t', gen.next() < 0.8 ? d.text : gen.pick(TEXTS)]); continue; }
    // The server's attributes: the view's (as its HTML writes them), some left out, some extra.
    const attrs = [];
    for (const [n, v] of attributesOf(d.head, enc)) if (gen.next() < 0.8) attrs.push([n, v]);
    if (gen.next() < 0.3) attrs.push([gen.pick(ATTRS), gen.pick(VALUES)]);
    out.push(['e', ['html', 'html', 'svg', 'mathml'][d.kind], d.tag, attrs, serverOf(gen, d.kids, enc)]);
  }
  if (gen.next() < 0.15) out.push(gen.next() < 0.5 ? ['c'] : ['t', 'extra']);
  return out;
}
/** The `setAttribute` ops of a node head (as bytes the encoder wrote), read back. */
function attributesOf(head, enc) {
  const out = [];
  let p = 0;
  const v = () => { let x = 0, m = 1; for (;;) { const b = head[p++]; x += (b & 127) * m; if (b < 128) return x; m *= 128; } };
  const str = () => { const n = v(); const s = new TextDecoder().decode(Uint8Array.from(head.slice(p, p + n))); p += n; return s; };
  const interned = table => { const x = v(); if (x > 1) return table[x - 2]; return str(); };
  // The tables as they were when the head was written are a prefix of the current ones.
  while (p < head.length) {
    const k = head[p++];
    if (k === 0) { const n = interned(enc.names), val = interned(enc.values); out.push([n, val]); }
    else if (k === 1 || k === 4) { interned(enc.names); interned(enc.values); }
    else if (k === 5) { interned(enc.names); v(); }
    else interned(enc.names);
  }
  return out;
}
function buildServer(document, json) {
  if (json[0] === 't') return document.createTextNode(json[1]);
  if (json[0] === 'c') return document.createComment('');
  const [, ns, tag, attrs, kids] = json;
  const e = document.createElementNS(NS_URI[ns], tag);
  for (const [n, v] of attrs) e.setAttribute(n, v);
  for (const k of kids) e.appendChild(buildServer(document, k));
  return e;
}
/** A parsed server DOM, as the model reads it. */
function serverJson(node) {
  if (node.nodeType === 3) return ['t', node.data];
  if (node.nodeType === 8) return ['c'];
  return ['e', NS[node.namespaceURI], node.localName, node.getAttributeNames().map(a => [a, node.getAttribute(a)]), [...node.childNodes].map(serverJson)];
}

/** Applies `frames` in the applier (until one throws) and compares each with the model. */
async function check(model, label, frames, { server = null, ssr = null } = {}) {
  const { window, document, el } = page();
  if (ssr !== null) el.innerHTML = ssr;
  else if (server) for (const s of server) el.appendChild(buildServer(document, s));
  const serverModel = ssr !== null ? [...el.childNodes].map(serverJson) : server;
  const ui = createUi({ root: el, hydrate: serverModel !== null, window });
  const seen = [], names = new Set(POOL);
  let threw = null;
  try {
    for (const frame of frames) {
      try { ui.applyForTest(frame); }
      catch (error) { threw = error; break; }
      seen.push([...el.childNodes].map(c => observe(c, ui.decodersForTest(), names)));
    }
  } finally { ui.unmount(); window.close(); }
  const asked = frames.slice(0, seen.length + (threw ? 1 : 0)).map(f => Buffer.from(f).toString('hex'));
  const answer = await model.ask({ frames: asked, names: [...names], server: serverModel });
  if (answer.fault) throw new Error(`${label}: the model refused the request: ${answer.fault}`);
  const show = () => `\n  frames: ${JSON.stringify(asked)}${serverModel ? `\n  server: ${JSON.stringify(serverModel)}` : ''}`;
  for (let i = 0; i < seen.length; i++) {
    const a = answer.frames[i];
    if (a?.outside) return 'outside';
    if (!a?.ok) throw new Error(`${label}, frame ${i}: the applier applied a frame the model refuses${show()}`);
    const expected = JSON.stringify(a.ok.map(normalize)), got = JSON.stringify(seen[i]);
    if (expected !== got) throw new Error(`${label}, frame ${i}: the applier's DOM is not the model's${show()}\n  applier: ${got}\n  model:   ${expected}`);
  }
  if (threw) {
    const a = answer.frames[seen.length];
    if (a?.outside) return 'outside';
    if (!a?.error) throw new Error(`${label}, frame ${seen.length}: the applier threw (${threw.message}) where the model applies the frame${show()}`);
    return `refused (${/^Lasm\.UI: (no node|node \d+ is not an element)/.exec(threw.message)?.[1]?.replace(/\d+/, 'n') ?? threw.name})`;
  }
  return 'applied';
}

export async function differential({ runs = 1000, seed = 1, lean, olean } = {}) {
  const model = await start({ lean, olean });
  const counts = { diff: {}, random: {}, hydrate: {}, fixtures: {} };
  const tally = (kind, result) => { counts[kind][result] = (counts[kind][result] ?? 0) + 1; };
  try {
    const gen = random(seed);
    for (let run = 0; run < runs; run++) {
      // Lean's diff of random views.
      // Proposition: Lasm.UI.Candidates.diff_conforms
      //   ∀ (Msg : Type) (old : List (Live Msg)) (new : List (Html Msg)) (next : Nat), WF old next → 0 < next →
      //     (Applier.idsIn (old.map toDom)).Nodup → 0 ∉ Applier.idsIn (old.map toDom) →
      //     (Applier.confOps (List.range next) (diff old new next).ops.toList (old.map toDom)).isSome
      // (evaluated by the runner on every frame: the live trees of a session are well formed, with
      // distinct ids, none 0: Spec.session_correct and Applier.run_ofOps)
      const views = [];
      let view = gen.array(gen.int(1, 3), () => genHtml(gen, 0));
      for (let f = gen.int(1, 6); f > 0; f--) { views.push(view); view = mutateList(gen, view, 0); }
      const rendered = await model.ask({ views });
      if (rendered.fault) throw new Error(`diff session ${run}: the model refused the views: ${rendered.fault}`);
      const bad = rendered.conform.indexOf(false);
      if (bad >= 0) throw new Error(`diff session ${run} (seed ${seed}), frame ${bad}: the patch does not conform (Candidates.diff_conforms)\n  views: ${JSON.stringify(views)}`);
      const patches = rendered.patches.map(h => Uint8Array.from(Buffer.from(h, 'hex'))).filter(f => f.length);
      const result = await check(model, `diff session ${run} (seed ${seed})`, patches);
      if (result !== 'applied') throw new Error(`diff session ${run} (seed ${seed}): a frame of Lean's diff was ${result}\n  views: ${JSON.stringify(views)}`);
      tally('diff', result);

      // Random frames from an empty root (applied as drawn, so each is drawn from the DOM the last one left).
      const enc = new Encoder(gen), ids = { next: 1 }, dead = new Set();
      const { window, el } = page();
      const ui = createUi({ root: el, window });
      const frames = [];
      try {
        for (let f = gen.int(1, 6); f > 0; f--) {
          const frame = randomFrame(gen, enc, el, ids, dead);
          frames.push(frame);
          try { ui.applyForTest(frame); } catch { break; }
        }
      } finally { ui.unmount(); window.close(); }
      tally('random', await check(model, `random session ${run} (seed ${seed})`, frames));

      // Hydration: the first frame appends the view's nodes under the root.
      const henc = new Encoder(gen), hids = { next: 1 };
      henc.begin();
      if (gen.next() < 0.5) henc.define();
      const desc = [];
      for (let n = gen.int(1, 4); n > 0; n--) { henc.byte(1); henc.v(0); henc.v(0); desc.push(henc.node(hids, 0, true)); }
      const first = Uint8Array.from(henc.bytes);
      const server = serverOf(gen, desc, henc);
      const hframes = [first];
      {
        const p = page();
        for (const s of server) p.el.appendChild(buildServer(p.document, s));
        const ui2 = createUi({ root: p.el, hydrate: true, window: p.window });
        const hdead = new Set();
        try {
          ui2.applyForTest(first);
          for (let f = gen.int(0, 3); f > 0; f--) {
            const frame = randomFrame(gen, henc, p.el, hids, hdead);
            hframes.push(frame);
            try { ui2.applyForTest(frame); } catch { break; }
          }
        } finally { ui2.unmount(); p.window.close(); }
      }
      tally('hydrate', await check(model, `hydrate session ${run} (seed ${seed})`, hframes, { server }));
    }
    const scenarios = JSON.parse(readFileSync(join(root, 'test/fixtures/ui/patches.json'), 'utf8'));
    const unhex = h => Uint8Array.from(h.match(/../g) ?? [], b => parseInt(b, 16));
    for (const [i, s] of scenarios.entries()) {
      const frames = s.frames.map(f => unhex(f.patch)).filter(f => f.length);
      tally('fixtures', await check(model, `fixture ${i}`, frames));
      tally('fixtures', await check(model, `fixture ${i}, hydrating`, frames, { ssr: s.ssr }) + ' (hydrating)');
    }
  } finally { model.stop(); }
  return counts;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const option = (name, fallback) => { const i = process.argv.indexOf(name); return i > 0 ? process.argv[i + 1] : fallback; };
  const runs = Number(option('--runs', 1000)), seed = Number(option('--seed', 1));
  const started = Date.now();
  const counts = await differential({ runs, seed, lean: option('--lean'), olean: option('--olean') });
  for (const [kind, c] of Object.entries(counts)) console.log(`ok   ${kind}: ${Object.entries(c).map(([k, n]) => `${n} ${k}`).join(', ')}`);
  console.log(`the applier and its Lean model agree, seed ${seed} (${((Date.now() - started) / 1000).toFixed(1)} s)`);
}
