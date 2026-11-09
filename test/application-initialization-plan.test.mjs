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
import { hasExternalEffect, initializerUnits, initializerWrapperParts, initializerWrappers, isForeignFunction, isInitializerUnit, planInitializers } from '../src/application-initialization.mjs';
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

test('a unit: its initializer calls, assigned globals (initialize results after an initFn), reached data, effects and triviality', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-init-units-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const file = join(directory, 'm.o');
  writeFileSync(file, wasmObject({
    functions: [
      { name: 'initialize_M', refs: ['initialize_M', 'initialize_A', 'l_helper', 'l_M_x_initFn', 'l_ref', 'l_after', '_G_initialized', '_G_runtime_initialized', 'l_c_once',
        'l_t___closed__1', 'l_t___boxed__const__1', 'l_extern', 'lean_mark_persistent', 'initialize_B'] },
      { name: 'l_helper', refs: ['l_reached', 'l_deeper', 'initialize_Z'] }, { name: 'l_deeper', refs: ['l_deep_data', 'l_helper'] },
      { name: 'initialize_Z', refs: ['lean_io_prim_put_str'] }, { name: 'initialize_Local', local: true, refs: ['initialize_A'] },
      { name: 'initialize_E', refs: ['l_e'] }, { name: 'l_e', refs: ['sqlite3_open'] },
      { name: 'initialize_T', refs: ['initialize_A', '_G_initialized', 'lean_mark_persistent'] }, { name: 'initialize_U', refs: ['initialize_A', '__stack_pointer'] },
      { name: 'initialize_N', refs: ['l_ref'] }, { name: 'initialize_P', refs: ['lean_io_prim_put_str'] }, { name: 'initialize_Q', refs: ['sqlite3_open'] },
    ],
    data: ['l_ref', 'l_after', '_G_initialized', '_G_runtime_initialized', 'l_c_once', 'l_t___closed__1', 'l_t___boxed__const__1', 'l_reached', 'l_deep_data'].map(name => ({ name })),
    undefinedData: ['l_extern'],
  }));
  const units = initializerUnits([file]);
  const m = units.get('initialize_M');
  assert.deepEqual(m.calls, ['initialize_A', 'initialize_B']);
  assert.deepEqual(m.data, ['l_ref', 'l_after', 'l_t___boxed__const__1']);
  assert.deepEqual(m.initTargets, ['l_ref'], 'only the store right after the initFn call');
  assert.deepEqual([...m.reaches].sort(), ['l_after', 'l_deep_data', 'l_reached', 'l_ref', 'l_t___boxed__const__1', 'l_t___closed__1', 'l_c_once', '_G_initialized', '_G_runtime_initialized', 'l_extern'].sort(), 'every data symbol the code reaches, defined or not');
  assert.equal(m.effects, false, 'an effect inside another initializer is that unit\'s');
  assert.equal(m.trivial, undefined);
  assert.equal(m.file, file);
  assert.equal(m.member, null);
  assert.ok(m.siblings.has('l_helper') && !m.siblings.has('l_ref'));
  assert.equal(units.has('initialize_Local'), false, 'local initializers are not units');
  assert.equal(units.get('initialize_E').effects, true, 'a package\'s C function');
  assert.equal(units.get('initialize_P').effects, true, 'console output');
  assert.equal(units.get('initialize_Q').effects, true);
  assert.equal(units.get('initialize_T').trivial, true);
  assert.equal(units.get('initialize_N').trivial, undefined, 'it assigns a global');
  assert.equal(units.get('initialize_U').trivial, undefined, 'a call to another C function');
  assert.equal(units.get('initialize_P').trivial, undefined, 'an effect');
  assert.equal(units.get('initialize_Q').trivial, undefined, 'foreign code');
  assert.equal(units.get('initialize_Z').effects, true);
  // The same unit in two files is an error; archives are cached by their bytes.
  const copy = join(directory, 'copy.o');
  writeFileSync(copy, wasmObject({ functions: [{ name: 'initialize_M', refs: ['initialize_A'] }] }));
  assert.throws(() => initializerUnits([file, copy]), { message: `Lean initializer initialize_M is defined twice (${file}, ${copy})` });
  const twice = join(directory, 'twice.a');
  writeFileSync(twice, archive([['a.o', wasmObject({ functions: [{ name: 'initialize_X', refs: ['initialize_A'] }] })], ['b.o', wasmObject({ functions: [{ name: 'initialize_X', refs: ['initialize_A'] }] })]]));
  assert.throws(() => initializerUnits([twice]), { message: `Lean initializer initialize_X is defined twice (${twice}, ${twice})` });
  const lib = join(directory, 'lib.a');
  writeFileSync(lib, archive([['k.o', wasmObject({ functions: [{ name: 'initialize_K', refs: ['initialize_L', 'l_k'] }], data: [{ name: 'l_k' }] })]]));
  const saved = new Map();
  const archiveUnits = { load: path => saved.get(path), save: (path, list) => saved.set(path, list) };
  const first = initializerUnits([file, lib], { archiveUnits });
  assert.deepEqual([...saved.keys()], [lib], 'only archives are cached');
  assert.deepEqual(saved.get(lib), [{ name: 'initialize_K', calls: ['initialize_L'], data: ['l_k'], initTargets: [], effects: false, member: 'k.o' }]);
  writeFileSync(lib, 'replaced: the cache answers');
  const second = initializerUnits([lib], { archiveUnits });
  assert.deepEqual({ ...second.get('initialize_K'), reaches: [...second.get('initialize_K').reaches] },
    { name: 'initialize_K', calls: ['initialize_L'], data: ['l_k'], initTargets: [], effects: false, member: 'k.o', file: lib, reaches: [], siblings: new Set() });
  assert.deepEqual(first.get('initialize_K').calls, ['initialize_L']);
  // A graph build reads the objects again, keying local symbols by object.
  writeFileSync(lib, archive([['k.o', wasmObject({ functions: [{ name: 'initialize_K', refs: ['l_local'] }, { name: 'l_local', local: true, refs: ['l_k'] }], data: [{ name: 'l_k' }] })]]));
  const graph = new Map();
  initializerUnits([lib], { archiveUnits, graph });
  assert.deepEqual(graph.get('initialize_K'), [`${lib}\0k.o\0l_local`]);
  assert.deepEqual(graph.get(`${lib}\0k.o\0l_local`), ['l_k']);
});

