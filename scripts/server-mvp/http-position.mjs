// Std.Http versus Express/Hono with Lean handlers versus plain Node, on one host
// in one run (Phase 5.2, the documented position of Std.Http). Linux only.
//   node http-position.mjs NEW_OUTPUT.json WORK_DIR NAME=DIST_DIR...
// Every DIST_DIR is a `lasm build` of a `lasm init` server template (GET
// /hello/Ada). Lasm servers run from an instrumented copy
// (profile-instrument.mjs) so host RPCs per request are counted by operation.
// A plain Node http server with the same JSON answer is the reference.
// Closed-loop keep-alive load from this process: 2 s warm-up, MEASURE (8) s,
// ROUNDS (2) rounds, CONNECTIONS (1,16).
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { existsSync, readFileSync, statSync, writeFileSync } from 'node:fs';
import http from 'node:http';
import net from 'node:net';
import { cpus, loadavg } from 'node:os';
import { join, resolve } from 'node:path';
import { setTimeout as sleep } from 'node:timers/promises';
import { instrument } from './profile-instrument.mjs';

const [outputArg, workArg, ...specs] = process.argv.slice(2);
assert.ok(outputArg && workArg && specs.length, 'Usage: node http-position.mjs NEW_OUTPUT.json WORK_DIR NAME=DIST_DIR...');
const output = resolve(outputArg), work = resolve(workArg);
assert.ok(!existsSync(output) && !existsSync(work), 'Use a new output file and work directory');
const seconds = Number(process.env.MEASURE ?? 8), rounds = Number(process.env.ROUNDS ?? 2);
const connectionsList = (process.env.CONNECTIONS ?? '1,16').split(',').map(Number);
const round = (v, d = 2) => v == null ? v : Number(v.toFixed(d));
const quantile = (s, q) => s.length ? s[Math.min(s.length - 1, Math.floor(q * s.length))] : null;
const result = { recordedAt: new Date().toISOString(), node: process.version, platform: `${process.platform}-${process.arch}`,
  cpus: cpus().length, cpuModel: cpus()[0]?.model, loadAverageAtStart: loadavg(), seconds, rounds, request: 'GET /hello/Ada', servers: [] };
const save = () => writeFileSync(output, JSON.stringify(result, null, 1) + '\n');
const processCpu = pid => {
  const stat = readFileSync(`/proc/${pid}/stat`, 'utf8'), f = stat.slice(stat.lastIndexOf(')') + 2).split(' ');
  return (Number(f[11]) + Number(f[12])) / 100;
};
const freePort = () => new Promise((done, fail) => { const s = net.createServer(); s.once('error', fail);
  s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });

async function load(port, connections, durationMs) {
  const agent = new http.Agent({ keepAlive: true, maxSockets: connections });
  const latencies = []; let errors = 0;
  const end = Date.now() + durationMs;
  const one = () => new Promise(done => {
    const started = performance.now();
    http.get({ host: '127.0.0.1', port, path: '/hello/Ada', agent }, res => {
      let body = ''; res.on('data', c => { body += c; });
      res.on('end', () => { if (res.statusCode !== 200 || !body.includes('Hello, Ada')) errors++; latencies.push(performance.now() - started); done(); });
    }).on('error', () => { errors++; done(); });
  });
  await Promise.all(Array.from({ length: connections }, async () => { while (Date.now() < end) await one(); }));
  agent.destroy();
  latencies.sort((a, b) => a - b);
  return { requests: latencies.length, errors, p50: round(quantile(latencies, 0.5), 3), p99: round(quantile(latencies, 0.99), 3) };
}
async function readProfile(file, child) {
  const before = existsSync(file) ? statSync(file).mtimeMs : 0;
  child.kill('SIGUSR2');
  for (let i = 0; i < 300; i++) {
    await sleep(10);
    if (existsSync(file) && statSync(file).mtimeMs !== before) { try { return JSON.parse(readFileSync(file, 'utf8')); } catch { /* partial */ } }
  }
  return null;
}
function rpcDelta(a, b, requests) {
  if (!a || !b) return null;
  const ops = {};
  let total = 0;
  for (const [key, op] of Object.entries(b.ops)) {
    const calls = op.calls - (a.ops[key]?.calls ?? 0);
    if (calls) { ops[key] = round(calls / requests, 2); total += calls; }
  }
  const idle = b.elu.idle - a.elu.idle, active = b.elu.active - a.elu.active;
  return { perRequest: round(total / requests, 2), mainEventLoopUtilization: round(active / (active + idle), 3),
    ops: Object.fromEntries(Object.entries(ops).sort((x, y) => y[1] - x[1])) };
}

const plainNode = `const http = require('node:http');
http.createServer((req, res) => { const name = decodeURIComponent(req.url.split('/')[2] ?? '');
  const body = JSON.stringify({ message: 'Hello, ' + name + ', from Lean!' });
  res.writeHead(200, { 'content-type': 'application/json', 'content-length': Buffer.byteLength(body) }); res.end(body); })
  .listen(Number(process.env.PORT), '127.0.0.1', () => console.log('Listening on http://127.0.0.1:' + process.env.PORT));`;

for (const spec of ['node=', ...specs]) {
  const [name, dist] = spec.split(/=(.*)/s);
  const port = await freePort();
  const profileFile = join(work, `${name}-profile.json`);
  let args;
  if (name === 'node') args = ['-e', plainNode];
  else { const copy = join(work, name); instrument(resolve(dist), copy); args = [join(copy, 'main.mjs')]; }
  const child = spawn(process.execPath, args, { stdio: ['ignore', 'pipe', 'inherit'],
    env: { ...process.env, HOST: '127.0.0.1', PORT: String(port), LASM_PROFILE_OUT: profileFile } });
  let out = ''; child.stdout.on('data', b => { out += b; });
  for (let i = 0; i < 600 && !/Listening on/.test(out); i++) await sleep(100);
  assert.match(out, /Listening on/, `${name} did not start`);
  const entry = { name, dist: dist || null, rows: [] }; result.servers.push(entry);
  for (const connections of connectionsList) {
    for (let r = 0; r < rounds; r++) {
      await load(port, connections, 2000);
      const p0 = name === 'node' ? null : await readProfile(profileFile, child);
      const cpu0 = processCpu(child.pid), t = performance.now();
      const row = await load(port, connections, seconds * 1000);
      const elapsed = (performance.now() - t) / 1000, cpu = processCpu(child.pid) - cpu0;
      const p1 = name === 'node' ? null : await readProfile(profileFile, child);
      entry.rows.push({ connections, round: r + 1, rps: Math.round(row.requests / elapsed), p50: row.p50, p99: row.p99, errors: row.errors,
        serverCpuMsPerRequest: round(cpu * 1000 / row.requests, 3), rpc: rpcDelta(p0, p1, row.requests) });
      const last = entry.rows.at(-1);
      console.log(`${name} c=${connections}: ${last.rps} req/s p99 ${last.p99} ms${last.rpc ? `, ${last.rpc.perRequest} RPCs/request, ELU ${last.rpc.mainEventLoopUtilization}` : ''}`);
      save();
    }
  }
  child.kill('SIGTERM');
  await Promise.race([new Promise(done => child.once('exit', done)), sleep(5000)]);
  if (child.exitCode === null) child.kill('SIGKILL');
}
result.loadAverageAtEnd = loadavg();
save();
