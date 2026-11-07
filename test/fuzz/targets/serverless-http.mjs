// The function platforms' HTTP boundary (src/serverless/): AWS Lambda's event
// → request mapping (API Gateway REST and HTTP API, function URLs, ALB,
// CloudFront) in lasm-lambda.mjs, and the cookie and body helpers of
// lasm-server.mjs every platform shim uses (joinCookies, parseSetCookie,
// azureReply, isTextual). The Lean server is replaced by a stub `forward`
// (a module hook redirects lasm-lambda.mjs's import), which checks the
// request it would send and answers with headers the input chooses.
// Input: structure read field by field (test/fuzz/input.mjs): the event kind,
// method, path, query values (any text, percent signs included), headers,
// cookies, body, and the reply.
// Oracle: every well-formed event of each kind is answered (no URIError or
// TypeError: a client controls the query string, and an exception is a 502);
// the request forwarded has a path starting with `/`, header pairs of strings
// and at most one Cookie header; query values decoded by the platform arrive
// with the same values; the response body round-trips (text or base64), and
// each Set-Cookie arrives once.
import { registerHooks } from 'node:module';
import { Input } from '../input.mjs';

export const sources = ['src/serverless/lasm-lambda.mjs', 'src/serverless/lasm-server.mjs'];
export const maxLength = 2048;
export const dictionary = ['%', '%2', '%25', '%E0%A4%A', '%C3%A9', '%FF', '%00', '+', '&', '=', '?', '#', ';', ',', '; ', ', ', 'a=1', 'b=2',
  'cookie', 'Cookie', 'set-cookie', 'content-type', 'text/html', 'application/json', 'image/png', 'content-encoding', 'gzip',
  'Path=/', 'Max-Age=-1', 'Expires=Wed, 21 Oct 2026 07:28:00 GMT', 'SameSite=lax', 'HttpOnly', 'Secure', 'Partitioned',
  '__proto__', 'constructor', 'é', '\u{1F600}', '\uD800'];

const stubURL = new URL('../support/serverless-stub.mjs', import.meta.url).href;
let lambda, server, stub;
export async function setup() {
  registerHooks({
    resolve(specifier, context, next) {
      if (specifier === './lasm-server.mjs' && context.parentURL?.endsWith('/src/serverless/lasm-lambda.mjs')) return { url: stubURL, shortCircuit: true };
      return next(specifier, context);
    },
  });
  stub = await import(stubURL);
  server = await import(new URL('../../../src/serverless/lasm-server.mjs', import.meta.url).href);
  lambda = await import(new URL('../../../src/serverless/lasm-lambda.mjs', import.meta.url).href);
}

const fail = (message, detail) => { throw Object.assign(new Error(`${message}\n${JSON.stringify(detail, null, 1)?.slice(0, 2000)}`), { name: 'OracleFailure' }); };
const tokenChars = "!#$%&'*+-.^_`|~0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
// What a gateway delivers as a header field: a token name, a value without control characters.
const headerName = s => [...s].filter(c => tokenChars.includes(c)).join('') || 'x-h';
const headerValue = s => [...s].filter(c => c >= ' ' && c !== '\x7f' && c <= '\xff').join('').trim();
const kinds = ['rest', 'alb', 'alb-multi', 'v2', 'cloudfront'];
// Objects as JSON.parse builds an event: `__proto__` and `constructor` are own keys.
const object = entries => JSON.parse('{' + entries.map(([k, v]) => JSON.stringify(k) + ':' + JSON.stringify(v)).join(',') + '}');
const grouped = entries => { const m = new Map(); for (const [k, v] of entries) { if (!m.has(k)) m.set(k, []); m.get(k).push(v); } return object([...m]); };

