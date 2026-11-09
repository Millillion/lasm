// The build front end (src/application-sources.mjs) with stand-in `lean` and
// `lake` (test/fixtures/lean-stand-in.mjs): projects and their Lake
// configuration identity, Lean's environment, standalone source trees and
// their compile receipts, Lake projects through Lasm's adapter and Lake's
// queries, and the checks on what they answer.
import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, readFileSync, readdirSync, realpathSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { delimiter, dirname, join } from 'node:path';
import { applicationSources, assertDefinesMain, cCompilerEnvironment, exactCaseImportSource, findApplicationProject, lakeConfigurationKey,
  lakeNativePackages, leanHeader, macosSdk, macosSdkMissing, macosSdkPath, nativeLeanEnvironment, standaloneImportsModules,
  workspaceImportsKey } from '../src/application-sources.mjs';
import { leanStandIn } from './fixtures/lean-stand-in.mjs';

const posix = { skip: process.platform === 'win32' && 'the stand-in tools are POSIX scripts' };
const scratch = t => { const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-sources-'))); t.after(() => rmSync(directory, { recursive: true, force: true })); return directory; };
const put = (file, text = '') => { mkdirSync(dirname(file), { recursive: true }); writeFileSync(file, text); return file; };

test('a project is the nearest directory with a lakefile; a toolchain pin without one ends the search', t => {
  const root = scratch(t);
  put(join(root, 'lakefile.toml'));
  assert.equal(findApplicationProject(put(join(root, 'Main.lean'))), root);
  assert.equal(findApplicationProject(put(join(root, 'src/deep/Mod.lean'))), root);
  put(join(root, 'inner/lakefile.lean'));
  assert.equal(findApplicationProject(join(root, 'inner/Main.lean')), join(root, 'inner'));
  put(join(root, 'pinned/lean-toolchain'));
  assert.equal(findApplicationProject(join(root, 'pinned/sub/Main.lean')), undefined);
  const lone = scratch(t);
  assert.equal(findApplicationProject(join(lone, 'Main.lean')), undefined);
});

test('Lean\'s environment: no inherited Lean, Lake or elan settings, one thread, a large stack, Lean and Node first on PATH', () => {
  const inherited = { LEAN_PATH: '/x', LAKE_HOME: '/y', ELAN_HOME: '/z', lean_lower: 'kept', OTHER: 'kept', PATH: '/usr/bin' };
  const env = nativeLeanEnvironment({ prefix: '/lean' }, inherited);
  assert.deepEqual(env, { lean_lower: 'kept', OTHER: 'kept', LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192',
    PATH: ['/lean/bin', dirname(process.execPath), '/usr/bin'].join(delimiter) });
  assert.equal(inherited.LEAN_PATH, '/x', 'the inherited environment is not changed');
  assert.equal(nativeLeanEnvironment({ prefix: '/lean', executionPrefix: '/short' }, {}).PATH, ['/short/bin', dirname(process.execPath)].join(delimiter));
  const withC = nativeLeanEnvironment({ prefix: '/lean', cCompiler: {} }, { C_INCLUDE_PATH: '/inc' });
  if (process.platform === 'linux') assert.equal(withC.C_INCLUDE_PATH, ['/lean/lib/lasm-libc/include', '/inc'].join(delimiter));
  assert.equal(nativeLeanEnvironment({ prefix: '/lean' }).OTHER, process.env.OTHER);
});

test('the C tier\'s headers: Linux include paths, the macOS SDK, nothing elsewhere', () => {
  const lean = cCompiler => ({ prefix: '/lean', executionPrefix: '/exec', cCompiler });
  assert.deepEqual(cCompilerEnvironment(lean({ multiarch: 'x86_64-linux-gnu' }), { C_INCLUDE_PATH: '/mine' }, { platform: 'linux' }),
    { C_INCLUDE_PATH: ['/exec/lib/lasm-libc/include/x86_64-linux-gnu', '/exec/lib/lasm-libc/include', '/mine'].join(delimiter) });
  assert.deepEqual(cCompilerEnvironment(lean({}), {}, { platform: 'linux' }), { C_INCLUDE_PATH: '/exec/lib/lasm-libc/include' });
  assert.deepEqual(cCompilerEnvironment(lean({}), { SDKROOT: '/given' }, { platform: 'darwin', sdkPath: () => { throw new Error('not asked'); } }), {});
  assert.deepEqual(cCompilerEnvironment(lean({}), {}, { platform: 'darwin', sdkPath: () => '/sdk' }), { SDKROOT: '/sdk' });
  assert.throws(() => cCompilerEnvironment(lean({}), {}, { platform: 'darwin', sdkPath: () => null }), { message: macosSdkMissing });
  assert.deepEqual(cCompilerEnvironment(lean({}), {}, { platform: 'win32' }), {});
  assert.match(macosSdkMissing, /^This project has packages with C code\. On macOS.*xcode-select --install.*No C compiler other than Lean's own is used\.$/);
});

test('the macOS SDK: SDKROOT when it holds the C headers, else the Command Line Tools', { skip: process.platform === 'darwin' && 'Linux has no Command Line Tools' }, t => {
  const sdk = scratch(t);
  put(join(sdk, 'usr/include/stdio.h'));
  assert.equal(macosSdk({ SDKROOT: sdk }), sdk);
  assert.equal(macosSdk({ SDKROOT: join(sdk, 'usr') }), null);
  assert.equal(macosSdk({}), null);
  assert.equal(macosSdkPath(), null);
});

test('the import header: everything before the first other command, comments included', () => {
  assert.equal(leanHeader('import A\nimport B\ndef x := 1\nimport C'), 'import A\nimport B');
  assert.equal(leanHeader('module\n\npublic import A\nmeta import B\nprivate all import C\nprelude\n-- note\n/- block\nimport X\n-/\n  import D\ntheorem t : True := trivial'),
    'module\n\npublic import A\nmeta import B\nprivate all import C\nprelude\n-- note\n/- block\nimport X\n-/\n  import D');
  assert.equal(leanHeader('/- a /- nested -/ still\ndef inside := 1\n-/\nimport A\nopen A'), '/- a /- nested -/ still\ndef inside := 1\n-/\nimport A');
  assert.equal(leanHeader('-/\nimport A\ndef y := 2'), '-/\nimport A');
  assert.equal(leanHeader('importA\nimport B'), '');
  assert.equal(leanHeader('import A\r\ndef x := 1'), 'import A');
  assert.equal(leanHeader('def x := 1'), '');
  assert.equal(leanHeader(''), '');
});

test('the Lake configuration key follows the lakefiles, manifest, toolchains, import header, adapter and Lean', t => {
  const project = scratch(t);
  put(join(project, 'lakefile.toml'), 'name = "app"');
  const source = put(join(project, 'Main.lean'), 'import Dep\ndef main : IO Unit := pure ()');
  const lean = { identity: 'one' };
  const key = lakeConfigurationKey(project, source, lean);
  assert.match(key, /^[0-9a-f]{64}$/);
  assert.equal(lakeConfigurationKey(project, source, lean), key);
  const changes = [];
  const expectChange = (label, action, undo) => { action(); const changed = lakeConfigurationKey(project, source, lean); changes.push(changed); assert.notEqual(changed, key, label); undo?.(); };
  writeFileSync(source, 'import Dep\ndef main : IO Unit := IO.println "x"');
  assert.equal(lakeConfigurationKey(project, source, lean), key, 'a body edit keeps the key');
  expectChange('header', () => writeFileSync(source, 'import Dep\nimport More\ndef main : IO Unit := pure ()'), () => writeFileSync(source, 'import Dep\ndef main : IO Unit := pure ()'));
  expectChange('lakefile', () => writeFileSync(join(project, 'lakefile.toml'), 'name = "other"'), () => writeFileSync(join(project, 'lakefile.toml'), 'name = "app"'));
  expectChange('toolchain', () => writeFileSync(join(project, 'lean-toolchain'), 'v4'), () => rmSync(join(project, 'lean-toolchain')));
  expectChange('Lean', () => { lean.identity = 'two'; }, () => { lean.identity = 'one'; });
  assert.equal(lakeConfigurationKey(project, source, lean), key);
  assert.equal(lakeConfigurationKey(project, source, { commit: 'one' }), key, 'the commit stands for a missing identity');
  assert.notEqual(lakeConfigurationKey(project, source, {}), lakeConfigurationKey(project, source, { commit: 'x' }));
  assert.notEqual(lakeConfigurationKey(project, undefined, lean), key, 'without a source there is no header');
  assert.notEqual(lakeConfigurationKey(project, join(project, 'Other.lean'), lean), key, 'the source path');
  // The manifest's packages, at their directories.
  const manifest = { packagesDir: 'deps', packages: [{ type: 'path', name: 'local', dir: 'local' }, { type: 'git', name: 'remote' }] };
  put(join(project, 'lake-manifest.json'), JSON.stringify(manifest));
  const withManifest = lakeConfigurationKey(project, source, lean);
  assert.notEqual(withManifest, key);
  for (const file of [join(project, 'local/lakefile.lean'), join(project, 'deps/remote/lakefile.toml'), join(project, 'deps/remote/lean-toolchain')]) {
    put(file, 'import Lake\n-- ' + file);
    assert.notEqual(lakeConfigurationKey(project, source, lean), withManifest, file);
    rmSync(file);
  }
  put(join(project, '.lake/packages/remote/lakefile.toml'), 'x');
  assert.equal(lakeConfigurationKey(project, source, lean), withManifest, 'packagesDir is the manifest\'s');
  // An empty manifest (as Lake writes on the first build) is the missing manifest.
  writeFileSync(join(project, 'lake-manifest.json'), JSON.stringify({ version: 7, packages: [] }));
  assert.equal(lakeConfigurationKey(project, source, lean), key);
  // No reuse when the configuration may depend on other files, or cannot be read.
  writeFileSync(join(project, 'lake-manifest.json'), '{ broken');
  assert.equal(lakeConfigurationKey(project, source, lean), undefined);
  rmSync(join(project, 'lake-manifest.json'));
  put(join(project, 'lakefile.lean'), 'import Lake\n  import Mathlib.Tactic\nopen Lake');
  assert.equal(lakeConfigurationKey(project, source, lean), undefined);
  writeFileSync(join(project, 'lakefile.lean'), 'import Lake\nopen Lake DSL\npackage app');
  assert.notEqual(lakeConfigurationKey(project, source, lean), undefined);
  assert.equal(lakeConfigurationKey(project, join(project, 'Missing.lean'), lean), undefined);
});

test('the workspace imports key follows the import header of every Lean source in its packages', t => {
  const project = scratch(t);
  const main = put(join(project, 'Main.lean'), 'import A\ndef x := 1');
  put(join(project, 'lake-manifest.json'), JSON.stringify({ packages: [{ type: 'path', dir: '../dep' }, { name: 'git' }] }));
  const dep = put(join(project, '../dep/Dep.lean'), 'import Init');
  const key = workspaceImportsKey(project, 'config');
  assert.match(key, /^[0-9a-f]{64}$/);
  assert.notEqual(workspaceImportsKey(project, 'other config'), key);
  writeFileSync(main, 'import A\ndef x := 2');
  assert.equal(workspaceImportsKey(project, 'config'), key, 'bodies do not count');
  for (const [file, text] of [[main, 'import A\nimport B\ndef x := 1'], [dep, 'import Std'], [join(project, 'Sub/New.lean'), ''],
    [join(project, '.lake/packages/git/Git.lean'), 'import G']]) {
    const existed = existsSync(file), before = existed && readFileSync(file, 'utf8');
    put(file, text);
    assert.notEqual(workspaceImportsKey(project, 'config'), key, file);
    if (existed) writeFileSync(file, before); else rmSync(file);
  }
  assert.equal(workspaceImportsKey(project, 'config'), key);
  for (const file of [join(project, '.hidden/H.lean'), join(project, 'node_modules/n/N.lean'), join(project, 'notes.txt')]) put(file, 'import X');
  assert.equal(workspaceImportsKey(project, 'config'), key, 'hidden directories, node_modules and other files do not count');
  writeFileSync(join(project, 'lake-manifest.json'), 'not json');
  assert.notEqual(workspaceImportsKey(project, 'config'), key, 'without a manifest only the project counts');
});

test('import sources outside the source directory are returned unchanged; an unknown root names the search path', t => {
  const root = scratch(t), project = join(root, 'p'), standard = join(root, 'std');
  mkdirSync(project); mkdirSync(standard);
  assert.equal(exactCaseImportSource(join(root, 'elsewhere/X.lean'), project, standard), join(root, 'elsewhere/X.lean'));
  put(join(project, 'Local/Deep/M.lean'));
  assert.equal(exactCaseImportSource(join(project, 'Local/Deep/M.lean'), project, standard), join(project, 'Local/Deep/M.lean'));
  put(join(standard, 'Std/X.lean'));
  assert.equal(exactCaseImportSource(join(project, 'Std/X.lean'), project, standard), join(standard, 'Std/X.lean'));
  put(join(project, 'File'));
  assert.throws(() => exactCaseImportSource(join(project, 'File/X.lean'), project, standard), {
    message: `unknown module prefix 'File'\n\nNo directory 'File' or file 'File.lean' in the search path entries:\n${project}\n${join(standard, 'lake')}\n${standard}` });
});

test('whether a standalone source imports a module of the given roots, through local imports', posix, t => {
  const directory = scratch(t), prefix = join(directory, 'lean');
  const { lean, world, runs } = leanStandIn(prefix);
  const source = put(join(directory, 'app/Main.lean')), helper = put(join(directory, 'app/Helper.lean')), other = put(join(directory, 'app/Other.lean'));
  const standard = join(prefix, 'src/lean');
  world({ deps: { [source]: ['Helper.lean', join(standard, 'Init.lean')], [helper]: [join(standard, 'Lean.lean'), 'Main.lean', 'Missing.lean'],
    [other]: [join(standard, 'lake/Lake.lean'), join(directory, 'outside.lean')] } });
  assert.equal(standaloneImportsModules(source, lean, ['Lean']), true);
  assert.equal(standaloneImportsModules(source, lean, ['Lake', 'Std']), false);
  assert.equal(runs().filter(run => run.args[0] === '--src-deps').length, 4, 'each file once per query, though Main and Helper import each other');
  const first = runs()[0];
  assert.deepEqual(first.args, ['--src-deps', source]);
  assert.equal(first.cwd, join(directory, 'app'));
  assert.equal(first.env.LEAN_SRC_PATH, join(directory, 'app'));
  assert.equal(first.env.LEAN_NUM_THREADS, '1');
  assert.equal(standaloneImportsModules(other, lean, ['Lake']), true, 'Lake under src/lean/lake');
  // An unknown root in the extended set, or any other failure, prefers the larger prefix.
  world({ unknown: { [source]: 'Lean' } });
  assert.equal(standaloneImportsModules(source, lean, ['Lean']), true);
  world({ unknown: { [source]: 'Mathlib' } });
  assert.equal(standaloneImportsModules(source, lean, ['Lean']), true);
  world({ deps: { [source]: ['Helper.lean'] }, fail: { [helper]: 'some other error' } });
  assert.equal(standaloneImportsModules(source, lean, ['Lean']), true);
  assert.throws(() => standaloneImportsModules(source, { ...lean, lean: join(directory, 'no-lean') }, ['Lean']), { code: 'ENOENT' });
});

test('the packages with C code, from the adapter, recorded per Lake configuration', posix, t => {
  const directory = scratch(t), project = join(directory, 'project');
  put(join(project, 'lakefile.toml'), 'name = "p"');
  const { lean, world, runs, clear } = leanStandIn(join(directory, 'lean'));
  const native = [{ package: 'sqlite', reasons: ['extern_lib'] }];
  world({ native: { native } });
  assert.deepEqual(lakeNativePackages(project, { ...lean, platform: 'linux-x64' }), native);
  const [run] = runs();
  assert.deepEqual(run.args.slice(0, 4), ['-j1', '-s8192', '--plugin=' + join(lean.prefix, 'lib/lean', 'libLake_shared.so'), '--run']);
  assert.match(run.args[4], /lake-module\.lean$/);
  assert.equal(run.args[5], '--native');
  assert.equal(run.cwd, project);
  assert.deepEqual(readdirSync(join(project, '.lake/lasm')).filter(name => name.startsWith('lake-native-')).length, 1);
  clear();
  assert.deepEqual(lakeNativePackages(project, { ...lean, platform: 'linux-x64' }), native);
  assert.equal(runs().length, 0, 'reused');
  // The plugin is Lake's shared library for the platform.
  for (const [platform, plugin] of [['darwin-arm64', join(lean.prefix, 'lib/lean', 'libLake_shared.dylib')], ['win32-x64', join('/exec', 'bin', 'libLake_shared.dll')]]) {
    writeFileSync(join(project, 'lakefile.toml'), 'name = "' + platform + '"');
    lakeNativePackages(project, { ...lean, platform, executionPrefix: '/exec' });
    assert.equal(runs().at(-1).args[2], '--plugin=' + plugin);
  }
  for (const answer of [{}, { native: 'x' }, { native: [{ package: 1 }] }, { native: [null] }]) {
    writeFileSync(join(project, 'lakefile.toml'), 'name = "' + JSON.stringify(answer).replaceAll('"', '') + '"');
    world({ native: answer });
    assert.throws(() => lakeNativePackages(project, lean), { message: 'Unexpected Lake native-package inventory' });
  }
  world({ adapterFails: 'one\ntwo\nthree\nfour\n' });
  assert.throws(() => lakeNativePackages(project, lean), { message: 'Lake could not load the workspace: two three four' });
  assert.throws(() => lakeNativePackages(project, { ...lean, lean: join(directory, 'no-lean') }), { code: 'ENOENT' });
  // A configuration that cannot be keyed is asked every time and not recorded.
  writeFileSync(join(project, 'lakefile.lean'), 'import Other');
  world({ native: { native: [] } });
  const before = readdirSync(join(project, '.lake/lasm')).length;
  assert.deepEqual(lakeNativePackages(project, lean), []);
  assert.equal(readdirSync(join(project, '.lake/lasm')).length, before);
});

test('standalone sources: local imports compiled in order, with receipts that skip unchanged modules', posix, async t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean, world, runs, clear } = leanStandIn(join(directory, 'lean'));
  const main = put(join(app, 'Main.lean'), 'import Sub.Helper\ndef main : IO Unit := pure ()'), helper = put(join(app, 'Sub/Helper.lean'), 'def h := 1');
  world({ deps: { [main]: ['Sub/Helper.lean', join(lean.prefix, 'src/lean/Init.lean')] }, c: { [helper]: 'helper C' } });
  const logged = [];
  const result = applicationSources(join(app, 'Main.lean'), lean, work, { log: line => logged.push(line) });
  const output = join(work, 'lean');
  assert.equal(result.project, null);
  assert.deepEqual(result.sources, [join(output, 'Sub/Helper.c'), join(output, 'Main.c')]);
  assert.deepEqual(result.inputs, [{ module: 'Sub.Helper', source: helper }, { module: 'Main', source: main }]);
  assert.deepEqual(result.metadataRoots, [output]);
  assert.deepEqual(result.oleans(), [join(output, 'Sub/Helper.olean'), join(output, 'Main.olean')]);
  assert.deepEqual(logged, ['Generating Lean C: Sub/Helper.lean', 'Generating Lean C: Main.lean']);
  assert.equal(result.env.LEAN_SRC_PATH, app);
  assert.equal(result.env.LEAN_PATH, output);
  assert.equal(readFileSync(join(output, 'Sub/Helper.c'), 'utf8'), 'helper C');
  const compile = runs().find(run => run.args[0] === '-j1' && run.args.at(-1) === helper);
  assert.deepEqual(compile.args, ['-j1', '-s8192', '-R', app, '-Dcompiler.postponeCompile=false', '-o', join(output, 'Sub/Helper.olean'), '-c', join(output, 'Sub/Helper.c'), helper]);
  assert.equal(compile.cwd, app);
  assert.equal(compile.env.LEAN_PATH, output);
  const receipt = JSON.parse(readFileSync(join(output, 'Sub/Helper.lasm.json'), 'utf8'));
  assert.deepEqual(Object.keys(receipt.files), ['.c', '.olean', '.ir']);
  assert.match(receipt.signature, /^[0-9a-f]{64}$/);
  // Unchanged: no compile, the same result.
  clear(); logged.length = 0;
  const again = applicationSources(main, lean, work, { log: line => logged.push(line) });
  assert.deepEqual(again.sources, result.sources);
  assert.deepEqual(logged, []);
  assert.equal(runs().filter(run => run.args[0] !== '--src-deps').length, 0);
  // A changed dependency recompiles it and its importer; a damaged output recompiles its module.
  writeFileSync(helper, 'def h := 2');
  clear(); logged.length = 0;
  applicationSources(main, lean, work, { log: line => logged.push(line) });
  assert.deepEqual(logged, ['Generating Lean C: Sub/Helper.lean', 'Generating Lean C: Main.lean']);
  for (const [file, change] of [[join(output, 'Main.c'), 'damaged'], [join(output, 'Main.ir'), null], [join(output, 'Main.lasm.json'), '{ not json'],
    [join(output, 'Main.lasm.json'), JSON.stringify({ signature: 'other', files: {} })]]) {
    if (change === null) rmSync(file); else writeFileSync(file, change);
    logged.length = 0;
    applicationSources(main, lean, work, { log: line => logged.push(line) });
    assert.deepEqual(logged, ['Generating Lean C: Main.lean'], file);
  }
  const receiptOf = () => JSON.parse(readFileSync(join(output, 'Main.lasm.json'), 'utf8'));
  writeFileSync(join(output, 'Main.lasm.json'), JSON.stringify({ ...receiptOf(), files: { '.olean': receiptOf().files['.olean'] } }));
  logged.length = 0;
  applicationSources(main, lean, work, { log: line => logged.push(line) });
  assert.deepEqual(logged, ['Generating Lean C: Main.lean'], 'a receipt without the C file');
  writeFileSync(join(output, 'Main.lasm.json'), JSON.stringify({ ...receiptOf(), files: { '.c': receiptOf().files['.c'] } }));
  logged.length = 0;
  applicationSources(main, lean, work, { log: line => logged.push(line) });
  assert.deepEqual(logged, ['Generating Lean C: Main.lean'], 'a receipt without the module data');
  // Another Lean commit recompiles everything.
  logged.length = 0;
  applicationSources(main, { ...lean, commit: 'other' }, work, { log: line => logged.push(line) });
  assert.equal(logged.length, 2);
  // The default log is console.error.
  const { error } = console; const printed = [];
  console.error = line => printed.push(line);
  try { writeFileSync(helper, 'def h := 3'); applicationSources(main, lean, work); } finally { console.error = error; }
  assert.deepEqual(printed, ['Generating Lean C: Sub/Helper.lean', 'Generating Lean C: Main.lean']);
});

