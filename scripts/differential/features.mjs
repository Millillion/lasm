// Differential fuzzing, feature cases (docs/TESTING.md#differential-fuzzing):
// random Lean programs that declare things of their own, for the language
// features the expression cases of generate.mjs cannot reach.
//
// A feature case is { kind: 'feat', fam, ... }: a family (below) and its
// random parameters. It renders as top-level declarations whose names start
// with the case's name (so cases never collide and a case is still a
// regression file on its own), followed by `def <name> : IO Unit`, which
// prints one line per check, each starting with the case's name.
//
//   ext      an expression over the extension types too: Int8–Int64 (signed
//            overflow, INT_MIN / -1, shifts past the width), Float32,
//            ByteArray (UTF-8 validation of arbitrary bytes), Std.HashSet,
//            Std.TreeMap, and operations that panic (`xs[i]!`, `get!`,
//            `toNat!`, `back!`: the message on stderr, then the default value)
//   class    a type class with a default field and a default method,
//            instances for random types (their operation a random expression),
//            instances derived for products and Option, polymorphic functions
//   adt      an inductive expression language, an evaluator (structural
//            recursion with an environment), and a simplifier whose rules are
//            a random selection of nested, overlapping patterns over Int literals
//   closure  functions of arity 1 to 18 applied fully, partially (closures
//            forced through the `@[noinline]` identity, then applied in random
//            chunks: the runtime's apply paths, beyond 16 arguments too),
//            closures capturing values, arrays of closures, composition
//   loop     self tail recursion up to 200,000 iterations (a loop in the C),
//            mutual recursion, `partial def` with fuel, well-founded recursion
//            (binary search over bignums), `while`/`continue`/`break`, Nat.fold
//   struct   structures with defaults and `extends`, deriving Repr, BEq,
//            Hashable and Ord: compare, sort, update, projection to the parent
//   exc      ExceptT with a custom error inductive over StateT Nat IO:
//            throw, try/catch with a match on the error, try/finally, break,
//            early return, IO.Ref
//
// Everything terminates by construction (bounded iteration counts, fuel,
// decreasing measures checked by Lean) and prints only deterministic values.
// Every case draws from its own stream rng(seed, 'feat', index).
//
// Shrinking (featureShrinks) is delta debugging over the case's tree: each
// check removed, each simplifier rule removed, each expression hole replaced by
// a same-typed child or a minimal literal (generate.mjs exprShrinks), each
// expression-language term replaced by a subterm, each count lowered. Every
// candidate still type-checks: checks and rules are independent, holes keep
// their type.
//
// This module must not call into generate.mjs at load time (generate.mjs
// imports it back for renderCase, caseSize and shrinkCandidates).
import { rng, genExpr, renderExpr, exprShrinks, exprSize, exprType, show, lt, leanString, natLit, stringLit, setNameBase } from './generate.mjs';

export const FAMILIES = ['ext', 'class', 'adt', 'closure', 'loop', 'struct', 'exc'];
const WEIGHT = { ext: 4, class: 2, adt: 2, closure: 2, loop: 2, struct: 1, exc: 1 };

