// Server MVP robustness suite: load, faults and soak against the same Std.Http
// fixture built natively and with Lasm (scripts/server-mvp/build-robustness.mjs).
// Dependency-free: node:http keep-alive agents for traffic, raw node:net sockets
// for faults, external OS sampling (procfs / ps / PowerShell) for memory.
//   node robustness.mjs MANIFEST(application.json) OUTPUT.json [ROBUSTNESS_NAME=VALUE...]
// Settings, as arguments or environment (defaults in parentheses):
//   ROBUSTNESS_LOAD_SECONDS (20)  ROBUSTNESS_LOAD_CONNECTIONS (16,64)
//   ROBUSTNESS_SOAK_SECONDS (600) ROBUSTNESS_SOAK_CONNECTIONS (8)
//   ROBUSTNESS_FAULT_SCALE (1)    ROBUSTNESS_KINDS (native,lasm)
//   ROBUSTNESS_ENGINE (this node) ROBUSTNESS_SAMPLE_MS (5000)
//   ROBUSTNESS_PHASES (load,faults,soak) ROBUSTNESS_REQUEST_TIMEOUT_MS (30000)
//   ROBUSTNESS_MAX_SERVER_RSS_MIB (2048) ROBUSTNESS_SOAK_FAULT_EVERY_MS (2000; 0 disables)
import assert from 'node:assert/strict';
import http from 'node:http';
import { connect } from 'node:net';
import { spawn, execFile } from 'node:child_process';
import { mkdtempSync, readFileSync, writeFileSync, existsSync, readdirSync, rmSync } from 'node:fs';
import { join } from 'node:path';
import { tmpdir, cpus, totalmem, release } from 'node:os';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { setTimeout as sleep } from 'node:timers/promises';
import { compareFaults } from './robustness-compare.mjs';

const [manifestFile, outputFile, ...overrides] = process.argv.slice(2);
assert.ok(manifestFile && outputFile && !existsSync(outputFile), 'Supply MANIFEST NEW_OUTPUT.json');
const manifest = JSON.parse(readFileSync(manifestFile, 'utf8'));
// NAME=VALUE arguments override the environment (the resource guard starts
// workloads with a clean environment).
const env = { ...process.env, ...Object.fromEntries(overrides.map(o => {
  const m = o.match(/^(ROBUSTNESS_[A-Z_]+)=(.*)$/); assert.ok(m, `Unknown argument ${o}`); return [m[1], m[2]]; })) };
const config = {
  loadSeconds: Number(env.ROBUSTNESS_LOAD_SECONDS ?? 20), loadWarmupSeconds: 3,
  loadConnections: (env.ROBUSTNESS_LOAD_CONNECTIONS ?? '16,64').split(',').map(Number),
  soakSeconds: Number(env.ROBUSTNESS_SOAK_SECONDS ?? 600), soakConnections: Number(env.ROBUSTNESS_SOAK_CONNECTIONS ?? 8),
  soakFaultEveryMs: Number(env.ROBUSTNESS_SOAK_FAULT_EVERY_MS ?? 2000), sampleMs: Number(env.ROBUSTNESS_SAMPLE_MS ?? 5000),
  faultScale: Number(env.ROBUSTNESS_FAULT_SCALE ?? 1),
  // Stop (and fail) a server whose RSS exceeds this, before a host guard has to.
  // Windows counts committed bytes (Wasm memory grows commit in large steps).
  maxServerRssBytes: Number(env.ROBUSTNESS_MAX_SERVER_RSS_MIB ?? (process.platform === 'win32' ? 1536 : 2048)) * 1024 ** 2,
  kinds: (env.ROBUSTNESS_KINDS ?? 'native,lasm').split(','), variant: env.ROBUSTNESS_VARIANT ?? 'local',
  requestTimeoutMs: Number(env.ROBUSTNESS_REQUEST_TIMEOUT_MS ?? 30_000),
  phases: (env.ROBUSTNESS_PHASES ?? 'load,faults,soak').split(','),
  // Std.Http.Config used by the fixture (integration/fixtures/server-robustness/Main.lean).
  server: { maxBodySize: 1048576, maxHeaderBytes: 16384, maxHeaders: 50, headerTimeoutMs: 2000,
    lingeringTimeoutMs: 3000, keepAliveTimeoutMs: 5000, maxConnections: 512, maxUriLength: 8192 },
};
// Soak criterion (both builds). Warmup: max(120 s, 25 % of the soak). Over the
// rest, memory growth is normalized by the requests served, because an
// application leak scales with requests while allocator high-water growth does
// not. Pass when (1) the least-squares RSS slope is at most 256 bytes per
// request, (2) final RSS (median of the last 5 samples) minus the warm baseline
// (median of the first 5) is at most 256 bytes per request served in between
// plus 32 MiB, (3) for Lasm, Wasm linear memory (which never shrinks) grows by
// at most 256 bytes per request plus 16 MiB, (4) descriptors/handles end within
// 64 of the baseline, (5) zero request errors, and the process stays alive.
// At ~1,000 req/s a 15-minute soak resolves leaks of ~256 B/request; smaller
// leaks are not distinguishable from allocator growth at this duration.
const soakCriteria = { warmupFraction: 0.25, minimumWarmupSeconds: 120, maxBytesPerRequest: 256,
  finalAllowanceBytes: 32 * 1024 ** 2, wasmAllowanceBytes: 16 * 1024 ** 2, maxHandleGrowth: 64 };
const engine = env.ROBUSTNESS_ENGINE ?? process.execPath;
const diagModule = fileURLToPath(new URL('./robustness-diag.mjs', import.meta.url));
const GREETING = 'héllo wörld ✓';
const t0 = Date.now();
const log = message => console.log(`[robustness +${((Date.now() - t0) / 1000).toFixed(1)}s] ${message}`);

