// The multi-replica simulation against a live server (Clients.lean, the
// browser's own replica logic): several processes, each with several
// replicas, edit one document at once over an unreliable network (replicas
// go offline and come back, syncs are not sent, replies are lost), while the
// server is killed with SIGKILL and restarted on the same database. At the
// end every replica must hold the server's text: nothing acknowledged was
// lost, nothing was applied twice, everyone converged.
//
//   node test/simulate.mjs [--seed N] [--rounds N] [--url URL | --command CMD | --platform P] [--name NAME]
//
// Needs `npm run build:clients` (and `npm run build` for the default server).
import { spawn } from 'node:child_process';
import { join } from 'node:path';
import { args, root, startTandem, rng } from './server.mjs';

const a = args();
const argv = process.argv.slice(2);
const rounds = Number(argv[argv.indexOf('--rounds') + 1] || 0) || 3;
const seed0 = Number(a.seed ?? Math.floor(Math.random() * 2 ** 31));
console.log(`simulate: seed ${seed0}, ${rounds} rounds${a.name ? ` (${a.name})` : ''}`);
const server = await startTandem(a);
const R = rng(seed0);

function client(doc, seed, reps, steps, first) {
  return new Promise((resolve, reject) => {
    const child = spawn(process.execPath, [join(root, 'dist/clients/main.mjs'), server.base, doc, String(seed), String(reps),
      String(steps), String(first)], { stdio: ['ignore', 'pipe', 'inherit'] });
    let out = '';
    child.stdout.on('data', d => { out += d; });
    child.on('exit', code => code === 0 ? resolve(out) : reject(new Error(`clients exited with ${code}:\n${out}`)));
  });
}

const fromHex = h => Buffer.from(h, 'hex').toString('utf8');
let failures = 0;
try {
  for (let round = 0; round < rounds; round++) {
    const doc = `sim-${seed0}-${round}`;
    const procs = 2 + R.int(3), reps = 2 + R.int(3), steps = 150 + R.int(250);
    const started = Date.now();
    const runs = Array.from({ length: procs }, (_, p) => client(doc, R.int(2 ** 30), reps, steps, 1 + p * 100));
    // Kill the server (no clean shutdown) and bring it back, while the clients run.
    let kills = 0;
    if (server.kill) {
      const chaos = (async () => {
        for (let k = 0; k < 2; k++) {
          await new Promise(r => setTimeout(r, 1000 + R.int(3000)));
          await server.kill(); kills++;
          await new Promise(r => setTimeout(r, 300 + R.int(700)));
          await server.restart();
        }
      })();
      await chaos;
    }
    const outs = await Promise.all(runs);
    const texts = new Map();
    const pendings = [];
    for (const out of outs) for (const line of out.trim().split('\n')) {
      const [kind, id, pending, hex] = line.split(' ');
      if (kind === 'text') { texts.set(id, fromHex(hex ?? '')); pendings.push(Number(pending)); }
    }
    const serverText = await (await fetch(`${server.base}/doc/${doc}/text`)).text();
    const distinct = new Set(texts.values());
    const ok = distinct.size === 1 && texts.values().next().value === serverText && pendings.every(p => p === 0);
    console.log(`round ${round}: ${procs} processes × ${reps} replicas, ${steps} steps each, ${kills} server kills, ` +
      `${serverText.length} characters, ${((Date.now() - started) / 1000).toFixed(1)} s: ${ok ? 'converged' : 'DIVERGED'}`);
    if (!ok) {
      failures++;
      console.log(`  server: ${JSON.stringify(serverText)}`);
      for (const [id, t] of texts) console.log(`  replica ${id}: ${JSON.stringify(t)}`);
    }
  }
} finally {
  await server.stop();
}
if (failures) { console.error(`simulate: ${failures} rounds diverged (seed ${seed0})`); process.exitCode = 1; }
else console.log('simulate: every round converged');