test('standalone sources: cycles, imports outside the directory and failing compiles are reported', posix, t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean, world } = leanStandIn(join(directory, 'lean'));
  const main = put(join(app, 'Main.lean')), a = put(join(app, 'A.lean')), b = put(join(app, 'B.lean'));
  world({ deps: { [main]: ['A.lean'], [a]: ['B.lean'], [b]: ['A.lean'] } });
  assert.throws(() => applicationSources(main, lean, work, { log() {} }), { message: `Cyclic Lean module imports: ${a}` });
  const outside = put(join(directory, 'Outside.lean'));
  world({ deps: { [main]: [outside] } });
  assert.throws(() => applicationSources(main, lean, work, { log() {} }), {
    message: `Standalone import ${outside} is outside the source directory. Declare external dependencies in an ordinary Lake project.` });
  world({ compileFails: { [main]: 'error: Main.lean:1:0: unknown identifier' } });
  assert.throws(() => applicationSources(main, lean, work, { log() {} }), error =>
    error.message.startsWith(`Command failed: ${lean.lean} -j1 -s8192 -R ${app}`) && error.message.endsWith('\nerror: Main.lean:1:0: unknown identifier')
    && error.status === 1 && error.stderr === 'error: Main.lean:1:0: unknown identifier' && error.stdout === '');
  assert.throws(() => applicationSources(main, { ...lean, lean: join(directory, 'no-lean') }, work, { log() {} }), error => error.code === 'ENOENT' && 'stdout' in error);
});

