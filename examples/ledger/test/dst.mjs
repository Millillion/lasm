// Ledger's deterministic simulation (docs/TESTING.md#deterministic-simulation-of-the-example-apps):
// the server's own code, compiled (Sim.lean), in a simulated world
// (test/dst/world.mjs) of clients, network, database and clock decided by one
// seed. A failure prints its seed and a one-line repro.
//
//   node test/dst.mjs [--seed N | --seeds N [--first N] | --minutes M]
//                     [--faults none|normal|heavy] [--check-determinism] [--keep-going] [--verbose]
//                     [--target node|workers|chromium|firefox|webkit]
//
// Needs `npm run build:sim`. With --target, the same simulation runs the
// server's code as built for Cloudflare Workers (`npm run build:sim-workers`;
// served by wrangler dev, which must be on PATH) or for a browser (`npm run
// build:sim-browser`; in that headless browser of the pinned Playwright),
// with the world in this process (scripts/sim/remote-host.mjs); a seed's
// trace is the same as on Node.
import { spawnSync } from 'node:child_process';
import { existsSync } from 'node:fs';
import { join } from 'node:path';
import { root } from './server.mjs';

const args = process.argv.slice(2);
const at = args.indexOf('--target');
const target = at >= 0 ? args.splice(at, 2)[1] : 'node';
const world = join(root, 'test/dst/world.mjs');
let run;
if (target === 'node') {
  const main = join(root, 'dist/sim/main.mjs');
  if (!existsSync(main)) { console.error('dist/sim is missing: run `npm run build:sim` first'); process.exit(2); }
  run = spawnSync(process.execPath, [main, world, ...args], { stdio: 'inherit' });
} else {
  const dist = join(root, target === 'workers' ? 'dist/sim-workers' : 'dist/sim-browser');
  if (!existsSync(dist)) { console.error(`${dist} is missing: run \`npm run build:sim-${target === 'workers' ? 'workers' : 'browser'}\` first`); process.exit(2); }
  run = spawnSync(process.execPath, [join(root, '../../scripts/sim/remote-host.mjs'), '--target', target, '--dist', dist, world, ...args], { stdio: 'inherit', cwd: root });
}
process.exit(run.status ?? 1);
