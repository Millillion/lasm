// Server MVP performance profile (maintainer measurement, Linux only).
//   node profile.mjs SERVER_MANIFEST BENCH_MANIFEST WORK_DIR NEW_OUTPUT.json [PHASES]
// SERVER_MANIFEST: application.json from build-robustness.mjs (fixture server).
// BENCH_MANIFEST: application.json from build-profile.mjs (micro-benchmarks).
// PHASES (comma list, default all): startup,load,cpuprof,bench,opt
// Run it under scripts/full-lean/run-bounded.mjs with the Node 26 engine that
// the deployments require. It never modifies the deployments: instrumented and
// re-optimized copies are written under WORK_DIR.
import assert from 'node:assert/strict';
import { spawn, execFileSync } from 'node:child_process';
import { existsSync, mkdirSync, readFileSync, readdirSync, writeFileSync, statSync, cpSync, copyFileSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { fileURLToPath } from 'node:url';
import { setTimeout as sleep } from 'node:timers/promises';
import net from 'node:net';
import { instrument } from './profile-instrument.mjs';
import { readFunctionTableIndex } from '../full-lean/function-table-index.mjs';

const root = resolve(fileURLToPath(new URL('../../', import.meta.url)));
const [serverManifestFile, benchManifestFile, workArg, outputArg, phaseArg = 'startup,load,cpuprof,bench,opt'] = process.argv.slice(2);
assert.ok(serverManifestFile && benchManifestFile && workArg && outputArg, 'Supply SERVER_MANIFEST BENCH_MANIFEST WORK_DIR NEW_OUTPUT.json [PHASES]');
const output = resolve(outputArg);
assert.ok(!existsSync(output), 'Use a new output file');
const work = resolve(workArg); mkdirSync(work, { recursive: true });
const serverManifest = JSON.parse(readFileSync(serverManifestFile, 'utf8'));
const benchManifest = JSON.parse(readFileSync(benchManifestFile, 'utf8'));
const phases = new Set(phaseArg.split(','));
const engine = process.execPath;
const t0 = Date.now();
const log = message => console.log(`[profile +${((Date.now() - t0) / 1000).toFixed(1)}s] ${message}`);
const result = { scope: 'Server MVP performance profile: integration/fixtures/server-robustness and scripts/server-mvp/profile, native Lean vs Lasm (Node), Linux x64',
  recordedAt: new Date().toISOString(), engine: process.version, platform: `${process.platform}-${process.arch}`,
  cpus: (await import('node:os')).cpus().length, cpuModel: (await import('node:os')).cpus()[0]?.model,
  loadAverageAtStart: (await import('node:os')).loadavg(),
  server: { deployed: serverManifest.deployed, native: serverManifest.nativeExecutable, wasmBytes: serverManifest.wasmBytes, compiler: serverManifest.compiler },
  bench: { deployed: benchManifest.deployed, native: benchManifest.nativeExecutable, wasmBytes: benchManifest.wasmBytes } };
const save = () => writeFileSync(output, JSON.stringify(result, null, 1) + '\n');

const median = values => { const s = [...values].sort((a, b) => a - b); return s.length ? s[Math.floor(s.length / 2)] : null; };
const quantile = (sorted, q) => sorted.length ? sorted[Math.min(sorted.length - 1, Math.floor(q * sorted.length))] : null;
const round = (value, digits = 3) => value === null || value === undefined ? value : Number(value.toFixed(digits));

// ---------- servers ----------
function serverCommand(kind, deployed, extraNode = []) {
  if (kind === 'native') return [serverManifest.nativeExecutable, ['0']];
  return [engine, [...extraNode, join(deployed, 'main.mjs'), '0']];
}
async function startServer(kind, { deployed = serverManifest.deployed, extraNode = [], env = {} } = {}) {
  const directory = join(work, `run-${kind}-${Date.now()}-${Math.random().toString(16).slice(2, 8)}`);
  mkdirSync(directory, { recursive: true });
  const [command, args] = serverCommand(kind, deployed, extraNode);
  const started = performance.now();
  const child = spawn(command, args, { cwd: directory, env: { PATH: '', HOME: directory, ...env }, stdio: ['ignore', 'pipe', 'pipe'] });
  const server = { kind, child, directory, stdout: '', stderr: '' };
  child.stderr.on('data', bytes => { if (server.stderr.length < 20000) server.stderr += bytes; });
  server.port = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error('startup timeout')), 60_000);
    child.stdout.on('data', bytes => {
      server.stdout += bytes;
      const match = server.stdout.match(/Listening on http:\/\/[\d.]+:(\d+)/);
      if (match) { clearTimeout(timer); resolve(Number(match[1])); }
    });
    child.once('exit', code => { clearTimeout(timer); reject(new Error(`exited ${code}: ${server.stderr.slice(0, 2000)}`)); });
  });
  server.listeningMs = performance.now() - started;
  const first = await request(server.port, 'GET', '/health');
  assert.equal(first.status, 200);
  server.firstResponseMs = performance.now() - started;
  return server;
}
async function stopServer(server) {
  if (server.child.exitCode !== null) return server.child.exitCode;
  const exit = new Promise(resolve => server.child.once('exit', code => resolve(code)));
  try { await request(server.port, 'POST', '/shutdown'); } catch { server.child.kill('SIGKILL'); }
  const timer = setTimeout(() => server.child.kill('SIGKILL'), 15_000);
  const code = await exit; clearTimeout(timer); return code;
}

