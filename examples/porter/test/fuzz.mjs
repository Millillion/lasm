// The endpoint fuzzer (claim 5 of docs/proposals/TESTING_STRATEGY.md:
// untrusted input cannot crash or subvert a Lasm program). Random and
// mutated requests go to every endpoint of the compiled server, aimed at its
// parsers: query strings and forms (percent-escapes, broken escapes, invalid
// UTF-8, repeated and empty parameters, huge values), the Cookie header, the
// Authorization header (Basic with random and broken base64, Bearer), the
// Content-Type, the path segments, and the method. Half the requests start
// from a valid one (a real authorization URL, a real code with its verifier)
// and mutate it.
//
// Every request must get, within a time budget:
// - a status Porter can give (200, 204, 303, 400, 401, 404, 405), never 5xx;
// - for a JSON error, only `error` and `error_description`, with a known code;
// - for an HTML page, none of the request's random markers echoed unescaped;
// - for a redirect, a Location that is Porter's own interaction page or starts
//   with a URI registered in test/config.mjs.
// At the end the server must still answer, and a full sign-in must still work.
//
//   node test/fuzz.mjs [--seed N] [--seconds S] [--url URL | --command CMD | --platform NAME]
//
// The seed is printed first; `--seed` replays a run. Failing requests are
// written to test-results/fuzz-SEED.json.
import assert from 'node:assert/strict';
import { createHash, randomBytes } from 'node:crypto';
import { mkdirSync, writeFileSync } from 'node:fs';
import { METHODS as NODE_METHODS, request as httpRequest } from 'node:http';
import { join } from 'node:path';
import { Browser, root, serverArgs, startPorter } from './server.mjs';
import { cb, clients, testConfig } from './config.mjs';

const arg = (n, d) => process.argv.includes(n) ? process.argv[process.argv.indexOf(n) + 1] : d;
const seed = Number(arg('--seed', Math.floor(Math.random() * 2 ** 31)));
const seconds = Number(arg('--seconds', 60));
console.log(`seed ${seed} (replay: node test/fuzz.mjs --seed ${seed} --seconds ${seconds})`);

function rng(s) {
  return () => {
    s |= 0; s = (s + 0x6d2b79f5) | 0;
    let t = Math.imul(s ^ (s >>> 15), 1 | s);
    t = (t + Math.imul(t ^ (t >>> 7), 61 | t)) ^ t;
    return ((t ^ (t >>> 14)) >>> 0) / 4294967296;
  };
}
const r = rng(seed);
const int = n => Math.floor(r() * n);
const pick = xs => xs[int(xs.length)];
const chance = p => r() < p;

const server = await startPorter(serverArgs());
const base = server.base;
const { hostname: host, port } = new URL(base);

const PATHS = ['/', '/authorize', '/token', '/userinfo', '/logout', '/jwks', '/.well-known/openid-configuration',
  '/interaction/x', '/interaction/x/login', '/interaction/x/consent', '/interaction', '/interaction/x/y/z', '/%2e%2e/token',
  '//token', '/token/', '/TOKEN', '/authorize;x', '/%00', '/interaction/%ff', '/interaction/' + 'a'.repeat(5000)];
const METHODS = ['GET', 'POST', 'POST', 'PUT', 'DELETE', 'OPTIONS', 'HEAD', 'PATCH', 'FOO'];
const NAMES = ['client_id', 'redirect_uri', 'response_type', 'scope', 'state', 'nonce', 'code_challenge',
  'code_challenge_method', 'prompt', 'max_age', 'response_mode', 'request', 'request_uri', 'grant_type', 'code',
  'code_verifier', 'refresh_token', 'client_secret', 'username', 'password', 'decision', 'confirm',
  'post_logout_redirect_uri', 'id_token_hint', 'access_token', '', '=', '&', 'x'];
