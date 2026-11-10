// The Lasm.JS value codec's JavaScript half (src/node-js.mjs: the Writer and
// Reader every value between Lean and JavaScript crosses) against Lean's half
// (Wire in library/Lasm/JS/Core.lean), the code whose round trip is proved.
// Input: the first byte's low bit picks the direction.
//   0: the rest is wire bytes. JavaScript's reader and Lean's (Wire.decodeWith)
//      both refuse them, or both read the same value.
//   1: the rest is read field by field (test/fuzz/input.mjs) into a JavaScript
//      value (any kind the format carries, nested). JavaScript writes the bytes
//      Lean's Wire.encode writes for the same value, reads them back as the
//      value, and Lean reads them as JavaScript does.
// A refusal is a clean "Malformed Lasm.JS value" (or the missing-handle)
// failure; anything else thrown is a finding.
// Normalizations, which are JavaScript's own semantics: a string with a lone
// surrogate is written as UTF-8 writes it (U+FFFD), and an object read from
// Lean's fields keeps the last value of a repeated key, at its first position,
// with integer keys first. NaNs compare equal whatever their payload (Lean's
// Float.ofBits keeps none: the `d.wire` of the proposition), and generated
// values hold only JavaScript's own NaN.
// The comparison with Lean needs the model (node test/fuzz/support/js-wire-model.mjs;
// required in CI); without it the JavaScript round trip alone is checked.
//
// Proposition: Lasm.JS.Spec.decode_encode
//   ∀ (d : Data) (b : ByteArray) (ref : UInt32 → String → Except String Data),
//     d.Plain → Wire.encode d = .ok b → Wire.decodeWith id ref b = .ok d.wire
import { Input } from '../input.mjs';
import { start } from '../support/serverless-model.mjs';
import { modelDirectory } from '../support/js-wire-model.mjs';
import { createNodeJs } from '../../../src/node-js.mjs';

export const sources = ['src/node-js.mjs'];
export const maxLength = 2048;
// Tags 0–10, lengths at the u32 edges, UTF-8 edges, bigint texts and keys.
export const dictionary = [[0], [1], [2], [3], [4], [5], [6], [7], [8], [9], [10], [0, 0, 0, 0], [1, 0, 0, 0], [0xff, 0xff, 0xff, 0xff],
  [0, 0, 0, 0x80], [0, 0, 0xf8, 0x7f], [0, 0, 0, 0, 0, 0, 0xf8, 0x7f], [0, 0, 0, 0, 0, 0, 0, 0x80], [0xc3, 0xa9], [0xf0, 0x9f, 0x98, 0x80],
  [0xed, 0xa0, 0x80], [0xef, 0xbb, 0xbf], [0xc0, 0x80], [0xff], '-', '_', '1_000', '0x10', '+5', ' ', '__proto__', 'constructor', 'toString',
  '0', '4294967295', 'é', '\u{1F600}'];

let js, model;
export async function setup() {
  js = createNodeJs();
  const dir = modelDirectory();
  if (dir) model = start(dir);
}

const fail = (message, detail) => {
  let shown;
  try { shown = JSON.stringify(detail, (_, v) => typeof v === 'bigint' ? `${v}n` : v instanceof Uint8Array ? `<${Buffer.from(v).toString('hex')}>` : v, 1); }
  catch { shown = String(detail); }
  throw Object.assign(new Error(`${message}\n${shown?.slice(0, 2000)}`), { name: 'OracleFailure' });
};
const hex = bytes => Buffer.from(bytes).toString('hex');
const unhex = text => new Uint8Array(Buffer.from(text, 'hex'));
const utf8 = new TextDecoder('utf-8', { ignoreBOM: true });

/** A clean refusal of the reader: the failures the format defines. */
function refusal(error) {
  return error?.leanUserError === true && /^TypeError: (Malformed Lasm\.JS value|Invalid or released Lasm\.JS value handle)/.test(error.message);
}

/** The model's form of a JavaScript value (JsWireModel.lean). */
function toModel(v) {
  if (v === undefined) return ['u'];
  if (v === null) return ['n'];
  switch (typeof v) {
  case 'boolean': return ['b', v];
  case 'number': { const b = Buffer.alloc(8); b.writeDoubleLE(v); return ['f', b.toString('hex')]; }
  case 'string': return ['s', Buffer.from(v, 'utf8').toString('hex')];
  case 'bigint': return ['i', v.toString()];
  }
  if (v instanceof Uint8Array) return ['y', hex(v)];
  if (Array.isArray(v)) return ['a', v.map(toModel)];
  return ['o', Object.keys(v).map(k => [Buffer.from(k, 'utf8').toString('hex'), toModel(v[k])])];
}

