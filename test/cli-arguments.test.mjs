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

test('lasm dev arguments', async () => {
  const { parseDevArguments, relevantFile, changedFiles, formatLeanDiagnostics, summarizeStages } = await import('../src/dev.mjs');
  const parsed = parseLasmArguments(['dev']);
  assert.equal(parsed.command, 'dev'); assert.equal(parsed.input, 'Main.lean'); assert.equal(parsed.profile, 'dev'); assert.equal(parsed.target, 'node');
  assert.deepEqual(parseLasmArguments(['dev', 'App/Main.lean', '--target', 'workers', '--release', '--', 'a', '--b']),
    { command: 'dev', profile: 'release', args: ['a', '--b'], run: true, verbose: false, target: 'workers', input: 'App/Main.lean' });
  assert.equal(parseDevArguments(['--target=browser', '--port', '8080']).port, 8080);
  assert.equal(parseDevArguments(['--target', 'browser', '--release', '--no-watch']).watch, false);
  assert.throws(() => parseDevArguments(['--port', '8080']), /--port applies/);
  assert.throws(() => parseDevArguments(['--no-watch']), /--no-watch applies/);
  assert.throws(() => parseDevArguments(['--target', 'lambda']), /accepts/);
  assert.throws(() => parseDevArguments(['--watch']), /Unknown lasm dev option/);
  assert.equal(parseDevArguments(['--help']).command, 'dev-help');
  assert.ok(relevantFile('src/A.lean') && relevantFile('lakefile.toml') && relevantFile('package.json') && !relevantFile('dist/main.mjs'));
  assert.deepEqual(changedFiles(new Map([['a', '1'], ['b', '2']]), new Map([['a', '1'], ['b', '3'], ['c', '4']])), ['b', 'c']);
  const text = formatLeanDiagnostics('trace: .> lean x\nerror: ./Missing.lean:3:4: unknown identifier \'x\'\nerror: build failed', process.cwd());
  assert.equal(text, "Missing.lean:3:4: error: unknown identifier 'x'");
  assert.equal(summarizeStages([{ stage: 'Checking Lean sources and Lake dependencies', at: 0 }, { stage: 'Compiling application module 1 of 2', at: 500 },
    { stage: 'Linking application and Lean runtime', at: 700 }], 1500), 'Lean 0.5s · C 0.2s · link 0.8s');
});