test('the tools\' warnings are passed on, without Lake\'s first-build notice; LASM_DEV_TRACE times each step', posix, t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean, world } = leanStandIn(join(directory, 'lean'));
  const main = put(join(app, 'Main.lean'));
  const written = [];
  const write = process.stderr.write;
  process.stderr.write = text => { written.push(String(text)); return true; };
  try {
    world({ notice: 'info: app: no previous manifest, creating one from scratch\nwarning: kept\n' });
    applicationSources(main, lean, work, { log() {} });
    process.env.LASM_DEV_TRACE = '1';
    world({});
    rmSync(work, { recursive: true });
    applicationSources(main, lean, work, { log() {} });
  } finally { process.stderr.write = write; delete process.env.LASM_DEV_TRACE; }
  assert.deepEqual(written.filter(text => !text.startsWith('[lasm dev]')), ['warning: kept\n', 'warning: kept\n']);
  const traces = written.filter(text => text.startsWith('[lasm dev]'));
  assert.equal(traces.length, 2);
  assert.match(traces[0], /^\[lasm dev\] trace \d+\.\d\d s: lean \S+Main\.lean\n$/);
  assert.equal(traces[1].replace(/\d+\.\d\d s/, 'T'), `[lasm dev] trace T: lean ${[app, join(work, 'lean', 'Main.olean'), join(work, 'lean', 'Main.c'), main].join(' ').slice(0, 100)}\n`);
});

