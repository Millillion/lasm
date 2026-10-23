// Interop soak (Phase 5.2): an Express or Hono app with Lean handlers (built from
// the `lasm init` template plus the error routes in this directory) under
// steady keep-alive load for a long time, with a mix of error paths: thrown Lean
// errors, rejected JavaScript promises (uncaught and caught in Lean), timers,
// and client disconnects (requests aborted while the Lean handler waits).
//   node soak.mjs CANDIDATE_TGZ WORK_DIR RESULT.json --app express|hono
//        [--seconds 7200] [--connections 16] [--sample-ms 5000]
// LASM_INIT_FROM_SOURCE=1 creates the project with this checkout's `lasm init`.
// Tracked: RSS, Wasm linear memory, the main isolate's heap, Lasm.JS live
// handles, pending callbacks and live Lean functions, error rate and per-minute
// p50/p99. Memory criteria follow scripts/server-mvp/robustness.mjs (256 bytes
// per request after warm-up).
import assert from 'node:assert/strict';
import { spawn, spawnSync, execFile } from 'node:child_process';
import { copyFileSync, existsSync, mkdirSync, readdirSync, readFileSync, writeFileSync } from 'node:fs';
import http from 'node:http';
import net from 'node:net';
import { dirname, join, resolve } from 'node:path';
import { fileURLToPath, pathToFileURL } from 'node:url';
import { setTimeout as sleep } from 'node:timers/promises';

const argv = process.argv.slice(2);
const option = (name, fallback) => { const i = argv.indexOf(name); if (i < 0) return fallback; const [, v] = argv.splice(i, 2); return v; };
const app = option('--app', 'express');
const seconds = Number(option('--seconds', 7200));
const connections = Number(option('--connections', 16));
const sampleMs = Number(option('--sample-ms', 5000));
const [tgzArg, workArg, resultArg] = argv;
assert.ok(tgzArg && workArg && resultArg && ['express', 'hono'].includes(app), 'Usage: node soak.mjs CANDIDATE_TGZ WORK_DIR RESULT.json --app express|hono [--seconds N] [--connections N]');
const tgz = resolve(tgzArg), work = resolve(workArg), resultFile = resolve(resultArg);
assert.ok(!existsSync(work), 'Use a new work directory');
const here = dirname(fileURLToPath(import.meta.url));
const root = resolve(here, '../..');
const criteria = { warmupFraction: 0.25, minimumWarmupSeconds: 120, maxBytesPerRequest: 256,
  finalAllowanceBytes: 32 * 1024 ** 2, wasmAllowanceBytes: 16 * 1024 ** 2, maxHandleGrowth: 64, p99Drift: 2, p99SlackMs: 5 };
const result = { app, platform: `${process.platform}-${process.arch}`, node: process.version, candidate: tgz,
  seconds, connections, criteria, startedAt: new Date().toISOString(), steps: [], minutes: [] };
const save = () => writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
const t0 = Date.now();
const log = message => console.log(`[soak ${app} +${((Date.now() - t0) / 1000).toFixed(0)}s] ${message}`);
const tool = name => process.platform === 'win32'
  ? [process.execPath, join(dirname(process.execPath), `node_modules/npm/bin/${name}-cli.js`)]
  : [join(dirname(process.execPath), name)];
function run(label, [command, ...base], args, cwd) {
  const started = performance.now();
  const r = spawnSync(command, [...base, ...args], { cwd, encoding: 'utf8', timeout: 3600_000, maxBuffer: 64 * 1024 * 1024,
    env: { ...process.env, npm_config_audit: 'false', npm_config_fund: 'false', npm_config_update_notifier: 'false' } });
  result.steps.push({ label, code: r.status, seconds: Math.round((performance.now() - started) / 100) / 10,
    stderr: r.stderr?.slice(-4000), error: r.error?.message }); save();
  assert.equal(r.status, 0, `${label} failed: ${r.stderr?.slice(-4000)}`);
  return r;
}

// ---------- process sampling (as scripts/server-mvp/robustness.mjs) ----------
const runText = (command, args) => new Promise(done => execFile(command, args, { timeout: 20_000, windowsHide: true },
  (error, stdout) => done(error ? null : stdout)));