// ---------- minimal HTTP/1.1 client (keep-alive, Content-Length or chunked) ----------
function connection(port) {
  return new Promise((resolve, reject) => {
    const socket = net.connect({ port, host: '127.0.0.1', noDelay: true }, () => resolve(makeConnection(socket)));
    socket.once('error', reject);
  });
}
function makeConnection(socket) {
  let buffer = Buffer.alloc(0), waiter = null, closed = false;
  socket.on('data', chunk => { buffer = buffer.length ? Buffer.concat([buffer, chunk]) : chunk; waiter?.(); });
  socket.on('close', () => { closed = true; waiter?.(); });
  socket.on('error', () => {});
  const parse = () => {
    const end = buffer.indexOf('\r\n\r\n');
    if (end < 0) return null;
    const head = buffer.subarray(0, end).toString('latin1');
    const status = Number(head.slice(9, 12));
    const length = head.match(/\r\ncontent-length:\s*(\d+)/i);
    if (length) {
      const total = end + 4 + Number(length[1]);
      if (buffer.length < total) return null;
      const body = buffer.subarray(end + 4, total); buffer = buffer.subarray(total);
      return { status, body, close: /\r\nconnection:\s*close/i.test(head) };
    }
    assert.ok(/\r\ntransfer-encoding:\s*chunked/i.test(head), 'Unsupported response framing');
    let offset = end + 4; const parts = [];
    for (;;) {
      const line = buffer.indexOf('\r\n', offset);
      if (line < 0) return null;
      const size = parseInt(buffer.subarray(offset, line).toString('latin1'), 16);
      if (buffer.length < line + 2 + size + 2) return null;
      parts.push(buffer.subarray(line + 2, line + 2 + size)); offset = line + 2 + size + 2;
      if (size === 0) break;
    }
    buffer = buffer.subarray(offset);
    return { status, body: Buffer.concat(parts), close: /\r\nconnection:\s*close/i.test(head) };
  };
  return {
    socket,
    send(raw) {
      socket.write(raw);
      return new Promise((resolve, reject) => {
        const check = () => {
          const response = parse();
          if (response) { waiter = null; resolve(response); }
          else if (closed) { waiter = null; reject(new Error('connection closed')); }
        };
        waiter = check; check();
      });
    },
    close() { socket.destroy(); },
  };
}
function rawRequest(method, path, body = '', close = false) {
  return `${method} ${path} HTTP/1.1\r\nHost: 127.0.0.1\r\n${close ? 'Connection: close\r\n' : ''}`
    + (body || method === 'POST' ? `Content-Type: application/json\r\nContent-Length: ${Buffer.byteLength(body)}\r\n` : '') + `\r\n${body}`;
}
async function request(port, method, path, body = '') {
  const c = await connection(port);
  try { return await c.send(rawRequest(method, path, body, true)); } finally { c.close(); }
}
const jsonBody = JSON.stringify({ name: 'profile', numbers: Array.from({ length: 64 }, (_, i) => i * 7 - 100) });
const workloads = {
  health: { method: 'GET', path: '/health', check: r => r.status === 200 && r.body.toString() === '{"ok":true}' },
  json: { method: 'POST', path: '/json', body: jsonBody, check: r => r.status === 200 && r.body.toString().includes('"count":64') },
  big64: { method: 'GET', path: '/big/64', check: r => r.status === 200 && r.body.length === 65536 },
  // A new TCP connection per request (accept + read + write + close).
  close: { method: 'GET', path: '/health', close: true, check: r => r.status === 200 },
};
async function runLoad(port, workloadName, connections, seconds, warmupSeconds = 2) {
  const w = workloads[workloadName];
  const raw = rawRequest(w.method, w.path, w.body ?? '', w.close);
  let measuring = false, stop = false, errors = 0;
  const latencies = [];
  let counted = 0;
  const loop = async () => {
    let c = null;
    while (!stop) {
      try {
        c ??= await connection(port);
        const start = performance.now();
        const response = await c.send(raw);
        const ms = performance.now() - start;
        if (!w.check(response)) errors++;
        if (measuring) { latencies.push(ms); counted++; }
        if (w.close || response.close) { c.close(); c = null; }
      } catch { errors++; c?.close(); c = null; await sleep(10); }
    }
    c?.close();
  };
  const loops = Array.from({ length: connections }, loop);
  await sleep(warmupSeconds * 1000);
  const hooks = { before: null };
  measuring = true;
  const started = performance.now();
  const startErrors = errors;
  return { loops, hooks, finish: async () => {
    measuring = false;
    const elapsed = (performance.now() - started) / 1000;
    stop = true; await Promise.all(loops);
    latencies.sort((a, b) => a - b);
    return { workload: workloadName, connections, seconds: round(elapsed, 2), requests: counted, rps: round(counted / elapsed, 1),
      p50: round(quantile(latencies, 0.5)), p90: round(quantile(latencies, 0.9)), p99: round(quantile(latencies, 0.99)),
      errors: errors - startErrors };
  }, measuredSeconds: seconds };
}

