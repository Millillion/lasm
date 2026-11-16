// lasm:node-serve: the JavaScript side of Node.serve (library/Lasm/JS/Node/Serve.lean),
// provided by Lasm (not a Node API): a node:http server whose requests reach a
// fetch handler (Request => Promise<Response>) as web Requests, and whose
// Responses go back to the client. The function-platform shims for Node (req,
// res) platforms (src/serverless/lasm-function.mjs: Vercel, Google Cloud
// Functions) use toRequest and writeResponse too.
//
// Unlike the other builtin modules, this one serves Node: it takes node:http and
// node:stream from process.getBuiltinModule when serve() runs, not at import, so
// it still loads on every target (Bun, Deno and the edge copy it when a program
// imports Lasm.JS.Node.Serve).
//
// What it guarantees (test/node-serve.test.mjs):
//   - the request's URL comes from its Host header only when that is a plain
//     host[:port] (no `/ ? # \ @`, no space or control character); a forged
//     Host (`x/admin#`) gets the listening address instead, so it cannot move
//     the path or the query (test/fuzz, the serverless shims' rule);
//   - several Cookie lines are one Cookie field joined with "; " (RFC 6265
//     §5.4), as a browser sends it; hop-by-hop fields are not passed on;
//   - bodies stream both ways with backpressure; a client that goes away
//     aborts request.signal and cancels the response body;
//   - each Set-Cookie is its own header line; HEAD and null-body statuses
//     (101, 204, 205, 304) send no body; an empty body is sent with
//     content-length: 0 and no content type added;
//   - a handler that throws (or returns no Response) gets `error`'s response,
//     else a 500.

const nullBodyStatus = new Set([101, 204, 205, 304]);
// Hop-by-hop request fields (RFC 9110 §7.6.1) describe the connection, not the request.
const hopByHop = new Set(['connection', 'keep-alive', 'proxy-connection', 'transfer-encoding', 'te', 'trailer', 'upgrade']);

function builtin(name) {
  const module = globalThis.process?.getBuiltinModule?.(name);
  if (!module) throw new Error(`Node.serve needs Node's ${name}: run the program on Node (lasm build without --target)`);
  return module;
}

