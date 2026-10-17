// Emit the CI matrix for one Server MVP harness: explicit reviewed names only.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';

const harness = process.env.LASM_HARNESS, requested = process.env.LASM_TESTS ?? 'all', lean = process.env.LASM_LEAN;
const file = { 'eval-io': '../application-tests/eval-io-reviewed.json',
  'runtime-adapter': '../application-tests/runtime-adapter-reviewed.json' }[harness];
assert.ok(file, 'Unknown harness ' + harness);
const review = JSON.parse(readFileSync(new URL(file, import.meta.url)));
const tests = review.lean === lean ? review.tests : review.releases?.[lean]?.tests;
assert.ok(tests, `No ${harness} review for Lean ${lean}`);
const names = requested === 'all' ? Object.keys(tests) : JSON.parse(requested);
assert.ok(Array.isArray(names) && names.length > 0 && names.length <= 256);
for (const name of names) assert.ok(Object.hasOwn(tests, name), 'Unreviewed test ' + name);
console.log('tests=' + JSON.stringify(names));
