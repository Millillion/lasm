import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, writeFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { forAll } from './helpers/property.mjs';
import { tmpdir } from 'node:os';
import { applicationLinkRequirements, readApplicationLinkRequirements, canSpecializeInitialization, reachabilityRegistry, selectiveInitialization } from '../src/application-reachability.mjs';

const map = (...symbols) => '    Addr      Off     Size Out     In      Symbol\n'
  + '       -       48      600 CODE\n'
  + ['main', ...symbols].map(name => `       -       58       20                 ${name}\n`).join('');

test('reachable ordinary library functions do not imply runtime evaluation', () => {
  assert.deepEqual(applicationLinkRequirements(map('l_Lean_Json_parse', 'l_Std_Http_Server_serve',
    'l_nested_closure', 'initialize_Lean_Data_Json', '_emscripten_process_dlopen_queue')), {
    mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false,
  });
});

test('a reachable dynamic lookup or loader always preserves the open runtime ABI', () => {
  for (const symbol of ['lasm_lookup_lean_symbol', 'dlopen', 'dlsym', 'dlvsym',
    'emscripten_dlopen', 'emscripten_dlopen_promise']) {
    const result = applicationLinkRequirements(map('l_some_callback', symbol));
    assert.equal(result.mode, 'dynamic');
    assert.deepEqual(result.dynamic, [symbol]);
    assert.equal(result.requiresModuleData, true);
  }
});

test('archive names and paths containing dynamic symbol names are not live symbols', () => {
  const result = applicationLinkRequirements(map('/tmp/dlopen symbols/lib.a(dlsym.o):(unrelated)', 'dlopen_suffix'));
  assert.equal(result.mode, 'static');
});

test('any live Lean C++ code or data preserves its complete initialization prerequisites', () => {
  for (const section of ['lean_kernel_whnf', '.data.global_state']) {
    const result = applicationLinkRequirements(map(`/runtime space/lib/libleancpp.a(kernel.o):(${section})`));
    assert.equal(result.mode, 'dynamic');
    assert.deepEqual(result.cxxRuntime, ['kernel.o']);
    assert.equal(result.requiresModuleData, true);
  }
  assert.equal(applicationLinkRequirements(map('/sdk/lib/libc++.a(mutex.o):(lock)')).mode, 'static');
});

test('initializer specialization is limited to the audited immutable runtime', () => {
  assert.equal(canSpecializeInitialization({ identity: '4034cb85407d75be21ba2cb1fb063065aebe7cef48bbd82543f759bb6d35a4cf' }), true);
  assert.equal(canSpecializeInitialization({ identity: '4d3d6c60d978dd73c3b9bf0d9ae6020862c512f411c151abeffc37ffc9fd515d' }), true);
  assert.equal(canSpecializeInitialization({ identity: '7482333e0a70a6aee12a540e11a48f31fd56c86761e7b3477f4a46ae310f80d3' }), true);
  assert.equal(canSpecializeInitialization({ identity: '36cf596b617bea6e360a96321aff1e41b8e5c4ee20abdc7d8a7e474b9a5cc6e4' }), true);
  assert.equal(canSpecializeInitialization({ identity: '84934c27498e0b97bd6e3d88253729704dc551aa8900f2fa4da919e9df40fcc4' }), true);
  assert.equal(canSpecializeInitialization({ identity: '7aa5028c6226405b322961b289f955043824a49c997bec3f3e262647c045557c' }), true);
  // The GMP-free runtime (decision 5).
  assert.equal(canSpecializeInitialization({ identity: '8b3e33e03df54e6125227b5d1d442fc8db072ffe1ea1dd3f3bf5df8707675562' }), true);
  assert.equal(canSpecializeInitialization({ identity: '1b868b43e734e0ab3d67e53179522c8e248b91e5f2e1727d343c760370d1b4fb' }), true);
  assert.equal(canSpecializeInitialization({ identity: 'another runtime' }), false);
});

test('shared inline helpers, read-only literals and weak RTTI need no compiler globals', () => {
  const options = { initializationFreeCppSymbols: new Set(['inline_helper', '_ZTVN4lean9exceptionE', 'mutable']) };
  const selected = (...names) => applicationLinkRequirements(map(...names.map(name => `/lib/libleancpp.a(any.o):(${name})`)), options);
  assert.equal(selected('inline_helper', '.rodata..L.str', '.data.rel.ro._ZTVN4lean9exceptionE').mode, 'static');
  assert.equal(selected('strong_helper').mode, 'dynamic');
  assert.equal(selected('.bss.mutable').mode, 'dynamic', 'Mutable weak globals remain conservative');
  assert.equal(selected('.data.rel.ro.unknown_table').mode, 'dynamic');
});

