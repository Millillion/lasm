// The Lasm.UI patch applier's reading (src/lasm-modules/ui-dom.mjs) against
// Lean's reference decoder of the same stream (library/Lasm/UI/Proofs/Decode.lean,
// which Spec.frames_decode proves reads every frame the encoder writes as
// exactly its patch). Input: length-prefixed chunks (two bytes, little-endian),
// the frames of one session, applied in turn by the real applier on a
// recording DOM (below) and read in turn by the decoder (`lean --run`,
// test/fuzz/support/ui-decode-model.mjs; required in CI). Oracle, frame by
// frame until the first refusal:
//   - the applier refuses a frame (a `Lasm.UI: …` error about the bytes)
//     exactly when the decoder refuses it;
//   - when both read it, the DOM the applier leaves is the DOM the decoder's
//     operations make (every node, id, tag, namespace, text, attribute,
//     property, style and listener with its decoder's paths, in order).
// Frames whose meaning depends on the DOM rather than the bytes end the
// session without a verdict: a node id that is not in the document, an
// operation the DOM refuses (a move into its own subtree), a text change on
// an element, an id already in use, a property that is a DOM member. So do
// numbers above 2^53, which the applier refuses (JavaScript numbers) and the
// decoder reads. A DOM property cannot be deleted: a removed one reads as its
// type's empty value, so for properties "", false and unset compare equal.
// Without the model, the applier alone runs on the recording DOM, as in ui-patch.
//
// Proposition: Lasm.UI.Spec.frames_decode
//   ∀ (Msg : Type) (frames : List (Array (Op Msg) × Nat)),
//     Decode.frames {} (Decode.encodeAll {} frames) =
//       some (frames.map fun (ops, root) => Decode.Wire.ofOps root ops.toList)
import { readFileSync } from 'node:fs';
import { createUi } from '../../../src/lasm-modules/ui-dom.mjs';
import { start } from '../support/serverless-model.mjs';
import { modelDirectory } from '../support/ui-decode-model.mjs';

export const sources = ['src/lasm-modules/ui-dom.mjs'];
export const maxLength = 4096;
// Patch ops 1–7, node kinds 0–3, attribute ops 0–5 and 8–11, varint edges, UTF-8 edges.
export const dictionary = [[1], [2], [3], [4], [5], [6], [7], [8], [9], [10], [11], [0x80], [0x80, 0x00], [0xff, 0xff], [0x80, 0x80, 0x80, 0x80, 0x80],
  [0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f], [0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x10], [0xc3, 0xa9], [0xed, 0xa0, 0x80], [0xc0, 0x80], [0xff],
  [1, 0, 0, 1, 1, 0, 3, 100, 105, 118, 0, 0], [1, 0, 0, 0, 1, 0, 1, 120], [7, 0, 1, 1, 6, 116, 97, 114, 103, 101, 116], [5, 0, 5, 99, 108, 105, 99, 107, 0],
  'id', 'class', 'style', 'click', 'value', 'checked', '__proto__', 'constructor', '$i', '$l', 'data', 'nodeType', 'firstChild', 'textContent'];

let model;
export async function setup() {
  const dir = modelDirectory();
  if (dir) model = start(dir);
}

const fail = (message, detail) => {
  let shown;
  try { shown = JSON.stringify(detail, (_, v) => v instanceof Uint8Array ? Buffer.from(v).toString('hex') : v, 1); } catch { shown = String(detail); }
  throw Object.assign(new Error(`${message}\n${shown?.slice(0, 3000)}`), { name: 'OracleFailure' });
};

// ---- A recording DOM: the DOM's tree semantics, every slot kept ----
const HTML = 'http://www.w3.org/1999/xhtml';
const NS = { [HTML]: 'html', 'http://www.w3.org/2000/svg': 'svg', 'http://www.w3.org/1998/Math/MathML': 'mathml' };
class DomRefusal extends Error {}
const members = new Set(['nodeType', '$i', '$l', 'style', 'setAttribute', 'removeAttribute', 'hasAttribute', 'appendChild', 'insertBefore', 'remove',
  'firstChild', 'nextSibling', 'childNodes', 'textContent', 'data', 'localName', 'namespaceURI', 'ownerDocument', 'parentNode', 'addEventListener',
  'removeEventListener', 'contains', 'closest', 'focus', 'blur', 'getElementById', 'then', 'constructor', 'toJSON', 'valueOf', 'toString']);

