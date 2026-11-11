// Coverage feedback for differential fuzzing (docs/TESTING.md#coverage-feedback).
//
// Two measures of what a generated program reaches, both free (no extra build
// and no extra run):
//
//   runtime C  For each case, the Lean runtime functions (`lean_*`) and the
//              compiled library declarations (`l_*` of Init, Std, Lean) that its
//              definition reaches in the C that native Lean emits for the
//              program (`lean -c`, the oracle's own build step): a call-graph
//              walk from `l_cN` through the program's own functions, closed
//              terms and their initializers. One feature per external symbol,
//              plus `spec:NAME` for each library function the compiler
//              specialized for the case (`NAME___at___…_spec__N`), plus
//              `e:ORIGIN>SYMBOL` for each call edge from the program's code (a
//              specialization, the case, a preamble function) to such a
//              symbol. The same code is what Lasm compiles into Wasm for it.
//   glue       The functions of Lasm's JavaScript (dist/main.mjs, program.cjs,
//              the host modules) that the node target executed, and the
//              branch directions inside them (a block V8 lists, taken or
//              skipped), from V8's block coverage (NODE_V8_COVERAGE on the node
//              run). A function is named by a hash of its source text, a block
//              by its offset inside it, so a name is the same in every program
//              whose glue has that function unchanged.
//
// The corpus (run.mjs --guided) keeps the cases that add a feature nobody had,
// and later programs replace a share of their cases with mutants of corpus
// entries (mutate below): a well-typed subexpression replaced by a fresh one of
// the same type and no deeper, a statement regenerated, a workload changed.
import { readdirSync, readFileSync, existsSync } from 'node:fs';
import { join, resolve, relative, sep } from 'node:path';
import { createHash } from 'node:crypto';
import { fileURLToPath } from 'node:url';
import { rng, genExpr, exprType, OPS, regenStatement, setNameBase, DEEP_COUNT, DEEP_SIZES } from './generate.mjs';

