// Lasm.JS binding check (src/application-binding-check.mjs): reading the
// bindings with Lean (a stand-in `lean` that prints them) and their cache, the
// check in a child of this runtime against a project's node_modules and Lasm's
// builtin modules, its cache, and the build's verdict.
import test from 'node:test';
import assert from 'node:assert/strict';
import { chmodSync, existsSync, mkdirSync, mkdtempSync, readdirSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { checkBindings, checkBindingsAsync, readBindings, readBindingsAsync, requireValidBindings } from '../src/application-binding-check.mjs';

const scratch = t => { const directory = mkdtempSync(join(tmpdir(), 'lasm-bindings-')); t.after(() => rmSync(directory, { recursive: true, force: true })); return directory; };
const put = (file, text) => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); return file; };

/** A stand-in `lean --run reader FILE…`: one binding per module file, between other output; counts its runs. */
function standInLean(directory) {
  const runs = join(directory, 'runs');
  const lean = put(join(directory, 'bin', 'lean'), `#!${process.execPath}
const { appendFileSync } = require('node:fs');
const [run, reader, ...files] = process.argv.slice(2);
appendFileSync(${JSON.stringify(runs)}, JSON.stringify({ run, reader, files }) + '\\n');
if (process.env.STAND_IN_FAIL) { process.stderr.write('reader failed'); process.exit(1); }
console.log('Lean says hello');
for (const file of files) console.log(JSON.stringify({ name: require('node:path').basename(file), module: 'm', path: 'f', arity: 1 }));
console.log('  {indented, not a binding');
`);
  chmodSync(lean, 0o755);
  const count = () => existsSync(runs) ? readFileSync(runs, 'utf8').trim().split('\n').map(line => JSON.parse(line)) : [];
  return { lean: { lean, identity: 'stand-in' }, count };
}

test('bindings are read from the module files that exist, by Lean, once per unchanged set of files', { skip: process.platform === 'win32' }, async t => {
  const directory = scratch(t);
  const { lean, count } = standInLean(directory);
  const a = put(join(directory, 'A.olean'), 'a'), b = put(join(directory, 'B.olean'), 'b');
  const cache = join(directory, 'cache');
  assert.deepEqual(readBindings(lean, process.env, [join(directory, 'missing.olean')]), []);
  assert.deepEqual(await readBindingsAsync(lean, process.env, []), []);
  assert.equal(count().length, 0);
  const expected = [{ name: 'A.olean', module: 'm', path: 'f', arity: 1 }, { name: 'B.olean', module: 'm', path: 'f', arity: 1 }];
  assert.deepEqual(readBindings(lean, process.env, [a, join(directory, 'missing.olean'), b], { cache }), expected);
  const [first] = count();
  assert.equal(first.run, '--run');
  assert.match(first.reader, /lasm-js-bindings\.lean$/);
  assert.deepEqual(first.files, [a, b]);
  // Unchanged files: the recorded bindings, sync and async, without Lean.
  assert.deepEqual(readBindings(lean, process.env, [a, b], { cache }), expected);
  assert.deepEqual(await readBindingsAsync(lean, process.env, [a, b], { cache }), expected);
  assert.equal(count().length, 1);
  assert.equal(readdirSync(cache).length, 1);
  // A changed file is read again; the earlier record is replaced.
  writeFileSync(b, 'changed');
  assert.deepEqual(await readBindingsAsync(lean, process.env, [a, b], { cache }), expected);
  assert.equal(count().length, 2);
  assert.equal(readdirSync(cache).length, 1);
  assert.match(readdirSync(cache)[0], /^bindings-[0-9a-f]{64}\.json$/);
  // Another Lean reads the same files again.
  readBindings({ ...lean, identity: 'other' }, process.env, [a, b], { cache });
  assert.equal(count().length, 3);
  // Without a cache every read runs Lean.
  readBindings(lean, process.env, [a]); await readBindingsAsync(lean, process.env, [a]);
  assert.equal(count().length, 5);
  // An unwritable cache only costs the next read.
  const blocked = put(join(directory, 'blocked'), '');
  assert.deepEqual(readBindings(lean, process.env, [a], { cache: blocked }), [expected[0]]);
});

