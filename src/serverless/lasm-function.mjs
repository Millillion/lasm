// Runs a Lasm program (`dist/main.mjs`) inside a function platform's Node
// process and calls the fetch handler it publishes with Lasm.JS.exportDefault
// for each request: no HTTP server, no port, no loopback. Every platform shim
// (AWS Lambda, Lambda@Edge, Vercel, Netlify, Azure Functions, Google Cloud
// Functions) uses this file; `lasm package` copies it next to main.mjs, with
// lasm-node-serve.mjs (src/lasm-modules/node-serve.mjs: Node req/res and web
// Request/Response).
//
// The Lean program is started once per process (the platform's cold start).
// Before main.mjs runs, globalThis.__lasmFunctionHost is set to a function
// that receives the handler: exportDefault calls it and keeps Lean's main
// thread serving calls (the Lean runtime ends when main returns). The first
// request waits for the handler. A handler is a function (request, ...) =>
// Response or an object with such a `fetch` method (a Hono app).
import { isUtf8 } from 'node:buffer';
import { STATUS_CODES } from 'node:http';
import { fileURLToPath } from 'node:url';
import { isMainThread } from 'node:worker_threads';
import { respond, toRequest, writeResponse } from './lasm-node-serve.mjs';

// What the handler sees as the host of a request that brings no plain Host.
export const defaultHost = 'localhost';
let loading;

/** Starts the Lean program once; resolves with the fetch handler it publishes. */
export function loadHandler({ main = new URL('./main.mjs', import.meta.url), timeoutMs = Number(process.env.LASM_START_TIMEOUT_MS) || 30_000 } = {}) {
  loading ??= (async () => {
    const started = performance.now();
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
      nativeFiles().setEnvironment('LASM_THREAD_POOL', process.env.LASM_THREAD_POOL);
    }
    let publish;
    const published = new Promise(resolve => { publish = resolve; });
    globalThis.__lasmFunctionHost = handler => { publish(handler); };
    // The program sees only its own path as arguments, as with `node main.mjs`.
    const argv = process.argv;
    process.argv = [process.execPath, fileURLToPath(main)];
    // When main returns (or fails) the runtime sets process.exitCode; the
    // process itself stays, kept by the platform.
    const exitCode = process.exitCode;
    let exited = false;
    const onExit = () => { exited = true; };
    process.once('exit', onExit);
    let timer;
    try {
      // Lambda starts Node with per-process V8 flags (--max-old-space-size=…)
      // that worker threads refuse; the Lean runtime's worker wrapper
      // (scripts/full-lean/emscripten-pre.js) drops them itself.
      try { await import(main.href); } finally { process.argv = argv; }
      const ended = new Promise((_, reject) => {
        const poll = () => {
          if (exited || process.exitCode !== exitCode)
            return reject(new Error(`The Lean program ended (exit code ${process.exitCode ?? 0}) without publishing a fetch handler. `
              + 'On a function platform, main calls Lasm.JS.exportDefault with its handler (Request → Async Response); see the log above.'));
          if (performance.now() - started > timeoutMs)
            return reject(new Error(`The Lean program did not publish a fetch handler (Lasm.JS.exportDefault) within ${timeoutMs} ms.`));
          timer = setTimeout(poll, 5);
        };
        poll();
      });
      const handler = await Promise.race([published, ended]);
      if (typeof handler !== 'function' && typeof handler?.fetch !== 'function')
        throw new TypeError('The Lean program published a default export that is neither a function nor an object with a fetch method.');
      globalThis.__lasmColdStartMs = Math.round(performance.now() - started);
      return handler;
    } finally {
      clearTimeout(timer);
      process.off('exit', onExit);
    }
  })();
  return loading;
}

