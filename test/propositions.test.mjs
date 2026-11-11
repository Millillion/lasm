// The proposition lint (scripts/propositions.mjs, docs/TESTING_STRATEGY.md §4):
// the repository passes it, and it catches each kind of broken reference.
import assert from 'node:assert/strict';
import { execFileSync } from 'node:child_process';
import { mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import test from 'node:test';
import { check, readCitations, readPropositions, summary, testedBy } from '../scripts/propositions.mjs';

test('lint: every cited proposition exists with the statement cited, every candidate is tested and cited, PROOFS.md is current', () => {
  const result = check();
  assert.deepEqual(result.problems, []);
  const s = summary(result);
  assert.ok(s.candidates >= 10, `${s.candidates} candidates`);
  assert.ok(s.citations >= s.candidates, `${s.citations} citations`);
  // Exit bar 7 (docs/TESTING_STRATEGY.md §7), held once reached: every
  // JavaScript property names its proposition, and every fuzz oracle but the
  // WASI C host's CGI target (src/wasi/lasm_fetch_wasi.c, which goes with
  // Lasm.Fetch).
  assert.deepEqual(s.properties.unnamed, [], 'every forAll property names a proposition');
  assert.deepEqual(s.oracles.unnamed.filter(id => id !== 'wasi-cgi'), [], 'every fuzz oracle names a proposition');
});

test('readPropositions: namespace, one-line and indented statements, doc comments', () => {
  const props = readPropositions([
    'namespace Lasm.X.Spec', '', '/-- **A.** Tested by: test/a.mjs -/', 'def a : Prop :=', '  ∀ n : Nat,', '    n = n', '',
    'def b (n : Nat) : Prop := n = n', 'theorem c : True := trivial', 'end Lasm.X.Spec'].join('\n'), 'f.lean');
  assert.deepEqual(props.map(p => [p.name, p.statement, p.line]), [['Lasm.X.Spec.a', '∀ n : Nat, n = n', 4], ['Lasm.X.Spec.b', 'n = n', 8]]);
  assert.equal(props[0].doc, '**A.** Tested by: test/a.mjs');
  assert.deepEqual(testedBy(props[0].doc), ['test/a.mjs']);
  assert.deepEqual(testedBy('x. Tested by: test/a.mjs, test/fuzz/b.lean.'), ['test/a.mjs', 'test/fuzz/b.lean']);
});

test('readCitations: JavaScript and Lean comments, the statement on the more indented lines after', () => {
  const cites = readCitations([
    '// Proposition: Lasm.X.Spec.a', '//   ∀ n : Nat,', '//     n = n', '// not the statement', 'code();',
    '  -- Proposition: Lasm.X.Candidates.b', '  --   n = n', '  -- Proposition: Lasm.X.Spec.c', 'x'].join('\n'));
  assert.deepEqual(cites.map(c => [c.name, c.statement]), [['Lasm.X.Spec.a', '∀ n : Nat, n = n'], ['Lasm.X.Candidates.b', 'n = n'], ['Lasm.X.Spec.c', '']]);
});

test('check: dangling names, wrong or missing statements, untested and uncited candidates, a stale PROOFS.md', () => {
  const root = mkdtempSync(join(tmpdir(), 'lasm-propositions-'));
  try {
    const put = (path, text) => { mkdirSync(dirname(join(root, path)), { recursive: true }); writeFileSync(join(root, path), text); };
    put('library/Lasm/X/Spec.lean', 'namespace Lasm.X.Spec\n/-- A. -/\ndef a : Prop :=\n  ∀ n : Nat, n = n\nend Lasm.X.Spec\n');
    put('library/Lasm/X/Candidates.lean', [
      'namespace Lasm.X.Candidates',
      '/-- B. Tested by: test/b.test.mjs -/', 'def b : Prop :=', '  ∀ n : Nat, n + 0 = n',
      '/-- C. Tested by: test/missing.mjs -/', 'def c : Prop :=', '  True',
      '/-- D. Tested by: test/b.test.mjs -/', 'def d : Prop :=', '  True',
      '/-- E. -/', 'def e : Prop :=', '  True', 'end Lasm.X.Candidates', ''].join('\n'));
    put('verification/v/Lasm/V/Candidates.lean', 'namespace Lasm.V.Candidates\n/-- F. Tested by: test/b.test.mjs -/\ndef f : Prop :=\n  True\nend Lasm.V.Candidates\n');
    put('verification/v/README.md', '# V\n<!-- BEGIN CANDIDATES -->\n<!-- END CANDIDATES -->\n');
    put('test/b.test.mjs', [
      '// Proposition: Lasm.V.Candidates.f', '//   True',
      '// Proposition: Lasm.X.Candidates.b', '//   ∀ n : Nat,  n + 0 = n',
      '// Proposition: Lasm.X.Spec.a', '//   ∀ n : Nat, n = 0',
      '// Proposition: Lasm.X.Spec.gone', '//   True',
      '// Proposition: Lasm.X.Spec.a', 'test("property: x", () => forAll(g, p));', ''].join('\n'));
    put('test/fuzz/native/targets.json', '{}');
    put('test/fuzz/native/LasmFuzz.lean', '');
    put('library/PROOFS.md', '# Proofs\n<!-- BEGIN CANDIDATES -->\n<!-- END CANDIDATES -->\n');
    execFileSync('git', ['init', '-q'], { cwd: root });
    const { problems } = check({ root });
    const has = re => assert.ok(problems.some(p => re.test(p)), `no problem matching ${re} in\n${problems.join('\n')}`);
    has(/test\/b\.test\.mjs:5: the statement of Lasm\.X\.Spec\.a differs/);
    has(/test\/b\.test\.mjs:7: Proposition: Lasm\.X\.Spec\.gone names no Spec\.lean or Candidates\.lean definition/);
    has(/test\/b\.test\.mjs:9: Proposition: Lasm\.X\.Spec\.a is not followed by its statement/);
    has(/Lasm\.X\.Candidates\.c is tested by test\/missing\.mjs, which does not exist/);
    has(/Lasm\.X\.Candidates\.d is tested by test\/b\.test\.mjs, which does not cite it/);
    has(/candidate Lasm\.X\.Candidates\.e has no `Tested by:` line/);
    has(/library\/PROOFS\.md's candidates are out of date/);
    has(/verification\/v\/README\.md's candidates are out of date/);
    assert.ok(!problems.some(p => /Candidates\.[bf]\b/.test(p)), 'b and f are cited with their statements (whitespace aside)');
    assert.equal(problems.length, 8, problems.join('\n'));
    const s = summary(check({ root, write: true }));
    assert.deepEqual([s.proved, s.candidates, s.properties.total, s.properties.named], [1, 5, 1, 1]);
    assert.deepEqual(check({ root }).problems.filter(p => /PROOFS|README/.test(p)), [], '--write brings PROOFS.md and the README up to date');
    assert.doesNotMatch(readFileSync(join(root, 'library/PROOFS.md'), 'utf8'), /Lasm\.V/, 'PROOFS.md lists only the library');
    assert.match(readFileSync(join(root, 'verification/v/README.md'), 'utf8'), /### Lasm\.V \(1\)\n[\s\S]*\[`f`\]\(Lasm\/V\/Candidates\.lean#L3\) \| F\. \| \[test\/b\.test\.mjs\]\(\.\.\/\.\.\/test\/b\.test\.mjs\)/);
  } finally {
    rmSync(root, { recursive: true, force: true });
  }
});
