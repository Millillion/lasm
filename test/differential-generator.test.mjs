// The differential tester's generator (scripts/differential/generate-web.mjs): seeded,
// reproducible, cases independent of each other, shrinking strictly smaller.
// Whether generated programs compile and agree is checked by the campaign itself
// (differential.yml), which builds them with native Lean.
import test from 'node:test';
import assert from 'node:assert/strict';
import { genProgram, renderProgram, genCase, renderCase, caseSize, shrinkCandidates, leanString, rng, withoutSleep, withDeepAtMost } from '../scripts/differential/generate-web.mjs';

test('the same seed renders the same program; another seed a different one', () => {
  const a = renderProgram(genProgram(7, { cases: 40 })), b = renderProgram(genProgram(7, { cases: 40 }));
  assert.equal(a, b);
  assert.notEqual(a, renderProgram(genProgram(8, { cases: 40 })));
});

test('a case depends only on (seed, index), not on the other cases', () => {
  const all = genProgram(11, { cases: 30 });
  const some = genProgram(11, { indices: [3, 17, 29] });
  for (const item of some) assert.deepEqual(item.c, all[item.index].c);
});

test('every case kind is generated, and every case prints lines starting with its id', () => {
  const kinds = new Set();
  for (let i = 0; i < 400; i++) {
    const c = genCase(5, i, { kinds: ['expr', 'state', 'io', 'task', 'fs'] });
    kinds.add(c.kind);
    const text = renderCase(c, `c${i}`);
    for (const [, line] of text.matchAll(/IO\.println (?:s!)?\(?"([^"]*)/g)) assert.match(line, new RegExp(`^c${i} `), text);
  }
  assert.deepEqual([...kinds].sort(), ['expr', 'fs', 'io', 'state', 'task']);
});

test('shrink candidates are strictly smaller or simpler and keep the case kind', () => {
  for (let i = 0; i < 60; i++) {
    const c = genCase(3, i);
    for (const s of shrinkCandidates(c)) {
      assert.equal(s.kind, c.kind);
      assert.ok(caseSize(s) <= caseSize(c));
      assert.notDeepEqual(s, c);
    }
  }
});

test('string literals escape quotes, backslashes and control characters', () => {
  assert.equal(leanString('a"b\\c\n\t\u0001'), '"a\\"b\\\\c\\n\\t\\x01"');
  assert.equal(leanString('é😀'), '"é😀"');
});

test('the PRNG is uniform enough to reach both ends of a range', () => {
  const r = rng('x'); const seen = new Set();
  for (let i = 0; i < 2000; i++) seen.add(r.int(0, 9));
  assert.equal(seen.size, 10);
});

test('withoutSleep drops every IO.sleep (nested bodies too) and keeps everything else', () => {
  const list = genProgram(21, { cases: 300 });
  const before = renderProgram(list), after = renderProgram(withoutSleep(list));
  assert.match(before, /IO\.sleep/);
  assert.doesNotMatch(after, /IO\.sleep/);
  assert.equal(after, before.split('\n').filter(line => !/^\s*IO\.sleep \d+$/.test(line)).join('\n'));
  assert.deepEqual(withoutSleep(list).map(x => x.index), list.map(x => x.index));
});

test('withDeepAtMost caps deep cases and leaves every other case as it is', () => {
  const list = genProgram(4, { cases: 400 });
  const capped = withDeepAtMost(list, 1000);
  assert.ok(list.some(x => x.c.kind === 'deep' && x.c.n > 1000));
  for (const [i, x] of capped.entries()) {
    if (x.c.kind === 'deep') assert.equal(x.c.n, Math.min(list[i].c.n, 1000));
    else assert.equal(x, list[i]);
  }
});