// ---------- per-thread CPU (Linux /proc) ----------
const ticks = 100; // USER_HZ
function threadTimes(pid) {
  const out = {};
  for (const tid of readdirSync(`/proc/${pid}/task`)) {
    try {
      const stat = readFileSync(`/proc/${pid}/task/${tid}/stat`, 'utf8');
      const close = stat.lastIndexOf(')');
      const name = stat.slice(stat.indexOf('(') + 1, close);
      const fields = stat.slice(close + 2).split(' ');
      out[tid] = { name, cpu: (Number(fields[11]) + Number(fields[12])) / ticks };
    } catch { /* thread exited */ }
  }
  return out;
}
function threadDelta(pid, before, after, seconds) {
  const rows = [];
  for (const [tid, a] of Object.entries(after)) {
    const cpu = a.cpu - (before[tid]?.cpu ?? 0);
    rows.push({ tid: Number(tid), name: a.name, main: Number(tid) === pid, cpuSeconds: round(cpu, 2), utilization: round(cpu / seconds, 3) });
  }
  rows.sort((x, y) => y.cpuSeconds - x.cpuSeconds);
  const total = rows.reduce((sum, row) => sum + row.cpuSeconds, 0);
  const groups = {};
  for (const row of rows) {
    const key = row.main ? 'main' : row.name;
    groups[key] ??= { threads: 0, cpuSeconds: 0 }; groups[key].threads++; groups[key].cpuSeconds = round(groups[key].cpuSeconds + row.cpuSeconds, 2);
  }
  return { totalCpuSeconds: round(total, 2), cores: round(total / seconds, 2), threads: rows.length, groups, top: rows.slice(0, 12) };
}