const VALUES = () => [cb, clients.basic.client_id, clients.pub.client_id, 'code', 'openid', 'openid profile offline_access',
  'S256', 'plain', 'none', 'login consent', 'allow', 'deny', 'yes', 'authorization_code', 'refresh_token', '0', '-1',
  '99999999999999999999', 'a'.repeat(43), 'a'.repeat(129), '', ' ', '+', '%', '%2', '%zz', '%ff', '%c3%28', '%00',
  '%e2%80%a8', ' ', '😀', '<b>', '"\'><', 'http://evil.example/', 'javascript:alert(1)', 'x'.repeat(int(20000)),
  randomBytes(int(64)).toString('base64'), randomBytes(int(64)).toString('base64url')];

/** A marker that must never come back unescaped. */
const marker = () => `<zq${int(1e9)}>`;

function randomString() {
  const k = r();
  if (k < 0.4) return pick(VALUES());
  if (k < 0.6) return marker();
  let s = '';
  const n = int(chance(0.1) ? 3000 : 40);
  for (let i = 0; i < n; i++) {
    const c = r();
    s += c < 0.6 ? String.fromCharCode(32 + int(95)) : c < 0.75 ? pick(['%', '&', '=', '+', ';', ' ', '\t', '"', "'"])
      : c < 0.9 ? String.fromCodePoint(0xa0 + int(0x2000)) : '%' + int(256).toString(16).padStart(2, '0');
  }
  return s;
}

/** Joins parameters raw (no encoding), so escapes and separators stay as made. */
const rawForm = ps => ps.map(([k, v]) => v === undefined ? k : `${k}=${v}`).join('&');
const encForm = ps => new URLSearchParams(ps).toString();

function randomParams() {
  const ps = [];
  for (let i = 0, n = int(12); i < n; i++) ps.push([pick(NAMES), randomString()]);
  if (chance(0.3)) ps.push(...ps.slice(0, int(ps.length + 1))); // repeats
  return ps;
}

function mutate(s) {
  const b = Buffer.from(s);
  for (let i = 0, n = 1 + int(4); i < n && b.length; i++) {
    const p = int(b.length);
    const op = int(4);
    if (op === 0) b[p] = int(256);
    else if (op === 1) b[p] = pick([0x25, 0x26, 0x3d, 0x2b, 0x3b, 0x20]);
    else if (op === 2) return mutate(s.slice(0, p) + s.slice(p + 1 + int(10)));
    else return mutate(s.slice(0, p) + randomString() + s.slice(p));
  }
  return b.toString('latin1');
}

/** A valid authorization request and code, made once, then mutated. */
const seedBrowser = new Browser(base);
const verifier = randomBytes(32).toString('base64url');
const challenge = createHash('sha256').update(verifier).digest('base64url');
const validAuth = encForm({ client_id: clients.basic.client_id, redirect_uri: cb, response_type: 'code',
  scope: 'openid profile offline_access', state: 's', nonce: 'n', code_challenge: challenge, code_challenge_method: 'S256' });
const location = await seedBrowser.authorize(`${base}/authorize?${validAuth}`);
const validCode = new URL(location).searchParams.get('code');
const validToken = encForm({ grant_type: 'authorization_code', code: validCode, redirect_uri: cb, code_verifier: verifier });
const sessionCookie = seedBrowser.cookieHeader(`${base}/`);
const basicHeader = 'Basic ' + Buffer.from(`${clients.basic.client_id}:${clients.basic.client_secret}`).toString('base64');

