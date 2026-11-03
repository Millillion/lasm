// The link-driver recipe (src/link-driver/compile.mjs parseRecipe): every
// check that keeps a damaged or foreign recipe from steering the compiler and
// linker, and the clang command built from a valid one. Each case breaks one
// rule of an otherwise valid recipe and expects that rule's own message.
import assert from 'node:assert/strict';
import test from 'node:test';
import { join } from 'node:path';
import { bundledRecipe, parseRecipe, checkRecordedFlags, translateEmccFlags, clangArguments, clangCommand, emscriptenCache,
  checkToolchainIdentity, compileObject, probeOptimization, devOptimization, recipeKind, recipeSchema } from '../src/link-driver/compile.mjs';

const good = () => structuredClone(bundledRecipe());
const rejects = (change, message) => {
  const recipe = good(); change(recipe);
  assert.throws(() => parseRecipe(recipe), error => error.message === `Invalid link-driver recipe: ${message}`,
    `expected "${message}"`);
};
const accepts = change => { const recipe = good(); change(recipe); return parseRecipe(recipe); };
const hash = 'a'.repeat(64);

test('recipe identity: kind, schema and the Emscripten version', () => {
  assert.equal(recipeKind, 'lasm-link-driver-recipe');
  assert.equal(recipeSchema, 2);
  assert.throws(() => parseRecipe('null'), /Invalid link-driver recipe: unexpected kind/);
  rejects(recipe => { recipe.kind = 'lasm-link-driver-recipe-2'; }, 'unexpected kind');
  rejects(recipe => { recipe.schema = 3; }, 'unsupported schema 3');
  rejects(recipe => { delete recipe.emscripten; }, 'missing Emscripten version');
  for (const version of ['v6.0.9', '6.0.9-rc', '6.0', '6..9'])
    rejects(recipe => { recipe.emscripten = version; }, 'missing Emscripten version');
  assert.equal(accepts(recipe => { recipe.emscripten = '10.20.30'; }).emscripten, '10.20.30');
  // Text and objects parse alike; the input object is not frozen or changed.
  const input = good();
  const parsed = parseRecipe(input);
  assert.ok(Object.isFrozen(parsed) && Object.isFrozen(parsed.link.modes.final.pipeline[0].args));
  assert.ok(!Object.isFrozen(input));
  assert.deepEqual(parseRecipe(JSON.stringify(input)), parsed);
});

test('recipe compile section: tool, flags, driver, translation, environment', () => {
  rejects(recipe => { delete recipe.compile; }, 'missing compile section');
  rejects(recipe => { recipe.compile = 'clang'; }, 'missing compile section');
  for (const tool of [undefined, '../clang', 'Clang', 'clang ', '1clang', ''])
    rejects(recipe => { recipe.compile.tool = tool; }, 'invalid compile tool');
  assert.equal(accepts(recipe => { recipe.compile.tool = 'clang++-1'; }).compile.tool, 'clang++-1');
  for (const key of ['emccFlags', 'driver']) {
    rejects(recipe => { recipe.compile[key] = 'x'; }, `compile.${key} must be a non-empty string array`);
    rejects(recipe => { recipe.compile[key] = []; }, `compile.${key} must be a non-empty string array`);
    rejects(recipe => { recipe.compile[key] = [...recipe.compile[key], 1]; }, `compile.${key} must be a non-empty string array`);
  }
  rejects(recipe => { recipe.compile.driver.push('<flags>'); }, 'compile.driver must contain <flags> once');
  rejects(recipe => { delete recipe.compile.translation; }, 'compile.translation needs joinedOptions and consumedSettings');
  rejects(recipe => { delete recipe.compile.translation.joinedOptions; }, 'compile.translation needs joinedOptions and consumedSettings');
  rejects(recipe => { recipe.compile.translation.consumedSettings = 'x'; }, 'compile.translation needs joinedOptions and consumedSettings');
  for (const setting of ['-O2', 'x-sMEMORY64=1', '-sMEMORY64=1 x', '-smemory=1'])
    rejects(recipe => { recipe.compile.translation.consumedSettings = ['-sMEMORY64=1', setting]; }, 'invalid consumed setting');
  accepts(recipe => { recipe.compile.translation.consumedSettings = ['-sMEMORY64=1', '-sX_2=']; });
  rejects(recipe => { recipe.compile.translation.valueOptions = ['-I', '-unknown']; }, 'every value option must be a joined option');
  accepts(recipe => { delete recipe.compile.translation.valueOptions; });
  rejects(recipe => { recipe.compile.driver.push('--x=<unknown>'); }, 'unknown placeholder <unknown>');
  accepts(recipe => { recipe.compile.driver.push('-iwithsysroot<sep>x', '<sysroot:default>'); });
  for (const [key, value] of [['lower', '1'], ['1START', '1'], ['A-B', '1'], ['OK', 1]])
    rejects(recipe => { recipe.compile.env = { GOOD: '1', [key]: value }; }, `invalid environment entry ${key}`);
  accepts(recipe => { recipe.compile.env = { _A1: 'x' }; });
  accepts(recipe => { delete recipe.compile.env; });
});