// ---------- runtime C: a call graph of the C that `lean -c` emits ----------
// Strips string and character literals (they may hold braces) and comments.
const code = line => line.replace(/"(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*'/g, '""').replace(/\/\/.*$/, '');
const IDENT = /\b(?:lean_\w+|l_\w+|lp_\w+|_init_\w+)\b/g;
/** The program's own definitions (functions and globals) and what each names: Map<name, Set<name>>. */
export function callGraph(c) {
  const defs = new Map();
  const lines = c.split('\n');
  let cur = null, depth = 0;
  for (const raw of lines) {
    const line = code(raw);
    if (cur) {
      for (const m of line.matchAll(IDENT)) cur.add(m[0]);
      for (const ch of line) { if (ch === '{') depth++; else if (ch === '}') depth--; }
      if (depth <= 0) cur = null;
      continue;
    }
    // A function definition: `LEAN_EXPORT T name(params){` or `static T name(void){`.
    const fn = /^(?:LEAN_EXPORT |static )?[\w ]+?\**\s*\b((?:l_|lp_|_init_l_|_init_lp_)\w+)\([^;]*\)\s*\{\s*$/.exec(line);
    if (fn) {
      cur = new Set(); defs.set(fn[1], cur); depth = 0;
      for (const ch of line) { if (ch === '{') depth++; else if (ch === '}') depth--; }
      continue;
    }
    // A global with an initializer: `static const T name = …;` (closed terms, boxed constants, closures).
    const gl = /^(?:LEAN_EXPORT |static )?(?:const )?[\w ]+?\**\s*\b((?:l_|lp_)\w+)\s*=(.*)$/.exec(line);
    if (gl) {
      const names = new Set([...gl[2].matchAll(IDENT)].map(m => m[0]));
      defs.set(gl[1], new Set([...(defs.get(gl[1]) ?? []), ...names]));
      continue;
    }
    // A global without one (`static lean_object* l_c3___closed__8;`): set by `_init_l_c3___closed__8`.
    const decl = /^(?:LEAN_EXPORT |static )?[\w ]+?\**\s*\b((?:l_|lp_)\w+);\s*$/.exec(line);
    if (decl && !defs.has(decl[1])) defs.set(decl[1], new Set());
  }
  // A global set by an initializer reaches what the initializer reaches.
  for (const [name, refs] of defs) if (defs.has(`_init_${name}`)) refs.add(`_init_${name}`);
  return defs;
}
// `l_List_foldl___at___00c0_spec__0` → `l_List_foldl`: the library function specialized.
const specOf = name => /^(l_\w+?)___at___/.exec(name)?.[1] ?? null;
const isType = name => /^lean_\w*(?:object|_t)$/.test(name);
// Where a function of the program comes from: a library function specialized
// for it, the case itself (`l_c3`, its lambdas and closed terms), or a preamble
// definition (`l_fibL`, `l_Tree_depth`).
const origin = name => {
  const n = name.replace(/^_init_/, '');
  return specOf(n) ?? (/^l_(?:c\d+|r__)(?:_|$)/.test(n) ? 'case' : n.replace(/___.*$/, ''));
};
/** The runtime-C features of each case root (`l_c3`, `l_r_name`): Map<root, Set<feature>>.
 * `c:X`: the case reaches the runtime function or library declaration X;
 * `spec:F`: the compiler specialized the library function F for it;
 * `e:O>X`: X is called from code of origin O (a specialization, the case, a preamble function). */
export function cFeatures(c, roots) {
  const defs = callGraph(c);
  const out = new Map();
  for (const root of roots) {
    const seen = new Set(), feats = new Set(), todo = [root];
    while (todo.length) {
      const n = todo.pop();
      if (seen.has(n)) continue;
      seen.add(n);
      const refs = defs.get(n);
      if (!refs) continue;
      const s = specOf(n); if (s) feats.add(`spec:${s}`);
      for (const r of refs) {
        if (defs.has(r)) { if (!seen.has(r)) todo.push(r); continue; }
        if (r.startsWith('_init_') || isType(r)) continue;
        feats.add(`c:${r}`);
        feats.add(`e:${origin(n)}>${r}`);
      }
    }
    out.set(root, feats);
  }
  return out;
}
/** The C name of a case's definition (`c3` → `l_c3`; `_` is written `__`). */
export const cName = name => `l_${name.replace(/_/g, '__')}`;

// ---------- glue: V8 block coverage of the node target's JavaScript ----------
const hash = s => createHash('sha256').update(s).digest('hex').slice(0, 12);
/** The executed blocks of the scripts under `root` in the NODE_V8_COVERAGE directory `dir`: Set<feature>. */
export function glueFeatures(dir, root) {
  const feats = new Set();
  if (!existsSync(dir)) return feats;
  const sources = new Map();
  for (const f of readdirSync(dir).filter(f => f.endsWith('.json'))) {
    let data;
    try { data = JSON.parse(readFileSync(join(dir, f), 'utf8')); } catch { continue; }
    for (const script of data.result ?? []) {
      if (!script.url?.startsWith('file:')) continue;
      let file;
      try { file = fileURLToPath(script.url); } catch { continue; }
      const rel = relative(resolve(root), file);
      if (rel.startsWith('..') || rel.includes('node_modules')) continue;
      if (!sources.has(file)) { try { sources.set(file, readFileSync(file, 'utf8')); } catch { sources.set(file, null); } }
      const text = sources.get(file);
      if (text == null) continue;
      const name = rel.split(sep).join('/').replace(/^.*?dist\//, '');
      for (const fn of script.functions ?? []) {
        const [whole, ...blocks] = fn.ranges ?? [];
        if (!whole || whole.count === 0) continue;
        // V8 reports the top-level script as a function too: named by the file
        // alone (its text holds the program's own data), without its blocks.
        if (whole.startOffset === 0 && whole.endOffset >= text.length - 1) { feats.add(`glue:${name}`); continue; }
        const id = `${name}:${fn.functionName || '(anonymous)'}#${hash(text.slice(whole.startOffset, whole.endOffset))}`;
        feats.add(`glue:${id}`);
        // V8 lists a block only where its count differs from the enclosing one,
        // so a listed block is a branch direction: taken (+) or skipped (-).
        for (const b of blocks) feats.add(`glue:${id}${b.count > 0 ? '+' : '-'}${b.startOffset - whole.startOffset}`);
      }
    }
  }
  return feats;
}

// ---------- the corpus and the state kept between nights ----------
const here = fileURLToPath(new URL('.', import.meta.url));
/** A hash of the generator's source (what a corpus case means): a corpus written by another generator is dropped (its operation ids may differ). */
export function generatorVersion() {
  return hash(['generate.mjs', 'features.mjs'].map(f => readFileSync(join(here, f), 'utf8')).join('\0'));
}
export const MAX_CORPUS = 400;
/** The state of earlier campaigns (or a fresh one). Features persist across generator changes; the corpus does not. */
export function loadState(file) {
  const fresh = { schema: 1, generator: generatorVersion(), features: [], corpus: [], nights: [] };
  if (!file || !existsSync(file)) return { ...fresh, loaded: false };
  try {
    const s = JSON.parse(readFileSync(file, 'utf8'));
    if (s.schema !== 1) return { ...fresh, loaded: false };
    const same = s.generator === fresh.generator;
    return { ...fresh, features: s.features ?? [], corpus: same ? (s.corpus ?? []) : [], nights: s.nights ?? [], loaded: true, droppedCorpus: same ? 0 : (s.corpus ?? []).length };
  } catch { return { ...fresh, loaded: false }; }
}
export class Coverage {
  constructor(state) {
    this.before = new Set(state.features);      // every feature of earlier campaigns
    this.all = new Set(state.features);          // the same, plus this campaign's
    this.tonight = new Set();                    // this campaign's, old or new
    this.corpus = state.corpus.slice();
    this.nights = state.nights.slice();
    this.found = { generated: 0, mutant: 0 };    // new features, by where the case came from
    this.admitted = { generated: 0, mutant: 0 };
    this.mutants = 0;
  }
  /** Records one case's features; returns the features nobody had (and admits the case to the corpus if there are any). */
  add(feats, entry) {
    const fresh = [];
    for (const f of feats) { this.tonight.add(f); if (!this.all.has(f)) { this.all.add(f); fresh.push(f); } }
    if (fresh.length && entry) {
      const origin = entry.from ? 'mutant' : 'generated';
      this.found[origin] += fresh.length;
      if (entry.c && MUTABLE.has(entry.c.kind)) {
        this.admitted[origin]++;
        this.corpus.push({ ...entry, gain: fresh.length });
        if (this.corpus.length > MAX_CORPUS) {
          // Drop the entry with the smallest gain, oldest first.
          let k = 0;
          for (let i = 1; i < this.corpus.length; i++) if (this.corpus[i].gain < this.corpus[k].gain) k = i;
          this.corpus.splice(k, 1);
        }
      }
    }
    return fresh;
  }
  /** Picks a corpus entry, weighted by the features it added. */
  pick(r) {
    if (!this.corpus.length) return null;
    return r.weighted(this.corpus.map(e => ({ e, w: Math.sqrt(e.gain) }))).e;
  }
  summary() {
    const count = prefix => [...this.tonight].filter(f => f.startsWith(prefix)).length;
    const fresh = [...this.all].filter(f => !this.before.has(f));
    return {
      features: this.tonight.size, runtimeC: this.tonight.size - count('glue:'), glue: count('glue:'),
      new: fresh.length, newRuntimeC: fresh.filter(f => !f.startsWith('glue:')).length, newGlue: fresh.filter(f => f.startsWith('glue:')).length,
      cumulative: this.all.size, before: this.before.size,
      newFrom: { ...this.found }, admitted: { ...this.admitted }, mutants: this.mutants, corpus: this.corpus.length,
    };
  }
  state(generator, night) {
    const nights = [...this.nights, night].slice(-60);
    return { schema: 1, generator, features: [...this.all].sort(), corpus: this.corpus, nights };
  }
}

// ---------- mutation ----------
// Only the core kinds (expression trees and statement lists over the preamble)
// are mutated; feature and file-system cases are measured but not mutated.
export const MUTABLE = new Set(['expr', 'state', 'io', 'task', 'deep']);
const height = e => e.var || e.v !== undefined ? 1 : 1 + Math.max(0, ...e.k.map(height));
// Every subexpression with its path, its height from the root and whether an
// ancestor asks for exact (no libm) arguments.
function nodes(e, depth = 0, exact = false, path = [], out = []) {
  if (e.var) return out;
  out.push({ path, depth, exact, e });
  if (e.k) {
    const o = OPS[e.op], x = exact || !!o.exactArgs;
    e.k.forEach((k, i) => nodes(k, depth + 1, x, [...path, i], out));
  }
  return out;
}
const replaceAt = (e, path, sub) => path.length ? { ...e, k: e.k.map((k, i) => i === path[0] ? replaceAt(k, path.slice(1), sub) : k) } : sub;
/** A same-typed, closed subexpression replaced by a fresh one, without making the tree deeper. */
export function mutateExpr(r, e) {
  const max = height(e);
  const all = nodes(e);
  for (let tries = 0; tries < 8; tries++) {
    const n = r.pick(all);
    const room = max - n.depth;
    if (room < 1) continue;
    const sub = genExpr(r, exprType(n.e), Math.max(0, room - 2), [], n.exact ? { exact: true } : {});
    const out = replaceAt(e, n.path, sub);
    if (height(out) <= max && JSON.stringify(out) !== JSON.stringify(e)) return out;
  }
  return null;
}
function stmtExprs(ss, path = [], out = []) {
  ss.forEach((st, i) => {
    (st.e ?? []).forEach((e, j) => out.push({ path: [...path, i], j, e }));
    if (st.b) stmtExprs(st.b, [...path, i, 'b'], out);
    if (st.c) stmtExprs(st.c, [...path, i, 'c'], out);
  });
  return out;
}
function setStmt(ss, path, f) {
  const [i, key, ...rest] = path;
  return ss.map((st, k) => k !== i ? st : key === undefined ? f(st) : { ...st, [key]: setStmt(st[key], rest, f) });
}
/** One mutant of a core case, or null. Deterministic in r. */
export function mutate(r, c) {
  if (c.kind === 'expr') { const e = mutateExpr(r, c.e); return e && { ...c, e }; }
  if (c.kind === 'deep') {
    const n = r.chance(0.5) ? r.pick(DEEP_SIZES) : c.n, f = n === c.n ? (c.f + r.int(1, DEEP_COUNT - 1)) % DEEP_COUNT : c.f;
    return { ...c, f, n };
  }
  if (!c.s?.length) return null;
  // A statement's expression mutated, or one top-level statement regenerated.
  const exprs = stmtExprs(c.s);
  if (exprs.length && r.chance(0.6)) {
    const x = r.pick(exprs), e = mutateExpr(r, x.e);
    if (e) return { ...c, s: setStmt(c.s, x.path, st => ({ ...st, e: st.e.map((y, j) => j === x.j ? e : y) })) };
  }
  const i = r.int(0, c.s.length - 1);
  const st = regenStatement(r, c.kind, 2);
  return { ...c, s: c.s.map((x, k) => k === i ? st : x) };
}
/** The mutants a guided program carries: `share` of its cases, each from a corpus entry. */
export function mutants(cov, seed, count) {
  const r = rng(seed, 'mutants');
  const out = [];
  for (let i = 0; i < count && cov.corpus.length; i++) {
    const parent = cov.pick(r);
    setNameBase(900000 + i * 1000);
    const c = mutate(r, parent.c);
    if (c) out.push({ c, from: { seed: parent.seed, index: parent.index } });
  }
  return out;
}