function event(input) {
  const kind = input.pick(kinds);
  const method = input.pick(['GET', 'POST', 'HEAD', 'PUT', 'DELETE', 'OPTIONS', 'PATCH']);
  // A gateway's path never holds the query.
  const path = '/' + input.text().replace(/[?#]/g, '');
  const params = [];
  for (let n = input.int(4); n > 0; n--) params.push([input.text(), input.text()]);
  const headers = [];
  for (let n = input.int(5); n > 0; n--) headers.push([headerName(input.text()), headerValue(input.text())]);
  const cookies = [];
  for (let n = input.int(3); n > 0; n--) cookies.push(headerValue(input.text()));
  const base64 = input.bool();
  const body = input.field();
  const encoded = body.length ? (base64 ? Buffer.from(body).toString('base64') : new TextDecoder().decode(body)) : null;
  const single = object(params), multi = grouped(params);
  const headerObject = object(headers), multiHeaders = grouped(headers);
  let e;
  if (kind === 'rest') e = { httpMethod: method, path, queryStringParameters: params.length ? single : null,
    multiValueQueryStringParameters: params.length ? multi : null, headers: headerObject, multiValueHeaders: multiHeaders,
    body: encoded, isBase64Encoded: base64, requestContext: {} };
  else if (kind === 'alb' || kind === 'alb-multi') {
    // An ALB passes the query as the client sent it: still percent-encoded (or not, when malformed).
    const raw = s => input.bool() ? encodeURIComponent(s) : s;
    const q = params.map(([k, v]) => [raw(k), raw(v)]);
    e = { httpMethod: method, path, headers: headerObject, body: encoded, isBase64Encoded: base64, requestContext: { elb: { targetGroupArn: 'arn' } } };
    if (kind === 'alb') e.queryStringParameters = object(q);
    else { e.multiValueQueryStringParameters = grouped(q); e.multiValueHeaders = multiHeaders; delete e.headers; }
  } else if (kind === 'v2') e = { version: '2.0', rawPath: path, rawQueryString: params.map(([k, v]) => `${k}=${v}`).join('&'),
    headers: headerObject, cookies: cookies.length ? cookies : undefined, body: encoded, isBase64Encoded: base64,
    requestContext: { http: { method } } };
  else {
    const cf = grouped(headers.map(([k, v]) => [k.toLowerCase(), { key: k, value: v }]));
    e = { Records: [{ cf: { request: { method, uri: path, querystring: params.map(([k, v]) => `${k}=${v}`).join('&'), headers: cf,
      ...(encoded !== null ? { body: { data: base64 ? encoded : encoded, encoding: base64 ? 'base64' : 'text' } } : {}) } } }] };
  }
  // The reply the Lean server gives.
  const reply = { status: input.pick([200, 201, 204, 302, 304, 400, 404, 500]), statusText: 'S', headers: [], body: Buffer.from(input.field()) };
  for (let n = input.int(5); n > 0; n--) reply.headers.push([input.pick(['set-cookie', 'content-type', 'x-a', 'content-encoding', 'location']),
    headerValue(input.text()) || 'v']);
  return { kind, e, params, reply };
}

export async function run(bytes) {
  const input = new Input(bytes);
  const { kind, e, params, reply } = event(input);
  stub.next(reply);
  let response;
  try { response = await lambda.handler(e); }
  catch (error) { fail(`the ${kind} event threw ${error?.name}: ${error?.message}`, e); }
  const sent = stub.last();
  if (!sent) fail('nothing forwarded', e);
  if (typeof sent.path !== 'string' || !sent.path.startsWith('/')) fail(`forwarded path ${sent.path}`, e);
  if (sent.headers.some(p => !Array.isArray(p) || typeof p[0] !== 'string' || typeof p[1] !== 'string')) fail('header pairs', sent.headers);
  if (server.joinCookies(sent.headers).filter(([n]) => n.toLowerCase() === 'cookie').length > 1) fail('several cookie headers', sent.headers);
  // API Gateway REST decodes query values; they must arrive as given.
  if (kind === 'rest' && params.length) {
    const got = [...new URLSearchParams(sent.path.slice(sent.path.indexOf('?') + 1))];
    // In the multi-value form's order (grouped by name, as the event holds them).
    const want = Object.entries(e.multiValueQueryStringParameters).flatMap(([k, vs]) => vs.map(v => [k, v]));
    if (JSON.stringify(got) !== JSON.stringify(want)) fail('query values changed', { got, want });
  }
  // An ALB's query arrives as the client sent it.
  if (kind.startsWith('alb')) {
    const sentQuery = sent.path.includes('?') ? sent.path.slice(sent.path.indexOf('?') + 1) : '';
    const entries = kind === 'alb' ? Object.entries(e.queryStringParameters ?? {}) : Object.entries(e.multiValueQueryStringParameters ?? {}).flatMap(([k, vs]) => vs.map(v => [k, v]));
    const want = entries.map(([k, v]) => `${k}=${v}`).join('&');
    if (sentQuery !== want) fail('the ALB query changed', { sentQuery, want });
  }
  // The response body: text or base64, and the bytes it stands for.
  const body = kind === 'cloudfront' ? (response.bodyEncoding === 'base64' ? Buffer.from(response.body, 'base64') : Buffer.from(response.body))
    : response.isBase64Encoded ? Buffer.from(response.body, 'base64') : Buffer.from(response.body);
  const textual = server.isTextual(reply.headers);
  if (textual ? body.toString() !== reply.body.toString() : !body.equals(reply.body)) fail('the body changed', { kind, textual });
  const setCookies = reply.headers.filter(([n]) => n === 'set-cookie').map(([, v]) => v);
  if (kind === 'v2' && JSON.stringify(response.cookies ?? []) !== JSON.stringify(setCookies)) fail('set-cookie values', { response, setCookies });
  if (kind === 'rest' && JSON.stringify(response.multiValueHeaders['set-cookie'] ?? []) !== JSON.stringify(setCookies)) fail('set-cookie values', response);
  // The other platforms' helpers on the same reply.
  for (const value of setCookies) {
    const c = server.parseSetCookie(value);
    if (c && (typeof c.name !== 'string' || !c.name || !Array.isArray(c.dropped))) fail('parseSetCookie', { value, c });
  }
  const azure = server.azureReply(reply);
  const kept = [...azure.headers].filter(([n]) => n === 'set-cookie').length + (azure.cookies?.length ?? 0);
  if (kept > setCookies.length) fail('azureReply made up cookies', { setCookies, azure });
}

export function seeds() {
  const enc = s => new TextEncoder().encode(s);
  const seed = (...parts) => Uint8Array.from(parts.flatMap(p => typeof p === 'number' ? [p] : [...enc(p), 0]));
  return [
    seed(0, 0, 'users/1', 1, 'q', 'a b', 1, 'Host', 'example.com', 0, 0, '', 0, 0, 'hello', 1, 'content-type', 'text/plain'),
    seed(1, 1, 'search', 1, 'q', '%E0%A4%A', 0, 0, 0, 'x', 0, 0, 0, 0),
    seed(2, 1, 'search', 2, 'a', '1', 'a', '2', 0, 0, 0, '', 0, 0, 0, 0),
    seed(3, 1, 'api/rpc/add', 1, 'x', '1', 1, 'cookie', 'a=1', 2, 'b=2', 'c=3', 0, '{"a":1}', 0, 0, 2, 'set-cookie', 'a=1; Path=/', 'set-cookie', 'b=2'),
    seed(4, 0, 'index.html', 0, 1, 'accept', 'text/html', 0, 1, '', 3, '', 1, 'content-type', 'image/png'),
  ];
}