// ---------- deterministic inputs ----------
function prng(seed) {
  let s = seed >>> 0;
  return () => { s = (s + 0x6D2B79F5) >>> 0; let t = s; t = Math.imul(t ^ (t >>> 15), t | 1);
    t ^= t + Math.imul(t ^ (t >>> 7), t | 61); return ((t ^ (t >>> 14)) >>> 0) / 4294967296; };
}
const pattern = Buffer.from(Array.from({ length: 1024 * 1024 }, (_, i) => i % 251));
const names = ['plain', 'ñame ✓', 'quote " and \\ backslash', 'emoji 🎉', 'tab\tnew\nline'];
function makeRequest(random) {
  const r = random();
  if (r < 0.30) return { name: 'health', method: 'GET', path: '/health', expect: { status: 200, body: '{"ok":true}' } };
  if (r < 0.55) {
    const numbers = Array.from({ length: 1 + Math.floor(random() * 20) }, () => Math.floor(random() * 2_000_001) - 1_000_000);
    const name = names[Math.floor(random() * names.length)];
    const sum = numbers.reduce((a, b) => a + b, 0);
    const expected = JSON.stringify({ count: numbers.length, max: Math.max(...numbers), min: Math.min(...numbers), name,
      reversed: [...numbers].reverse(), sum });
    return { name: 'json', method: 'POST', path: '/json', body: Buffer.from(JSON.stringify({ name, numbers })),
      headers: { 'content-type': 'application/json' }, expect: { status: 200, json: expected } };
  }
  if (r < 0.70) {
    const size = 1 + Math.floor(random() * 16384), offset = Math.floor(random() * 1000);
    const body = pattern.subarray(offset, offset + size);
    return { name: 'echo', method: 'POST', path: '/echo', body, chunked: random() < 0.5, expect: { status: 200, bytes: body } };
  }
  if (r < 0.80) return { name: 'slow', method: 'GET', path: '/slow/5', expect: { status: 200, body: '{"slept":5}' } };
  if (r < 0.85) return { name: 'env', method: 'GET', path: '/env', expect: { status: 200, json: JSON.stringify({ value: GREETING }) } };
  if (r < 0.90) return { name: 'stream', method: 'GET', path: '/stream/5',
    expect: { status: 200, body: Array.from({ length: 5 }, (_, i) => `chunk ${i}\n`).join(''), chunked: true } };
  return { name: 'big', method: 'GET', path: '/big/64', expect: { status: 200, bytes: pattern.subarray(0, 65536) } };
}

// ---------- HTTP client ----------
function send(agent, base, spec) {
  return new Promise(resolve => {
    const started = process.hrtime.bigint();
    const headers = { ...(spec.headers ?? {}) };
    if (spec.body && !spec.chunked) headers['content-length'] = spec.body.length;
    const req = http.request({ host: base.host, port: base.port, method: spec.method, path: spec.path, agent, headers,
      timeout: config.requestTimeoutMs }, res => {
      const parts = [];
      res.on('data', d => parts.push(d));
      res.on('end', () => {
        const ms = Number(process.hrtime.bigint() - started) / 1e6;
        resolve({ ms, status: res.statusCode, headers: res.headers, body: Buffer.concat(parts), reused: req.reusedSocket });
      });
      res.on('error', error => resolve({ error: 'response: ' + error.message }));
    });
    req.on('timeout', () => req.destroy(new Error('timeout')));
    req.on('error', error => resolve({ error: error.code ?? error.message }));
    if (spec.body && spec.chunked) {
      const half = Math.floor(spec.body.length / 2);
      req.write(spec.body.subarray(0, half)); req.end(spec.body.subarray(half));
    } else req.end(spec.body);
  });
}
function verify(spec, result) {
  if (result.error) return `transport ${result.error}`;
  const e = spec.expect;
  if (result.status !== e.status) return `status ${result.status} != ${e.status}`;
  if (e.body !== undefined && result.body.toString('utf8') !== e.body) return `body ${JSON.stringify(result.body.toString('utf8').slice(0, 120))}`;
  if (e.json !== undefined) {
    const text = result.body.toString('utf8');
    if (text !== e.json) {
      let same = false; try { same = JSON.stringify(JSON.parse(text)) === e.json; } catch {}
      if (!same) return `json ${JSON.stringify(text.slice(0, 160))} != ${e.json.slice(0, 160)}`;
      return 'json-bytes-differ';
    }
  }
  if (e.bytes !== undefined && Buffer.compare(result.body, e.bytes) !== 0) return `bytes ${result.body.length} != ${e.bytes.length}`;
  if (e.chunked && !/chunked/i.test(result.headers['transfer-encoding'] ?? '')) return 'not chunked';
  return null;
}
function percentile(sorted, p) { return sorted.length ? sorted[Math.min(sorted.length - 1, Math.floor(p / 100 * sorted.length))] : null; }
function summarize(latencies) {
  const s = Float64Array.from(latencies).sort();
  const r = x => x === null ? null : Math.round(x * 1000) / 1000;
  return { count: s.length, p50: r(percentile(s, 50)), p95: r(percentile(s, 95)), p99: r(percentile(s, 99)), max: r(s.at(-1) ?? null) };
}