test('a failing reader, or a missing Lean, is reported', { skip: process.platform === 'win32' }, async t => {
  const directory = scratch(t);
  const { lean } = standInLean(directory);
  const a = put(join(directory, 'A.olean'), 'a');
  const env = { ...process.env, STAND_IN_FAIL: '1' };
  assert.throws(() => readBindings(lean, env, [a]), { message: 'Cannot read Lasm.JS bindings: reader failed' });
  await assert.rejects(readBindingsAsync(lean, env, [a]), { message: 'Cannot read Lasm.JS bindings: reader failed' });
  const missing = { lean: join(directory, 'no-lean') };
  assert.throws(() => readBindings(missing, process.env, [a]), { code: 'ENOENT' });
  await assert.rejects(readBindingsAsync(missing, process.env, [a]), { code: 'ENOENT' });
});

function project(t) {
  const directory = scratch(t);
  put(join(directory, 'package.json'), '{}');
  const pkg = (name, source) => {
    put(join(directory, 'node_modules', name, 'package.json'), JSON.stringify({ name, main: 'index.js' }));
    put(join(directory, 'node_modules', name, 'index.js'), source);
  };
  pkg('fns', `module.exports = { two(a, b) {}, none() {}, arrow: () => {}, Klass: class {}, value: 3, nothing: null, nested: { deep: { f(x) {} } } };`);
  pkg('callable', 'module.exports = function callable(a) {};');
  pkg('broken', 'throw new Error("boom");');
  return directory;
}

const cases = [
  [{ name: 'Ok.two', module: 'fns', path: 'two', arity: 2 }, {}],
  [{ name: 'Ok.nested', module: 'fns', path: 'nested.deep.f', arity: 1 }, {}],
  [{ name: 'Ok.module', module: 'callable', arity: 1 }, {}],
  [{ name: 'Ok.global', module: 'globalThis', path: 'setTimeout', arity: 2 }, {}],
  [{ name: 'Ok.class', module: 'fns', path: 'Klass', arity: 0, construct: true }, {}],
  [{ name: 'Ok.variadic', module: 'fns', path: 'none', arity: 3 }, {}],
  [{ name: 'Ok.builtin', module: 'lasm:ui-dom', path: 'createUi', arity: 1 }, {}],
  [{ name: 'Err.builtinExport', module: 'lasm:ui-dom', path: 'start', arity: 0 }, { error: 'lasm:ui-dom export "start" is missing' }],
  [{ name: 'Warn.arity', module: 'fns', path: 'two', arity: 3 }, { warning: 'the Lean binding passes 3 arguments; fns export "two" declares 2 parameters' }],
  [{ name: 'Err.missing', module: 'fns', path: 'absent', arity: 1 }, { error: 'fns export "absent" is missing' }],
  [{ name: 'Err.null', module: 'fns', path: 'nothing.f', arity: 1 }, { error: 'fns export "nothing.f" is missing' }],
  [{ name: 'Err.value', module: 'fns', path: 'value', arity: 1 }, { error: 'fns export "value" is a number, not a function' }],
  [{ name: 'Err.object', module: 'fns', path: 'nested', arity: 1 }, { error: 'fns export "nested" is a object, not a function' }],
  [{ name: 'Err.new', module: 'fns', path: 'arrow', arity: 0, construct: true }, { error: 'fns export "arrow" cannot be called with new' }],
  [{ name: 'Err.install', module: 'absent-package', path: 'f', arity: 1 }, { error: 'module "absent-package" is not installed (add it to package.json and run npm install)' }],
  [{ name: 'Err.load', module: 'broken', path: 'f', arity: 1 }, { error: 'loading broken failed: boom' }],
  [{ name: 'Err.builtin', module: 'lasm:no-such-module', path: 'f', arity: 1 }, { error: 'unknown Lasm builtin module lasm:no-such-module' }],
  [{ name: 'Err.builtinName', module: 'lasm:../ui-dom', path: 'f', arity: 1 }, { error: 'unknown Lasm builtin module lasm:../ui-dom' }],
  [{ name: 'Err.whole', module: 'fns', arity: 1 }, { error: 'fns is a object, not a function' }],
];

