// Derives the Node link driver's edge recipe (src/link-driver/recipe-emscripten-
// <version>-edge.json) from one EMCC_DEBUG recording of the edge link (Phase 7,
// docs/EDGE.md): the settings file emcc wrote (emcc-00-settings.json) with the
// input-dependent values as placeholders, the emcc flags, the system libraries,
// and every tool emcc ran, as argument templates. The Node recipe supplies the
// compile section and the defaults the driver reads.
//   node scripts/edge/derive-edge-recipe.mjs RECORDING_DIR EMCC_LOG OUT.json [--mode edge|edge-asyncify]
// RECORDING_DIR has temp/emscripten_temp/ (EMCC_TEMP_DIR) and out/link-args.json
// (scripts/edge/record-edge-link.mjs makes one). The mode is the JSPI link
// (edge, the default) or the Asyncify link (edge-asyncify); an existing OUT.json
// keeps its other mode.
// scripts/edge/compare-edge-link.mjs checks a recipe: the Node driver must
// produce emcc's bytes.
import { readFileSync, writeFileSync, readdirSync, existsSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { readSettingsDefaults } from '../../src/link-driver/settings.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const argv0 = process.argv.slice(2);
const modeAt = argv0.indexOf('--mode');
const mode = modeAt < 0 ? 'edge' : argv0.splice(modeAt, 2)[1];
// The settings each mode was recorded with (src/link-driver/glue.mjs checkSupportedSettings).
const supportedByMode = {
  edge: { MODULARIZE: 1, ASYNCIFY: 2, MAIN_MODULE: 0, MEMORY64: 2 },
  'edge-asyncify': { MODULARIZE: 1, ASYNCIFY: 1, DYNCALLS: 1, MINIFY_WASM_IMPORTS_AND_EXPORTS: 1, MAIN_MODULE: 0, MEMORY64: 2 },
};
if (!supportedByMode[mode]) throw new Error(`Unknown recipe mode ${mode}`);
const [recordingArg, logArg, outArg] = argv0;
const recording = resolve(recordingArg), temp = join(recording, 'temp/emscripten_temp');
const log = readFileSync(resolve(logArg), 'utf8');
const base = JSON.parse(readFileSync(join(root, 'src/link-driver/recipe-emscripten-6.0.9.json'), 'utf8'));
const { args: linkArgs } = JSON.parse(readFileSync(join(recording, 'out/link-args.json'), 'utf8'));

// emcc flags as src/link-driver/link.mjs parseLinkArguments records them.
const emccFlags = [];
for (let i = 0; i < linkArgs.length; i++) {
  const arg = linkArgs[i];
  if (['--pre-js', '--js-library', '-o'].includes(arg)) { i++; continue; }
  if (arg.startsWith('-Wl,') || !arg.startsWith('-')) continue;
  emccFlags.push(arg.startsWith('-sEXPORTED_FUNCTIONS=@') ? '-sEXPORTED_FUNCTIONS=@<exports>' : arg);
}

// The commands emcc ran (EMCC_DEBUG "successfully executed" lines).
const executed = [...log.matchAll(/successfully executed (\S+) (.*)$/gm)].map(m => ({ program: m[1], args: m[2] }))
  .filter(c => !/--version|-print-targets|console\.log/.test(c.args));
const tokens = text => [...text.matchAll(/'([^']*)'|(\S+)/g)].map(m => m[1] ?? m[2]);
const emscripten = /(\S+)\/tools\/compiler\.mjs/.exec(log)[1];
const wasm = join(recording, 'out/program.wasm');
const placeholders = value => value.replaceAll(emscripten, '<emscripten>');
const features = argv => { const at = argv.indexOf('--mvp-features'); return at < 0 ? argv : [...argv.slice(0, at), '<features>']; };
const pipeline = [];
for (const command of executed) {
  const program = command.program.split('/').at(-1);
  const argv = tokens(command.args);
  if (program === 'node') {
    const script = argv[0].split('/').at(-1);
    if (script === 'compiler.mjs') pipeline.push(argv.includes('--symbols-only')
      ? { kind: 'symbols', program: 'node', args: ['<emscripten>/tools/compiler.mjs', '-', '--symbols-only'] }
      : { kind: 'glue', program: 'node', args: ['<emscripten>/tools/compiler.mjs', '-'] });
    else if (script === 'acorn-optimizer.mjs') {
      const pass = argv[2]?.startsWith('--') ? null : argv[2];
      const flags = argv.slice(pass ? 3 : 2).filter((arg, i, all) => arg !== '-o' && all[i - 1] !== '-o');
      if (pass === 'emitDCEGraph') pipeline.push({ kind: 'dce-graph', program: 'node', pass, minify: true,
        args: ['<emscripten>/tools/acorn-optimizer.mjs', '<info>', pass, ...flags] });
      else if (pass === 'applyDCEGraphRemovals' || pass === 'applyImportAndExportNameChanges') pipeline.push({ kind: 'acorn', program: 'node', pass, minify: true,
        args: ['<emscripten>/tools/acorn-optimizer.mjs', '<info>', pass, ...flags, '-o', '<js-out>'] });
      else if (pass) pipeline.push({ kind: 'acorn', program: 'node', pass, minify: true,
        args: ['<emscripten>/tools/acorn-optimizer.mjs', '<js>', pass, ...flags, '-o', '<js-out>'] });
      else {
        // tools/link.py modularize(): src/modularize.js, minified alone.
        const modularize = pipeline.at(-1);
        if (modularize?.kind !== 'modularize') throw new Error('A pass-less acorn run must follow the modularize preprocessing');
        modularize.minify = ['<emscripten>/tools/acorn-optimizer.mjs', '<js>', ...flags, '-o', '<js-out>'];
      }
    } else if (script === 'preprocessor.mjs') {
      if (argv[2] !== 'modularize.js') throw new Error(`Unrecorded preprocessor input ${argv[2]}`);
      pipeline.push({ kind: 'modularize', program: 'node', cwd: '<emscripten>/src', args: ['<emscripten>/tools/preprocessor.mjs', ...argv.slice(1)] });
    } else throw new Error(`Unrecorded node tool ${script}`);
  } else if (program === 'wasm-ld') {
    const rsp = readdirSync(join(recording, 'temp')).find(name => name.endsWith('.rsp.utf-8'));
    const args = tokens(readFileSync(join(recording, 'temp', rsp), 'utf8'));
    const template = [];
    // Lasm's inputs (objects, archives and -Wl, items such as --wrap and -Map,
    // in their order) run from the first one to the system library path.
    let inputs = 'before', exports = false;
    for (const arg of args) {
      if (inputs === 'inside') {
        if (arg.startsWith('-L')) inputs = 'after';
        else continue;
      }
      if (arg === wasm) template.push('<wasm>');
      else if (arg.endsWith('libemscripten_js_symbols.so')) template.push('<stub>');
      else if (inputs === 'before' && (arg.startsWith('--export=') || arg.startsWith('--export-if-defined='))) {
        if (!exports) { template.push('<exports>', '<export-if-defined>'); exports = true; }
      } else if (inputs === 'before' && (/\.(?:o|a)$/.test(arg) || arg.startsWith('--wrap='))) { template.push('<inputs>'); inputs = 'inside'; }
      else if (arg.startsWith('-L') && arg.includes('/sysroot/lib/')) template.push('-L<syslib>');
      else template.push(placeholders(arg));
    }
    pipeline.push({ kind: 'wasm-ld', program: 'wasm-ld', args: template });
  } else if (program === 'llvm-objcopy') pipeline.push({ kind: 'strip', program: 'llvm-objcopy',
    args: argv.map(arg => arg === wasm ? '<wasm>' : arg) });
  else if (program === 'wasm-opt') pipeline.push({ kind: argv.some(arg => arg.startsWith('--minify-imports')) ? 'minify-names' : 'wasm-opt',
    program: 'wasm-opt', args: features(argv.map(arg => arg === wasm ? '<wasm>' : arg)) });
  else if (program === 'wasm-emscripten-finalize') pipeline.push({ kind: 'finalize', program, args: argv.map(arg => arg === wasm ? '<wasm>' : arg) });
  else if (program === 'wasm-metadce') {
    const metadce = { kind: 'metadce', program: 'wasm-metadce', args: features(argv.map(arg => arg === wasm ? '<wasm>' : arg.startsWith('--graph-file=') ? '--graph-file=<graph>' : arg)) };
    // The DCE graph step's removals follow the metadce run in the pipeline.
    pipeline.splice(pipeline.length, 0, metadce);
  } else if (!/clang/.test(program)) throw new Error(`Unrecorded tool ${program}`);
}
const order = pipeline.map(step => step.kind).join(' ');
const expectedOrder = { edge: 'symbols wasm-ld strip glue wasm-opt acorn dce-graph metadce acorn acorn modularize',
  'edge-asyncify': 'symbols wasm-ld strip finalize glue wasm-opt acorn dce-graph metadce acorn acorn minify-names acorn modularize' }[mode];
if (order !== expectedOrder) throw new Error(`Unexpected ${mode} pipeline: ${order}`);

const settings = JSON.parse(readFileSync(join(temp, 'emcc-00-settings.json'), 'utf8'));
const libraryFile = settings.JS_LIBRARIES.at(-1);
settings.JS_LIBRARIES = settings.JS_LIBRARIES.map(file => file === libraryFile ? '<js-library>' : placeholders(file));
Object.assign(settings, { EXPORTED_FUNCTIONS: '<exported-functions>', PRE_JS_FILES: '<pre-js>', USER_EXPORTS: '<user-exports>' });
for (const [key, value] of Object.entries(settings))
  if (JSON.stringify(value).includes('/tmp/') || JSON.stringify(value).includes('/home/')) throw new Error(`Setting ${key} still names a path`);
const libraries = pipeline.find(step => step.kind === 'wasm-ld').args.filter(arg => /^-l/.test(arg)).map(arg => `lib${arg.slice(2)}.a`);
// The defaults of every setting the driver may read: the SDK's own defaults.
const defaults = readSettingsDefaults(emscripten);
// Both modes share one recipe file: the system libraries must agree (the edge
// runtime package carries one set, scripts/edge/build-edge-extras.mjs).
const existing = existsSync(resolve(outArg)) ? JSON.parse(readFileSync(resolve(outArg), 'utf8')) : null;
const modes = { ...(existing?.link.modes ?? {}) };
modes[mode] = { output: '.mjs', supported: supportedByMode[mode], emccFlags, settings, pipeline };
const known = existing?.sysroot.libraries ?? libraries;
if (existing && (known.length !== libraries.length || known.some(name => !libraries.includes(name))))
  throw new Error(`The ${mode} link uses other system libraries than the recipe's: ${libraries.join(' ')}`);
const recipe = { schema: base.schema, kind: base.kind, emscripten: base.emscripten, sdk: base.sdk,
  recordedFrom: { platform: `${process.platform}-${process.arch}`, node: process.version, by: 'scripts/edge/derive-edge-recipe.mjs' },
  compile: base.compile,
  sysroot: { libraries: known, usedBy: Object.fromEntries(known.map(name => [name, ['edge']])),
    source: 'the edge runtime package (scripts/edge/build-edge-extras.mjs)' },
  link: { systemLibraryDirectory: 'wasm64-emscripten', nativeSigs: base.link.nativeSigs, settingsDefaults: defaults,
    modes: Object.fromEntries(Object.keys(supportedByMode).filter(name => modes[name]).map(name => [name, modes[name]])) },
  toolchain: base.toolchain };
writeFileSync(resolve(outArg), JSON.stringify(recipe, null, 1) + '\n');
console.log(JSON.stringify({ order, libraries, flags: emccFlags.length, settings: Object.keys(settings).length }));