function recordingDom() {
  const state = { anomaly: null, ids: new Map() };
  const flag = why => { state.anomaly ??= why; };
  let root, rootRecord;
  const top = n => { while (n.parent) n = n.parent; return n; };
  const live = n => top(n) === rootRecord || top(n).fresh;
  const index = n => n.parent.kids.indexOf(n);
  function detach(n) { if (n.parent) { n.parent.kids.splice(index(n), 1); n.parent = null; } }
  function nodeOf(t) {
    // `t` is the record; the object the applier holds is t.self (a Proxy for elements).
    const methods = {
      get firstChild() { return t.kids[0]?.self ?? null; },
      get nextSibling() { return t.parent ? t.parent.kids[index(t) + 1]?.self ?? null : null; },
      get childNodes() { return t.kids.map(k => k.self); },
      get parentNode() { return t.parent?.self ?? null; },
      appendChild(c) { return methods.insertBefore(c, null); },
      insertBefore(c, ref) {
        const ct = records.get(c), rt = ref === null ? null : records.get(ref);
        if (!live(t) || !live(ct)) flag('an operation on a node outside the document');
        if (t.type !== 1) throw Object.assign(new DomRefusal('HierarchyRequestError: a text node has no children'), { name: 'DOMException' });
        for (let a = t; a; a = a.parent) if (a === ct) throw Object.assign(new DomRefusal('HierarchyRequestError: into its own subtree'), { name: 'DOMException' });
        if (rt && rt.parent !== t) throw Object.assign(new DomRefusal('NotFoundError: not a child'), { name: 'DOMException' });
        let before = rt === ct ? t.kids[index(ct) + 1] ?? null : rt;
        detach(ct);
        ct.fresh = false;
        const at = before ? t.kids.indexOf(before) : t.kids.length;
        t.kids.splice(at, 0, ct);
        ct.parent = t;
        return c;
      },
      remove() { if (!live(t)) flag('an operation on a node outside the document'); detach(t); },
      set textContent(v) {
        if (!live(t)) flag('an operation on a node outside the document');
        if (v !== '') flag('textContent set to text');
        if (t.type === 3) flag('a clear of a text node (the DOM empties it; the model has no children to clear)');
        for (const k of [...t.kids]) detach(k);
      },
      setAttribute(a, v) { if (!live(t)) flag('an operation on a node outside the document'); t.attrs.set(a, String(v)); },
      removeAttribute(a) { if (!live(t)) flag('an operation on a node outside the document'); t.attrs.delete(a); },
      addEventListener() {}, removeEventListener() {},
    };
    t.style = {
      setProperty(a, v) { if (!live(t)) flag('an operation on a node outside the document'); t.styles.set(a, String(v)); },
      removeProperty(a) { if (!live(t)) flag('an operation on a node outside the document'); t.styles.delete(a); },
    };
    return methods;
  }
  const records = new Map();
  function make(fields) {
    const t = { parent: null, kids: [], fresh: true, attrs: new Map(), props: new Map(), styles: new Map(), $l: undefined, $i: undefined, ...fields };
    const methods = nodeOf(t);
    const self = new Proxy(t, {
      get(_, key) {
        if (typeof key === 'symbol') return undefined;
        if (key === 'nodeType') return t.type;
        if (key === 'localName') return t.tag;
        if (key === 'namespaceURI') return t.ns;
        if (key === 'ownerDocument') return doc;
        if (key === '$i') return t.$i;
        if (key === '$l') return t.$l;
        if (key === 'data') return t.type === 3 ? t.text : t.props.get('data');
        if (key === 'style') return t.style;
        if (key in methods) return Reflect.get(methods, key);
        return t.props.get(key);
      },
      set(_, key, value) {
        if (key === '$i') {
          const other = state.ids.get(value);
          if (other && other !== t && live(other)) flag(`id ${value} already in use`);
          state.ids.set(value, t);
          t.$i = value;
        } else if (key === '$l') t.$l = value;
        else if (key === 'data' && t.type === 3) { if (!live(t)) flag('an operation on a node outside the document'); t.text = value; }
        else if (key === 'textContent') methods.textContent = value;
        else if (members.has(key) || key === 'data') flag(`the property ${key} is a DOM member`);
        else { if (!live(t)) flag('an operation on a node outside the document'); t.props.set(key, value); }
        return true;
      },
    });
    t.self = self;
    records.set(self, t);
    return self;
  }
  const doc = {
    createTextNode: s => make({ type: 3, text: s }),
    createElement: tag => make({ type: 1, tag, ns: HTML }),
    createElementNS: (ns, tag) => make({ type: 1, tag, ns }),
    getElementById: () => null,
  };
  root = make({ type: 1, tag: 'div', ns: HTML });
  root.$i = 0;
  rootRecord = records.get(root);
  rootRecord.fresh = false;
  return { root, state, records };
}

