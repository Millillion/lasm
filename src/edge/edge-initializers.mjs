// The compact runtime-initialization wrappers of the edge and browser link
// (docs/BROWSER.md, size). The Node build plans which module initializers run
// (src/application-initialization.mjs) and wraps every initializer in the
// program's import closure: a skipped one calls, in order, the wrappers of the
// initializers it would have called. A small program keeps a handful of
// thousands (6 of 2,807 for the web template), yet links every chain:
// hundreds of KiB of Wasm. From the same plan (initialization-plan.json in the
// Node build's link work) this generates the equivalent with no chains:
//   - each skipped initializer's wrapper is an alias of one no-op;
//   - each kept initializer's wrapper first runs the kept initializers it would
//     have reached (a depth-first walk of the original call order, through kept
//     and skipped initializers alike, in post-order), then its own body.
// Every kept initializer still runs exactly once, after those it depends on and
// in the order the chains ran them; the Node build's own wrappers are unchanged.
//
// The generator is Lean: the model verification/cli/Lasm/Cli/Model/EdgeInitializers.lean,
// compiled by Lasm into the CLI's glue program (src/glue/glue.mjs,
// docs/proposals/M6_GLUE.md) through its proved fast version
// (Lasm/Cli/Fast/EdgeInitializers.lean). What stays here is the plan's shape
// check and the encoding of its fields; `calls` is read as its own entries.

import { decodeFields, runGlue } from '../glue/glue.mjs';

const strings = value => Array.isArray(value) && value.every(item => typeof item === 'string');
const namesFields = names => [String(names.length), ...names];
const callsFields = calls => {
  const entries = Object.entries(calls);
  return [String(entries.length), ...entries.flatMap(([unit, called]) => [unit, ...namesFields(called)])];
};
const answer = result => {
  if ('error' in result) throw new Error(result.error);
  return result.ok;
};

/** Kept initializers reachable from `name`'s calls, in the order the original chains initialize them. */
export function initializationSchedule(name, calls, keep) {
  return decodeFields(answer(runGlue(['initializationSchedule', name, ...callsFields(calls), ...namesFields([...keep])])));
}

/** C source of the compact wrappers for an initialization plan. */
export function compactInitializerWrappers(plan) {
  if (plan?.schema !== 1 || !strings(plan.closure) || !strings(plan.keep) || typeof plan.calls !== 'object' || plan.calls === null
    || !Object.values(plan.calls).every(strings)) throw new Error('Unrecognized initialization plan');
  return answer(runGlue(['compactInitializerWrappers', ...namesFields(plan.closure), ...namesFields(plan.keep), ...callsFields(plan.calls)]));
}
