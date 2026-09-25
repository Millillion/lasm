import assert from 'node:assert/strict';
import { test } from 'node:test';
import { createHash } from 'node:crypto';
import { parallelEvalIOSource, reviewedEvalIOInput } from '../scripts/application-tests/eval-io-source.mjs';
import { readFileSync } from 'node:fs';

const name = 'elab/async_http_body.lean';
const source = Buffer.from('import Std.Http\n/-! λ #eval inside a comment -/\n#eval IO.println "日本語"\n#eval do\n  assert! true\n');
const expressions = ['IO.println "日本語"', 'do\n  assert! true'];
const ranges = expressions.map(expression => {
  const termStart = source.indexOf(Buffer.from(expression));
  return { start: termStart - 6, stop: termStart - 1, termStart, termStop: termStart + Buffer.byteLength(expression) };
});
const syntax = { ranges, commandKinds: ['Lean.Parser.Command.moduleDoc', 'Lean.Parser.Command.eval', 'Lean.Parser.Command.eval'] };

test('parallel IO adapter preserves UTF-8 expressions, comments and all assertions', () => {
  const result = parallelEvalIOSource(source, syntax, name);
  assert.equal(result.expressions.length, 2);
  assert.ok(result.generated.includes(Buffer.from('/-! λ #eval inside a comment -/')));
  for (const [i, expression] of expressions.entries()) {
    assert.ok(result.generated.includes(Buffer.from(`def lasmParallelEval${i} : IO Unit := ${expression}`)));
    assert.equal(result.expressions[i].sha256, createHash('sha256').update(expression).digest('hex'));
  }
  assert.ok(result.generated.includes(Buffer.from('  lasmParallelEval0\n  lasmParallelEval1\n')));
});

test('parallel IO adapter rejects unreviewed sources and scoped or guarded commands', () => {
  assert.throws(() => parallelEvalIOSource(source, syntax, 'elab/unreviewed.lean'), /explicit IO Unit/);
  for (const kind of ['Lean.Parser.Command.namespace', 'Lean.Parser.Command.guardMsgs', 'Lean.Parser.Command.evalBang'])
    assert.throws(() => parallelEvalIOSource(source, { ...syntax, commandKinds: [...syntax.commandKinds, kind] }, name), /Unreviewed command/);
});

test('parallel IO adapter rejects missing, overlapping or non-token syntax ranges', () => {
  assert.throws(() => parallelEvalIOSource(source, { ...syntax, ranges: ranges.slice(1) }, name), /Every original evaluation/);
  assert.throws(() => parallelEvalIOSource(source, { ...syntax, ranges: [ranges[0], ranges[0]] }, name));
  assert.throws(() => parallelEvalIOSource(source, { ...syntax, ranges: [{ ...ranges[0], start: ranges[0].start - 1 }, ranges[1]] }, name));
});

test('parallel IO adapter rejects generated-name collisions', () => {
  const conflicting = Buffer.concat([source, Buffer.from('\n-- lasmParallelEval1\n')]);
  assert.throws(() => parallelEvalIOSource(conflicting, syntax, name), /identifier already exists/);
});

test('reviewed actions are tied to an exact release and immutable upstream source', () => {
  const review = JSON.parse(readFileSync(new URL('../scripts/application-tests/eval-io-reviewed.json', import.meta.url)));
  for (const [name, input] of Object.entries(review.tests)) {
    assert.deepEqual(reviewedEvalIOInput(review.lean, name, input.sha256), input);
    assert.throws(() => reviewedEvalIOInput(review.lean, name, '0'.repeat(64)), /differs from the reviewed/);
    assert.throws(() => reviewedEvalIOInput('999.0.0', name, input.sha256), /Review the new release/);
  }
});
