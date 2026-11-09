// Python semantics reproduced for the Node link driver (src/link-driver/python.mjs):
// byte equality with emcc's output depends on each of them.
import test from 'node:test';
import assert from 'node:assert/strict';
import { pythonJsonString, pythonJsonDumps, comparePythonStrings, pythonSorted, pythonEquals, truthy, universalNewlines,
  isIdentifier, pythonStrip, pythonSplit, dedupList } from '../src/link-driver/python.mjs';
import { forAll } from './helpers/property.mjs';

test('json.dumps string escaping with ensure_ascii', () => {
  assert.equal(pythonJsonString(''), '""');
  assert.equal(pythonJsonString('a"b\\c'), '"a\\"b\\\\c"');
  assert.equal(pythonJsonString('\n\r\t\b\f'), '"\\n\\r\\t\\b\\f"');
  assert.equal(pythonJsonString('\x00\x1f'), '"\\u0000\\u001f"');
  assert.equal(pythonJsonString(' ~'), '" ~"');
  assert.equal(pythonJsonString('\x7f\x80é'), '"\\u007f\\u0080\\u00e9"');
  assert.equal(pythonJsonString(' ꯍ'), '"\\u2028\\uabcd"');
  assert.equal(pythonJsonString('😀'), '"\\ud83d\\ude00"');
  assert.equal(pythonJsonString('/'), '"/"');
});

const unicode = ['a', 'Z', ' ', '~', '"', '\\', '\n', '\r', '\t', '\b', '\f', '\x00', '\x1f', '\x7f', 'é', ' ', '￿', '😀', '𝔸'];
// ∀ s, JSON.parse (pythonJsonString s) = s ∧ ∀ c ∈ pythonJsonString s, ' ' ≤ c ≤ '~'
test('escaped strings are printable ASCII JSON that decodes to the input', () => {
  forAll(g => g.string(unicode, 0, 16), s => {
    const encoded = pythonJsonString(s);
    assert.match(encoded, /^[ -~]*$/);
    assert.equal(JSON.parse(encoded), s);
  });
});

test('json.dumps layouts: compact separators, indentation, sorted keys, empty containers', () => {
  assert.equal(pythonJsonDumps(null), 'null');
  assert.equal(pythonJsonDumps(true), 'true');
  assert.equal(pythonJsonDumps(false), 'false');
  assert.equal(pythonJsonDumps(-12), '-12');
  assert.equal(pythonJsonDumps(0), '0');
  assert.equal(pythonJsonDumps([]), '[]');
  assert.equal(pythonJsonDumps({}), '{}');
  assert.equal(pythonJsonDumps([], { indent: 2 }), '[]');
  assert.equal(pythonJsonDumps({}, { indent: 2 }), '{}');
  assert.equal(pythonJsonDumps({ b: [1, 2], a: { c: null } }), '{"b": [1, 2], "a": {"c": null}}');
  assert.equal(pythonJsonDumps({ b: [1, 2], a: { c: null } }, { sortKeys: true }), '{"a": {"c": null}, "b": [1, 2]}');
  assert.equal(pythonJsonDumps({ b: [1, [true]], a: {} }, { indent: 2 }),
    '{\n  "b": [\n    1,\n    [\n      true\n    ]\n  ],\n  "a": {}\n}');
  assert.equal(pythonJsonDumps([1, 2], { indent: 0 }), '[\n1,\n2\n]');
  assert.equal(pythonJsonDumps({ 'é': 'ü' }), '{"\\u00e9": "\\u00fc"}');
  assert.equal(pythonJsonDumps({ '￿': 1, '😀': 2 }, { sortKeys: true }), '{"\\uffff": 1, "\\ud83d\\ude00": 2}');
  for (const value of [0.5, NaN, Infinity, 2 ** 53]) assert.throws(() => pythonJsonDumps([value]), /Unsupported number in Python JSON output/);
  for (const value of [undefined, () => {}, 1n, Symbol('s')]) assert.throws(() => pythonJsonDumps({ x: value }), /Unsupported value in Python JSON output/);
});

const jsonValue = (g, depth = 0) => {
  const kind = g.int(0, depth > 2 ? 3 : 5);
  if (kind === 0) return null;
  if (kind === 1) return g.next() < 0.5;
  if (kind === 2) return g.int(-1000, 1000);
  if (kind === 3) return g.string(unicode, 0, 6);
  if (kind === 4) return g.array(g.int(0, 3), () => jsonValue(g, depth + 1));
  return Object.fromEntries(g.array(g.int(0, 3), () => [g.string(unicode, 0, 4), jsonValue(g, depth + 1)]));
};
// ∀ v, JSON.parse (pythonJsonDumps v {indent, sortKeys}) = v
test('every layout is JSON for the same value', () => {
  forAll(g => ({ value: jsonValue(g), indent: g.pick([null, 0, 1, 2, 4]), sortKeys: g.next() < 0.5 }), ({ value, indent, sortKeys }) => {
    const text = pythonJsonDumps(value, { indent, sortKeys });
    assert.deepEqual(JSON.parse(text), value);
    if (indent === null) assert.doesNotMatch(text, /\n/);
  });
});

