// Lasm's Lean library (src/lasm-library.mjs): which of its modules a program
// links, the sources and module data it adds, and how a Lean prefix gets the
// library (the shipped compilation, or a compile with the prefix's `lean`,
// here a stand-in that records its arguments and environment).
import test from 'node:test';
import assert from 'node:assert/strict';
import { chmodSync, existsSync, mkdirSync, mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { asyncGlueSource, compileLibrary, fetchGlueSource, glueLinkFlags, glueSource, importsLibrary, libraryFiles, libraryIdentity, libraryLeanVersions,
  libraryModules, libraryOutputs, librarySources, linkedLibraryModules, prebuiltLibrary } from '../src/lasm-library.mjs';
import { toolchainCatalog } from '../src/managed-lean.mjs';

const library = fileURLToPath(new URL('../library/', import.meta.url));
const call = module => `initialize_${module.replaceAll('.', '_')}(builtin);`;
const scratch = t => { const directory = mkdtempSync(join(tmpdir(), 'lasm-library-')); t.after(() => rmSync(directory, { recursive: true, force: true })); return directory; };
const put = (file, text) => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); };

test('the glue, its link flags and the outputs of every module relative to a prefix', () => {
  assert.equal(glueSource, join(library, 'c', 'lasm_js.c'));
  assert.equal(fetchGlueSource, join(library, 'c', 'lasm_fetch.c'));
  assert.ok(existsSync(glueSource) && existsSync(fetchGlueSource));
  assert.deepEqual(glueLinkFlags, ['-Wl,--wrap=lean_task_get', '-Wl,--wrap=lean_io_wait_any_core', '-Wl,--wrap=emscripten_futex_wait']);
  assert.deepEqual(libraryLeanVersions, ['4.35.0']);
  const outputs = libraryOutputs();
  assert.equal(outputs.length, 3 * libraryModules.length);
  assert.deepEqual(outputs.slice(0, 3), ['lib/lean/Lasm/JS/Core.olean', 'lib/lasm/c/Lasm/JS/Core.c', 'src/lean/Lasm/JS/Core.lean']);
  assert.deepEqual(outputs.slice(-3), ['lib/lean/Lasm/RPC.olean', 'lib/lasm/c/Lasm/RPC.c', 'src/lean/Lasm/RPC.lean']);
  for (const module of libraryModules) assert.ok(existsSync(join(library, ...module.split('.')) + '.lean'), module);
  assert.equal(new Set(libraryModules).size, libraryModules.length);
});

test('the library identity is a digest of the module list and every module source', () => {
  const identity = libraryIdentity();
  assert.match(identity, /^[0-9a-f]{64}$/);
  assert.equal(libraryIdentity(), identity);
  assert.equal(JSON.parse(readFileSync(join(library, 'prebuilt/lean-4.35.0/manifest.json'), 'utf8')).library, identity);
});

test('the shipped compilation is used only for its Lean release and commit', () => {
  const commit = toolchainCatalog.lean['4.35.0'].commit;
  const prebuilt = prebuiltLibrary('4.35.0', commit);
  assert.equal(prebuilt.directory, join(library, 'prebuilt', 'lean-4.35.0'));
  assert.deepEqual(Object.keys(prebuilt.files).sort(), [...libraryOutputs()].sort());
  assert.equal(prebuiltLibrary('4.36.0', commit), undefined);
  assert.equal(prebuiltLibrary('4.35.0', 'f'.repeat(40)), undefined);
});

test('a supported prefix with Lean\'s elaborator gets the shipped compilation copied in', t => {
  const tree = scratch(t);
  assert.equal(compileLibrary(tree, '4.35.0', { commit: toolchainCatalog.lean['4.35.0'].commit }), false, 'no elaborator libraries');
  mkdirSync(join(tree, 'lib/lean/Lean/Elab/Deriving'), { recursive: true });
  assert.equal(compileLibrary(tree, '4.35.0', { commit: toolchainCatalog.lean['4.35.0'].commit }), false, 'the deriving handlers\' module data is missing');
  put(join(tree, 'lib/lean/Lean/Elab/Deriving/Basic.olean'), '');
  assert.equal(compileLibrary(tree, '4.34.1', { commit: 'x' }), false, 'an unsupported release');
  assert.equal(compileLibrary(tree, '4.35.0', { commit: toolchainCatalog.lean['4.35.0'].commit }), true);
  for (const name of libraryOutputs())
    assert.deepEqual(readFileSync(join(tree, ...name.split('/'))), readFileSync(join(library, 'prebuilt/lean-4.35.0', ...name.split('/'))), name);
});

