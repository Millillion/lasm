// Differential testing (docs/TESTING.md#differential-testing): a generator of
// random, well-typed, terminating Lean 4.35 programs.
//
// A program is a list of independent *cases*. Each case is a typed expression
// tree (pure computation) or a statement list (do-notation with StateT/ExceptT,
// IO refs, tasks, files), rendered as one `def caseN : IO Unit` that prints one
// line per observed value, prefixed with its case id. Every case draws from its
// own PRNG stream (seed, case index), so removing cases while shrinking never
// changes the others, and a (seed, index) pair names a case forever.
//
// Termination and size are guaranteed by construction: no unbounded recursion
// (the preamble's recursive functions are structural, well-founded or fuelled),
// exponents, shifts, list lengths and repetition counts are reduced modulo small
// bounds, and the expression depth is capped.
//
// Literals are wrapped in `bb` (a `@[noinline]` identity) at random, so the Lean
// compiler cannot fold the arithmetic away at compile time: both the folded and
// the runtime paths get exercised.

// ---------- seeded PRNG (sfc32, seeded through splitmix32) ----------
function splitmix32(a) {
  return () => {
    a |= 0; a = (a + 0x9e3779b9) | 0;
    let t = a ^ (a >>> 16); t = Math.imul(t, 0x21f0aaad);
    t ^= t >>> 15; t = Math.imul(t, 0x735a2d97);
    return ((t ^= t >>> 15) >>> 0);
  };
}
export function rng(...seeds) {
  let h = 0x811c9dc5;
  for (const s of seeds) for (const ch of String(s) + '\u0000') h = Math.imul(h ^ ch.charCodeAt(0), 0x01000193);
  const sm = splitmix32(h);
  let a = sm(), b = sm(), c = sm(), d = sm();
  const next = () => {
    a >>>= 0; b >>>= 0; c >>>= 0; d >>>= 0;
    let t = (a + b) | 0; a = b ^ (b >>> 9); b = (c + (c << 3)) | 0;
    c = (c << 21) | (c >>> 11); d = (d + 1) | 0; t = (t + d) | 0; c = (c + t) | 0;
    return (t >>> 0) / 4294967296;
  };
  const r = {
    next,
    int: (lo, hi) => lo + Math.floor(next() * (hi - lo + 1)),
    pick: xs => xs[Math.floor(next() * xs.length)],
    chance: p => next() < p,
    weighted: entries => {
      const total = entries.reduce((s, e) => s + e.w, 0);
      let x = next() * total;
      for (const e of entries) { x -= e.w; if (x < 0) return e; }
      return entries[entries.length - 1];
    },
  };
  return r;
}

// ---------- literals ----------
const NAT_EDGES = ['0', '1', '2', '7', '10', '255', '256', '65535', '65536', '2147483647', '2147483648',
  '4294967295', '4294967296', '9223372036854775807', '9223372036854775808', '18446744073709551615',
  '18446744073709551616', '340282366920938463463374607431768211456', '1000000007'];
const bigDecimal = r => { let s = String(r.int(1, 9)); const n = r.int(1, 60); for (let i = 0; i < n; i++) s += r.int(0, 9); return s; };
function natLit(r) {
  const k = r.next();
  if (k < 0.45) return String(r.int(0, 100));
  if (k < 0.8) return r.pick(NAT_EDGES);
  return bigDecimal(r);
}
const UBITS = { UInt8: 8, UInt16: 16, UInt32: 32, UInt64: 64 };
function uintLit(r, t) {
  const bits = UBITS[t], max = (1n << BigInt(bits)) - 1n;
  const k = r.next();
  if (k < 0.4) return String(r.int(0, 20));
  if (k < 0.7) return String(r.pick([max, max - 1n, max >> 1n, (max >> 1n) + 1n, 1n << BigInt(bits / 2)]));
  return String(BigInt(Math.floor(r.next() * 2 ** 30)) * BigInt(Math.floor(r.next() * 2 ** 30)) % (max + 1n));
}
const FLOAT_LITS = ['0.0', '1.0', '0.1', '0.5', '2.5', '3.14159', '1e300', '1e-300', '5e-324', '1e16', '9007199254740993.0',
  '123456.789', '2.0', '100.0', '1e21', '0.3'];
// Code points: ASCII, Latin-1, combining marks, CJK, astral (emoji), and a few edge values.
const CHARS = ['a', 'Z', '0', ' ', '_', 'é', 'ß', 'İ', 'Σ', '́', '中', '\u{1F600}', '\u{1F30D}',
  'ÿ', 'Ā', '\u{10FFFF}', '​', '\t', '\n', '"', '\\', ' ', 'İ', 'ǅ', 'ﬃ'];
function stringLit(r, quotable = false) {
  const n = r.pick([0, 1, 2, 3, 5, 8, 13]);
  let s = '';
  for (let i = 0; i < n; i++) s += r.chance(0.5) ? r.pick('abcxyz -,.ABC123'.split('')) : r.pick(CHARS);
  if (!quotable) s = s.replace(/\u{10FFFF}/gu, '?');
  return s;
}
export function leanString(s) {
  let out = '"';
  for (const ch of s) {
    const cp = ch.codePointAt(0);
    if (ch === '"') out += '\\"';
    else if (ch === '\\') out += '\\\\';
    else if (ch === '\n') out += '\\n';
    else if (ch === '\t') out += '\\t';
    else if (cp < 0x20 || cp === 0x7f) out += '\\x' + cp.toString(16).padStart(2, '0');
    else if ((cp >= 0x80 && cp < 0xa0) || cp === 0x200b || cp === 0xa0 || cp === 0x301) out += '\\u' + cp.toString(16).padStart(4, '0');
    else out += ch;
  }
  return out + '"';
}
function leanChar(ch) {
  const cp = ch.codePointAt(0);
  if (cp === 0x10ffff) return `(Char.ofNat ${cp})`;
  const s = leanString(ch);
  return "'" + s.slice(1, -1).replace(/\\"/g, '"').replace(/'/g, "\\'") + "'";
}
// U+10FFFF (a noncharacter) goes through Char.ofNat rather than the source text.
function stringExpr(s) {
  if ([...s].some(ch => ch.codePointAt(0) === 0x10ffff)) return `(String.ofList [${[...s].map(leanChar).join(', ')}])`;
  return leanString(s);
}

// ---------- types and operations ----------
// An op: { t: result type, args: [arg types], r: (...rendered) => string, w: weight,
//          lit?: r => string (a leaf), bind?: { t, body } (a lambda with one variable),
//          inexact?: true (libm-dependent result: rounded by `approx`, never used for bits) }
export const TYPES = ['Nat', 'Int', 'UInt8', 'UInt16', 'UInt32', 'UInt64', 'Bool', 'Float', 'String', 'Char',
  'ListNat', 'ArrayInt', 'OptNat', 'Tree', 'Pt', 'ListString'];
