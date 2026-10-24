// Runs a Lasm HTTP server (`dist/main.mjs`) inside a function platform's Node
// process and forwards requests to it over loopback. Every platform shim
// (AWS Lambda, Lambda@Edge, Vercel, Netlify, Azure Functions, Google Cloud
// Functions) uses this file; `lasm package` copies it next to main.mjs.
//
// The Lean program is started once per process (the platform's cold start):
// PORT and HOST are set to a free loopback port before main.mjs runs, and the
// first request waits until that port accepts connections. Any server works:
// Express, Hono on @hono/node-server, or pure-Lean Std.Http.
import http from 'node:http';
import net from 'node:net';
import { fileURLToPath } from 'node:url';
import { Worker } from 'node:worker_threads';

const host = '127.0.0.1';
const agent = new http.Agent({ keepAlive: true, maxSockets: 256 });
let starting;

function freePort() {
  return new Promise((resolve, reject) => {
    const server = net.createServer();
    server.once('error', reject);
    server.listen(0, host, () => { const { port } = server.address(); server.close(() => resolve(port)); });
  });
}

function accepts(port) {
  return new Promise(resolve => {
    const socket = net.connect({ port, host });
    socket.once('connect', () => { socket.destroy(); resolve(true); });
    socket.once('error', () => { socket.destroy(); resolve(false); });
  });
}

/**
 * Node options that worker threads accept. The Lean runtime's threads are
 * workers that inherit `process.execArgv`, but per-process V8 flags are
 * refused there: AWS Lambda's Node runtime starts with `--expose-gc
 * --max-semi-space-size=… --max-old-space-size=…` (ERR_WORKER_INVALID_EXEC_ARGV).
 */
function workerExecArgv(execArgv) {
  const accepted = flags => {
    try { new Worker('', { eval: true, execArgv: flags, stdout: true, stderr: true }).terminate(); return true; }
    catch (error) { if (error.code === 'ERR_WORKER_INVALID_EXEC_ARGV') return false; throw error; }
  };
  if (!execArgv.length || accepted(execArgv)) return execArgv;
  return execArgv.filter(flag => accepted([flag]));
}

/** Starts the Lean server once; resolves with its loopback port. */
export function startLeanServer({ main = new URL('./main.mjs', import.meta.url), timeoutMs = Number(process.env.LASM_START_TIMEOUT_MS) || 30_000 } = {}) {
  starting ??= (async () => {
    const started = performance.now();
    // An explicit LASM_SERVER_PORT keeps a fixed port; otherwise pick a free one.
    const port = Number(process.env.LASM_SERVER_PORT) || await freePort();
    process.env.PORT = String(port);
    process.env.HOST = host;
    // The program sees only its own path as arguments, as with `node main.mjs`.
    const argv = process.argv;
    process.argv = [process.execPath, fileURLToPath(main)];
    process.execArgv = workerExecArgv(process.execArgv);
    let exited = false;
    const onExit = () => { exited = true; };
    process.once('exit', onExit);
    try { await import(main.href); } finally { process.argv = argv; }
    if (process.exitCode && process.exitCode !== 0)
      throw new Error(`The Lean application stopped during start-up (exit code ${process.exitCode}); see the log above.`);
    for (const delay = 5; !(await accepts(port));) {
      if (exited) throw new Error('The Lean application exited before it listened on $PORT.');
      if (performance.now() - started > timeoutMs)
        throw new Error(`The Lean application did not listen on $PORT (${port}) within ${timeoutMs} ms. Function platforms need a server that listens on $HOST:$PORT.`);
      await new Promise(resolve => setTimeout(resolve, delay));
    }
    process.off('exit', onExit);
    globalThis.__lasmColdStartMs = Math.round(performance.now() - started);
    return port;
  })();
  return starting;
}

// Hop-by-hop headers (RFC 9110 §7.6.1) are not forwarded in either direction.
const hopByHop = new Set(['connection', 'keep-alive', 'proxy-connection', 'transfer-encoding', 'te', 'trailer', 'upgrade']);

