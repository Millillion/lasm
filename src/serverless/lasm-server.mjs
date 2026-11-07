// Runs a Lasm HTTP server (`dist/main.mjs`) inside a function platform's Node
// process and forwards requests to it over loopback. Every platform shim
// (AWS Lambda, Lambda@Edge, Vercel, Netlify, Azure Functions, Google Cloud
// Functions) uses this file; `lasm package` copies it next to main.mjs.
//
// The Lean program is started once per process (the platform's cold start):
// PORT and HOST are set to a free loopback port before main.mjs runs, and the
// first request waits until that port accepts connections. Any server works:
// Express, Hono on @hono/node-server, or pure-Lean Std.Http.
import { isUtf8 } from 'node:buffer';
import http from 'node:http';
import net from 'node:net';
import { fileURLToPath } from 'node:url';
import { isMainThread } from 'node:worker_threads';

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

/** Starts the Lean server once; resolves with its loopback port. */
export function startLeanServer({ main = new URL('./main.mjs', import.meta.url), timeoutMs = Number(process.env.LASM_START_TIMEOUT_MS) || 30_000 } = {}) {
  starting ??= (async () => {
    const started = performance.now();
    // An explicit LASM_SERVER_PORT keeps a fixed port; otherwise pick a free one.
    const port = Number(process.env.LASM_SERVER_PORT) || await freePort();
    process.env.PORT = String(port);
    process.env.HOST = host;
    // Function platforms give a fraction of a CPU: one Worker (Lean's main
    // thread) starts before main instead of four; further Lean threads start
    // on demand (src/application-link.mjs configurableThreadPool; 5 % faster
    // cold starts at 0.29 and 0.58 CPU in docs/BENCHMARKS.md). An explicit
    // LASM_THREAD_POOL in the function's environment wins.
    process.env.LASM_THREAD_POOL ??= '1';
    // Lean reads the C environment. In a worker thread (local function
    // runtimes such as `netlify functions:serve`), process.env is the thread's
    // own copy, so set the process environment through Lasm's native host too.
    if (!isMainThread) {
      const { nativeFiles } = await import(new URL('./host/native-files.mjs', main).href);
      for (const [name, value] of [['PORT', String(port)], ['HOST', host], ['LASM_THREAD_POOL', process.env.LASM_THREAD_POOL]]) nativeFiles().setEnvironment(name, value);
    }
    // The program sees only its own path as arguments, as with `node main.mjs`.
    const argv = process.argv;
    process.argv = [process.execPath, fileURLToPath(main)];
    // Lambda starts Node with per-process V8 flags (--max-old-space-size=…)
    // that worker threads refuse; the Lean runtime's worker wrapper
    // (scripts/full-lean/emscripten-pre.js) drops them itself.
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

// A comma that separates cookies: a cookie-string never holds one (RFC 6265
// §4.2.1, cookie-octet), so ", name=" can only come from a proxy that
// combined repeated Cookie fields with commas, as RFC 9110 §5.3 does for
// other headers (ASP.NET in Azure's host, SAM's local gateway). A comma
// inside a value that does not start a new name=value pair (an unquoted
// date, "Wed, 21 Oct 2026") is left alone.
const cookieComma = /\s*,\s*(?=[!#$%&'*+\-.^_`|~0-9A-Za-z]+=)/g;

/**
 * One Cookie header (RFC 6265 §5.4; HTTP/2 and HTTP/3 split it into crumbs,
 * RFC 9113 §8.2.3): repeated Cookie fields in [[name, value], …] are joined
 * with "; " into the first one's place, and cookies a proxy joined with
 * commas are separated with "; " again. Events can carry the cookies twice
 * or in pieces (API Gateway payload 2.0 `cookies`, multi-value headers,
 * CloudFront's header lists); the Lean server sees what a browser sends.
 */
export function joinCookies(pairs) {
  const isCookie = ([name]) => name.toLowerCase() === 'cookie';
  if (!pairs.some(isCookie)) return pairs;
  // Empty Cookie fields carry nothing: when every one is empty, none is sent.
  const joined = pairs.filter(isCookie).map(([, value]) => value.replace(cookieComma, '; ')).filter(value => value !== '').join('; ');
  const out = [];
  let placed = false;
  for (const pair of pairs) {
    if (!isCookie(pair)) out.push(pair);
    else if (!placed && joined) { out.push([pair[0], joined]); placed = true; }
  }
  return out;
}

/**
 * A Set-Cookie value as the cookie object of a platform API that takes
 * cookies rather than Set-Cookie headers (Azure Functions' HttpResponseInit
 * `cookies`): { name, value, domain?, path?, expires?, maxAge?, secure?,
 * httpOnly?, sameSite? }, plus `dropped`, the attributes it has no field for
 * (Partitioned, Priority, …). null when the value has no cookie name.
 */
export function parseSetCookie(header) {
  const [pair, ...attributes] = header.split(';');
  const equals = pair.indexOf('=');
  if (equals <= 0) return null;
  const cookie = { name: pair.slice(0, equals).trim(), value: pair.slice(equals + 1).trim() };
  if (!cookie.name) return null;
  const dropped = [];
  for (const attribute of attributes) {
    const at = attribute.indexOf('=');
    const key = (at < 0 ? attribute : attribute.slice(0, at)).trim().toLowerCase();
    const value = at < 0 ? '' : attribute.slice(at + 1).trim();
    if (!key) continue;
    if (key === 'domain' && value) cookie.domain = value;
    else if (key === 'path' && value) cookie.path = value;
    else if (key === 'expires' && !Number.isNaN(Date.parse(value))) cookie.expires = new Date(value);
    else if (key === 'max-age' && /^-?\d+$/.test(value)) cookie.maxAge = Number(value);
    else if (key === 'secure') cookie.secure = true;
    else if (key === 'httponly') cookie.httpOnly = true;
    else if (key === 'samesite' && ['strict', 'lax', 'none'].includes(value.toLowerCase()))
      cookie.sameSite = value[0].toUpperCase() + value.slice(1).toLowerCase();
    else dropped.push(attribute.trim());
  }
  return { ...cookie, dropped };
}

// The Lean model of this file's request and response mapping, and of
// lasm-lambda.mjs's, is library/Lasm/Serverless/Proofs/Model.lean (its
// theorems: library/PROOFS.md); the serverless-http fuzz target checks the
// two agree.

const hex = byte => '%' + byte.toString(16).toUpperCase().padStart(2, '0');
// Percent-encodes, as UTF-8 (a lone surrogate as U+FFFD), what matches `unsafe`.
const escape = (text, unsafe) => text.replace(unsafe, c => [...Buffer.from(c)].map(hex).join(''));

/**
 * The request target http.request sends for a path and a query (without its
 * `?`) that a platform event holds: what a request target cannot carry
 * (a space, a control or non-ASCII character, `#`; in the path also `?`) is
 * percent-encoded, as UTF-8. A gateway that hands over the path decoded
 * (`/a b`, `/a?b`) would otherwise make http.request throw (a 502) or move
 * part of the path into the query; a target that is already valid, such as
 * a raw path with escapes, is sent unchanged.
 */
export function requestTarget(path, query = '') {
  return escape(path || '/', /[^\x21-\x7e]|[?#]/gu) + (query ? '?' + escape(query, /[^\x21-\x7e]|#/gu) : '');
}

/** Whether a Host header is a plain `host[:port]`: printable ASCII without `/ ? # \ @`. */
export const plainHost = value => /^[\x21-\x7e]+$/.test(value) && !/[/?#\\@]/.test(value);

/**
 * The header fields forward() sends, as [[name, value], …]: the Cookie
 * fields joined into one (joinCookies), without hop-by-hop fields or the
 * event's Content-Length (`bodyLength` sets it). One Host: the first plain
 * one, else `defaultHost`, so a forged Host (`x/admin#`) cannot move the path
 * or query a server that builds its URL from Host sees.
 */
export function outgoingHeaders(headers, bodyLength, defaultHost) {
  const out = [];
  let hasHost = false;
  for (const [name, value] of joinCookies(headers)) {
    const lower = name.toLowerCase();
    if (hopByHop.has(lower) || lower === 'content-length') continue;
    if (lower === 'host') {
      if (hasHost || !plainHost(value)) continue;
      hasHost = true;
    }
    out.push([name, value]);
  }
  if (!hasHost) out.push(['host', defaultHost]);
  if (bodyLength) out.push(['content-length', String(bodyLength)]);
  return out;
}

/**
 * Sends one request to the Lean server.
 * request: { method, path (a request target, with its query), headers: [[name, value], …], body: Buffer | undefined }
 * returns { status, statusText, headers: [[name, value], …] (set-cookie repeated), body: Buffer }
 */
export async function forward({ method, path, headers, body }) {
  const port = await startLeanServer();
  const outgoing = outgoingHeaders(headers, body?.length ?? 0, `${host}:${port}`).flat();
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

/** The request body of a Node (req, res) pair, however the platform left it. */
function requestBody(req) {
  // Frameworks such as the Functions Framework have already read it.
  if (Buffer.isBuffer(req.rawBody)) return Promise.resolve(req.rawBody);
  // A consumed stream yields nothing more, unless the platform replays it
  // through its own `on` (Vercel's request helpers do).
  if (req.readableEnded && !Object.hasOwn(req, 'on')) return Promise.resolve(Buffer.alloc(0));
  return new Promise((resolve, reject) => {
    const chunks = [];
    req.on('data', chunk => chunks.push(Buffer.from(chunk)));
    req.on('end', () => resolve(Buffer.concat(chunks)));
    req.on('error', reject);
  });
}

/** Pipes a Node (req, res) pair to the Lean server (Vercel, Google Cloud Functions). */
export async function pipe(req, res) {
  const port = await startLeanServer();
  const body = await requestBody(req);
  const pairs = [];
  for (let i = 0; i < req.rawHeaders.length; i += 2) pairs.push([req.rawHeaders[i], req.rawHeaders[i + 1]]);
  const headers = outgoingHeaders(pairs, body.length, `${host}:${port}`).flat();
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
    request.end(body.length ? body : undefined);
  });
}

/** Forwards a WHATWG Request (Netlify, Azure Functions, Vercel web handlers). */
export async function fetchLean(request) {
  const url = new URL(request.url);
  const body = ['GET', 'HEAD'].includes(request.method) ? undefined : Buffer.from(await request.arrayBuffer());
  return webReply(await forward({ method: request.method, path: url.pathname + url.search, headers: [...request.headers], body }), request.method);
}

/** A forward() reply to a request with `method` as a WHATWG Response (fetchLean). */
export function webReply(reply, method) {
  const headers = new Headers();
  for (const [name, value] of reply.headers) headers.append(name, value);
  // A null-body status must not carry a body in a Response. An empty body is
  // no body at all: Netlify's streaming bootstrap answers a Response with a
  // zero-length body stream (a 303 with only a Location) with nothing, not
  // even the status (#82).
  const empty = [101, 204, 205, 304].includes(reply.status) || method === 'HEAD' || reply.body.length === 0;
  return new Response(empty ? null : reply.body, { status: reply.status, statusText: reply.statusText, headers });
}

let warnedAzure = false;
/**
 * A forward() reply as Azure Functions' HttpResponseInit. Azure's worker
 * passes response headers to the host as one value per name, so of several
 * Set-Cookie headers only the last would arrive (#80); the others travel in
 * `cookies`, which the host turns back into one Set-Cookie each. The host
 * percent-encodes a cookie's value (C#'s Uri.EscapeDataString: everything
 * but A-Z a-z 0-9 - . _ ~), and the cookie object has no field for some
 * attributes (Partitioned, Priority), so one Set-Cookie that would change
 * that way stays a header, unchanged: with at most one such cookie per
 * reply, every cookie arrives exactly as the server sent it.
 */
export function azureReply(reply) {
  const headers = new Headers();
  const setCookies = reply.headers.filter(([name]) => name === 'set-cookie').map(([, value]) => value);
  const parsed = setCookies.map(parseSetCookie);
  const exact = cookie => cookie && /^[A-Za-z0-9\-._~]*$/.test(cookie.value) && !cookie.dropped.length;
  // The Set-Cookie that stays a header: the first one `cookies` would change.
  const verbatim = setCookies.length < 2 ? 0 : Math.max(0, parsed.findIndex(cookie => !exact(cookie)));
  const cookies = [];
  let index = 0;
  for (const [name, value] of reply.headers) {
    if (name !== 'set-cookie') { headers.append(name, value); continue; }
    const i = index++;
    if (i === verbatim) { headers.append(name, value); continue; }
    const cookie = parsed[i];
    if (!cookie) continue;
    if (!exact(cookie) && !warnedAzure) {
      warnedAzure = true;
      console.warn(`Lasm: Azure Functions sends a single Set-Cookie per reply unchanged; cookie ${cookie.name} goes through its cookies list, which percent-encodes the value and has no field for ${cookie.dropped.join(', ') || 'other attributes'}.`);
    }
    const { dropped, ...fields } = cookie;
    cookies.push(fields);
  }
  return { status: reply.status, headers, ...(cookies.length ? { cookies } : {}), body: reply.body.length ? reply.body : undefined };
}

/**
 * Whether a response body can travel as UTF-8 text rather than base64: its
 * type is textual and, when given, `body` is valid UTF-8 (a text/html body in
 * Latin-1 would otherwise arrive with U+FFFD in place of its accented letters).
 */
export function isTextual(headers, body) {
  const get = name => headers.find(([key]) => key === name)?.[1] ?? '';
  if (get('content-encoding') && get('content-encoding') !== 'identity') return false;
  const type = get('content-type').toLowerCase();
  return (!type || /^text\/|[/+](json|xml|javascript|ecmascript)\b|^application\/(x-www-form-urlencoded|graphql)/.test(type))
    && (body === undefined || isUtf8(body));
}
