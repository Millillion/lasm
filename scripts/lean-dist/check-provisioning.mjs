#!/usr/bin/env node
// Product-path tier check: provision the tiered Lean through Lasm's real provisioning
// path, run its programs on this host, and require Lean-generated C identical to
// the complete upstream archive for representative standalone and Lake inputs.
//
//   node scripts/lean-dist/check-provisioning.mjs --tiers <dir> --upstream <archive> \
//     --cache <empty cache dir> --work <dir> [--platform linux-x64] [--report file]
//
// <dir> holds the archives and the report-*.json files written by build-tiers.mjs.
// The cache directory must be dedicated to this check.
import assert from 'node:assert/strict';
import { readFile, readdir, mkdir, writeFile, rm } from 'node:fs/promises';
import { join, resolve, basename, dirname } from 'node:path';
import { spawnSync } from 'node:child_process';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { openAsBlob } from 'node:fs';
import { provisionLean, toolchainCatalog } from '../../src/managed-lean.mjs';
import { applicationSources, nativeLeanEnvironment } from '../../src/application-sources.mjs';
import { tierCatalogEntry } from './catalog.mjs';
import { executableName } from '../../src/platform.mjs';

const { values: options } = parseArgs({ options: {
  tiers: { type: 'string' }, upstream: { type: 'string' }, cache: { type: 'string' }, work: { type: 'string' },
  platform: { type: 'string', default: `${process.platform}-${process.arch}` }, version: { type: 'string', default: '4.34.1' },
  report: { type: 'string' }, 'full-prefix': { type: 'string' },
} });
if (!options.upstream && !options['full-prefix']) throw new Error('--upstream or --full-prefix is required');
for (const name of ['tiers', 'cache', 'work']) if (!options[name]) throw new Error(`--${name} is required`);
const tiers = resolve(options.tiers), cache = resolve(options.cache), work = resolve(options.work);
const reports = [];
for (const name of (await readdir(tiers)).filter(name => /^report-.*\.json$/.test(name)).sort())
  reports.push(JSON.parse(await readFile(join(tiers, name), 'utf8')));
const base = 'https://lasm-tier-check.invalid/';
const entry = tierCatalogEntry(reports, base, { platforms: [options.platform] });
const release = toolchainCatalog.lean[options.version];
const catalog = { ...toolchainCatalog, lean: { [options.version]: { ...release, tiers: entry } } };
const upstream = release.artifacts[options.platform];
const requests = [];
const fetch = async url => {
  requests.push(url);
  const file = url === upstream.url && options.upstream ? resolve(options.upstream) : url.startsWith(base) ? join(tiers, basename(new URL(url).pathname)) : null;
  if (!file) return new Response('unexpected URL', { status: 404 });
  return new Response(await openAsBlob(file));
};
await rm(work, { recursive: true, force: true });
await mkdir(work, { recursive: true });

// Inputs: an ordinary standard-library program whose proof runs bv_decide
// (cadical), a program importing Lean, and a small Lake project.
const fixture = async (path, text) => { await mkdir(dirname(join(work, path)), { recursive: true }); await writeFile(join(work, path), text); };
const pin = `leanprover/lean4:v${options.version}\n`;
await fixture('standalone/lean-toolchain', pin);
await fixture('standalone/Util.lean', 'def twice (n : Nat) : Nat := 2 * n\n');
await fixture('standalone/Hello.lean', `import Std
import Util
open Std

theorem andSelf (x : BitVec 8) : x &&& x = x := by bv_decide

def main (args : List String) : IO Unit := do
  let m : HashMap String Nat := args.foldl (fun m a => m.insert a (m.getD a 0 + 1)) {}
  IO.println s!"{twice m.size} {(m.toList.map (·.1)).length}"
`);
await fixture('meta/lean-toolchain', pin);
await fixture('meta/Helper.lean', 'import Lean\nopen Lean\n\ndef helperName : Name := `hello.world\n');
await fixture('meta/Meta.lean', 'import Helper\n\ndef main : IO Unit := IO.println (toString helperName)\n');
await fixture('lakeproj/lean-toolchain', pin);
await fixture('lakeproj/lakefile.lean', 'import Lake\nopen Lake DSL\n\npackage app\n\nlean_lib App\n\n@[default_target]\nlean_exe app where\n  root := `Main\n');
await fixture('lakeproj/App.lean', 'def App.count (xs : List String) : Nat := xs.length\n');
await fixture('lakeproj/Main.lean', 'import App\ndef main : IO Unit := IO.println s!"{App.count ["x", "y"]}"\n');

