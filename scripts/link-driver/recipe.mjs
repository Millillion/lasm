#!/usr/bin/env node
// Link-recipe extraction from record-emcc.mjs runs (EMCC_DEBUG=1 recordings).
//
//   node scripts/link-driver/recipe.mjs RUN            (re)write RUN/recipe.json
//   node scripts/link-driver/recipe.mjs --combine OUT.json RUN [RUN...]
//                                     cross-fixture recipe comparison
//
// All absolute paths are replaced by placeholders (<build>, <work>, <runtime>,
// <lasm>, <sdk>, <emscripten>, <state>, <node>, <python>, <temp>, ...), so recipes
// from different directories, runs and machines compare directly.
import { existsSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { basename, join, resolve } from 'node:path';
import { createHash } from 'node:crypto';
import { execFileSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

export const recipeSchema = 1;
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');
const fileHash = file => { const bytes = readFileSync(file); return { bytes: bytes.length, sha256: sha256(bytes) }; };
const sourcePattern = /\.(?:c|cc|cpp|cxx|S|s)$/;

/** Split a command line printed by clang -### / emcc (double quotes, backslash escapes). */
export function splitCommand(line) {
  const words = []; let word = '', quoted = false, any = false;
  for (let i = 0; i < line.length; i++) {
    const c = line[i];
    if (quoted) {
      if (c === '\\' && i + 1 < line.length && '"\\$'.includes(line[i + 1])) word += line[++i];
      else if (c === '"') quoted = false; else word += c;
    } else if (c === '"') { quoted = true; any = true; }
    else if (c === ' ') { if (any || word) words.push(word); word = ''; any = false; }
    else word += c;
  }
  if (any || word) words.push(word);
  return words;
}
/** Python shlex.join output (single quotes; '"'"' for embedded quotes). */
export function splitShlex(line) {
  const words = []; let word = '', mode = '', any = false;
  for (let i = 0; i < line.length; i++) {
    const c = line[i];
    if (mode === "'") { if (c === "'") mode = ''; else word += c; }
    else if (mode === '"') { if (c === '"') mode = ''; else if (c === '\\' && i + 1 < line.length) word += line[++i]; else word += c; }
    else if (c === "'" || c === '"') { mode = c; any = true; }
    else if (c === ' ') { if (any || word) words.push(word); word = ''; any = false; }
    else word += c;
  }
  if (any || word) words.push(word);
  return words;
}
/** Emscripten response files: one argument per line, quoted when it has spaces. */
function parseEmscriptenResponse(text) {
  return text.split('\n').filter(Boolean).map(line => {
    if (line.startsWith('"') && line.endsWith('"')) line = line.slice(1, -1);
    return line.replace(/\\(.)/g, '$1');
  });
}

function normalizer(paths, extra = {}) {
  const roots = Object.entries({ ...paths, ...extra }).filter(([, value]) => typeof value === 'string' && value.length > 1)
    .map(([key, value]) => [key, value.replace(/[\\/]$/, '')])
    .sort((a, b) => b[1].length - a[1].length);
  const apply = text => { for (const [key, value] of roots) text = text.replaceAll(value, `<${key}>`); return text; };
  return value => typeof value === 'string' ? apply(value) : Array.isArray(value) ? value.map(item => apply(String(item))) : value;
}

function toolName(argv) {
  const program = basename(argv[0] ?? '');
  if (/^node(?:\.exe)?$/.test(program)) return 'node ' + basename(argv[1] ?? '');
  if (/^python/.test(program)) return 'python ' + basename(argv.find(arg => arg.endsWith('.py')) ?? '');
  return program;
}

/** Parse one link step's EMCC_DEBUG log into pipeline commands and system-library builds. */
function parseLinkLog(text, temp) {
  const commands = [], libraries = [], usingLibraries = [], including = [];
  let current, last;
  // Emscripten deletes its response files but logs their contents (EMCC_DEBUG).
  const responses = new Map(); let response;
  const lines = [];
  for (const line of text.split('\n')) {
    let match;
    if ((match = /^(?:root|response_file):WARNING: Creating response file (\S+) with following contents: (.*)$/.exec(line))) {
      response = [match[2]]; responses.set(match[1], response); continue;
    }
    if (response && !/^[A-Za-z_.]+:(?:DEBUG|INFO|WARNING|ERROR): /.test(line) && !/^ \S/.test(line)) { response.push(line); continue; }
    response = undefined; lines.push(line);
  }
  const expand = argv => argv.flatMap(arg => arg.startsWith('@') && responses.has(arg.slice(1))
    ? parseEmscriptenResponse(responses.get(arg.slice(1)).join('\n')) : arg.startsWith('@') && existsSync(arg.slice(1))
      ? parseEmscriptenResponse(readFileSync(arg.slice(1), 'utf8')) : [arg]);
  for (const line of lines) {
    let match;
    if ((match = /^cache:INFO: generating system (library|asset): (\S+?)\.\.\./.exec(line))) {
      current = { kind: match[1], file: match[2], commands: [] }; libraries.push(current);
    } else if ((match = /^shared:DEBUG: Running subprocess \d+\/\d+: (.*)$/.exec(line))) {
      // Space-joined (not quoted) by Emscripten; library build arguments contain no spaces.
      (current?.commands ?? commands).push(expand(match[1].split(' ')));
    } else if ((match = /^system_libs:INFO: compiled (\d+) inputs/.exec(line)) && current) {
      current.inputs = Number(match[1]); last = current; current = undefined;
    } else if ((match = /^utils:DEBUG: successfully executed (.*)$/.exec(line))) {
      const argv = expand(splitShlex(match[1]));
      const tool = toolName(argv);
      // Nested library-build compiler invocations are recorded with their library.
      // (archive creation runs emar through Python after the compile batches).
      const library = current ?? last;
      if ((tool.startsWith('python ') || tool === 'llvm-ar') && library) { library.commands.push(argv); continue; }
      if (/--version$|-print-targets$|^-e$/.test(argv.at(-1)) || argv[1] === '-e') continue;
      commands.push(argv);
    } else if ((match = /^emcc:DEBUG: using static library: (.*)$/.exec(line))) usingLibraries.push(match[1]);
    else if ((match = /^system_libs:DEBUG: including (\S+) \((\S+)\)/.exec(line))) including.push({ library: match[1], file: match[2] });
  }
  return { commands, libraries, usingLibraries, including };
}

function summarizeLibraryBuild(library, normalize) {
  const compiles = library.commands.filter(argv => argv.some(arg => sourcePattern.test(arg)));
  const archive = library.commands.find(argv => !argv.some(arg => sourcePattern.test(arg)));
  const flagSets = compiles.map(argv => argv.slice(1).filter(arg => !sourcePattern.test(arg)));
  const common = flagSets.length ? flagSets[0].filter(flag => flagSets.every(set => set.includes(flag))) : [];
  const sources = compiles.flatMap(argv => argv.filter(arg => sourcePattern.test(arg)))
    .map(source => source.replace(/^.*?\/system\//, 'system/'));
  return { kind: library.kind, file: library.file, inputs: library.inputs, compileBatches: compiles.length,
    commonFlags: normalize(common).map(flag => flag.replace(/=(?:\.\.\/)+derived\/[0-9a-f]+/, '=<emscripten-relative>')),
    batchSpecificFlags: flagSets.map(set => normalize(set.filter(flag => !common.includes(flag)))),
    archiveCommand: archive ? normalize(archive).filter(arg => !/\.o$/.test(arg)) : null, sources: sources.sort() };
}

function intermediates(directory) {
  if (!existsSync(directory)) return [];
  return readdirSync(directory).filter(name => name !== 'emscripten.lock').sort()
    .map(name => ({ name: name.replace(/(emcc_(?:acorn_info|dce_graph))_[a-z0-9_]{8}(\.\w+)$/, '$1_*$2').replace(/^tmp[a-z0-9_]{8}/, 'tmp*'), ...fileHash(join(directory, name)) }));
}

function settingsDiff(before, after) {
  const changed = {};
  for (const key of [...new Set([...Object.keys(before), ...Object.keys(after)])].sort())
    if (JSON.stringify(before[key]) !== JSON.stringify(after[key])) changed[key] = { before: before[key], after: after[key] };
  return changed;
}

function analyzeFixture(fixture) {
  const build = JSON.parse(readFileSync(join(fixture, 'build.json'), 'utf8'));
  const stepsRoot = join(fixture, 'steps');
  const result = { name: build.name, fixture: build.fixture, lean: build.lean, runtime: build.runtime, sdk: build.sdk,
    node: build.node, requirements: build.requirements, compiles: [], links: [] };
  for (const name of readdirSync(stepsRoot).sort()) {
    const directory = join(stepsRoot, name), step = JSON.parse(readFileSync(join(directory, 'step.json'), 'utf8'));
    const temp = join(directory, 'temp'), normalize = normalizer(build.paths, { temp, step: directory });
    if (step.tool === 'emcc' && step.args.includes('-c')) {
      const dry = existsSync(join(directory, 'emcc-dry-run.log')) ? readFileSync(join(directory, 'emcc-dry-run.log'), 'utf8').split('\n') : [];
      const clang = dry.find(line => /^ \S*\/clang(?:\.exe)? /.test(line));
      const cc1 = dry.find(line => /^ "\S*clang[^"]*" "-cc1"/.test(line));
      const object = step.args[step.args.indexOf('-o') + 1];
      result.compiles.push({ step: step.index, source: normalize(step.args.find(arg => sourcePattern.test(arg))),
        emccArgs: normalize(step.args), clangDriver: clang ? normalize(splitCommand(clang.trim())) : null,
        cc1: cc1 ? normalize(splitCommand(cc1.trim())) : null,
        object: { name: basename(object), ...(existsSync(object) ? fileHash(object) : {}) } });
      continue;
    }
    const log = parseLinkLog(readFileSync(join(directory, 'stderr.log'), 'utf8'), temp);
    const emscriptenTemp = join(temp, 'emscripten_temp');
    const settingsFiles = existsSync(emscriptenTemp) ? readdirSync(emscriptenTemp).filter(file => file.endsWith('-settings.json')).sort() : [];
    const settings = settingsFiles.map(file => JSON.parse(readFileSync(join(emscriptenTemp, file), 'utf8')));
    // The JS symbol inventory is compiler.mjs --symbols-only over the first settings file.
    let jsSymbols = null;
    const symbolsCommand = log.commands.find(argv => toolName(argv) === 'node compiler.mjs' && argv.includes('--symbols-only'));
    if (symbolsCommand && settingsFiles.length) {
      const output = execFileSync(symbolsCommand[0], symbolsCommand.slice(1), { input: readFileSync(join(emscriptenTemp, settingsFiles[0])),
        cwd: build.paths.emscripten, maxBuffer: 256 * 1024 * 1024 });
      writeFileSync(join(directory, 'js-symbols.json'), output);
      const parsed = JSON.parse(output);
      jsSymbols = { file: 'js-symbols.json', sha256: sha256(output), keys: Object.keys(parsed),
        definedSymbols: parsed.definedSymbols?.length, deps: parsed.deps ? Object.keys(parsed.deps).length : undefined };
    }
    const wasmLd = log.commands.find(argv => toolName(argv) === 'wasm-ld');
    const sysroot = join(build.paths.state, 'cache', 'sysroot');
    const searchPath = (wasmLd ?? []).filter(arg => arg.startsWith('-L')).map(arg => arg.slice(2));
    const resolveLibrary = name => searchPath.map(directory => join(directory, `lib${name}.a`)).find(existsSync);
    const systemInputs = (wasmLd ?? []).flatMap(arg => arg.startsWith('-l') ? [resolveLibrary(arg.slice(2)) ?? arg]
      : arg.startsWith(sysroot) && /\.(?:a|o)$/.test(arg) ? [arg] : [])
      .map(file => file.startsWith(sysroot) ? { file: file.slice(sysroot.length + 1), ...fileHash(file) } : { file: normalize(file), unresolved: true });
    const emitted = join(directory, 'emitted');
    result.links.push({ step: step.index, kind: step.expandedArgs.includes('-O0') ? 'probe' : 'final',
      emArgs: normalize(step.expandedArgs),
      pipeline: log.commands.map(argv => ({ tool: toolName(argv), argv: normalize(argv) })),
      systemLibrariesSelected: log.including, systemInputs,
      systemLibrariesBuilt: log.libraries.map(library => summarizeLibraryBuild(library, normalize)),
      userLibraries: normalize(log.usingLibraries),
      settings: settings.length ? { files: settingsFiles, beforeMetadata: settingsFiles[0], afterMetadata: settingsFiles.at(-1),
        changedByMetadata: settingsDiff(settings[0], settings.at(-1)) } : null,
      jsSymbols, intermediates: intermediates(emscriptenTemp),
      emitted: existsSync(emitted) ? Object.fromEntries(readdirSync(emitted).sort().map(file => [file, fileHash(join(emitted, file))])) : {} });
  }
  result.outputs = Object.fromEntries(Object.entries(build.build).filter(([name]) => /\.(?:o|map)$|^dist\//.test(name)));
  return result;
}

export function analyzeRun(output) {
  const run = JSON.parse(readFileSync(join(output, 'run.json'), 'utf8'));
  const recipe = { schema: recipeSchema, kind: 'lasm-emcc-link-recipe', run: basename(output), node: run.node,
    platform: run.platform, debug: run.debug, fixtures: {} };
  for (const { name } of run.fixtures) recipe.fixtures[name] = analyzeFixture(join(output, name));
  writeFileSync(join(output, 'recipe.json'), JSON.stringify(recipe, null, 2) + '\n');
  return { recipe: join(output, 'recipe.json'), fixtures: Object.keys(recipe.fixtures) };
}

/** Replace fixture-derived inputs so recipes of different programs compare. */
function shape(fixture) {
  const generic = value => JSON.parse(JSON.stringify(value)
    .replace(/<work>\/lean\/[^"]+?\.c/g, '<generated.c>').replace(/module-\d+\.o/g, 'module-N.o'));
  const dedupe = list => list.filter((item, index) => index === 0 || JSON.stringify(item) !== JSON.stringify(list[index - 1]));
  return {
    compileArgs: dedupe(fixture.compiles.map(compile => generic(compile.cc1?.filter((arg, i, all) => arg !== '-main-file-name' && all[i - 1] !== '-main-file-name')))),
    links: fixture.links.map(link => ({ kind: link.kind, emArgs: generic(link.emArgs),
      pipeline: link.pipeline.map(({ tool, argv }) => ({ tool, argv: generic(argv)
        .map(arg => arg.replace(/(emcc_(?:acorn_info|dce_graph))_[a-z0-9_]{8}(\.\w+)/g, '$1_*$2').replace(/tmp[a-z0-9_]{8}/g, 'tmp*')) })),
      systemInputs: link.systemInputs })),
  };
}

export function combine(runs) {
  const fixtures = {};
  for (const run of runs) {
    const recipe = JSON.parse(readFileSync(join(run, 'recipe.json'), 'utf8'));
    for (const [name, fixture] of Object.entries(recipe.fixtures)) fixtures[`${recipe.run}/${name}`] = fixture;
  }
  const names = Object.keys(fixtures), reference = names[0], shapes = Object.fromEntries(names.map(name => [name, shape(fixtures[name])]));
  const differences = {};
  for (const name of names.slice(1)) {
    const a = shapes[reference], b = shapes[name], list = [];
    if (JSON.stringify(a.compileArgs) !== JSON.stringify(b.compileArgs)) list.push('compile cc1 arguments');
    for (let i = 0; i < Math.max(a.links.length, b.links.length); i++) {
      const x = a.links[i], y = b.links[i];
      if (!x || !y) { list.push(`link ${i} missing`); continue; }
      if (JSON.stringify(x.emArgs) !== JSON.stringify(y.emArgs)) list.push(`${x.kind} link em++ arguments`);
      if (JSON.stringify(x.pipeline.map(c => c.tool)) !== JSON.stringify(y.pipeline.map(c => c.tool))) list.push(`${x.kind} link tool sequence`);
      else x.pipeline.forEach((command, j) => {
        if (JSON.stringify(command.argv) !== JSON.stringify(y.pipeline[j].argv)) {
          const extra = y.pipeline[j].argv.filter(arg => !command.argv.includes(arg)), missing = command.argv.filter(arg => !y.pipeline[j].argv.includes(arg));
          list.push({ link: x.kind, tool: command.tool, onlyInReference: missing.slice(0, 20), onlyHere: extra.slice(0, 20) });
        }
      });
      if (JSON.stringify(x.systemInputs) !== JSON.stringify(y.systemInputs)) list.push(`${x.kind} link system inputs`);
    }
    differences[name] = list;
  }
  return { schema: recipeSchema, kind: 'lasm-emcc-link-recipe-comparison', reference, fixtures: names,
    referenceShape: shapes[reference], differences };
}

if (resolve(process.argv[1] ?? '') === fileURLToPath(import.meta.url)) {
  const args = process.argv.slice(2);
  if (args[0] === '--combine') {
    const [, out, ...runs] = args;
    writeFileSync(out, JSON.stringify(combine(runs.map(run => resolve(run))), null, 2) + '\n');
    console.log(`wrote ${out}`);
  } else for (const run of args) console.log(JSON.stringify(analyzeRun(resolve(run))));
}