test('without a shipped compilation each module is compiled in import order by the prefix\'s lean, in a clean environment',
  { skip: process.platform === 'win32' }, t => {
    const tree = scratch(t), log = join(tree, 'log.jsonl');
    put(join(tree, 'lib/lean/Lean/Elab/Deriving/Basic.olean'), '');
    // The stand-in writes its -o and -c outputs and records its arguments and Lean's environment variables.
    put(join(tree, 'bin/lean'), `#!${process.execPath}
const { appendFileSync, writeFileSync } = require('node:fs');
const args = process.argv.slice(2);
writeFileSync(args[args.indexOf('-o') + 1], 'olean'); writeFileSync(args[args.indexOf('-c') + 1], 'c');
appendFileSync(${JSON.stringify(log)}, JSON.stringify({ args, kept: process.env.MY_LEAN_KEPT, env: Object.fromEntries(Object.entries(process.env).filter(([k]) => /^(?:lean|lake|elan)_/i.test(k))) }) + '\\n');
`);
    chmodSync(join(tree, 'bin/lean'), 0o755);
    const saved = { LEAN_PATH: process.env.LEAN_PATH, lake_home: process.env.lake_home, ELAN_HOME: process.env.ELAN_HOME, MY_LEAN_KEPT: process.env.MY_LEAN_KEPT };
    Object.assign(process.env, { LEAN_PATH: '/elsewhere', lake_home: '/elsewhere', ELAN_HOME: '/elsewhere', MY_LEAN_KEPT: 'kept' });
    try { assert.equal(compileLibrary(tree, '4.35.0', { platform: 'linux' }), true); }
    finally { for (const [key, value] of Object.entries(saved)) if (value === undefined) delete process.env[key]; else process.env[key] = value; }
    const runs = readFileSync(log, 'utf8').trim().split('\n').map(line => JSON.parse(line));
    assert.equal(runs.length, libraryModules.length);
    runs.forEach(({ args, env, kept }, index) => {
      assert.equal(kept, 'kept', 'other variables are passed on');
      const parts = libraryModules[index].split('.');
      const source = join(tree, 'src', 'lean', ...parts) + '.lean';
      assert.deepEqual(args, ['-j1', '-s8192', '-R', join(tree, 'src', 'lean'), '-Dcompiler.postponeCompile=false',
        '-o', join(tree, 'lib', 'lean', ...parts) + '.olean', '-c', join(tree, 'lib', 'lasm', 'c', ...parts) + '.c', source]);
      assert.deepEqual(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192' });
      assert.deepEqual(readFileSync(source), readFileSync(join(library, ...parts) + '.lean'));
    });
  });

test('a program links the library modules whose initializers it calls, and what those import, in import order', () => {
  const texts = { 'Lasm.UI': call('Lasm.UI.App'), 'Lasm.UI.App': call('Lasm.JS'), 'Lasm.JS': call('Lasm.JS.Core') + call('Lasm.JS.Json') };
  const libraryText = module => texts[module] ?? '';
  const read = text => () => text;
  assert.deepEqual(linkedLibraryModules(['main.c'], { read: read(call('Lasm.UI')), libraryText }), ['Lasm.JS.Core', 'Lasm.JS.Json', 'Lasm.JS', 'Lasm.UI.App', 'Lasm.UI']);
  assert.deepEqual(linkedLibraryModules(['main.c'], { read: read(call('Lasm.JS.Json')), libraryText }), ['Lasm.JS.Json']);
  assert.deepEqual(linkedLibraryModules(['main.c'], { read: read('initialize_Lasm_JSX(builtin); initialize_Lasm_JS_Core'), libraryText }), []);
  assert.deepEqual(linkedLibraryModules([], { libraryText }), []);
  assert.deepEqual(linkedLibraryModules(['main.c'], { read: read('lean_Lasm_JS(x); Lasm_UI('), libraryText }), [], 'only initializer calls');
});

test('whether a program imports the library: an initializer call of one of its modules in any generated C', t => {
  const directory = scratch(t);
  const file = (name, text) => { put(join(directory, name), text); return join(directory, name); };
  assert.equal(importsLibrary([file('a.c', 'initialize_Init(builtin);'), file('b.c', call('Lasm.Web.Dom'))]), true);
  assert.equal(importsLibrary([file('c.c', 'initialize_Lasm_Webx(builtin);'), file('d.c', 'initialize_Lasm_JS')]), false);
  assert.equal(importsLibrary([]), false);
});

test('the library sources a program links come from the prefix, with the glue, and their module data', t => {
  const prefix = scratch(t), lean = { prefix };
  const c = module => join(prefix, 'lib', 'lasm', 'c', ...module.split('.')) + '.c';
  for (const module of libraryModules) put(c(module), module === 'Lasm.JS' ? call('Lasm.JS.Core') : '');
  const program = join(prefix, 'Main.c');
  put(program, call('Lasm.JS'));
  const result = librarySources(lean, [program]);
  assert.deepEqual(result.modules, ['Lasm.JS.Core', 'Lasm.JS']);
  assert.deepEqual(result.sources, [c('Lasm.JS.Core'), c('Lasm.JS'), glueSource, fetchGlueSource, asyncGlueSource]);
  assert.deepEqual(result.inputs, [
    { module: '+Lasm.JS.Core', source: join(prefix, 'src', 'lean', 'Lasm', 'JS', 'Core.lean') },
    { module: '+Lasm.JS', source: join(prefix, 'src', 'lean', 'Lasm', 'JS.lean') },
    { module: 'lasm_js.c', source: glueSource }, { module: 'lasm_fetch.c', source: fetchGlueSource },
    { module: 'lasm_async.c', source: asyncGlueSource }]);
  assert.deepEqual(result.oleans, [join(prefix, 'lib', 'lean', 'Lasm', 'JS', 'Core.olean'), join(prefix, 'lib', 'lean', 'Lasm', 'JS.olean')]);
  rmSync(c('Lasm.RPC'));
  assert.throws(() => librarySources(lean, [program]), { message: `This program imports Lasm's library (Lasm.JS, Lasm.Fetch, Lasm.UI), which needs Lean 4.35.0 or Lean's elaborator libraries (the extended tier); it is missing from ${prefix}`.replace('4.35.0 or Lean', '4.35.0 with Lean') });
});

test('every file of the library, recursively', t => {
  const directory = scratch(t);
  put(join(directory, 'a.lean'), ''); put(join(directory, 'b/c/d.c'), ''); put(join(directory, 'b/e.lean'), '');
  assert.deepEqual(libraryFiles(directory).sort(), [join(directory, 'a.lean'), join(directory, 'b/c/d.c'), join(directory, 'b/e.lean')]);
  const files = libraryFiles();
  assert.ok(files.includes(glueSource) && files.includes(join(library, 'Lasm', 'JS.lean')));
});