test('streaming analysis retains capability evidence across buffer boundaries', async t => {
  const directory = await mkdtemp(join(tmpdir(), 'lasm-link-map-')); t.after(() => rm(directory, { recursive: true, force: true }));
  const path = join(directory, 'link.map');
  const text = map(...Array.from({ length: 5000 }, (_, i) => 'l_unused_' + i), 'dlopen');
  await writeFile(path, text);
  assert.deepEqual(await readApplicationLinkRequirements(path), applicationLinkRequirements(text));
  await writeFile(path, text + 'unexpected row\n');
  await assert.rejects(readApplicationLinkRequirements(path), /linker map/);
});

test('module-data and sysroot APIs keep metadata even without the interpreter', () => {
  for (const symbol of ['lean_read_module_data', 'lean_read_module_data_parts', 'lean_write_module_data',
    'l_Lean_findSysroot', 'l_Lean_initSearchPath___boxed']) {
    const result = applicationLinkRequirements(map(symbol));
    assert.equal(result.mode, 'static');
    assert.equal(result.requiresModuleData, true);
    assert.deepEqual(result.moduleData, [symbol]);
  }
});

test('missing or unfamiliar linker evidence fails closed', () => {
  for (const invalid of ['', map().replace('Addr', 'Address'), map() + 'unexpected row\n',
    map().replace('CODE', 'DATA'), map().replace('main', 'unrelated')])
    assert.throws(() => applicationLinkRequirements(invalid), /linker map/);
});

test('every audited runtime of the Lean 4.35.0 series may use the smaller initializer', () => {
  for (const identity of ['d1b1394ce2df4f9af2624cbd9bcca2162ee051da6be60ec38b08119c33fbd981', '79968781629d674bc8b506b3050c367ebc14503c869bc45436244c49ee5aee02',
    '9921c696161a9852442863a19e16990f2d540aa369adaa353906504bb589649a'])
    assert.equal(canSpecializeInitialization({ identity }), true, identity);
  assert.equal(canSpecializeInitialization({ identity: '' }), false);
  assert.equal(canSpecializeInitialization({}), false);
  assert.equal(selectiveInitialization, 'void lean_initialize_runtime_module(void);\nvoid __wrap_lean_initialize(void) { lean_initialize_runtime_module(); }\n');
  assert.equal(reachabilityRegistry, 'void *lasm_lookup_lean_symbol(const char *name) { (void)name; return 0; }\n');
});

