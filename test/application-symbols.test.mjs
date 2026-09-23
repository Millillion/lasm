import test from 'node:test';
import assert from 'node:assert/strict';
import { applicationSymbolRegistry, parseDefinedSymbols } from '../src/application-symbols.mjs';

test('registry keeps package function addresses and initialized data distinct', () => {
  const symbols = parseDefinedSymbols('module.o:\nlp_app_answer T 0 12\nlp_app_value D 0 8\nl_Other T 0 8\nforeign_export T 0 4\n__main_void T 0 1\nmissing U 0 0\n');
  const result = applicationSymbolRegistry([`#include <lean/lean.h>
LEAN_EXPORT lean_object* lp_app_answer(lean_object*);
LEAN_EXPORT lean_object* lp_app_value;
LEAN_EXPORT uint32_t l_Other(uint32_t x){
`], symbols);
  assert.equal(result.symbols, 3);
  assert.match(result.source, /extern lean_object\* lp_app_value;/);
  assert.match(result.source, /\{"lp_app_value", \(void \*\)&lp_app_value\}/);
  assert.deepEqual(result.exports, ['_foreign_export', '_lp_app_value']);
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