// ---------- RPC counters (instrumented copy) ----------
async function readProfile(server) {
  const file = join(server.directory, 'lasm-profile.json');
  const before = existsSync(file) ? statSync(file).mtimeMs : 0;
  server.child.kill('SIGUSR2');
  for (let i = 0; i < 200; i++) {
    await sleep(10);
    if (existsSync(file) && statSync(file).mtimeMs !== before) {
      try { return JSON.parse(readFileSync(file, 'utf8')); } catch { /* partial write */ }
    }
  }
  throw new Error('No profile dump');
}
function profileDelta(a, b, requests) {
  const ops = {};
  for (const [key, op] of Object.entries(b.ops)) {
    const prev = a.ops[key] ?? { calls: 0, settleMs: 0, syncMs: 0, inBytes: 0 };
    const calls = op.calls - prev.calls;
    if (!calls) continue;
    ops[key] = { calls, perRequest: round(calls / requests, 3), mainSyncUsPerCall: round((op.syncMs - prev.syncMs) * 1000 / calls, 1),
      settleMsPerCall: round((op.settleMs - prev.settleMs) / calls, 3), inBytesPerCall: round((op.inBytes - prev.inBytes) / calls, 0) };
  }
  const rt = {};
  for (const [key, r] of Object.entries(b.rt)) {
    const prev = a.rt[key] ?? { calls: 0, totalMs: 0, buckets: {} };
    const calls = r.calls - prev.calls;
    if (!calls) continue;
    const buckets = {};
    for (const [bucket, n] of Object.entries(r.buckets)) if (n - (prev.buckets[bucket] ?? 0)) buckets[bucket] = n - (prev.buckets[bucket] ?? 0);
    rt[key] = { calls, meanMs: round((r.totalMs - prev.totalMs) / calls, 4), buckets };
  }
  const total = Object.values(ops).reduce((sum, op) => sum + op.calls, 0);
  const idle = b.elu.idle - a.elu.idle, active = b.elu.active - a.elu.active;
  return { rpcPerRequest: round(total / requests, 2), mainEventLoopUtilization: round(active / (active + idle), 3), ops, workerRoundTrip: rt };
}

