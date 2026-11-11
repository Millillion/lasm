import test from 'node:test';
import assert from 'node:assert/strict';
import { archiveMembers, declarationName, demangleName, directImports, explainRejection, initializerModule, isImportedSpecialization,
  mangleName, parseWhyExtract, undefinedSymbols, usedModules } from '../src/application-diagnosis.mjs';
import { forAll } from './helpers/property.mjs';
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

// Names whose components start with a letter and do not end with `_` (Lean's
// mangling is ambiguous there: `A_.B` and `A._B` both mangle to `A___B`).
const leanName = random => random.array(random.int(1, 4), () => random.pick(['A', 'b', 'Z'])
  + random.string(['a', 'B', '0', '9', '!', 'α', '𝔸', "'", '_'], 0, 6) + random.pick(['a', '0', '!', 'α'])).join('.');

// Proposition: Lasm.Cli.Candidates.mangle_round_trip
//   ∀ n : String, wellFormedName n = true →
//     demangleName (mangleName n) = n ∧
//     initializerModule ("initialize_" ++ mangleName n) = some n ∧
//     initializerModule ("runtime_initialize_" ++ mangleName n) = some n ∧
//     mangleName n ≠ "" ∧ (mangleName n).all fun c => c.isAlphanum || c = '_'
test('mangling round-trips through demangling and module initializers', () => {
  forAll(leanName, name => {
    assert.equal(demangleName(mangleName(name)), name);
    assert.equal(initializerModule('initialize_' + mangleName(name)), name);
    assert.equal(initializerModule('runtime_initialize_' + mangleName(name)), name);
    assert.match(mangleName(name), /^[A-Za-z0-9_]+$/);
  }, { runs: 300 });
});

test('mangling and demangling escapes, separators and runs of underscores', () => {
  assert.equal(mangleName('a_b.c'), 'a__b_c');
  assert.equal(mangleName('x!'), 'x_x21');
  assert.equal(mangleName('xα'), 'x_u03b1');
  assert.equal(mangleName('x𝔸'), 'x_U0001d538');
  assert.equal(mangleName('xÿ'), 'x_xff');
  assert.equal(mangleName('xĀ'), 'x_u0100');
  assert.equal(demangleName('a___b'), 'a._b');
  assert.equal(demangleName('a____b'), 'a__b');
  assert.equal(demangleName('a_____x41'), 'a__A', 'an odd run before an escape is literal underscores and the character');
  assert.equal(demangleName('a_x4'), 'a.x4', 'too few hex digits: a separator');
  assert.equal(demangleName('a_xZZ'), 'a.xZZ', 'not hex');
  assert.equal(demangleName('a_xAB'), 'a.xAB', 'upper-case hex is not an escape');
  assert.equal(demangleName('a_u00e9b'), 'aéb');
  assert.equal(demangleName('a_U0001d538'), 'a𝔸');
  assert.equal(demangleName('a__x41'), 'a_x41', 'an even run is literal underscores');
  assert.equal(demangleName('_'), '.');
  assert.equal(demangleName(''), '');
  assert.equal(initializerModule('initialize_a__x41'), 'a_x41');
  assert.equal(initializerModule('initialize__x41'), undefined, 'does not round-trip');
  assert.equal(initializerModule('initialize_A___B'), 'A._B');
  assert.equal(initializerModule('l_Lean_f'), undefined);
  assert.equal(initializerModule('xinitialize_A'), undefined);
  assert.equal(initializerModule('meta_initialize_A'), undefined);
});

test('readable declaration names: private prefixes and auxiliary suffixes removed, package-prefixed symbols', () => {
  assert.equal(declarationName('l_Lean_Json_compress'), 'Lean.Json.compress');
  assert.equal(declarationName('lp_mathlib_Nat_foo'), 'Nat.foo');
  assert.equal(declarationName('lp_my__pkg_Nat_foo'), 'Nat.foo');
  assert.equal(declarationName('l___private_A_B_0_A_secret'), 'A.secret');
  assert.equal(declarationName('l___private_A_0_B_0_C'), 'B.0.C', 'the shortest private prefix');
  assert.equal(declarationName('l_f___lam__0'), 'f');
  assert.equal(declarationName('lean_io_prim_put_str'), 'lean_io_prim_put_str');
  assert.equal(declarationName('ll_x'), 'll_x');
  assert.ok(isImportedSpecialization('lp_pkg_f___spec__1'));
  assert.ok(isImportedSpecialization('l_f___at_'));
  assert.ok(!isImportedSpecialization('x_f___at_g'));
  assert.ok(!isImportedSpecialization('l_f___atx'));
  assert.ok(!isImportedSpecialization('l_f__at_g'));
});

