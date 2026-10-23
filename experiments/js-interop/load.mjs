// HTTP load for the Phase 4 threading prototype (Linux maintainer measurement).
//   node load.mjs NEW_OUTPUT.json SERVER_SPEC_JSON...
// Each SERVER_SPEC_JSON is {"name", "command": [argv...], "cwd"?, "env"?}; the
// server prints "Listening on http://127.0.0.1:PORT" and answers GET /health.
// For every server and connection count: 2 s warm-up, then MEASURE seconds of
// closed-loop keep-alive GET /health from this process (separate from the server).
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { cpus, loadavg } from 'node:os';
import net from 'node:net';
import { setTimeout as sleep } from 'node:timers/promises';

const [outputArg, ...specs] = process.argv.slice(2);
assert.ok(outputArg && specs.length, 'Supply NEW_OUTPUT.json SERVER_SPEC_JSON...');
assert.ok(!existsSync(outputArg), 'Use a new output file');
const seconds = Number(process.env.MEASURE ?? 8), rounds = Number(process.env.ROUNDS ?? 2);
const connectionsList = (process.env.CONNECTIONS ?? '1,16').split(',').map(Number);
const quantile = (s, q) => s.length ? s[Math.min(s.length - 1, Math.floor(q * s.length))] : null;
const round = (v, d = 3) => v == null ? v : Number(v.toFixed(d));

// Per-process CPU seconds (user + system) from /proc, including all threads.
const processCpu = pid => {
  const stat = readFileSync(`/proc/${pid}/stat`, 'utf8'), fields = stat.slice(stat.lastIndexOf(')') + 2).split(' ');
  return (Number(fields[11]) + Number(fields[12])) / 100;
};
function connect(port) {
  return new Promise((resolve, reject) => {
    const socket = net.connect({ port, host: '127.0.0.1', noDelay: true }, () => resolve(socket));
    socket.once('error', reject);
  });
}
// Minimal keep-alive client: one request in flight per connection, Content-Length bodies.
function client(socket) {
  let buffer = Buffer.alloc(0), waiter = null;
  socket.on('data', chunk => { buffer = buffer.length ? Buffer.concat([buffer, chunk]) : chunk; waiter?.(); });
  socket.on('close', () => waiter?.(true));
  socket.on('error', () => {});
  const raw = 'GET /health HTTP/1.1\r\nHost: 127.0.0.1\r\n\r\n';
  return () => new Promise((resolve, reject) => {
    const check = closed => {
      const end = buffer.indexOf('\r\n\r\n');
      if (end >= 0) {
        const head = buffer.subarray(0, end).toString('latin1');
        const length = Number(head.match(/\r\ncontent-length:\s*(\d+)/i)?.[1] ?? NaN);
        if (buffer.length >= end + 4 + length) {
          const status = Number(head.slice(9, 12));
          buffer = buffer.subarray(end + 4 + length); waiter = null;
          return resolve(status);
        }
      }
      if (closed) { waiter = null; reject(new Error('closed')); }
    };
    waiter = check; socket.write(raw); check();
  });
}
async function load(port, connections, pid) {
  let stop = false, measuring = false, errors = 0, count = 0;
  const latencies = [];
  const loop = async () => {
    let send = null, socket = null;
    while (!stop) {
      try {
        if (!send) { socket = await connect(port); send = client(socket); }
        const t = performance.now();
        const status = await send();
        const ms = performance.now() - t;
        if (status !== 200) errors++;
        if (measuring) { latencies.push(ms); count++; }
      } catch { errors++; socket?.destroy(); send = null; await sleep(10); }
    }
    socket?.destroy();
  };
  const loops = Array.from({ length: connections }, loop);
  await sleep(2000);
  const errorsBefore = errors, cpuBefore = processCpu(pid); measuring = true;
  const started = performance.now();
  await sleep(seconds * 1000);
  measuring = false;
  const cpu = processCpu(pid) - cpuBefore;
  const elapsed = (performance.now() - started) / 1000;
  stop = true; await Promise.all(loops);
  latencies.sort((a, b) => a - b);
  return { connections, seconds: round(elapsed, 2), requests: count, rps: round(count / elapsed, 1),
    p50Ms: round(quantile(latencies, 0.5)), p90Ms: round(quantile(latencies, 0.9)), p99Ms: round(quantile(latencies, 0.99)),
    maxMs: round(latencies.at(-1)), errors: errors - errorsBefore,
    serverCpuSeconds: round(cpu, 2), serverCpuMsPerRequest: count ? round(cpu * 1000 / count) : null };
}
async function start(spec) {
  const child = spawn(spec.command[0], spec.command.slice(1), { cwd: spec.cwd, env: { ...process.env, ...spec.env }, stdio: ['ignore', 'pipe', 'pipe'] });
  let out = '', err = '';
  child.stderr.on('data', b => { if (err.length < 20000) err += b; });
  const port = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error(`startup timeout: ${err}`)), 60000);
    child.stdout.on('data', b => { out += b; const m = out.match(/Listening on http:\/\/[\d.]+:(\d+)/); if (m) { clearTimeout(timer); resolve(Number(m[1])); } });
    child.once('exit', code => { clearTimeout(timer); reject(new Error(`exited ${code}: ${err.slice(0, 2000)}`)); });
  });
  return { child, port, stderr: () => err };
}

const result = { scope: 'Phase 4 step 1 threading prototype: keep-alive GET /health closed-loop load (experiments/js-interop/load.mjs)',
  recordedAt: new Date().toISOString(), engine: process.version, platform: `${process.platform}-${process.arch}`,
  cpus: cpus().length, cpuModel: cpus()[0]?.model, loadAverageAtStart: loadavg(), measureSeconds: seconds, rounds, runs: [] };
for (let roundIndex = 0; roundIndex < rounds; roundIndex++) {
  for (const text of specs) {
    const spec = JSON.parse(text);
    for (const connections of connectionsList) {
      const server = await start(spec);
      const r = await load(server.port, connections, server.child.pid);
      server.child.kill('SIGKILL');
      await new Promise(resolve => server.child.once('exit', resolve));
      const run = { server: spec.name, round: roundIndex + 1, ...r };
      result.runs.push(run);
      console.log(JSON.stringify(run));
      writeFileSync(outputArg, JSON.stringify(result, null, 1) + '\n');
    }
  }
}
result.loadAverageAtEnd = loadavg();
writeFileSync(outputArg, JSON.stringify(result, null, 1) + '\n');
