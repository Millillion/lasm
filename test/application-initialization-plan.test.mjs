// The initialization planner (planInitializers in src/application-initialization.mjs)
// with a scripted probe instead of wasm-ld: units come from stand-in objects
// (test/fixtures/link-stand-ins/toolchain.mjs); the probe answers which Lean
// globals are live for the wrappers it is given, so each planning decision
// (rounds, skipped bodies, shared globals and their culprits) is observable.
import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { initializerWrapperParts, initializerWrappers, isInitializerUnit, planInitializers } from '../src/application-initialization.mjs';
import { archive, wasmObject } from './fixtures/link-stand-ins/toolchain.mjs';

/** main.o: the entry and Main's initializer; effect.o: the program's own effectful module;
 * helper.o: a program module whose initializer only calls others; lib.a: Lib (an `initialize`
 * result read by Main), Dep (a constant) and Reg (registers into Lib's global). */
function program(t) {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-init-plan-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const file = (name, bytes) => { writeFileSync(join(directory, name), bytes); return join(directory, name); };
  const main = file('main.o', wasmObject({ functions: [{ name: '__main_argc_argv', refs: ['initialize_Main', 'l_main_use'] },
    { name: 'initialize_Main', refs: ['initialize_Helper', 'initialize_Effect', 'initialize_Lib', 'l_main_c'] }, { name: 'l_main_use', refs: ['l_lib_ref'] }],
  data: [{ name: 'l_main_c' }], undefinedData: ['l_lib_ref'] }));
  const effect = file('effect.o', wasmObject({ functions: [{ name: 'initialize_Effect', refs: ['l_Effect_init'] }, { name: 'l_Effect_init', refs: ['lean_io_prim_put_str'] }] }));
  const helper = file('helper.o', wasmObject({ functions: [{ name: 'initialize_Helper', refs: ['initialize_Dep', 'lean_mark_persistent'] }] }));
  const lib = file('lib.a', archive([
    ['Lib.o', wasmObject({ functions: [{ name: 'initialize_Lib', refs: ['initialize_Dep', 'initialize_Reg', 'l_Lib_initFn', 'l_lib_ref'] }, { name: 'l_Lib_initFn' }],
      data: [{ name: 'l_lib_ref' }] })],
    ['Dep.o', wasmObject({ functions: [{ name: 'initialize_Dep', refs: ['l_dep_c'] }], data: [{ name: 'l_dep_c' }] })],
    ['Reg.o', wasmObject({ functions: [{ name: 'initialize_Reg', refs: ['l_reg_add'] }, { name: 'l_reg_add', refs: ['l_lib_ref'] }], undefinedData: ['l_lib_ref'] })],
  ]));
  return { directory, main, effect, helper, lib, objects: [main, effect, helper], archives: [lib] };
}

/** A probe whose live data is `live(kept)` for planning links and `bodies(kind)` for body links; records every call. */
function scriptedProbe({ live, bodies = () => [] }) {
  const calls = [];
  const probe = async (sources, wrap, options = {}) => {
    const text = sources.join('\n');
    const kept = new Set([...text.matchAll(/__wrap_(\w+)\(uint8_t builtin\) \{ return __real_\1\(builtin\); \}/g)].map(match => match[1]));
    const run = [...text.matchAll(/^ {2}__real_(\w+)\(1\);$/gm)].map(match => match[1]);
    calls.push({ kept, run, wrap, options, parts: sources.length });
    return { data: new Set(options.bodies ? bodies(options.kind, run) : live(kept)), code: new Set() };
  };
  return { probe, calls };
}

test('rounds keep the units whose globals are live, until nothing is added; the others are skipped', async t => {
  const { objects, archives, main } = program(t);
  const { probe, calls } = scriptedProbe({ live: kept => ['l_lib_ref', ...(kept.has('initialize_Lib') ? ['l_main_c'] : [])], bodies: () => ['l_dep_c'] });
  const logs = [];
  const plan = await planInitializers({ objects, archives, probe, log: line => logs.push(line) });
  assert.deepEqual(plan.closure, ['initialize_Main', 'initialize_Helper', 'initialize_Dep', 'initialize_Effect', 'initialize_Lib', 'initialize_Reg']);
  assert.deepEqual(plan.wrap, plan.closure.map(name => `-Wl,--wrap=${name}`));
  assert.deepEqual([...plan.keep].sort(), ['initialize_Effect', 'initialize_Lib', 'initialize_Main']);
  assert.deepEqual(plan.skipped, ['initialize_Helper', 'initialize_Dep', 'initialize_Reg']);
  assert.deepEqual(plan.shared, []);
  assert.deepEqual([...plan.live.data], ['l_lib_ref', 'l_main_c']);
  assert.equal(plan.units.get('initialize_Main').file, main);
  assert.deepEqual(logs, ['Initialization plan round 1: 2 kept, 1 added', 'Initialization plan round 2: 3 kept, 0 added',
    'Initialization plan: 3 of 6 initializers skipped; 0 shared globals']);
  // The empty-program baseline runs concurrently, before the rounds; the skipped bodies after them.
  assert.deepEqual(calls.map(call => call.options.kind ?? 'plan'), ['baseline', 'plan', 'plan', 'reached']);
  assert.deepEqual(calls[0].run, []);
  assert.deepEqual(calls[3].run, ['initialize_Helper', 'initialize_Dep', 'initialize_Reg']);
  for (const call of calls) { assert.equal(call.parts, initializerWrapperParts); assert.deepEqual(call.wrap, plan.wrap); }
  assert.equal(calls[0].options.exclude, main);
  assert.equal(calls[0].options.bodies, true);
  assert.deepEqual(calls[0].options.stubs, []);
  assert.equal(calls[1].options.bodies, undefined);
});