test('recipe sysroot and toolchain identities', () => {
  rejects(recipe => { delete recipe.sysroot; }, 'sysroot.libraries must list archive or object names');
  for (const name of ['../libc.a', '/libc.a', 'libc.a.bak', 'libc.so', 'lib c.a'])
    rejects(recipe => { recipe.sysroot.libraries = ['libc.a', name]; }, 'sysroot.libraries must list archive or object names');
  accepts(recipe => { recipe.sysroot.libraries = ['libc++-mt.a', 'crt1.o']; });
  accepts(recipe => { delete recipe.link; });
  accepts(recipe => { delete recipe.toolchain; });
  const valid = { release: 'v1.2_3-x', shared: hash, native: { 'linux-x64': hash, 'win32-arm64': 'b'.repeat(64) } };
  accepts(recipe => { recipe.toolchain = valid; });
  for (const change of [
    t => { delete t.release; }, t => { t.release = 'a b'; }, t => { t.release = '!x'; }, t => { t.release = 'x!'; },
    t => { t.shared = 'A'.repeat(64); }, t => { t.shared = 'g' + hash; }, t => { t.shared = hash + 'g'; }, t => { delete t.shared; },
    t => { delete t.native; }, t => { t.native = {}; }, t => { t.native = { linux_x64: hash }; }, t => { t.native = { '-x64': hash }; },
    t => { t.native = { 'linux-x64-': hash }; }, t => { t.native = { 'linux-x64': hash, 'darwin-x64': 'short' }; },
  ]) rejects(recipe => { recipe.toolchain = structuredClone(valid); change(recipe.toolchain); }, 'invalid toolchain identities');
});

