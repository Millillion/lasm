// Concurrency probe for Lean handlers that await JavaScript: N concurrent
// requests to GET /slow/MS (the soak server's handler awaits a MS-millisecond
// JavaScript timer) against a freshly started server with LEAN_NUM_THREADS unset,
// over N keep-alive connections opened by an untimed warm-up burst.
// A handler that waits in `Async` holds no Lean thread, so all N finish in about
// MS; a handler that blocked a Lean worker would take about N / workers × MS.
//   node concurrency-probe.mjs DIST_MAIN_MJS RESULT.json [--requests 1000] [--ms 100]
//        [--cpus 0,1] [--rounds 3]
// --cpus pins the server to those CPUs with taskset (Linux; ignored elsewhere).
// Also used by soak.mjs (probe()).
import assert from 'node:assert/strict';
import { spawn, spawnSync, execFile } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import http from 'node:http';
import net from 'node:net';
import { dirname, resolve } from 'node:path';
import { fileURLToPath } from 'node:url';
import { setTimeout as sleep } from 'node:timers/promises';

const runText = (command, args) => new Promise(done => execFile(command, args, { timeout: 20_000, windowsHide: true },
  (error, stdout) => done(error ? null : stdout)));
/** OS threads of a process (Linux /proc, macOS ps -M, Windows PowerShell); null if unknown. */
export async function threadCount(pid) {
  try {
    if (process.platform === 'linux') return Number(readFileSync(`/proc/${pid}/status`, 'utf8').match(/^Threads:\s+(\d+)$/m)[1]);
    if (process.platform === 'darwin') {
      const out = await runText('ps', ['-M', '-p', String(pid)]);
      return out ? out.trim().split('\n').length - 1 : null;
    }
    const out = await runText('powershell.exe', ['-NoProfile', '-NonInteractive', '-Command', `(Get-Process -Id ${pid}).Threads.Count`]);
    return out ? Number(out.trim()) : null;
  } catch { return null; }
}

function get(port, path, agent) {
  return new Promise(done => {
    const started = performance.now();
    const req = http.request({ host: '127.0.0.1', port, path, agent }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => done({ status: res.statusCode, body: Buffer.concat(chunks).toString(), ms: performance.now() - started }));
      res.on('error', error => done({ error: error.code ?? error.message, ms: performance.now() - started }));
    });
    req.setTimeout(120_000, () => req.destroy(Object.assign(new Error('timeout'), { code: 'CLIENT_TIMEOUT' })));
    req.on('error', error => done({ error: error.code ?? error.message, ms: performance.now() - started }));
    req.end();
  });
}

/** One round: `requests` concurrent GET /slow/ms; wall time and per-request latencies. */
export async function burst(port, { requests = 1000, ms = 100, agent } = {}) {
  const started = performance.now();
  const results = await Promise.all(Array.from({ length: requests }, () => get(port, `/slow/${ms}`, agent)));
  const totalMs = performance.now() - started;
  const ok = results.filter(r => r.status === 200 && JSON.parse(r.body).slept === ms);
  const latencies = ok.map(r => r.ms).sort((a, b) => a - b);
  const at = q => latencies.length ? Math.round(latencies[Math.min(latencies.length - 1, Math.floor(q * latencies.length))]) : null;
  return { requests, ms, ok: ok.length, totalMs: Math.round(totalMs), p50Ms: at(0.5), p99Ms: at(0.99), maxMs: at(1),
    failures: results.filter(r => !ok.includes(r)).slice(0, 5).map(r => ({ status: r.status, error: r.error, body: r.body?.slice(0, 200) })) };
}

/** Starts `main` (dist/main.mjs) on a free port, runs `rounds` bursts, stops it. */
export async function probe(main, { requests = 1000, ms = 100, rounds = 3, cpus = '0,1', env = process.env } = {}) {
  const port = await new Promise((done, fail) => { const s = net.createServer(); s.once('error', fail);
    s.listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => done(port)); }); });
  const childEnv = { ...env, HOST: '127.0.0.1', PORT: String(port) };
  delete childEnv.LEAN_NUM_THREADS;
  const pin = process.platform === 'linux' && cpus && spawnSync('taskset', ['-V']).status === 0;
  const [command, args] = pin ? ['taskset', ['-c', cpus, process.execPath, main]] : [process.execPath, [main]];
  let agent;
  const child = spawn(command, args, { cwd: dirname(main), stdio: ['ignore', 'pipe', 'pipe'], env: childEnv });
  let out = '', err = '', exit = null;
  child.stdout.on('data', b => { out = (out + b).slice(-4000); });
  child.stderr.on('data', b => { err = (err + b).slice(-4000); });
  child.once('exit', (code, signal) => { exit = { code, signal }; });
  const result = { requests, ms, rounds: [], pinnedCpus: pin ? cpus : null, platform: `${process.platform}-${process.arch}`,
    cpus: (await import('node:os')).availableParallelism(), leanNumThreads: 'default (unset)' };
  try {
    for (let i = 0; i < 600 && !/Listening on/.test(out); i++) { assert.equal(exit, null, `server exited: ${out}${err}`); await sleep(100); }
    assert.match(out, /Listening on/);
    // Warm-up, not counted: opens the keep-alive connections the rounds reuse
    // (so a small accept backlog, as on macOS, does not count) and warms the JIT,
    // Lean's worker pool and libuv.
    agent = new http.Agent({ keepAlive: true, maxSockets: requests });
    const warm = await burst(port, { requests, ms: 1, agent });
    assert.equal(warm.ok, requests, JSON.stringify(warm));
    result.warmup = { totalMs: warm.totalMs, ok: warm.ok };
    await sleep(500);
    result.threadsBefore = await threadCount(child.pid);
    for (let i = 0; i < rounds; i++) {
      result.rounds.push(await burst(port, { requests, ms, agent }));
      result[`threadsAfterRound${i + 1}`] = await threadCount(child.pid);
    }
    result.threadsAfter = await threadCount(child.pid);
    result.bestTotalMs = Math.min(...result.rounds.map(r => r.totalMs));
    result.worstTotalMs = Math.max(...result.rounds.map(r => r.totalMs));
    result.allOk = result.rounds.every(r => r.ok === requests);
  } finally {
    agent?.destroy();
    child.kill('SIGTERM');
    await Promise.race([new Promise(done => child.once('exit', done)), sleep(5000)]);
    if (exit === null) child.kill('SIGKILL');
  }
  return result;
}

if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) {
  const argv = process.argv.slice(2);
  const option = (name, fallback) => { const i = argv.indexOf(name); if (i < 0) return fallback; const [, v] = argv.splice(i, 2); return v; };
  const requests = Number(option('--requests', 1000)), ms = Number(option('--ms', 100));
  const rounds = Number(option('--rounds', 3)), cpus = option('--cpus', '0,1');
  const [main, resultFile] = argv;
  assert.ok(main && resultFile, 'Usage: node concurrency-probe.mjs DIST_MAIN_MJS RESULT.json [--requests N] [--ms MS] [--cpus 0,1] [--rounds N]');
  const result = await probe(resolve(main), { requests, ms, rounds, cpus });
  writeFileSync(resultFile, JSON.stringify(result, null, 2) + '\n');
  console.log(JSON.stringify(result, null, 2));
}