// ---------- phases ----------
if (phases.has('startup')) {
  log('startup');
  const runs = 6;
  const startup = { runs };
  const spawnTime = async (args) => {
    const started = performance.now();
    execFileSync(engine, args, { stdio: 'ignore', env: { PATH: '' } });
    return performance.now() - started;
  };
  startup.nodeBareMs = round(median(await Promise.all([0, 1, 2, 3, 4].map(() => spawnTime(['-e', '0'])))), 1);
  // Wasm compile/instantiate pieces, measured in a fresh process each.
  const wasmFile = join(serverManifest.deployed, 'program.wasm');
  const probe = `
    const { readFileSync } = require('node:fs'); const { Worker } = require('node:worker_threads');
    const keep = setTimeout(() => {}, 120000); // background Wasm compilation holds no event-loop handle
    const out = {}; let t = performance.now();
    const bytes = readFileSync(${JSON.stringify(wasmFile)}); out.readMs = performance.now() - t;
    t = performance.now();
    WebAssembly.compile(bytes).then(async module => {
      out.compileMs = performance.now() - t;
      try { require('node:v8').serialize(module); out.v8SerializeModule = 'ok'; } catch (e) { out.v8SerializeModule = String(e.message).slice(0, 120); }
      t = performance.now();
      await Promise.all(Array.from({ length: 4 }, () => new Promise((resolve, reject) => {
        const w = new Worker('const { parentPort } = require("node:worker_threads"); parentPort.postMessage(1);', { eval: true });
        w.once('message', () => { w.terminate(); resolve(); }); w.once('error', reject);
      })));
      out.fourWorkersMs = performance.now() - t;
      console.log(JSON.stringify(out)); clearTimeout(keep);
    });`;
  const probes = [];
  for (let i = 0; i < 3; i++) probes.push(JSON.parse(execFileSync(engine, ['-e', probe], { encoding: 'utf8' })));
  for (let i = 0; i < 3; i++) probes.push({ eager: true, ...JSON.parse(execFileSync(engine, ['--no-wasm-lazy-compilation', '-e', probe], { encoding: 'utf8' })) });
  startup.wasmProbe = { lazy: Object.fromEntries(['readMs', 'compileMs', 'fourWorkersMs'].map(k => [k, round(median(probes.filter(p => !p.eager).map(p => p[k])), 1)])),
    eager: Object.fromEntries(['compileMs'].map(k => [k, round(median(probes.filter(p => p.eager).map(p => p[k])), 1)])),
    v8SerializeModule: probes[0].v8SerializeModule };
  const instrumented = instrument(serverManifest.deployed, join(work, 'server-instrumented'));
  for (const [label, kind, options] of [['native', 'native', {}], ['lasm', 'lasm', {}],
    ['lasmInstrumented', 'lasm', { deployed: instrumented, env: { LASM_PROFILE_OUT: 'PLACEHOLDER' } }]]) {
    const listening = [], first = [], marks = [], rpcAtFirstResponse = [];
    for (let i = 0; i < runs; i++) {
      const env = options.env ? { LASM_PROFILE_OUT: 'lasm-profile.json' } : {};
      const server = await startServer(kind, { ...options, env });
      listening.push(server.listeningMs); first.push(server.firstResponseMs);
      if (options.env) {
        const p = await readProfile(server);
        // Marks are relative to the main thread's performance origin; Node's own
        // bootstrap precedes it (see nodeBareMs).
        marks.push(p.marks);
        rpcAtFirstResponse.push(Object.values(p.ops).reduce((sum, op) => sum + op.calls, 0));
        if (i === 0) startup.lasmInstrumentedOpsAtFirstResponse = Object.fromEntries(Object.entries(p.ops).map(([k, o]) => [k, o.calls]));
      }
      assert.equal(await stopServer(server), 0);
    }
    startup[label] = { listeningMs: round(median(listening), 1), firstResponseMs: round(median(first), 1), all: listening.map(v => round(v, 1)) };
    if (rpcAtFirstResponse.length) startup[label].rpcAtFirstResponse = median(rpcAtFirstResponse);
    if (marks.length) startup[label].marksMs = Object.fromEntries(Object.keys(marks[0]).map(k => [k, round(median(marks.map(m => m[k])), 1)]));
  }
  result.startup = startup; save();
}

