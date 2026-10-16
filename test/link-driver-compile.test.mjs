import assert from 'node:assert/strict';
import test from 'node:test';
import { bundledRecipe, parseRecipe, translateEmccFlags, clangArguments, clangCommand, checkRecordedFlags,
  emscriptenCache, compileObject } from '../src/link-driver/compile.mjs';
import { selectedCompileDriver } from '../src/application-link.mjs';
import { selectCacheFile, libraryDirectory, archiveRoot } from '../scripts/link-driver/build-sysroot.mjs';

// Lasm's compile flags (src/application-link.mjs) for a runtime at /r.
const flags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN',
  '-sMEMORY64=1', '-ffunction-sections', '-fdata-sections', '-I', '/r/include'];

// The clang driver command emcc ran for examples/hello (EMCC_DEBUG + -### recording,
// .work/link-driver/ref-b-debug), with only the absolute roots shortened.
const recordedHello = ['-target', 'wasm64-unknown-emscripten', '-fvisibility=default', '-mllvm',
  '-combiner-global-alias-analysis=false', '-mllvm', '-wasm-enable-sjlj', '-mllvm', '-wasm-use-legacy-eh', '-mllvm',
  '-disable-lsr', '--sysroot=/s/cache/sysroot', '-D__EMSCRIPTEN_SHARED_MEMORY__=1', '-Xclang',
  '-iwithsysroot/include/fakesdl', '-Xclang', '-iwithsysroot/include/compat', '-O2', '-DNDEBUG', '-pthread',
  '-fwasm-exceptions', '-fPIC', '-DLEAN_EMSCRIPTEN', '-ffunction-sections', '-fdata-sections', '-I/r/include', '-c',
  '/w/lean/Main.c', '-o/b/module-0.o'];

test('the bundled recipe parses and reproduces the recorded emcc clang command', () => {
  const recipe = bundledRecipe();
  assert.equal(recipe.emscripten, '6.0.9');
  assert.ok(Object.isFrozen(recipe.compile.driver));
  assert.deepEqual(clangArguments(recipe, { flags, source: '/w/lean/Main.c', object: '/b/module-0.o',
    sysroot: '/s/cache/sysroot', platform: 'linux' }), recordedHello);
  assert.equal(recipe.sysroot.libraries.length, 18);
  assert.ok(recipe.sysroot.libraries.includes('libc-mt.a') && recipe.sysroot.libraries.includes('libc-mt-debug.a'));
});

test('emcc flag translation joins value options and drops consumed settings', () => {
  const recipe = bundledRecipe();
  assert.deepEqual(translateEmccFlags(recipe, ['-sMEMORY64=1', '-I', 'a b', '-o', 'x.o', '-c', 'y.c']),
    ['-Ia b', '-ox.o', '-c', 'y.c']);
  assert.throws(() => translateEmccFlags(recipe, ['-sMEMORY64=2']), /Unrecorded Emscripten setting/);
  assert.throws(() => translateEmccFlags(recipe, ['-sASSERTIONS']), /Unrecorded Emscripten setting/);
  assert.throws(() => translateEmccFlags(recipe, ['-I']), /requires an argument/);
});

test('only the recorded compiler flags are accepted', () => {
  const recipe = bundledRecipe();
  checkRecordedFlags(recipe, flags);
  checkRecordedFlags(recipe, flags.map(flag => flag === '/r/include' ? 'C:\\Lasm\\runtime\\include' : flag));
  for (const changed of [flags.map(flag => flag === '-O2' ? '-O3' : flag), flags.slice(1), [...flags, '-g']])
    assert.throws(() => checkRecordedFlags(recipe, changed), /no recording for these compiler flags/);
});

