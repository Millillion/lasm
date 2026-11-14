// `lasm dev`'s proxy (src/dev-proxy.mjs: one URL in front of the server
// program, live reload injected into its pages). A client sends a request
// through the proxy to an upstream that answers with bytes the input chooses,
// written straight to its socket: a complete reply (Content-Length, chunked or
// close-delimited framing), a reply cut before its body ends (the server dies
// mid-reply, as it does on every rebuild), or a malformed head.
// Input: structure read field by field (test/fuzz/input.mjs): the method,
// target, headers and body of the request; the reply's status, content type,
// headers, body and framing.
// Oracle:
//   - the upstream receives the request exactly once: the same method, target
//     and body, its own address as Host, no Accept-Encoding, every other
//     header's value unchanged;
//   - a complete reply reaches the client with its status and headers (a page
//     gets `Cache-Control: no-store`), and its body byte for byte, or, for a
//     text/html reply to anything but HEAD, with the reload client inserted
//     before the first `</body>` (appended when there is none);
//   - a cut reply reaches the client cut, and a malformed one as a 502, both
//     at once (within 3 s): no response is left open.
// Proposition: Lasm.Cli.Candidates.dev_proxy_forwards_once
//    ∀ (r : HttpRequest) (u : Upstream), PlainHeaders r.headers → r.target ≠ "/__lasm/events" →
//      ∃ s, (devProxy r u).1 = [s] ∧ s.method = r.method ∧ s.target = r.target ∧ s.body = r.body ∧
//        s.header? "host" = some devUpstreamHost ∧ s.header? "accept-encoding" = none ∧
//        ∀ h v, h ≠ "accept-encoding" → r.header? h = some v → s.header? h = some v
// Proposition: Lasm.Cli.Candidates.dev_proxy_relays_reply
//    ∀ (r : HttpRequest) (a : HttpReply), PlainHeaders r.headers → PlainHeaders a.headers → r.target ≠ "/__lasm/events" →
//      ∃ c, (devProxy r (.answers a)).2 = .reply c ∧ c.status = a.status ∧ c.body = relayedBody r a ∧
//        (isPage r a = true → c.header? "cache-control" = some "no-store") ∧
//        ∀ h v, a.header? h = some v → (isPage r a = false ∨ h ≠ "cache-control") → c.header? h = some v
// Proposition: Lasm.Cli.Candidates.dev_proxy_ends_failed_replies
//    ∀ (r : HttpRequest) (u : Upstream), u = .cut ∨ u = .malformed → r.target ≠ "/__lasm/events" →
//      (devProxy r u).2 = .cut ∨ ∃ page, (devProxy r u).2 = .reply page ∧ page.status = 502 ∧ u = .malformed
import { createServer, request as httpRequest } from 'node:http';
import { Input } from '../input.mjs';
import { startDevProxy } from '../../../src/dev-proxy.mjs';

export const sources = ['src/dev-proxy.mjs'];
export const maxLength = 2048;
export const dictionary = ['</body>', '</BODY>', '<body>', '<html>', 'text/html', 'text/html; charset=iso-8859-1', 'application/json',
  '/__lasm/events', '/__lasm/events?x', '?a=1&b=2', '%2F', '%E9', '..', '//', 'accept-encoding', 'gzip, br', 'cookie', 'a=1; b=2',
  'cache-control', 'max-age=60', 'set-cookie', 'location', '\xe9', '$&', '$1', '\r\n', '0\r\n\r\n'];

// Headers whose meaning is the connection's, not the request's: the client and
// the proxy each set their own, so the oracle never generates them.
const hopByHop = new Set(['host', 'connection', 'keep-alive', 'transfer-encoding', 'content-length', 'te', 'trailer', 'upgrade',
  'expect', 'proxy-connection', 'proxy-authorization', 'http2-settings', 'content-encoding']);
const tokenChars = "!#$%&'*+-.^_`|~0123456789abcdefghijklmnopqrstuvwxyz";
const token = s => [...s.toLowerCase()].filter(c => tokenChars.includes(c)).join('').slice(0, 40) || 'x-h';
const visible = s => [...s].filter(c => c > ' ' && c < '\x7f').join('');
const headerValue = s => [...s].filter(c => c >= ' ' && c !== '\x7f' && c <= '\xff').join('').trim().slice(0, 200);
const methods = ['GET', 'POST', 'PUT', 'DELETE', 'PATCH', 'HEAD', 'OPTIONS'];
const statuses = [200, 201, 202, 203, 206, 301, 302, 307, 400, 401, 404, 410, 418, 500, 502, 503, 204, 304];
const types = ['text/html', 'text/html; charset=utf-8', 'text/html; charset=iso-8859-1', 'text/plain', 'application/json', 'application/xhtml+xml', null];
const framings = ['length', 'chunked', 'close', 'cut', 'malformed'];
const reloadMarker = Buffer.from('<script type="module">\n// Injected by lasm dev');