const loadPlan = [['health', 1], ['health', 16], ['json', 16], ['big64', 16], ['close', 8]];
const loadSeconds = Number(process.env.PROFILE_LOAD_SECONDS ?? 8);
async function measureServer(kind, options = {}) {
  const server = await startServer(kind, options);
  const rows = [];
  try {
    for (const [name, connections] of loadPlan) {
      const load = await runLoad(server.port, name, connections, loadSeconds);
      const pBefore = options.instrumented ? await readProfile(server) : null;
      const before = threadTimes(server.child.pid); const startedAt = performance.now();
      await sleep(loadSeconds * 1000);
      const after = threadTimes(server.child.pid); const seconds = (performance.now() - startedAt) / 1000;
      const pAfter = options.instrumented ? await readProfile(server) : null;
      const row = await load.finish();
      row.cpu = threadDelta(server.child.pid, before, after, seconds);
      row.cpuMsPerRequest = round(row.cpu.totalCpuSeconds * 1000 / Math.max(1, row.requests), 3);
      if (pBefore) row.rpc = profileDelta(pBefore, pAfter, row.requests);
      rows.push(row);
      log(`${kind}${options.label ? ' ' + options.label : ''} ${name} c=${connections}: ${row.rps} req/s p50 ${row.p50} p99 ${row.p99} cores ${row.cpu.cores}${row.rpc ? ` rpc/req ${row.rpc.rpcPerRequest} ELU ${row.rpc.mainEventLoopUtilization}` : ''}`);
    }
  } finally { assert.equal(await stopServer(server), 0); }
  return rows;
}
if (phases.has('load')) {
  log('load');
  const instrumented = existsSync(join(work, 'server-instrumented')) ? join(work, 'server-instrumented')
    : instrument(serverManifest.deployed, join(work, 'server-instrumented'));
  result.load = {
    seconds: loadSeconds,
    native: await measureServer('native'),
    lasm: await measureServer('lasm'),
    lasmInstrumented: await measureServer('lasm', { deployed: instrumented, env: { LASM_PROFILE_OUT: 'lasm-profile.json' }, instrumented: true, label: 'instrumented' }),
  };
  save();
}

