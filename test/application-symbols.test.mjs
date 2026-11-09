import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { applicationSymbolRegistry, parseDefinedSymbols, initializationFreeCppSymbols, isLeanSymbol, readApplicationSymbols,
  readInitializationFreeCppSymbols } from '../src/application-symbols.mjs';

test('registry keeps package function addresses and initialized data distinct', () => {
  const symbols = parseDefinedSymbols('module.o:\nlp_app_answer T 0 12\nlp_app_value D 0 8\nl_Other T 0 8\nforeign_export T 0 4\n__main_void T 0 1\n__wrap_lean_task_get T 0 4\nmissing U 0 0\n');
  const result = applicationSymbolRegistry([`#include <lean/lean.h>
LEAN_EXPORT lean_object* lp_app_answer(lean_object*);
LEAN_EXPORT lean_object* lp_app_value;
LEAN_EXPORT uint32_t l_Other(uint32_t x){
`], symbols);
  assert.equal(result.symbols, 3);
  assert.match(result.source, /extern lean_object\* lp_app_value;/);
  assert.match(result.source, /\{"lp_app_value", \(void \*\)&lp_app_value\}/);
  assert.deepEqual(result.exports, ['_foreign_export', '_lp_app_value']);
  assert.deepEqual(result.foreignExports, ['_foreign_export']);
  assert.ok(result.source.indexOf('{"l_Other"') < result.source.indexOf('{"lp_app_answer"'));
  assert.doesNotMatch(result.source, /missing/);
});

test('unrecognized generated declarations stop the link instead of losing reflection', () => {
  assert.throws(() => applicationSymbolRegistry(['static lean_object* l_hidden;'], [{ name: 'l_hidden', type: 'D' }]), /Missing C declarations/);
});

test('empty application registries have a portable null fallback', () => {
  const result = applicationSymbolRegistry([], []);
  assert.match(result.source, /\(void\)name;/);
  assert.doesNotMatch(result.source, /lasm_application_symbols\[\]/);
  assert.deepEqual(result.exports, []);
});

test('compiler-generated phase initializers are reached through main, not exported as roots', () => {
  const initializers = ['initialize_Main', 'runtime_initialize_Main', 'meta_initialize_Main'];
  const names = [...initializers, 'user_export', 'initialize_user_function'];
  const source = initializers.map(name => `LEAN_EXPORT lean_object* ${name}(uint8_t builtin) {\nreturn 0;\n}`).join('\n');
  const registry = applicationSymbolRegistry([source], names.map(name => ({ name, type: 'T' })));
  assert.deepEqual(registry.foreignExports, ['_initialize_user_function', '_user_export']);
  assert.equal(registry.exports.length, names.length, 'Full dynamic ABI remains available');
});

test('shared C++ helpers are recognized from object binding, never a name allowlist', () => {
  const result = initializationFreeCppSymbols('a.o:\ninlineHelper W 0 9\nsharedType V 0 8\nstrongFn T 0 4\nmutableData B 0 8\nmixed W 0 4\nb.o:\nmixed T 0 8\n');
  assert.deepEqual([...result].sort(), ['inlineHelper', 'sharedType']);
});

test('the registry is read from the objects\' symbols (llvm-nm) and the C sources', t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-symbols-'));
  t.after(() => rmSync(directory, { recursive: true, force: true }));
  const c = join(directory, 'Main.c');
  writeFileSync(c, 'LEAN_EXPORT lean_object* l_main_value;\nLEAN_EXPORT double l_ratio(double x) {\n');
  const asked = [];
  const nmText = (args, file) => { asked.push([args, file]); return file.endsWith('a.o') ? 'l_main_value B 0 8\n' : 'l_ratio T 0 4\nhelper t 0 2\n'; };
  const result = readApplicationSymbols([c], [join(directory, 'a.o'), join(directory, 'b.o')], 'llvm-nm', 'custom_hook', { nmText });
  assert.deepEqual(asked, [[['--defined-only', '--extern-only', '--format=posix'], join(directory, 'a.o')], [['--defined-only', '--extern-only', '--format=posix'], join(directory, 'b.o')]]);
  assert.equal(result.symbols, 2);
  assert.match(result.source, /^void \*custom_hook\(const char \*name\) \{$/m);
  assert.match(result.source, /^extern double l_ratio\(double x\);$/m);
  assert.deepEqual(result.exports, ['_helper', '_l_main_value']);
  // A real nm run: the stand-in prints its arguments' file as a defined symbol.
  if (process.platform !== 'win32') {
    const nm = join(directory, 'llvm-nm');
    writeFileSync(nm, `#!${process.execPath}\nconst f = process.argv.at(-1); console.log(require('node:path').basename(f).replace('.', '_') + ' W 0 1'); console.log('strong T 0 1');\n`, { mode: 0o755 });
    assert.deepEqual([...readInitializationFreeCppSymbols(join(directory, 'lib.a'), nm)], ['lib_a']);
    writeFileSync(join(directory, 'l_x.c'), 'LEAN_EXPORT lean_object* l_x;\n');
    writeFileSync(nm, `#!${process.execPath}\nconsole.log('l_x D 0 8');\n`, { mode: 0o755 });
    assert.equal(readApplicationSymbols([join(directory, 'l_x.c')], [join(directory, 'x.o')], nm).symbols, 1);
  }
});

