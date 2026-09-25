// A deliberately narrow, parallel adapter for reviewed, flat IO Unit tests.
// Original files are never written. The Lean parser supplies UTF-8 byte offsets;
// only each #eval token is replaced, and an ordinary main calls each action.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';

export const reviewedEvalIOTests = new Set([
  'elab/async_http_body.lean',
  'elab/async_http_body_framing.lean',
  'elab/async_http_request_headers.lean',
]);

export function parallelEvalIOSource(source, syntax, name) {
  assert.ok(reviewedEvalIOTests.has(name), 'This source needs an explicit IO Unit/context review');
  assert.ok(Buffer.isBuffer(source));
  assert.ok(Array.isArray(syntax.ranges) && syntax.ranges.length > 0);
  // These inputs contain only module comments, opens and ordinary definitions
  // between their unwrapped IO actions. Reject scoped elaboration or initialization.
  assert.ok(syntax.commandKinds.every(kind =>
    ['Lean.Parser.Command.moduleDoc', 'Lean.Parser.Command.open', 'Lean.Parser.Command.declaration',
      'Lean.Parser.Command.eval'].includes(kind)),
  'Unreviewed command context in parallel IO test');
  assert.equal(syntax.commandKinds.filter(kind => kind === 'Lean.Parser.Command.eval').length, syntax.ranges.length,
    'Every original evaluation must have exactly one runtime action');
  const chunks = [], expressions = [];
  let cursor = 0;
  for (const [index, range] of syntax.ranges.entries()) {
    const { start, stop, termStart, termStop } = range;
    assert.ok([start, stop, termStart, termStop].every(Number.isSafeInteger));
    assert.ok(start >= cursor && stop === start + 5 && termStart >= stop && termStop > termStart && termStop <= source.length);
    assert.equal(source.subarray(start, stop).toString(), '#eval');
    assert.ok(start === 0 || source[start - 1] === 10, 'Reviewed commands start in column zero');
    const identifier = `lasmParallelEval${index}`;
    assert.equal(source.includes(Buffer.from(identifier)), false, 'Generated identifier already exists');
    chunks.push(source.subarray(cursor, start), Buffer.from(`def ${identifier} : IO Unit :=`));
    expressions.push({ ...range, identifier,
      sha256: createHash('sha256').update(source.subarray(termStart, termStop)).digest('hex') });
    cursor = stop;
  }
  chunks.push(source.subarray(cursor));
  const marker = `parallel upstream IO completed: ${name} (${expressions.length} actions)`;
  chunks.push(Buffer.from('\n\ndef main : IO Unit := do\n' +
    expressions.map(row => `  ${row.identifier}\n`).join('') +
    `  IO.println ${JSON.stringify(marker)}\n`));
  const generated = Buffer.concat(chunks);
  // Reverse exactly the generated edits and require the complete original,
  // including all comments, assertions, constants and timeout expressions.
  let restored = generated.subarray(0, generated.length - chunks.at(-1).length).toString();
  for (const row of expressions) restored = restored.replace(`def ${row.identifier} : IO Unit :=`, '#eval');
  assert.deepEqual(Buffer.from(restored), source);
  return { generated, expressions, marker };
}