test('recipe link section: library directory, signatures, defaults, modes and steps', () => {
  rejects(recipe => { recipe.link = null; }, 'invalid link section');
  rejects(recipe => { recipe.link = 'link'; }, 'invalid link section');
  for (const directory of [undefined, '/wasm64', 'wasm64//pic', 'Wasm64', 'wasm64/pic/', 'a b'])
    rejects(recipe => { recipe.link.systemLibraryDirectory = directory; }, 'invalid link.systemLibraryDirectory');
  accepts(recipe => { recipe.link.systemLibraryDirectory = 'a_1/b-2/c'; });
  for (const file of [undefined, 'x/native-sigs-emscripten-6.0.9.json', 'native-sigs-emscripten-6.0.9.json.bak', 'native-sigs-emscripten-.json'])
    rejects(recipe => { recipe.link.nativeSigs.file = file; }, 'invalid link.nativeSigs');
  for (const sha of [undefined, 'g' + hash, hash + '0', hash.slice(1)])
    rejects(recipe => { recipe.link.nativeSigs.sha256 = sha; }, 'invalid link.nativeSigs');
  rejects(recipe => { delete recipe.link.nativeSigs; }, 'invalid link.nativeSigs');
  for (const defaults of [undefined, [], 'x', null])
    rejects(recipe => { recipe.link.settingsDefaults = defaults; }, 'invalid link.settingsDefaults');
  rejects(recipe => { delete recipe.link.modes; }, 'missing link mode probe');
  rejects(recipe => { delete recipe.link.modes.final; }, 'missing link mode final');
  for (const mode of ['probe', 'final']) {
    for (const flags of ['-O0', ['-O0', 1], ['-O0', 'input.o']])
      rejects(recipe => { recipe.link.modes[mode].emccFlags = flags; }, `link.modes.${mode}.emccFlags must list flags`);
    for (const settings of [undefined, [], 'x'])
      rejects(recipe => { recipe.link.modes[mode].settings = settings; }, `link.modes.${mode}.settings must be an object`);
    for (const pipeline of [undefined, [], {}])
      rejects(recipe => { recipe.link.modes[mode].pipeline = pipeline; }, `link.modes.${mode}.pipeline must be a non-empty array`);
    rejects(recipe => { recipe.link.modes[mode].pipeline[2].kind = 'shell'; }, 'unknown link step shell');
    rejects(recipe => { recipe.link.modes[mode].pipeline[2].program = 'python3'; }, 'unknown link program python3');
    rejects(recipe => { recipe.link.modes[mode].pipeline[2].args = 'x'; }, 'invalid strip arguments');
    rejects(recipe => { recipe.link.modes[mode].pipeline[2].args.push(7); }, 'invalid strip arguments');
    rejects(recipe => { recipe.link.modes[mode].pipeline[2].args.push('<x>'); }, 'unknown link placeholder <x>');
    rejects(recipe => { recipe.link.modes[mode].pipeline.reverse(); }, `the ${mode} pipeline must start with the JS symbols and wasm-ld`);
    rejects(recipe => { recipe.link.modes[mode].pipeline.splice(1, 1); }, `the ${mode} pipeline must start with the JS symbols and wasm-ld`);
    rejects(recipe => { recipe.link.modes[mode].pipeline.length = 1; }, `the ${mode} pipeline must start with the JS symbols and wasm-ld`);
  }
  accepts(recipe => { recipe.link.modes.final.pipeline[2].args.push('<wasm>', 'x<js-out>y'); });
});

test('recorded compiler flags: value options are free, everything else is fixed', () => {
  const recipe = bundledRecipe();
  const flags = recipe.compile.emccFlags;
  checkRecordedFlags(recipe, flags);
  assert.throws(() => checkRecordedFlags(recipe, [...flags.slice(0, -1)]),
    error => error.message === `The Node compile driver has no recording for these compiler flags: ${JSON.stringify(flags.slice(0, -1))}`);
  // Without value options only the exact flags are recorded.
  const strict = structuredClone(recipe); delete strict.compile.translation.valueOptions;
  checkRecordedFlags(strict, flags);
  const index = flags.indexOf('-I');
  assert.throws(() => checkRecordedFlags(strict, flags.map((flag, i) => i === index + 1 ? '/elsewhere' : flag)), /no recording/);
  // A changed flag right after a value option is still a change.
  assert.throws(() => checkRecordedFlags(recipe, flags.map((flag, i) => i === index ? '-isystem' : flag)), /no recording/);
});

test('emcc flag translation keeps unknown -s spellings it does not own', () => {
  const recipe = bundledRecipe();
  assert.deepEqual(translateEmccFlags(recipe, ['-sfoo', 'x-sFOO', '-O2']), ['-sfoo', 'x-sFOO', '-O2']);
  assert.throws(() => translateEmccFlags(recipe, ['-s']), error => error.message === 'Unrecorded Emscripten setting -s');
  assert.throws(() => translateEmccFlags(recipe, ['-s_X=1']), /Unrecorded Emscripten setting -s_X=1/);
  assert.throws(() => translateEmccFlags(recipe, ['-I']), error => error.message === 'Option -I requires an argument');
  assert.deepEqual(translateEmccFlags(recipe, ['-I', 'a', '-I', 'b']), ['-Ia', '-Ib']);
});

const flags = ['-O2', '-DNDEBUG', '-pthread', '-fwasm-exceptions', '-mtail-call', '-fPIC', '-DLEAN_EMSCRIPTEN',
  '-sMEMORY64=1', '-ffunction-sections', '-fdata-sections', '-I', '/r/include'];
const base = { flags, source: '/w/Main.c', object: '/b/m.o', sysroot: '/s/sysroot', platform: 'linux' };

