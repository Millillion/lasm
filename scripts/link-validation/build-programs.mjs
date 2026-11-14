#!/usr/bin/env node
// Builds programs with an installed Lasm and LASM_TEST_LINK_EVIDENCE set, so that
// every wasm-ld link (and Binaryen step) they run leaves its evidence for
// check-wasm-ld.mjs (docs/TESTING.md#translation-validation-of-the-toolchain).
//
//   node scripts/link-validation/build-programs.mjs --lasm LASM_MJS --work DIR --evidence DIR
//     [--seed S] [--programs N] [--feature-programs N] [--cases N]
//     [--targets node,wasi,deno,browser-asyncify] [--profiles release,dev] [--examples a:t1+t2,b:t]
//
// Programs: the differential tester's generated core programs and feature
// programs (scripts/differential/generate.mjs, features.mjs) from --seed, and
// the named examples (examples/<name>/Main.lean, each with its own targets).
// A failed build fails the run: it leaves no link to check.
import { spawnSync } from 'node:child_process';
import { cpSync, mkdirSync, writeFileSync, existsSync, readdirSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import * as g from '../differential/generate.mjs';
import { genFeatureProgram } from '../differential/features.mjs';

const root = fileURLToPath(new URL('../../', import.meta.url));
const args = process.argv.slice(2);
const option = (name, fallback) => { const i = args.lastIndexOf(name); return i >= 0 ? args[i + 1] : fallback; };
const lasm = option('--lasm'), work = resolve(option('--work', '.work/link-validation')), evidence = resolve(option('--evidence', join(work, 'evidence')));
const seed = Number(option('--seed', '1')), programs = Number(option('--programs', '1')), featurePrograms = Number(option('--feature-programs', '0'));
const cases = Number(option('--cases', '40'));
const targets = option('--targets', 'node,wasi,deno').split(',').filter(Boolean);
const profiles = option('--profiles', 'release').split(',').filter(Boolean);
const examples = option('--examples', '').split(',').filter(Boolean).map(spec => { const [name, t] = spec.split(':'); return { name, targets: (t ?? 'node').split('+') }; });
if (!lasm) { console.error('usage: build-programs.mjs --lasm LASM_MJS [--work DIR] [--evidence DIR] …'); process.exit(2); }

// How each target is built (the differential tester's own flags).
const TARGET_FLAGS = {
  node: [], wasi: ['--target', 'wasi'], 'wasi-http': ['--target', 'wasi-http'], fastly: ['--target', 'fastly'],
  deno: ['--target', 'deno'], bun: ['--target', 'bun'], workers: ['--target', 'workers'],
  'browser-jspi': ['--target', 'browser', '--suspend', 'jspi'], 'browser-asyncify': ['--target', 'browser', '--suspend', 'asyncify'],
};
for (const t of [...targets, ...examples.flatMap(e => e.targets)]) if (!TARGET_FLAGS[t]) { console.error(`unknown target ${t}`); process.exit(2); }

const env = { ...process.env, CI: '1', BROWSER: 'none', LASM_EDITOR: '0', NO_COLOR: '1' };
const builds = [];
function build(name, source, target, profile) {
  const dir = join(work, 'builds', `${name}-${target}-${profile}`);
  mkdirSync(dir, { recursive: true });
  cpSync(source, join(dir, 'Main.lean'));
  const out = join(evidence, `${name}-${target}-${profile}`);
  const started = performance.now();
  const run = spawnSync(process.execPath, [lasm, 'build', 'Main.lean', ...TARGET_FLAGS[target], ...(profile === 'dev' ? ['--dev'] : [])],
    { cwd: dir, env: { ...env, LASM_TEST_LINK_EVIDENCE: out }, encoding: 'utf8', timeout: 30 * 60_000, maxBuffer: 64 << 20 });
  const links = existsSync(out) ? readdirSync(out).length : 0;
  const entry = { name, target, profile, ok: run.status === 0, links, seconds: Math.round((performance.now() - started) / 1000) };
  builds.push(entry);
  console.log(`${entry.ok ? 'built' : 'FAILED'} ${name} ${target} ${profile}: ${links} recorded steps, ${entry.seconds} s`);
  if (!entry.ok) console.log(((run.stdout ?? '') + (run.stderr ?? '') + (run.error ? String(run.error) : '')).slice(-4000));
}

const sources = [];
for (let i = 0; i < programs; i++) {
  const s = seed + i, dir = join(work, 'programs', `core-${s}`);
  mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'Main.lean'), g.renderProgram(g.genProgram(s, { cases })));
  sources.push({ name: `core-${s}`, source: join(dir, 'Main.lean'), targets });
}
for (let i = 0; i < featurePrograms; i++) {
  const s = seed + i, dir = join(work, 'programs', `feature-${s}`);
  mkdirSync(dir, { recursive: true });
  writeFileSync(join(dir, 'Main.lean'), g.renderProgram(genFeatureProgram(s, { cases })));
  sources.push({ name: `feature-${s}`, source: join(dir, 'Main.lean'), targets });
}
for (const e of examples) sources.push({ name: `example-${e.name}`, source: join(root, 'examples', e.name, 'Main.lean'), targets: e.targets });

for (const profile of profiles)
  for (const { name, source, targets: list } of sources)
    for (const target of list) build(name, source, target, profile);

writeFileSync(join(work, 'builds.json'), JSON.stringify({ seed, programs, featurePrograms, cases, profiles, builds }, null, 1) + '\n');
const failed = builds.filter(b => !b.ok);
console.log(`${builds.length} builds, ${failed.length} failed, ${builds.reduce((n, b) => n + b.links, 0)} recorded steps`);
process.exit(failed.length ? 1 : 0);
