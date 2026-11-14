#!/usr/bin/env node
// Checks every wasm-ld link recorded under LASM_TEST_LINK_EVIDENCE directories
// against its map (wasm-ld-map.mjs; docs/TESTING.md#translation-validation-of-the-toolchain).
//
//   node scripts/link-validation/check-wasm-ld.mjs --evidence DIR [--evidence DIR2 ...]
//     [--min-links N] [--self-test K] [--relocations] [--report FILE] [--seed S]
//
// --min-links: fail when fewer links were recorded (a build served from the
// cache, or a switch that stopped working, would otherwise pass vacuously).
// --self-test K: K seeded corruptions of each map (a function moved or resized
// or dropped, two functions swapped, a segment, a data symbol or a global moved,
// a section resized, an export's symbol moved), each of which the checker must
// report: a checker that stops seeing a class of error fails here.
// --relocations: also each function against its input object's body and
// relocations (wasm-ld-relocations.mjs), with the objects the evidence kept and
// the archives at the paths the map names.
import { readFileSync, readdirSync, existsSync, writeFileSync, appendFileSync, statSync } from 'node:fs';
import { join } from 'node:path';
import { checkLink, readModule } from './wasm-ld-map.mjs';
import { corruptions, prng } from './corrupt-map.mjs';
import { checkRelocations, inputReader } from './wasm-ld-relocations.mjs';

const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.lastIndexOf(name); return i >= 0 ? args[i + 1] : fallback; };
const evidence = args.flatMap((arg, i) => args[i - 1] === '--evidence' ? [arg] : []);
const minLinks = Number(option('--min-links', '1')), selfTest = Number(option('--self-test', '0'));
const relocations = args.includes('--relocations');
const report = option('--report'), seed = Number(option('--seed', '1'));
if (!evidence.length) { console.error('usage: check-wasm-ld.mjs --evidence DIR [--min-links N] [--self-test K] [--report FILE]'); process.exit(2); }

// Every directory under the roots that holds a link (a map and its module).
const links = [];
const walk = (directory, depth) => {
  if (existsSync(join(directory, 'link.map')) && existsSync(join(directory, 'linked.wasm'))) { links.push(directory); return; }
  if (depth === 0) return;
  for (const name of readdirSync(directory).sort()) if (statSync(join(directory, name)).isDirectory()) walk(join(directory, name), depth - 1);
};
for (const root of evidence) if (existsSync(root)) walk(root, 3);

const results = [];
let failed = false;
const random = prng(seed);
for (const directory of links) {
  const meta = existsSync(join(directory, 'evidence.json')) ? JSON.parse(readFileSync(join(directory, 'evidence.json'), 'utf8')) : {};
  const bytes = readFileSync(join(directory, 'linked.wasm')), mapText = readFileSync(join(directory, 'link.map'), 'utf8');
  const started = performance.now();
  const { problems, stats } = checkLink(bytes, mapText);
  // Relocations (wasm-ld-relocations.mjs): each function against its input object.
  let relocationStats = null;
  if (relocations && !problems.length) {
    const wraps = (meta.args ?? []).flatMap(arg => /^(?:-Wl,)?--wrap=(.+)$/.exec(arg)?.slice(1) ?? []);
    const copies = Object.fromEntries(Object.entries(meta.objects ?? {}).map(([original, copy]) => [original, join(directory, copy)]));
    try {
      const checked = checkRelocations(bytes, mapText, { objectBytes: inputReader(file => readFileSync(file), copies), wraps });
      relocationStats = checked.stats;
      for (const p of checked.problems) problems.push(`relocations: ${p}`);
      if (!checked.stats.functions) problems.push('relocations: no function could be checked against its input object');
    } catch (error) { problems.push(`relocations: ${error.message}`); }
  }
  // The module itself is valid WebAssembly (V8's validator: every index in range, every body well typed).
  try { if (!WebAssembly.validate(bytes)) problems.push('the module does not validate (V8)'); }
  catch (error) { problems.push(`the module does not validate (V8): ${error.message}`); }
  const result = { directory, kind: meta.kind, bytes: bytes.length, problems, stats, relocationStats, ms: Math.round(performance.now() - started), missed: [] };
  if (selfTest > 0 && !problems.length) {
    const names = readModule(bytes).exports.filter(e => e.kind === 'func').map(e => e.name);
    for (const { kind, text } of corruptions(mapText, random, selfTest, names)) {
      const found = checkLink(bytes, text).problems;
      if (!found.length) result.missed.push(kind);
    }
    result.selfTests = selfTest;
  }
  if (problems.length || result.missed.length) failed = true;
  results.push(result);
  console.log(`${problems.length || result.missed.length ? 'FAIL' : 'ok  '} ${meta.kind ?? '?'} ${directory}: ${stats.functions} functions, ${stats.segments} segments (+${stats.bssSegments} zero-filled), ${stats.chunks} data chunks, ${stats.dataSymbols} data symbols, ${stats.globals} globals, ${stats.exportsResolved} exports resolved (${stats.exportsUnnamed} by no map symbol), ${result.ms} ms`);
  if (relocationStats) console.log(`     relocations: ${relocationStats.functions} functions against their inputs (${relocationStats.functionsMissingInput} without one), ${relocationStats.relocations} relocations, ${relocationStats.attributed} attributed, ${relocationStats.unattributed} unattributed`);
  for (const p of problems) console.log(`     ${p}`);
  for (const k of result.missed) console.log(`     self-test: the checker missed a corrupted map (${k})`);
}
if (links.length < minLinks) { failed = true; console.log(`FAIL: ${links.length} links recorded, at least ${minLinks} expected`); }

const kinds = {};
for (const r of results) { const k = kinds[r.kind ?? '?'] ??= { links: 0, failed: 0, functions: 0 }; k.links++; k.functions += r.stats.functions; if (r.problems.length || r.missed.length) k.failed++; }
const summary = `### wasm-ld against its map\n\n${results.length} links checked${selfTest ? `, ${selfTest} corrupted maps each (self-test)` : ''}: **${results.filter(r => r.problems.length || r.missed.length).length} failed**.\n\n`
  + '| Link | Links | Functions | Failed |\n| --- | --- | --- | --- |\n'
  + Object.entries(kinds).map(([k, v]) => `| ${k} | ${v.links} | ${v.functions} | ${v.failed} |`).join('\n') + '\n';
if (process.env.GITHUB_STEP_SUMMARY) appendFileSync(process.env.GITHUB_STEP_SUMMARY, summary + '\n');
if (report) writeFileSync(report, JSON.stringify({ seed, selfTest, minLinks, results }, (k, v) => typeof v === 'bigint' ? v.toString() : v, 1) + '\n');
process.exit(failed ? 1 : 0);