async function sampleProcess(pid) {
  const at = Date.now();
  try {
    if (process.platform === 'linux') {
      const status = readFileSync(`/proc/${pid}/status`, 'utf8');
      return { at, rss: Number(status.match(/^VmRSS:\s+(\d+) kB$/m)[1]) * 1024,
        threads: Number(status.match(/^Threads:\s+(\d+)$/m)[1]), handles: readdirSync(`/proc/${pid}/fd`).length };
    }
    if (process.platform === 'darwin') {
      const rss = (await runText('ps', ['-o', 'rss=', '-p', String(pid)])).trim();
      const lsof = await runText('lsof', ['-n', '-P', '-p', String(pid)]);
      return { at, rss: Number(rss) * 1024, handles: lsof ? lsof.trim().split('\n').length - 1 : null };
    }
    const out = await runText('powershell.exe', ['-NoProfile', '-NonInteractive', '-Command',
      `$p = Get-Process -Id ${pid}; "$($p.WorkingSet64) $($p.HandleCount) $($p.Threads.Count)"`]);
    const [rss, handles, threads] = out.trim().split(/\s+/).map(Number);
    return { at, rss, handles, threads };
  } catch (error) { return { at, error: error.message }; }
}
function slope(points) { // value per minute, least squares over (at ms, v)
  if (points.length < 3) return null;
  const xs = points.map(p => p.at / 60000), ys = points.map(p => p.v);
  const mx = xs.reduce((a, b) => a + b) / xs.length, my = ys.reduce((a, b) => a + b) / ys.length;
  const num = xs.reduce((a, x, i) => a + (x - mx) * (ys[i] - my), 0), den = xs.reduce((a, x) => a + (x - mx) ** 2, 0);
  return den === 0 ? 0 : num / den;
}
const median = values => { const s = values.filter(v => v != null).sort((a, b) => a - b); return s.length ? s[Math.floor(s.length / 2)] : null; };
const percentile = (sorted, p) => sorted.length ? sorted[Math.min(sorted.length - 1, Math.floor(p / 100 * sorted.length))] : null;
const mib = b => b == null ? null : Math.round(b / 1024 ** 2 * 100) / 100;

// ---------- load ----------
// [name, weight, method, path, body, check]; slow-abort requests are aborted after 50 ms.
const mix = [
  ['hello', 55, 'GET', '/hello/Ada', null, r => r.status === 200 && JSON.parse(r.body).message === 'Hello, Ada, from Lean!'],
  ['echo', 15, 'POST', '/echo', { n: [1, 2, 3], s: 'λ soak' }, r => r.status === 200 && JSON.parse(r.body).echo?.s === 'λ soak'],
  ['throw', 5, 'GET', '/throw', null, r => r.status === 500],
  ['reject', 5, 'GET', '/reject', null, r => r.status === 500],
  ['reject-caught', 5, 'GET', '/reject-caught', null, r => r.status === 404 && /ENOENT/.test(JSON.parse(r.body).error)],
  ['slow', 10, 'GET', '/slow/20', null, r => r.status === 200 && JSON.parse(r.body).slept === 20],
  ['slow-abort', 5, 'GET', '/slow/300', null, null],
];
const totalWeight = mix.reduce((a, m) => a + m[1], 0);
function pick(random) {
  let x = random() * totalWeight;
  for (const m of mix) { if ((x -= m[1]) < 0) return m; }
  return mix[0];
}
function prng(seed) { let s = seed >>> 0; return () => { s = (s + 0x6D2B79F5) >>> 0; let t = s; t = Math.imul(t ^ (t >>> 15), t | 1); t ^= t + Math.imul(t ^ (t >>> 7), t | 61); return ((t ^ (t >>> 14)) >>> 0) / 4294967296; }; }
function send(agent, port, [, , method, path, body], abortMs) {
  return new Promise(done => {
    const started = performance.now();
    const payload = body ? Buffer.from(JSON.stringify(body)) : null;
    const req = http.request({ host: '127.0.0.1', port, method, path, agent,
      headers: payload ? { 'content-type': 'application/json', 'content-length': payload.length } : {} }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => done({ status: res.statusCode, body: Buffer.concat(chunks).toString(), ms: performance.now() - started }));
      res.on('error', error => done({ error: error.code ?? error.message, ms: performance.now() - started }));
    });
    req.setTimeout(30_000, () => req.destroy(Object.assign(new Error('timeout'), { code: 'CLIENT_TIMEOUT' })));
    req.on('error', error => done({ error: error.code ?? error.message, ms: performance.now() - started, aborted: req.lasmAborted }));
    if (abortMs) setTimeout(() => { req.lasmAborted = true; req.destroy(); }, abortMs);
    req.end(payload ?? undefined);
  });
}
function newBucket(at) { return { at, requests: 0, errors: 0, byRoute: {}, latencies: [] }; }