// ---- Comparing the two DOMs ----
const slotKey = (kind, name) => JSON.stringify([kind, name]);
const bySlot = (a, b) => { const x = slotKey(a[0], a[1]), y = slotKey(b[0], b[1]); return x < y ? -1 : x > y ? 1 : 0; };
const emptyProp = v => v === '' || v === false || v === 0 || v === undefined;
function jsSlots(t, decoders) {
  const out = [];
  for (const [n, v] of t.attrs) out.push(['attr', n, ['str', v]]);
  for (const [n, v] of t.props) if (!emptyProp(v)) out.push(['prop', n, typeof v === 'boolean' ? ['prop', 'bool', v] : ['prop', 'str', String(v)]]);
  for (const [n, v] of t.styles) out.push(['style', n, ['str', v]]);
  for (const [e, d] of Object.entries(t.$l ?? {})) out.push(['on', e, ['listener', e, decoders[d]]]);
  return out.sort(bySlot);
}
function jsTree(t, decoders) {
  if (t.type === 3) return ['t', t.$i, t.text];
  return ['e', t.$i, NS[t.ns], t.tag, jsSlots(t, decoders), t.kids.map(k => jsTree(k, decoders))];
}
function names(t, set = new Set()) {
  for (const m of [t.attrs, t.props, t.styles]) for (const n of m.keys()) set.add(n);
  for (const e of Object.keys(t.$l ?? {})) set.add(e);
  for (const k of t.kids) names(k, set);
  return set;
}

// The decoder's operations on the model DOM: the DOM's semantics, as the applier calls them.
function modelNode(json) {
  if (json[0] === 't') return { id: json[1], text: json[2], kids: [], parent: null };
  const slots = new Map(json[4].map(([kind, n, v]) => [slotKey(kind, n), v]));
  const node = { id: json[1], ns: json[2], tag: json[3], slots, kids: [], parent: null };
  for (const c of json[5]) { const k = modelNode(c); k.parent = node; node.kids.push(k); }
  return node;
}
function find(t, id) {
  if (t.id === id) return t;
  for (const k of t.kids) { const f = find(k, id); if (f) return f; }
  return null;
}
function applyModel(modelRoot, op) {
  const need = id => find(modelRoot, id) ?? (() => { throw new DomRefusal(`no node ${id}`); })();
  const detach = n => { if (n.parent) { n.parent.kids.splice(n.parent.kids.indexOf(n), 1); n.parent = null; } };
  const insert = (p, n, before) => {
    if (p.text !== undefined) throw new DomRefusal('a text node has no children');
    for (let a = p; a; a = a.parent) if (a === n) throw new DomRefusal('into its own subtree');
    let ref = before === null ? null : need(before);
    if (ref && ref.parent !== p) throw new DomRefusal('not a child');
    if (ref === n) ref = p.kids[p.kids.indexOf(n) + 1] ?? null;
    detach(n);
    p.kids.splice(ref ? p.kids.indexOf(ref) : p.kids.length, 0, n);
    n.parent = p;
  };
  switch (op[0]) {
  case 'insert': insert(need(op[1]), modelNode(op[2]), op[3]); break;
  case 'move': insert(need(op[1]), need(op[2]), op[3]); break;
  case 'remove': detach(need(op[1])); break;
  case 'clear': { const p = need(op[1]); for (const k of [...p.kids]) detach(k); break; }
  case 'text': { const n = need(op[1]); if (n.text === undefined) throw new DomRefusal('text on an element'); n.text = op[2]; break; }
  case 'attrs': {
    const n = need(op[1]);
    if (n.text !== undefined) throw new DomRefusal('attributes on a text node');
    for (const a of op[2]) {
      const key = slotKey(a[1], a[2]);
      if (a[0] === 'set') n.slots.set(key, a[3]); else n.slots.delete(key);
    }
    break;
  }
  default: fail('the model answered an unknown operation', op);
  }
}
function modelTree(t) {
  if (t.text !== undefined) return ['t', t.id, t.text];
  const slots = [...t.slots].map(([k, v]) => [...JSON.parse(k), v]).filter(([kind, , v]) => !(kind === 'prop' && (v[2] === '' || v[2] === false)))
    .sort(bySlot);
  return ['e', t.id, t.ns, t.tag, slots, t.kids.map(modelTree)];
}

