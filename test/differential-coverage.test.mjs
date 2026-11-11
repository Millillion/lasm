// Coverage feedback for differential fuzzing (scripts/differential/coverage.mjs,
// docs/TESTING.md#coverage-feedback): the features read from Lean's C and from
// V8 coverage, the corpus, and mutants that stay well-formed, no deeper than
// their parent, and reproducible. Whether mutants compile and agree is checked
// by the guided campaigns themselves (differential.yml), which build them with
// native Lean.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { callGraph, cFeatures, cName, glueFeatures, Coverage, mutate, mutants, loadState, MUTABLE, MAX_CORPUS } from '../scripts/differential/coverage.mjs';
import { genProgram, genCase, renderCase, renderProgram, rng, OPS } from '../scripts/differential/generate.mjs';

// The shape of what `lean -c` emits (Lean 4.35.0): declarations, globals with
// and without initializers, closed terms set by `_init_` functions, specializations.
const C = `lean_object* l_Nat_reprFast(lean_object*);
static const lean_string_object l_c0___closed__0_value = {.m_header = {.m_rc = 0}, .m_data = "c0 {"};
static const lean_object* l_c0___closed__0 = (const lean_object*)&l_c0___closed__0_value;
static lean_once_cell_t l_c1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_c1___closed__0;
static const lean_closure_object l_c1___closed__1_value = {.m_fun = (void*)l_c1___lam__0, .m_arity = 1};
static const lean_object* l_c1___closed__1 = (const lean_object*)&l_c1___closed__1_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00c1_spec__0(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_r_3_;
v_r_3_ = lean_nat_add(v_x_1_, v_x_2_);
return v_r_3_;
}
}
LEAN_EXPORT lean_object* l_c0(){
_start:
{
lean_object* v_s_4_;
v_s_4_ = lean_string_append(l_c0___closed__0, l_c0___closed__0);
return v_s_4_;
}
}
static lean_object* _init_l_c1___closed__0(void){
_start:
{
lean_object* v_x_5_;
v_x_5_ = l_Nat_reprFast(lean_box(0));
return v_x_5_;
}
}
LEAN_EXPORT lean_object* l_c1___lam__0(lean_object* v_a_6_){
_start:
{
if (lean_obj_tag(v_a_6_) == 0)
{
return l_List_foldl___at___00c1_spec__0(v_a_6_, v_a_6_);
}
else
{
return v_a_6_;
}
}
}
LEAN_EXPORT lean_object* l_c1(){
_start:
{
lean_object* v_x_7_;
v_x_7_ = lean_obj_once(&l_c1___closed__0, &l_c1___closed__0_once, _init_l_c1___closed__0);
return lean_apply_1(l_c1___closed__1, v_x_7_);
}
}
`;

test('runtime C: each case reaches the runtime and library symbols of its own call graph, through closed terms and closures', () => {
  const graph = callGraph(C);
  assert.ok(graph.has('l_c0') && graph.has('l_c1') && graph.has('_init_l_c1___closed__0'));
  const f = cFeatures(C, ['l_c0', 'l_c1']);
  assert.deepEqual([...f.get('l_c0')].sort(), ['c:lean_string_append', 'e:case>lean_string_append']);
  const c1 = f.get('l_c1');
  for (const x of ['c:lean_obj_once', 'c:lean_apply_1', 'c:l_Nat_reprFast', 'c:lean_box', 'c:lean_obj_tag', 'c:lean_nat_add', 'spec:l_List_foldl', 'e:l_List_foldl>lean_nat_add', 'e:case>l_Nat_reprFast'])
    assert.ok(c1.has(x), x);
  // Types, the program's own names and initializers are not features; the braces in a string literal do not end a function.
  assert.ok(![...c1].some(x => /lean_object|lean_closure_object|_init_|l_c1___/.test(x)));
  assert.equal(cName('c12'), 'l_c12');
  assert.equal(cName('r_node_1'), 'l_r__node__1');
});