/**
 * Sends one request to the Lean server.
 * request: { method, path (with query string), headers: [[name, value], …], body: Buffer | undefined }
 * returns { status, statusText, headers: [[name, value], …] (set-cookie repeated), body: Buffer }
 */
export async function forward({ method, path, headers, body }) {
  const port = await startLeanServer();
  const outgoing = [];
  for (const [name, value] of headers) if (!hopByHop.has(name.toLowerCase()) && name.toLowerCase() !== 'content-length') outgoing.push(name, value);
  // HTTP/1.1 requires Host; events built by hand or by tests may omit it.
  if (!headers.some(([name]) => name.toLowerCase() === 'host')) outgoing.push('host', `${host}:${port}`);
  if (body?.length) outgoing.push('content-length', String(body.length));
  return new Promise((resolve, reject) => {
    const request = http.request({ host, port, method, path: path || '/', headers: outgoing, agent }, response => {
      const chunks = [];
      response.on('data', chunk => chunks.push(chunk));
      response.on('error', reject);
      response.on('end', () => {
        const pairs = [];
        for (let i = 0; i < response.rawHeaders.length; i += 2) {
          const name = response.rawHeaders[i].toLowerCase();
          if (!hopByHop.has(name)) pairs.push([name, response.rawHeaders[i + 1]]);
        }
        resolve({ status: response.statusCode, statusText: response.statusMessage, headers: pairs, body: Buffer.concat(chunks) });
      });
    });
    request.on('error', reject);
    request.end(body?.length ? body : undefined);
  });
}

/** Pipes a Node (req, res) pair to the Lean server (Vercel, Google Cloud Functions). */
export async function pipe(req, res) {
  const port = await startLeanServer();
  const headers = [];
  for (let i = 0; i < req.rawHeaders.length; i += 2)
    if (!hopByHop.has(req.rawHeaders[i].toLowerCase())) headers.push(req.rawHeaders[i], req.rawHeaders[i + 1]);
  await new Promise((resolve, reject) => {
    const request = http.request({ host, port, method: req.method, path: req.originalUrl ?? req.url, headers, agent }, response => {
      const out = [];
      for (let i = 0; i < response.rawHeaders.length; i += 2)
        if (!hopByHop.has(response.rawHeaders[i].toLowerCase())) out.push(response.rawHeaders[i], response.rawHeaders[i + 1]);
      res.writeHead(response.statusCode, response.statusMessage, out);
      response.pipe(res);
      response.on('end', resolve);
      response.on('error', reject);
    });
    request.on('error', reject);
    // Frameworks such as the Functions Framework have already read the body.
    if (req.rawBody !== undefined) request.end(req.rawBody);
    else if (req.readableEnded) request.end();
    else req.pipe(request);
  });
}

/** Forwards a WHATWG Request (Netlify, Azure Functions, Vercel web handlers). */
export async function fetchLean(request) {
  const url = new URL(request.url);
  const body = ['GET', 'HEAD'].includes(request.method) ? undefined : Buffer.from(await request.arrayBuffer());
  const reply = await forward({ method: request.method, path: url.pathname + url.search, headers: [...request.headers], body });
  const headers = new Headers();
  for (const [name, value] of reply.headers) headers.append(name, value);
  // A null-body status must not carry a body in a Response.
  const empty = [101, 204, 205, 304].includes(reply.status) || request.method === 'HEAD';
  return new Response(empty ? null : reply.body, { status: reply.status, statusText: reply.statusText, headers });
}

/** Whether a response body can travel as UTF-8 text rather than base64. */
export function isTextual(headers) {
  const get = name => headers.find(([key]) => key === name)?.[1] ?? '';
  if (get('content-encoding') && get('content-encoding') !== 'identity') return false;
  const type = get('content-type').toLowerCase();
  return !type || /^text\/|[/+](json|xml|javascript|ecmascript)\b|^application\/(x-www-form-urlencoded|graphql)/.test(type);
}
