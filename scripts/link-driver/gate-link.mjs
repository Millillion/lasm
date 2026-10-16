#!/usr/bin/env node
// Step gate for the Phase 2 Node link driver (docs/TOOLCHAIN_SLIMMING.md,
// milestone C). Replays each recorded em++ link of an EMCC_DEBUG recording
// (record-emcc.mjs --debug) with src/link-driver/link.mjs, on the recorded
// inputs (objects, export list, pre-js files, runtime, frozen cache), and
// compares every intermediate emcc saved (emcc-NN-*) and the emitted program,
// glue and link map with the recording, in pipeline order. The first
// divergence of each file is located (Wasm section/function, or text line).
//
//   node scripts/full-lean/run-bounded.mjs --report .work/<id>.json -- \
//     python3 scripts/full-lean/base-pages.py node scripts/link-driver/gate-link.mjs \
//       --recording .work/link-driver/ref-c-debug --output .work/link-driver/<new> \
//       [--recipe FILE] [--fixture NAME]... [--mode probe|final]...
// Exit status: 0 every compared file identical, 1 otherwise.
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync } from 'node:fs';
import { basename, join, relative, resolve } from 'node:path';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { wasmLocation } from './compare.mjs';
import { linkWithNode, bundledNativeSigs } from '../../src/link-driver/link.mjs';
import { parseRecipe, bundledRecipe } from '../../src/link-driver/compile.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const { values: options } = parseArgs({ options: {
  recording: { type: 'string' }, output: { type: 'string' }, recipe: { type: 'string' },
  fixture: { type: 'string', multiple: true, default: [] }, mode: { type: 'string', multiple: true, default: [] },
} });
if (!options.recording || !options.output) throw new Error('Supply --recording and --output');
const output = resolve(options.output);
if (!['.cache', '.work'].some(base => !relative(join(root, base), output).startsWith('..'))) throw new Error('--output must be under .cache/ or .work/');
if (existsSync(output)) throw new Error('Use a new --output directory');
const { ensureResourceGuard } = await import('../full-lean/resource-guard.mjs');
await ensureResourceGuard();
const recipe = options.recipe ? parseRecipe(readFileSync(options.recipe, 'utf8')) : bundledRecipe();
const nativeSigs = options.recipe
  ? JSON.parse(readFileSync(join(resolve(options.recipe, '..'), recipe.link.nativeSigs.file), 'utf8')) : bundledNativeSigs(recipe);

const recording = resolve(options.recording);
const run = JSON.parse(readFileSync(join(recording, 'run.json'), 'utf8'));
const recorded = JSON.parse(readFileSync(join(recording, 'recipe.json'), 'utf8'));

function firstDifference(a, b) {
  const length = Math.min(a.length, b.length);
  for (let i = 0; i < length; i++) if (a[i] !== b[i]) return i;
  return a.length === b.length ? -1 : length;
}
function compare(name, expected, actual, normalize) {
  if (!existsSync(actual)) return { name, status: 'missing' };
  let a = readFileSync(expected), b = readFileSync(actual);
  if (normalize) { a = Buffer.from(normalize.expected(a.toString('utf8'))); b = Buffer.from(normalize.actual(b.toString('utf8'))); }
  const offset = firstDifference(a, b);
  if (offset < 0) return { name, status: 'identical', bytes: a.length, ...(normalize ? { normalized: true } : {}) };
  const result = { name, status: 'different', offset, expectedBytes: a.length, actualBytes: b.length };
  if (a.readUInt32LE(0) === 0x6d736100) Object.assign(result, { expected: wasmLocation(a, offset), actual: wasmLocation(b, offset) });
  else {
    const text = a.toString('utf8').slice(0, offset), line = text.split('\n').length;
    Object.assign(result, { line, expectedLine: a.toString('utf8').split('\n')[line - 1]?.slice(0, 300),
      actualLine: b.toString('utf8').split('\n')[line - 1]?.slice(0, 300) });
  }
  return result;
}