/** Whether a Host header is a plain `host[:port]`: printable ASCII without `/ ? # \ @`. */
export const plainHost = value => typeof value === 'string' && /^[\x21-\x7e]+$/.test(value) && !/[/?#\\@]/.test(value);

/**
 * The absolute URL of a request with request target `target` (the request
 * line's path, or the absolute URL of a proxy request) and Host `host`: an
 * origin-form target goes under `host` when it is plain (and an authority), else under `fallback`;
 * an absolute http(s) URL is kept. null for any other target (`*`, an
 * authority, another scheme).
 */
export function requestUrl(target, host, fallback, scheme = 'http') {
  if (typeof target !== 'string') return null;
  // A plain Host that is still no URL authority (`a:b:c`) is replaced as well.
  if (target.startsWith('/')) return `${scheme}://${plainHost(host) && URL.canParse(`${scheme}://${host}/`) ? host : fallback}${target}`;
  try {
    const url = new URL(target);
    if (url.protocol === 'http:' || url.protocol === 'https:') return url.href;
  } catch { /* not an absolute URL */ }
  return null;
}

/**
 * A web Request for a node:http request `req`, or null when the request cannot
 * be one (an unusable target or method). options:
 *   target    the request target (default req.url; Express's req.originalUrl)
 *   body      the body when the platform has read it already (a Buffer), in
 *             place of the stream
 *   fallback  the host[:port] when the Host header is missing or not plain
 *   scheme    http or https
 *   signal    the request's signal
 */
export function toRequest(req, { target = req.url, body, fallback = 'localhost', scheme = 'http', signal } = {}) {
  const headers = new Headers();
  const cookies = [];
  let host, length;
  const raw = req.rawHeaders ?? [];
  for (let i = 0; i + 1 < raw.length; i += 2) {
    const name = raw[i], value = raw[i + 1], lower = name.toLowerCase();
    if (hopByHop.has(lower)) continue;
    if (lower === 'cookie') { if (value !== '') cookies.push(value); continue; }
    if (lower === 'host') {
      if (host !== undefined) continue;
      host = value;
      if (!plainHost(value)) continue;
    }
    if (lower === 'content-length') length = value;
    try { headers.append(name, value); } catch { /* a field the Fetch standard cannot hold */ }
  }
  if (cookies.length) try { headers.set('cookie', cookies.join('; ')); } catch { /* not a field value */ }
  if (!plainHost(host)) headers.set('host', fallback);
  // A body the platform has read: its own length (the request may have been chunked).
  if (body !== undefined) {
    if (body?.length && req.method !== 'GET' && req.method !== 'HEAD') headers.set('content-length', String(body.length));
    else headers.delete('content-length');
  }
  const url = requestUrl(target, host, fallback, scheme);
  if (url === null) return null;
  const init = { method: req.method, headers, signal };
  if (req.method !== 'GET' && req.method !== 'HEAD') {
    if (body !== undefined) {
      if (body?.length) init.body = body;
    } else if (length !== '0' && (length !== undefined || raw.some((h, i) => i % 2 === 0 && h.toLowerCase() === 'transfer-encoding'))) {
      init.body = builtin('node:stream').Readable.toWeb(req);
      init.duplex = 'half';
    }
  }
  try { return new Request(url, init); } catch { return null; }
}

const waitFor = (emitter, event) => new Promise(resolve => emitter.once(event, resolve));

/**
 * Sends `response` (a web Response) for a request with `method` on the
 * node:http response `res`: status, status text, every header (each
 * Set-Cookie on its own line), then the body, streamed with backpressure.
 * Resolves when the response is sent or the client has gone away.
 */
export async function writeResponse(res, response, method) {
  const fields = [];
  let hasLength = false;
  for (const [name, value] of response.headers) {
    fields.push(name, value);
    if (name === 'content-length') hasLength = true;
  }
  const head = () => response.statusText ? res.writeHead(response.status, response.statusText, fields) : res.writeHead(response.status, fields);
  const body = response.body;
  if (!body || method === 'HEAD' || nullBodyStatus.has(response.status)) {
    if (body) body.cancel().catch(() => {});
    head();
    res.end();
    return;
  }
  const reader = body.getReader();
  const gone = waitFor(res, 'close');
  let next = await reader.read();
  // An empty body: no chunked encoding, nothing added but its length.
  if (next.done) {
    if (!hasLength) fields.push('content-length', '0');
    head();
    res.end();
    return;
  }
  head();
  // A client that goes away cancels the body: a pending read ends at once.
  let closed = false;
  gone.then(() => { closed = true; reader.cancel().catch(() => {}); });
  for (;;) {
    const chunk = next.value;
    if (closed) return;
    if ((chunk?.length ?? chunk?.byteLength) && !res.write(chunk)) await Promise.race([waitFor(res, 'drain'), gone]);
    next = await reader.read();
    if (next.done) break;
  }
  if (!closed) res.end();
}

const messageOf = failure => String(failure?.message ?? failure);
const isResponse = value => value !== null && typeof value === 'object' && typeof value.status === 'number' && typeof value.headers?.[Symbol.iterator] === 'function';
const internalError = () => new Response('Internal Server Error', { status: 500, headers: { 'content-type': 'text/plain; charset=utf-8' } });

/**
 * Runs `fetch` for `request`; a failure (a throw, a rejection, no Response)
 * becomes `error(message)`'s response when given, else a 500, and is reported
 * on stderr.
 */
export async function respond(fetch, request, error, extra = []) {
  try {
    const response = await fetch(request, ...extra);
    if (isResponse(response)) return response;
    throw new TypeError('the handler did not return a Response');
  } catch (failure) {
    if (typeof error === 'function') {
      try {
        const response = await error(messageOf(failure));
        if (isResponse(response)) return response;
        console.error('Lasm Node.serve: the error handler did not return a Response');
      } catch (again) { console.error(`Lasm Node.serve: the error handler failed: ${messageOf(again)}`); }
    } else console.error(`Lasm Node.serve: the handler failed: ${messageOf(failure)}`);
    return internalError();
  }
}

/** Serves one node:http request with `fetch`. */
export async function serveRequest(req, res, { fetch, error, fallback }) {
  const controller = new AbortController();
  res.once('close', () => { if (!res.writableFinished) controller.abort(new DOMException('The client closed the connection', 'AbortError')); });
  const request = toRequest(req, { fallback, signal: controller.signal });
  if (!request) {
    res.writeHead(400, { 'content-length': '0', connection: 'close' });
    res.end();
    return;
  }
  const response = await respond(fetch, request, error);
  try { await writeResponse(res, response, req.method); }
  catch (failure) {
    console.error(`Lasm Node.serve: the response failed: ${messageOf(failure)}`);
    if (!res.headersSent) { try { await writeResponse(res, internalError(), req.method); return; } catch { /* below */ } }
    res.destroy();
  }
}

/** The host[:port] of a listening address, IPv6 in brackets. */
export const hostPort = (address, port) => `${address.includes(':') ? `[${address}]` : address}:${port}`;

/**
 * Starts an HTTP server: options { fetch, port, hostname, signal, error }.
 * Resolves, once it listens, with its handle { hostname, port, url, finished,
 * stop(closeActiveConnections) }; rejects when it cannot listen. SIGTERM and
 * SIGINT stop it (a second signal closes the connections still open).
 */
export function serve({ fetch, port, hostname, signal, error } = {}) {
  if (typeof fetch !== 'function') throw new TypeError('Node.serve: fetch must be a function');
  const http = builtin('node:http');
  const process = builtin('node:process');
  hostname ??= '0.0.0.0';
  if (port === undefined || port === null) {
    const fromEnvironment = Number(process.env.PORT);
    port = process.env.PORT && Number.isInteger(fromEnvironment) ? fromEnvironment : 3000;
  }
  let fallback = hostPort(hostname, port);
  let stopping = false;
  const server = http.createServer((req, res) => {
    // While stopping, a keep-alive connection closes after its response.
    res.once('finish', () => { if (stopping) server.closeIdleConnections(); });
    serveRequest(req, res, { fetch, error, fallback });
  });
  const finished = new Promise(resolve => server.once('close', resolve));
  function stop(closeActiveConnections = false) {
    if (!stopping) {
      stopping = true;
      server.close(() => {});
    }
    server.closeIdleConnections();
    if (closeActiveConnections) server.closeAllConnections();
    return finished;
  }
  const onSignal = () => stop(stopping);
  return new Promise((resolve, reject) => {
    server.once('error', reject);
    server.listen(port, hostname, () => {
      server.off('error', reject);
      const address = server.address();
      fallback = hostPort(address.address, address.port);
      const shown = address.address === '0.0.0.0' || address.address === '::' ? 'localhost' : address.address;
      for (const name of ['SIGTERM', 'SIGINT']) process.on(name, onSignal);
      finished.then(() => { for (const name of ['SIGTERM', 'SIGINT']) process.off(name, onSignal); });
      if (signal) {
        if (signal.aborted) stop();
        else signal.addEventListener('abort', () => stop(), { once: true });
      }
      resolve({ hostname: address.address, port: address.port, url: `http://${hostPort(shown, address.port)}/`, finished, stop, server });
    });
  });
}
