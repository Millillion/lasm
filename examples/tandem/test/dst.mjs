// Tandem's deterministic simulation (docs/TESTING.md#deterministic-simulation-of-the-example-apps):
// the editor's state machine and the sync server, compiled (Sim.lean), in a
// simulated world (test/dst/world.mjs) of browsers, network, database and
// users decided by one seed. A failure prints its seed and a one-line repro.
//
//   node test/dst.mjs [--seed N | --seeds N [--first N] | --minutes M]
//                     [--faults none|normal|heavy] [--check-determinism] [--keep-going] [--verbose]
//
// Needs `npm run build:sim`.
import { spawnSync } from 'node:child_process';
import { existsSync } from 'node:fs';
import { join } from 'node:path';
import { root } from './server.mjs';

const main = join(root, 'dist/sim/main.mjs');
if (!existsSync(main)) { console.error('dist/sim is missing: run `npm run build:sim` first'); process.exit(2); }
const run = spawnSync(process.execPath, [main, join(root, 'test/dst/world.mjs'), ...process.argv.slice(2)], { stdio: 'inherit' });
process.exit(run.status ?? 1);
