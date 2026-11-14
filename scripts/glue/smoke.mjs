// The glue program under the JavaScript runtime running this (Node, Bun or
// Deno, as the CLI runs under each): compactInitializerWrappers and
// initializationSchedule agree with the JavaScript they replaced (a copy of
// main's module) on synthetic plans, and a malformed plan is refused.
//
//   node|bun|deno run -A scripts/glue/smoke.mjs BASELINE
import assert from 'node:assert/strict';
import { resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { compactInitializerWrappers, initializationSchedule } from '../../src/edge/edge-initializers.mjs';
import { syntheticPlan } from './plans.mjs';

const baseline = await import(pathToFileURL(resolve(process.argv[2])).href);
for (const [n, k] of [[1, 1], [40, 3], [2807, 6]]) {
  const plan = syntheticPlan(n, k);
  assert.equal(compactInitializerWrappers(plan), baseline.compactInitializerWrappers(plan));
  for (const name of plan.keep) assert.deepEqual(initializationSchedule(name, plan.calls, new Set(plan.keep)), baseline.initializationSchedule(name, plan.calls, new Set(plan.keep)));
}
assert.throws(() => compactInitializerWrappers({ schema: 1, closure: ['initialize_A', 'bad'], keep: [], calls: {} }), /^Error: Unexpected initializer name bad$/);
assert.throws(() => compactInitializerWrappers({ schema: 2, closure: [], keep: [], calls: {} }), /Unrecognized initialization plan/);
console.log(`glue ok (${typeof Bun !== 'undefined' ? `Bun ${Bun.version}` : typeof Deno !== 'undefined' ? `Deno ${Deno.version.deno}` : `Node ${process.version}`})`);