test('a skipped body that reaches a live mutable global keeps its unit; the plan runs again', async t => {
  const { objects, archives } = program(t);
  // Reg's body (registering into Lib's l_lib_ref) reaches it; the empty program does not.
  const { probe, calls } = scriptedProbe({ live: () => ['l_lib_ref'], bodies: (kind, run) => kind === 'baseline' ? ['l_base'] : run.includes('initialize_Reg') ? ['l_lib_ref', 'l_base'] : ['l_base'] });
  const logs = [];
  const plan = await planInitializers({ objects, archives, probe, log: line => logs.push(line) });
  assert.ok(plan.keep.has('initialize_Reg'));
  assert.deepEqual(plan.skipped, ['initialize_Helper', 'initialize_Dep']);
  assert.deepEqual(plan.shared, []);
  assert.ok(logs.includes('Initialization plan: 3 of 6 initializers skipped; 1 shared globals: l_lib_ref'), logs.join('\n'));
  assert.equal(calls.filter(call => call.options.kind === 'baseline').length, 1, 'the baseline is computed once');
  // Only `initialize` results count when the reviewed list is given: l_lib_ref is not on it.
  const second = scriptedProbe({ live: () => ['l_lib_ref'], bodies: (kind, run) => run.includes('initialize_Reg') ? ['l_lib_ref'] : [] });
  const listed = await planInitializers({ objects, archives, probe: second.probe, initTargets: new Set(['l_other']) });
  assert.equal(listed.keep.has('initialize_Reg'), false);
  // A global the empty program also reaches is not shared.
  const third = scriptedProbe({ live: () => ['l_lib_ref'], bodies: () => ['l_lib_ref'] });
  assert.equal((await planInitializers({ objects, archives, probe: third.probe })).keep.has('initialize_Reg'), false);
  // Nor one the delivered program does not use.
  const fourth = scriptedProbe({ live: () => [], bodies: (kind, run) => run.includes('initialize_Reg') ? ['l_lib_ref'] : [] });
  assert.equal((await planInitializers({ objects, archives, probe: fourth.probe })).keep.has('initialize_Reg'), false);
});

test('a shared global no skipped unit\'s code reaches ends the planning with it reported', async t => {
  const { objects, archives } = program(t);
  const { probe } = scriptedProbe({ live: () => ['l_lib_ref', 'l_elsewhere'], bodies: (kind) => kind === 'reached' ? ['l_elsewhere'] : [] });
  const plan = await planInitializers({ objects, archives, probe, initTargets: new Set(['l_elsewhere']) });
  assert.deepEqual(plan.shared, ['l_elsewhere']);
  assert.deepEqual(plan.skipped, ['initialize_Helper', 'initialize_Dep', 'initialize_Reg']);
});

test('forced and seeded units are kept; without an entry there is no plan; everything kept means no body probes', async t => {
  const { objects, archives, main, effect } = program(t);
  const none = scriptedProbe({ live: () => [] });
  const forced = await planInitializers({ objects, archives, probe: none.probe, forceKeep: /Dep$/, seed: new Set(['initialize_Reg', 'initialize_Absent']), concurrent: false });
  assert.deepEqual([...forced.keep].sort(), ['initialize_Dep', 'initialize_Effect', 'initialize_Main', 'initialize_Reg']);
  assert.deepEqual(none.calls.map(call => call.options.kind ?? 'plan'), ['plan', 'reached', 'baseline'], 'not concurrent: the baseline after the bodies');
  assert.equal(await planInitializers({ objects: [effect], archives, probe: none.probe }), undefined, 'no program entry');
  const all = scriptedProbe({ live: () => ['l_lib_ref', 'l_dep_c', 'l_main_c'] });
  const helperKept = await planInitializers({ objects, archives, probe: all.probe, forceKeep: /Helper|Reg/ });
  assert.deepEqual(helperKept.skipped, []);
  assert.deepEqual(helperKept.shared, []);
  assert.deepEqual(all.calls.map(call => call.options.kind ?? 'plan'), ['baseline', 'plan', 'plan']);
  assert.ok(main);
});