// Run `connections` closed-loop clients for `seconds` (after `warmup`) with exact verification.
async function traffic(base, { connections, seconds, warmup = 0, seed, stopSignal, onTick }) {
  const agent = new http.Agent({ keepAlive: true, maxSockets: connections, maxFreeSockets: connections });
  let created = 0; const originalCreate = agent.createConnection.bind(agent);
  agent.createConnection = (...args) => { created++; return originalCreate(...args); };
  const random = prng(seed);
  const stats = { requests: 0, errors: 0, errorSamples: [], latencies: [], byEndpoint: {}, reused: 0, jsonByteDiffs: 0 };
  const startAt = Date.now(), measureAt = startAt + warmup * 1000, endAt = measureAt + seconds * 1000;
  let measuredStart = null, measuredEnd = null;
  const worker = async () => {
    while (Date.now() < endAt && !(stopSignal?.stopped) && !currentServer?.capExceeded && (!currentServer || alive(currentServer))) {
      const spec = makeRequest(random);
      const result = await send(agent, base, spec);
      const problem = verify(spec, result);
      const now = Date.now();
      if (now < measureAt) continue;
      measuredStart ??= now; measuredEnd = now;
      stats.requests++;
      if (problem === 'json-bytes-differ') stats.jsonByteDiffs++;
      else if (problem) { stats.errors++; if (stats.errorSamples.length < 20) stats.errorSamples.push({ endpoint: spec.name, problem }); continue; }
      if (result.reused) stats.reused++;
      stats.latencies.push(result.ms);
      (stats.byEndpoint[spec.name] ??= []).push(result.ms);
      onTick?.();
    }
  };
  await Promise.all(Array.from({ length: connections }, worker));
  agent.destroy();
  const elapsed = Math.max(0.001, ((measuredEnd ?? Date.now()) - (measuredStart ?? Date.now())) / 1000);
  return { connections, seconds, warmupSeconds: warmup, requests: stats.requests, errors: stats.errors, errorSamples: stats.errorSamples,
    jsonByteDiffs: stats.jsonByteDiffs, requestsPerSecond: Math.round(stats.latencies.length / elapsed * 10) / 10, // verified successes only
    connectionsOpened: created, reusedRequests: stats.reused, latencyMs: summarize(stats.latencies),
    byEndpoint: Object.fromEntries(Object.entries(stats.byEndpoint).map(([k, v]) => [k, summarize(v)])) };
}
async function verifyBatch(base, count = 30, seed = 7) {
  const agent = new http.Agent({ keepAlive: true, maxSockets: 4 });
  const random = prng(seed), problems = [];
  for (let i = 0; i < count; i++) {
    const spec = makeRequest(random), problem = verify(spec, await send(agent, base, spec));
    if (problem && problem !== 'json-bytes-differ') problems.push(`${spec.name}: ${problem}`);
  }
  agent.destroy();
  return { count, ok: problems.length === 0, problems: problems.slice(0, 10) };
}

// ---------- raw sockets ----------
// steps: array of Buffer|string|{delay}|{reset}|{end}|{destroy}. Options: readUntilBytes then
// destroy/reset, timeoutMs. Returns status line, bytes read and how the connection ended.
function raw(base, steps, { timeoutMs = 15_000, afterBytes, afterBytesAction = 'destroy' } = {}) {
  return new Promise(resolve => {
    const started = Date.now(); let data = Buffer.alloc(0), settled = false, clientDone = false;
    const socket = connect(base.port, base.host);
    const finish = how => {
      if (settled) return; settled = true; clearTimeout(timer);
      const text = data.subarray(0, 4096).toString('latin1');
      const status = text.match(/^HTTP\/1\.[01] (\d{3})/)?.[1];
      const statuses = [...text.matchAll(/HTTP\/1\.[01] (\d{3})/g)].map(m => Number(m[1]));
      resolve({ status: status ? Number(status) : null, statuses, bytes: data.length, ended: how, ms: Date.now() - started,
        connectionClose: /\r\nconnection: close\r\n/i.test(text) });
      socket.destroy();
    };
    const timer = setTimeout(() => finish('timeout'), timeoutMs);
    socket.on('data', chunk => {
      data = Buffer.concat([data, chunk]);
      if (afterBytes !== undefined && data.length >= afterBytes && !clientDone) {
        clientDone = true;
        if (afterBytesAction === 'reset') socket.resetAndDestroy(); else socket.destroy();
        finish('client-' + afterBytesAction);
      }
    });
    socket.on('end', () => finish('server-close'));
    socket.on('error', error => finish(clientDone ? 'client' : (error.code === 'ECONNRESET' ? 'server-reset' : 'error-' + error.code)));
    socket.on('close', () => finish(clientDone ? 'client' : 'server-close'));
    socket.once('connect', async () => {
      for (const step of steps) {
        if (settled) return;
        if (typeof step === 'string' || Buffer.isBuffer(step)) {
          await new Promise(r => socket.write(step, () => r()));
        } else if (step.delay) await sleep(step.delay);
        else if (step.reset) { clientDone = true; socket.resetAndDestroy(); return finish('client-reset'); }
        else if (step.destroy) { clientDone = true; socket.destroy(); return finish('client-destroy'); }
        else if (step.end) socket.end();
        else if (step.writeBytes) { // stream N bytes in 64 KiB pieces while the server accepts them
          for (let sent = 0; sent < step.writeBytes && !settled; sent += 65536) {
            const piece = step.chunked ? Buffer.concat([Buffer.from('10000\r\n'), pattern.subarray(0, 65536), Buffer.from('\r\n')])
              : pattern.subarray(0, Math.min(65536, step.writeBytes - sent));
            if (!socket.write(piece)) await Promise.race([new Promise(r => socket.once('drain', r)), sleep(2000)]);
          }
          if (step.chunked && !settled) socket.write('0\r\n\r\n');
        }
      }
    });
  });
}
const outcome = r => `${r.status ?? 'none'}/${r.ended}${r.connectionClose ? '+close-header' : ''}`;

// ---------- process sampling ----------
function run(command, args) {
  return new Promise(resolve => execFile(command, args, { timeout: 20_000, windowsHide: true },
    (error, stdout) => resolve(error ? null : stdout)));
}
async function sampleProcess(pid) {
  const at = Date.now();
  try {
    if (process.platform === 'linux') {
      const status = readFileSync(`/proc/${pid}/status`, 'utf8');
      const stat = readFileSync(`/proc/${pid}/stat`, 'utf8').split(') ')[1].split(' ');
      return { at, rss: Number(status.match(/^VmRSS:\s+(\d+) kB$/m)[1]) * 1024, cpuSeconds: (Number(stat[11]) + Number(stat[12])) / 100,
        threads: Number(status.match(/^Threads:\s+(\d+)$/m)[1]), handles: readdirSync(`/proc/${pid}/fd`).length };
    }
    if (process.platform === 'darwin') {
      const [rss, time] = (await run('ps', ['-o', 'rss=,time=', '-p', String(pid)])).trim().split(/\s+/);
      const lsof = await run('lsof', ['-n', '-P', '-p', String(pid)]);
      const cpuSeconds = time.split(':').reduce((total, part) => total * 60 + Number(part), 0);
      return { at, rss: Number(rss) * 1024, cpuSeconds, handles: lsof ? lsof.trim().split('\n').length - 1 : null };
    }
    const out = await run('powershell.exe', ['-NoProfile', '-NonInteractive', '-Command',
      `$p = Get-Process -Id ${pid}; "$($p.WorkingSet64) $($p.HandleCount) $($p.Threads.Count) $($p.PrivateMemorySize64) $($p.TotalProcessorTime.TotalSeconds)"`]);
    const [rss, handles, threads, privateBytes, cpuSeconds] = out.trim().split(/\s+/).map(Number);
    return { at, rss, handles, threads, privateBytes, cpuSeconds };
  } catch (error) { return { at, error: error.message }; }
}