function lakeProject(t, adapter = {}) {
  const directory = scratch(t), project = join(directory, 'project'), work = join(directory, 'work');
  put(join(project, 'lakefile.toml'), 'name = "app"');
  const source = put(join(project, 'Main.lean'), 'import Dep\ndef main : IO Unit := pure ()');
  mkdirSync(work);
  const standIn = leanStandIn(join(directory, 'lean'));
  standIn.world({ adapter: { imports: ['Dep'], metadataRoots: ['.lake/build/lib/lean'], native: [], ...adapter }, trans: { '+Dep': ['Base'] } });
  return { directory, project, work, source, ...standIn };
}

test('Lake projects: the adapter\'s answer, Lake\'s transitive imports and its C, sources and module data, and the script', posix, t => {
  const { project, work, source, lean, runs, clear } = lakeProject(t);
  const logged = [];
  let released = 0;
  const result = applicationSources(source, lean, work, { log: line => logged.push(line), afterImports: () => { released++; } });
  assert.equal(result.project, project);
  assert.deepEqual(result.sources, [join(project, 'build/Base.c'), join(project, 'build/Dep.c'), join(work, 'script.c')]);
  assert.deepEqual(result.inputs, [{ module: '+Base', source: join(project, 'build/Base.lean') }, { module: '+Dep', source: join(project, 'build/Dep.lean') },
    { module: 'Main.lean', source, olean: join(work, 'script.olean') }]);
  assert.deepEqual(result.metadataRoots, [join(project, '.lake/build/lib/lean')]);
  assert.deepEqual(result.native, []);
  assert.equal(result.nativeLink, undefined);
  assert.equal(released, 1);
  assert.deepEqual(logged, ['Generating Lean C: +Base', 'Generating Lean C: +Dep']);
  const commands = runs().map(run => [run.tool, ...run.args]);
  assert.match(commands[0].join(' '), /^lean -j1 -s8192 --plugin=\S+libLake_shared\.(so|dylib) --run \S+lake-module\.lean \S+Main\.lean$/);
  assert.deepEqual(commands.slice(1, 3), [['lake', '--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', '+Dep:transImports'],
    ['lake', '--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', '+Base:c', '+Base:lean', '+Dep:c', '+Dep:lean']]);
  assert.deepEqual(commands[3], ['lake', '--no-cache', '--keep-toolchain', 'lean', source, '--', '-j1', '-s8192', '-Dcompiler.postponeCompile=false',
    '-o', join(work, 'script.olean'), '-c', join(work, 'script.c')]);
  assert.ok(runs().every(run => run.cwd === project));
  assert.deepEqual(result.oleans(), [join(project, 'build/Base.olean'), join(project, 'build/Dep.olean'), join(work, 'script.olean')]);
  assert.deepEqual(runs().at(-1).args.slice(-2), ['+Base:olean', '+Dep:olean']);
  // Recorded answers: no adapter run and no transitive query on a second build; the module-data list is reused while its files exist.
  clear();
  const again = applicationSources(source, lean, work, { log() {} });
  assert.deepEqual(again.sources, result.sources);
  assert.deepEqual(runs().map(run => run.args.includes('query') ? run.args[5] : run.args[2]), ['+Base:c', 'lean']);
  for (const file of ['Base', 'Dep']) put(join(project, 'build', file + '.olean'));
  assert.deepEqual(again.oleans(), result.oleans());
  assert.equal(runs().filter(run => run.args.some(arg => arg.endsWith(':olean'))).length, 0);
  rmSync(join(project, 'build/Dep.olean'));
  again.oleans();
  assert.equal(runs().filter(run => run.args.some(arg => arg.endsWith(':olean'))).length, 1, 'a recorded file is gone: asked again');
  assert.deepEqual(readdirSync(work).filter(name => name.startsWith('lake-')).map(name => name.replace(/-[0-9a-f]{64}\.json$/, '')).sort(), ['lake-imports', 'lake-module', 'lake-oleans']);
});