/** A value the model read, as JavaScript holds it (an object takes its fields as JavaScript assigns them). */
function fromModel(m) {
  switch (m[0]) {
  case 'u': return undefined;
  case 'n': return null;
  case 'b': return m[1];
  case 'f': return Buffer.from(m[1], 'hex').readDoubleLE(0);
  case 's': return utf8.decode(unhex(m[1]));
  case 'i': return BigInt(m[1]);
  case 'y': return unhex(m[1]);
  case 'a': return m[1].map(fromModel);
  case 'o': {
    const o = {};
    for (const [k, v] of m[1]) {
      const key = utf8.decode(unhex(k));
      if (key === '__proto__') Object.defineProperty(o, key, { value: fromModel(v), writable: true, enumerable: true, configurable: true });
      else o[key] = fromModel(v);
    }
    return o;
  }
  default: fail('the model answered an unknown kind', m);
  }
}

/** The same value: numbers by Object.is (bits but NaN's payload), objects by own keys in order. */
function same(a, b) {
  if (typeof a !== typeof b) return false;
  if (typeof a === 'number') return Object.is(a, b);
  if (a === null || b === null || typeof a !== 'object') return a === b;
  if (a instanceof Uint8Array || b instanceof Uint8Array) return a instanceof Uint8Array && b instanceof Uint8Array && Buffer.from(a).equals(Buffer.from(b));
  if (Array.isArray(a) !== Array.isArray(b)) return false;
  if (Object.getPrototypeOf(a) !== Object.getPrototypeOf(b)) return false;
  const ka = Object.keys(a), kb = Object.keys(b);
  return ka.length === kb.length && ka.every((k, i) => k === kb[i] && same(a[k], b[k]));
}

/** JavaScript's reading of `bytes`: { value } or { refused }. */
function jsRead(bytes) {
  try { return { value: js.decode(bytes) }; }
  catch (error) {
    if (!refusal(error)) fail(`the reader threw ${error?.name}: ${error?.message}`, { bytes, stack: error?.stack });
    return { refused: error.message };
  }
}

async function compareRead(bytes) {
  const mine = jsRead(bytes);
  if (!model) return mine;
  const lean = await model.ask({ decode: hex(bytes) });
  if (lean.fault) fail(`the model failed: ${lean.fault}`, { bytes });
  if ('error' in lean !== 'refused' in mine) fail(lean.error ? `Lean refuses what JavaScript reads (${lean.error})` : `JavaScript refuses what Lean reads (${mine.refused})`,
    { bytes, javascript: mine.value, lean: lean.ok });
  if (lean.ok && !same(mine.value, fromModel(lean.ok))) fail('JavaScript and Lean read different values', { bytes, javascript: mine.value, lean: lean.ok });
  return mine;
}

const strings = ['', 'a', '__proto__', 'constructor', 'é', '\u{1F600}', '﻿bom', 'lone \ud800', '\udc00x', 'k'.repeat(40), 'é'.repeat(40), '0', '42', '-1'];
const numbers = [0, -0, 1, -1.5, NaN, Infinity, -Infinity, 2 ** 53, 5e-324, Number.MAX_VALUE];

/** A JavaScript value read from the input, at most `depth` levels deep. */
function value(input, depth) {
  switch (input.int(depth > 0 ? 10 : 8)) {
  case 0: return undefined;
  case 1: return null;
  case 2: return input.bool();
  case 3: {
    if (input.bool()) return input.pick(numbers);
    const b = Buffer.alloc(8);
    for (let i = 0; i < 8; i++) b[i] = input.byte();
    // One NaN: Lean's Float.ofBits keeps no NaN payload, so no Lean value carries one.
    const n = b.readDoubleLE(0);
    return Number.isNaN(n) ? NaN : n;
  }
  case 4: return input.bool() ? input.pick(strings) : input.text();
  case 5: {
    const digits = [...input.text()].filter(c => c >= '0' && c <= '9').join('') || '0';
    return (input.bool() ? -1n : 1n) * BigInt(digits);
  }
  case 6: return new Uint8Array(input.field());
  case 7: return input.text();
  case 8: return Array.from({ length: input.int(5) }, () => value(input, depth - 1));
  default: {
    const o = {};
    for (let n = input.int(5); n > 0; n--) {
      const key = input.bool() ? input.pick(strings) : input.text(), v = value(input, depth - 1);
      if (key === '__proto__') Object.defineProperty(o, key, { value: v, writable: true, enumerable: true, configurable: true });
      else o[key] = v;
    }
    return o;
  }
  }
}