// ---------- server lifecycle ----------
async function startServer(kind) {
  const directory = mkdtempSync(join(tmpdir(), `lasm-robust-${kind}-`));
  const childEnv = { PATH: '', HOME: directory, ROBUSTNESS_GREETING: GREETING };
  // Windows processes need their system directories (Winsock reads SystemRoot).
  if (process.platform === 'win32') {
    for (const name of ['SystemRoot', 'windir', 'TEMP', 'TMP', 'USERPROFILE'])
      if (process.env[name]) childEnv[name] = process.env[name];
    childEnv.PATH = process.env.PATH ?? '';
  }
  const diagFile = join(directory, 'diag.jsonl');
  const child = kind === 'lasm'
    ? spawn(engine, ['--import', pathToFileURL(diagModule).href,
      join(manifest.deployed, 'main.mjs'), '0'], { cwd: directory, env: { ...childEnv, LASM_ROBUSTNESS_DIAG: diagFile,
      ...(env.ROBUSTNESS_DIAG_WORKERS ? { LASM_ROBUSTNESS_DIAG_WORKERS: '1' } : {}) } })
    : spawn(manifest.nativeExecutable, ['0'], { cwd: directory, env: childEnv });
  const server = { kind, child, directory, diagFile, stdout: '', stderrLines: 0, stderrSample: [], exit: null };
  let pending = '';
  child.stderr.on('data', bytes => {
    pending += bytes; const lines = pending.split('\n'); pending = lines.pop();
    for (const line of lines) {
      server.stderrLines++;
      const key = line.replace(/\d+/g, 'N').slice(0, 160);
      const found = server.stderrSample.find(s => s.line === key);
      if (found) found.count++; else if (server.stderrSample.length < 30) server.stderrSample.push({ line: key, count: 1 });
    }
  });
  child.on('exit', (code, signal) => { server.exit = { code, signal, at: Date.now() }; });
  const started = Date.now();
  server.base = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => reject(new Error('startup timeout')), 120_000);
    child.stdout.on('data', bytes => {
      server.stdout += bytes;
      const match = server.stdout.match(/Listening on http:\/\/([\d.]+):(\d+)/);
      if (match) { clearTimeout(timer); resolve({ host: match[1], port: Number(match[2]) }); }
    });
    child.once('exit', code => { clearTimeout(timer); reject(new Error(`exited ${code}`)); });
  });
  server.startupSeconds = (Date.now() - started) / 1000;
  return server;
}
const alive = server => server.exit === null && server.child.exitCode === null;
let currentServer;
// RSS watchdog for the whole suite: a leaking server is stopped and recorded.
function watch(server) {
  let busy = false;
  const timer = setInterval(async () => {
    if (busy || !alive(server) || server.capExceeded) return;
    busy = true;
    const sample = await sampleProcess(server.child.pid).finally(() => { busy = false; });
    // Windows Job Objects count committed private bytes, which run ahead of the working set.
    const used = Math.max(sample.rss ?? 0, sample.privateBytes ?? 0);
    server.peakRss = Math.max(server.peakRss ?? 0, used);
    if (used > config.maxServerRssBytes) {
      server.capExceeded = { rssMiB: Math.round(used / 1024 ** 2), atSeconds: Math.round((Date.now() - server.startedAt) / 1000), phase: server.phase };
      log(`${server.kind} exceeded the ${config.maxServerRssBytes / 1024 ** 2} MiB memory cap in ${server.phase}: stopping it`);
      server.child.kill('SIGKILL');
    }
  }, 1000);
  timer.unref();
  return () => clearInterval(timer);
}
function readDiag(server) {
  try { return readFileSync(server.diagFile, 'utf8').trim().split('\n').filter(Boolean).map(line => JSON.parse(line)); }
  catch { return []; }
}

