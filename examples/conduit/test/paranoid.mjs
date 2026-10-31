// Lean's strongest proof check for Conduit (Linux only): exports every
// declaration the proofs depend on (`leanexport Proofs`) and replays the
// export through Lean's kernel and the external checkers Lean 4.35.0 ships,
// `lake check --from-export … --paranoid` (leanchecker-paranoid, lean4lean,
// nanoda, con-leche, con-ron, in Lake's bwrap sandbox), which accepts only if
// every checker does and only the standard axioms are used.
//
// Run after `npm run proofs` (which builds Proofs/ with Lasm's Lean). Lasm's
// toolchain does not include the external checkers, so this downloads the
// official Lean 4.35.0 release (same commit as Lasm's Lean; SHA-256 checked)
// into the tool cache. Needs `bwrap` and unprivileged user namespaces.
import { execFileSync } from 'node:child_process';
import { createHash } from 'node:crypto';
import { createWriteStream, existsSync, mkdirSync, readFileSync, statSync } from 'node:fs';
import { homedir } from 'node:os';
import { dirname, join } from 'node:path';
import { pipeline } from 'node:stream/promises';
import { Readable } from 'node:stream';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const release = {
  url: 'https://github.com/leanprover/lean4/releases/download/v4.35.0/lean-4.35.0-linux.tar.zst',
  sha256: '7289597a44543246c9227b8cae501767e095ce17f6d448b95fc4a8dc97268f6d',
  dir: 'lean-4.35.0-linux',
};
if (process.platform !== 'linux' || process.arch !== 'x64') {
  console.error('The paranoid check runs on linux-x64 only (Lake\'s sandbox is Linux-only).');
  process.exit(2);
}

const cache = join(process.env.XDG_CACHE_HOME ?? join(homedir(), '.cache'), 'lasm', 'conduit-paranoid');
mkdirSync(cache, { recursive: true });
const official = join(cache, release.dir);
if (!existsSync(join(official, 'bin', 'lake'))) {
  const archive = join(cache, 'lean.tar.zst');
  console.error(`[paranoid] downloading ${release.url}`);
  const response = await fetch(release.url);
  if (!response.ok) throw new Error(`download failed: ${response.status}`);
  await pipeline(Readable.fromWeb(response.body), createWriteStream(archive));
  const digest = createHash('sha256').update(readFileSync(archive)).digest('hex');
  if (digest !== release.sha256) throw new Error(`SHA-256 mismatch: ${digest}`);
  execFileSync('tar', ['--zstd', '-xf', archive, '-C', cache], { stdio: 'inherit' });
}

const { provisionLean } = await import('@lasm/cli/src/managed-lean.mjs');
const lasmLean = await provisionLean(join(root, 'Conduit.lean'), { modules: 'extended' });
const lasmLib = join(dirname(dirname(lasmLean.lake)), 'lib', 'lean');
const version = bin => execFileSync(bin, ['--version'], { encoding: 'utf8' }).trim();
const a = version(join(official, 'bin', 'lean')), b = version(join(dirname(lasmLean.lake), 'lean'));
if (a.match(/commit (\w+)/)?.[1] !== b.match(/commit (\w+)/)?.[1]) throw new Error(`different Lean builds: ${a} / ${b}`);

const env = { ...process.env, LEAN_PATH: [lasmLib, join(root, '.lake', 'build', 'lib', 'lean')].join(':'),
  PATH: `${join(official, 'bin')}:${process.env.PATH}` };
for (const key of Object.keys(env)) if (/^(?:LAKE_|ELAN_)/.test(key)) delete env[key];
const exportFile = join(cache, 'proofs.ndjson');
console.error('[paranoid] leanexport Proofs');
execFileSync('sh', ['-c', `"${join(official, 'bin', 'leanexport')}" Proofs > "${exportFile}"`], { cwd: root, env, stdio: 'inherit' });
console.error(`[paranoid] ${(statSync(exportFile).size / 2 ** 20).toFixed(0)} MiB exported; lake check --paranoid`);
const started = Date.now();
execFileSync(join(official, 'bin', 'lake'), ['check', '--from-export', exportFile, '--paranoid'],
  { cwd: root, env, stdio: 'inherit' });
console.log(`All of Lean's kernels accept the proofs (${((Date.now() - started) / 1000).toFixed(0)} s).`);