function randomHeaders(form) {
  const h = {};
  if (form || chance(0.3)) h['content-type'] = chance(0.8) ? pick(['application/x-www-form-urlencoded',
    'application/x-www-form-urlencoded; charset=UTF-8', 'APPLICATION/X-WWW-FORM-URLENCODED']) : randomString().replace(/[\r\n]/g, '');
  if (chance(0.5)) h.cookie = chance(0.5) ? mutate(sessionCookie + '; porter_interaction=' + randomString())
    : `porter_session=${randomString()}; porter_interaction=${randomString()}`;
  if (chance(0.5)) {
    const k = r();
    h.authorization = k < 0.3 ? mutate(basicHeader)
      : k < 0.5 ? 'Basic ' + Buffer.from(randomString()).toString(pick(['base64', 'base64url', 'latin1']))
      : k < 0.7 ? 'Bearer ' + randomString() : k < 0.8 ? pick(['Basic', 'Bearer', 'Basic ', 'basic ===', 'Digest x'])
      : randomString();
  }
  for (const k of Object.keys(h)) h[k] = h[k].replace(/[\r\n\0]/g, '').replace(/[^\x20-\x7e\x80-\xff\t]/g, '?').slice(0, 4000);
  return h;
}

/** One request over a raw HTTP connection (bytes as made, no client-side checks). */
function send(method, path, headers, body) {
  return new Promise(resolve => {
    const started = Date.now();
    let req;
    try { req = httpRequest({ host, port, method, path, headers: { ...headers, ...(body ? { 'content-length': Buffer.byteLength(body, 'latin1') } : {}) } }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => resolve({ status: res.statusCode, headers: res.headers, text: Buffer.concat(chunks).toString('utf8'), ms: Date.now() - started }));
    }); } catch (e) { resolve({ skipped: e.message }); return; }
    req.on('error', e => resolve({ error: e.message, ms: Date.now() - started }));
    req.setTimeout(10_000, () => { req.destroy(new Error('timeout')); });
    if (body) req.write(body, 'latin1');
    req.end();
  });
}

const STATUSES = new Set([200, 204, 303, 400, 401, 404, 405]);
const ERRORS = new Set(['invalid_request', 'invalid_client', 'invalid_grant', 'unsupported_grant_type', 'invalid_scope',
  'invalid_token']);
const registered = testConfig.clients.flatMap(c => [...c.redirect_uris, ...(c.post_logout_redirect_uris ?? [])]);

/** Node's HTTP server refuses a request line and headers over 16 KiB itself
(431, or a reset connection) before Porter sees it, as it refuses methods
it does not know. */
const tooLargeForNode = req => req.path.length + Object.entries(req.headers).reduce((n, [k, v]) => n + k.length + v.length + 4, 0) > 16000;

function problems(req, res) {
  const out = [];
  if (tooLargeForNode(req) && (res.status === 431 || res.error)) return [];
  // workerd refuses a URL over 16 KiB with 414.
  if (res.status === 414 && req.path.length > 8000) return [];
  // Likewise a method Node's HTTP parser does not know: it closes the connection.
  // (workerd answers 501 for them.)
  if (!NODE_METHODS.includes(req.method) && (res.error || res.status === 400 || res.status === 501)) return [];
  if (res.error) return [`no answer: ${res.error}`];
  if (!STATUSES.has(res.status)) out.push(`status ${res.status}`);
  if (res.ms > 5000) out.push(`slow: ${res.ms} ms`);
  const type = res.headers['content-type'] ?? '';
  if (res.status >= 400 && type.startsWith('application/json') && req.method !== 'HEAD') {
    let j; try { j = JSON.parse(res.text); } catch { out.push('error JSON does not parse'); }
    if (j && (Object.keys(j).join() !== 'error,error_description' || !ERRORS.has(j.error))) out.push(`unexpected error JSON ${res.text}`);
  }
  if (type.startsWith('text/html')) for (const m of req.markers) if (res.text.includes(m)) out.push(`marker ${m} echoed`);
  if (res.status === 303) {
    const loc = res.headers.location ?? '';
    if (!(loc.startsWith(`${base}/interaction/`) || registered.some(u => loc.startsWith(u + '?') || loc.startsWith(u + '&'))))
      out.push(`redirect to ${loc}`);
  }
  return out;
}