// ---------- main ----------
let server;
try {
  mkdirSync(work, { recursive: true });
  const project = join(work, `${app} soak`);
  const cli = join(work, 'cli'); mkdirSync(cli);
  if (process.env.LASM_INIT_FROM_SOURCE === '1') run('lasm init (source)', [process.execPath], [join(root, 'bin/lasm.mjs'), 'init', project, '--template', app], cli);
  else {
    run('npm install Lasm (for lasm init)', tool('npm'), ['install', '--no-save', tgz], cli);
    run('lasm init', tool('npx'), ['lasm', 'init', project, '--template', app], cli);
  }
  copyFileSync(join(here, app === 'express' ? 'Express.lean' : 'Hono.lean'), join(project, 'Main.lean'));
  run('npm install', tool('npm'), ['install', '-D', tgz], project);
  run('lasm build', tool('npm'), ['run', 'build'], project);

  const port = await new Promise((done, fail) => { const s = net.createServer(); s.once('error', fail);
    s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
  const diagFile = join(work, 'diag.jsonl');
  const output = { stdoutTail: '', stderrLines: 0, stderrSample: [] };
  const child = spawn(process.execPath, ['--import', pathToFileURL(join(root, 'scripts/server-mvp/robustness-diag.mjs')).href,
    join(project, 'dist/main.mjs')], { cwd: project, stdio: ['ignore', 'pipe', 'pipe'],
    env: { ...process.env, HOST: '127.0.0.1', PORT: String(port), LASM_ROBUSTNESS_DIAG: diagFile, LASM_ROBUSTNESS_DIAG_MS: String(sampleMs) } });
  server = { child, exit: null };
  child.once('exit', (code, signal) => { server.exit = { code, signal, at: Date.now() }; });
  child.stdout.on('data', b => { output.stdoutTail = (output.stdoutTail + b).slice(-4000); });
  let partial = '';
  child.stderr.on('data', b => {
    const lines = (partial + b).split('\n'); partial = lines.pop();
    output.stderrLines += lines.length;
    for (const line of lines) if (output.stderrSample.length < 20 || /^(?!\s+at )/.test(line) && output.stderrSample.length < 60) output.stderrSample.push(line.slice(0, 300));
  });
  for (let i = 0; i < 600 && !/Listening on/.test(output.stdoutTail); i++) { assert.equal(server.exit, null, output.stdoutTail); await sleep(200); }
  assert.match(output.stdoutTail, /Listening on/);
  const readDiag = () => { try { return readFileSync(diagFile, 'utf8').trim().split('\n').filter(Boolean).map(l => JSON.parse(l)); } catch { return []; } };
  const statsNow = async () => {
    const agent = new http.Agent({ keepAlive: false });
    const r = await send(agent, port, [, , 'GET', '/stats']);
    return r.status === 200 ? JSON.parse(r.body) : { error: r.error ?? r.status };
  };

  // Warm every route once, then record the idle baseline.
  const warmAgent = new http.Agent({ keepAlive: true, maxSockets: 1 });
  for (const m of mix) if (m[0] !== 'slow-abort') { const r = await send(warmAgent, port, m); assert.ok(m[5](r), `${m[0]}: ${JSON.stringify(r)}`); }
  warmAgent.destroy();
  await sleep(2000);
  result.idleBefore = await statsNow();
  log(`ready on ${port}; idle stats ${JSON.stringify(result.idleBefore.js)}`);

  // Steady load.
  const agent = new http.Agent({ keepAlive: true, maxSockets: connections });
  const samples = [];
  const errorSamples = [];
  let bucket = newBucket(Date.now());
  const totals = { requests: 0, errors: 0, aborted: 0, byRoute: {} };
  const deadline = Date.now() + seconds * 1000;
  const stop = { stopped: false };
  const flush = () => {
    const sorted = bucket.latencies.sort((a, b) => a - b);
    const sample = samples.at(-1);
    const diag = readDiag().at(-1);
    result.minutes.push({ minute: result.minutes.length + 1, requests: bucket.requests, errors: bucket.errors, byRoute: bucket.byRoute,
      p50: Math.round(percentile(sorted, 50) * 100) / 100, p99: Math.round(percentile(sorted, 99) * 100) / 100,
      rssMiB: mib(sample?.rss), wasmMiB: mib(diag?.wasmBytes), heapUsedMiB: mib(diag?.heapUsed), handles: sample?.handles, threads: sample?.threads, js: diag?.js });
    const last = result.minutes.at(-1);
    log(`minute ${last.minute}: ${last.requests} req, ${last.errors} errors, p99 ${last.p99} ms, RSS ${last.rssMiB} MiB, Wasm ${last.wasmMiB} MiB, JS values ${last.js?.values} pending ${last.js?.pendingCalls}`);
    bucket = newBucket(Date.now());
    save();
  };
  const sampler = (async () => {
    while (!stop.stopped) {
      samples.push(await sampleProcess(child.pid));
      if (Date.now() - bucket.at >= 60_000) flush();
      await sleep(sampleMs);
    }
  })();
  const worker = async seed => {
    const random = prng(seed);
    while (Date.now() < deadline && server.exit === null) {
      const m = pick(random);
      const r = await send(agent, port, m, m[0] === 'slow-abort' ? 50 : 0);
      const ok = m[0] === 'slow-abort' ? r.aborted === true : !r.error && m[5](r);
      bucket.requests++; totals.requests++;
      bucket.byRoute[m[0]] = (bucket.byRoute[m[0]] ?? 0) + 1; totals.byRoute[m[0]] = (totals.byRoute[m[0]] ?? 0) + 1;
      if (m[0] === 'slow-abort') totals.aborted++;
      if (!ok) {
        bucket.errors++; totals.errors++;
        if (errorSamples.length < 50) errorSamples.push({ at: Date.now() - t0, route: m[0], status: r.status, error: r.error, body: r.body?.slice(0, 300) });
      } else if (m[0] === 'hello' || m[0] === 'echo') bucket.latencies.push(r.ms);
    }
  };
  const loadStarted = Date.now();
  await Promise.all(Array.from({ length: connections }, (_, i) => worker(1000 + i)));
  const loadSeconds = (Date.now() - loadStarted) / 1000;
  stop.stopped = true; await sampler;
  if (bucket.requests) flush();
  agent.destroy();
  // Idle: callbacks and handles must drain.
  await sleep(10_000);
  samples.push(await sampleProcess(child.pid));
  result.idleAfter = await statsNow();
  result.load = { seconds: Math.round(loadSeconds), ...totals, requestsPerSecond: Math.round(totals.requests / loadSeconds), errorSamples };

  // ---------- criteria ----------
  const warmupMs = Math.max(criteria.minimumWarmupSeconds * 1000, seconds * 1000 * criteria.warmupFraction);
  const ok = samples.filter(s => s.rss);
  const warm = ok.filter(s => s.at - loadStarted >= warmupMs);
  const diag = readDiag().filter(d => d.at - loadStarted >= warmupMs);
  const baseline = median(warm.slice(0, 5).map(s => s.rss)), final = median(warm.slice(-5).map(s => s.rss));
  const windowSeconds = warm.length > 1 ? (warm.at(-1).at - warm[0].at) / 1000 : 0;
  const windowRequests = totals.requests / loadSeconds * windowSeconds;
  const requestsPerMinute = totals.requests / loadSeconds * 60;
  const rssSlope = slope(warm.map(s => ({ at: s.at, v: s.rss })));
  const wasmBase = diag[0]?.wasmBytes ?? null, wasmFinal = diag.at(-1)?.wasmBytes ?? null;
  const valuesSlope = slope(diag.filter(d => d.js).map(d => ({ at: d.at, v: d.js.values })));
  const warmMinutes = result.minutes.filter(m => (m.minute * 60_000) >= warmupMs);
  const tenth = Math.max(1, Math.floor(warmMinutes.length / 10));
  const p99First = median(warmMinutes.slice(0, tenth).map(m => m.p99)), p99Last = median(warmMinutes.slice(-tenth).map(m => m.p99));
  const js0 = result.idleBefore.js, js1 = result.idleAfter.js;
  result.growth = {
    windowSeconds: Math.round(windowSeconds), windowRequests: Math.round(windowRequests),
    rss: { startMiB: mib(ok[0]?.rss), warmBaselineMiB: mib(baseline), finalMiB: mib(final), peakMiB: mib(Math.max(...ok.map(s => s.rss))),
      slopeBytesPerRequest: rssSlope === null ? null : Math.round(rssSlope / requestsPerMinute * 10) / 10 },
    wasm: { warmBaselineMiB: mib(wasmBase), finalMiB: mib(wasmFinal),
      bytesPerRequest: wasmBase === null || !windowRequests ? null : Math.round((wasmFinal - wasmBase) / windowRequests * 10) / 10 },
    jsValues: { idleBefore: js0?.values, idleAfter: js1?.values, slopePerMinuteUnderLoad: valuesSlope === null ? null : Math.round(valuesSlope * 100) / 100 },
    callbacks: { pendingAfter: js1?.pendingCalls, functionsLiveBefore: js0?.functionsLive, functionsLiveAfter: js1?.functionsLive,
      callbacksServed: js1?.callbacks, released: js1?.released },
    p99: { firstMs: p99First, lastMs: p99Last },
    osHandles: { base: median(warm.slice(0, 5).map(s => s.handles)), final: median(warm.slice(-5).map(s => s.handles)) },
  };
  const checks = {
    errors: totals.errors === 0,
    alive: server.exit === null,
    samples: warm.length >= 5,
    rssSlope: rssSlope !== null && rssSlope / requestsPerMinute <= criteria.maxBytesPerRequest,
    rssFinal: final !== null && final - baseline <= criteria.maxBytesPerRequest * windowRequests + criteria.finalAllowanceBytes,
    wasm: wasmBase !== null && wasmFinal - wasmBase <= criteria.maxBytesPerRequest * windowRequests + criteria.wasmAllowanceBytes,
    jsValues: js0 && js1 && js1.values <= js0.values + criteria.maxHandleGrowth,
    pendingCallbacks: js1?.pendingCalls === 0,
    // functionsLive exists since source fcda634 (older candidates do not report it).
    leanFunctions: js0 && js1 && (js1.functionsLive === undefined || js1.functionsLive <= js0.functionsLive + criteria.maxHandleGrowth),
    p99Drift: p99First !== null && p99Last !== null && p99Last <= Math.max(p99First * criteria.p99Drift, p99First + criteria.p99SlackMs),
    osHandles: result.growth.osHandles.base == null || result.growth.osHandles.final <= result.growth.osHandles.base + criteria.maxHandleGrowth,
  };
  result.checks = checks;
  result.passed = Object.values(checks).every(Boolean);
  result.server = { stdoutTail: output.stdoutTail.slice(-1000), stderrLines: output.stderrLines, stderrSample: output.stderrSample };
  log(`checks ${JSON.stringify(checks)}`);
} catch (error) {
  result.passed = false; result.error = error.stack;
} finally {
  if (server?.child && server.exit === null) {
    server.child.kill('SIGTERM');
    await Promise.race([new Promise(done => server.child.once('exit', done)), sleep(10_000)]);
    if (server.exit === null) server.child.kill('SIGKILL');
  }
  result.finishedAt = new Date().toISOString(); save();
}
console.log(JSON.stringify({ app, passed: result.passed, load: result.load && { requests: result.load.requests, rps: result.load.requestsPerSecond, errors: result.load.errors },
  checks: result.checks, growth: result.growth, error: result.error?.slice(0, 2000) }, null, 2));
process.exitCode = result.passed ? 0 : 1;