test('entry points, sections and rows of the map are read exactly', () => {
  for (const entry of ['__main_argc_argv', '__main_void']) {
    const text = map().replace(/ main\n/, ` ${entry}\n`);
    assert.equal(applicationLinkRequirements(text).mode, 'static', entry);
  }
  // Module data: every reader and writer variant, sorted; similar names are not.
  const result = applicationLinkRequirements(map('lean_write_module_data_x', 'lean_read_module_data', 'l_Lean_findSysroot___boxed', 'xlean_read_module_data',
    'lean_read_module_datax', 'l_Lean_findSysrootx', 'l_Lean_initSearchPath'));
  assert.deepEqual(result.moduleData, ['l_Lean_findSysroot___boxed', 'l_Lean_initSearchPath', 'lean_read_module_data', 'lean_write_module_data_x']);
  // C++ members on Windows paths, sorted and unique; read-only data needs nothing.
  const cxx = applicationLinkRequirements(map('C:\\r\\libleancpp.a(b.o):(f)', '/r/libleancpp.a(a.o):(g)', '/r/libleancpp.a(a.o):(h)', '/r/libleancpp.a(c.o):(.rodata)'));
  assert.deepEqual(cxx.cxxRuntime, ['a.o', 'b.o']);
  assert.equal(cxx.mode, 'dynamic');
  assert.throws(() => applicationLinkRequirements(map('/r/libleancpp.a(x.o) without a section')), { message: 'Unrecognized C++ section in application linker map' });
  // A map whose CODE section is missing, or whose rows have another shape, is refused.
  assert.throws(() => applicationLinkRequirements('    Addr      Off     Size Out     In      Symbol\n       -       58       20                 main\n'),
    { message: 'Application linker map has no executable entry point' });
  assert.throws(() => applicationLinkRequirements(map() + 'zz 1 2 x\n'), { message: 'Unrecognized application linker map row' });
  assert.throws(() => applicationLinkRequirements('Addr Off Size Out In Symbol\n'), { message: 'Unrecognized application linker map header' });
  assert.deepEqual(applicationLinkRequirements(map() + '\n   \n'), { mode: 'static', dynamic: [], cxxRuntime: [], moduleData: [], requiresModuleData: false });
  // Dynamic symbols are listed in their fixed order.
  assert.deepEqual(applicationLinkRequirements(map('emscripten_dlopen', 'dlopen', 'lasm_lookup_lean_symbol')).dynamic, ['lasm_lookup_lean_symbol', 'dlopen', 'emscripten_dlopen']);
  // Only RTTI and vtables (_ZTI, _ZTV) of shared helpers are read-only relocations.
  const options = { initializationFreeCppSymbols: new Set(['_ZTSfoo', '_ZTIfoo']) };
  assert.equal(applicationLinkRequirements(map('/l/libleancpp.a(r.o):(.data.rel.ro._ZTSfoo)'), options).mode, 'dynamic');
  assert.equal(applicationLinkRequirements(map('/l/libleancpp.a(r.o):(.data.rel.ro._ZTIfoo)'), options).mode, 'static');
  assert.equal(applicationLinkRequirements(map('/l/libleancpp.a(r.o):(.rodatax)'), options).mode, 'dynamic');
  assert.equal(applicationLinkRequirements(map('/l/libleancpp.a(r.o):(.rodata.str)'), options).mode, 'static');
});

// Proposition: Lasm.Cli.Spec.link_map_static_sound
//   ∀ (initFree : String → Bool) (map : String) (r : Reachability.Requirements),
//     linkRequirements initFree map = .ok r →
//     (r.static = true ↔ r.dynamic = [] ∧ r.cxxRuntime = []) ∧
//     (r.static = true → ∀ line ∈ ((Reachability.trimEnd map.toList).splitOn '\n').tail, ∀ t,
//       Reachability.rowText line = some t → t ∉ Reachability.dynamicSymbols ∧
//       ∀ m s, Reachability.memberSection t = some (m, s) →
//         Reachability.independent (fun x => initFree (String.ofList x)) s = true)
test('a map read as static names no loader and keeps no stateful C++ section', () => {
  const dynamicSymbols = ['lasm_lookup_lean_symbol', 'dlopen', 'dlsym', 'dlvsym', 'emscripten_dlopen', 'emscripten_dlopen_promise'];
  const sectionRow = gen => `${gen.pick(['/r/', 'C:\\r\\', ''])}libleancpp.a(${gen.pick(['a.o', 'b.o'])}):(${gen.pick(['.text.f', 'f', 'g', '.rodata', '.rodata.s', '.data.rel.ro._ZTIfoo', '.data.rel.ro._ZTSfoo', '.data.x'])})`;
  forAll(gen => ({
    rows: gen.array(gen.int(0, 6), () => gen.pick([() => gen.pick([...dynamicSymbols, 'l_f', 'lean_read_module_data', 'mainx']), () => sectionRow(gen)])()),
    initFree: gen.array(gen.int(0, 3), () => gen.pick(['f', 'g', '_ZTIfoo', '_ZTSfoo'])),
  }), ({ rows, initFree }) => {
    const free = new Set(initFree), result = applicationLinkRequirements(map(...rows), { initializationFreeCppSymbols: free });
    assert.equal(result.mode === 'static', result.dynamic.length === 0 && result.cxxRuntime.length === 0);
    if (result.mode !== 'static') return;
    for (const row of rows) {
      assert.ok(!dynamicSymbols.includes(row), row);
      const member = /(?:^|[/\\])libleancpp\.a\(([^)]+)\):\((.+)\)$/.exec(row);
      if (!member) continue;
      const section = member[2], rtti = /^\.data\.rel\.ro\.(_ZT[IV][A-Za-z0-9_]+)$/.exec(section);
      assert.ok(/^\.rodata(?:\.|$)/.test(section) || (!section.startsWith('.') && free.has(section)) || (rtti && free.has(rtti[1])), row);
    }
  }, { runs: 1000 });
});
