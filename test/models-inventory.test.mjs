// The model inventory (scripts/models.mjs, verification/MODELS.md): every
// shipped JavaScript and C module has an entry saying whether it has a Lean
// model, needs none (and why) or still needs one, every model and model
// differential named exists and names its module, and MODELS.md is current.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { check } from '../scripts/models.mjs';

test('every shipped module has a Lean model or a stated reason, and MODELS.md is current', () => {
  const { problems, counts } = check();
  assert.deepEqual(problems, []);
  assert.ok(counts.modules > 0 && counts.modelled + counts.pending + counts.exempt === counts.modules);
});
