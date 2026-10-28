// Checks Conduit's proofs: builds the Conduit and Proofs libraries (every
// theorem in Proofs/) with Lean 4.35.0, then test/Axioms.lean, which fails
// unless every theorem uses only propext, Classical.choice and Quot.sound
// (no sorry). Uses Lasm's own Lean (the one `npm run build` downloads, from
// the tool cache); with elan, `lake build && lake env lean test/Axioms.lean`
// does the same.
import { execFileSync } from 'node:child_process';
import { dirname, join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
let lake;
try {
  const { provisionLean } = await import('@lasm/cli/src/managed-lean.mjs');
  const lean = await provisionLean(join(root, 'Conduit.lean'), { modules: 'extended',
    progress: ({ stage }) => stage && console.error(`[lean] ${stage}`) });
  lake = lean.lake;
} catch (error) {
  console.error(`Lasm's Lean is not available (${error.message}); using lake from PATH.`);
  lake = 'lake';
}
const env = { ...process.env };
for (const key of Object.keys(env)) if (/^(?:LEAN_|LAKE_|ELAN_)/.test(key)) delete env[key];
env.PATH = [dirname(lake), env.PATH].join(process.platform === 'win32' ? ';' : ':');
const run = args => execFileSync(lake, args, { cwd: root, env, encoding: 'utf8', stdio: ['ignore', 'pipe', 'pipe'],
  maxBuffer: 64 * 1024 * 1024 });
const started = Date.now();
try {
  process.stdout.write(run(['build', 'Conduit', 'Proofs']));
  const out = run(['env', 'lean', 'test/Axioms.lean']);
  process.stdout.write(out);
  if (/sorry/.test(out)) throw new Error('a proof uses sorry');
  console.log(`\nProofs checked in ${((Date.now() - started) / 1000).toFixed(0)} s.`);
} catch (error) {
  process.stdout.write(error.stdout ?? '');
  process.stderr.write(error.stderr ?? error.message);
  process.exitCode = 1;
}
