import assert from 'node:assert/strict';
import test from 'node:test';
import { parseLasmArguments } from '../src/cli-arguments.mjs';

test('ordinary Lean files default to run on Node, and preserve arguments after --', () => {
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', 'hello', '--target', 'user-option']), {
    command: 'run', input: 'Main.lean', target: 'node', rebuild: false, verbose: false,
    args: ['hello', '--target', 'user-option'],
  });
  assert.deepEqual(parseLasmArguments(['run', 'Main.lean']), parseLasmArguments(['Main.lean']));
});

for (const target of ['node', 'deno', 'bun']) test(`${target} selection works on either side of the filename`, () => {
  const before = parseLasmArguments(['--target', target, '--verbose', 'Main.lean', '--rebuild']);
  const after = parseLasmArguments(['Main.lean', '--target=' + target, '--rebuild', '--verbose']);
  assert.deepEqual(before, after);
  assert.equal(after.target, target);
  assert.equal(after.rebuild, true); assert.equal(after.verbose, true);
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', target]).output, 'dist');
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
  [[], /Usage/], [['Main.lean', '--target'], /requires a value/],
  [['Main.lean', '--target='], /requires a value/], [['Main.lean', '--target', '--verbose'], /requires a value/],
  [['Main.lean', '--target', 'browser'], /Use --target/],
  [['Main.lean', '--target', 'bun', '--target', 'node'], /only once/],
  [['Main.lean', '--node-version', '26'], /Unknown Lasm option/],
  [['Main.lean', 'hello'], /after --/], [['Main.lean', '--output', 'dist'], /only with lasm build/],
  [['build', 'Main.lean', '--', 'hello'], /not lasm build/],
  [['build', 'Main.lean', 'one', 'two'], /Unexpected positional/],
  [['build', 'Main.lean', '--output', 'one', 'two'], /Unexpected positional/],
  [['run', 'config.json'], /Expected a Lean source/],
]) test(`invalid CLI input fails before compilation: ${JSON.stringify(args)}`, () => {
  assert.throws(() => parseLasmArguments(args), error);
});