test('clang arguments: required paths, package options and optimization levels', () => {
  const recipe = bundledRecipe();
  assert.equal(probeOptimization, '-O0');
  assert.equal(devOptimization, '-O1');
  for (const name of ['source', 'object', 'sysroot']) {
    assert.throws(() => clangArguments(recipe, { ...base, [name]: '' }), error => error.message === `Missing ${name} for the Node compile driver`);
    assert.throws(() => clangArguments(recipe, { ...base, [name]: 7 }), new RegExp(`Missing ${name}`));
  }
  const plain = clangArguments(recipe, base);
  // Package preprocessor options go right before -c; non-option words pass.
  const extra = ['-I/p/include', '-isystem', '/p/sys', '-iquote/q', '-idirafter/d', '-include', 'h.h', '-imacros', 'm.h', '-DX=1', '-UY',
    '-std=c11', '-x', 'c', '-w'];
  const withExtra = clangArguments(recipe, { ...base, extraArgs: extra });
  const at = withExtra.indexOf('-c');
  assert.deepEqual(withExtra.slice(at - extra.length, at), extra);
  assert.deepEqual(withExtra.filter((_, i) => i < at - extra.length || i >= at), plain);
  for (const bad of [['-O3'], ['-xc'], ['-cx'], ['-wx'], [1], ['-fplugin=x'], ['-I/ok', '-mllvm']])
    assert.throws(() => clangArguments(recipe, { ...base, extraArgs: bad }),
      error => error.message === `Unsupported package compiler option: ${JSON.stringify(bad)}`);
  // An optimization level replaces only the recorded -O level.
  for (const level of [probeOptimization, devOptimization]) {
    const args = clangArguments(recipe, { ...base, optimization: level });
    assert.deepEqual(args, plain.map(arg => arg === '-O2' ? level : arg));
  }
  for (const level of ['-O2', '-O3', '-Os', ''])
    assert.throws(() => clangArguments(recipe, { ...base, optimization: level }), error => error.message === `Unsupported optimization ${level}`);
  // A recording with no single optimization level cannot take one.
  const none = structuredClone(recipe);
  none.compile.emccFlags = none.compile.emccFlags.filter(flag => flag !== '-O2');
  const noLevel = flags.filter(flag => flag !== '-O2');
  assert.ok(clangArguments(none, { ...base, flags: noLevel }).every(arg => !/^-O/.test(arg)));
  assert.throws(() => clangArguments(none, { ...base, flags: noLevel, optimization: '-O0' }),
    error => error.message === 'The recorded compile flags need exactly one optimization level');
  const two = structuredClone(recipe);
  two.compile.emccFlags = [...two.compile.emccFlags, '-Oz'];
  assert.throws(() => clangArguments(two, { ...base, flags: [...flags, '-Oz'], optimization: '-O1' }), /exactly one optimization level/);
  assert.ok(clangArguments(two, { ...base, flags: [...flags, '-Oz'] }).includes('-Oz'));
});

test('the Emscripten cache: the toolchain\'s, EM_CACHE, then the SDK state\'s', () => {
  assert.equal(emscriptenCache({ cache: '/toolchain/cache', env: { EM_CACHE: '/frozen' }, state: '/s' }), '/toolchain/cache');
  assert.equal(emscriptenCache({ env: { EM_CACHE: '' }, state: '/s' }), '/s/cache'.replaceAll('/', process.platform === 'win32' ? '\\' : '/'));
  assert.equal(emscriptenCache({ state: '/s' }), emscriptenCache({ env: {}, state: '/s' }));
});

test('the recipe runs only with the toolchain or SDK it was verified with', () => {
  const recipe = { emscripten: '6.0.9', toolchain: { shared: 'S', native: { 'linux-x64': 'N' } }, sdk: { driverIdentity: 'D' } };
  assert.equal(checkToolchainIdentity(recipe, { platform: 'linux-x64', toolchain: { shared: 'S', native: 'N' } }), 'toolchain');
  for (const toolchain of [{ shared: 'X', native: 'N' }, { shared: 'S', native: 'X' }])
    assert.throws(() => checkToolchainIdentity(recipe, { platform: 'linux-x64', toolchain }), error => error.message
      === `The link-driver recipe for Emscripten 6.0.9 was not verified with these compiler tools (linux-x64 ${toolchain.native}, shared ${toolchain.shared})`);
  assert.throws(() => checkToolchainIdentity(recipe, { platform: 'darwin-arm64', toolchain: { shared: 'S', native: 'N' } }), /not verified/);
  assert.throws(() => checkToolchainIdentity({ ...recipe, toolchain: undefined }, { platform: 'linux-x64', toolchain: { shared: 'S', native: 'N' }, driverIdentity: 'D' }),
    /not verified with these compiler tools/);
  assert.equal(checkToolchainIdentity(recipe, { driverIdentity: 'D' }), 'sdk');
  assert.throws(() => checkToolchainIdentity(recipe, { driverIdentity: 'E' }),
    error => error.message === 'The link-driver recipe for Emscripten 6.0.9 was not recorded with this compiler SDK (E)');
  assert.throws(() => checkToolchainIdentity(recipe, {}), error => error.message.endsWith('compiler SDK (unknown)'));
  assert.throws(() => checkToolchainIdentity({ emscripten: '6.0.9' }, {}), /compiler SDK \(unknown\)/);
});