test('Lake projects: a configured module, native code, the C tier and batches of 64', posix, t => {
  {
    const { project, work, source, lean, world, runs } = lakeProject(t);
    world({ adapter: { module: '/+App.Main', metadataRoots: [], native: [{ package: 'c', reasons: ['extern_lib'] }] }, link: { objs: ['x.o'] }, trans: { '/+App.Main': [] } });
    assert.deepEqual(applicationSources(source, { ...lean, distribution: 'tiers' }, work, { log() {} }), { needsCCompiler: true, native: [{ package: 'c', reasons: ['extern_lib'] }] });
    const logged = [];
    const result = applicationSources(source, { ...lean, distribution: 'tiers', cCompiler: {} }, work, { log: line => logged.push(line) });
    assert.deepEqual(result.inputs.map(input => input.module), ['/+App.Main']);
    assert.equal(result.inputs.some(input => input.olean), false, 'no script for a configured module');
    assert.deepEqual(result.nativeLink, { objs: ['x.o'] });
    assert.deepEqual(result.native, [{ package: 'c', reasons: ['extern_lib'] }]);
    assert.deepEqual(logged, ['Generating Lean C: /+App.Main', 'Building native link inputs']);
    assert.equal(runs().filter(run => run.args.includes('--link')).at(-1).args.at(-1), source);
    assert.equal(project, result.project);
    assert.deepEqual(result.oleans(), [join(project, 'build//+App/Main.olean')]);
  }
  {
    const { work, source, lean, world, runs } = lakeProject(t);
    const many = Array.from({ length: 70 }, (_, i) => `M${i}`);
    world({ adapter: { imports: ['Dep'], metadataRoots: [], native: [] }, trans: { '+Dep': many } });
    const result = applicationSources(source, lean, work, { log() {} });
    assert.equal(result.sources.length, 72);
    const queries = runs().filter(run => run.args.includes('query') && run.args.some(arg => arg.endsWith(':c')));
    assert.deepEqual(queries.map(run => run.args.filter(arg => arg.endsWith(':c')).length), [64, 7]);
    assert.equal(result.oleans().length, 72);
    assert.deepEqual(runs().filter(run => run.args.some(arg => arg.endsWith(':olean'))).map(run => run.args.length - 5), [64, 7]);
  }
});