export const LEAN_TYPE = { ListNat: 'List Nat', ArrayInt: 'Array Int', OptNat: 'Option Nat', ListString: 'List String' };
const lt = t => LEAN_TYPE[t] ?? t;

const ops = [];
const op = (t, args, r, w = 1, extra = {}) => ops.push({ t, args, r, w, ...extra, id: ops.length });
const lit = (t, gen, w = 3) => ops.push({ t, args: [], lit: gen, r: null, w, id: ops.length });

// Nat
lit('Nat', r => natLit(r));
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} + ${b})`, 3);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} * ${b})`, 2);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} - ${b})`, 2);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} / ${b})`, 2);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} % ${b})`, 2);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} ^ (${b} % 70))`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} <<< (${b} % 300))`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} >>> (${b} % 300))`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} &&& ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} ||| ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(${a} ^^^ ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(Nat.gcd ${a} ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(Nat.lcm ${a} ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(min ${a} ${b})`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(max ${a} ${b})`, 1);
op('Nat', ['Nat'], a => `(Nat.log2 ${a})`, 1);
op('Nat', ['Nat'], a => `(Nat.sqrt ${a})`, 1);
op('Nat', ['Nat'], a => `(Nat.succ ${a})`, 1);
op('Nat', ['Nat'], a => `(Nat.pred ${a})`, 1);
op('Nat', ['Nat'], a => `(fibL (${a} % 200))`, 1);
op('Nat', ['Nat'], a => `(digitSum ${a})`, 1);
op('Nat', ['Nat'], a => `(collatz (${a} % 10000) 1000)`, 1);
op('Nat', ['Nat', 'Nat'], (a, b) => `(ack (${a} % 3) (${b} % 6))`, 1);
op('Nat', ['String'], a => `${a}.length`, 2);
op('Nat', ['String'], a => `${a}.utf8ByteSize`, 1);
op('Nat', ['String'], a => `(${a}.toNat?.getD 7)`, 1);
op('Nat', ['ListNat'], a => `${a}.length`, 1);
op('Nat', ['ListNat'], a => `${a}.sum`, 2);
op('Nat', ['ListNat'], a => `(${a}.foldl (fun (acc : Nat) (x : Nat) => acc * 31 + x) 17)`, 1);
op('Nat', ['ArrayInt'], a => `${a}.size`, 1);
op('Nat', ['ArrayInt'], a => `(${a}.foldl (fun (acc : Nat) (x : Int) => acc + x.natAbs) 0)`, 1);
op('Nat', ['OptNat'], a => `(${a}.getD 42)`, 2);
op('Nat', ['Int'], a => `${a}.toNat`, 1);
op('Nat', ['Int'], a => `${a}.natAbs`, 1);
op('Nat', ['Char'], a => `${a}.toNat`, 1);
op('Nat', ['Tree'], a => `${a}.size`, 1);
op('Nat', ['Tree'], a => `${a}.sum`, 1);
op('Nat', ['Tree'], a => `${a}.depth`, 1);
op('Nat', ['Pt'], a => `${a}.tag.length`, 1);
op('Nat', ['UInt8'], a => `${a}.toNat`, 1);
op('Nat', ['UInt16'], a => `${a}.toNat`, 1);
op('Nat', ['UInt32'], a => `${a}.toNat`, 1);
op('Nat', ['UInt64'], a => `${a}.toNat`, 1);
op('Nat', ['Float'], a => `${a}.toUInt64.toNat`, 1);
op('Nat', ['Bool', 'Nat', 'Nat'], (c, a, b) => `(if ${c} then ${a} else ${b})`, 1);
op('Nat', ['ListString'], a => `${a}.length`, 1);
op('Nat', ['String'], a => `(hash ${a}).toNat`, 1);
op('Nat', ['Tree'], a => `(hash ${a}).toNat`, 1);
op('Nat', ['Pt'], a => `(hash ${a}).toNat`, 1);
op('Nat', ['ListNat'], a => `(hmSum ${a})`, 1);
op('Nat', ['ListString'], a => `(wordCount ${a})`, 1);
op('Nat', ['Nat'], a => `(${a}).repr.length`, 1);
op('Nat', ['Nat'], a => `(let y := ${a}; y * y + y)`, 1);

// Int
lit('Int', r => { const n = natLit(r); return r.chance(0.5) ? `-${n}` : n; });
op('Int', ['Int', 'Int'], (a, b) => `(${a} + ${b})`, 3);
op('Int', ['Int', 'Int'], (a, b) => `(${a} - ${b})`, 3);
op('Int', ['Int', 'Int'], (a, b) => `(${a} * ${b})`, 2);
op('Int', ['Int', 'Int'], (a, b) => `(${a} / ${b})`, 2);
op('Int', ['Int', 'Int'], (a, b) => `(${a} % ${b})`, 2);
op('Int', ['Int', 'Int'], (a, b) => `(Int.tdiv ${a} ${b})`, 1);
op('Int', ['Int', 'Int'], (a, b) => `(Int.tmod ${a} ${b})`, 1);
op('Int', ['Int', 'Int'], (a, b) => `(Int.fdiv ${a} ${b})`, 1);
op('Int', ['Int', 'Int'], (a, b) => `(Int.fmod ${a} ${b})`, 1);
op('Int', ['Int', 'Nat'], (a, b) => `(Int.bmod ${a} (${b} % 1000 + 1))`, 1);
op('Int', ['Int', 'Nat'], (a, b) => `(${a} ^ (${b} % 40))`, 1);
op('Int', ['Int', 'Nat'], (a, b) => `(${a} >>> (${b} % 200))`, 1);
op('Int', ['Int'], a => `(-(${a}))`, 2);
op('Int', ['Int', 'Int'], (a, b) => `(min ${a} ${b})`, 1);
op('Int', ['Int', 'Int'], (a, b) => `(max ${a} ${b})`, 1);
op('Int', ['Int'], a => `(Int.sign ${a})`, 1);
op('Int', ['Nat'], a => `(Int.ofNat ${a})`, 2);
op('Int', ['Nat', 'Nat'], (a, b) => `((${a} : Int) - (${b} : Int))`, 1);
op('Int', ['Float'], a => `(Int.ofNat ${a}.toUInt32.toNat - 7)`, 1);
op('Int', ['ArrayInt'], a => `(${a}.foldl (fun (acc x : Int) => acc + x) 0)`, 1);
op('Int', ['ArrayInt'], a => `(${a}.getD 2 (-1))`, 1);
op('Int', ['Pt'], a => `(${a}.x : Int)`, 1);
op('Int', ['Pt'], a => `((${a}.x * ${a}.y : Int))`, 1);
op('Int', ['Int'], a => `(Int.toNat ${a} : Int)`, 1);

// Fixed-width unsigned integers
for (const t of ['UInt8', 'UInt16', 'UInt32', 'UInt64']) {
  lit(t, r => uintLit(r, t));
  op(t, [t, t], (a, b) => `(${a} + ${b})`, 3);
  op(t, [t, t], (a, b) => `(${a} - ${b})`, 3);
  op(t, [t, t], (a, b) => `(${a} * ${b})`, 2);
  op(t, [t, t], (a, b) => `(${a} / ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} % ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} &&& ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} ||| ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} ^^^ ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} <<< ${b})`, 1);
  op(t, [t, t], (a, b) => `(${a} >>> ${b})`, 1);
  op(t, [t], a => `(~~~(${a}))`, 1);
  op(t, [t], a => `(-(${a}))`, 1);
  op(t, [t], a => `${a}.log2`, 1);
  op(t, ['Nat'], a => `(${t}.ofNat ${a})`, 2);
  op(t, ['Float'], a => `${a}.to${t}`, 1);
  op(t, ['Bool', t, t], (c, a, b) => `(if ${c} then ${a} else ${b})`, 1);
  for (const u of ['UInt8', 'UInt16', 'UInt32', 'UInt64']) if (u !== t) op(t, [u], a => `${a}.to${t}`, 1);
}
op('UInt64', ['String'], a => `(hash ${a})`, 1);
op('UInt64', ['Float'], a => `${a}.toBits`, 2, { exactArgs: true });
op('UInt64', ['UInt64', 'UInt64'], (a, b) => `(mixHash ${a} ${b})`, 1);
op('UInt32', ['Char'], a => `${a}.val`, 1);

// Bool
lit('Bool', r => r.pick(['true', 'false']), 1);
for (const t of ['Nat', 'Int', 'UInt8', 'UInt64', 'String', 'Char']) {
  op('Bool', [t, t], (a, b) => `(${a} == ${b})`, 1);
  op('Bool', [t, t], (a, b) => `(decide (${a} < ${b}))`, 1);
  op('Bool', [t, t], (a, b) => `(decide (${a} ≤ ${b}))`, 1);
}
op('Bool', ['Float', 'Float'], (a, b) => `(decide (${a} < ${b}))`, 1);
op('Bool', ['Float', 'Float'], (a, b) => `(${a} == ${b})`, 1);
op('Bool', ['Float'], a => `${a}.isNaN`, 1);
op('Bool', ['Float'], a => `${a}.isInf`, 1);
op('Bool', ['Float'], a => `${a}.isFinite`, 1);
op('Bool', ['Bool', 'Bool'], (a, b) => `(${a} && ${b})`, 1);
op('Bool', ['Bool', 'Bool'], (a, b) => `(${a} || ${b})`, 1);
op('Bool', ['Bool'], a => `(!(${a}))`, 1);
op('Bool', ['String', 'String'], (a, b) => `(${a}.startsWith ${b})`, 1);
op('Bool', ['String', 'String'], (a, b) => `(${a}.endsWith ${b})`, 1);
op('Bool', ['String'], a => `${a}.isEmpty`, 1);
op('Bool', ['String'], a => `(${a}.any Char.isAlpha)`, 1);
op('Bool', ['ListNat', 'Nat'], (a, b) => `(${a}.contains ${b})`, 1);
op('Bool', ['Tree', 'Tree'], (a, b) => `(${a} == ${b})`, 1);
op('Bool', ['Pt', 'Pt'], (a, b) => `(${a} == ${b})`, 1);
op('Bool', ['Nat'], a => `(isEven (${a} % 500))`, 1);
op('Bool', ['Char'], a => `${a}.isAlpha`, 1);
op('Bool', ['Char'], a => `${a}.isWhitespace`, 1);
op('Bool', ['Char'], a => `${a}.isUpper`, 1);

// Float (arithmetic and sqrt are IEEE-exact; the libm functions are marked inexact)
lit('Float', r => r.chance(0.15) ? r.pick(['(0.0/0.0)', '(1.0/0.0)', '(-1.0/0.0)', '(-0.0)']) : (r.chance(0.3) ? '-' : '') + r.pick(FLOAT_LITS));
op('Float', ['Float', 'Float'], (a, b) => `(${a} + ${b})`, 3);
op('Float', ['Float', 'Float'], (a, b) => `(${a} - ${b})`, 2);
op('Float', ['Float', 'Float'], (a, b) => `(${a} * ${b})`, 2);
op('Float', ['Float', 'Float'], (a, b) => `(${a} / ${b})`, 2);
op('Float', ['Float'], a => `(-(${a}))`, 1);
op('Float', ['Float'], a => `${a}.sqrt`, 1);
op('Float', ['Float'], a => `${a}.abs`, 1);
op('Float', ['Float'], a => `${a}.floor`, 1);
op('Float', ['Float'], a => `${a}.ceil`, 1);
op('Float', ['Float'], a => `${a}.round`, 1);
op('Float', ['Nat'], a => `(Float.ofNat ${a})`, 2);
op('Float', ['Int'], a => `(Float.ofInt ${a})`, 1);
op('Float', ['UInt64'], a => `${a}.toFloat`, 1);
op('Float', ['Nat', 'Nat'], (a, b) => `(Float.ofScientific ${a} true (${b} % 30))`, 1);
op('Float', ['Bool', 'Float', 'Float'], (c, a, b) => `(if ${c} then ${a} else ${b})`, 1);
op('Float', ['Float'], a => `${a}.sin`, 1, { inexact: true });
op('Float', ['Float'], a => `${a}.cos`, 1, { inexact: true });
op('Float', ['Float'], a => `${a}.exp`, 1, { inexact: true });
op('Float', ['Float'], a => `${a}.log`, 1, { inexact: true });
op('Float', ['Float'], a => `${a}.atan`, 1, { inexact: true });
op('Float', ['Float', 'Float'], (a, b) => `(${a}.pow ${b})`, 1, { inexact: true });
op('Float', ['Float', 'Float'], (a, b) => `(Float.atan2 ${a} ${b})`, 1, { inexact: true });

// String
lit('String', r => stringExpr(stringLit(r, true)));
op('String', ['String', 'String'], (a, b) => `(${a} ++ ${b})`, 3);
op('String', ['String', 'Nat'], (a, b) => `(${a}.take (${b} % 20)).copy`, 1);
op('String', ['String', 'Nat'], (a, b) => `(${a}.drop (${b} % 20)).copy`, 1);
op('String', ['String'], a => `(String.ofList ${a}.toList.reverse)`, 1);
op('String', ['String'], a => `${a}.toUpper`, 1);
op('String', ['String'], a => `${a}.toLower`, 1);
op('String', ['String'], a => `${a}.capitalize`, 1);
op('String', ['String'], a => `${a}.trimAscii.copy`, 1);
op('String', ['String', 'Char'], (a, b) => `(${a}.push ${b})`, 1);
op('String', ['Char', 'Nat'], (a, b) => `("".pushn ${a} (${b} % 12))`, 1);
op('String', ['Char'], a => `(String.singleton ${a})`, 1);
op('String', ['Nat'], a => `(toString ${a})`, 2);
op('String', ['Int'], a => `(toString ${a})`, 1);
op('String', ['Float'], a => `(toString ${a})`, 1);
op('String', ['Nat', 'Nat'], (a, b) => `(String.ofList (Nat.toDigits (${b} % 35 + 2) ${a}))`, 1);
op('String', ['String', 'ListString'], (a, b) => `(${a}.intercalate ${b})`, 1);
op('String', ['ListString'], a => `(String.join ${a})`, 1);
op('String', ['String', 'String'], (a, b) => `(${a}.replace "a" ${b})`, 1);
op('String', ['String'], a => `(${a}.map Char.toUpper)`, 1);
op('String', ['String'], a => `(${a}.dropWhile Char.isWhitespace).copy`, 1);
op('String', ['ListNat'], a => `(toString ${a})`, 1);
op('String', ['Tree'], a => `(toString (repr ${a}))`, 1);
op('String', ['Pt'], a => `${a}.tag`, 1);
op('String', ['String'], a => `(String.ofList (${a}.toList.filter Char.isAlphanum))`, 1);
op('String', ['Nat'], a => `(Nat.toSuperscriptString (${a} % 100000))`, 1);
op('String', ['String', 'Nat'], (a, b) => `(String.Pos.Raw.extract ${a} ⟨${b} % 7⟩ ⟨${b} % 13⟩)`, 1);

// Char
lit('Char', r => leanChar(r.pick(CHARS)), 2);
op('Char', ['Nat'], a => `(Char.ofNat ${a})`, 2);
op('Char', ['Char'], a => `${a}.toUpper`, 1);
op('Char', ['Char'], a => `${a}.toLower`, 1);
op('Char', ['String'], a => `${a}.front`, 1);
op('Char', ['String'], a => `${a}.back`, 1);
op('Char', ['String', 'Nat'], (a, b) => `(String.Pos.Raw.get ${a} ⟨${b} % 9⟩)`, 1);
op('Char', ['Char', 'Nat'], (a, b) => `(Char.ofNat (${a}.toNat + ${b} % 3000))`, 1);

// List Nat
lit('ListNat', r => `[${Array.from({ length: r.int(0, 6) }, () => natLit(r)).join(', ')}]`, 2);
op('ListNat', ['Nat'], a => `(List.range (${a} % 40))`, 2);
op('ListNat', ['ListNat', 'ListNat'], (a, b) => `(${a} ++ ${b})`, 2);
op('ListNat', ['ListNat'], a => `${a}.reverse`, 1);
op('ListNat', ['ListNat', 'Nat'], (a, b) => `(${a}.take (${b} % 10))`, 1);
op('ListNat', ['ListNat', 'Nat'], (a, b) => `(${a}.drop (${b} % 10))`, 1);
op('ListNat', ['Nat', 'Nat'], (a, b) => `(List.replicate (${a} % 10) ${b})`, 1);
op('ListNat', ['ListNat'], a => `${a}.eraseDups`, 1);
op('ListNat', ['ListNat'], a => `(${a}.mergeSort (· ≤ ·))`, 1);
op('ListNat', ['ListNat'], a => `(${a}.toArray.qsort (· < ·)).toList`, 1);
op('ListNat', ['ListNat', 'ListNat'], (a, b) => `(List.zipWith (· + ·) ${a} ${b})`, 1);
op('ListNat', ['Tree'], a => `${a}.toList`, 1);
op('ListNat', ['String'], a => `(${a}.toList.map Char.toNat)`, 1);
op('ListNat', ['ListNat'], a => `(hmKeys ${a})`, 1);
op('ListNat', ['ListNat'], null, 1, { bind: { t: 'Nat', body: 'Nat' }, rb: (a, x, body) => `(${a}.map (fun (${x} : Nat) => ${body}))` });
op('ListNat', ['ListNat'], null, 1, { bind: { t: 'Nat', body: 'Bool' }, rb: (a, x, body) => `(${a}.filter (fun (${x} : Nat) => ${body}))` });

// List String
lit('ListString', r => `[${Array.from({ length: r.int(0, 4) }, () => stringExpr(stringLit(r))).join(', ')}]`, 2);
op('ListString', ['String', 'String'], (a, b) => `(${a}.splitOn (${b}.take 2).copy)`, 1);
op('ListString', ['String'], a => `((${a}.split Char.isWhitespace).toList.map (fun (x : String.Slice) => x.copy))`, 1);
op('ListString', ['ListString', 'ListString'], (a, b) => `(${a} ++ ${b})`, 1);
op('ListString', ['ListNat'], a => `(${a}.map toString)`, 1);
op('ListString', ['ListString'], a => `(${a}.mergeSort (fun a b => decide (a ≤ b)))`, 1);

// Array Int
lit('ArrayInt', r => `#[${Array.from({ length: r.int(0, 5) }, () => (r.chance(0.5) ? '-' : '') + natLit(r)).join(', ')}]`, 2);
op('ArrayInt', ['ArrayInt', 'Int'], (a, b) => `(${a}.push ${b})`, 2);
op('ArrayInt', ['ArrayInt'], a => `${a}.reverse`, 1);
op('ArrayInt', ['ArrayInt'], a => `(${a}.qsort (· < ·))`, 1);
op('ArrayInt', ['ArrayInt'], a => `(${a}.insertionSort (· > ·))`, 1);
op('ArrayInt', ['ArrayInt', 'Nat', 'Int'], (a, b, c) => `(${a}.set! (${b} % 6) ${c})`, 1);
op('ArrayInt', ['ArrayInt', 'Nat', 'Nat'], (a, b, c) => `(${a}.extract (${b} % 5) (${c} % 9))`, 1);
op('ArrayInt', ['ArrayInt', 'ArrayInt'], (a, b) => `(${a} ++ ${b})`, 1);
op('ArrayInt', ['ListNat'], a => `(${a}.toArray.map Int.ofNat)`, 1);
op('ArrayInt', ['ArrayInt'], null, 1, { bind: { t: 'Int', body: 'Int' }, rb: (a, x, body) => `(${a}.map (fun (${x} : Int) => ${body}))` });
op('ArrayInt', ['ArrayInt'], null, 1, { bind: { t: 'Int', body: 'Bool' }, rb: (a, x, body) => `(${a}.filter (fun (${x} : Int) => ${body}))` });

// Option Nat
lit('OptNat', r => r.chance(0.3) ? '(none : Option Nat)' : `(some ${natLit(r)})`, 1);
op('OptNat', ['ListNat'], a => `${a}.head?`, 1);
op('OptNat', ['ListNat'], a => `${a}.getLast?`, 1);
op('OptNat', ['ListNat', 'Nat'], (a, b) => `${a}[${b} % 8]?`, 1);
op('OptNat', ['String'], a => `${a}.toNat?`, 1);
op('OptNat', ['OptNat', 'Nat'], (a, b) => `(${a}.map (· + ${b}))`, 1);
op('OptNat', ['OptNat', 'OptNat'], (a, b) => `(${a} <|> ${b})`, 1);
op('OptNat', ['ListNat'], null, 1, { bind: { t: 'Nat', body: 'Bool' }, rb: (a, x, body) => `(${a}.find? (fun (${x} : Nat) => ${body}))` });

// Tree (an inductive) and Pt (a structure), from the preamble
lit('Tree', () => '(Tree.leaf)', 1);
op('Tree', ['ListNat'], a => `(Tree.ofList ${a})`, 3);
op('Tree', ['Tree'], a => `${a}.mirror`, 1);
op('Tree', ['Tree', 'Nat'], (a, b) => `(${a}.insert ${b})`, 1);
op('Tree', ['Tree', 'Nat', 'Tree'], (a, b, c) => `(Tree.node ${a} ${b} ${c})`, 1);
op('Pt', ['Int', 'Int', 'String'], (a, b, c) => `({ x := ${a}, y := ${b}, tag := ${c} } : Pt)`, 3);
op('Pt', ['Pt', 'Int'], (a, b) => `({ ${a} with x := ${b} } : Pt)`, 1);
op('Pt', ['Pt', 'Pt'], (a, b) => `(Pt.add ${a} ${b})`, 1);

export const OPS = ops;
const byType = Object.fromEntries(TYPES.map(t => [t, ops.filter(o => o.t === t)]));

// ---------- generation ----------
// An expression node: { op: op id, k: [children] } or { op, v: literal text, bb: bool } or { var: name, t }.
let uniq = 0;
function genExpr(r, t, depth, env, flags) {
  const vars = env.filter(e => e.t === t);
  if (vars.length && r.chance(0.3)) return { var: r.pick(vars).name, t };
  let cands = byType[t].filter(o => !(flags.exact && o.inexact));
  if (depth <= 0) {
    const leaves = cands.filter(o => o.lit);
    if (leaves.length) cands = leaves;
    else cands = cands.filter(o => o.args.length === 1 || o.args.every(a => byType[a].some(x => x.lit))).slice(0, 4).concat(cands.filter(o => o.args.every(a => a === 'Nat' || a === 'ListNat' || a === 'Int' || a === 'String')));
  } else if (r.chance(0.12)) {
    const leaves = cands.filter(o => o.lit);
    if (leaves.length) cands = leaves;
  }
  const o = r.weighted(cands);
  if (o.lit) return { op: o.id, v: o.lit(r), bb: r.chance(0.5) };
  const nflags = o.exactArgs ? { ...flags, exact: true } : flags;
  const k = o.args.map(a => genExpr(r, a, depth - 1, env, nflags));
  if (o.bind) {
    const name = `x${++uniq}`;
    k.push(genExpr(r, o.bind.body, depth - 1, [...env, { name, t: o.bind.t }], nflags));
    return { op: o.id, k, x: name };
  }
  return { op: o.id, k };
}
export function renderExpr(e) {
  if (e.var) return e.var;
  const o = ops[e.op];
  if (o.lit) {
    const ty = lt(o.t);
    const v = /^[("']/.test(e.v) ? e.v : `(${e.v} : ${ty})`;
    return e.bb ? `(bb (${v} : ${ty}))` : v;
  }
  const k = e.k.map(renderExpr);
  // Every result is ascribed its type, so Lean never infers an operation's
  // type from the context it appears in (Nat-valued folds inside Int sums).
  const out = `(${o.bind ? o.rb(k[0], e.x, k[1]) : o.r(...k)} : ${lt(o.t)})`;
  // libm functions (sin, pow, …) are not correctly rounded and differ in the last
  // bits between glibc (the oracle) and musl (Emscripten): their results are kept
  // to 9 significant digits (campaign 41241443151: pow differed in digit 17).
  return o.inexact ? `(approx ${out})` : out;
}
export function exprSize(e) { return e.var || e.v !== undefined ? 1 : 1 + e.k.reduce((s, c) => s + exprSize(c), 0); }
export function exprType(e) { return e.var ? e.t : ops[e.op].t; }

const SHOW = {
  Float: x => `(toString ${x})`, String: x => `(repr ${x}).pretty`, Char: x => `(repr ${x}).pretty`,
  ListNat: x => `(repr ${x}).pretty`, ArrayInt: x => `(repr ${x}).pretty`, OptNat: x => `(repr ${x}).pretty`,
  Tree: x => `(repr ${x}).pretty`, Pt: x => `(repr ${x}).pretty`, ListString: x => `(repr ${x}).pretty`,
};
export const show = (t, x) => (SHOW[t] ?? (y => `(toString ${y})`))(x);

// ---------- statement cases (do-notation and IO) ----------
// A statement case: { kind, s: [statements] }, each statement { s: 'tag', e?: [exprs], b?: [statements] }.
const STMT_KINDS = ['state', 'io', 'task', 'fs'];
function genStmts(r, kind, n, depth) {
  const out = [];
  for (let i = 0; i < n; i++) {
    const nat = () => genExpr(r, 'Nat', r.int(0, 2), [], {});
    const roll = r.next();
    if (kind === 'state') {
      if (roll < 0.25) out.push({ s: 'modifyAdd', e: [nat()] });
      else if (roll < 0.4) out.push({ s: 'set', e: [nat()] });
      else if (roll < 0.55) out.push({ s: 'emitGet' });
      else if (roll < 0.67) out.push({ s: 'throwIf', e: [genExpr(r, 'Bool', 1, [], {})], v: stringLit(r) });
      else if (roll < 0.8 && depth > 0) out.push({ s: 'try', b: genStmts(r, kind, r.int(1, 3), depth - 1), c: genStmts(r, kind, r.int(0, 2), depth - 1) });
      else if (roll < 0.9 && depth > 0) out.push({ s: 'for', n: r.int(0, 5), b: genStmts(r, kind, r.int(1, 2), depth - 1) });
      else out.push({ s: 'modifyMul', e: [nat()] });
    } else if (kind === 'io') {
      if (roll < 0.25) out.push({ s: 'refAdd', e: [nat()] });
      else if (roll < 0.4) out.push({ s: 'refPrint' });
      else if (roll < 0.5) out.push({ s: 'ioThrow', v: stringLit(r), b: genStmts(r, kind, r.int(0, 2), 0) });
      else if (roll < 0.6) out.push({ s: 'sleep', n: r.int(0, 3) });
      else if (roll < 0.7) out.push({ s: 'arrRef', e: [nat()] });
      else if (roll < 0.8 && depth > 0) out.push({ s: 'for', n: r.int(0, 4), b: genStmts(r, kind, r.int(1, 2), depth - 1) });
      else if (roll < 0.9) out.push({ s: 'stUpdate', e: [nat()] });
      else out.push({ s: 'println', e: [genExpr(r, 'String', 2, [], {})] });
    } else if (kind === 'task') {
      if (roll < 0.4) out.push({ s: 'spawn', e: [nat()] });
      else if (roll < 0.6) out.push({ s: 'asTask', e: [nat()] });
      else if (roll < 0.75) out.push({ s: 'mapTask', e: [nat()] });
      else if (roll < 0.9) out.push({ s: 'mutexAdd', n: r.int(1, 6) });
      else out.push({ s: 'promise', e: [nat()] });
    } else if (kind === 'fs') {
      if (roll < 0.3) out.push({ s: 'write', n: r.int(0, 3), e: [genExpr(r, 'String', 2, [], {})] });
      else if (roll < 0.5) out.push({ s: 'append', n: r.int(0, 3), e: [genExpr(r, 'String', 1, [], {})] });
      else if (roll < 0.7) out.push({ s: 'read', n: r.int(0, 3) });
      else if (roll < 0.8) out.push({ s: 'remove', n: r.int(0, 3) });
      else if (roll < 0.9) out.push({ s: 'size', n: r.int(0, 3) });
      else out.push({ s: 'listDir' });
    }
  }
  return out;
}
const ind = n => '  '.repeat(n);
function renderStateStmts(ss, d) {
  const lines = [];
  for (const st of ss) {
    const e = st.e?.map(renderExpr);
    if (st.s === 'modifyAdd') lines.push(`${ind(d)}modify (· + ${e[0]})`);
    else if (st.s === 'modifyMul') lines.push(`${ind(d)}modify (· * (${e[0]} % 1000))`);
    else if (st.s === 'set') lines.push(`${ind(d)}set (${e[0]} : Nat)`);
    else if (st.s === 'emitGet') lines.push(`${ind(d)}emit s!"s={← get}"`);
    else if (st.s === 'throwIf') lines.push(`${ind(d)}if ${e[0]} then throw ${leanString(st.v)}`);
    else if (st.s === 'try') {
      lines.push(`${ind(d)}try`, ...renderStateStmts(st.b, d + 1), `${ind(d + 1)}pure ()`);
      lines.push(`${ind(d)}catch err =>`, `${ind(d + 1)}emit s!"caught {err}"`, ...renderStateStmts(st.c, d + 1));
    } else if (st.s === 'for') lines.push(`${ind(d)}for i in [0:${st.n}] do`, `${ind(d + 1)}modify (· + i)`, ...renderStateStmts(st.b, d + 1));
  }
  return lines;
}
function renderIoStmts(ss, d, id) {
  const lines = [];
  for (const st of ss) {
    const e = st.e?.map(renderExpr);
    if (st.s === 'refAdd') lines.push(`${ind(d)}r.modify (· + ${e[0]})`);
    else if (st.s === 'refPrint') lines.push(`${ind(d)}IO.println s!"${id} r={← r.get}"`);
    else if (st.s === 'ioThrow') {
      lines.push(`${ind(d)}try`, ...renderIoStmts(st.b, d + 1, id), `${ind(d + 1)}throw (IO.userError ${leanString(st.v)})`);
      lines.push(`${ind(d)}catch err => IO.println s!"${id} caught {err}"`);
    } else if (st.s === 'sleep') lines.push(`${ind(d)}IO.sleep ${st.n}`);
    else if (st.s === 'arrRef') lines.push(`${ind(d)}a.modify (·.push (${e[0]} % 1000))`, `${ind(d)}IO.println s!"${id} a={(← a.get).size} {(← a.get).foldl (· + ·) 0}"`);
    else if (st.s === 'stUpdate') lines.push(`${ind(d)}let v ← (stCount ${e[0]} : IO Nat)`, `${ind(d)}IO.println s!"${id} st={v}"`);
    else if (st.s === 'for') lines.push(`${ind(d)}for i in [0:${st.n}] do`, `${ind(d + 1)}r.modify (· + i)`, ...renderIoStmts(st.b, d + 1, id));
    else if (st.s === 'println') lines.push(`${ind(d)}IO.println (${leanString(id + ' ')} ++ ${show('String', e[0])})`);
  }
  return lines;
}
function renderTaskStmts(ss, d, id) {
  const lines = [];
  ss.forEach((st, i) => {
    const e = st.e?.map(renderExpr);
    if (st.s === 'spawn') lines.push(`${ind(d)}let t${i} := Task.spawn (fun _ => fibL ((${e[0]}) % 150) + 1)`, `${ind(d)}IO.println s!"${id} spawn {t${i}.get}"`);
    else if (st.s === 'asTask') lines.push(`${ind(d)}let t${i} ← IO.asTask (do let v ← pure ((${e[0]}) % 9973); return v * 2)`,
      `${ind(d)}match ← IO.wait t${i} with`, `${ind(d)}| .ok v => IO.println s!"${id} asTask {v}"`, `${ind(d)}| .error err => IO.println s!"${id} asTask error {err}"`);
    else if (st.s === 'mapTask') lines.push(`${ind(d)}let t${i} := (Task.spawn fun _ => (${e[0]}) % 1000).map (· * 3)`, `${ind(d)}IO.println s!"${id} map {t${i}.get}"`);
    else if (st.s === 'mutexAdd') lines.push(`${ind(d)}let c${i} ← IO.mkRef (0 : Nat)`,
      `${ind(d)}let ts${i} ← (List.range ${st.n}).mapM fun j => IO.asTask (c${i}.modify (· + j + 1))`,
      `${ind(d)}for t in ts${i} do let _ ← IO.wait t`, `${ind(d)}IO.println s!"${id} tasks {← c${i}.get}"`);
    else if (st.s === 'promise') lines.push(`${ind(d)}let p${i} ← IO.Promise.new`, `${ind(d)}p${i}.resolve ((${e[0]}) % 777 : Nat)`, `${ind(d)}IO.println s!"${id} promise {p${i}.result!.get}"`);
  });
  return lines;
}
function renderFsStmts(ss, d, id) {
  const lines = [];
  const f = n => `(dir / "f${n}.txt")`;
  for (const st of ss) {
    const e = st.e?.map(renderExpr);
    if (st.s === 'write') lines.push(`${ind(d)}IO.FS.writeFile ${f(st.n)} ${e[0]}`);
    else if (st.s === 'append') lines.push(`${ind(d)}IO.FS.withFile ${f(st.n)} .append fun h => h.putStr ${e[0]}`);
    else if (st.s === 'read') lines.push(`${ind(d)}try IO.println s!"${id} read {(repr (← IO.FS.readFile ${f(st.n)})).pretty}" catch err => IO.println s!"${id} read error {err}"`);
    else if (st.s === 'remove') lines.push(`${ind(d)}try IO.FS.removeFile ${f(st.n)} catch _ => IO.println "${id} remove failed"`);
    else if (st.s === 'size') lines.push(`${ind(d)}try IO.println s!"${id} size {(← ${f(st.n)}.metadata).byteSize}" catch _ => IO.println "${id} size failed"`);
    else if (st.s === 'listDir') lines.push(`${ind(d)}IO.println s!"${id} dir {((← dir.readDir).map (·.fileName)).qsort (· < ·)}"`);
  }
  return lines;
}

// ---------- cases ----------
export const CASE_KINDS = ['expr', 'state', 'io', 'task', 'fs', 'deep'];
// Larger workloads: deep non-tail recursion, big heaps, long strings, huge numbers.
const DEEP = [
  n => `((List.range ${n}).foldr (· + ·) 0)`,
  n => `(deepSum ${n})`,
  n => `((Tree.ofList (List.range (min ${n} 3000))).depth)`,
  n => `(String.join (List.replicate ${n} "ab€")).length`,
  n => `(toString ((3 : Nat) ^ ${n})).length`,
  n => `(((List.range ${n}).map (fun i => i * i)).toArray.qsort (· > ·)).size`,
  n => `((Array.range ${n}).foldl (fun (m : HashMap Nat Nat) i => m.insert (i * 7919 % ${n}) i) {}).size`,
  n => `(Nat.repr ((10 : Nat) ^ ${n} - 1)).length`,
];
export function genCase(seed, index, { kinds = ['expr', 'state', 'io', 'task', 'deep'], depth = 4 } = {}) {
  const r = rng(seed, index);
  uniq = index * 1000;
  const kind = r.weighted(kinds.map(k => ({ k, w: k === 'expr' ? 8 : k === 'deep' ? 0.4 : 1 }))).k;
  // At most 5,000 frames of non-tail recursion: the edge profile and WASI are
  // bounded by the engine's Wasm stack (docs/EDGE.md, docs/WASI.md), about 9,000
  // frames of a small function (issue #30). Deeper recursion is a known difference.
  if (kind === 'deep') return { kind, f: r.int(0, DEEP.length - 1), n: r.pick([100, 1000, 3000, 5000]) };
  if (kind === 'expr') {
    const t = r.weighted(TYPES.map(t => ({ t, w: ['Nat', 'Int', 'String', 'Float', 'UInt64'].includes(t) ? 3 : 1 }))).t;
    return { kind, t, e: genExpr(r, t, r.int(1, depth), [], {}) };
  }
  return { kind, s: genStmts(r, kind, r.int(1, 5), 2) };
}
export function renderCase(c, name) {
  if (c.kind === 'expr') return `def ${name} : IO Unit := do\n  IO.println (${leanString(name + ' ')} ++ ${show(c.t, renderExpr(c.e))})\n`;
  if (c.kind === 'deep') return `def ${name} : IO Unit := do\n  IO.println s!"${name} {${DEEP[c.f](`(bb ${c.n})`)}}"\n`;
  if (c.kind === 'state') {
    return `def ${name}Prog : StateT Nat (ExceptT String (StateM (Array String))) Unit := do\n${renderStateStmts(c.s, 1).join('\n')}\n  pure ()\n` +
      `def ${name} : IO Unit := do\n  let (res, log) := ((${name}Prog.run 0).run).run #[]\n` +
      `  for l in log do IO.println s!"${name} {l}"\n` +
      `  match res with\n  | .ok ((), s) => IO.println s!"${name} ok {s}"\n  | .error err => IO.println s!"${name} error {err}"\n`;
  }
  if (c.kind === 'io') return `def ${name} : IO Unit := do\n  let r ← IO.mkRef (0 : Nat)\n  let a ← IO.mkRef (#[] : Array Nat)\n${renderIoStmts(c.s, 1, name).join('\n')}\n  IO.println s!"${name} end {← r.get} {(← a.get).size}"\n`;
  if (c.kind === 'task') return `def ${name} : IO Unit := do\n${renderTaskStmts(c.s, 1, name).join('\n')}\n  pure ()\n`;
  if (c.kind === 'fs') return `def ${name} : IO Unit := do\n  let dir : System.FilePath := "lasm-difftest-${name}"\n  IO.FS.createDirAll dir\n${renderFsStmts(c.s, 1, name).join('\n')}\n  for e in ← dir.readDir do IO.FS.removeFile e.path\n  IO.FS.removeDirAll dir\n`;
  throw new Error(`unknown case kind ${c.kind}`);
}
export function caseSize(c) {
  if (c.kind === 'expr') return exprSize(c.e);
  if (c.kind === 'deep') return Math.log10(c.n);
  const count = ss => ss.reduce((s, st) => s + 1 + (st.e ?? []).reduce((a, e) => a + exprSize(e), 0) + count(st.b ?? []) + count(st.c ?? []), 0);
  return count(c.s);
}

// ---------- the program ----------
export const PREAMBLE = `-- Generated by scripts/differential/generate.mjs (docs/TESTING.md#differential-testing).
import Std.Data.HashMap
open Std
set_option linter.unusedVariables false
set_option linter.deprecated false

@[noinline] def bb {α : Type} (x : α) : α := x

inductive Tree where
  | leaf : Tree
  | node : Tree → Nat → Tree → Tree
deriving Repr, BEq, Hashable, Inhabited

def Tree.insert : Tree → Nat → Tree
  | .leaf, v => .node .leaf v .leaf
  | .node l x r, v => if v < x then .node (l.insert v) x r else if x < v then .node l x (r.insert v) else .node l x r
def Tree.ofList (xs : List Nat) : Tree := xs.foldl Tree.insert .leaf
def Tree.size : Tree → Nat | .leaf => 0 | .node l _ r => l.size + 1 + r.size
def Tree.sum : Tree → Nat | .leaf => 0 | .node l x r => l.sum + x + r.sum
def Tree.depth : Tree → Nat | .leaf => 0 | .node l _ r => max l.depth r.depth + 1
def Tree.mirror : Tree → Tree | .leaf => .leaf | .node l x r => .node r.mirror x l.mirror
def Tree.toList : Tree → List Nat | .leaf => [] | .node l x r => l.toList ++ [x] ++ r.toList

structure Pt where
  x : Int
  y : Int
  tag : String
deriving Repr, BEq, Hashable, Inhabited
def Pt.add (a b : Pt) : Pt := { x := a.x + b.x, y := a.y + b.y, tag := a.tag ++ b.tag }

def fibL (n : Nat) : Nat := Id.run do
  let mut a := 0
  let mut b := 1
  for _ in [0:n] do
    (a, b) := (b, a + b)
  return a
def digitSum (n : Nat) : Nat := if h : n < 10 then n else n % 10 + digitSum (n / 10)
termination_by n
decreasing_by omega
def collatz (n fuel : Nat) : Nat := match fuel with
  | 0 => 0
  | fuel + 1 => if n ≤ 1 then 0 else 1 + collatz (if n % 2 == 0 then n / 2 else 3 * n + 1) fuel
def ack : Nat → Nat → Nat
  | 0, n => n + 1
  | m + 1, 0 => ack m 1
  | m + 1, n + 1 => ack m (ack (m + 1) n)
termination_by m n => (m, n)
mutual
def isEven : Nat → Bool | 0 => true | n + 1 => isOdd n
def isOdd : Nat → Bool | 0 => false | n + 1 => isEven n
end
def hmSum (xs : List Nat) : Nat :=
  let m : HashMap Nat Nat := xs.foldl (fun m x => m.insert (x % 17) (m.getD (x % 17) 0 + x)) {}
  m.fold (fun acc k v => acc + k * v) 0
def hmKeys (xs : List Nat) : List Nat :=
  let m : HashMap Nat Unit := xs.foldl (fun m x => m.insert (x % 23) ()) {}
  (m.toList.map (·.1)).mergeSort (· ≤ ·)
def wordCount (xs : List String) : Nat :=
  let m : HashMap String Nat := xs.foldl (fun m w => m.insert w (m.getD w 0 + 1)) {}
  m.fold (fun acc _ v => acc + v * v) 0
def stCount (n : Nat) : IO Nat := do
  let ((), s) ← (StateT.run (do for i in [0:(n % 20)] do modify (· + i)) 0 : IO (Unit × Nat))
  return s
/-- A libm result to 9 significant digits (only exact operations after the
log10, whose floor alone is used). -/
def approx (x : Float) : Float :=
  if x.isNaN || x.isInf || x == 0 then x else
  let k := (Float.log10 x.abs).floor
  let shift : Int := 8 - (if k.isNaN || k.isInf then 0 else k.toInt64.toInt)
  let scale := if shift ≥ 0 then Float.ofScientific 1 false shift.toNat else Float.ofScientific 1 true (-shift).toNat
  (x * scale).round / scale
def deepSum : Nat → Nat | 0 => 0 | n + 1 => (n + 1) + deepSum n
abbrev EmitM := StateT Nat (ExceptT String (StateM (Array String)))
def emit (s : String) : EmitM Unit := (modify (·.push s) : StateM (Array String) Unit)
`;

export function genProgram(seed, { cases = 100, kinds, depth, indices } = {}) {
  const ids = indices ?? Array.from({ length: cases }, (_, i) => i);
  return ids.map(i => ({ index: i, c: genCase(seed, i, { kinds, depth }) }));
}
// How main ends: an exit status, an uncaught IO error, or IO.Process.exit.
export const ENDINGS = ['  return 0', '  return 0', '  return 1', '  return 255', '  throw (IO.userError "uncaught: the end ✓")', '  IO.Process.exit 7'];
export function renderProgram(list, { exit, ending } = {}) {
  const defs = list.map(({ index, c, name }) => renderCase(c, name ?? `c${index}`)).join('\n');
  // A marker on stderr before each case attributes panics and warnings to it.
  const calls = list.map(({ index, name }) => `  IO.eprintln "@${name ?? `c${index}`}"\n  ${name ?? `c${index}`}`).join('\n');
  return `${PREAMBLE}\n${defs}\ndef main : IO UInt32 := do\n${calls || '  pure ()'}\n  IO.eprintln "done"\n${ending ?? `  return ${exit ?? 0}`}\n`;
}

// ---------- shrinking ----------
// One step smaller: every subexpression replaced by a same-typed child or by a
// minimal literal, and (for statement cases) every statement removed or its body
// flattened. Candidates are ordered smallest first.
const MIN_LIT = { Nat: '0', Int: '0', UInt8: '0', UInt16: '0', UInt32: '0', UInt64: '0', Bool: 'false', Float: '0.0', String: '""', Char: "'a'", ListNat: '[]', ArrayInt: '#[]', OptNat: '(none : Option Nat)', Tree: '(Tree.leaf)', ListString: '[]' };
function minLit(t) {
  const o = byType[t].find(x => x.lit);
  return o && MIN_LIT[t] !== undefined ? { op: o.id, v: MIN_LIT[t], bb: false } : null;
}
function* exprShrinks(e) {
  if (e.var) return;
  const t = exprType(e);
  if (e.v !== undefined) {
    if (e.bb) yield { ...e, bb: false };
    const m = minLit(t); if (m && m.v !== e.v) yield m;
    return;
  }
  const m = minLit(t); if (m) yield m;
  for (const c of e.k) if (exprType(c) === t && !hasFreeVar(c, e.x)) yield c;
  for (let i = 0; i < e.k.length; i++) for (const s of exprShrinks(e.k[i])) yield { ...e, k: e.k.map((c, j) => j === i ? s : c) };
}
function hasFreeVar(e, name) { if (!name) return false; if (e.var) return e.var === name; return (e.k ?? []).some(c => hasFreeVar(c, name)); }
function* stmtShrinks(ss) {
  for (let i = 0; i < ss.length; i++) yield [...ss.slice(0, i), ...ss.slice(i + 1)];
  for (let i = 0; i < ss.length; i++) {
    const st = ss[i];
    if (st.b) { yield [...ss.slice(0, i), ...st.b, ...ss.slice(i + 1)]; for (const b of stmtShrinks(st.b)) yield ss.map((x, j) => j === i ? { ...st, b } : x); }
    if (st.c) for (const c of stmtShrinks(st.c)) yield ss.map((x, j) => j === i ? { ...st, c } : x);
    if (st.e) for (let k = 0; k < st.e.length; k++) for (const e of exprShrinks(st.e[k])) yield ss.map((x, j) => j === i ? { ...st, e: st.e.map((y, m) => m === k ? e : y) } : x);
    if (st.n) yield ss.map((x, j) => j === i ? { ...st, n: 0 } : x);
  }
}
export function shrinkCandidates(c, limit = 60) {
  if (c.kind === 'deep') return [10, 100, 1000, 3000].filter(n => n < c.n).map(n => ({ ...c, n }));
  const out = [], seen = new Set([JSON.stringify(c)]);
  const gen = c.kind === 'expr' ? (function* () { for (const e of exprShrinks(c.e)) yield { ...c, e }; })() : (function* () { for (const s of stmtShrinks(c.s)) yield { ...c, s }; })();
  for (const x of gen) {
    const key = JSON.stringify(x);
    if (!seen.has(key)) { seen.add(key); out.push(x); }
    if (out.length >= limit * 4) break;
  }
  return out.sort((a, b) => caseSize(a) - caseSize(b)).slice(0, limit);
}
