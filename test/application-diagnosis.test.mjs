import test from 'node:test';
import assert from 'node:assert/strict';
import { archiveMembers, declarationName, demangleName, explainRejection, initializerModule, isImportedSpecialization,
  mangleName, parseWhyExtract, undefinedSymbols } from '../src/application-diagnosis.mjs';
import { requireAotApplication } from '../src/application-policy.mjs';

const lib = name => `/r/lib/lib${name}.a`;
const why = rows => ['reference\textracted\tsymbol', ...rows.map(row => row.join('\t'))].join('\n') + '\n';
// Two members share the basename Basic.o; only one of them reaches the kernel.
const nm = {
  Lean: `
Lean.o:
00000001 T initialize_Lean
         U initialize_Lean_Compiler_Main
         U initialize_Lean_Data_Json_Basic

Basic.o:
00000001 T initialize_Lean_Data_Json_Basic
00000002 T l_Lean_Json_mkObj
00000003 T l_Lean_JsonNumber_fromNat

Main.o:
00000001 T initialize_Lean_Compiler_Main
00000002 T l_IO_println___at___00Lean_Compiler_main_spec__1
         U lean_expr_abstract_range

Basic.o:
00000001 T initialize_Lean_Meta_Basic
00000002 T l_Lean_Meta_whnf
         U lean_expr_dbg_to_string

Printer.o:
00000001 T initialize_Lean_Data_Json_Printer
00000002 T l_Lean_Json_compress
`,
  leancpp: `
abstract.cpp.o:
00000001 T lean_expr_abstract_range

formatter.cpp.o:
00000001 T lean_expr_dbg_to_string
`,
};
const members = [...archiveMembers(lib('Lean'), nm.Lean), ...archiveMembers(lib('leancpp'), nm.leancpp)];
const requirements = { mode: 'dynamic', dynamic: [], cxxRuntime: ['abstract.cpp.o', 'formatter.cpp.o'], moduleData: [], requiresModuleData: true };

test('Lean C names demangle, and module initializers round-trip', () => {
  assert.equal(demangleName('Lean_Data_Json'), 'Lean.Data.Json');
  assert.equal(demangleName('foo__bar'), 'foo_bar');
  assert.equal(demangleName('bvar___override'), 'bvar._override');
  assert.equal(demangleName('a_u03b1'), 'aα');
  assert.equal(mangleName('Lean.Data.Json.Printer'), 'Lean_Data_Json_Printer');
  assert.equal(initializerModule('initialize_Lean_Data_Json_Printer'), 'Lean.Data.Json.Printer');
  assert.equal(initializerModule('runtime_initialize_Std_Data_HashMap'), 'Std.Data.HashMap');
  assert.equal(declarationName('l_Lean_Expr_bvar___override'), 'Lean.Expr.bvar');
  assert.equal(declarationName('l_IO_println___at___00__private_Lean_Shell_0__Lean_ShellOptions_process_spec__3'), 'IO.println');
  assert.ok(isImportedSpecialization('l_IO_println___at___00Lean_Compiler_main_spec__1'));
  assert.ok(!isImportedSpecialization('l_Lean_Json_compress'));
  assert.deepEqual(undefinedSymbols('         U l_Lean_Json_compress\n00000001 T main\n         U initialize_Lean\n'),
    ['l_Lean_Json_compress', 'initialize_Lean']);
});

test('a broad import is explained and replaced by the modules the program uses', () => {
  const rows = parseWhyExtract(why([
    ['/b/module-0.o', `${lib('Lean')}(Lean.o)`, 'initialize_Lean'],
    [`${lib('Lean')}(Lean.o)`, `${lib('Lean')}(Main.o)`, 'initialize_Lean_Compiler_Main'],
    [`${lib('Lean')}(Main.o)`, `${lib('leancpp')}(abstract.cpp.o)`, 'lean_expr_abstract_range'],
    // Listed before the extraction of its referrer, as wasm-ld may do.
    [`${lib('Lean')}(Basic.o)`, `${lib('leancpp')}(formatter.cpp.o)`, 'lean_expr_dbg_to_string'],
    ['/b/module-0.o', `${lib('Lean')}(Basic.o)`, 'l_Lean_Json_mkObj'],
    ['/b/module-0.o', `${lib('Lean')}(Printer.o)`, 'l_Lean_Json_compress'],
    [`${lib('Lean')}(Lean.o)`, `${lib('Lean')}(Basic.o)`, 'l_Lean_Meta_whnf'],
  ]));
  const lines = explainRejection({ rows, userObjects: ['/b/module-0.o'], requirements, members,
    userSymbols: ['initialize_Init', 'initialize_Lean', 'l_Lean_Json_mkObj', 'l_Lean_Json_compress',
      'l_IO_println___at___00Lean_Compiler_main_spec__1'] });
  assert.equal(lines[0], 'Required by: your code → import Lean → import Lean.Compiler.Main → lean_expr_abstract_range → abstract.cpp (Lean C++ compiler/kernel)');
  // The kernel-reaching Basic.o is Lean.Meta.Basic, not the program's Lean.Data.Json.Basic.
  assert.ok(!lines.some(line => line.includes('narrower imports cannot')), lines.join('\n'));
  assert.ok(lines.includes('`import Lean` brings Lean\'s compiler and kernel into your program, even if you only use its data types.'));
  const replace = lines.indexOf('Replace it with the modules your code uses:');
  assert.deepEqual(lines.slice(replace + 1, replace + 3), ['  import Lean.Data.Json.Basic', '  import Lean.Data.Json.Printer']);
});

test('a direct call into kernel code is not blamed on imports', () => {
  const rows = parseWhyExtract(why([
    ['/b/module-0.o', `${lib('Lean')}(Basic.o)`, 'l_Lean_Meta_whnf'],
    [`${lib('Lean')}(Basic.o)`, `${lib('leancpp')}(formatter.cpp.o)`, 'lean_expr_dbg_to_string'],
  ]));
  const lines = explainRejection({ rows, userObjects: ['/b/module-0.o'], members,
    requirements: { ...requirements, cxxRuntime: ['formatter.cpp.o'] }, userSymbols: ['initialize_Lean_Meta_Basic', 'l_Lean_Meta_whnf'] });
  assert.deepEqual(lines, [
    'Required by: your code → Lean.Meta.whnf → lean_expr_dbg_to_string → formatter.cpp (Lean C++ compiler/kernel)',
    'Your code calls `Lean.Meta.whnf`, which needs this code at run time; narrower imports cannot remove it.']);
});

test('the policy message carries the explanation and the README pointer', () => {
  assert.throws(() => requireAotApplication(requirements, { explanation: ['Required by: your code → import Lean'] }), error => {
    const lines = error.message.split('\n');
    assert.equal(error.code, 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE');
    assert.match(lines[0], /^Lasm does not support runtime Lean compilation/);
    assert.match(lines[1], /^Detected Lean compiler\/kernel state: abstract\.cpp\.o/);
    assert.equal(lines[2], 'Required by: your code → import Lean');
    assert.equal(lines.at(-1), 'See "Lean support and restrictions" in the Lasm README.');
    return true;
  });
  // Diagnostics never turn an unknown chain into an accepted application.
  assert.throws(() => requireAotApplication(requirements, { explanation: [] }), { code: 'ERR_LASM_UNSUPPORTED_RUNTIME_FEATURE' });
});