test('Windows commands use emcc path joining and executable names by construction', () => {
  const recipe = bundledRecipe();
  const args = clangArguments(recipe, { flags: flags.map(flag => flag === '/r/include' ? 'C:\\r\\include' : flag),
    source: 'C:\\w\\Main.c', object: 'C:\\b\\module-0.o', sysroot: 'C:\\s\\cache\\sysroot', platform: 'win32' });
  assert.ok(args.includes('-iwithsysroot/include\\fakesdl') && args.includes('-iwithsysroot/include\\compat'));
  assert.ok(args.includes('--sysroot=C:\\s\\cache\\sysroot') && args.includes('-IC:\\r\\include'));
  assert.deepEqual(args.slice(-3), ['-c', 'C:\\w\\Main.c', '-oC:\\b\\module-0.o']);
  const command = clangCommand(recipe, { sdkPrefix: 'C:\\sdk', env: { PATH: 'x', SOURCE_DATE_EPOCH: '1' }, platform: 'win32' });
  assert.equal(command.program, 'C:\\sdk\\bin\\clang.exe');
  assert.equal(command.env.SOURCE_DATE_EPOCH, '315532800');
  assert.equal(clangCommand(recipe, { sdkPrefix: '/sdk', env: {}, platform: 'linux' }).program, '/sdk/bin/clang');
});

test('compileObject runs clang with the managed SDK sysroot or a frozen prebuilt cache', () => {
  const calls = [];
  const execute = (program, args, settings) => { calls.push({ program, args, settings }); return Buffer.alloc(0); };
  const sdk = { prefix: '/sdk', state: '/state', env: { PATH: '/p', SOURCE_DATE_EPOCH: '315532800' } };
  compileObject({ sdk, flags, source: '/w/a.c', object: '/b/a.o', execute });
  assert.ok(calls[0].args.includes('--sysroot=/state/cache/sysroot'));
  assert.equal(calls[0].settings.env.PATH, '/p');
  assert.equal(emscriptenCache({ ...sdk, env: { EM_CACHE: '/frozen' } }), '/frozen');
  compileObject({ sdk: { ...sdk, env: { ...sdk.env, EM_CACHE: '/frozen', EM_FROZEN_CACHE: '1' } }, flags,
    source: '/w/a.c', object: '/b/a.o', execute });
  assert.ok(calls[1].args.includes('--sysroot=/frozen/sysroot'));
  assert.throws(() => compileObject({ sdk, flags, source: '', object: '/b/a.o', execute }), /Missing source/);
});

test('recipe validation rejects malformed documents', () => {
  const good = structuredClone(bundledRecipe());
  assert.doesNotThrow(() => parseRecipe(JSON.stringify(good)));
  const broken = [
    recipe => { recipe.kind = 'other'; },
    recipe => { recipe.schema = 2; },
    recipe => { recipe.compile.driver = recipe.compile.driver.filter(arg => arg !== '<flags>'); },
    recipe => { recipe.compile.driver.push('<flags>'); },
    recipe => { recipe.compile.driver.push('--x=<unknown>'); },
    recipe => { recipe.compile.tool = '../clang'; },
    recipe => { recipe.compile.translation.consumedSettings = ['-O2']; },
    recipe => { recipe.compile.env = { 'bad key': '1' }; },
    recipe => { recipe.sysroot.libraries = ['../libc.a']; },
  ];
  for (const change of broken) {
    const recipe = structuredClone(good); change(recipe);
    assert.throws(() => parseRecipe(recipe), /Invalid link-driver recipe/);
  }
});

test('the compile driver switch defaults to emcc', () => {
  assert.equal(selectedCompileDriver(undefined), 'emcc');
  assert.equal(selectedCompileDriver(''), 'emcc');
  assert.equal(selectedCompileDriver('emcc'), 'emcc');
  assert.equal(selectedCompileDriver('node'), 'node');
  assert.throws(() => selectedCompileDriver('python'), /Unsupported LASM_LINK_DRIVER/);
});

test('the prebuilt sysroot keeps headers and only the recorded libraries', () => {
  const libraries = ['libc-mt.a', 'crt1_proxy_main.o'];
  assert.equal(selectCacheFile('sysroot_install.stamp', libraries), true);
  assert.equal(selectCacheFile('sysroot/include/stdio.h', libraries), true);
  assert.equal(selectCacheFile(`${libraryDirectory}/libc-mt.a`, libraries), true);
  assert.equal(selectCacheFile(`${libraryDirectory}/crt1_proxy_main.o`, libraries), true);
  assert.equal(selectCacheFile(`${libraryDirectory}/libc-mt-debug.a`, libraries), false);
  for (const other of ['sanity.txt', 'symbol_lists/x.json', 'build/libc-mt-tmp/a.o', 'cache.lock'])
    assert.equal(selectCacheFile(other, libraries), false);
  assert.equal(archiveRoot('6.0.9'), 'emscripten-6.0.9-cache-wasm64-pic');
});