test('effects and foreign code: the classification of called names', () => {
  for (const name of ['lean_get_stdout', 'lean_get_set_stderr', 'lean_get_stdin', 'lean_io_prim_x', 'lean_io_process_spawn', 'lean_io_exit', 'lean_io_getenv', 'lean_io_remove_file',
    'lean_io_create_dir', 'lean_io_rename', 'lean_io_app_path', 'lean_io_current_dir', 'lean_io_read_dir', 'lean_io_realpath', 'lean_io_metadata', 'lean_io_create_tempfile',
    'lean_io_hard_link', 'lean_io_chmod', 'l_IO_print', 'l_IO_eprintln', 'l_IO_FS_x', 'l_IO_Process_x', 'l_IO_setStdout', 'l_IO_getStdin', 'l_IO_appendLn', 'l_IO_appendToFile'])
    assert.ok(hasExternalEffect(name), name);
  for (const name of ['lean_get_stdoutx', 'xlean_io_prim_x', 'lean_io_exitx', 'lean_io_getenvs', 'l_IO_FSx', 'lean_io_mono_ms_now', 'l_IOx_print'])
    assert.ok(!hasExternalEffect(name), name);
  for (const name of ['memcpy', 'memmove', 'memset', 'memcmp', 'strlen', 'abort', 'lp_x', '_lean_x', 'runtime_initialize_X', 'meta_initialize_X', '__x'])
    assert.ok(!isForeignFunction(name), name);
  for (const name of ['sqlite3_open', 'xlean_y', 'memcpyx', 'my_lp_x', 'meta_x']) assert.ok(isForeignFunction(name), name);
});