// ---------- V8 CPU profiles of the Lasm server (main thread + workers) ----------
function summarizeProfile(file) {
  const profile = JSON.parse(readFileSync(file, 'utf8'));
  const byId = new Map(profile.nodes.map(node => [node.id, node]));
  const self = new Map();
  const interval = (profile.endTime - profile.startTime) / Math.max(1, profile.samples.length) / 1000; // ms
  const counts = new Map();
  for (const id of profile.samples) counts.set(id, (counts.get(id) ?? 0) + 1);
  const category = node => {
    const { functionName, url } = node.callFrame;
    if (functionName === '(idle)') return 'idle';
    if (functionName === '(garbage collector)') return 'gc';
    if (functionName === '(program)') return 'program (native, incl. futex/atomics wait)';
    if (url.startsWith('wasm://') || /^\$?(wasm-function|js-to-wasm|wasm-to-js)/.test(functionName) || functionName.startsWith('$')) return 'wasm';
    if (url.includes('program.cjs')) return 'emscripten glue (program.cjs)';
    if (url.includes('/host/')) return 'Lasm host (host/*.mjs)';
    if (url.startsWith('node:')) return 'node core';
    return functionName ? 'other js/native' : 'other';
  };
  const categories = {};
  let total = 0;
  for (const [id, n] of counts) {
    const node = byId.get(id); const key = `${node.callFrame.functionName || '(anonymous)'} ${node.callFrame.url.replace(/^.*\//, '')}:${node.callFrame.lineNumber + 1}`;
    self.set(key, (self.get(key) ?? 0) + n); total += n;
    const c = category(node); categories[c] = (categories[c] ?? 0) + n;
  }
  const top = [...self].sort((a, b) => b[1] - a[1]).slice(0, 15).map(([name, n]) => ({ name, percent: round(100 * n / total, 1) }));
  return { file: file.replace(/^.*\//, ''), samples: total, sampledMs: round(total * interval, 0),
    categories: Object.fromEntries(Object.entries(categories).sort((a, b) => b[1] - a[1]).map(([k, n]) => [k, round(100 * n / total, 1)])), top };
}
if (phases.has('cpuprof')) {
  log('cpuprof');
  const dir = join(work, `cpuprof-${Date.now()}`); mkdirSync(dir);
  const server = await startServer('lasm', { extraNode: ['--cpu-prof', `--cpu-prof-dir=${dir}`, '--cpu-prof-interval=500'] });
  const load = await runLoad(server.port, 'health', 16, loadSeconds);
  await sleep(loadSeconds * 1000);
  const row = await load.finish();
  const code = await stopServer(server);
  await sleep(500);
  const files = readdirSync(dir).filter(f => f.endsWith('.cpuprofile')).map(f => join(dir, f));
  result.cpuprof = { load: row, exitCode: code, profiles: files.map(summarizeProfile).sort((a, b) => b.samples - a.samples),
    note: 'Whole-process profiles from startup to exit (warmup and shutdown included); 500 µs sampling. Wasm has no name section (-g1), so Wasm frames are wasm-function[N].' };
  log(`cpuprof: ${files.length} profiles`);
  save();
}

// ---------- in-process micro-benchmarks ----------
const benchPlan = [['rpc', 20000], ['clock', 20000], ['date', 2000], ['http', 200, 10], ['json', 20000], ['alloc', 3000], ['sleep', 2000]];
async function bench(kind, deployed, options = {}) {
  const out = {};
  for (const [mode, n, r] of benchPlan) {
    const values = [];
    for (let rep = 0; rep < 3; rep++) {
      const args = [mode, String(n), ...(r ? [String(r)] : [])];
      const env = { PATH: '', HOME: work, ...(options.env ?? {}) };
      const text = kind === 'native'
        ? execFileSync(benchManifest.nativeExecutable, args, { encoding: 'utf8', env, cwd: work })
        : execFileSync(engine, [join(deployed, 'main.mjs'), ...args], { encoding: 'utf8', env, cwd: options.cwd ?? work });
      const line = text.trim().split('\n').find(l => l.startsWith(mode + ' '));
      assert.ok(line, `No ${mode} result: ${text}`);
      const [, count, ns] = line.split(' ');
      values.push(Number(ns) / Number(count));
    }
    out[mode] = { count: n * (r ?? 1), nsPerOp: round(median(values), 0), reps: values.map(v => round(v, 0)) };
  }
  return out;
}
if (phases.has('bench')) {
  log('bench');
  result.benchmarks = { plan: benchPlan, native: await bench('native'), lasm: await bench('lasm', benchManifest.deployed) };
  result.benchmarks.ratio = Object.fromEntries(Object.keys(result.benchmarks.native).map(mode =>
    [mode, round(result.benchmarks.lasm[mode].nsPerOp / result.benchmarks.native[mode].nsPerOp, 2)]));
  // Host RPCs made by one in-memory (Mock transport) Std.Http request.
  const benchInstrumented = existsSync(join(work, 'bench-instrumented')) ? join(work, 'bench-instrumented')
    : instrument(benchManifest.deployed, join(work, 'bench-instrumented'));
  const probeDir = join(work, 'bench-rpc'); mkdirSync(probeDir, { recursive: true });
  const counts = {};
  for (const [mode, n, r] of [['http', 200, 1], ['http', 200, 2], ['sleep', 1000], ['sleep', 2000], ['rpc', 1000], ['rpc', 2000], ['clock', 1000], ['clock', 2000], ['date', 100], ['date', 200]]) {
    // A dump at process exit: patch-free, via the instrumented SIGUSR2 handler is not
    // possible after exit, so count with an --import hook that dumps on 'exit'.
    const hook = join(probeDir, 'dump-on-exit.cjs');
    writeFileSync(hook, "process.on('exit', () => globalThis.lasmProfile?.dump());\n");
    execFileSync(engine, ['--require', hook, join(benchInstrumented, 'main.mjs'), mode, String(n), ...(r ? [String(r)] : [])],
      { encoding: 'utf8', env: { PATH: '', HOME: work, LASM_PROFILE_OUT: join(probeDir, `${mode}-${n}-${r ?? 1}.json`) }, cwd: work });
    const p = JSON.parse(readFileSync(join(probeDir, `${mode}-${n}-${r ?? 1}.json`), 'utf8'));
    counts[`${mode}-${n}x${r ?? 1}`] = { total: Object.values(p.ops).reduce((s, o) => s + o.calls, 0), ops: Object.fromEntries(Object.entries(p.ops).map(([k, o]) => [k, o.calls])),
      roundTrip: Object.fromEntries(Object.entries(p.rt).map(([k, v]) => [k, { calls: v.calls, meanMs: round(v.totalMs / v.calls, 4), buckets: v.buckets }])) };
  }
  result.benchmarks.rpcCounts = counts;
  save();
}

// ---------- wasm-opt level experiment (re-optimizes the shipped -Oz binary) ----------
if (phases.has('opt')) {
  log('opt');
  const wasmOpt = join(root, '.cache/emsdk-6.0.9/upstream/bin/wasm-opt');
  const features = ['--mvp-features', '--enable-threads', '--enable-mutable-globals', '--enable-bulk-memory', '--enable-sign-ext',
    '--enable-nontrapping-float-to-int', '--enable-exception-handling', '--enable-memory64', '--enable-reference-types', '--enable-multivalue'];
  result.opt = { wasmOpt, note: 'wasm-opt applied on top of the delivered -Oz binary (the link recipe runs -Oz then metadce); not identical to a fresh -O3 link.', variants: {} };
  for (const level of ['-O3', '-O2']) {
    const variant = {};
    for (const [label, deployed] of [['server', serverManifest.deployed], ['bench', benchManifest.deployed]]) {
      const copy = join(work, `${label}${level}`);
      if (!existsSync(copy)) {
        cpSync(deployed, copy, { recursive: true });
        const started = performance.now();
        execFileSync(wasmOpt, [...features, level, '--low-memory-unused', '--zero-filled-memory', '--no-stack-ir',
          join(deployed, 'program.wasm'), '-o', join(copy, 'program.wasm')], { stdio: 'inherit', env: { PATH: '', BINARYEN_CORES: '1' } });
        variant[`${label}OptSeconds`] = round((performance.now() - started) / 1000, 1);
      }
      variant[`${label}WasmBytes`] = statSync(join(copy, 'program.wasm')).size;
      // The glue embeds table slots of exports/imports (not function indices or the hash).
      const slots = ({ initialTableEntries, exportCount, exportSeeds, importSeeds }) => JSON.stringify({ initialTableEntries, exportCount,
        exportSeeds: exportSeeds.map(([, slot, ordinal]) => [ordinal, slot]), importSeeds });
      const [a, b] = [await readFunctionTableIndex(join(deployed, 'program.wasm')), await readFunctionTableIndex(join(copy, 'program.wasm'))];
      variant[`${label}TableIndexUnchanged`] = slots(a) === slots(b);
      assert.ok(variant[`${label}TableIndexUnchanged`], 'Function table index changed; the glue would need re-indexing');
    }
    variant.bench = await bench('lasm', join(work, `bench${level}`));
    const server = await startServer('lasm', { deployed: join(work, `server${level}`) });
    variant.startupListeningMs = round(server.listeningMs, 1);
    variant.load = [];
    for (const [name, connections] of [['health', 1], ['health', 16], ['json', 16]]) {
      const load = await runLoad(server.port, name, connections, loadSeconds);
      const before = threadTimes(server.child.pid); const startedAt = performance.now();
      await sleep(loadSeconds * 1000);
      const after = threadTimes(server.child.pid);
      const row = await load.finish();
      row.cpu = threadDelta(server.child.pid, before, after, (performance.now() - startedAt) / 1000);
      row.cpuMsPerRequest = round(row.cpu.totalCpuSeconds * 1000 / Math.max(1, row.requests), 3);
      delete row.cpu.top;
      variant.load.push(row);
      log(`lasm ${level} ${name} c=${connections}: ${row.rps} req/s p99 ${row.p99}`);
    }
    assert.equal(await stopServer(server), 0);
    result.opt.variants[level] = variant; save();
  }
}
result.loadAverageAtEnd = (await import('node:os')).loadavg();
result.durationSeconds = round((Date.now() - t0) / 1000, 1);
save();
log(`wrote ${output}`);
