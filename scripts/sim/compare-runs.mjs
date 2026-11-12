// Compares a simulation run on another target (remote-host.mjs) with Node's
// run of the same seeds: every seed must end the same way, with the same
// summary and the same trace digest, since the world and the seeds are the
// same and only the engine running the app's compiled code differs.
//
//   node scripts/sim/compare-runs.mjs --seeds TARGET.log    prints the seeds TARGET.log ran, comma-separated
//   node scripts/sim/compare-runs.mjs TARGET.log NODE.log   fails on any difference
//
// A log is the output of `test/dst.mjs` with every seed printed (`--print-seeds`,
// or a list of seeds).
import { readFileSync } from 'node:fs';

/** seed -> its result line (`ok …` or `FAILED …`), in order. */
function results(file) {
  const out = new Map();
  for (const line of readFileSync(file, 'utf8').split('\n')) {
    const m = /^ {2}seed (\d+): (ok .*|FAILED.*)$/.exec(line);
    if (m) out.set(Number(m[1]), m[2]);
  }
  return out;
}

const args = process.argv.slice(2);
if (args[0] === '--seeds') {
  const seeds = [...results(args[1]).keys()];
  if (!seeds.length) { console.error(`${args[1]}: no seed results`); process.exit(1); }
  console.log(seeds.join(','));
} else if (args.length === 2) {
  const [target, node] = args.map(results);
  if (!target.size) { console.error(`${args[0]}: no seed results`); process.exit(1); }
  let differ = 0;
  for (const [seed, line] of target) {
    const other = node.get(seed);
    if (other === line) continue;
    differ++;
    console.log(`seed ${seed} differs:\n  ${args[0]}: ${line}\n  ${args[1]}: ${other ?? '(not run)'}`);
  }
  console.log(`${target.size} seeds: ${differ ? `${differ} differ from Node` : 'every result and trace digest equals Node\'s'}.`);
  process.exitCode = differ ? 1 : 0;
} else {
  console.error('usage: node scripts/sim/compare-runs.mjs --seeds TARGET.log | TARGET.log NODE.log');
  process.exit(2);
}