/** A value as JavaScript's writer carries it: strings as UTF-8 writes them. */
function written(v) {
  if (typeof v === 'string') return v.toWellFormed();
  if (v === null || typeof v !== 'object' || v instanceof Uint8Array) return v;
  if (Array.isArray(v)) return v.map(written);
  const o = {};
  for (const k of Object.keys(v)) {
    const key = k.toWellFormed();
    if (key === '__proto__') Object.defineProperty(o, key, { value: written(v[k]), writable: true, enumerable: true, configurable: true });
    else o[key] = written(v[k]);
  }
  return o;
}

export async function run(bytes) {
  if ((bytes[0] ?? 0) & 1) {
    const v = value(new Input(bytes.subarray(1)), 5);
    let encoded;
    try { encoded = new Uint8Array(js.encode(v, 'data')); }
    catch (error) { fail(`the writer threw ${error?.name}: ${error?.message}`, { value: v }); }
    // decode_encode, of JavaScript's own halves: what it writes it reads back.
    const back = jsRead(encoded);
    if ('refused' in back) fail(`JavaScript refuses what it wrote: ${back.refused}`, { value: v, encoded });
    if (!same(back.value, written(v))) fail('JavaScript reads back another value than it wrote', { value: v, back: back.value, encoded });
    if (model) {
      const lean = await model.ask({ encode: toModel(v) });
      if (lean.fault || lean.error) fail(`Lean refuses to write the value: ${lean.fault ?? lean.error}`, { value: v });
      if (lean.ok !== hex(encoded)) fail('JavaScript and Lean write different bytes', { value: v, javascript: hex(encoded), lean: lean.ok });
      await compareRead(encoded);
    }
  } else await compareRead(bytes.subarray(1));
}

export function seeds() {
  const writer = createNodeJs();
  const values = [undefined, null, true, 1.5, -0, NaN, '', 'é\u{1F600}', 12345678901234567890n, -7n, new Uint8Array([1, 2, 3]),
    [1, [2, [3]], 'x'], { a: 1, b: { c: [null] } }, { 1: 'one', b: 2, 0: 'zero' }, 'k'.repeat(70), { ['k'.repeat(40)]: true }];
  const out = values.map(v => Uint8Array.from([0, ...writer.encode(v, 'data')]));
  // Malformed: truncated, a bad tag, trailing bytes, bigint texts BigInt alone would take, invalid UTF-8, a reference.
  const str = (tag, raw) => [tag, raw.length, 0, 0, 0, ...raw];
  const ascii = s => [...Buffer.from(s)];
  for (const bad of [[5, 9, 0, 0, 0, 97], [11], [1, 1], [8, 2, 0, 0, 0, 1], str(6, []), str(6, ascii('+5')), str(6, ascii(' 1')),
    str(6, ascii('0x10')), str(6, ascii('1_000')), str(6, ascii('1__0')), str(5, [0x61, 0xff]), str(5, [0xed, 0xa0, 0x80]),
    [9, 1, 0, 0, 0, ...str(0, [0xc3]).slice(1), 1], [10, 1, 0, 0, 0, 0, 0, 0, 0], [9, 2, 0, 0, 0, ...str(0, ascii('a')).slice(1), 1, ...str(0, ascii('a')).slice(1), 2],
    [9, 1, 0, 0, 0, ...str(0, ascii('__proto__')).slice(1), 9, 1, 0, 0, 0, ...str(0, ascii('a')).slice(1), 3]])
    out.push(Uint8Array.from([0, ...bad]));
  // Values built from fields: kinds 0–9 at each level.
  for (let k = 0; k < 10; k++) out.push(Uint8Array.from([1, k, 1, 0x61, 0, 2, 3, 4, 0, 5, 6]));
  return out;
}