const [platformName, arch] = options.platform.split('-');
const common = { catalog, cache, fetch, platform: platformName, arch, log() {}, download: { sleep: async () => {} } };
const result = { schema: 1, platform: options.platform, node: process.versions.node, started: new Date().toISOString(), cases: [] };
for (const [name, file, tier] of [['standalone import Std with bv_decide', 'standalone/Hello.lean', 'core'],
  ['standalone importing Lean through a local import', 'meta/Meta.lean', 'extended'],
  ['Lake project', 'lakeproj/Main.lean', 'extended']]) {
  const source = join(work, file);
  const tiered = await provisionLean(source, common);
  assert.equal(tiered.distribution, 'tiers');
  assert.equal(tiered.tier, tier, `${name} selected the ${tiered.tier} tier`);
  // --full-prefix reuses an extracted copy of the same pinned archive.
  const reference = options['full-prefix'] && resolve(options['full-prefix']);
  const full = reference ? { ...tiered, prefix: reference, executionPrefix: reference, lean: join(reference, 'bin', executableName('lean', platformName)),
    lake: join(reference, 'bin', executableName('lake', platformName)) } : await provisionLean(source, { ...common, distribution: 'full' });
  assert.equal(spawnSync(full.lean, ['--githash'], { encoding: 'utf8' }).stdout.trim(), release.commit);
  const outputs = {};
  for (const [kind, lean] of [['tiers', tiered], ['full', full]]) {
    const out = join(work, 'generated', kind, basename(dirname(source)));
    await mkdir(out, { recursive: true });
    const generated = applicationSources(source, lean, out, { log() {} });
    outputs[kind] = await Promise.all(generated.sources.map(async file => ({ file: basename(file), bytes: await readFile(file) })));
    // Lake keeps build outputs inside the project; regenerate them per prefix.
    await rm(join(dirname(source), '.lake'), { recursive: true, force: true });
    await rm(join(dirname(source), 'lean'), { recursive: true, force: true });
  }
  assert.deepEqual(outputs.tiers.map(item => item.file), outputs.full.map(item => item.file));
  for (let i = 0; i < outputs.tiers.length; i++)
    assert.ok(outputs.tiers[i].bytes.equals(outputs.full[i].bytes), `${name}: ${outputs.tiers[i].file} differs from the full upstream toolchain`);
  result.cases.push({ name, tier, prefix: tiered.identity, generated: outputs.tiers.map(item => ({ file: item.file, bytes: item.bytes.length })) });
}
// Every executable in the binaries archive must load on this host.
const extended = await provisionLean(join(work, 'lakeproj/Main.lean'), common);
const env = nativeLeanEnvironment(extended);
for (const [program, args] of [['lean', ['--version']], ['lake', ['--version']], ['leanir', ['--help']], ['cadical', ['--version']]]) {
  const run = spawnSync(join(extended.executionPrefix, 'bin', executableName(program, platformName)), args,
    { env, encoding: 'utf8', timeout: 60_000, windowsHide: true });
  assert.ifError(run.error);
  assert.ok(run.status === 0 || program === 'leanir' && run.status !== null && !run.signal, `${program} ${args.join(' ')} failed: ${run.status} ${run.stderr}`);
  result.cases.push({ name: `${program} loads`, status: run.status, output: (run.stdout || run.stderr).split(/\r?\n/)[0] });
}
result.requests = requests.map(url => basename(new URL(url).pathname));
result.finished = new Date().toISOString();
result.passed = true;
if (options.report) await writeFile(options.report, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
