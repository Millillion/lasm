// Derive the `link` section of the product recipe (src/link-driver/recipe-*.json)
// from an EMCC_DEBUG recording (scripts/link-driver/record-emcc.mjs --debug,
// analyzed by recipe.mjs). Fails unless every fixture's probe and final links
// reduce to one template per mode:
//   emccFlags  Lasm's em++ flags other than inputs, --pre-js, --js-library, -o;
//   settings   emcc-00-settings.json with placeholders for the input-dependent
//              values; re-serialized with the driver's Python-compatible JSON
//              writer it must equal the recorded file byte for byte;
//   pipeline   every subprocess emcc ran, in order, as argument templates;
//   settingsDefaults  defaults (src/settings*.js) of each setting the driver
//              reads or writes;
//   nativeSigs tools/native_sigs.py as a JSON data file.
import { createHash } from 'node:crypto';
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { basename, join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { addJsDependencies, linkerExports, parseLinkArguments } from '../../src/link-driver/link.mjs';
import { Settings, readSettingsDefaults, settingsPlaceholders } from '../../src/link-driver/settings.mjs';
import { pythonJsonDumps } from '../../src/link-driver/python.mjs';
import { requiredSettings } from '../../src/link-driver/glue.mjs';

const sourceDirectory = fileURLToPath(new URL('../../src/link-driver/', import.meta.url));
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const same = (a, b) => JSON.stringify(a) === JSON.stringify(b);

/** Every setting name the driver reads or writes (settings.get/set calls and
 * the supported-configuration checks). */
export function settingsUsedByDriver() {
  const names = new Set(Object.keys(requiredSettings));
  for (const file of readdirSync(sourceDirectory).filter(name => name.endsWith('.mjs'))) {
    for (const [, name] of readFileSync(join(sourceDirectory, file), 'utf8').matchAll(/settings\.(?:get|set|has)\('([A-Z0-9_]+)'/g)) names.add(name);
  }
  return [...names].sort();
}

/** Parse tools/native_sigs.py (an auto-generated dict literal). */
export function parseNativeSigs(text) {
  const body = /native_sigs = \{\n([\s\S]*?)\n\}/.exec(text);
  if (!body) throw new Error('Unexpected native_sigs.py format');
  const result = {};
  for (const line of body[1].split('\n')) {
    const match = /^ {2}'([^']+)': '([^']+)',$/.exec(line);
    if (!match) throw new Error(`Unexpected native_sigs.py line: ${line}`);
    result[match[1]] = match[2];
  }
  return result;
}

function linkTemplate(argv, { emArgs, exportsExpected, ifDefinedExpected }) {
  if (argv[1] !== '-o' || argv[2] !== '<build>/dist/program.wasm' || !argv[3].endsWith('libemscripten_js_symbols.so'))
    throw new Error('Unexpected wasm-ld command shape');
  const out = ['-o', '<wasm>', '<stub>'];
  const rest = argv.slice(4);
  // Lasm's inputs, as tools/link.py passes them (parsed from the em++ arguments).
  const inputs = emInputs(emArgs);
  let index = 0;
  while (index < rest.length) {
    if (rest[index].startsWith('--export=')) {
      const run = []; while (rest[index]?.startsWith('--export=')) run.push(rest[index++]);
      if (!same(run, exportsExpected)) throw new Error('Recorded --export list differs from the settings');
      out.push('<exports>');
      const defined = rest.slice(index, index + ifDefinedExpected.length);
      if (!same(defined, ifDefinedExpected)) throw new Error('Recorded --export-if-defined list differs from EXPORT_IF_DEFINED');
      out.push('<export-if-defined>'); index += ifDefinedExpected.length;
    } else if (same(rest.slice(index, index + inputs.length), inputs)) {
      out.push('<inputs>'); index += inputs.length;
    } else {
      out.push(rest[index++].replace(/^(-L)?<emcache>\/sysroot\/lib\/wasm64-emscripten\/pic/, '$1<syslib>'));
    }
  }
  if (out.filter(arg => arg === '<inputs>').length !== 1 || out.filter(arg => arg === '<exports>').length !== 1)
    throw new Error('wasm-ld template must contain the inputs and exports once');
  return out;
}

const emInputs = emArgs => {
  const inputs = [];
  for (let i = 0; i < emArgs.length; i++) {
    const arg = emArgs[i];
    if (['--pre-js', '--js-library', '-o'].includes(arg)) { i++; continue; }
    if (arg.startsWith('-Wl,')) inputs.push(...arg.slice(4).split(',').filter(item => item !== '--start-group' && item !== '--end-group'));
    else if (!arg.startsWith('-')) inputs.push(arg);
  }
  return inputs;
};

function pipelineTemplate(pipeline, context) {
  const steps = [];
  const minifyPasses = new Set(['JSDCE', 'AJSDCE', 'emitDCEGraph', 'applyDCEGraphRemovals']);
  const featuresAfterOutput = argv => {
    const at = argv.indexOf('-o');
    if (at < 0 || argv[at + 1] !== '<build>/dist/program.wasm') throw new Error('Binaryen command without -o program.wasm');
    return [...argv.slice(1, at).map(arg => arg === '<build>/dist/program.wasm' ? '<wasm>' : arg), '-o', '<wasm>',
      ...(argv.length > at + 2 ? ['<features>'] : [])];
  };
  for (const { tool, argv } of pipeline) {
    if (argv[0] !== '<node>' && !argv[0].startsWith('<sdk>/bin/')) throw new Error(`Unexpected program ${argv[0]}`);
    const program = argv[0] === '<node>' ? 'node' : basename(argv[0]).replace(/\.exe$/, '');
    if (tool === 'node compiler.mjs') {
      steps.push({ kind: argv.includes('--symbols-only') ? 'symbols' : 'glue', program, args: argv.slice(1) });
    } else if (tool === 'wasm-ld') steps.push({ kind: 'wasm-ld', program, args: linkTemplate(argv, context) });
    else if (tool === 'llvm-objcopy') steps.push({ kind: 'strip', program, args: argv.slice(1).map(arg => arg === '<build>/dist/program.wasm' ? '<wasm>' : arg) });
    else if (tool === 'wasm-emscripten-finalize') steps.push({ kind: 'finalize', program, args: featuresAfterOutput(argv).map(arg => arg === '<features>' ? '--detect-features' : arg) });
    else if (tool === 'wasm-opt') steps.push({ kind: 'wasm-opt', program, args: featuresAfterOutput(argv) });
    else if (tool === 'wasm-metadce') {
      steps.push({ kind: 'metadce', program, args: featuresAfterOutput(argv).map(arg => arg.startsWith('--graph-file=') ? '--graph-file=<graph>' : arg) });
    } else if (tool === 'node acorn-optimizer.mjs') {
      const pass = argv[3];
      const args = argv.slice(1).map((arg, i, all) => i === 1 ? (/emcc_acorn_info_/.test(arg) ? '<info>' : '<js>')
        : all[i - 1] === '-o' ? '<js-out>' : arg);
      steps.push({ kind: pass === 'emitDCEGraph' ? 'dce-graph' : 'acorn', program, pass, ...(minifyPasses.has(pass) ? { minify: true } : {}), args });
    } else throw new Error(`Unrecorded link tool ${tool}`);
  }
  // The finalize step's --detect-features is literal (no features are known yet).
  const finalize = steps.find(step => step.kind === 'finalize');
  if (finalize && finalize.args.at(-1) !== '--detect-features') throw new Error('Unexpected finalize features');
  for (const step of steps) if (step.args.some(arg => /<(?:build|temp|lasm|runtime|state|work|cache|sdk|node|emcache)>/.test(arg)))
    throw new Error(`Unresolved recorded path in ${step.kind}: ${step.args.join(' ')}`);
  return steps;
}

function settingsTemplate(raw, { userExports, preJs, jsLibrary, emscripten }) {
  const settings = JSON.parse(raw);
  // The driver's serializer must reproduce emcc's file exactly.
  if (pythonJsonDumps(settings, { indent: 2, sortKeys: true }) !== raw) throw new Error('Python JSON re-serialization differs from emcc-00-settings.json');
  const check = (key, expected) => { if (!same(settings[key], expected)) throw new Error(`Recorded ${key} differs from the link inputs`); };
  check('USER_EXPORTS', userExports);
  check('EXPORTED_FUNCTIONS', userExports.filter(name => name !== '_main'));
  check('PRE_JS_FILES', preJs);
  settings.USER_EXPORTS = settingsPlaceholders.USER_EXPORTS;
  settings.EXPORTED_FUNCTIONS = settingsPlaceholders.EXPORTED_FUNCTIONS;
  settings.PRE_JS_FILES = settingsPlaceholders.PRE_JS_FILES;
  settings.JS_LIBRARIES = settings.JS_LIBRARIES.map(file => file === jsLibrary ? '<js-library>'
    : file.startsWith(emscripten + '/') ? '<emscripten>/' + file.slice(emscripten.length + 1) : file);
  const text = JSON.stringify(settings);
  if (/"\/|[A-Za-z]:\\\\/.test(text)) throw new Error('Absolute path left in the settings template');
  return settings;
}

export function deriveLinkRecipe(run, recorded, { nativeSigsOut } = {}) {
  const modes = {};
  const first = Object.keys(recorded.fixtures)[0];
  const emscripten = JSON.parse(readFileSync(join(run, first, 'build.json'), 'utf8')).paths.emscripten;
  const defaults = readSettingsDefaults(emscripten);
  const settingsDefaults = {};
  for (const key of settingsUsedByDriver()) {
    if (!Object.hasOwn(defaults, key)) throw new Error(`No default for setting ${key}`);
    settingsDefaults[key] = defaults[key];
  }
  for (const [name, fixture] of Object.entries(recorded.fixtures)) {
    const build = JSON.parse(readFileSync(join(run, name, 'build.json'), 'utf8'));
    if (build.paths.emscripten !== emscripten) throw new Error('Fixtures were recorded with different Emscripten trees');
    for (const link of fixture.links) {
      const stepDirectory = join(run, name, 'steps', `${String(link.step).padStart(2, '0')}-em++`);
      const step = JSON.parse(readFileSync(join(stepDirectory, 'step.json'), 'utf8'));
      const parsed = parseLinkArguments(null, link.kind, step.expandedArgs);
      const userExports = JSON.parse(readFileSync(parsed.exportsFile, 'utf8'));
      const settingsFile = join(stepDirectory, 'temp', 'emscripten_temp', 'emcc-00-settings.json');
      if (!existsSync(settingsFile)) throw new Error(`Recording ${name} has no EMCC_DEBUG settings (use --debug)`);
      const raw = readFileSync(settingsFile, 'utf8');
      const template = settingsTemplate(raw, { userExports, preJs: parsed.preJs, jsLibrary: parsed.jsLibraries[0], emscripten });
      // The driver's own export computation must reproduce the recorded wasm-ld exports.
      const settings = new Settings(JSON.parse(raw), settingsDefaults);
      const info = JSON.parse(readFileSync(join(stepDirectory, 'js-symbols.json'), 'utf8'));
      const jsSyms = addJsDependencies(settings, info);
      const { exports, exportIfDefined } = linkerExports(settings, jsSyms);
      const candidate = { emccFlags: parsed.flags, settings: template,
        pipeline: pipelineTemplate(link.pipeline, { emArgs: link.emArgs, exportsExpected: exports, ifDefinedExpected: exportIfDefined }) };
      if (!modes[link.kind]) modes[link.kind] = candidate;
      else if (!same(modes[link.kind], candidate)) {
        const differing = Object.keys(candidate).filter(key => !same(candidate[key], modes[link.kind][key]));
        throw new Error(`The ${link.kind} link of ${name} differs from the first fixture in ${differing.join(', ')}`);
      }
    }
  }
  if (!modes.probe || !modes.final) throw new Error('The recording needs both the probe and the final link');
  const nativeSigs = parseNativeSigs(readFileSync(join(emscripten, 'tools', 'native_sigs.py'), 'utf8'));
  const sigsText = JSON.stringify(nativeSigs, null, 1) + '\n';
  if (nativeSigsOut) writeFileSync(nativeSigsOut, sigsText);
  return { systemLibraryDirectory: 'wasm64-emscripten/pic',
    nativeSigs: { file: `native-sigs-emscripten-${recorded.fixtures[first].sdk.version}.json`,
      sha256: sha256(sigsText), entries: Object.keys(nativeSigs).length },
    settingsDefaults, modes };
}