// ---- The run ----
function chunks(bytes) {
  const out = [];
  let p = 0;
  while (p < bytes.length && out.length < 8) {
    const n = bytes[p] | (bytes[p + 1] ?? 0) << 8;
    p += 2;
    out.push(bytes.subarray(p, Math.min(bytes.length, p + n)));
    p += n;
  }
  return out;
}
const byteLevel = /^Lasm\.UI: (truncated patch|bad patch op|bad node kind|bad attribute op|no name|no value|no decoder|text that is not UTF-8)/;
const stateLevel = /^Lasm\.UI: (no node|node \d+ is not an element|number too large)/;

export async function run(bytes) {
  const frames = chunks(bytes);
  const { root, state, records } = recordingDom();
  const ui = createUi({ root, window: { addEventListener() {}, removeEventListener() {}, location: { href: 'https://app.test/' } } });
  const seen = [];
  let refused = false;
  try {
    for (const frame of frames) {
      try { ui.applyForTest(frame); }
      catch (error) {
        if (error instanceof DomRefusal || (error?.constructor === Error && stateLevel.test(error.message))) return; // no verdict
        if (error?.constructor === Error && byteLevel.test(error.message)) { refused = true; break; }
        fail(`the applier threw ${error?.constructor?.name}: ${error?.message}`, { frames, stack: error?.stack });
      }
      if (state.anomaly) return; // the DOM, not the bytes, decides: no verdict
      seen.push(jsTree(records.get(root), ui.decodersForTest()));
    }
    if (!model) return;
    const all = new Set();
    names(records.get(root), all);
    const lean = await model.ask({ frames: frames.slice(0, seen.length + (refused ? 1 : 0)).map(f => Buffer.from(f).toString('hex')), names: [...all] });
    if (lean.fault) fail(`the model failed: ${lean.fault}`, { frames });
    const answers = lean.frames;
    const modelRoot = { id: 0, ns: 'html', tag: 'div', slots: new Map(), kids: [], parent: null };
    for (let i = 0; i < seen.length; i++) {
      const a = answers[i];
      if (!a || a.error) fail(`frame ${i}: the decoder refuses what the applier applied`, { frames });
      try { for (const op of a.ok) applyModel(modelRoot, op); }
      catch (error) { if (error instanceof DomRefusal) return; throw error; }
      const expected = modelTree(modelRoot), got = seen[i];
      if (JSON.stringify(expected) !== JSON.stringify(got)) fail(`frame ${i}: the applier's DOM is not the decoder's`, { frames, applier: got, decoder: expected, ops: a.ok });
    }
    if (refused && !answers[seen.length]?.error) fail(`frame ${seen.length}: the applier refuses what the decoder reads`, { frames, decoder: answers[seen.length] });
  } finally { ui.unmount(); }
}

export function seeds() {
  const scenarios = JSON.parse(readFileSync(new URL('../../fixtures/ui/patches.json', import.meta.url), 'utf8'));
  const unhex = h => Uint8Array.from(h.match(/../g) ?? [], b => parseInt(b, 16));
  const chunk = data => [data.length & 255, data.length >> 8, ...data];
  const out = [];
  scenarios.forEach((s, i) => {
    if (i % 4 !== 1) return; // 30 of the 120 scenarios (ui-patch takes others)
    const bytes = s.frames.flatMap(f => chunk(unhex(f.patch)));
    if (bytes.length <= maxLength) out.push(Uint8Array.from(bytes));
  });
  // What the applier once read differently from the decoder: a listener with no decoder,
  // text that is not UTF-8, padding zeros past 2^53, a number above it.
  for (const frame of [[1, 0, 0, 1, 1, 1, 1, 98, 1, 5, 1, 1, 99, 9, 0], [1, 0, 0, 0, 1, 2, 0xc3, 0x28],
    [1, 0, 0, 0, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0, 1, 120], [7, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0]])
    out.push(Uint8Array.from(chunk(frame)));
  return out;
}