// ---------- faults ----------
const H = 'Host: robustness\r\n';
function faultClasses(scale) {
  const n = k => Math.max(1, Math.round(k * scale));
  const big = 'X'.repeat(5000);
  return [
    { name: 'handler-exception', expect: '500 then server closes', cases: [
      { name: 'GET /throw', n: n(50), steps: [`GET /throw HTTP/1.1\r\n${H}\r\n`] },
      { name: 'pipelined /throw then /health', n: n(10), steps: [`GET /throw HTTP/1.1\r\n${H}\r\nGET /health HTTP/1.1\r\n${H}\r\n`] },
      { name: 'JSON body over the handler readAll limit (64 KiB)', n: n(10),
        steps: [`POST /json HTTP/1.1\r\n${H}Content-Length: 100000\r\n\r\n`, 'x'.repeat(100000)] } ] },
    { name: 'malformed', expect: '4xx/5xx status then close', cases: [
      { name: 'garbage request line', n: n(20), steps: ['GARBAGE / NOPE\r\n\r\n'] },
      { name: 'header without colon', n: n(20), steps: [`GET /health HTTP/1.1\r\n${H}NoColonHeader\r\n\r\n`] },
      { name: 'unsupported HTTP version', n: n(20), steps: [`GET /health HTTP/7.0\r\n${H}\r\n`] },
      { name: 'missing Host', n: n(20), steps: ['GET /health HTTP/1.1\r\n\r\n'] },
      { name: 'invalid chunk size', n: n(20), steps: [`POST /echo HTTP/1.1\r\n${H}Transfer-Encoding: chunked\r\n\r\nzz\r\nhello\r\n0\r\n\r\n`] },
      { name: 'Content-Length with Transfer-Encoding', n: n(20), steps: [`POST /echo HTTP/1.1\r\n${H}Content-Length: 5\r\nTransfer-Encoding: chunked\r\n\r\n0\r\n\r\n`] },
      { name: 'binary garbage with NUL', n: n(20), steps: [Buffer.from(Array.from({ length: 64 }, (_, i) => (i * 37) % 256))] } ] },
    { name: 'oversized', expect: 'limit status then close', cases: [
      { name: 'Content-Length 2 MiB > maxBodySize', n: n(5), steps: [`POST /echo HTTP/1.1\r\n${H}Content-Length: 2097152\r\n\r\n`, { writeBytes: 2097152 }] },
      { name: 'chunked 2 MiB > maxBodySize', n: n(5), steps: [`POST /echo HTTP/1.1\r\n${H}Transfer-Encoding: chunked\r\n\r\n`, { writeBytes: 2097152, chunked: true }] },
      { name: 'headers 20 KiB > maxHeaderBytes', n: n(10), steps: [`GET /health HTTP/1.1\r\n${H}` + [1, 2, 3, 4].map(i => `X-Big-${i}: ${big}\r\n`).join('') + '\r\n'] },
      { name: '60 headers > maxHeaders', n: n(10), steps: [`GET /health HTTP/1.1\r\n${H}` + Array.from({ length: 60 }, (_, i) => `X-H${i}: v\r\n`).join('') + '\r\n'] },
      { name: 'header value 9000 B > maxHeaderValueLength', n: n(10), steps: [`GET /health HTTP/1.1\r\n${H}X-Long: ${'v'.repeat(9000)}\r\n\r\n`] },
      { name: 'URI 9000 B > maxUriLength', n: n(10), steps: [`GET /${'a'.repeat(9000)} HTTP/1.1\r\n${H}\r\n`] } ] },
    { name: 'slow-client', expect: 'server closes after its header/lingering timeout', cases: [
      { name: 'slow-loris: one header byte every 250 ms', n: n(5), parallel: true, timeoutMs: 20_000,
        steps: ['GET /health HTTP/1.1\r\n', ...Array.from({ length: 60 }, () => [{ delay: 250 }, 'X']).flat()] },
      { name: 'partial headers then silence', n: n(5), parallel: true, timeoutMs: 20_000, steps: [`GET /health HTTP/1.1\r\n${H}`] },
      { name: 'partial body then silence', n: n(5), parallel: true, timeoutMs: 20_000, steps: [`POST /echo HTTP/1.1\r\n${H}Content-Length: 1000\r\n\r\n`, 'x'.repeat(100)] } ] },
    { name: 'client-disconnect', expect: 'client goes away; server continues', cases: [
      { name: 'half request line then FIN', n: n(30), steps: ['GET /hea', { end: true }, { delay: 50 }, { destroy: true }] },
      { name: 'partial body then destroy', n: n(30), steps: [`POST /echo HTTP/1.1\r\n${H}Content-Length: 1000\r\n\r\n`, 'x'.repeat(100), { delay: 20 }, { destroy: true }] },
      { name: 'incomplete chunked body then destroy', n: n(30), steps: [`POST /echo HTTP/1.1\r\n${H}Transfer-Encoding: chunked\r\n\r\n100\r\nabc`, { delay: 20 }, { destroy: true }] },
      { name: 'mid-response (1 MiB, after 64 KiB)', n: n(30), steps: [`GET /big/1024 HTTP/1.1\r\n${H}\r\n`], afterBytes: 65536 },
      { name: 'mid-stream (/stream/400, after 3 chunks)', n: n(20), steps: [`GET /stream/400 HTTP/1.1\r\n${H}\r\n`], afterBytes: 200 },
      { name: 'during slow handler', n: n(20), steps: [`GET /slow/300 HTTP/1.1\r\n${H}\r\n`, { delay: 50 }, { destroy: true }] } ] },
    { name: 'reset', expect: 'TCP RST from client; server continues', cases: [
      { name: 'RST mid-headers', n: n(30), steps: [`GET /health HTTP/1.1\r\n${H}X-Partial`, { delay: 20 }, { reset: true }] },
      { name: 'RST after request, before response', n: n(30), steps: [`GET /slow/200 HTTP/1.1\r\n${H}\r\n`, { delay: 30 }, { reset: true }] },
      { name: 'RST mid-upload', n: n(30), steps: [`POST /echo HTTP/1.1\r\n${H}Transfer-Encoding: chunked\r\n\r\n400\r\n` + 'y'.repeat(512), { delay: 20 }, { reset: true }] },
      { name: 'RST mid-response (1 MiB)', n: n(30), steps: [`GET /big/1024 HTTP/1.1\r\n${H}\r\n`], afterBytes: 65536, afterBytesAction: 'reset' },
      { name: 'RST mid-stream', n: n(20), steps: [`GET /stream/400 HTTP/1.1\r\n${H}\r\n`], afterBytes: 200, afterBytesAction: 'reset' } ] },
  ];
}
// Outcomes that depend only on client timing are normalized before comparison.
function normalize(caseName, r) {
  if (/destroy|FIN|RST|mid-response|mid-stream/.test(caseName) && /^client/.test(r.ended)) return `${r.status ?? 'none'}/client`;
  if (caseName.startsWith('slow-loris') || caseName.includes('silence'))
    return `${r.status ?? 'none'}/${r.ended}/${r.ms < 1000 ? '<1s' : r.ms < 6000 ? '1-6s' : r.ms < 12000 ? '6-12s' : '>=12s'}`;
  return outcome(r);
}
async function runFaults(server) {
  const results = [];
  for (const fault of faultClasses(config.faultScale)) {
    const before = await sampleProcess(server.child.pid), cases = [];
    for (const c of fault.cases) {
      log(`${server.kind} fault ${fault.name}: ${c.name} x${c.n}`);
      const outcomes = {}, timings = [];
      const once = async () => {
        const r = await raw(server.base, c.steps, { timeoutMs: c.timeoutMs ?? 15_000, afterBytes: c.afterBytes, afterBytesAction: c.afterBytesAction });
        const key = normalize(c.name, r); outcomes[key] = (outcomes[key] ?? 0) + 1; timings.push(r.ms);
        if (c.name.startsWith('pipelined')) { const k = 'statuses ' + r.statuses.join(','); outcomes[k] = (outcomes[k] ?? 0) + 1; }
      };
      let during;
      if (c.parallel) {
        // Hold several slow connections open while normal clients keep getting served.
        const holding = Promise.all(Array.from({ length: c.n }, once));
        await sleep(300); during = await verifyBatch(server.base, 20, 11); await holding;
      } else for (let i = 0; i < c.n; i++) await once();
      cases.push({ name: c.name, repetitions: c.n, outcomes, maxMs: Math.max(...timings), servedDuring: during });
    }
    const after = await verifyBatch(server.base, 30, 13), sample = await sampleProcess(server.child.pid);
    results.push({ name: fault.name, expect: fault.expect, cases, verifiedAfter: after, alive: alive(server),
      rssBefore: before.rss, rssAfter: sample.rss, handlesBefore: before.handles, handlesAfter: sample.handles });
  }
  log(`${server.kind} idle connections`);
  // Many idle connections: open, serve normal traffic, watch the server's idle timeout.
  const idleCount = Math.max(10, Math.round(300 * Math.min(1, config.faultScale)));
  const idle = await new Promise(resolve => {
    const sockets = []; let closed = 0, opened = 0;
    for (let i = 0; i < idleCount; i++) {
      const s = connect(server.base.port, server.base.host);
      s.on('connect', () => { opened++; if (opened === idleCount) resolve({ sockets, get closed() { return closed; }, opened }); });
      s.on('close', () => { closed++; }); s.on('error', () => {});
      sockets.push(s);
    }
    setTimeout(() => resolve({ sockets, get closed() { return closed; }, opened }), 10_000);
  });
  const openedAt = Date.now();
  const servedWhileIdle = await verifyBatch(server.base, 100, 17);
  const closedAfter = {};
  for (const wait of [3000, 8000, 14000]) { await sleep(Math.max(0, openedAt + wait - Date.now())); closedAfter[`${wait}ms`] = idle.closed; }
  idle.sockets.forEach(s => s.destroy());
  await sleep(500);
  results.push({ name: 'idle-connections', expect: 'traffic served while idle sockets are held; server closes idle ones on timeout',
    cases: [{ name: `${idleCount} idle TCP connections`, repetitions: 1, outcomes: { opened: idle.opened, ...Object.fromEntries(
      Object.entries(closedAfter).map(([k, v]) => [`closedByServerWithin${k}`, v])) }, servedDuring: servedWhileIdle }],
    verifiedAfter: await verifyBatch(server.base, 30, 19), alive: alive(server) });
  // Informational: answering before consuming the request body (upstream behaviour).
  let full = 0, short = 0;
  const liveAgent = new http.Agent({ keepAlive: false });
  for (let i = 0; i < Math.max(10, Math.round(100 * config.faultScale)); i++) {
    const body = pattern.subarray(0, 1000);
    const r = await send(liveAgent, server.base, { method: 'POST', path: '/echo-live', body, chunked: true });
    if (!r.error && r.status === 200 && Buffer.compare(r.body, body) === 0) full++; else short++;
  }
  results.push({ name: 'echo-live-race (informational)', informational: true,
    cases: [{ name: 'respond before consuming the request body', outcomes: { fullEcho: full, shortOrEmpty: short } }], alive: alive(server) });
  return results;
}