const report = { schema: 1, kind: 'lasm-node-link-gate', recording, recipe: options.recipe ?? 'bundled', startedAt: new Date().toISOString(), fixtures: {} };
for (const { name } of run.fixtures) {
  if (options.fixture.length && !options.fixture.includes(name)) continue;
  const build = JSON.parse(readFileSync(join(recording, name, 'build.json'), 'utf8'));
  const sdk = { prefix: build.paths.sdk, driver: build.paths.emscripten, env: { ...process.env, SOURCE_DATE_EPOCH: '315532800' } };
  for (const link of recorded.fixtures[name].links) {
    if (options.mode.length && !options.mode.includes(link.kind)) continue;
    const stepDirectory = join(recording, name, 'steps', `${String(link.step).padStart(2, '0')}-em++`);
    const step = JSON.parse(readFileSync(join(stepDirectory, 'step.json'), 'utf8'));
    const directory = join(output, name, link.kind), dist = join(directory, 'dist');
    mkdirSync(dist, { recursive: true });
    // Same inputs; outputs (program, glue, map) redirected into the gate directory.
    let mapName;
    const args = step.expandedArgs.map((arg, index, all) => {
      if (all[index - 1] === '-o') return join(dist, basename(arg));
      if (arg.startsWith('-Wl,-Map=')) { mapName = basename(arg.slice(9)); return `-Wl,-Map=${join(directory, mapName)}`; }
      return arg;
    });
    const started = Date.now();
    let error;
    try {
      linkWithNode({ recipe, mode: link.kind, args, sdk, cache: build.paths.emcache, temp: join(directory, 'temp'),
        intermediates: join(directory, 'intermediates'), nativeSigs, stdio: ['ignore', 'inherit', 'inherit'] });
    } catch (caught) { error = caught.stack ?? String(caught); }
    const seconds = (Date.now() - started) / 1000;
    const files = [];
    const recordedTemp = join(stepDirectory, 'temp', 'emscripten_temp');
    for (const file of readdirSync(recordedTemp).filter(file => /^emcc-\d\d-/.test(file)).sort())
      files.push(compare(`intermediate ${file}`, join(recordedTemp, file), join(directory, 'intermediates', file)));
    const ours = existsSync(join(directory, 'intermediates')) ? readdirSync(join(directory, 'intermediates')) : [];
    for (const file of ours.filter(file => !existsSync(join(recordedTemp, file)))) files.push({ name: `intermediate ${file}`, status: 'extra' });
    const emitted = join(stepDirectory, 'emitted');
    files.push(compare('program.wasm', join(emitted, 'program.wasm'), join(dist, 'program.wasm')));
    files.push(compare('program.cjs', join(emitted, 'program.cjs'), join(dist, 'program.cjs')));
    files.push(compare(mapName, join(emitted, mapName), join(directory, mapName), {
      expected: text => text.replaceAll(build.paths.build, '<build>'), actual: text => text.replaceAll(directory, '<build>').replaceAll(build.paths.build, '<build>') }));
    const different = files.filter(file => file.status !== 'identical');
    report.fixtures[`${name}/${link.kind}`] = { identical: !error && !different.length, seconds, error, compared: files.length,
      firstDivergence: different[0] ?? null, files };
    console.log(`${name} ${link.kind}: ${!error && !different.length ? 'IDENTICAL' : 'DIFFERENT'} (${files.length} files, ${seconds.toFixed(1)} s)`);
    if (error) console.log(`  error: ${error.split('\n').slice(0, 4).join(' | ')}`);
    for (const file of files) console.log(`  ${file.status === 'identical' ? '=' : 'x'} ${file.name} ${file.status === 'identical' ? file.bytes + ' bytes' : JSON.stringify(file)}`);
  }
}
report.finishedAt = new Date().toISOString();
report.identical = Object.values(report.fixtures).every(result => result.identical);
writeFileSync(join(output, 'gate.json'), JSON.stringify(report, null, 2) + '\n');
process.exit(report.identical ? 0 : 1);