test('glue: executed functions and the branch directions V8 lists, named by their source text', () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-glue-'));
  try {
    mkdirSync(join(dir, 'dist/host'), { recursive: true });
    const host = 'export function a(x) { if (x) return 1; return 2 }\nexport function b() { return 3 }\n';
    writeFileSync(join(dir, 'dist/host/h.mjs'), host);
    writeFileSync(join(dir, 'dist/main.mjs'), 'import { a } from "./host/h.mjs"; a(1);\n');
    const fn = host.indexOf('function a'), end = host.indexOf('\nexport function b');
    const cov = (count, block) => ({ result: [
      { url: pathToFileURL(join(dir, 'dist/main.mjs')).href, functions: [{ functionName: '', ranges: [{ startOffset: 0, endOffset: 64, count: 1 }] }] },
      { url: pathToFileURL(join(dir, 'dist/host/h.mjs')).href, functions: [
        { functionName: 'a', ranges: [{ startOffset: fn, endOffset: end, count }, { startOffset: fn + block, endOffset: fn + block + 9, count: 0 }] },
        { functionName: 'b', ranges: [{ startOffset: end + 8, endOffset: host.length - 1, count: 0 }] }] },
      { url: 'node:internal/x', functions: [{ functionName: 'y', ranges: [{ startOffset: 0, endOffset: 1, count: 1 }] }] }] });
    mkdirSync(join(dir, 'v8'));
    writeFileSync(join(dir, 'v8/coverage-1.json'), JSON.stringify(cov(1, 31)));
    const f = [...glueFeatures(join(dir, 'v8'), dir)].sort();
    assert.equal(f.length, 3, f.join(' '));
    assert.ok(f.includes('glue:main.mjs'));
    assert.ok(f.some(x => /^glue:host\/h\.mjs:a#[0-9a-f]{12}$/.test(x)));
    assert.ok(f.some(x => /^glue:host\/h\.mjs:a#[0-9a-f]{12}-31$/.test(x)));
    assert.deepEqual([...glueFeatures(join(dir, 'missing'), dir)], []);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

test('the corpus keeps the cases that reach something new, and only mutable kinds', () => {
  const cov = new Coverage({ features: ['c:old'], corpus: [], nights: [] });
  const expr = genCase(1, 0, { kinds: ['expr'] });
  assert.deepEqual(cov.add(new Set(['c:old', 'c:a']), { seed: 1, index: 0, kind: 'core', c: expr }), ['c:a']);
  assert.deepEqual(cov.add(new Set(['c:a']), { seed: 1, index: 1, kind: 'core', c: expr }), []);
  assert.deepEqual(cov.add(new Set(['c:b']), { seed: 1, index: 2, kind: 'feat', c: { kind: 'feat', fam: 'loop' } }), ['c:b']);
  assert.equal(cov.corpus.length, 1);
  assert.deepEqual(cov.add(new Set(['c:c', 'c:d']), { seed: 2, index: 0, kind: 'core', c: expr, from: { seed: 1, index: 0 } }), ['c:c', 'c:d']);
  const s = cov.summary();
  assert.deepEqual([s.features, s.new, s.cumulative, s.before, s.corpus, s.newFrom.mutant, s.newFrom.generated], [5, 4, 5, 1, 2, 2, 2]);
  cov.add(new Set(['glue:main.mjs', 'e:case>lean_box']), null);
  assert.deepEqual([cov.summary().runtimeC, cov.summary().glue, cov.summary().features], [6, 1, 7]);
  assert.ok(MUTABLE.has('expr') && !MUTABLE.has('feat') && !MUTABLE.has('fs'));
  // Bounded: the entry that added least goes first.
  for (let i = 0; i < MAX_CORPUS + 5; i++) cov.add(new Set([`c:x${i}`]), { seed: 3, index: i, kind: 'core', c: expr });
  assert.equal(cov.corpus.length, MAX_CORPUS);
  assert.ok(cov.corpus.some(e => e.gain === 2));
});

test('state: features carry over; a corpus written by another generator is dropped', () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-covstate-'));
  try {
    const cov = new Coverage({ features: [], corpus: [], nights: [] });
    cov.add(new Set(['c:a']), { seed: 1, index: 0, kind: 'core', c: genCase(1, 0, { kinds: ['expr'] }) });
    const file = join(dir, 'state.json');
    const fresh = loadState(file);
    assert.equal(fresh.loaded, false);
    writeFileSync(file, JSON.stringify(cov.state(fresh.generator, { date: '2026-11-11', new: 1 })));
    const again = loadState(file);
    assert.deepEqual([again.loaded, again.features, again.corpus.length, again.nights.length], [true, ['c:a'], 1, 1]);
    writeFileSync(file, JSON.stringify(cov.state('another', { date: '2026-11-11' })));
    const other = loadState(file);
    assert.deepEqual([other.features, other.corpus.length, other.droppedCorpus], [['c:a'], 0, 1]);
    writeFileSync(file, 'not json');
    assert.equal(loadState(file).loaded, false);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});

const height = e => e.var || e.v !== undefined ? 1 : 1 + Math.max(0, ...e.k.map(height));
const exprsOf = c => c.kind === 'expr' ? [c.e] : (function walk(ss) { return ss.flatMap(s => [...(s.e ?? []), ...walk(s.b ?? []), ...walk(s.c ?? [])]); })(c.s ?? []);
// Every node's type is the type its parent's operation expects there.
function typed(e, t) {
  if (e.var) return e.t === t;
  const o = OPS[e.op];
  if (o.t !== t) return false;
  if (e.v !== undefined) return true;
  const want = o.bind ? [...o.args, o.bind.body] : o.args;
  return e.k.length === want.length && e.k.every((k, i) => typed(k, want[i]));
}
const exprType = e => e.var ? e.t : OPS[e.op].t;

test('mutants keep their kind, their types and their depth bound, never use extension operations, and render', () => {
  let changed = 0;
  for (let i = 0; i < 300; i++) {
    const c = genCase(13, i);
    const m = mutate(rng('m', i), c);
    if (!m) continue;
    assert.equal(m.kind, c.kind);
    if (JSON.stringify(m) !== JSON.stringify(c)) changed++;
    if (c.kind === 'expr') {
      assert.equal(m.t, c.t);
      assert.ok(typed(m.e, c.t));
      assert.ok(height(m.e) <= height(c.e));
    }
    for (const e of exprsOf(m)) assert.ok(typed(e, exprType(e)));
    const ext = JSON.stringify(m).match(/"op":(\d+)/g)?.map(x => Number(x.slice(5))) ?? [];
    assert.ok(ext.every(id => !OPS[id].ext), 'no extension operation in a core case');
    if (c.kind === 'deep') assert.ok([100, 1000, 3000, 5000].includes(m.n));
    const text = renderCase(m, `c${i}`);
    for (const [, line] of text.matchAll(/IO\.println (?:s!)?\(?"([^"]*)/g)) assert.match(line, new RegExp(`^c${i} `));
  }
  assert.ok(changed > 200, `${changed} of 300 mutated`);
});

test('a mutant under an operation that wants exact arguments draws no inexact (libm) operation', () => {
  for (let i = 0; i < 400; i++) {
    const c = genCase(17, i, { kinds: ['expr'] });
    const m = mutate(rng('x', i), c);
    if (!m) continue;
    (function walk(e, exact) {
      if (e.var || e.v !== undefined) return;
      const o = OPS[e.op];
      if (exact) assert.ok(!o.inexact, `inexact ${o.id} under an exact parent`);
      e.k.forEach(k => walk(k, exact || !!o.exactArgs));
    })(m.e, false);
  }
});

test('mutants of a corpus are reproducible from (seed, corpus), and a guided program renders', () => {
  const cov = new Coverage({ features: [], corpus: [], nights: [] });
  for (const item of genProgram(4, { cases: 40 })) cov.add(new Set([`c:${item.index}`]), { seed: 4, index: item.index, kind: 'core', c: item.c });
  const a = mutants(cov, 99, 10), b = mutants(cov, 99, 10);
  assert.deepEqual(a, b);
  assert.notDeepEqual(a, mutants(cov, 100, 10));
  assert.ok(a.length >= 8 && a.every(m => m.from.seed === 4));
  assert.deepEqual(mutants(new Coverage({ features: [], corpus: [], nights: [] }), 1, 10), []);
  const list = genProgram(99, { cases: 40 });
  a.forEach((m, j) => { list[30 + j] = { index: 30 + j, c: m.c, from: m.from }; });
  assert.match(renderProgram(list), /def c39 : IO Unit/);
});
