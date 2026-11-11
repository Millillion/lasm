// The Lasm.UI patch decoder (src/lasm-modules/ui-dom.mjs, the browser side of
// library/Lasm/UI/Encode.lean) against happy-dom. Input: a flags byte, then
// length-prefixed chunks (two bytes, little-endian): with flag 1 the first is
// server-rendered HTML to hydrate, the rest are patch frames applied in turn.
// Oracle: each frame applies, or fails with a clean error (a "Lasm.UI: …"
// Error, or a DOMException: the DOM refused a name or a move); never a TypeError or
// RangeError, never a hang, and never an attribute named or valued
// "undefined" that the input did not spell (a reference past the name table).
// That last check is the proposition below, for the name `undefined`, of the
// JavaScript decoder; the ui-decode target checks that decoder against the
// Lean reference decoder (Lasm.UI.Decode) the proposition is about.
// Proposition: Lasm.UI.Candidates.interned_from_table_or_bytes
//   ∀ (table : List String) (bs : Decode.Bytes), ∀ x ∈ Decode.intern table bs,
//     (x.1 ∈ table ∨ x.1.toUTF8.data.toList <:+: bs) ∧ (x.2.1 = table ∨ x.2.1 = table ++ [x.1])
import { readFileSync } from 'node:fs';
import { Window } from 'happy-dom';
import { createUi } from '../../../src/lasm-modules/ui-dom.mjs';

export const sources = ['src/lasm-modules/ui-dom.mjs'];
export const maxLength = 4096;
// Patch ops 1–7, node kinds 0–3, attribute ops, and varint edges.
export const dictionary = [[1], [2], [3], [4], [5], [6], [7], [0x80], [0xff, 0xff], [0x80, 0x80, 0x80, 0x80, 0x80],
  [1, 0, 0, 1, 1, 0, 3, 100, 105, 118, 0, 0], [1, 0, 0, 0, 1, 0, 1, 120], [0, 0, 5, 99, 108, 97, 115, 115], [5, 0, 5, 99, 108, 105, 99, 107, 0],
  [7, 0, 1, 1, 6, 116, 97, 114, 103, 101, 116], [2, 3, 0, 0, 3, 115, 118, 103], 'id', 'class', 'style', 'click', 'input', 'value', 'checked',
  '__proto__', 'constructor', '$i', '$l', 'innerHTML', 'textContent'];
const window = new Window({ url: 'https://app.test/' });
const document = window.document;
// Browsers give MathML elements a style (MathMLElement); happy-dom makes them
// plain Elements without one, which the decoder's style ops would trip on.
if (!('style' in window.Element.prototype))
  Object.defineProperty(window.Element.prototype, 'style', { configurable: true, get() { return this.__style ??= document.createElement('span').style; } });

function chunks(bytes) {
  const out = [];
  let p = 1;
  while (p < bytes.length && out.length < 8) {
    const n = bytes[p] | (bytes[p + 1] ?? 0) << 8;
    p += 2;
    out.push(bytes.subarray(p, Math.min(bytes.length, p + n)));
    p += n;
  }
  return out;
}

const spelled = bytes => Buffer.from(bytes).includes('undefined');

export function run(bytes) {
  const root = document.createElement('div');
  document.body.replaceChildren(root);
  const parts = chunks(bytes);
  const hydrate = (bytes[0] & 1) === 1;
  if (hydrate) root.innerHTML = new TextDecoder().decode(parts.shift() ?? new Uint8Array());
  const ui = createUi({ root, hydrate, window });
  try {
    for (const frame of parts) {
      try { ui.applyForTest(frame); }
      catch (error) {
        if (error?.constructor === Error && error.message.startsWith('Lasm.UI: ')) return;
        // The DOM refusing an operation (an invalid name, a node moved into itself) leaves it consistent.
        if (error?.constructor?.name === 'DOMException') return;
        throw Object.assign(new Error(`the decoder threw ${error?.constructor?.name}: ${error?.message}`), { name: 'OracleFailure', cause: error });
      }
    }
    if (!spelled(bytes)) for (const el of root.querySelectorAll('*'))
      for (const a of el.attributes) if (a.name === 'undefined' || a.value === 'undefined')
        throw Object.assign(new Error(`attribute ${a.name}="${a.value}" from a reference past the table`), { name: 'OracleFailure' });
  } finally { ui.unmount(); }
}

export function seeds() {
  const scenarios = JSON.parse(readFileSync(new URL('../../fixtures/ui/patches.json', import.meta.url), 'utf8'));
  const unhex = h => Uint8Array.from(h.match(/../g) ?? [], b => parseInt(b, 16));
  const chunk = data => [data.length & 255, data.length >> 8, ...data];
  const out = [];
  scenarios.forEach((s, i) => {
    if (i % 4) return; // 30 of the 120 scenarios
    const frames = s.frames.map(f => unhex(f.patch));
    const hydrate = i % 8 === 0;
    const parts = hydrate ? [chunk(new TextEncoder().encode(s.ssr))] : [];
    for (const f of frames) parts.push(chunk(f));
    const bytes = [hydrate ? 1 : 0, ...parts.flat()];
    if (bytes.length <= maxLength) out.push(Uint8Array.from(bytes));
  });
  return out;
}
