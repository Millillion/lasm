#!/usr/bin/env node
// Native, product-independent tier check. Extracts the tier archives into a
// core prefix (binaries + core data) and an extended prefix (+ extended data),
// extracts the complete pinned archive, then on this host:
//  - runs every executable shipped in the binaries archive;
//  - requires Lean-generated C to be byte-identical to the complete toolchain for
//    an `import Std` program (whose proof runs bv_decide/cadical), a program
//    importing Lean through a local module, and a small Lake project;
//  - loads Lake as a --plugin, as Lasm does for Lake projects;
//  - checks that the core prefix reports a missing `Lean` import by root name.
//
//   node scripts/lean-dist/check-tiers.mjs --tiers <dir> --upstream <archive> --work <dir> \
//     [--platform linux-x64] [--version 4.34.1] [--report file]
// --full-prefix <dir> instead of --upstream reuses an extracted copy of the pinned archive.
import assert from 'node:assert/strict';
import { createReadStream, readFileSync } from 'node:fs';
import { readFile, readdir, mkdir, writeFile, rm, link, symlink, readlink } from 'node:fs/promises';
import { join, resolve, delimiter, toNamespacedPath } from 'node:path';
import { spawnSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { pipeline } from 'node:stream/promises';
import { createZstdDecompress, createGunzip } from 'node:zlib';
import { parseArgs } from 'node:util';
import { fileURLToPath } from 'node:url';
import { x as extractTar } from 'tar';

const { values: options } = parseArgs({ options: {
  tiers: { type: 'string' }, upstream: { type: 'string' }, work: { type: 'string' },
  platform: { type: 'string', default: `${process.platform}-${process.arch}` }, version: { type: 'string', default: '4.34.1' },
  report: { type: 'string' }, 'full-prefix': { type: 'string' }, phase: { type: 'string', default: 'all' },
} });
if (!['all', 'extract', 'check'].includes(options.phase)) throw new Error('--phase must be all, extract or check');
if (!options.upstream && !options['full-prefix'] && options.phase !== 'check') throw new Error('--upstream or --full-prefix is required');
for (const name of ['tiers', 'work']) if (!options[name]) throw new Error(`--${name} is required`);
const root = fileURLToPath(new URL('../../', import.meta.url));
const catalog = JSON.parse(readFileSync(join(root, 'src/toolchains.json'), 'utf8'));
const release = catalog.lean[options.version], upstream = release.artifacts[options.platform];
const windows = options.platform.startsWith('win32'), darwin = options.platform.startsWith('darwin');
const tiers = resolve(options.tiers), work = resolve(options.work);
const exe = name => windows ? name + '.exe' : name;
const sha256 = bytes => createHash('sha256').update(bytes).digest('hex');

// Archives come from the repackager's reports; the upstream archive is pinned.
const reports = [];
for (const name of (await readdir(tiers)).filter(name => /^report-.*\.json$/.test(name)))
  reports.push(JSON.parse(await readFile(join(tiers, name), 'utf8')));
const binReport = reports.find(report => report.platform === options.platform);
assert.ok(binReport, `No repackaging report for ${options.platform}`);
const archive = piece => {
  for (const report of [binReport, ...reports]) {
    const found = report.archives.find(item => item.piece === piece && item.written);
    if (found) return found;
  }
  throw new Error(`No written ${piece} archive`);
};
const corePieces = ['core-init', 'core-std'], extendedPieces = ['ext-meta', 'ext-elab', 'ext-rest'];
async function verified(item) {
  const file = join(tiers, item.name), bytes = await readFile(file);
  assert.equal(bytes.length, item.bytes, `${item.name} size`);
  assert.equal(sha256(bytes), item.sha256, `${item.name} checksum`);
  return file;
}
async function unpack(file, directory, format = 'tar.zst') {
  await mkdir(directory, { recursive: true });
  await pipeline(createReadStream(file), format === 'tar.gz' ? createGunzip() : createZstdDecompress(),
    extractTar({ cwd: directory, strip: 1, strict: true, preservePaths: false, preserveOwner: false }));
  // Bound dirty page-cache bursts, which the resource guard reports as memory pressure.
  if (!windows) spawnSync('sync', { stdio: 'ignore' });
}
const prefixes = { core: join(work, 'core'), extended: join(work, 'extended'),
  full: options['full-prefix'] ? resolve(options['full-prefix']) : join(work, 'full') };
// --phase extract (unguarded file extraction), then --phase check (compilers
// under the resource guard, whose Linux accounting includes page cache).
if (options.phase !== 'check') {
await rm(work, { recursive: true, force: true });
for (const piece of ['bin', ...corePieces]) await unpack(await verified(archive(piece)), prefixes.core);
// The extended prefix shares the core files through hard links, as Lasm's cache does.
async function linkTree(from, to) {
  await mkdir(to, { recursive: true });
  for (const entry of await readdir(from, { withFileTypes: true })) {
    const source = join(from, entry.name), destination = join(to, entry.name);
    if (entry.isDirectory()) await linkTree(source, destination);
    else if (entry.isSymbolicLink()) await symlink(await readlink(source), destination);
    else await link(source, destination);
  }
}
await linkTree(prefixes.core, prefixes.extended);
for (const piece of extendedPieces) await unpack(await verified(archive(piece)), prefixes.extended);
// --full-prefix: a previously extracted copy of the same pinned archive (local validation).
if (!options['full-prefix']) {
  const upstreamBytes = await readFile(options.upstream);
  assert.equal(sha256(upstreamBytes), upstream.sha256, 'Pinned upstream archive checksum');
  await unpack(resolve(options.upstream), prefixes.full, upstream.format);
}
}
if (options.phase === 'extract') process.exit(0);
await rm(join(work, 'fixtures'), { recursive: true, force: true });
const full = spawnSync(join(prefixes.full, 'bin', exe('lean')), ['--githash'], { encoding: 'utf8' });
assert.equal(full.stdout?.trim(), release.commit, 'Reference prefix is the pinned release');

const result = { schema: 1, platform: options.platform, version: options.version, node: process.versions.node,
  started: new Date().toISOString(), archives: [...new Set(['bin', ...corePieces, ...extendedPieces])].map(piece => archive(piece).name), checks: [] };
const environment = prefix => {
  const env = { ...process.env };
  for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/i.test(key) || windows && key.toUpperCase() === 'PATH') delete env[key];
  Object.assign(env, { LEAN_NUM_THREADS: '1', LEAN_STACK_SIZE_KB: '8192',
    PATH: [join(prefix, 'bin'), resolve(process.execPath, '..'), process.env.PATH ?? process.env.Path].filter(Boolean).join(delimiter) });
  if (windows) Object.assign(env, { LEAN_SYSROOT: toNamespacedPath(prefix), LEAN_PATH: toNamespacedPath(join(prefix, 'lib/lean')) });
  return env;
};
const run = (prefix, program, args, cwd, extra = {}) => {
  const outcome = spawnSync(join(prefix, 'bin', exe(program)), args, { cwd, env: { ...environment(prefix), ...extra },
    encoding: 'utf8', timeout: 900_000, maxBuffer: 64 * 1024 * 1024, windowsHide: true });
  if (outcome.error) throw outcome.error;
  return outcome;
};
const ok = (outcome, what) => { assert.equal(outcome.status, 0, `${what} failed (${outcome.status} ${outcome.signal}):\n${outcome.stdout}\n${outcome.stderr}`); return outcome.stdout; };

