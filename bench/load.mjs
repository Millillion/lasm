// Bounded closed-loop HTTP load, dependency-free, in its own process.
//   node bench/load.mjs URL CONNECTIONS WARMUP_SECONDS MEASURE_SECONDS [THREADS]
// THREADS worker threads (default 2) share the keep-alive connections; each
// connection has one request in flight (no pipelining). After the warm-up,
// every request completed inside the measured window counts, and its latency
// (send to last byte) is recorded with microsecond resolution. Prints one JSON
// summary line. Adapted from experiments/js-interop/load.mjs.
import net from 'node:net';
import { Worker, isMainThread, parentPort, workerData } from 'node:worker_threads';
import { setTimeout as sleep } from 'node:timers/promises';

if (isMainThread) {
  const [url, connectionsArg, warmupArg, secondsArg, threadsArg = '2'] = process.argv.slice(2);
  const connections = Number(connectionsArg), warmup = Number(warmupArg), seconds = Number(secondsArg);
  const threads = Math.max(1, Math.min(Number(threadsArg), connections));
  if (!url || !(connections > 0) || !(warmup >= 0) || !(seconds > 0)) throw new Error('Usage: node load.mjs URL CONNECTIONS WARMUP_SECONDS MEASURE_SECONDS [THREADS]');
  const { hostname, port, pathname } = new URL(url);
  const start = Date.now() + 200, measureFrom = start + warmup * 1000, measureTo = measureFrom + seconds * 1000;
  const parts = await Promise.all(Array.from({ length: threads }, (_, i) => new Promise((resolve, reject) => {
    const share = Math.floor(connections / threads) + (i < connections % threads ? 1 : 0);
    const worker = new Worker(new URL(import.meta.url), { workerData: { hostname, port: Number(port), path: pathname, connections: share, start, measureFrom, measureTo } });
    worker.once('message', resolve); worker.once('error', reject);
  })));
  const latencies = new Float64Array(parts.reduce((n, p) => n + p.latencies.length, 0));
  let offset = 0;
  for (const p of parts) { latencies.set(p.latencies, offset); offset += p.latencies.length; }
  latencies.sort();
  const q = f => latencies.length ? latencies[Math.min(latencies.length - 1, Math.floor(f * latencies.length))] : null;
  const sum = parts.reduce((n, p) => n + p.sum, 0);
  const round = v => v == null ? v : Math.round(v * 1000) / 1000;
  console.log(JSON.stringify({
    connections, threads, seconds, requests: latencies.length, rps: latencies.length / seconds,
    errors: parts.reduce((n, p) => n + p.errors, 0), timeouts: 0, non2xx: parts.reduce((n, p) => n + p.non2xx, 0),
    latencyMs: { p50: round(q(0.5)), p90: round(q(0.9)), p99: round(q(0.99)), max: round(latencies.at(-1) ?? null), mean: round(latencies.length ? sum / latencies.length : null) },
  }));
} else {
  const { hostname, port, path, connections, start, measureFrom, measureTo } = workerData;
  const raw = Buffer.from(`GET ${path} HTTP/1.1\r\nHost: ${hostname}:${port}\r\n\r\n`, 'latin1');
  const connect = () => new Promise((resolve, reject) => {
    const socket = net.connect({ port, host: hostname, noDelay: true }, () => resolve(socket));
    socket.once('error', reject);
  });
  // One request in flight; responses carry Content-Length (all fixtures do).
  function client(socket) {
    let buffer = Buffer.alloc(0), waiter = null;
    socket.on('data', chunk => { buffer = buffer.length ? Buffer.concat([buffer, chunk]) : chunk; waiter?.(false); });
    socket.on('close', () => waiter?.(true));
    socket.on('error', () => {});
    return () => new Promise((resolve, reject) => {
      const check = closed => {
        const end = buffer.indexOf('\r\n\r\n');
        if (end >= 0) {
          const head = buffer.subarray(0, end).toString('latin1');
          const length = Number(head.match(/\r\ncontent-length:\s*(\d+)/i)?.[1] ?? NaN);
          if (!Number.isFinite(length)) { waiter = null; return reject(new Error('response without Content-Length')); }
          if (buffer.length >= end + 4 + length) {
            buffer = buffer.subarray(end + 4 + length); waiter = null;
            return resolve(Number(head.slice(9, 12)));
          }
        }
        if (closed) { waiter = null; reject(new Error('closed')); }
      };
      waiter = check; socket.write(raw); check(false);
    });
  }
  const latencies = []; let errors = 0, non2xx = 0, sum = 0;
  await sleep(Math.max(0, start - Date.now()));
  const loop = async () => {
    let send = null, socket = null;
    while (Date.now() < measureTo) {
      try {
        if (!send) { socket = await connect(); send = client(socket); }
        const sent = Date.now(), t = performance.now();
        const status = await send();
        const ms = performance.now() - t, done = Date.now();
        if (sent >= measureFrom && done <= measureTo) {
          latencies.push(ms); sum += ms;
          if (status < 200 || status > 299) non2xx++;
        }
      } catch {
        if (Date.now() >= measureFrom && Date.now() <= measureTo) errors++;
        socket?.destroy(); send = null; await sleep(10);
      }
    }
    socket?.destroy();
  };
  await Promise.all(Array.from({ length: connections }, loop));
  parentPort.postMessage({ latencies: Float64Array.from(latencies), errors, non2xx, sum });
}