// Operations whose cost grows with their arguments (or that recurse), that
// panic (`set!` out of bounds: 200,000 panic messages, campaign 42620999209),
// or that touch floats (a literal such as 1e300 is Float.ofScientific with a
// 300-digit power of ten, recomputed every iteration: 51 s natively for
// 200,000 iterations, campaign 42621004028): kept out of loop bodies run up to
// 200,000 times and out of class operations that are iterated.
const HEAVY = /fibL|collatz|ack|digitSum|\^ \(|Tree|hm|wordCount|replicate|range|pushn|Superscript|toDigits|<<< \(|repr|qsort|mergeSort|insertionSort|eraseDups|splitOn|intercalate|join|replace|toString|insertMany|ofScientific|!/;
const cheap = o => !o.bind && !o.panic && ![o.t, ...o.args].some(t => t === 'Float' || t === 'Float32') && !(o.r && HEAVY.test(o.r.toString()));

const SIMPLE = ['Nat', 'Int', 'UInt8', 'UInt64', 'String', 'Bool', 'ListNat', 'Int32', 'Char'];
const ex = (r, t, depth, env = [], flags = {}) => genExpr(r, t, depth, env, { ext: true, ...flags });
const R = e => renderExpr(e);
// An expression over the variables of env that uses at least one of them
// (below its root): a few draws from the same stream, the last one kept.
const usesVar = (e, names) => e.var ? names.includes(e.var) : (e.k ?? []).some(k => usesVar(k, names));
function exv(r, t, depth, env, flags = {}) {
  const names = env.map(v => v.name);
  let e;
  for (let i = 0; i < 8; i++) {
    e = ex(r, t, depth, env, { varP: 0.45, ...flags });
    if (!e.var && usesVar(e, names)) return e;
  }
  return e;
}
const reprOf = x => `(repr (${x})).pretty`;

// ---------- families ----------
const GEN = {
  ext(r) {
    const panic = r.chance(0.35);
    const pool = ['Int8', 'Int16', 'Int32', 'Int64', 'Float32', 'ByteArray', 'HSet', 'TMap', 'Nat', 'Int', 'String', 'UInt64', 'Bool'];
    const t = r.pick(pool);
    const chk = Array.from({ length: r.int(1, 3) }, () => ({ t, e: [ex(r, t, r.int(1, 4), [], { panic })] }));
    return { fam: 'ext', chk };
  },
  class(r) {
    const types = [];
    for (const t of ['Nat', 'Int', 'UInt64', 'UInt8', 'String', 'ListNat', 'ArrayInt', 'Int32']) if (r.chance(0.4)) types.push(t);
    if (!types.length) types.push(r.pick(['Nat', 'String', 'Int']));
    // The operation is iterated (pow, mconcat): only cheap operations, so no power tower.
    const insts = types.map(t => ({ t, e: [exv(r, t, 2, [{ name: 'a', t }, { name: 'b', t }], { allow: cheap }), ex(r, t, 1)], name: r.chance(0.4) ? stringLit(r) : null }));
    const chk = [];
    for (let i = r.int(2, 6); i > 0; i--) {
      const t = r.pick(types), k = r.pick(['mconcat', 'pow', 'combine3', 'name', 'pair', 'opt', 'idem']);
      if (k === 'mconcat') chk.push({ k, t, e: Array.from({ length: r.int(0, 4) }, () => ex(r, t, 1)) });
      // At most 6: an operation that doubles an array, printed with repr, overflows
      // the Wasm stack of WASI and the edge targets past ~5,000 elements (issue #179).
      else if (k === 'pow') chk.push({ k, t, n: r.int(0, 6), e: [ex(r, t, 1)] });
      else if (k === 'combine3') chk.push({ k, t, e: [ex(r, t, 1), ex(r, t, 1), ex(r, t, 1)] });
      else if (k === 'name') chk.push({ k, t });
      else if (k === 'pair') { const u = r.pick(types); chk.push({ k, t, u, e: [ex(r, t, 1), ex(r, u, 1), ex(r, t, 1), ex(r, u, 1)] }); }
      else if (k === 'opt') chk.push({ k, t, some: [r.chance(0.6), r.chance(0.6)], e: [ex(r, t, 1), ex(r, t, 1)] });
      else chk.push({ k, t, e: [ex(r, t, 1)] });
    }
    return { fam: 'class', insts, chk };
  },
  adt(r) {
    const rules = ADT_RULES.map((_, i) => i).filter(() => r.chance(0.5));
    const cong = ['add', 'mul', 'neg', 'ite', 'letE'].filter(() => r.chance(0.7));
    const chk = [];
    for (let i = r.int(2, 5); i > 0; i--) {
      chk.push({ k: r.pick(['eval', 'simp', 'evalSimp', 'size', 'hash', 'beq']), term: genTerm(r, r.int(1, 5), 0), env: Array.from({ length: r.int(0, 3) }, () => ex(r, 'Int', 1)) });
    }
    return { fam: 'adt', rules, cong, chk };
  },
  closure(r) {
    const fns = Array.from({ length: r.int(1, 2) }, () => {
      const k = r.pick([1, 2, 3, 4, 5, 7, 8, 12, 16, 17, 18]);
      const ts = Array.from({ length: k }, () => r.pick(SIMPLE));
      const rt = r.pick(SIMPLE);
      return { ts, rt, e: [exv(r, rt, 3, ts.map((t, i) => ({ name: `a${i + 1}`, t })))] };
    });
    const chk = [];
    for (let i = r.int(2, 5); i > 0; i--) {
      const kind = r.pick(['full', 'pap', 'pap', 'cap', 'arr', 'comp', 'ret']);
      if (kind === 'full' || kind === 'pap') {
        const f = r.int(0, fns.length - 1), n = fns[f].ts.length;
        const chunks = []; let left = n;
        while (left > 0) { const c = r.int(1, Math.min(left, 6)); chunks.push(c); left -= c; }
        chk.push({ k: kind, f, chunks: kind === 'full' ? [n] : chunks, e: fns[f].ts.map(t => ex(r, t, 1)) });
      } else if (kind === 'cap') {
        const t = r.pick(SIMPLE), u = r.pick(SIMPLE), res = r.pick(SIMPLE);
        chk.push({ k: kind, t, u, res, e: [ex(r, t, 2), exv(r, res, 3, [{ name: 'x', t: u }, { name: 'kv', t }]), ex(r, u, 1), ex(r, u, 1), ex(r, u, 1)] });
      } else if (kind === 'arr' || kind === 'comp') {
        const t = r.pick(['Nat', 'Int', 'UInt64', 'String', 'ListNat', 'Int64']);
        const m = kind === 'comp' ? 2 : r.int(0, 4);
        chk.push({ k: kind, t, e: [ex(r, t, 1), ...Array.from({ length: m }, () => exv(r, t, 2, [{ name: 'x', t }]))] });
      } else {
        const t = r.pick(SIMPLE), u = r.pick(SIMPLE), res = r.pick(SIMPLE);
        chk.push({ k: kind, t, u, res, e: [exv(r, res, 3, [{ name: 'c', t }, { name: 'x', t: u }]), ex(r, t, 1), ex(r, u, 1), ex(r, u, 1)] });
      }
    }
    return { fam: 'closure', fns, chk };
  },
  loop(r) {
    const chk = [];
    for (let i = r.int(1, 3); i > 0; i--) {
      const k = r.pick(['tail', 'tail', 'mutual', 'partial', 'wf', 'while', 'fold']);
      const t = r.pick(['Nat', 'Int', 'UInt64', 'UInt32', 'UInt8', 'Int64', 'Int16']);
      const n = r.pick([0, 1, 10, 1000, 20000, 200000]);
      const fl = { allow: cheap };
      if (k === 'tail' || k === 'fold') chk.push({ k, t, n, e: [exv(r, t, 2, [{ name: 'acc', t }, { name: 'i', t: 'Nat' }], fl), ex(r, t, 1)] });
      else if (k === 'mutual') chk.push({ k, t, n: Math.min(n, 500), e: [exv(r, t, 2, [{ name: 'acc', t }], fl), exv(r, t, 2, [{ name: 'acc', t }], fl), ex(r, t, 1)] });
      else if (k === 'partial') chk.push({ k, n, e: [exv(r, 'Bool', 2, [{ name: 'x', t: 'Nat' }], fl), exv(r, 'Nat', 2, [{ name: 'x', t: 'Nat' }], fl), ex(r, 'Nat', 1)] });
      else if (k === 'wf') chk.push({ k, hi: r.pick(['0', '1', '1000', '1000000', '340282366920938463463374607431768211456', natLit(r)]), e: [exv(r, 'Bool', 2, [{ name: 'm', t: 'Nat' }], fl)] });
      else chk.push({ k, t, n, e: [exv(r, 'Bool', 2, [{ name: 'i', t: 'Nat' }, { name: 'acc', t }], fl), exv(r, t, 2, [{ name: 'i', t: 'Nat' }, { name: 'acc', t }], fl), ex(r, t, 1), ex(r, t, 1)] });
    }
    return { fam: 'loop', chk };
  },
  struct(r) {
    const POOL = ['Nat', 'Int', 'String', 'Bool', 'ListNat', 'UInt8', 'Char', 'OptNat'];
    const mk = n => Array.from({ length: n }, () => ({ t: r.pick(POOL), def: r.chance(0.5) }));
    const fa = mk(r.int(1, 3)), fb = mk(r.int(0, 3));
    fa.forEach(f => { if (f.def) f.e = [ex(r, f.t, 1)]; });
    fb.forEach(f => { if (f.def) f.e = [ex(r, f.t, 1)]; });
    // Values: every field given, or (for a field with a default) sometimes left out.
    const vals = Array.from({ length: r.int(2, 4) }, () => ({ give: [...fa, ...fb].map(f => !f.def || r.chance(0.6)), e: [...fa, ...fb].map(f => ex(r, f.t, 1)) }));
    const chk = [];
    for (let i = r.int(2, 5); i > 0; i--) {
      const k = r.pick(['repr', 'compare', 'beq', 'hash', 'sort', 'update', 'parent']);
      chk.push({ k, i: r.int(0, vals.length - 1), j: r.int(0, vals.length - 1), ...(k === 'update' ? { e: [ex(r, fa[0].t, 1)] } : {}) });
    }
    return { fam: 'struct', fa, fb, vals, chk };
  },
  exc(r) {
    return { fam: 'exc', s: genExcStmts(r, r.int(2, 6), 2, []) };
  },
};

// ---------- adt: terms of the expression language ----------
// A term: { c: constructor, k: [subterms], v?: Int literal text or de Bruijn index }.
function genTerm(r, depth, scope) {
  if (depth <= 0 || r.chance(0.2)) {
    if (scope > 0 && r.chance(0.4)) return { c: 'var', v: r.int(0, scope) };
    return { c: 'lit', v: r.pick(['0', '1', '-1', '0', '1', '2', '-3', '7', natLit(r), '-' + natLit(r)]) };
  }
  const c = r.pick(['add', 'add', 'mul', 'mul', 'neg', 'ite', 'letE']);
  if (c === 'neg') return { c, k: [genTerm(r, depth - 1, scope)] };
  if (c === 'ite') return { c, k: [genTerm(r, depth - 1, scope), genTerm(r, depth - 1, scope), genTerm(r, depth - 1, scope)] };
  if (c === 'letE') return { c, k: [genTerm(r, depth - 1, scope), genTerm(r, depth - 1, scope + 1)] };
  return { c, k: [genTerm(r, depth - 1, scope), genTerm(r, depth - 1, scope)] };
}
const renderTerm = (p, t) => t.c === 'lit' ? `(.lit (${t.v}))` : t.c === 'var' ? `(.var ${t.v})` : `(.${t.c} ${t.k.map(x => renderTerm(p, x)).join(' ')})`;
const termSize = t => 1 + (t.k ?? []).reduce((s, x) => s + termSize(x), 0);
// Rules of the simplifier, tried before the congruence rules (no rule subsumes another).
const ADT_RULES = [
  p => `| .add (.lit 0) e => ${p}_simp e`,
  p => `| .add e (.lit 0) => ${p}_simp e`,
  p => `| .mul (.lit 1) e => ${p}_simp e`,
  p => `| .mul e (.lit 1) => ${p}_simp e`,
  () => `| .mul (.lit 0) _ => .lit 0`,
  p => `| .neg (.neg e) => ${p}_simp e`,
  () => `| .neg (.lit n) => .lit (-n)`,
  () => `| .add (.lit a) (.lit b) => .lit (a + b)`,
  () => `| .mul (.lit a) (.lit b) => .lit (a * b)`,
  p => `| .ite (.lit 0) _ e => ${p}_simp e`,
  p => `| .ite (.lit (.negSucc _)) t _ => ${p}_simp t`,
  p => `| .letE (.lit v) (.var 0) => .lit v`,
  p => `| .add a (.neg b) => if a == b then .lit 0 else .add (${p}_simp a) (.neg (${p}_simp b))`,
];
const CONG = {
  add: p => `| .add a b => .add (${p}_simp a) (${p}_simp b)`,
  mul: p => `| .mul a b => .mul (${p}_simp a) (${p}_simp b)`,
  neg: p => `| .neg a => .neg (${p}_simp a)`,
  ite: p => `| .ite c t e => .ite (${p}_simp c) (${p}_simp t) (${p}_simp e)`,
  letE: p => `| .letE a b => .letE (${p}_simp a) (${p}_simp b)`,
};

// ---------- exc: statements ----------
function genExcStmts(r, n, depth, env) {
  const out = [];
  const nat = () => exv(r, 'Nat', r.int(0, 2), env);
  const cond = () => exv(r, 'Bool', r.int(0, 2), env);
  for (let i = 0; i < n; i++) {
    const roll = r.next();
    if (roll < 0.2) out.push({ s: 'add', e: [nat()] });
    else if (roll < 0.32) out.push({ s: 'throwBad', e: [cond(), nat()] });
    else if (roll < 0.42) out.push({ s: 'throwMsg', e: [cond()], v: stringLit(r) });
    else if (roll < 0.52) out.push({ s: 'print' });
    else if (roll < 0.6) out.push({ s: 'ref', e: [nat()] });
    else if (roll < 0.67) out.push({ s: 'ret', e: [cond(), nat()] });
    else if (roll < 0.77 && depth > 0) out.push({ s: 'try', b: genExcStmts(r, r.int(1, 3), depth - 1, env), c: genExcStmts(r, r.int(0, 2), depth - 1, env) });
    else if (roll < 0.85 && depth > 0) out.push({ s: 'finally', b: genExcStmts(r, r.int(1, 3), depth - 1, env) });
    else if (roll < 0.95 && depth > 0) {
      const e2 = [...env, { name: `i${depth}`, t: 'Nat' }];
      out.push({ s: 'for', n: r.int(0, 6), d: depth, e: [exv(r, 'Bool', r.int(0, 2), e2)], b: genExcStmts(r, r.int(1, 2), depth - 1, e2) });
    } else out.push({ s: 'add', e: [nat()] });
  }
  return out;
}
function renderExcStmts(ss, d, id) {
  const ind = '  '.repeat(d), lines = [];
  for (const st of ss) {
    const e = st.e?.map(R);
    if (st.s === 'add') lines.push(`${ind}modify (· + (${e[0]}) % 1000)`);
    else if (st.s === 'throwBad') lines.push(`${ind}if ${e[0]} then throw (.bad ((${e[1]}) % 100))`);
    else if (st.s === 'throwMsg') lines.push(`${ind}if ${e[0]} then throw (.msg ${leanString(st.v)})`);
    else if (st.s === 'print') lines.push(`${ind}IO.println s!"${id} s={← get} r={← r.get}"`);
    else if (st.s === 'ref') lines.push(`${ind}r.modify (· + (${e[0]}) % 977)`);
    else if (st.s === 'ret') lines.push(`${ind}if ${e[0]} then return (${e[1]}) % 10007`);
    else if (st.s === 'try') {
      lines.push(`${ind}try`, ...renderExcStmts(st.b, d + 1, id), `${ind}  pure ()`, `${ind}catch err =>`, `${ind}  match err with`,
        `${ind}  | .bad n => IO.println s!"${id} caught bad {n}"`, `${ind}  | .msg m => IO.println s!"${id} caught msg {(repr m).pretty}"`, ...renderExcStmts(st.c, d + 1, id));
    } else if (st.s === 'finally') lines.push(`${ind}try`, ...renderExcStmts(st.b, d + 1, id), `${ind}  pure ()`, `${ind}finally`, `${ind}  IO.println s!"${id} finally {← get}"`);
    else if (st.s === 'for') lines.push(`${ind}for i${st.d} in [0:${st.n}] do`, `${ind}  if ${e[0]} then break`, `${ind}  modify (· + i${st.d})`, ...renderExcStmts(st.b, d + 1, id));
  }
  return lines;
}

// ---------- rendering ----------
const pr = (id, label, x) => `  IO.println (${leanString(`${id} ${label} `)} ++ ${x})`;
const ITER_MOD = { Nat: ' % 1000000007', Int: ' % 1000000007' };
const RENDER = {
  ext(c, p) {
    return `def ${p} : IO Unit := do\n${c.chk.map((k, i) => pr(p, i, show(k.t, R(k.e[0])))).join('\n')}\n  pure ()\n`;
  },
  class(c, p) {
    const C = `${p}_C`;
    let s = `class ${C} (α : Type) where\n  op : α → α → α\n  unit : α\n  name : String := "default"\n  combine3 (a b c : α) : α := op (op a b) c\n`;
    for (const it of c.insts) {
      s += `instance : ${C} (${lt(it.t)}) where\n  op a b := ${R(it.e[0])}\n  unit := ${R(it.e[1])}\n${it.name !== null ? `  name := ${leanString(it.name)}\n` : ''}`;
    }
    s += `instance {α β : Type} [${C} α] [${C} β] : ${C} (α × β) where\n  op p q := (${C}.op p.1 q.1, ${C}.op p.2 q.2)\n  unit := (${C}.unit, ${C}.unit)\n  name := "pair"\n`;
    s += `instance {α : Type} [${C} α] : ${C} (Option α) where\n  op\n    | some a, some b => some (${C}.op a b)\n    | a, none => a\n    | none, b => b\n  unit := none\n`;
    s += `def ${p}_mconcat {α : Type} [${C} α] (xs : List α) : α := xs.foldl ${C}.op ${C}.unit\n`;
    s += `def ${p}_pow {α : Type} [${C} α] (x : α) : Nat → α\n  | 0 => ${C}.unit\n  | n + 1 => ${C}.op x (${p}_pow x n)\n`;
    s += `def ${p}_idem {α : Type} [${C} α] [BEq α] (x : α) : Bool := ${C}.op x x == x\n`;
    const body = c.chk.map((k, i) => {
      const e = (k.e ?? []).map(R), T = `(${lt(k.t)})`;
      if (k.k === 'mconcat') return pr(p, i, show(k.t, `(${p}_mconcat ([${e.join(', ')}] : List ${T}))`));
      if (k.k === 'pow') return pr(p, i, show(k.t, `(${p}_pow ${e[0]} ${k.n})`));
      if (k.k === 'combine3') return pr(p, i, show(k.t, `(${C}.combine3 ${e.join(' ')})`));
      if (k.k === 'name') return pr(p, i, `${C}.name (α := ${T})`);
      if (k.k === 'pair') return pr(p, i, reprOf(`(${C}.op (${e[0]}, ${e[1]}) (${e[2]}, ${e[3]}) : ${T} × (${lt(k.u)}))`));
      if (k.k === 'opt') return pr(p, i, reprOf(`(${C}.op ${k.some[0] ? `(some ${e[0]})` : 'none'} ${k.some[1] ? `(some ${e[1]})` : 'none'} : Option ${T})`));
      return pr(p, i, `toString (${p}_idem ${e[0]})`);
    });
    return `${s}def ${p} : IO Unit := do\n${body.join('\n')}\n  pure ()\n`;
  },
  adt(c, p) {
    const E = `${p}_E`;
    let s = `inductive ${E} where\n  | lit : Int → ${E}\n  | var : Nat → ${E}\n  | add : ${E} → ${E} → ${E}\n  | mul : ${E} → ${E} → ${E}\n  | neg : ${E} → ${E}\n  | ite : ${E} → ${E} → ${E} → ${E}\n  | letE : ${E} → ${E} → ${E}\nderiving Repr, BEq, Hashable, Inhabited\n`;
    s += `def ${p}_eval (env : List Int) : ${E} → Int\n  | .lit n => n\n  | .var i => env.getD i 0\n  | .add a b => ${p}_eval env a + ${p}_eval env b\n  | .mul a b => ${p}_eval env a * ${p}_eval env b\n  | .neg a => - ${p}_eval env a\n  | .ite c t e => if ${p}_eval env c != 0 then ${p}_eval env t else ${p}_eval env e\n  | .letE a b => ${p}_eval (${p}_eval env a :: env) b\n`;
    s += `def ${p}_size : ${E} → Nat\n  | .add a b | .mul a b | .letE a b => ${p}_size a + ${p}_size b + 1\n  | .neg a => ${p}_size a + 1\n  | .ite a b c => ${p}_size a + ${p}_size b + ${p}_size c + 1\n  | _ => 1\n`;
    s += `def ${p}_simp : ${E} → ${E}\n${[...c.rules.map(i => ADT_RULES[i](p)), ...c.cong.map(k => CONG[k](p)), '| e => e'].map(l => '  ' + l).join('\n')}\n`;
    const body = c.chk.map((k, i) => {
      const t = `(${renderTerm(p, k.term)} : ${E})`, env = `[${k.env.map(R).join(', ')}]`;
      if (k.k === 'eval') return pr(p, i, `toString (${p}_eval ${env} ${t})`);
      if (k.k === 'simp') return pr(p, i, reprOf(`${p}_simp ${t}`));
      if (k.k === 'evalSimp') return pr(p, i, `s!"{${p}_eval ${env} (${p}_simp ${t})} {${p}_size (${p}_simp ${t})}"`);
      if (k.k === 'size') return pr(p, i, `toString (${p}_size ${t})`);
      if (k.k === 'hash') return pr(p, i, `toString (hash ${t})`);
      return pr(p, i, `toString (${t} == ${p}_simp ${t})`);
    });
    return `${s}def ${p} : IO Unit := do\n${body.join('\n')}\n  pure ()\n`;
  },
  closure(c, p) {
    let s = '';
    c.fns.forEach((f, j) => { s += `def ${p}_f${j} ${f.ts.map((t, i) => `(a${i + 1} : ${lt(t)})`).join(' ')} : ${lt(f.rt)} := ${R(f.e[0])}\n`; });
    const body = c.chk.map((k, i) => {
      const e = k.e.map(R);
      if (k.k === 'full' || k.k === 'pap') {
        const f = c.fns[k.f]; let at = 0, x = `${p}_f${k.f}`;
        k.chunks.forEach((n, ci) => {
          const args = e.slice(at, at + n).join(' '); at += n;
          x = ci === k.chunks.length - 1 ? `(${x} ${args})` : `(bb (${x} ${args}))`;
        });
        return pr(p, i, show(f.rt, `(${x} : ${lt(f.rt)})`));
      }
      if (k.k === 'cap') {
        return pr(p, i, `(let kv : ${lt(k.t)} := bb ${e[0]}; let h : ${lt(k.u)} → ${lt(k.res)} := bb (fun (x : ${lt(k.u)}) => ${e[1]}); ${reprOf(`(h ${e[2]}, [${e[3]}, ${e[4]}].map h)`)})`);
      }
      if (k.k === 'arr') {
        return pr(p, i, show(k.t, `((bb (#[${e.slice(1).map(b => `(fun (x : ${lt(k.t)}) => ${b})`).join(', ')}] : Array (${lt(k.t)} → ${lt(k.t)}))).foldl (fun acc f => f acc) ${e[0]})`));
      }
      if (k.k === 'comp') return pr(p, i, show(k.t, `(((fun (x : ${lt(k.t)}) => ${e[1]}) ∘ (bb (fun (x : ${lt(k.t)}) => ${e[2]}))) ${e[0]})`));
      // ret: a function returning a closure over its argument
      s += `def ${p}_mk${i} (c : ${lt(k.t)}) : ${lt(k.u)} → ${lt(k.res)} := fun (x : ${lt(k.u)}) => ${e[0]}\n`;
      return pr(p, i, reprOf(`(let g := ${p}_mk${i} ${e[1]}; (g ${e[2]}, [${e[2]}, ${e[3]}].map g))`));
    });
    return `${s}def ${p} : IO Unit := do\n${body.join('\n')}\n  pure ()\n`;
  },
  loop(c, p) {
    let s = '';
    const body = c.chk.map((k, i) => {
      const e = k.e.map(R), q = `${p}_${i}`, T = k.t && lt(k.t), m = ITER_MOD[k.t] ?? '';
      if (k.k === 'tail') {
        s += `def ${q} : Nat → ${T} → ${T}\n  | 0, acc => acc\n  | i + 1, acc => ${q} i ((${e[0]})${m})\n`;
        return pr(p, i, `toString (${q} (bb ${k.n}) ${e[1]})`);
      }
      if (k.k === 'fold') return pr(p, i, `toString (Nat.fold (bb ${k.n}) (fun (i : Nat) _ (acc : ${T}) => (${e[0]})${m}) ${e[1]})`);
      if (k.k === 'mutual') {
        s += `mutual\ndef ${q}_ping : Nat → ${T} → ${T}\n  | 0, acc => acc\n  | n + 1, acc => ${q}_pong n ((${e[0]})${m})\ndef ${q}_pong : Nat → ${T} → ${T}\n  | 0, acc => acc\n  | n + 1, acc => ${q}_ping n ((${e[1]})${m})\nend\n`;
        return pr(p, i, `toString (${q}_ping (bb ${k.n}) ${e[2]})`);
      }
      if (k.k === 'partial') {
        s += `partial def ${q} (x fuel : Nat) : Nat := if fuel == 0 || ${e[0]} then x else ${q} ((${e[1]}) % 1000000007) (fuel - 1)\n`;
        return pr(p, i, `toString (${q} ${e[2]} (bb ${k.n}))`);
      }
      if (k.k === 'wf') {
        s += `def ${q}_pred (m : Nat) : Bool := ${e[0]}\ndef ${q} (lo hi : Nat) : Nat :=\n  if h : lo < hi then (if ${q}_pred ((lo + hi) / 2) then ${q} lo ((lo + hi) / 2) else ${q} ((lo + hi) / 2 + 1) hi) else lo\ntermination_by hi - lo\ndecreasing_by all_goals omega\n`;
        return pr(p, i, `toString (${q} 0 (bb ${k.hi}))`);
      }
      // while, with continue and break
      s += `def ${q} (n : Nat) : ${T} := Id.run do\n  let mut i := 0\n  let mut acc : ${T} := ${e[2]}\n  while i < n do\n    i := i + 1\n    if ${e[0]} then continue\n    acc := (${e[1]})${m}\n    if acc == ${e[3]} then break\n  return acc\n`;
      return pr(p, i, `toString (${q} (bb ${k.n}))`);
    });
    return `${s}def ${p} : IO Unit := do\n${body.join('\n')}\n  pure ()\n`;
  },
  struct(c, p) {
    const A = `${p}_A`, B = `${p}_B`, all = [...c.fa, ...c.fb];
    const field = (f, j) => `  f${j} : ${lt(f.t)}${f.def ? ` := ${R(f.e[0])}` : ''}\n`;
    let s = `structure ${A} where\n${c.fa.map((f, j) => field(f, j)).join('')}deriving Repr, BEq, Hashable, Ord, Inhabited\n`;
    s += `structure ${B} extends ${A} where\n${c.fb.map((f, j) => field(f, j + c.fa.length)).join('')}deriving Repr, BEq, Hashable, Ord, Inhabited\n`;
    c.vals.forEach((v, n) => {
      const fs = all.map((f, j) => v.give[j] ? `f${j} := ${R(v.e[j])}` : null).filter(Boolean);
      s += `def ${p}_v${n} : ${B} := { ${fs.join(', ')} }\n`;
    });
    const body = c.chk.map((k, i) => {
      const a = `${p}_v${k.i}`, b = `${p}_v${k.j}`;
      if (k.k === 'repr') return pr(p, i, reprOf(a));
      if (k.k === 'compare') return pr(p, i, reprOf(`compare ${a} ${b}`));
      if (k.k === 'beq') return pr(p, i, `toString (${a} == ${b})`);
      if (k.k === 'hash') return pr(p, i, `toString (hash ${a})`);
      if (k.k === 'sort') return pr(p, i, reprOf(`[${c.vals.map((_, n) => `${p}_v${n}`).join(', ')}].mergeSort (fun x y => compare x y != .gt)`));
      if (k.k === 'update') return pr(p, i, reprOf(`({ ${a} with f0 := ${R(k.e[0])} } : ${B})`));
      return pr(p, i, reprOf(`${a}.to${A}`));
    });
    return `${s}def ${p} : IO Unit := do\n${body.join('\n')}\n  pure ()\n`;
  },
  exc(c, p) {
    return `inductive ${p}_Err where\n  | bad (n : Nat)\n  | msg (s : String)\nderiving Repr\n` +
      `def ${p}_body (r : IO.Ref Nat) : ExceptT ${p}_Err (StateT Nat IO) Nat := do\n${renderExcStmts(c.s, 1, p).join('\n')}\n  return (← get) + (← r.get)\n` +
      `def ${p} : IO Unit := do\n  let r ← IO.mkRef (0 : Nat)\n  let (res, s) ← ((${p}_body r).run).run 0\n  match res with\n  | .ok v => IO.println s!"${p} ok {v} {s} {← r.get}"\n  | .error e => IO.println s!"${p} error {(repr e).pretty} {s} {← r.get}"\n`;
  },
};
export function renderFeature(c, name) { return RENDER[c.fam](c, name); }

export function genFeatureCase(seed, index, { families = FAMILIES } = {}) {
  const r = rng(seed, 'feat', index);
  setNameBase(index * 1000 + 500000);
  const fam = r.weighted(families.map(f => ({ f, w: WEIGHT[f] }))).f;
  return { kind: 'feat', ...GEN[fam](r) };
}
export function genFeatureProgram(seed, { cases = 60, families, indices } = {}) {
  const ids = indices ?? Array.from({ length: cases }, (_, i) => i);
  return ids.map(i => ({ index: i, c: genFeatureCase(seed, i, { families }) }));
}

// ---------- size and shrinking ----------
// The size: expression nodes, term nodes, statements, checks and rules.
export function featureSize(c) {
  let n = 0;
  const walk = (x, key) => {
    if (Array.isArray(x)) { if (key === 'chk' || key === 'rules' || key === 's' || key === 'b' || key === 'c') n += x.length; for (const y of x) walk(y, key === 'e' ? 'expr' : null); return; }
    if (!x || typeof x !== 'object') return;
    if (key === 'expr') { n += exprSize(x); return; }
    if (key === 'term') { n += termSize(x); return; }
    for (const [k, v] of Object.entries(x)) walk(v, k);
  };
  walk(c, null);
  return n;
}
function* termShrinks(t) {
  if (t.c === 'lit') { if (t.v !== '0') yield { c: 'lit', v: '0' }; return; }
  if (t.c === 'var') { yield { c: 'lit', v: '1' }; return; }
  yield { c: 'lit', v: '0' };
  // Subterms that keep their scope (letE's body has one more variable).
  for (const [i, k] of t.k.entries()) if (!(t.c === 'letE' && i === 1)) yield k;
  for (let i = 0; i < t.k.length; i++) for (const s of termShrinks(t.k[i])) yield { ...t, k: t.k.map((x, j) => j === i ? s : x) };
}
const COUNTS = new Set(['n', 'hi']);
// Every one-step-smaller variant of the tree x: yields [replacement].
function* treeShrinks(x, key) {
  if (Array.isArray(x)) {
    if (['chk', 'rules', 'cong', 's', 'b', 'c'].includes(key)) for (let i = 0; i < x.length; i++) yield [...x.slice(0, i), ...x.slice(i + 1)];
    for (let i = 0; i < x.length; i++) {
      const sub = key === 'e' || key === 'env' ? exprShrinks(x[i]) : treeShrinks(x[i], key === 's' || key === 'b' || key === 'c' ? 'stmt' : null);
      for (const s of sub) yield x.map((y, j) => j === i ? s : y);
    }
    return;
  }
  if (!x || typeof x !== 'object') return;
  for (const [k, v] of Object.entries(x)) {
    if (k === 'term') { for (const s of termShrinks(v)) yield { ...x, term: s }; continue; }
    if (COUNTS.has(k)) {
      if (k === 'hi' && v !== '0') yield { ...x, hi: v.length > 4 ? '1000' : '0' };
      if (k === 'n' && typeof v === 'number' && v > 0) { yield { ...x, n: 0 }; if (v > 10) yield { ...x, n: Math.floor(v / 10) }; }
      continue;
    }
    if (typeof v === 'object' && v !== null) for (const s of treeShrinks(v, k)) yield { ...x, [k]: s };
  }
}
export function featureShrinks(c, limit = 60) {
  const out = [], seen = new Set([JSON.stringify(c)]);
  for (const x of treeShrinks(c, null)) {
    const key = JSON.stringify(x);
    if (!seen.has(key)) { seen.add(key); out.push(x); }
    if (out.length >= limit * 4) break;
  }
  return out.sort((a, b) => featureSize(a) - featureSize(b)).slice(0, limit);
}
export { exprType };