test('Lake projects: every answer is checked', posix, t => {
  const { work, source, lean, world } = lakeProject(t);
  const adapter = { imports: ['Dep'], metadataRoots: [], native: [] };
  const fails = (answer, message) => {
    rmSync(work, { recursive: true, force: true }); mkdirSync(work);
    world({ trans: { '+Dep': ['Base'] }, ...answer });
    assert.throws(() => applicationSources(source, lean, work, { log() {} }), { message }, JSON.stringify(answer));
  };
  for (const bad of [null, {}, { imports: 'Dep' }, { imports: [1] }, { module: 'App' }])
    fails({ adapter: bad === null ? 'null' : { metadataRoots: [], ...bad } }, 'Unexpected Lake module identity');
  for (const roots of [undefined, 'x', [2]]) fails({ adapter: { ...adapter, metadataRoots: roots } }, 'Unexpected Lake module-data paths');
  for (const trans of [{ '+Dep': 'Base' }, { '+Dep': [3] }]) fails({ adapter, trans }, 'Unexpected Lake transitive module inventory');
  fails({ adapter, short: true }, 'Unexpected Lake query output');
  fails({ adapter, missingC: ['+Base'] }, 'Lake returned no C file for +Base');
  rmSync(work, { recursive: true, force: true }); mkdirSync(work);
  world({ adapter, queryFails: 'lake: no such module' });
  assert.throws(() => applicationSources(source, lean, work, { log() {} }), error => error.message.endsWith('\nlake: no such module') && error.status === 1);
});

