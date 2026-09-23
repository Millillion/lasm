// Native tool provisioning acceptance only. This is not a Wasm application pass.
import assert from 'node:assert/strict';
import { mkdir, mkdtemp, writeFile, readFile } from 'node:fs/promises';
import { resolve, join, delimiter, dirname } from 'node:path';
import { execFileSync } from 'node:child_process';
import { createReadStream } from 'node:fs';
import { Readable } from 'node:stream';
import { provisionLean } from '../src/managed-lean.mjs';

const base = resolve(process.argv[2] ?? '.work/managed-lean-acceptance');
await mkdir(base, { recursive: true });
const project = await mkdtemp(join(base, 'project-'));
await writeFile(join(project, 'lean-toolchain'), 'leanprover/lean4:v4.34.0\n');
await writeFile(join(project, 'lakefile.toml'), 'name = "managedAcceptance"\nversion = "0.1.0"\n');
const main = join(project, 'Main.lean');
await writeFile(main, 'def main (args : List String) : IO Unit := do\n  IO.println s!"managed Lean: {String.intercalate "," args}"\n');
const options = { cache: join(base, 'cache') };
// Local replay retains the identical pinned checksum checks after a failed
// download/extraction probe; it is not an alternate compiler identity.
if (process.argv[3]) options.fetch = async () => new Response(Readable.toWeb(createReadStream(resolve(process.argv[3]))));
const started = Date.now();
const tools = await provisionLean(main, options);
const firstMilliseconds = Date.now() - started;
const reused = await provisionLean(main, options);
assert.equal(reused.cacheHit, true);
assert.equal(reused.identity, tools.identity);
// Exclude any globally installed Lean, Elan, SDK or system C compiler from PATH.
const env = { ...process.env, PATH: [join(tools.prefix, 'bin'), dirname(process.execPath)].join(delimiter) };
delete env.LEAN; delete env.LEAN_SYSROOT; delete env.LEAN_PATH; delete env.LEAN_SRC_PATH;
const run = (program, args) => execFileSync(program, args, { cwd: project, env,
  encoding: 'utf8', timeout: 120_000, maxBuffer: 1024 * 1024, windowsHide: true }).trim();
assert.equal(run(tools.lean, ['--run', main, 'one', 'two']), 'managed Lean: one,two');
assert.equal(run(tools.lake, ['--no-cache', '--keep-toolchain', 'env', 'lean', '--run', main, 'lake']), 'managed Lean: lake');
const version = run(tools.lean, ['--version']);
assert.match(version, /4\.34\.0/);
assert.match(await readFile(join(tools.prefix, 'LICENSE'), 'utf8'), /Apache/);
const report = { scope: 'Native Lean/Lake provisioning, not compiled-Wasm application acceptance',
  recordedAt: new Date().toISOString(), platform: `${process.platform}-${process.arch}`,
  node: process.version, lean: version, commit: tools.commit, identity: tools.identity,
  firstCacheHit: tools.cacheHit, verifiedReuse: reused.cacheHit, firstMilliseconds,
  recordedCacheEntries: Object.keys(tools.receipt.files).length,
  installedBytes: Object.values(tools.receipt.files).reduce((n, item) => n + (item.bytes ?? 0), 0),
  archive: tools.receipt.artifact, nativeMain: 'passed', lakeMain: 'passed', notices: 'preserved' };
await writeFile(join(base, 'result.json'), JSON.stringify(report, null, 2) + '\n');
console.log(JSON.stringify(report, null, 2));
