import assert from 'node:assert/strict';
import test from 'node:test';
import { parseLasmArguments } from '../src/cli-arguments.mjs';

test('ordinary Lean files default to run on Node, and preserve arguments after --', () => {
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', 'hello', '--target', 'user-option']), {
    command: 'run', input: 'Main.lean', rebuild: false, verbose: false,
    args: ['hello', '--target', 'user-option'],
  });
  assert.deepEqual(parseLasmArguments(['run', 'Main.lean']), parseLasmArguments(['Main.lean']));
});

test('options work on either side of the filename', () => {
  const before = parseLasmArguments(['--verbose', 'Main.lean', '--rebuild']);
  const after = parseLasmArguments(['Main.lean', '--rebuild', '--verbose']);
  assert.deepEqual(before, after);
  assert.equal(after.rebuild, true); assert.equal(after.verbose, true);
  assert.equal('target' in after, false);
  assert.equal(parseLasmArguments(['build', 'Main.lean']).output, 'dist');
});

test('build retains explicit output directories and existing binding configuration inputs', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--output', 'out dir']).output, 'out dir');
  assert.equal(parseLasmArguments(['build', 'Main.lean', 'out']).output, 'out');
  assert.equal(parseLasmArguments(['build', 'bindings.json', 'dist']).input, 'bindings.json');
});

test('help needs no input or build-time side effects', () => {
  assert.deepEqual(parseLasmArguments(['--help']), { command: 'help' });
  assert.deepEqual(parseLasmArguments(['build', '-h']), { command: 'help' });
});

for (const [args, error] of [
  [[], /Usage/], [['Main.lean', '--target', 'node'], /Unknown Lasm option: --target/],
  [['Main.lean', '--target=node'], /Unknown Lasm option: --target=node/],
  [['build', 'Main.lean', '--target', 'node'], /Unknown Lasm option: --target/],
  [['Main.lean', '--output', 'one', '--output', 'two'], /only once/],
  [['build', 'Main.lean', '--output'], /requires a value/],
  [['Main.lean', '--node-version', '26'], /Unknown Lasm option/],
  [['Main.lean', 'hello'], /after --/], [['Main.lean', '--output', 'dist'], /only with lasm build/],
  [['build', 'Main.lean', '--', 'hello'], /not lasm build/],
  [['build', 'Main.lean', 'one', 'two'], /Unexpected positional/],
  [['build', 'Main.lean', '--output', 'one', 'two'], /Unexpected positional/],
  [['run', 'config.json'], /Expected a Lean source/],
]) test(`invalid CLI input fails before compilation: ${JSON.stringify(args)}`, () => {
  assert.throws(() => parseLasmArguments(args), error);
});