test('declarations of every recognized C type, exported or extern, const or not; only defined symbols get one', () => {
  const kinds = ['lean_object*', 'lean_object *', 'uint8_t', 'uint16_t', 'uint32_t', 'uint64_t', 'size_t', 'double', 'float', 'void', 'const lean_object*'];
  const sources = [kinds.map((type, i) => `${i % 2 ? 'LEAN_EXPORT ' : 'extern '}${type} l_v${i}${i % 3 === 0 ? '(lean_object* a)' : ''}${i % 3 === 1 ? ' = 0' : ';'}`).join('\n') + '\nlean_object* l_unlisted;\n'];
  const symbols = kinds.map((_, i) => ({ name: `l_v${i}`, type: 'D' }));
  const result = applicationSymbolRegistry(sources, symbols);
  assert.equal(result.symbols, kinds.length);
  kinds.forEach((type, i) => assert.ok(result.source.includes(`extern ${type} l_v${i}${i % 3 === 0 ? '(lean_object* a)' : ''};`), type));
  assert.doesNotMatch(result.source, /l_unlisted/);
  assert.throws(() => applicationSymbolRegistry([], [], 'bad-hook'), { message: 'Invalid application symbol hook' });
  assert.throws(() => applicationSymbolRegistry([], [], '9hook'), { message: 'Invalid application symbol hook' });
  assert.throws(() => applicationSymbolRegistry(['int l_a;'], [{ name: 'l_a', type: 'D' }, { name: 'l_b', type: 'T' }]),
    { message: 'Missing C declarations for application symbols: l_a, l_b' });
  // Lean symbols are exported when they are data (B, D, G, R, S), never as code; others unless they are entry points or wrappers.
  const types = applicationSymbolRegistry(['LEAN_EXPORT lean_object* l_t;\nLEAN_EXPORT lean_object* l_r;\nLEAN_EXPORT lean_object* l_g;\nLEAN_EXPORT lean_object* l_s;'],
    [{ name: 'l_t', type: 'T' }, { name: 'l_r', type: 'R' }, { name: 'l_g', type: 'G' }, { name: 'l_s', type: 'S' }, { name: '__main_argc_argv', type: 'T' },
      { name: '__em_lib_deps_x', type: 'D' }, { name: 'c_api', type: 'T' }, { name: 'c_api', type: 'T' }]);
  assert.deepEqual(types.exports, ['_c_api', '_l_g', '_l_r', '_l_s']);
  assert.deepEqual(types.foreignExports, ['_c_api']);
  // The registry is sorted for its binary search.
  const order = [...types.source.matchAll(/\{"(l_\w+)"/g)].map(match => match[1]);
  assert.deepEqual(order, [...order].sort());
  assert.match(types.source, /size_t middle = first \+ \(end - first\) \/ 2;/);
});

test('posix nm rows: defined symbols with their upper-cased type; undefined ones and other lines are left out', () => {
  assert.deepEqual(parseDefinedSymbols('a.o:\nx t 0 1\ny U\nz u 0 0\nw W 0 1\nbad line\n'), [{ name: 'x', type: 'T' }, { name: 'w', type: 'W' }]);
  assert.equal(isLeanSymbol('l_x') && isLeanSymbol('lp_x') && !isLeanSymbol('lean_x') && !isLeanSymbol('xl_x'), true);
});
