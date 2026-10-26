import assert from 'node:assert/strict';
import test from 'node:test';
import { parseLasmArguments } from '../src/cli-arguments.mjs';

test('ordinary Lean files default to run on Node, and preserve arguments after --', () => {
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', 'hello', '--target', 'user-option']), {
    command: 'run', input: 'Main.lean', rebuild: false, verbose: false, profile: 'dev',
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

test('build targets: node by default, or a function platform packaged after the build', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean']).target, 'node');
  for (const target of ['node', 'lambda', 'lambda-edge', 'vercel', 'netlify', 'azure', 'gcf']) {
    assert.equal(parseLasmArguments(['build', 'Main.lean', '--target', target]).target, target);
    assert.equal(parseLasmArguments(['build', `--target=${target}`, 'Main.lean', '--output', 'out']).target, target);
  }
  assert.deepEqual(parseLasmArguments(['build', 'Main.lean', '--target', 'lambda', '--output', 'out']),
    { command: 'build', input: 'Main.lean', output: 'out', target: 'lambda', rebuild: false, verbose: false, profile: 'release', args: [] });
});

test('profiles: lasm build is release, lasm run is dev; --dev and --release choose', () => {
  assert.equal(parseLasmArguments(['build', 'Main.lean']).profile, 'release');
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--dev']).profile, 'dev');
  assert.equal(parseLasmArguments(['Main.lean']).profile, 'dev');
  assert.equal(parseLasmArguments(['run', 'Main.lean', '--release']).profile, 'release');
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--dev', '--dev']).profile, 'dev');
  assert.throws(() => parseLasmArguments(['build', 'Main.lean', '--dev', '--release']), /Choose one of --dev and --release/);
  assert.throws(() => parseLasmArguments(['build', 'bindings.json', '--dev']), /apply to Lean applications/);
  assert.equal(parseLasmArguments(['build', 'Main.lean', '--dev', '--target', 'lambda', '--allow-dev']).allowDev, true);
  assert.throws(() => parseLasmArguments(['build', 'Main.lean', '--allow-dev']), /--allow-dev applies to/);
  assert.throws(() => parseLasmArguments(['Main.lean', '--allow-dev']), /--allow-dev applies to/);
  // Application arguments after -- are never Lasm options.
  assert.deepEqual(parseLasmArguments(['Main.lean', '--', '--release']).args, ['--release']);
  assert.equal(parseLasmArguments(['Main.lean', '--', '--release']).profile, 'dev');
});

test('help needs no input or build-time side effects', () => {
  assert.deepEqual(parseLasmArguments(['--help']), { command: 'help' });
  assert.deepEqual(parseLasmArguments(['build', '-h']), { command: 'help' });
});

for (const [args, error] of [
  [[], /Usage/], [['Main.lean', '--target', 'node'], /--target is available only with lasm build/],
  [['Main.lean', '--target=node'], /--target is available only with lasm build/],
  [['build', 'Main.lean', '--target', 'pages'], /Unknown build target "pages"/],
  [['build', 'Main.lean', '--target'], /--target requires a value/],
  [['build', 'Main.lean', '--target', 'lambda', '--target=vercel'], /Specify --target only once/],
  [['build', 'bindings.json', '--target', 'lambda'], /applies to Lean applications/],
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