test('compileObject runs the recipe\'s clang with its environment and the caller\'s settings', () => {
  const calls = [];
  const execute = (program, args, options) => { calls.push({ program, args, options }); return 'done'; };
  const sdk = { prefix: '/sdk', cache: '/c', env: { PATH: '/p', SOURCE_DATE_EPOCH: '1' } };
  assert.equal(compileObject({ sdk, flags, source: '/w/a.c', object: '/b/a.o', execute, settings: { timeout: 5, windowsHide: false }, optimization: '-O1',
    extraArgs: ['-DPKG'] }), 'done');
  const [call] = calls;
  assert.equal(call.program, clangCommand(bundledRecipe(), { sdkPrefix: '/sdk' }).program);
  assert.deepEqual(call.args, clangArguments(bundledRecipe(), { flags, source: '/w/a.c', object: '/b/a.o', sysroot: `${'/c'}${process.platform === 'win32' ? '\\' : '/'}sysroot`,
    extraArgs: ['-DPKG'], optimization: '-O1' }));
  assert.equal(call.options.env.PATH, '/p');
  assert.equal(call.options.env.SOURCE_DATE_EPOCH, bundledRecipe().compile.env.SOURCE_DATE_EPOCH);
  assert.equal(call.options.timeout, 5);
  assert.equal(call.options.windowsHide, false, 'settings override the defaults');
  compileObject({ sdk, flags, source: '/w/a.c', object: '/b/a.o', execute });
  assert.equal(calls[1].options.windowsHide, true);
  // A custom recipe is used as given.
  const recipe = structuredClone(bundledRecipe()); recipe.compile.tool = 'clang-custom';
  compileObject({ sdk, flags, source: '/w/a.c', object: '/b/a.o', execute, recipe });
  assert.match(calls[2].program, /clang-custom(?:\.exe)?$/);
});

test('compileObject refuses a clang command line Windows cannot start', t => {
  const calls = [];
  const execute = (program, args) => { calls.push(args); };
  const sdk = { prefix: '/sdk', cache: '/c', env: {} };
  const sysroot = join('/c', 'sysroot');
  const sourceOf = length => '/w/' + 'a'.repeat(length - 5) + '.c';
  // The command's length as compileObject measures it: each argument plus 3.
  const measure = source => [clangCommand(bundledRecipe(), { sdkPrefix: '/sdk' }).program,
    ...clangArguments(bundledRecipe(), { flags, source, object: '/b/a.o', sysroot })].reduce((total, arg) => total + arg.length + 3, 0);
  const limit = () => 24000 - (measure(sourceOf(100)) - 100);
  if (process.platform !== 'win32') {
    compileObject({ sdk, flags, source: sourceOf(limit() + 1), object: '/b/a.o', execute });
    assert.equal(calls.length, 1, 'only Windows limits the command line');
  }
  const restore = Object.getOwnPropertyDescriptor(process, 'platform');
  Object.defineProperty(process, 'platform', { ...restore, value: 'win32' });
  t.after(() => Object.defineProperty(process, 'platform', restore));
  const atLimit = sourceOf(limit()), over = sourceOf(limit() + 1);
  assert.equal(measure(atLimit), 24000);
  compileObject({ sdk, flags, source: atLimit, object: '/b/a.o', execute });
  assert.throws(() => compileObject({ sdk, flags, source: over, object: '/b/a.o', execute }),
    error => error.message === 'The clang command line is too long for Windows');
});