// ---------- soak ----------
const soakFaults = [
  [`GET /throw HTTP/1.1\r\n${H}\r\n`], ['GARBAGE / NOPE\r\n\r\n'],
  [`POST /echo HTTP/1.1\r\n${H}Content-Length: 1000\r\n\r\n`, 'x'.repeat(100), { delay: 20 }, { destroy: true }],
  [`GET /big/1024 HTTP/1.1\r\n${H}\r\n`, { delay: 5 }, { reset: true }],
  [`GET /health HTTP/1.1\r\n${H}` + Array.from({ length: 60 }, (_, i) => `X-H${i}: v\r\n`).join('') + '\r\n'],
  [`GET /stream/50 HTTP/1.1\r\n${H}\r\n`, { delay: 40 }, { destroy: true }],
];
function slope(points) { // bytes per minute, least squares over (at ms, value)
  if (points.length < 3) return null;
  const xs = points.map(p => p.at / 60000), ys = points.map(p => p.v);
  const mx = xs.reduce((a, b) => a + b) / xs.length, my = ys.reduce((a, b) => a + b) / ys.length;
  const num = xs.reduce((a, x, i) => a + (x - mx) * (ys[i] - my), 0), den = xs.reduce((a, x) => a + (x - mx) ** 2, 0);
  return den === 0 ? 0 : num / den;
}
const median = values => { const s = [...values].sort((a, b) => a - b); return s.length ? s[Math.floor(s.length / 2)] : null; };
async function runSoak(server) {
  const samples = [], stop = { stopped: false };
  const startedAt = Date.now();
  const sampler = (async () => {
    while (!stop.stopped) { samples.push(await sampleProcess(server.child.pid)); await sleep(config.sampleMs); }
  })();
  let faultsSent = 0, faultOutcomes = {};
  const faulter = (async () => {
    while (!stop.stopped && config.soakFaultEveryMs > 0) {
      await sleep(config.soakFaultEveryMs);
      if (stop.stopped) break;
      const r = await raw(server.base, soakFaults[faultsSent % soakFaults.length], { timeoutMs: 10_000 });
      faultsSent++; const key = `${faultsSent % soakFaults.length}:${r.status ?? 'none'}`; faultOutcomes[key] = (faultOutcomes[key] ?? 0) + 1;
    }
  })();
  const load = await traffic(server.base, { connections: config.soakConnections, seconds: config.soakSeconds, seed: 99 });
  stop.stopped = true; await Promise.all([sampler, faulter]);
  samples.push(await sampleProcess(server.child.pid));
  const ok = samples.filter(s => s.rss);
  const warmupMs = Math.max(soakCriteria.minimumWarmupSeconds * 1000, config.soakSeconds * 1000 * soakCriteria.warmupFraction);
  const warm = ok.filter(s => s.at - startedAt >= warmupMs);
  const baseline = median(warm.slice(0, 5).map(s => s.rss)), final = median(warm.slice(-5).map(s => s.rss));
  const rssSlope = slope(warm.map(s => ({ at: s.at, v: s.rss })));
  const handlesBase = median(warm.slice(0, 5).map(s => s.handles).filter(v => v != null));
  const handlesFinal = median(warm.slice(-5).map(s => s.handles).filter(v => v != null));
  const diag = server.kind === 'lasm' ? readDiag(server) : [];
  const warmDiag = diag.filter(d => d.at - startedAt >= warmupMs);
  const wasmBase = warmDiag[0]?.wasmBytes ?? null, wasmFinal = warmDiag.at(-1)?.wasmBytes ?? null;
  const windowSeconds = warm.length > 1 ? (warm.at(-1).at - warm[0].at) / 1000 : 0;
  const windowRequests = load.requestsPerSecond * windowSeconds;
  const perRequest = bytes => windowRequests > 0 ? bytes / windowRequests : null;
  const requestsPerMinute = load.requestsPerSecond * 60;
  const slopePerRequest = rssSlope === null || !requestsPerMinute ? null : rssSlope / requestsPerMinute;
  const limit = soakCriteria.maxBytesPerRequest;
  const checks = {
    errors: load.errors === 0,
    samples: warm.length >= 5,
    slope: slopePerRequest !== null && slopePerRequest <= limit,
    final: final !== null && final - baseline <= limit * windowRequests + soakCriteria.finalAllowanceBytes,
    handles: handlesBase == null || handlesFinal <= handlesBase + soakCriteria.maxHandleGrowth,
    wasm: server.kind !== 'lasm' || (wasmBase !== null && wasmFinal - wasmBase <= limit * windowRequests + soakCriteria.wasmAllowanceBytes),
    alive: alive(server),
  };
  const growth = { windowSeconds: Math.round(windowSeconds), windowRequests: Math.round(windowRequests),
    slopeBytesPerRequest: slopePerRequest === null ? null : Math.round(slopePerRequest * 10) / 10,
    finalMinusBaselineBytesPerRequest: final === null || baseline === null ? null : Math.round(perRequest(final - baseline) * 10) / 10,
    wasmBytesPerRequest: wasmBase === null || wasmFinal === null ? null : Math.round(perRequest(wasmFinal - wasmBase) * 10) / 10 };
  const mib = b => b == null ? null : Math.round(b / 1024 ** 2 * 100) / 100;
  return { seconds: config.soakSeconds, connections: config.soakConnections, load, faultsSent, faultOutcomes, growth,
    memory: { warmupSeconds: warmupMs / 1000, samples: ok.length, warmSamples: warm.length,
      startMiB: mib(ok[0]?.rss), peakMiB: mib(Math.max(...ok.map(s => s.rss))), warmBaselineMiB: mib(baseline), finalMiB: mib(final),
      slopeMiBPerMinute: rssSlope === null ? null : Math.round(rssSlope / 1024 ** 2 * 1000) / 1000,
      handles: { base: handlesBase, final: handlesFinal, peak: Math.max(...ok.map(s => s.handles ?? 0)) },
      threads: { final: ok.at(-1)?.threads ?? null },
      wasm: server.kind === 'lasm' ? { samples: diag.length, warmBaselineMiB: mib(wasmBase), finalMiB: mib(wasmFinal),
        peakMiB: mib(Math.max(0, ...diag.map(d => d.wasmBytes))),
        heapUsedSlopeMiBPerMinute: warmDiag.length > 2 ? Math.round(slope(warmDiag.map(d => ({ at: d.at, v: d.heapUsed }))) / 1024 ** 2 * 1000) / 1000 : null,
        finalHeapUsedMiB: mib(diag.at(-1)?.heapUsed), finalExternalMiB: mib(diag.at(-1)?.external) } : undefined,
      series: ok.map(s => [Math.round((s.at - startedAt) / 1000), mib(s.rss), s.handles ?? null]) },
    checks, passed: Object.values(checks).every(Boolean) };
}