/** The handler's Response for `request` (a 500 when it throws; src/lasm-modules/node-serve.mjs respond). */
export async function callHandler(request, ...extra) {
  const handler = await loadHandler();
  return respond((r, ...rest) => typeof handler === 'function' ? handler(r, ...rest) : handler.fetch(r, ...rest), request, undefined, extra);
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
 * CloudFront's header lists); the handler sees what a browser sends.
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
 * The request target (path and query) of the URL eventRequest builds for a
 * path and a query (without its `?`) that a platform event holds: what a
 * request target cannot carry (a space, a control or non-ASCII character,
 * `#`; in the path also `?`) is percent-encoded, as UTF-8. A gateway that
 * hands over the path decoded (`/a b`, `/a?b`) would otherwise move part of
 * the path into the query or the fragment; a target that is already valid,
 * such as a raw path with escapes, is kept unchanged.
 */
export function requestTarget(path, query = '') {
  return escape(path || '/', /[^\x21-\x7e]|[?#]/gu) + (query ? '?' + escape(query, /[^\x21-\x7e]|#/gu) : '');
}

/** Whether a Host header is a plain `host[:port]`: printable ASCII without `/ ? # \ @`. */
export const plainHost = value => /^[\x21-\x7e]+$/.test(value) && !/[/?#\\@]/.test(value);

/**
 * The header fields of the Request forward() makes, as [[name, value], …]: the Cookie
 * fields joined into one (joinCookies), without hop-by-hop fields or the
 * event's Content-Length (`bodyLength` sets it). One Host: the first plain
 * one, else `defaultHost`, so a forged Host (`x/admin#`) cannot move the path
 * or query of the request's URL, which is built from Host.
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

const nullBodyStatus = new Set([101, 204, 205, 304]);

/** The scheme a front end received the request with: https when `x-forwarded-proto` says so, else http. */
export function forwardedScheme(headers) {
  const value = headers.find(([name]) => name.toLowerCase() === 'x-forwarded-proto')?.[1]?.split(',')[0].trim().toLowerCase();
  return value === 'https' ? 'https' : 'http';
}

/**
 * The web Request for a request of a platform event: { method, path (a
 * request target, with its query), headers: [[name, value], …], body: Buffer |
 * undefined }. Its fields are outgoingHeaders' (one Cookie field, one plain
 * Host); its URL is that Host's with the target, under the scheme the front
 * end received (forwardedScheme). null when no Request can hold it (a method
 * such as CONNECT or TRACE, a field the Fetch standard refuses).
 */
export function eventRequest({ method, path, headers, body }) {
  const sent = body?.length && method !== 'GET' && method !== 'HEAD' ? body : undefined;
  const init = { method, headers: new Headers(), body: sent };
  for (const [name, value] of outgoingHeaders(headers, sent?.length ?? 0, defaultHost)) {
    try { init.headers.append(name, value); } catch { /* a field the Fetch standard cannot hold */ }
  }
  const target = path?.startsWith('/') ? path : '/' + (path ?? '');
  const scheme = forwardedScheme(headers);
  // A plain Host that is still no URL authority (`a:b:c`): the default one.
  if (!URL.canParse(`${scheme}://${init.headers.get('host')}/`)) init.headers.set('host', defaultHost);
  try { return new Request(`${scheme}://${init.headers.get('host')}${target}`, init); }
  catch { return null; }
}

/**
 * A Response as the reply shims map to their platform's shape: { status,
 * statusText, headers: [[name, value], …] (lower-case, each Set-Cookie on
 * its own, hop-by-hop fields left out), body: Buffer (empty for HEAD and
 * null-body statuses) }.
 */
export async function replyOf(response, method) {
  const headers = [];
  for (const [name, value] of response.headers) if (!hopByHop.has(name)) headers.push([name, value]);
  let body = Buffer.alloc(0);
  if (method === 'HEAD' || nullBodyStatus.has(response.status)) response.body?.cancel().catch(() => {});
  else if (response.body) body = Buffer.from(await response.arrayBuffer());
  return { status: response.status, statusText: response.statusText || STATUS_CODES[response.status] || '', headers, body };
}

/**
 * Calls the handler for a platform event's request ({ method, path, headers,
 * body }, as eventRequest) and returns its reply (replyOf); a request no
 * Request can hold is a 400.
 */
export async function forward(request) {
  const web = eventRequest(request);
  if (!web) return { status: 400, statusText: STATUS_CODES[400], headers: [['content-type', 'text/plain; charset=utf-8']], body: Buffer.from('Bad Request\n') };
  return replyOf(await callHandler(web), request.method);
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

/**
 * Serves a Node (req, res) pair with the handler (Vercel, Google Cloud
 * Functions): the request as a web Request (node-serve.mjs toRequest: one
 * Cookie field, a plain Host or localhost), the Response streamed back.
 */
export async function pipe(req, res) {
  await loadHandler();
  const body = await requestBody(req);
  const pairs = [];
  for (let i = 0; i + 1 < (req.rawHeaders?.length ?? 0); i += 2) pairs.push([req.rawHeaders[i], req.rawHeaders[i + 1]]);
  const request = toRequest(req, { target: req.originalUrl ?? req.url, body, fallback: defaultHost, scheme: forwardedScheme(pairs) });
  if (!request) { res.writeHead(400, { 'content-type': 'text/plain; charset=utf-8' }); res.end('Bad Request\n'); return; }
  await writeResponse(res, await callHandler(request), req.method);
}

/**
 * The Request a platform hands over, as the handler should see it: Cookie
 * fields a proxy joined with commas are separated with "; " again
 * (joinCookies; Netlify passes `a=1, b=2` for two Cookie lines).
 */
export function cleanRequest(request) {
  const cookie = request.headers.get('cookie');
  if (cookie === null) return request;
  const joined = joinCookies([['cookie', cookie]]);
  const value = joined[0]?.[1] ?? '';
  if (value === cookie) return request;
  const headers = new Headers(request.headers);
  if (value) headers.set('cookie', value); else headers.delete('cookie');
  return new Request(request, { headers });
}

/** Calls the handler with a WHATWG Request (Netlify), `extra` after it (Netlify's context). */
export async function fetchLean(request, ...extra) {
  return webResponse(await callHandler(cleanRequest(request), ...extra), request.method);
}

/**
 * The handler's Response as a platform that streams WHATWG Responses should
 * get it: a null-body status, HEAD, and an empty body have no body at all
 * (Netlify's streaming bootstrap answers a Response with a zero-length body
 * stream, such as a 303 with only a Location, with nothing, not even the
 * status, #82); any other body still streams.
 */
export async function webResponse(response, method) {
  const init = { status: response.status, statusText: response.statusText, headers: response.headers };
  if (!response.body) return response;
  if (method === 'HEAD' || nullBodyStatus.has(response.status)) {
    response.body.cancel().catch(() => {});
    return new Response(null, init);
  }
  const reader = response.body.getReader();
  const first = await reader.read();
  if (first.done) return new Response(null, init);
  let pending = first;
  const body = new ReadableStream({
    async pull(controller) {
      const next = pending ?? await reader.read();
      pending = undefined;
      if (next.done) controller.close(); else controller.enqueue(next.value);
    },
    cancel(reason) { return reader.cancel(reason); },
  });
  return new Response(body, init);
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