test('strings sort by code point, as Python sorts str', () => {
  assert.ok(comparePythonStrings('￿', '😀') < 0, 'BMP before astral, unlike UTF-16 order');
  assert.ok(comparePythonStrings('😀', '￿') > 0);
  assert.equal(comparePythonStrings('abc', 'abc'), 0);
  assert.ok(comparePythonStrings('ab', 'abc') < 0);
  assert.ok(comparePythonStrings('abc', 'ab') > 0);
  assert.ok(comparePythonStrings('', 'a') < 0);
  assert.ok(comparePythonStrings('b', 'a') > 0 && comparePythonStrings('a', 'b') < 0);
  assert.deepEqual(pythonSorted(['😀', '￿', 'b', 'a', 'ab']), ['a', 'ab', 'b', '￿', '😀']);
  const input = ['b', 'a']; pythonSorted(input); assert.deepEqual(input, ['b', 'a'], 'sorted() does not change its argument');
});

// ∀ a b, sign (comparePythonStrings a b) = sign (compare (codePoints a) (codePoints b))
test('the order is the lexicographic order of code points', () => {
  const lexicographic = (a, b) => {
    const x = [...a].map(c => c.codePointAt(0)), y = [...b].map(c => c.codePointAt(0));
    for (let i = 0; i < Math.min(x.length, y.length); i++) if (x[i] !== y[i]) return Math.sign(x[i] - y[i]);
    return Math.sign(x.length - y.length);
  };
  forAll(g => [g.string(unicode, 0, 5), g.string(unicode, 0, 5)], ([a, b]) => {
    assert.equal(Math.sign(comparePythonStrings(a, b)), lexicographic(a, b));
    assert.equal(Math.sign(comparePythonStrings(a, b)), -Math.sign(comparePythonStrings(b, a)) || 0);
  });
});

test('Python equality: booleans equal 0 and 1; containers compare element by element', () => {
  assert.ok(pythonEquals(true, 1) && pythonEquals(false, 0) && pythonEquals(1, true));
  assert.ok(!pythonEquals(true, 2) && !pythonEquals('1', 1) && !pythonEquals(null, 0) && !pythonEquals(null, false));
  assert.ok(pythonEquals(null, null) && pythonEquals('a', 'a'));
  assert.ok(pythonEquals([1, [true]], [true, [1]]));
  assert.ok(!pythonEquals([1], [1, 2]) && !pythonEquals([1, 2], [1]) && !pythonEquals([1], [2]));
  assert.ok(!pythonEquals([1], { 0: 1 }) && !pythonEquals({ 0: 1 }, [1]) && !pythonEquals([], null));
  assert.ok(pythonEquals({ a: 1, b: [false] }, { b: [0], a: true }));
  assert.ok(!pythonEquals({ a: 1 }, { a: 1, b: 2 }) && !pythonEquals({ a: 1, b: 2 }, { a: 1 }));
  assert.ok(!pythonEquals({ a: 1 }, { b: 1 }) && !pythonEquals({ a: undefined }, { b: undefined }));
  assert.ok(!pythonEquals({ a: 1 }, { a: 2 }));
  assert.ok(!pythonEquals({}, null) && !pythonEquals(null, {}));
});

test('Python truthiness of setting values', () => {
  for (const value of ['', [], {}, 0, false, null, undefined]) assert.equal(truthy(value), false, JSON.stringify(value));
  for (const value of ['0', [0], { a: 0 }, 1, -1, true, 'x']) assert.equal(truthy(value), true, JSON.stringify(value));
});

test('universal newlines, identifiers, strip and split', () => {
  assert.equal(universalNewlines('a\r\nb\rc\nd\r\r\n'), 'a\nb\nc\nd\n\n');
  for (const name of ['a', '_', '$', '$x', 'a1', 'é', '_9', 'ab$c']) assert.equal(isIdentifier(name), true, name);
  for (const name of ['', '1a', 'a-b', 'a b', '.', '9']) assert.equal(isIdentifier(name), false, name);
  assert.equal(pythonStrip(' \t\n\v\f\r\x1c\x1d\x1e\x1f\x85\xa0       　 a b 　'), 'a b');
  assert.equal(pythonStrip('​a​'), '​a​', 'zero-width space is not whitespace to Python');
  assert.equal(pythonStrip('\x1b x \x21'), '\x1b x \x21');
  assert.equal(pythonStrip(''), '');
  assert.deepEqual(pythonSplit('  a　b\t\nc  '), ['a', 'b', 'c']);
  assert.deepEqual(pythonSplit(''), []);
  assert.deepEqual(pythonSplit('one'), ['one']);
  assert.deepEqual(dedupList(['b', 'a', 'b', 'c', 'a']), ['b', 'a', 'c']);
});