test('each binding is checked against what the module exports, as the deployment will load it', async t => {
  const directory = project(t);
  const bindings = cases.map(([binding]) => binding);
  const sync = checkBindings(directory, bindings), concurrent = await checkBindingsAsync(directory, bindings);
  assert.deepEqual(concurrent, sync);
  sync.forEach((result, index) => {
    const [binding, expected] = cases[index];
    assert.deepEqual(result, { ...binding, ...expected }, binding.name);
  });
  assert.deepEqual(checkBindings(directory, []), []);
  assert.deepEqual(await checkBindingsAsync(directory, []), []);
});

test('the check\'s verdict: errors fail the build with each binding named, warnings are returned', () => {
  const results = [{ name: 'A', warning: 'w1' }, { name: 'B' }, { name: 'C', warning: 'w2' }];
  assert.deepEqual(requireValidBindings(results), ['A: w1', 'C: w2']);
  assert.deepEqual(requireValidBindings([]), []);
  assert.throws(() => requireValidBindings([...results, { name: 'D', error: 'e1' }, { name: 'E', error: 'e2' }]), error =>
    error.code === 'ERR_LASM_JS_BINDING' && error.message === 'Lasm.JS binding check failed:\n  D: e1\n  E: e2\n'
      + 'Fix the @[js "module" "export"] declarations or install the packages; see https://github.com/Millillion/lasm/blob/main/docs/JS_BINDINGS.md');
});

test('a check without errors is reused while the bindings and the installed packages are unchanged', async t => {
  const directory = project(t), cache = join(directory, 'cache');
  const good = [{ name: 'Ok', module: 'fns', path: 'two', arity: 2 }];
  assert.deepEqual(await checkBindingsAsync(directory, good, { cache, identity: 'one' }), good);
  assert.match(readdirSync(cache).join(), /^checked-[0-9a-f]{64}\.json$/);
  rmSync(join(directory, 'node_modules/fns'), { recursive: true });
  assert.deepEqual(await checkBindingsAsync(directory, good, { cache, identity: 'one' }), good, 'reused');
  // Another package identity, or no identity, checks again.
  assert.match((await checkBindingsAsync(directory, good, { cache, identity: 'two' }))[0].error, /not installed/);
  assert.match((await checkBindingsAsync(directory, good, { cache }))[0].error, /not installed/);
  // Errors are not recorded: the earlier record stays the only one.
  assert.equal(readdirSync(cache).length, 1);
  writeFileSync(join(cache, readdirSync(cache)[0]), '{"not":"a list"}');
  assert.match((await checkBindingsAsync(directory, good, { cache, identity: 'one' }))[0].error, /not installed/);
});

test('a check that cannot run is an error with its output', async t => {
  const directory = project(t);
  put(join(directory, 'node_modules', 'exits', 'package.json'), JSON.stringify({ name: 'exits', main: 'index.js' }));
  put(join(directory, 'node_modules', 'exits', 'index.js'), 'process.stderr.write("gone"); process.exit(3);');
  const bindings = [{ name: 'X', module: 'exits', path: 'f', arity: 1 }];
  assert.throws(() => checkBindings(directory, bindings), { message: 'The Lasm.JS binding check failed to run: gone' });
  await assert.rejects(checkBindingsAsync(directory, bindings), { message: 'The Lasm.JS binding check failed to run: gone' });
  put(join(directory, 'node_modules', 'exits', 'index.js'), 'process.stdout.write("not json"); process.exit(0);');
  await assert.rejects(checkBindingsAsync(directory, bindings), SyntaxError);
  await assert.rejects(checkBindingsAsync(join(directory, 'no-such-directory'), bindings), { code: 'ENOENT' });
  assert.throws(() => checkBindings(join(directory, 'no-such-directory'), bindings), /failed to run/);
});
