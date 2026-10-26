// Cold start of built Lasm servers under the CPU shares function platforms
// give (docs/BENCHMARKS.md "Cold start on a fraction of a CPU"). AWS Lambda
// gives a function CPU in proportion to its memory (one vCPU at 1,769 MB, so
// about 0.29 vCPU at 512 MB); Linux enforces such shares with a CFS quota,
// which systemd applies here (CPUQuota) to a fresh `node dist/main.mjs` per
// run. Measures the time from process start to the first answered GET /health
// and the CPU time the process used until then, for each environment variant
// (for example LASM_THREAD_POOL=1). Linux with a systemd user session only.
//   node cold-start-cpu.mjs RESULT.json --apps name=DIST[,name=DIST…] [--quotas 100,58,29] [--runs 5] [--variants 'default;LASM_THREAD_POOL=1']
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import net from 'node:net';
import { join, resolve } from 'node:path';

const args = process.argv.slice(2);
const flag = (name, fallback) => { const i = args.indexOf(name); if (i < 0) return fallback; const [, value] = args.splice(i, 2); return value; };
const apps = flag('--apps', '').split(',').filter(Boolean).map(item => { const [name, dist] = item.split('='); return { name, dist: resolve(dist) }; });
const quotas = flag('--quotas', '100,58,29').split(',').map(Number);
const runs = Number(flag('--runs', '5'));
const variants = flag('--variants', 'default;LASM_THREAD_POOL=1;LASM_THREAD_POOL=2').split(';').map(text => ({
  name: text, env: text === 'default' ? {} : Object.fromEntries(text.split(' ').map(pair => pair.split('='))) }));
const [resultArg] = args;
assert.ok(resultArg && apps.length, 'Usage: node cold-start-cpu.mjs RESULT.json --apps name=DIST[,…] [--quotas 100,58,29] [--runs 5] [--variants …]');
const freePort = () => new Promise((done, fail) => {
  const server = net.createServer(); server.once('error', fail);
  server.listen(0, '127.0.0.1', () => { const { port } = server.address(); server.close(() => done(port)); });
});
const ticks = pid => { try { const fields = readFileSync(`/proc/${pid}/stat`, 'utf8').split(') ')[1].split(' '); return Number(fields[11]) + Number(fields[12]); } catch { return NaN; } };

async function once(app, quota, variant) {
  const port = await freePort();
  const started = performance.now();
  const child = spawn('systemd-run', ['--user', '--scope', '--quiet', '-p', `CPUQuota=${quota}%`, '--', process.execPath, join(app.dist, 'main.mjs')],
    { cwd: app.dist, env: { ...process.env, ...variant.env, PORT: String(port), HOST: '127.0.0.1' }, stdio: ['ignore', 'ignore', 'pipe'] });
  let stderr = '';
  child.stderr.on('data', chunk => { stderr += chunk; });
  try {
    for (;;) {
      if (child.exitCode !== null) throw new Error(`exited ${child.exitCode}: ${stderr.slice(-2000)}`);
      if (performance.now() - started > 120_000) throw new Error('no answer within 120 s');
      try {
        const response = await fetch(`http://127.0.0.1:${port}/health`, { signal: AbortSignal.timeout(2000) });
        if (response.ok) break;
      } catch { /* not listening yet */ }
      await new Promise(done => setTimeout(done, 10));
    }
    const readyMs = performance.now() - started;
    // systemd-run --scope execs the program: the scope's process is node itself.
    const cpuMs = ticks(child.pid) * 10;
    return { readyMs: Math.round(readyMs), cpuMs };
  } finally {
    child.kill('SIGKILL');
    await new Promise(done => child.exitCode !== null ? done() : child.once('exit', done));
  }
}

const median = values => [...values].sort((a, b) => a - b)[Math.floor(values.length / 2)];
const result = { platform: `${process.platform}-${process.arch}`, node: process.version, quotas, runs, rows: [] };
for (const app of apps) for (const quota of quotas) {
  // Variants interleave, so runner drift affects all of them alike.
  const samples = new Map(variants.map(variant => [variant.name, []]));
  for (let run = 0; run < runs; run++) for (const variant of variants) samples.get(variant.name).push(await once(app, quota, variant));
  for (const variant of variants) {
    const list = samples.get(variant.name);
    const row = { app: app.name, quota, variant: variant.name, readyMedianMs: median(list.map(s => s.readyMs)),
      readyMinMs: Math.min(...list.map(s => s.readyMs)), readyMaxMs: Math.max(...list.map(s => s.readyMs)),
      cpuMedianMs: median(list.map(s => s.cpuMs)), samples: list };
    result.rows.push(row);
    console.log(`${app.name.padEnd(10)} CPU ${String(quota).padStart(3)}%  ${variant.name.padEnd(20)} ready ${row.readyMedianMs} ms (${row.readyMinMs}–${row.readyMaxMs}), CPU ${row.cpuMedianMs} ms`);
    writeFileSync(resolve(resultArg), JSON.stringify(result, null, 2) + '\n');
  }
}