test('why-extract rows and nm listings are read as wasm-ld and llvm-nm print them', () => {
  assert.deepEqual(parseWhyExtract('reference\textracted\tsymbol\na.o\tlib.a(b.o)\tf\r\n\nc.o\tlib.a(d.o)\n'),
    [{ reference: 'a.o', extracted: 'lib.a(b.o)', symbol: 'f' }, { reference: 'c.o', extracted: 'lib.a(d.o)', symbol: '' }]);
  assert.throws(() => parseWhyExtract('symbol\treference\n'), { message: 'Unrecognized --why-extract header' });
  const listed = archiveMembers('/l.a', 'A.o:\n00000001 T initialize_A\n00000002 T initialize_A_B\n         U f\n00000003 d l_data\nnot a symbol line\n\nB.o: no symbols\nC.o:\n00000001 T helper\n');
  assert.deepEqual(listed.map(member => [member.label, [...member.defined], [...member.undefined], member.module]), [
    ['/l.a(A.o)', ['initialize_A', 'initialize_A_B', 'l_data'], ['f'], 'A'], ['/l.a(B.o)', [], [], undefined], ['/l.a(C.o)', ['helper'], [], undefined]]);
  assert.deepEqual(archiveMembers('/l.a', '00000001 T orphan\n'), []);
  assert.deepEqual(undefinedSymbols('U not-indented-is-fine\n  U  spaced\n00000001 U addressed\n'), ['not-indented-is-fine', 'spaced']);
  assert.deepEqual(usedModules(['l_A_f', 'l_B_g', 'l_A_h', 'initialize_C', 'l_I_x', 'l_IO_x', 'l_f___spec__1', 'lean_x', 'l_none'],
    new Map([['l_A_f', 'A'], ['l_B_g', 'Init.B'], ['l_A_h', 'A'], ['l_I_x', 'Init'], ['l_IO_x', 'IO.Basic'], ['l_f___spec__1', 'S'], ['lean_x', 'X']])), ['A', 'IO.Basic']);
  assert.deepEqual(directImports(['initialize_Init', 'initialize_Init_Data', 'initialize_Lean', 'initialize_Lean', 'initialize_Initial', 'l_x', 'initialize__x41']),
    ['Lean', 'Initial']);
});