let proxy, upstreamPort, upstream, script, pending = null;
const fail = (message, detail) => { throw Object.assign(new Error(`${message}\n${JSON.stringify(detail, null, 1)?.slice(0, 3000)}`), { name: 'OracleFailure' }); };

export async function setup() {
  // The upstream: Node parses the request; the reply is raw bytes on the socket.
  upstream = createServer((req, res) => {
    const chunks = [];
    req.on('data', c => chunks.push(c));
    req.on('end', () => {
      const run = pending;
      if (!run) { req.socket.destroy(); return; }
      run.seen.push({ method: req.method, target: req.url, headers: { ...req.headers }, body: Buffer.concat(chunks) });
      req.socket.write(run.reply.bytes);
      if (run.reply.framing === 'cut') setImmediate(() => req.socket.destroy()); else req.socket.end();
    });
  });
  upstream.keepAliveTimeout = 1;
  await new Promise(r => upstream.listen(0, '127.0.0.1', r));
  upstreamPort = upstream.address().port;
  proxy = await startDevProxy({ port: 0, upstreamPort });
  // The reload client: what the proxy makes of an empty page.
  pending = { seen: [], reply: { framing: 'length', bytes: Buffer.from('HTTP/1.1 200 OK\r\ncontent-type: text/html\r\ncontent-length: 0\r\nconnection: close\r\n\r\n') } };
  script = (await send({ method: 'GET', target: '/', headers: {}, body: Buffer.alloc(0) })).body;
  pending = null;
  if (!script?.subarray(0, reloadMarker.length).equals(reloadMarker)) throw new Error('the proxy did not inject its reload client into an empty page');
}

function readRequest(input) {
  const method = input.pick(methods);
  const target = '/' + visible(input.text()).slice(0, 300);
  const headers = {};
  for (let n = input.int(6); n > 0; n--) {
    const name = input.bool() ? 'accept-encoding' : token(input.text());
    const value = headerValue(input.text());
    if (!hopByHop.has(name) && !(name in headers)) headers[name] = value;
  }
  const body = ['GET', 'HEAD', 'DELETE', 'OPTIONS'].includes(method) && input.bool() ? Buffer.alloc(0) : Buffer.from(input.field());
  return { method, target, headers, body };
}

function readReply(input, method) {
  const status = input.pick(statuses);
  const type = input.pick(types);
  const headers = {};
  for (let n = input.int(5); n > 0; n--) {
    const name = token(input.text()), value = headerValue(input.text());
    if (!hopByHop.has(name) && name !== 'content-type' && !(name in headers)) headers[name] = value;
  }
  if (type) headers['content-type'] = type;
  const noBody = status === 204 || status === 304;
  const body = noBody ? Buffer.alloc(0) : Buffer.from(input.field());
  let framing = input.pick(framings);
  if (noBody && framing !== 'malformed') framing = 'length';
  if (framing === 'cut' && method === 'HEAD') framing = 'length';
  const head = [`HTTP/1.1 ${status} Status`];
  for (const [k, v] of Object.entries(headers)) head.push(`${k}: ${v}`);
  head.push('connection: close');
  if (framing === 'malformed') head.push(`x-bad: a${String.fromCharCode(input.pick([1, 0x7f, 0x0b]))}b`);
  if (framing === 'chunked') head.push('transfer-encoding: chunked');
  else if (framing !== 'close' && !noBody) head.push(`content-length: ${body.length + (framing === 'cut' ? 1 + input.int(64) : 0)}`);
  else if (noBody) head.push('content-length: 0');
  const parts = [Buffer.from(head.join('\r\n') + '\r\n\r\n', 'latin1')];
  if (method !== 'HEAD' || framing === 'malformed') {
    if (framing === 'chunked') {
      for (let at = 0, size = 1 + input.int(32); at < body.length; at += size)
        parts.push(Buffer.from(body.subarray(at, at + size).length.toString(16) + '\r\n'), body.subarray(at, at + size), Buffer.from('\r\n'));
      parts.push(Buffer.from('0\r\n\r\n'));
    } else parts.push(body);
  }
  return { status, type, headers, body, framing, bytes: Buffer.concat(parts) };
}

/** The client's view: { status, headers, body } or { cut: true }, or 'timeout'. */
function send(request) {
  return new Promise(resolve => {
    const timer = setTimeout(() => { req.destroy(); resolve('timeout'); }, 3000);
    const done = value => { clearTimeout(timer); resolve(value); };
    const req = httpRequest({ host: '127.0.0.1', port: proxy.port, path: request.target, method: request.method, agent: false,
      headers: { ...request.headers, 'content-length': String(request.body.length) } }, response => {
      const chunks = [];
      response.on('data', c => chunks.push(c));
      response.on('end', () => done(response.complete ? { status: response.statusCode, headers: response.headers, body: Buffer.concat(chunks) } : { cut: true }));
      response.on('error', () => done({ cut: true }));
      response.on('close', () => { if (!response.complete) done({ cut: true }); });
    });
    req.on('error', () => done({ cut: true }));
    req.end(request.body);
  });
}