test('a program needs main: its own module\'s C must define it', t => {
  const directory = scratch(t);
  const source = put(join(directory, 'Main.lean')), c = put(join(directory, 'Main.c'), 'static int x;\nint main(int argc, char ** argv) {}');
  const inputs = [{ module: 'Other', source: join(directory, 'Other.lean') }, { module: 'Main', source }];
  assertDefinesMain(inputs, [join(directory, 'Other.c'), c], source);
  assertDefinesMain(inputs, [join(directory, 'Other.c'), c], join(directory, '.', 'Main.lean'));
  assertDefinesMain([inputs[0]], [join(directory, 'Other.c')], source);
  assertDefinesMain(inputs, [join(directory, 'Other.c'), join(directory, 'absent.c')], source);
  writeFileSync(c, '// int main(\nvoid helper(void) { int main(void); }');
  assert.throws(() => assertDefinesMain(inputs, [join(directory, 'Other.c'), c], source), {
    message: 'Main.lean has no `main` function, so there is no program to build. Define one, for example: def main : IO Unit := IO.println "hello"' });
  assert.throws(() => assertDefinesMain([{ module: 'Main', source: join(directory, 'missing', '..', 'Main.lean') }], [c], source), /has no `main` function/);
});

test('the import header stops at a command even when it mentions a comment or an import keyword', () => {
  assert.equal(leanHeader('import A\ndef x := 1 -- note\nimport B'), 'import A');
  assert.equal(leanHeader('import A\ndef x := module\nimport B'), 'import A');
  assert.equal(leanHeader('public  meta\timport A\ndef y := 1'), 'public  meta\timport A');
  assert.equal(leanHeader('import A\ndef x -/\nimport B'), 'import A');
  assert.equal(leanHeader('import A\n-/ def y\nimport B'), 'import A');
  assert.equal(leanHeader('import A\n  -/  \nimport B\ndef z'), 'import A\n  -/  \nimport B');
});

test('a lakefile.toml may mention imports; only a lakefile.lean importing more than Lake prevents reuse', t => {
  const project = scratch(t);
  put(join(project, 'lakefile.toml'), 'name = "app"\n# import Mathlib\nimport = "x"');
  assert.match(lakeConfigurationKey(project, undefined, {}), /^[0-9a-f]{64}$/);
  put(join(project, 'lakefile.lean'), 'import Lake\nrequire x from git "u" -- import Mathlib\nimport  Lake');
  assert.match(lakeConfigurationKey(project, undefined, {}), /^[0-9a-f]{64}$/);
});

test('standalone import queries follow only local imports', posix, t => {
  const directory = scratch(t), prefix = join(directory, 'lean');
  const { lean, world, runs } = leanStandIn(prefix);
  const source = put(join(directory, 'app/Main.lean')), outside = put(join(directory, 'Outside.lean'));
  world({ deps: { [source]: [outside], [outside]: [join(prefix, 'src/lean/Lean.lean')] } });
  assert.equal(standaloneImportsModules(source, lean, ['Lean']), false);
  assert.equal(runs().length, 1, 'the outside file is not read');
});

test('Lake records replace their predecessors and leave other files alone', posix, t => {
  const { project, work, source, lean } = lakeProject(t);
  put(join(work, 'notes.json'), 'kept');
  applicationSources(source, lean, work, { log() {} });
  writeFileSync(join(project, 'lakefile.toml'), 'name = "changed"');
  applicationSources(source, lean, work, { log() {} });
  const names = readdirSync(work);
  for (const prefix of ['lake-module-', 'lake-imports-']) assert.equal(names.filter(name => name.startsWith(prefix)).length, 1, prefix);
  assert.ok(names.includes('notes.json'));
});

test('Lake projects: C code without the tier, the tier without C code, imports and answers checked', posix, t => {
  {
    const { work, source, lean, world } = lakeProject(t);
    world({ adapter: { imports: [], metadataRoots: [], native: [{ package: 'c' }] }, link: { objs: [] } });
    const result = applicationSources(source, lean, work, { log() {} });
    assert.deepEqual(result.nativeLink, { objs: [] }, 'a full Lean has the C compiler');
    world({ adapter: { imports: [], metadataRoots: [], native: [] } });
    rmSync(work, { recursive: true }); mkdirSync(work);
    const tiers = applicationSources(source, { ...lean, distribution: 'tiers' }, work, { log() {} });
    assert.equal(tiers.needsCCompiler, undefined);
    assert.equal(tiers.nativeLink, undefined);
    world({ adapter: { imports: [], metadataRoots: [] } });
    rmSync(work, { recursive: true }); mkdirSync(work);
    assert.deepEqual(applicationSources(source, lean, work, { log() {} }).native, [], 'no native field');
  }
  {
    const { work, source, lean, world, runs, clear } = lakeProject(t);
    world({ adapter: { imports: ['Dep', 4], metadataRoots: [], native: [] } });
    assert.throws(() => applicationSources(source, lean, work, { log() {} }), { message: 'Unexpected Lake module identity' });
    rmSync(work, { recursive: true }); mkdirSync(work);
    world({ adapter: { imports: ['Dep'], metadataRoots: [], native: [] }, trans: { '+Dep': ['Base'] }, missingLean: ['+Base'] });
    assert.throws(() => applicationSources(source, lean, work, { log() {} }), { message: 'Lake returned no C file for +Base' });
    rmSync(work, { recursive: true }); mkdirSync(work);
    world({ adapter: { imports: ['Dep'], metadataRoots: [], native: [] }, trans: { '+Dep': Array.from({ length: 63 }, (_, i) => `M${i}`) }, blank: true, missingOlean: ['+M0'] });
    clear();
    const result = applicationSources(source, lean, work, { log() {} });
    assert.equal(result.sources.length, 65, 'blank lines in Lake\'s answers are ignored');
    assert.equal(runs().filter(run => run.args.includes('query') && run.args.some(arg => arg.endsWith(':c'))).length, 1, 'exactly 64 targets: one batch');
    assert.equal(runs().filter(run => run.args.includes('query')).length, 2);
    const oleans = result.oleans();
    assert.equal(oleans.length, 64, 'a module without module data is left out');
    assert.equal(runs().filter(run => run.args.some(arg => arg.endsWith(':olean'))).length, 1);
    world({ adapter: 'null' });
    rmSync(work, { recursive: true }); mkdirSync(work);
    assert.throws(() => applicationSources(source, lean, work, { log() {} }), { message: 'Unexpected Lake module identity' });
  }
});