test('module-data and dynamic-lookup requirements, long chains, at most three chains, and many replacements', () => {
  const memberList = (name, text) => archiveMembers(lib(name), text);
  const chainMembers = [...memberList('Lean', Array.from({ length: 8 }, (_, i) => `M${i}.o:\n00000001 T l_M${i}_f\n         U ${i === 7 ? 'lean_read_module_data' : `l_M${i + 1}_f`}\n`).join('')
    + 'Data.o:\n00000001 T lean_read_module_data\nDyn.o:\n00000001 T lasm_lookup_lean_symbol\n')];
  const rows = parseWhyExtract(why([
    ['/b/main.o', `${lib('Lean')}(M0.o)`, 'l_M0_f'],
    ...Array.from({ length: 7 }, (_, i) => [`${lib('Lean')}(M${i}.o)`, `${lib('Lean')}(M${i + 1}.o)`, `l_M${i + 1}_f`]),
    [`${lib('Lean')}(M7.o)`, `${lib('Lean')}(Data.o)`, 'lean_read_module_data'],
    ['/b/main.o', `${lib('Lean')}(Dyn.o)`, 'lasm_lookup_lean_symbol'],
    ['/elsewhere.o', `${lib('Lean')}(Data.o)`, 'l_unrelated'],
  ]));
  const lines = explainRejection({ rows, userObjects: ['/b/main.o'], members: chainMembers,
    requirements: { mode: 'dynamic', dynamic: ['lasm_lookup_lean_symbol'], cxxRuntime: [], moduleData: ['lean_read_module_data'], requiresModuleData: true },
    userSymbols: ['l_M0_f', 'lasm_lookup_lean_symbol'] });
  assert.deepEqual(lines.slice(0, 2), [
    'Required by: your code → M0.f → M1.f → M2.f → … → M7.f → lean_read_module_data → lean_read_module_data (module-data access)',
    'Required by: your code → lasm_lookup_lean_symbol → lasm_lookup_lean_symbol (dynamic symbol lookup)']);
  assert.equal(lines[2], 'Your code calls `M0.f`, `lasm_lookup_lean_symbol`, which needs this code at run time; narrower imports cannot remove it.');
  assert.equal(lines.length, 3);
  // A chain that does not start in the program's objects is not shown.
  assert.deepEqual(explainRejection({ rows, userObjects: ['/other.o'], members: chainMembers, requirements: { mode: 'dynamic', dynamic: ['lasm_lookup_lean_symbol'],
    cxxRuntime: [], moduleData: [], requiresModuleData: true } }), []);
  // Imports of many modules: at most twelve replacements are listed, and several broad imports are "them".
  const many = Array.from({ length: 14 }, (_, i) => `Use${i}.o:\n00000001 T initialize_Use${i}\n00000002 T l_Use${i}_f\n`).join('');
  const broad = memberList('Lean', 'Lean.o:\n00000001 T initialize_Lean\n         U lean_kernel\nLake.o:\n00000001 T initialize_Lake\n         U lean_kernel\n' + many);
  const cpp = memberList('leancpp', 'kernel.cpp.o:\n00000001 T lean_kernel\n');
  const broadRows = parseWhyExtract(why([['/b/main.o', `${lib('Lean')}(Lean.o)`, 'initialize_Lean'], ['/b/main.o', `${lib('Lean')}(Lake.o)`, 'initialize_Lake'],
    [`${lib('Lean')}(Lean.o)`, `${lib('leancpp')}(kernel.cpp.o)`, 'lean_kernel']]));
  const explained = explainRejection({ rows: broadRows, userObjects: ['/b/main.o'], members: [...broad, ...cpp],
    requirements: { mode: 'dynamic', dynamic: [], cxxRuntime: ['kernel.cpp.o'], moduleData: [], requiresModuleData: true },
    userSymbols: ['initialize_Lean', 'initialize_Lake', ...Array.from({ length: 14 }, (_, i) => `l_Use${i}_f`)] });
  assert.deepEqual(explained.slice(0, 4), ['Required by: your code → import Lean → lean_kernel → kernel.cpp (Lean C++ compiler/kernel)',
    '`import Lean` brings Lean\'s compiler and kernel into your program, even if you only use its data types.',
    'Replace it with the modules your code uses:', '  import Use0']);
  assert.equal(explained.filter(line => line.startsWith('  import ')).length, 12);
  assert.equal(explained.at(-2), '  … and 2 more');
  assert.match(explained.at(-1), /^Use `meta import` for modules needed only by macros or tactics\./);
  // Nothing else used: remove the import.
  const unused = explainRejection({ rows: broadRows, userObjects: ['/b/main.o'], members: [...broad, ...cpp],
    requirements: { mode: 'dynamic', dynamic: [], cxxRuntime: ['kernel.cpp.o'], moduleData: [], requiresModuleData: true }, userSymbols: ['initialize_Lean'] });
  assert.equal(unused[2], 'Your compiled code uses nothing else from it: remove it.');
});

test('a reused specialization is blamed on the broad imports the program has, outside Init and Std', () => {
  const specialized = 'l_IO_println___at___00Lean_Compiler_main_spec__1';
  const rows = parseWhyExtract(why([['/b/main.o', `${lib('Lean')}(Main.o)`, specialized], [`${lib('Lean')}(Main.o)`, `${lib('leancpp')}(abstract.cpp.o)`, 'lean_expr_abstract_range']]));
  const lines = explainRejection({ rows, userObjects: ['/b/main.o'], members, requirements: { ...requirements, cxxRuntime: ['abstract.cpp.o'] },
    userSymbols: ['initialize_Init', 'initialize_Std_Data', 'initialize_Lean', 'initialize_Lean_Elab', specialized, 'l_Lean_Json_compress'] });
  assert.deepEqual(lines, ['Required by: your code → IO.println → lean_expr_abstract_range → abstract.cpp (Lean C++ compiler/kernel)',
    'Your code reuses `IO.println` as specialized inside Lean\'s compiler, because the imported compiler modules provide that specialization.',
    '`import Lean`, `import Lean.Elab` brings Lean\'s compiler and kernel into your program, even if you only use its data types.',
    'Replace them with the modules your code uses:', '  import Lean.Data.Json.Printer',
    'Use `meta import` for modules needed only by macros or tactics. For example, `import Lean.Data.Json` instead of `import Lean` keeps JSON at run time.']);
  const none = explainRejection({ rows, userObjects: ['/b/main.o'], members, requirements: { ...requirements, cxxRuntime: ['abstract.cpp.o'] }, userSymbols: [specialized] });
  assert.equal(none[2], 'Your imports brings Lean\'s compiler and kernel into your program, even if you only use its data types.');
});