// ---------- main ----------
async function suite(kind) {
  // A server stopped by the RSS cap (or that crashed) is recorded and replaced
  // by a fresh process before the next phase, so later phases still report.
  const result = { kind, restarts: [], memoryCaps: [], stderr: { lines: 0, distinct: [] } };
  let server, unwatch = () => {};
  const retire = () => {
    unwatch();
    if (alive(server)) server.child.kill('SIGKILL');
    if (server.capExceeded) result.memoryCaps.push(server.capExceeded);
    result.peakRssMiB = Math.max(result.peakRssMiB ?? 0, Math.round((server.peakRss ?? 0) / 1024 ** 2));
    result.stderr.lines += server.stderrLines;
    for (const line of server.stderrSample) {
      const found = result.stderr.distinct.find(d => d.line === line.line);
      if (found) found.count += line.count; else result.stderr.distinct.push({ ...line });
    }
    result.stdout ??= server.stdout.slice(0, 2000);
    if (!env.ROBUSTNESS_KEEP_SERVER_DIRECTORY) try { rmSync(server.directory, { recursive: true, force: true }); } catch {}
  };
  const begin = async phase => {
    if (server) {
      result.restarts.push({ beforePhase: phase, reason: server.capExceeded ? 'memory cap' : `exited ${JSON.stringify(server.exit)}` });
      log(`${kind}: restarting the server before ${phase}`);
      retire();
    }
    server = await startServer(kind);
    currentServer = server; server.startedAt = Date.now(); server.phase = phase;
    unwatch = watch(server);
    result.startupSeconds ??= server.startupSeconds;
  };
  const ensure = async phase => { if (!alive(server) || server.capExceeded) await begin(phase); server.phase = phase; };
  try {
    await begin('preflight');
    result.preflight = await verifyBatch(server.base, 60, 3);
    result.load = [];
    for (const connections of config.phases.includes('load') ? config.loadConnections : []) {
      await ensure(`load c=${connections}`);
      log(`${kind} load c=${connections}`);
      const before = await sampleProcess(server.child.pid), driverBefore = process.cpuUsage();
      const load = await traffic(server.base, { connections, seconds: config.loadSeconds, warmup: config.loadWarmupSeconds, seed: 1000 + connections });
      const after = await sampleProcess(server.child.pid), driver = process.cpuUsage(driverBefore);
      const wall = config.loadSeconds + config.loadWarmupSeconds;
      load.cpu = { serverCores: after.cpuSeconds != null && before.cpuSeconds != null ? Math.round((after.cpuSeconds - before.cpuSeconds) / wall * 100) / 100 : null,
        driverCores: Math.round((driver.user + driver.system) / 1e6 / wall * 100) / 100,
        serverRssMiB: after.rss ? Math.round(after.rss / 1024 ** 2) : null, threads: after.threads ?? null };
      load.memoryCapStopped = Boolean(server.capExceeded);
      if (load.memoryCapStopped) load.requestsPerSecond = null; // cut short: no throughput figure
      result.load.push(load);
    }
    result.afterLoad = alive(server) ? await sampleProcess(server.child.pid) : null;
    await ensure('faults');
    result.faults = config.phases.includes('faults') ? await runFaults(server) : [];
    if (config.soakSeconds > 0 && config.phases.includes('soak')) {
      await ensure('soak');
      log(`${kind} soak ${config.soakSeconds}s`);
      result.soak = await runSoak(server);
    } else result.soak = null;
    await ensure('final');
    result.final = await verifyBatch(server.base, 60, 23);
    const shutdown = await send(new http.Agent({ keepAlive: false }), server.base, { method: 'POST', path: '/shutdown' });
    result.shutdownStatus = shutdown.status;
    const deadline = Date.now() + 15_000;
    while (server.exit === null && Date.now() < deadline) await sleep(50);
    result.exit = server.exit;
  } finally {
    if (server) retire();
  }
  const loadOk = result.load.every(l => l.errors === 0 && l.requests > 0 && !l.memoryCapStopped);
  const faultsOk = result.faults.every(f => f.informational || (f.alive && f.verifiedAfter.ok && f.cases.every(c => !c.servedDuring || c.servedDuring.ok)));
  result.checks = { preflight: result.preflight.ok, load: loadOk, faults: faultsOk, soak: result.soak ? result.soak.passed : null,
    final: result.final.ok, shutdown: result.exit?.code === 0, memoryCap: result.memoryCaps.length === 0, noRestarts: result.restarts.length === 0 };
  result.passed = Object.values(result.checks).every(v => v !== false);
  return result;
}
const results = {};
for (const kind of config.kinds) {
  console.log(`[robustness] ${kind}: start`);
  results[kind] = await suite(kind);
  const r = results[kind];
  console.log(`[robustness] ${kind}: passed=${r.passed} ${JSON.stringify(r.checks)}`);
  for (const l of r.load) console.log(`  load c=${l.connections}: ${l.requestsPerSecond} req/s p50 ${l.latencyMs.p50} p95 ${l.latencyMs.p95} p99 ${l.latencyMs.p99} ms errors ${l.errors} conns ${l.connectionsOpened} cpu ${JSON.stringify(l.cpu)}`);
  if (r.soak) console.log(`  soak: ${JSON.stringify(r.soak.memory.slopeMiBPerMinute)} MiB/min base ${r.soak.memory.warmBaselineMiB} final ${r.soak.memory.finalMiB} ${JSON.stringify(r.soak.checks)}`);
}
const comparison = results.native && results.lasm ? {
  faultDifferences: compareFaults(results.native, results.lasm),
  load: results.native.load.map((n, i) => ({ connections: n.connections, nativeRps: n.requestsPerSecond, lasmRps: results.lasm.load[i]?.requestsPerSecond,
    lasmToNativeThroughput: results.lasm.load[i]?.requestsPerSecond && n.requestsPerSecond ? Math.round(results.lasm.load[i].requestsPerSecond / n.requestsPerSecond * 1000) / 1000 : null,
    nativeP99: n.latencyMs.p99, lasmP99: results.lasm.load[i]?.latencyMs.p99 })),
  startupSeconds: { native: results.native.startupSeconds, lasm: results.lasm.startupSeconds },
} : null;
const report = { scope: 'Server MVP step 1 robustness: load, faults and soak, native Lean vs Lasm in Node',
  platform: `${process.platform}-${process.arch}`, os: release(), cpus: cpus().length, cpuModel: cpus()[0]?.model, totalMemoryBytes: totalmem(),
  driverNode: process.version, engine, engineVersion: (await run(engine, ['--version']))?.trim(),
  build: { lean: manifest.lean, linkDriver: manifest.linkDriver, sourceSha256: manifest.sourceSha256, wasmBytes: manifest.wasmBytes,
    nativeBytes: manifest.nativeBytes, lasmBuildSeconds: manifest.lasmBuildSeconds, nativeBuildSeconds: manifest.nativeBuildSeconds },
  config, soakCriteria, results, comparison,
  passed: Object.values(results).every(r => r.passed) && (!comparison || comparison.faultDifferences.every(d => d.informational)),
  recordedAt: new Date().toISOString() };
writeFileSync(outputFile, JSON.stringify(report, null, 1) + '\n');
if (comparison) {
  console.log('[robustness] fault differences:', JSON.stringify(comparison.faultDifferences, null, 1));
  console.log('[robustness] load:', JSON.stringify(comparison.load));
}
console.log(`[robustness] passed=${report.passed} -> ${outputFile}`);
process.exitCode = report.passed ? 0 : 1;