test('trimmed bodies (dev): only program objects that define skipped non-trivial units, and stubs for trivial ones', async t => {
  const { objects, archives, main, effect, helper } = program(t);
  const { probe, calls } = scriptedProbe({ live: () => ['l_lib_ref'] });
  const plan = await planInitializers({ objects, archives, probe, trimBodies: true });
  assert.ok(plan.units.get('initialize_Helper').trivial, 'a body of initializer calls and lean_ runtime helpers');
  assert.equal(plan.units.get('initialize_Lib').trivial, undefined, 'archive members are never trivial');
  assert.equal(plan.units.get('initialize_Main').trivial, undefined);
  const reached = calls.find(call => call.options.kind === 'reached'), baseline = calls.find(call => call.options.kind === 'baseline');
  assert.deepEqual(reached.options.exclude, [main, effect, helper], 'Helper is trivial: its object is left out');
  assert.deepEqual(reached.options.stubs, [{ name: 'initialize_Helper', calls: ['initialize_Dep'] }]);
  assert.deepEqual(baseline.options.exclude, reached.options.exclude);
  assert.deepEqual(baseline.options.stubs, reached.options.stubs);
  assert.deepEqual(calls.map(call => call.options.kind ?? 'plan'), ['plan', 'plan', 'baseline', 'reached'], 'trimmed: the baseline once the exclusions are known');
});

test('wrappers: kept units call their bodies, skipped ones call their initializers in order, once', () => {
  const units = new Map([['initialize_A', { calls: ['initialize_B', 'initialize_Out', 'initialize_C'] }], ['initialize_B', { calls: [] }], ['initialize_C', { calls: [] }]]);
  const closure = ['initialize_A', 'initialize_B', 'initialize_C'];
  const source = initializerWrappers(units, closure, { keep: new Set(['initialize_B']) });
  assert.ok(source.startsWith('// Generated by Lasm: runtime initialization plan (src/application-initialization.mjs).\n#include <lean/lean.h>\n#include <stdbool.h>\n'));
  for (const name of closure) assert.ok(source.includes(`lean_object* __real_${name}(uint8_t);\nlean_object* __wrap_${name}(uint8_t);`), name);
  assert.ok(source.includes(['lean_object* __wrap_initialize_A(uint8_t builtin) {', '  static bool done = false;', '  if (done) return lasm_initializer_ok();', '  done = true;',
    '  lean_object* res;', '  res = __wrap_initialize_B(builtin); if (lasm_initializer_failed(res)) return res;',
    '  res = __wrap_initialize_C(builtin); if (lasm_initializer_failed(res)) return res;', '  return lasm_initializer_ok();', '}'].join('\n')));
  assert.ok(!source.includes('__wrap_initialize_Out'), 'calls outside the closure are left out');
  assert.ok(source.endsWith('}\n'));
  const parts = initializerWrappers(units, closure, { keep: new Set(), parts: 2 });
  assert.equal(parts.length, 2);
  assert.ok(parts[0].includes('__wrap_initialize_A(uint8_t builtin) {') && !parts[0].includes('__wrap_initialize_B(uint8_t builtin) {'));
  assert.ok(parts[1].includes('__wrap_initialize_B(uint8_t builtin) {') && parts[1].includes('__wrap_initialize_C(uint8_t builtin) {'));
  assert.ok(parts.every(part => part.includes('static __attribute__((noinline, unused)) bool lasm_initializer_failed(lean_object* res) {')));
  const bodies = initializerWrappers(units, closure, { bodies: ['initialize_C', 'initialize_A'] });
  assert.ok(bodies.includes('lean_object* __wrap_initialize_B(uint8_t builtin) { (void)builtin; return lasm_initializer_ok(); }'));
  assert.ok(bodies.endsWith('int main(int argc, char **argv) {\n  (void)argc; (void)argv;\n  __real_initialize_C(1);\n  __real_initialize_A(1);\n  return 0;\n}\n'));
  for (const name of ['initialize_A', 'runtime_initialize_A_B', 'meta_initialize_X9']) assert.ok(isInitializerUnit(name), name);
  for (const name of ['initialize_', 'xinitialize_A', 'initialize_A.B', 'other_initialize_A']) assert.ok(!isInitializerUnit(name), name);
});