/** The reload client inserted before the first `</body>`, or appended. */
function injected(body, script) {
  const at = body.indexOf('</body>');
  return at < 0 ? Buffer.concat([body, script]) : Buffer.concat([body.subarray(0, at), script, Buffer.from('\n'), body.subarray(at)]);
}

export async function run(bytes) {
  const input = new Input(bytes);
  const request = readRequest(input);
  if (request.target === '/__lasm/events') return; // the event stream, not forwarded
  const reply = readReply(input, request.method);
  const seen = [];
  pending = { seen, reply };
  const outcome = await send(request);
  pending = null;
  const detail = { request: { ...request, body: request.body.toString('latin1') }, reply: { ...reply, body: reply.body.toString('latin1'), bytes: undefined },
    outcome: outcome.body ? { ...outcome, body: outcome.body.toString('latin1') } : outcome, seen: seen.map(s => ({ ...s, body: s.body.toString('latin1') })) };
  if (outcome === 'timeout') fail('the response through the proxy never ended', detail);
  // dev_proxy_forwards_once
  if (seen.length !== 1) fail(`the upstream received the request ${seen.length} times`, detail);
  const [s] = seen;
  if (s.method !== request.method || s.target !== request.target || !s.body.equals(request.body)) fail('the request changed on its way', detail);
  if (s.headers.host !== `127.0.0.1:${upstreamPort}`) fail('the Host header is not the upstream\'s', detail);
  if ('accept-encoding' in s.headers) fail('Accept-Encoding reached the upstream', detail);
  for (const [name, value] of Object.entries(request.headers))
    if (name !== 'accept-encoding' && [].concat(s.headers[name] ?? []).join(', ') !== value) fail(`the header ${name} changed`, detail);
  // dev_proxy_ends_failed_replies
  if (reply.framing === 'malformed') {
    if (!(outcome.cut || outcome.status === 502)) fail('a malformed reply did not end as a 502', detail);
    return;
  }
  if (reply.framing === 'cut') {
    if (!outcome.cut) fail('a cut reply reached the client whole', detail);
    return;
  }
  // dev_proxy_relays_reply
  if (outcome.cut) fail('a complete reply reached the client cut', detail);
  if (outcome.status !== reply.status) fail('the status changed', detail);
  const page = /^text\/html/.test(reply.type ?? '') && request.method !== 'HEAD';
  for (const [name, value] of Object.entries(reply.headers)) {
    const expected = page && name === 'cache-control' ? 'no-store' : value;
    if ([].concat(outcome.headers[name] ?? []).join(', ') !== expected) fail(`the reply header ${name} changed`, detail);
  }
  if (page && outcome.headers['cache-control'] !== 'no-store') fail('a page is cacheable', detail);
  const noBody = request.method === 'HEAD' || reply.status === 204 || reply.status === 304;
  const expected = noBody ? Buffer.alloc(0) : page ? injected(reply.body, script) : reply.body;
  if (!outcome.body.equals(expected)) fail('the body changed', detail);
}

export function seeds() {
  const seed = (...parts) => Uint8Array.from(parts.flatMap(p => typeof p === 'number' ? [p] : [...Buffer.from(p, 'latin1'), 0]));
  // method, target, header count (name kind, name, value)…, [empty body?], body, status, type, header count (name, value)…, body, framing[, chunk size]
  return [
    seed(0, '', 0, 0, 0, 0, '<p>hi</p></body>', 0),
    seed(1, 'echo', 2, 0, 'x-custom', 'kept', 1, '', 'gzip, br', 'payload', 3, 4, 1, 'cache-control', 'max-age=1', 'ok', 1, 3),
    seed(0, 'page?x=1', 0, 0, 0, 2, 0, '<html><body>caf\xe9</body></html>', 2),
    seed(5, 'page', 0, 0, 0, 0, '', 0),
    seed(0, 'stream', 0, 0, 0, 4, 0, 'abc', 3, 5),
    seed(1, 'order', 0, 'one order', 0, 1, 0, '', 4, 1),
    seed(0, '__lasm/events?x', 0, 0, 0, 0, 'no </body> here </body>', 1, 7),
    seed(0, '', 0, 0, 16, 0, 0, '', 0),
    seed(2, 'a%2Fb/../c?q=%E9', 1, 0, 'cookie', 'a=1; b=2', '\x00\x01binary', 6, 3, 0, '{"a":1}', 2),
  ];
}