// 1. Every shipped executable loads with only the archive's own libraries.
for (const [program, args] of [['lean', ['--githash']], ['lake', ['--version']], ['cadical', ['--version']], ['leanir', ['--help']]]) {
  const outcome = run(prefixes.core, program, args, work);
  if (program !== 'leanir') ok(outcome, `${program} ${args.join(' ')}`);
  else assert.ok(outcome.signal === null && outcome.status !== null && !/error while loading|Library not loaded|was not found/i.test(outcome.stderr), `leanir failed to load: ${outcome.stderr}`);
  if (program === 'lean') assert.equal(outcome.stdout.trim(), release.commit);
  result.checks.push({ check: `${program} loads`, status: outcome.status, output: (outcome.stdout || outcome.stderr).split(/\r?\n/)[0] });
}

// 2. Fixtures, compiled independently with each prefix.
const pin = `leanprover/lean4:v${options.version}\n`;
const fixtures = {
  standalone: { 'lean-toolchain': pin, 'Util.lean': 'def twice (n : Nat) : Nat := 2 * n\n',
    'Hello.lean': 'import Std\nimport Util\nopen Std\n\ntheorem andSelf (x : BitVec 8) : x &&& x = x := by bv_decide\n\n' +
      'def main (args : List String) : IO Unit := do\n  let m : HashMap String Nat := args.foldl (fun m a => m.insert a (m.getD a 0 + 1)) {}\n' +
      '  IO.println s!"{twice m.size}"\n' },
  meta: { 'lean-toolchain': pin, 'Helper.lean': 'import Lean\nopen Lean\n\ndef helperName : Name := `hello.world\n',
    'Meta.lean': 'import Helper\n\ndef main : IO Unit := IO.println (toString helperName)\n' },
  lakeproj: { 'lean-toolchain': pin, 'lakefile.lean': 'import Lake\nopen Lake DSL\n\npackage app\n\nlean_lib App\n\n@[default_target]\nlean_exe app where\n  root := `Main\n',
    'App.lean': 'def App.count (xs : List String) : Nat := xs.length\n', 'Main.lean': 'import App\ndef main : IO Unit := IO.println s!"{App.count ["x", "y"]}"\n' },
};
async function materialize(name, kind) {
  const directory = join(work, 'fixtures', kind, name);
  await mkdir(directory, { recursive: true });
  for (const [file, text] of Object.entries(fixtures[name])) await writeFile(join(directory, file), text);
  return directory;
}
async function standalone(prefix, kind, name, modules) {
  const directory = await materialize(name, kind), out = join(directory, 'out');
  await mkdir(out);
  const extra = { LEAN_SRC_PATH: directory, LEAN_PATH: [toNamespacedPath(out), environment(prefix).LEAN_PATH].filter(Boolean).join(delimiter) };
  const generated = {};
  for (const module of modules) {
    ok(run(prefix, 'lean', ['--src-deps', module + '.lean'], directory, extra), `${kind} ${module} --src-deps`);
    ok(run(prefix, 'lean', ['-j1', '-s8192', '-R', directory, '-Dcompiler.postponeCompile=false', '-o', join(out, module + '.olean'),
      '-c', join(out, module + '.c'), module + '.lean'], directory, extra), `${kind} ${module}`);
    generated[module + '.c'] = await readFile(join(out, module + '.c'));
  }
  return generated;
}
async function lake(prefix, kind) {
  const directory = await materialize('lakeproj', kind), generated = {};
  const plugin = windows ? join(prefix, 'bin/libLake_shared.dll') : join(prefix, 'lib/lean', `libLake_shared.${darwin ? 'dylib' : 'so'}`);
  const entry = JSON.parse(ok(run(prefix, 'lean', ['-j1', '-s8192', '--plugin=' + plugin, '--run', join(root, 'src/lake-module.lean'),
    join(directory, 'Main.lean')], directory), `${kind} Lake plugin`));
  assert.ok(typeof entry?.module === 'string' || Array.isArray(entry?.imports), `Unexpected Lake module identity ${JSON.stringify(entry)}`);
  for (const target of ['+App', '+Main']) {
    const file = JSON.parse(ok(run(prefix, 'lake', ['--no-cache', '--keep-toolchain', '--quiet', '--json', 'query', target + ':c'], directory), `${kind} lake ${target}`));
    generated[target] = await readFile(resolve(directory, file));
  }
  return generated;
}
const compare = (name, left, right) => {
  assert.deepEqual(Object.keys(left), Object.keys(right));
  for (const file of Object.keys(left)) assert.ok(left[file].equals(right[file]), `${name}: ${file} differs from the complete toolchain`);
  result.checks.push({ check: `${name}: generated C identical to the complete toolchain`, files: Object.fromEntries(Object.entries(left).map(([file, bytes]) => [file, sha256(bytes)])) });
};
compare('import Std with bv_decide (core prefix)', await standalone(prefixes.core, 'core', 'standalone', ['Util', 'Hello']),
  await standalone(prefixes.full, 'full', 'standalone', ['Util', 'Hello']));
compare('import Lean through a local module (extended prefix)', await standalone(prefixes.extended, 'extended', 'meta', ['Helper', 'Meta']),
  await standalone(prefixes.full, 'full', 'meta', ['Helper', 'Meta']));
compare('Lake project (extended prefix)', await lake(prefixes.extended, 'extended'), await lake(prefixes.full, 'full'));

// 3. The core prefix cannot resolve Lean; Lasm detects this by the module root.
const directory = await materialize('meta', 'detect');
const missing = run(prefixes.core, 'lean', ['--src-deps', 'Helper.lean'], directory, { LEAN_SRC_PATH: directory });
assert.notEqual(missing.status, 0);
assert.match(missing.stdout + missing.stderr, /unknown module prefix 'Lean'/);
result.checks.push({ check: 'core prefix reports the missing Lean root', status: missing.status });

result.finished = new Date().toISOString();
result.passed = true;
if (options.report) await writeFile(options.report, JSON.stringify(result, null, 2) + '\n');
console.log(JSON.stringify(result, null, 2));