test('the native-package inventory: a null answer and an empty failure are reported', posix, t => {
  const directory = scratch(t), project = join(directory, 'project');
  put(join(project, 'lakefile.toml'), 'name = "p"');
  const { lean, world } = leanStandIn(join(directory, 'lean'));
  world({ native: 'null' });
  assert.throws(() => lakeNativePackages(project, lean), { message: 'Unexpected Lake native-package inventory' });
  world({ adapterFails: '' });
  assert.throws(() => lakeNativePackages(project, lean), { message: 'Lake could not load the workspace: ' });
  world({ native: { native: [] } });
  put(join(project, '.lake/lasm/other.json'), 'kept');
  lakeNativePackages(project, lean);
  writeFileSync(join(project, 'lakefile.toml'), 'name = "q"');
  lakeNativePackages(project, lean);
  assert.deepEqual(readdirSync(join(project, '.lake/lasm')).filter(name => name.startsWith('lake-native-')).length, 1);
  assert.ok(existsSync(join(project, '.lake/lasm/other.json')));
});

test('standalone sources: shared imports compiled once, every output recorded, the Lean identity in the signature', posix, t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean, world } = leanStandIn(join(directory, 'lean'));
  const [main, a, b, c] = ['Main', 'A', 'B', 'C'].map(name => put(join(app, name + '.lean')));
  world({ deps: { [main]: ['A.lean', 'B.lean', join(lean.prefix, 'src/lean/Init.lean')], [a]: ['C.lean'], [b]: ['C.lean'] }, extraOutputs: true });
  const logged = [];
  const result = applicationSources(main, lean, work, { log: line => logged.push(line) });
  assert.deepEqual(result.inputs.map(input => input.module), ['C', 'A', 'B', 'Main']);
  assert.deepEqual(logged, ['Generating Lean C: C.lean', 'Generating Lean C: A.lean', 'Generating Lean C: B.lean', 'Generating Lean C: Main.lean']);
  const receiptFile = join(work, 'lean', 'C.lasm.json');
  assert.ok(readFileSync(receiptFile, 'utf8').endsWith('}\n'));
  assert.deepEqual(Object.keys(JSON.parse(readFileSync(receiptFile, 'utf8')).files), ['.c', '.olean', '.olean.private', '.olean.server', '.ir']);
  // Another Lean identity with the same commit: modules importing the standard library are compiled again.
  logged.length = 0;
  applicationSources(main, { ...lean, identity: 'another prefix' }, work, { log: line => logged.push(line) });
  assert.deepEqual(logged, ['Generating Lean C: Main.lean']);
  // A receipt that is not a file is an error; one without files recompiles.
  const mainReceipt = join(work, 'lean', 'Main.lasm.json');
  const { signature } = JSON.parse(readFileSync(mainReceipt, 'utf8'));
  writeFileSync(mainReceipt, JSON.stringify({ signature }));
  logged.length = 0;
  applicationSources(main, { ...lean, identity: 'another prefix' }, work, { log: line => logged.push(line) });
  assert.deepEqual(logged, ['Generating Lean C: Main.lean']);
  rmSync(mainReceipt); mkdirSync(mainReceipt);
  assert.throws(() => applicationSources(main, lean, work, { log() {} }), { code: 'EISDIR' });
  assert.ok(c);
});

test('LASM_DEV_TRACE reports seconds', posix, t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean } = leanStandIn(join(directory, 'lean'));
  const main = put(join(app, 'Main.lean'));
  const written = [];
  const write = process.stderr.write;
  process.stderr.write = text => { written.push(String(text)); return true; };
  process.env.LASM_DEV_TRACE = '1';
  try { applicationSources(main, lean, work, { log() {} }); } finally { process.stderr.write = write; delete process.env.LASM_DEV_TRACE; }
  for (const line of written) {
    const seconds = Number(/trace (\d+\.\d\d) s/.exec(line)[1]);
    assert.ok(seconds >= 0 && seconds < 60, line);
  }
  assert.equal(written.length, 2);
});

test('the first-build notice is removed only as a whole line', posix, t => {
  const directory = scratch(t), app = join(directory, 'app'), work = join(directory, 'work');
  const { lean, world } = leanStandIn(join(directory, 'lean'));
  const main = put(join(app, 'Main.lean'));
  const written = [];
  const write = process.stderr.write;
  process.stderr.write = text => { written.push(String(text)); return true; };
  world({ notice: 'note: info: x: no previous manifest, creating one from scratch\n' });
  try { applicationSources(main, lean, work, { log() {} }); } finally { process.stderr.write = write; }
  assert.deepEqual(written, ['note: info: x: no previous manifest, creating one from scratch\n', 'note: info: x: no previous manifest, creating one from scratch\n']);
});

test('main: a source that does not exist is compared by its path', t => {
  const directory = scratch(t);
  const c = put(join(directory, 'Other.c'), 'no main here');
  assertDefinesMain([{ module: 'Other', source: join(directory, 'Other.lean') }], [c], join(directory, 'Main.lean'));
});