function makeRequest() {
  const k = r();
  let method, path, body, headers;
  if (k < 0.25) { // mutated valid authorization request
    method = pick(['GET', 'POST']);
    const q = chance(0.5) ? mutate(validAuth) : rawForm([...new URLSearchParams(validAuth)].map(([a, b]) => [a, chance(0.2) ? randomString() : b]));
    if (method === 'GET') path = '/authorize?' + q; else { path = '/authorize'; body = q; }
    headers = randomHeaders(method === 'POST');
  } else if (k < 0.5) { // mutated valid token request
    method = 'POST'; path = '/token';
    body = chance(0.5) ? mutate(validToken) : rawForm([...new URLSearchParams(validToken), ...randomParams()]);
    headers = randomHeaders(true);
    if (chance(0.5)) headers.authorization = chance(0.7) ? basicHeader : mutate(basicHeader);
  } else { // anything, anywhere
    method = pick(METHODS);
    path = pick(PATHS) + (chance(0.6) ? '?' + (chance(0.5) ? rawForm(randomParams()) : encForm(randomParams())) : '');
    body = chance(0.5) ? (chance(0.5) ? rawForm(randomParams()) : randomBytes(int(3000)).toString('latin1')) : undefined;
    headers = randomHeaders(!!body);
  }
  // The path's bytes as sent: everything outside printable ASCII (and #) escaped.
  path = [...Buffer.from(path, 'latin1')].map(b => b > 0x20 && b < 0x7f && b !== 0x23 ? String.fromCharCode(b)
    : '%' + b.toString(16).padStart(2, '0')).join('');
  const markers = [...(path + (body ?? '') + Object.values(headers).join()).matchAll(/<zq\d+>/g)].map(m => m[0]);
  return { method, path, headers, body: method === 'GET' || method === 'HEAD' ? undefined : body, markers };
}

const failures = [];
const end = Date.now() + seconds * 1000;
let n = 0;
const statusCounts = {};
while (Date.now() < end) {
  const batch = Array.from({ length: 8 }, makeRequest);
  const results = await Promise.all(batch.map(q => send(q.method, q.path, q.headers, q.body)));
  batch.forEach((q, i) => {
    const res = results[i];
    if (res.skipped) return; // a request Node's HTTP client refuses to send
    n++;
    statusCounts[res.status ?? 'error'] = (statusCounts[res.status ?? 'error'] ?? 0) + 1;
    const p = problems(q, res);
    if (p.length) {
      failures.push({ request: { ...q, body: q.body?.slice(0, 2000) }, status: res.status, problems: p });
      if (failures.length <= 5) console.log(`FAIL ${q.method} ${q.path.slice(0, 200)}: ${p.join('; ')}`);
    }
  });
}

// Still alive, and still correct.
let alive = true;
try {
  const b = new Browser(base);
  const v = randomBytes(32).toString('base64url');
  const loc = await b.authorize(`${base}/authorize?` + encForm({ client_id: clients.basic.client_id, redirect_uri: cb,
    response_type: 'code', scope: 'openid', state: 's', code_challenge: createHash('sha256').update(v).digest('base64url'),
    code_challenge_method: 'S256' }));
  const code = new URL(loc).searchParams.get('code');
  const res = await fetch(`${base}/token`, { method: 'POST', headers: { authorization: basicHeader,
    'content-type': 'application/x-www-form-urlencoded' }, body: encForm({ grant_type: 'authorization_code', code,
    redirect_uri: cb, code_verifier: v }) });
  assert.equal(res.status, 200);
} catch (e) { alive = false; console.log(`after the run, a sign-in failed: ${e.message}`); }

await server.stop();
console.log(`${n} requests in ${seconds} s; statuses ${JSON.stringify(statusCounts)}; ${failures.length} failed; server ${alive ? 'still answers correctly' : 'BROKEN'}`);
if (failures.length || !alive) {
  mkdirSync(join(root, 'test-results'), { recursive: true });
  const file = join(root, 'test-results', `fuzz-${seed}.json`);
  writeFileSync(file, JSON.stringify(failures.slice(0, 200), null, 1));
  console.log(`failing requests: ${file}`);
  process.exitCode = 1;
}
