import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createContext, runInContext } from 'node:vm';

const source = readFileSync(new URL('../scripts/full-lean/host-library.js', import.meta.url), 'utf8');
// The backtrace import precedes Emscripten's compile-time macros. Evaluate its
// actual library registration with the allocation boundary supplied by the test.
const registration = source.slice(0, source.indexOf('  lasm_collect_loaded_libraries__deps:')) + '});';
function fixture(versions, allocate = text => text) {
  let library;
  const context = createContext({ process: { versions }, stringToNewUTF8: allocate,
    addToLibrary: value => { library = value; } });
  runInContext(registration, context);
  return { capture: library.lasm_host_backtrace, Error: runInContext('Error', context) };
}

test('Bun formatting retains real frame descriptions and restores caller descriptors', () => {
  const { capture, Error } = fixture({ bun: 'test' });
  const formatter = { value: () => 'caller formatter', enumerable: true, configurable: true, writable: false };
  const limit = { value: 3, enumerable: true, configurable: true, writable: false };
  Object.defineProperty(Error, 'prepareStackTrace', formatter);
  Object.defineProperty(Error, 'stackTraceLimit', limit);
  const stack = capture();
  assert.match(stack, /at .*lasm_host_backtrace/);
  assert.doesNotMatch(stack, /caller formatter/);
  assert.deepEqual(Object.getOwnPropertyDescriptor(Error, 'prepareStackTrace'), formatter);
  assert.deepEqual(Object.getOwnPropertyDescriptor(Error, 'stackTraceLimit'), limit);
});

test('backtrace allocation failure restores an absent formatter and the original limit', () => {
  const { capture, Error } = fixture({ bun: 'test' }, () => { throw new Error('allocation boundary failed'); });
  const limit = Object.getOwnPropertyDescriptor(Error, 'stackTraceLimit');
  assert.equal(Object.hasOwn(Error, 'prepareStackTrace'), false);
  assert.throws(capture, /allocation boundary failed/);
  assert.equal(Object.hasOwn(Error, 'prepareStackTrace'), false);
  assert.deepEqual(Object.getOwnPropertyDescriptor(Error, 'stackTraceLimit'), limit);
});

test('other engines and nonconfigurable formatters keep the caller stack policy', () => {
  for (const [versions, configurable] of [[{}, true], [{ deno: 'test' }, true], [{ bun: 'test' }, false]]) {
    const { capture, Error } = fixture(versions);
    const formatter = { value: () => 'caller stack', configurable, writable: false, enumerable: false };
    Object.defineProperty(Error, 'prepareStackTrace', formatter);
    assert.equal(capture(), 'caller stack');
    assert.deepEqual(Object.getOwnPropertyDescriptor(Error, 'prepareStackTrace'), formatter);
  }
});
