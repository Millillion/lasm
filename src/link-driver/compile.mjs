// Phase 2 Node link driver (docs/TOOLCHAIN_SLIMMING.md): compile Lasm's
// generated C directly with clang, using the clang driver arguments that emcc
// was recorded passing. src/application-link.mjs uses it for the default 'node'
// driver (with src/link-driver/link.mjs) and the maintainer 'node-compile' mode.
//
// All Emscripten-specific knowledge lives in the versioned recipe file, which
// scripts/link-driver/recipe.mjs --derive writes from an EMCC_DEBUG recording:
//   compile.emccFlags   the emcc flags the recording covered (Lasm's own flags);
//   compile.driver      clang's arguments, with placeholders, where <flags> is
//                       the translated emcc flags plus -c/-o;
//   compile.translation how emcc turns its flags into clang flags
//                       (tools/cmdline.py normalize_args; consumed -s settings);
//   compile.env         environment that must match the product's SDK env.
import { readFileSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import path from 'node:path';
import { executableName } from '../platform.mjs';

export const recipeKind = 'lasm-link-driver-recipe';
export const recipeSchema = 2;
const placeholderPattern = /<([a-z-]+)(?::([^>]*))?>/g;

/** Validates a recipe document (object or JSON text) and returns it frozen. */
export function parseRecipe(input) {
  const recipe = typeof input === 'string' ? JSON.parse(input) : structuredClone(input);
  const fail = message => { throw new Error(`Invalid link-driver recipe: ${message}`); };
  if (recipe?.kind !== recipeKind) fail('unexpected kind');
  if (recipe.schema !== recipeSchema) fail(`unsupported schema ${recipe.schema}`);
  if (!/^\d+\.\d+\.\d+$/.test(recipe.emscripten ?? '')) fail('missing Emscripten version');
  const compile = recipe.compile;
  if (!compile || typeof compile !== 'object') fail('missing compile section');
  if (!/^[a-z][a-z0-9+-]*$/.test(compile.tool ?? '')) fail('invalid compile tool');
  for (const key of ['emccFlags', 'driver'])
    if (!Array.isArray(compile[key]) || !compile[key].length || compile[key].some(arg => typeof arg !== 'string'))
      fail(`compile.${key} must be a non-empty string array`);
  if (compile.driver.filter(arg => arg === '<flags>').length !== 1) fail('compile.driver must contain <flags> once');
  const translation = compile.translation;
  if (!Array.isArray(translation?.joinedOptions) || !Array.isArray(translation?.consumedSettings))
    fail('compile.translation needs joinedOptions and consumedSettings');
  if (translation.consumedSettings.some(arg => !/^-s[A-Z_0-9]+=\S*$/.test(arg))) fail('invalid consumed setting');
  if (translation.valueOptions?.some(option => !translation.joinedOptions.includes(option)))
    fail('every value option must be a joined option');
  const known = new Set(['flags', 'sysroot', 'source', 'object', 'sep']);
  for (const arg of compile.driver) for (const [, name] of arg.matchAll(placeholderPattern))
    if (!known.has(name)) fail(`unknown placeholder <${name}>`);
  for (const [key, value] of Object.entries(compile.env ?? {}))
    if (!/^[A-Z_][A-Z0-9_]*$/.test(key) || typeof value !== 'string') fail(`invalid environment entry ${key}`);
  if (!Array.isArray(recipe.sysroot?.libraries) || recipe.sysroot.libraries.some(name => !/^[A-Za-z0-9_+.-]+\.(?:a|o)$/.test(name)))
    fail('sysroot.libraries must list archive or object names');
  if (recipe.link !== undefined) validateLink(recipe.link, fail);
  if (recipe.toolchain !== undefined) {
    const { toolchain } = recipe, hash = value => /^[a-f0-9]{64}$/.test(value ?? '');
    if (!/^[A-Za-z0-9._-]+$/.test(toolchain.release ?? '') || !hash(toolchain.shared) || !toolchain.native
        || !Object.keys(toolchain.native).length || Object.entries(toolchain.native).some(([host, sha]) => !/^[a-z0-9]+-[a-z0-9]+$/.test(host) || !hash(sha)))
      fail('invalid toolchain identities');
  }
  return deepFreeze(recipe);
}

const linkKinds = new Set(['symbols', 'wasm-ld', 'strip', 'finalize', 'glue', 'wasm-opt', 'acorn', 'dce-graph', 'metadce']);
const linkPlaceholders = new Set(['emscripten', 'wasm', 'stub', 'exports', 'export-if-defined', 'inputs', 'syslib',
  'features', 'js', 'js-out', 'info', 'graph']);
const linkPrograms = new Set(['node', 'wasm-ld', 'llvm-objcopy', 'wasm-emscripten-finalize', 'wasm-opt', 'wasm-metadce']);

/** The link section (milestone C): per-mode em++ flags, settings template and pipeline. */
function validateLink(link, fail) {
  if (!link || typeof link !== 'object') fail('invalid link section');
  if (!/^[a-z0-9_-]+(?:\/[a-z0-9_-]+)*$/.test(link.systemLibraryDirectory ?? '')) fail('invalid link.systemLibraryDirectory');
  if (!/^native-sigs-emscripten-[0-9.]+\.json$/.test(link.nativeSigs?.file ?? '') || !/^[a-f0-9]{64}$/.test(link.nativeSigs?.sha256 ?? ''))
    fail('invalid link.nativeSigs');
  if (!link.settingsDefaults || typeof link.settingsDefaults !== 'object' || Array.isArray(link.settingsDefaults)) fail('invalid link.settingsDefaults');
  for (const mode of ['probe', 'final']) {
    const spec = link.modes?.[mode];
    if (!spec) fail(`missing link mode ${mode}`);
    if (!Array.isArray(spec.emccFlags) || spec.emccFlags.some(arg => typeof arg !== 'string' || !arg.startsWith('-')))
      fail(`link.modes.${mode}.emccFlags must list flags`);
    if (!spec.settings || typeof spec.settings !== 'object' || Array.isArray(spec.settings)) fail(`link.modes.${mode}.settings must be an object`);
    if (!Array.isArray(spec.pipeline) || !spec.pipeline.length) fail(`link.modes.${mode}.pipeline must be a non-empty array`);
    for (const step of spec.pipeline) {
      if (!linkKinds.has(step.kind)) fail(`unknown link step ${step.kind}`);
      if (!linkPrograms.has(step.program)) fail(`unknown link program ${step.program}`);
      if (!Array.isArray(step.args) || step.args.some(arg => typeof arg !== 'string')) fail(`invalid ${step.kind} arguments`);
      for (const arg of step.args) for (const [, name] of arg.matchAll(/<([a-z-]+)>/g))
        if (!linkPlaceholders.has(name)) fail(`unknown link placeholder <${name}>`);
    }
    if (spec.pipeline[0].kind !== 'symbols' || spec.pipeline[1]?.kind !== 'wasm-ld') fail(`the ${mode} pipeline must start with the JS symbols and wasm-ld`);
  }
}

function deepFreeze(value) {
  if (value && typeof value === 'object') { Object.freeze(value); for (const item of Object.values(value)) deepFreeze(item); }
  return value;
}

let bundled;
/** The recipe recorded for the pinned managed SDK (src/sdk-tools.json). */
export function bundledRecipe() {
  bundled ??= parseRecipe(readFileSync(new URL('./recipe-emscripten-6.0.9.json', import.meta.url), 'utf8'));
  return bundled;
}

/** Lasm's emcc flags must be exactly the recorded ones; -I values are free. */
export function checkRecordedFlags(recipe, flags) {
  const values = new Set(recipe.compile.translation.valueOptions ?? []);
  const shape = list => list.map((arg, index) => values.has(list[index - 1]) ? '<value>' : arg);
  const expected = shape(recipe.compile.emccFlags), actual = shape(flags);
  if (expected.length !== actual.length || expected.some((arg, index) => arg !== actual[index]))
    throw new Error(`The Node compile driver has no recording for these compiler flags: ${JSON.stringify(flags)}`);
}

/** emcc's own flag translation: drop consumed -s settings, then
 * tools/cmdline.py normalize_args joins ['-I', 'dir'] into '-Idir', etc. */
export function translateEmccFlags(recipe, args) {
  const { joinedOptions, consumedSettings } = recipe.compile.translation;
  const consumed = new Set(consumedSettings), joined = new Set(joinedOptions), result = [];
  for (let index = 0; index < args.length; index++) {
    const arg = args[index];
    if (consumed.has(arg)) continue;
    if (/^-s[A-Z_]/.test(arg) || arg === '-s') throw new Error(`Unrecorded Emscripten setting ${arg}`);
    if (joined.has(arg)) {
      if (index + 1 >= args.length) throw new Error(`Option ${arg} requires an argument`);
      result.push(arg + args[++index]);
    } else result.push(arg);
  }
  return result;
}

/** Python's os.path.join for the platform emcc runs on (used by -iwithsysroot). */
const separator = platform => platform === 'win32' ? '\\' : '/';

/** Complete clang argument vector (without the program) for one translation unit. */
/** `optimization` '-O0' replaces the recorded optimization level for objects
 * that are only analysed and never linked into a delivered program (Lasm's
 * initializer-planning probes); emcc passes -O levels to clang unchanged. */
export const probeOptimization = '-O0';
/** The dev profile compiles the program's own modules at -O1 (about half the
 * clang time of the recorded -O2 for a large module). */
export const devOptimization = '-O1';
export function clangArguments(recipe, { flags, source, object, sysroot, platform = process.platform, extraArgs = [], optimization }) {
  for (const [name, value] of Object.entries({ source, object, sysroot }))
    if (typeof value !== 'string' || !value) throw new Error(`Missing ${name} for the Node compile driver`);
  checkRecordedFlags(recipe, flags);
  // Package C sources (src/application-native.mjs) add preprocessor options only.
  if (extraArgs.some(arg => typeof arg !== 'string' || !/^-(?:I|isystem|iquote|idirafter|include|imacros|D|U|std=|x$|c$|w$)/.test(arg) && arg.startsWith('-')))
    throw new Error(`Unsupported package compiler option: ${JSON.stringify(extraArgs)}`);
  if (optimization !== undefined && optimization !== probeOptimization && optimization !== devOptimization) throw new Error(`Unsupported optimization ${optimization}`);
  const levels = flags.filter(flag => /^-O[0-3sz]$/.test(flag));
  if (optimization !== undefined && levels.length !== 1) throw new Error('The recorded compile flags need exactly one optimization level');
  const translated = translateEmccFlags(recipe, [...(optimization === undefined ? flags : flags.map(flag => flag === levels[0] ? optimization : flag)),
    '-c', source, '-o', object]);
  translated.splice(translated.indexOf('-c'), 0, ...extraArgs);
  const values = { sysroot, source, object, sep: separator(platform) };
  return recipe.compile.driver.flatMap(arg => arg === '<flags>' ? translated
    : [arg.replace(placeholderPattern, (_, name) => values[name])]);
}

/** The program and environment for clang, from the managed SDK. */
export function clangCommand(recipe, { sdkPrefix, env = process.env, platform = process.platform }) {
  const paths = platform === 'win32' ? path.win32 : path.posix;
  return { program: paths.join(sdkPrefix, 'bin', executableName(recipe.compile.tool, platform)),
    env: { ...env, ...recipe.compile.env } };
}

/** The Emscripten cache whose sysroot emcc would pass to clang: the managed link
 * toolchain's prebuilt cache, else EM_CACHE (a prebuilt, frozen cache), else the
 * managed SDK state's own cache. */
export function emscriptenCache(sdk) {
  return sdk.cache ?? (sdk.env?.EM_CACHE || path.join(sdk.state, 'cache'));
}

/** The recipe runs only against the tools it was recorded and verified with:
 * the published link-toolchain archives it names (recipe.toolchain), or, for
 * maintainer recordings and gates, the repaired SDK it was recorded from. */
export function checkToolchainIdentity(recipe, sdk) {
  if (sdk.toolchain) {
    const expected = recipe.toolchain;
    if (expected && expected.shared === sdk.toolchain.shared && expected.native[sdk.platform] === sdk.toolchain.native) return 'toolchain';
    throw new Error(`The link-driver recipe for Emscripten ${recipe.emscripten} was not verified with these compiler tools `
      + `(${sdk.platform} ${sdk.toolchain.native}, shared ${sdk.toolchain.shared})`);
  }
  if (sdk.driverIdentity && sdk.driverIdentity === recipe.sdk?.driverIdentity) return 'sdk';
  throw new Error(`The link-driver recipe for Emscripten ${recipe.emscripten} was not recorded with this compiler SDK (${sdk.driverIdentity ?? 'unknown'})`);
}

/** Compile one C file to a Wasm object exactly as `emcc -c` would. */
export function compileObject({ sdk, flags, source, object, recipe = bundledRecipe(), execute = execFileSync, settings = {}, extraArgs = [], optimization }) {
  const sysroot = path.join(emscriptenCache(sdk), 'sysroot');
  const args = clangArguments(recipe, { flags, source, object, sysroot, extraArgs, optimization });
  const { program, env } = clangCommand(recipe, { sdkPrefix: sdk.prefix, env: sdk.env });
  // Generated-source paths are short; Windows' CreateProcess limit is 32,767.
  const length = [program, ...args].reduce((total, arg) => total + arg.length + 3, 0);
  if (process.platform === 'win32' && length > 24000) throw new Error('The clang command line is too long for Windows');
  return execute(program, args, { env, windowsHide: true, ...settings });
}
