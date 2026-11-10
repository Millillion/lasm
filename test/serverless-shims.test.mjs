// The function-platform shims of src/serverless/ in this process (so that
// mutation testing sees them run; test/serverless.test.mjs runs the packaged
// copies in child processes). A programmable stand-in server takes the Lean
// program's place: it echoes each request as JSON, or answers with the reply
// a request's `x-reply` header describes. The platform packages
// (@azure/functions, @google-cloud/functions-framework) are stand-ins that
// record the handler a shim registers.
import assert from 'node:assert/strict';
import { after, before, test } from 'node:test';
import http from 'node:http';
import { registerHooks } from 'node:module';
import { mkdtempSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { forAll } from './helpers/property.mjs';

const shim = name => new URL(`../src/serverless/${name}`, import.meta.url).href;
const directory = mkdtempSync(join(tmpdir(), 'lasm-shims-'));

// The stand-in program: started by startLeanServer as main.mjs would be.
const standIn = `import http from 'node:http';
globalThis.standIn = { argv: process.argv.slice(), env: { PORT: process.env.PORT, HOST: process.env.HOST, LASM_THREAD_POOL: process.env.LASM_THREAD_POOL } };
const server = http.createServer((req, res) => {
  const chunks = [];
  req.on('data', c => chunks.push(c)).on('end', () => {
    const spec = req.headers['x-reply'];
    if (spec === 'abort') { res.writeHead(200, { 'content-type': 'text/plain' }); res.write('part'); return setTimeout(() => res.socket.destroy(), 20); }
    if (spec) {
      const { status = 200, statusText, headers = [], body = '' } = JSON.parse(spec);
      res.writeHead(status, statusText, headers.flat());
      return res.end(Buffer.from(body, 'base64'));
    }
    res.writeHead(200, { 'content-type': 'application/json' });
    res.end(JSON.stringify({ method: req.method, url: req.url, headers: req.rawHeaders, body: Buffer.concat(chunks).toString('base64') }));
  });
});
globalThis.standIn.server = server;
server.listen(Number(process.env.PORT), process.env.HOST);
`;
writeFileSync(join(directory, 'main.mjs'), standIn);

// Stand-in platform packages.
const registered = {};
globalThis.registerShim = (platform, value) => { registered[platform] = value; };
const packages = {
  '@azure/functions': 'export const app = { http(name, options) { globalThis.registerShim("azure", { name, options }); } };',
  '@google-cloud/functions-framework': 'export default { http(name, fn) { globalThis.registerShim("gcf", { name, fn }); } };',
};
registerHooks({
  resolve(specifier, context, next) {
    if (Object.hasOwn(packages, specifier)) return { url: 'data:text/javascript,' + encodeURIComponent(packages[specifier]), shortCircuit: true };
    return next(specifier, context);
  },
});

let server;
const reply = (status, headers = [], body = '', statusText) =>
  JSON.stringify({ status, statusText, headers, body: Buffer.from(body).toString('base64') });
const echoed = result => JSON.parse(Buffer.isBuffer(result) ? result.toString() : result);
const fields = rawHeaders => { const out = []; for (let i = 0; i < rawHeaders.length; i += 2) out.push([rawHeaders[i], rawHeaders[i + 1]]); return out; };
const named = (rawHeaders, name) => fields(rawHeaders).filter(([n]) => n.toLowerCase() === name).map(([, v]) => v);

before(async () => {
  delete process.env.LASM_SERVER_PORT;
  delete process.env.LASM_THREAD_POOL;
  const { startLeanServer } = await import(shim('lasm-server.mjs'));
  const argv = process.argv.slice();
  const port = await startLeanServer({ main: pathToFileURL(join(directory, 'main.mjs')) });
  assert.deepEqual(process.argv, argv, 'the arguments are restored after start-up');
  server = globalThis.standIn.server;
  assert.equal(server.address().port, port);
});

after(() => {
  server?.closeAllConnections();
  server?.close();
});

test('startLeanServer: one start, the program sees PORT, HOST, one Lean thread and only its own path as arguments', async () => {
  const { startLeanServer } = await import(shim('lasm-server.mjs'));
  const port = server.address().port;
  assert.equal(await startLeanServer(), port, 'a second call returns the same server');
  assert.equal(startLeanServer(), startLeanServer());
  assert.deepEqual(globalThis.standIn.env, { PORT: String(port), HOST: '127.0.0.1', LASM_THREAD_POOL: '1' });
  assert.deepEqual(globalThis.standIn.argv, [process.execPath, join(directory, 'main.mjs')]);
  assert.equal(server.address().address, '127.0.0.1');
  assert.ok(Number.isInteger(globalThis.__lasmColdStartMs) && globalThis.__lasmColdStartMs >= 0);
});

// A fresh instance of lasm-server.mjs (its own start-up state) per case.
let instances = 0;
const fresh = async () => import(shim('lasm-server.mjs') + `?instance=${++instances}`);
const program = (name, text) => { const file = join(directory, name); writeFileSync(file, text); return pathToFileURL(file); };

test('startLeanServer keeps an explicit LASM_SERVER_PORT and LASM_THREAD_POOL', async t => {
  const { startLeanServer } = await fresh();
  const free = await new Promise(resolve => { const s = http.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => resolve(port)); }); });
  const saved = { ...process.env };
  t.after(() => { for (const name of ['LASM_SERVER_PORT', 'LASM_THREAD_POOL', 'PORT', 'HOST']) if (saved[name] === undefined) delete process.env[name]; else process.env[name] = saved[name]; });
  process.env.LASM_SERVER_PORT = String(free);
  process.env.LASM_THREAD_POOL = '3';
  const main = program('fixed.mjs', `import http from 'node:http';
globalThis.fixed = { pool: process.env.LASM_THREAD_POOL, server: http.createServer((q, s) => s.end('fixed')).listen(Number(process.env.PORT), process.env.HOST) };`);
  assert.equal(await startLeanServer({ main }), free);
  t.after(() => globalThis.fixed.server.close());
  assert.equal(globalThis.fixed.pool, '3');
  assert.equal(process.env.PORT, String(free));
});

test('startLeanServer: a program that stops with an exit code or never listens fails with the reason', async t => {
  const exitCode = process.exitCode;
  t.after(() => { process.exitCode = exitCode; });
  const stopped = await fresh();
  await assert.rejects(stopped.startLeanServer({ main: program('stops.mjs', 'process.exitCode = 3;') }),
    { message: 'The Lean application stopped during start-up (exit code 3); see the log above.' });
  process.exitCode = 0;
  const quiet = await fresh();
  const started = performance.now();
  await assert.rejects(quiet.startLeanServer({ main: program('quiet.mjs', ''), timeoutMs: 60 }),
    { message: /^The Lean application did not listen on \$PORT \(\d+\) within 60 ms\. Function platforms need a server that listens on \$HOST:\$PORT\.$/ });
  assert.ok(performance.now() - started >= 55, 'it waits for the timeout');
  // The timeout's default comes from LASM_START_TIMEOUT_MS.
  const saved = process.env.LASM_START_TIMEOUT_MS;
  t.after(() => { if (saved === undefined) delete process.env.LASM_START_TIMEOUT_MS; else process.env.LASM_START_TIMEOUT_MS = saved; });
  process.env.LASM_START_TIMEOUT_MS = '40';
  const configured = await fresh();
  await assert.rejects(configured.startLeanServer({ main: program('quiet2.mjs', '') }), { message: /within 40 ms/ });
  // A program that throws while it loads: the error, and the arguments restored.
  const argv = process.argv.slice();
  const throwing = await fresh();
  await assert.rejects(throwing.startLeanServer({ main: program('throws.mjs', 'throw new Error("boom at load");') }), { message: 'boom at load' });
  assert.deepEqual(process.argv, argv);
});

test('forward: method, target, fields and body reach the server; its status, fields and body come back', async () => {
  const { forward } = await import(shim('lasm-server.mjs'));
  const port = server.address().port;
  const got = await forward({ method: 'POST', path: '/echo?a=1', headers: [['Content-Type', 'text/plain'], ['Content-Length', '99'],
    ['Connection', 'keep-alive'], ['Cookie', 'a=1'], ['cookie', 'b=2'], ['x-many', '1'], ['x-many', '2']], body: Buffer.from('héllo') });
  assert.equal(got.status, 200);
  assert.equal(got.statusText, 'OK');
  const request = echoed(got.body);
  assert.deepEqual([request.method, request.url, Buffer.from(request.body, 'base64').toString()], ['POST', '/echo?a=1', 'héllo']);
  assert.deepEqual(named(request.headers, 'content-length'), [String(Buffer.byteLength('héllo'))], 'the body sets Content-Length');
  assert.deepEqual(named(request.headers, 'host'), [`127.0.0.1:${port}`]);
  assert.deepEqual(named(request.headers, 'cookie'), ['a=1; b=2']);
  assert.deepEqual(named(request.headers, 'x-many'), ['1', '2']);
  assert.deepEqual(named(request.headers, 'connection'), ['keep-alive'], "the agent's own Connection, not the event's");
  assert.deepEqual(got.headers.find(([name]) => name === 'content-type'), ['content-type', 'application/json']);
  // No body: no Content-Length, and an empty path is `/`.
  const bare = echoed((await forward({ method: 'GET', path: '', headers: [], body: undefined })).body);
  assert.deepEqual([bare.url, named(bare.headers, 'content-length'), named(bare.headers, 'transfer-encoding'), bare.body], ['/', [], [], '']);
  const empty = echoed((await forward({ method: 'POST', path: '/x', headers: [], body: Buffer.alloc(0) })).body);
  assert.deepEqual(named(empty.headers, 'content-length'), []);
  // The reply's fields keep their order and repeats (Set-Cookie), names in lower case, without hop-by-hop fields.
  const answer = await forward({ method: 'GET', path: '/r', headers: [['x-reply', reply(201, [['Set-Cookie', 'a=1'], ['set-cookie', 'b=2'],
    ['X-Y', 'z'], ['Keep-Alive', 'timeout=5'], ['Trailer', 'x'], ['Upgrade', 'h2c']], 'made', 'Made It')]], body: undefined });
  assert.deepEqual([answer.status, answer.statusText, answer.body.toString()], [201, 'Made It', 'made']);
  assert.deepEqual(answer.headers.filter(([name]) => name !== 'date' && name !== 'content-length' && name !== 'connection'),
    [['set-cookie', 'a=1'], ['set-cookie', 'b=2'], ['x-y', 'z']]);
});

test('forward fails when the server is unreachable', async t => {
  const { forward, startLeanServer } = await fresh();
  const closed = await new Promise(resolve => { const s = http.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => resolve(port)); }); });
  const saved = process.env.LASM_SERVER_PORT;
  t.after(() => { if (saved === undefined) delete process.env.LASM_SERVER_PORT; else process.env.LASM_SERVER_PORT = saved; });
  process.env.LASM_SERVER_PORT = String(closed);
  // A program that listens only long enough for start-up to succeed.
  const main = program('brief.mjs', `import http from 'node:http';
const s = http.createServer().listen(Number(process.env.PORT), process.env.HOST, () => setTimeout(() => s.close(), 50));`);
  await startLeanServer({ main });
  await new Promise(resolve => setTimeout(resolve, 150));
  await assert.rejects(forward({ method: 'GET', path: '/', headers: [], body: undefined }), { code: 'ECONNREFUSED' });
});

/** A Node (req, res) server around `handler`; returns { base, request(path, options) → { status, statusText, headers, body } }. */
async function nodeServer(t, handler) {
  const front = http.createServer(handler).listen(0, '127.0.0.1');
  await new Promise(resolve => front.once('listening', resolve));
  t.after(() => { front.closeAllConnections(); front.close(); });
  const { port } = front.address();
  const request = (path, { method = 'GET', headers = [], body } = {}) => new Promise((resolve, reject) => {
    http.request({ host: '127.0.0.1', port, method, path, headers: ['host', `127.0.0.1:${port}`, ...headers.flat()], agent: false }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      res.on('end', () => resolve({ status: res.statusCode, statusText: res.statusMessage, headers: res.rawHeaders, body: Buffer.concat(chunks), complete: res.complete }));
      res.on('error', error => resolve({ status: res.statusCode, error, body: Buffer.concat(chunks) }));
    }).on('error', reject).end(body);
  });
  return { port, request };
}

test('Vercel: the request is piped to the server and its reply back', async t => {
  const { default: handler } = await import(shim('lasm-vercel.mjs'));
  const { port, request } = await nodeServer(t, handler);
  const post = await request('/echo?x=1', { method: 'PUT', headers: [['content-type', 'text/plain'], ['cookie', 'a=1'], ['cookie', 'b=2']], body: 'hi' });
  assert.equal(post.status, 200);
  const seen = echoed(post.body);
  assert.deepEqual([seen.method, seen.url, Buffer.from(seen.body, 'base64').toString()], ['PUT', '/echo?x=1', 'hi']);
  assert.deepEqual(named(seen.headers, 'cookie'), ['a=1; b=2']);
  assert.deepEqual(named(seen.headers, 'host'), [`127.0.0.1:${port}`], "a plain Host is the client's");
  assert.deepEqual(named(seen.headers, 'content-length'), ['2']);
  const answer = await request('/r', { headers: [['x-reply', reply(303, [['Location', '/there'], ['Set-Cookie', 'a=1'], ['Set-Cookie', 'b=2'], ['Keep-Alive', 'timeout=1']], '', 'See It')]] });
  assert.deepEqual([answer.status, answer.statusText, answer.body.length], [303, 'See It', 0]);
  assert.deepEqual(named(answer.headers, 'location'), ['/there']);
  assert.deepEqual(named(answer.headers, 'set-cookie'), ['a=1', 'b=2']);
  assert.deepEqual(named(answer.headers, 'keep-alive').filter(value => value === 'timeout=1'), [], 'no hop-by-hop field of the server');
});

test('Vercel: a server that breaks off mid-reply leaves the response incomplete', async t => {
  const { default: handler } = await import(shim('lasm-vercel.mjs'));
  const { request } = await nodeServer(t, handler);
  const errors = [];
  t.mock.method(console, 'error', error => errors.push(error));
  const broken = await request('/abort', { headers: [['x-reply', 'abort']] });
  assert.equal(broken.status, 200);
  assert.ok(broken.error || broken.complete === false, 'the client sees an incomplete reply');
  assert.ok(errors.length >= 1);
});

test('Vercel: a request body the platform already read (rawBody) or consumed', async t => {
  const { pipe } = await import(shim('lasm-server.mjs'));
  const { request } = await nodeServer(t, async (req, res) => {
    if (req.url.startsWith('/raw')) { req.rawBody = Buffer.from('from rawBody'); req.resume(); await new Promise(r => req.on('end', r)); }
    if (req.url.startsWith('/consumed')) { req.resume(); await new Promise(r => req.on('end', r)); }
    if (req.url.startsWith('/original')) req.originalUrl = '/the/original?q=1';
    await pipe(req, res);
  });
  const raw = echoed((await request('/raw', { method: 'POST', body: 'ignored body' })).body);
  assert.equal(Buffer.from(raw.body, 'base64').toString(), 'from rawBody');
  assert.deepEqual(named(raw.headers, 'content-length'), ['12']);
  const consumed = echoed((await request('/consumed', { method: 'POST', body: 'gone' })).body);
  assert.deepEqual([consumed.body, named(consumed.headers, 'content-length')], ['', []]);
  const original = echoed((await request('/original')).body);
  assert.equal(original.url, '/the/original?q=1');
});

test('Netlify: a WHATWG Request reaches the server; null-body replies; a request that cannot be forwarded is a 502', async t => {
  const netlify = await import(shim('lasm-netlify.mjs'));
  assert.deepEqual(netlify.config, { path: '/*', preferStatic: true });
  const post = await netlify.default(new Request('https://site.example/echo?x=1', { method: 'POST', body: 'hi', headers: [['cookie', 'a=1'], ['x-t', 'v']] }));
  const seen = await post.json();
  assert.deepEqual([post.status, seen.method, seen.url, Buffer.from(seen.body, 'base64').toString()], [200, 'POST', '/echo?x=1', 'hi']);
  assert.deepEqual([named(seen.headers, 'cookie'), named(seen.headers, 'x-t')], [['a=1'], ['v']]);
  const get = echoed(Buffer.from(await (await netlify.default(new Request('https://site.example/g'))).arrayBuffer()));
  assert.deepEqual([get.method, get.body, named(get.headers, 'content-length')], ['GET', '', []]);
  const head = await netlify.default(new Request('https://site.example/h', { method: 'HEAD' }));
  assert.deepEqual([head.status, head.body], [200, null]);
  const binary = await netlify.default(new Request('https://site.example/b', { headers: { 'x-reply': reply(200, [['content-type', 'application/octet-stream']], '\u0000ÿ') } }));
  assert.deepEqual([...new Uint8Array(await binary.arrayBuffer())], [0, 0xc3, 0xbf]);
  const cookies = await netlify.default(new Request('https://site.example/c', { headers: { 'x-reply': reply(201, [['set-cookie', 'a=1'], ['set-cookie', 'b=2']], 'x', 'Made') } }));
  assert.deepEqual([cookies.status, cookies.statusText, cookies.headers.getSetCookie()], [201, 'Made', ['a=1', 'b=2']]);
  const errors = [];
  t.mock.method(console, 'error', error => errors.push(error));
  const bad = await netlify.default({ url: 'not a url', method: 'GET', headers: new Headers() });
  assert.deepEqual([bad.status, await bad.text(), errors.length], [502, 'Lean server unavailable\n', 1]);
});

test('Azure Functions: the registered function forwards the request and returns HttpResponseInit', async t => {
  await import(shim('lasm-azure.mjs'));
  const { name, options } = registered.azure;
  assert.deepEqual([name, options.route, options.authLevel, options.methods],
    ['lasm', '{*path}', 'anonymous', ['GET', 'POST', 'PUT', 'PATCH', 'DELETE', 'HEAD', 'OPTIONS']]);
  const post = await options.handler(new Request('http://localhost:7071/echo?x=1', { method: 'POST', body: 'hi', headers: { 'x-t': 'v' } }));
  const seen = echoed(Buffer.from(post.body));
  assert.deepEqual([post.status, seen.method, seen.url, Buffer.from(seen.body, 'base64').toString(), named(seen.headers, 'x-t')],
    [200, 'POST', '/echo?x=1', 'hi', ['v']]);
  const get = echoed(Buffer.from((await options.handler(new Request('http://localhost:7071/g'))).body));
  assert.deepEqual([get.method, get.body, named(get.headers, 'content-length')], ['GET', '', []]);
  const head = await options.handler(new Request('http://localhost:7071/h', { method: 'HEAD' }));
  assert.equal(head.status, 200);
  const cookies = await options.handler(new Request('http://localhost:7071/c', { headers: { 'x-reply': reply(200, [['set-cookie', 'a=1'], ['set-cookie', 'b=2; Path=/']], 'ok') } }));
  assert.deepEqual([cookies.headers.getSetCookie(), cookies.cookies], [['a=1'], [{ name: 'b', value: '2', path: '/' }]]);
  // A request that cannot be forwarded is a 502.
  const errors = [];
  t.mock.method(console, 'error', error => errors.push(error));
  const bad = await options.handler({ url: 'not a url', method: 'GET', headers: new Headers() });
  assert.deepEqual([bad.status, bad.body], [502, 'Lean server unavailable\n']);
  assert.equal(errors.length, 1);
});

test('Google Cloud Functions: the registered function pipes the request; a failure is a 502', async t => {
  await import(shim('lasm-gcf.mjs'));
  const { name, fn } = registered.gcf;
  assert.equal(name, 'lasm');
  const { request } = await nodeServer(t, (req, res) => {
    // The Functions Framework's Express response.
    res.status = code => { res.statusCode = code; return res; };
    res.send = text => res.end(text);
    if (req.url === '/fails') req.rawHeaders = null;
    return fn(Object.assign(req, { originalUrl: req.url }), res);
  });
  const put = echoed((await request('/echo?x=1', { method: 'PUT', body: 'hi' })).body);
  assert.deepEqual([put.method, put.url, Buffer.from(put.body, 'base64').toString()], ['PUT', '/echo?x=1', 'hi']);
  const errors = [];
  t.mock.method(console, 'error', error => errors.push(error));
  const failed = await request('/fails');
  assert.deepEqual([failed.status, failed.body.toString()], [502, 'Lean server unavailable\n']);
  assert.equal(errors.length, 1);
  const broken = await request('/abort', { headers: [['x-reply', 'abort']] });
  assert.ok(broken.error || broken.complete === false);
});

test('Vercel: a failure before the reply starts is a 502', async t => {
  const { default: handler } = await import(shim('lasm-vercel.mjs'));
  const errors = [];
  t.mock.method(console, 'error', error => errors.push(error));
  const { request } = await nodeServer(t, (req, res) => { req.rawHeaders = null; return handler(req, res); });
  const failed = await request('/x');
  assert.deepEqual([failed.status, failed.body.toString()], [502, 'Lean server unavailable\n']);
  assert.equal(errors.length, 1);
});

// --- AWS Lambda ---------------------------------------------------------

const lambda = async () => (await import(shim('lasm-lambda.mjs'))).handler;
const bodyOf = response => Buffer.from(response.body, response.isBase64Encoded || response.bodyEncoding === 'base64' ? 'base64' : 'utf8');

test('Lambda, API Gateway HTTP API and function URLs (payload 2.0)', async () => {
  const handler = await lambda();
  const event = (extra = {}) => ({ version: '2.0', rawPath: '/a b', rawQueryString: 'q=1&r=x y', headers: { 'x-t': 'v', cookie: 'dup=1' },
    requestContext: { http: { method: 'POST' } }, body: Buffer.from('ü').toString('base64'), isBase64Encoded: true, ...extra });
  const response = await handler(event({ cookies: ['a=1', '', 'b=2'] }));
  const seen = echoed(bodyOf(response));
  assert.deepEqual([seen.method, seen.url, Buffer.from(seen.body, 'base64').toString()], ['POST', '/a%20b?q=1&r=x%20y', 'ü']);
  assert.deepEqual(named(seen.headers, 'cookie'), ['a=1; b=2'], "the event's cookies replace headers.cookie");
  assert.deepEqual(named(seen.headers, 'x-t'), ['v']);
  assert.deepEqual([response.statusCode, response.isBase64Encoded, response.headers['content-type'], response.cookies], [200, false, 'application/json', undefined]);
  // Without `cookies`, headers.cookie is the request's Cookie; a text body arrives as UTF-8.
  const plain = await handler(event({ body: 'plain', isBase64Encoded: false }));
  const plainSeen = echoed(bodyOf(plain));
  assert.deepEqual([named(plainSeen.headers, 'cookie'), Buffer.from(plainSeen.body, 'base64').toString()], [['dup=1'], 'plain']);
  // An empty body and a missing one are no body.
  for (const body of ['', null, undefined]) assert.equal(echoed(bodyOf(await handler(event({ body, isBase64Encoded: false })))).body, '');
  // Set-Cookie travels in `cookies`; other repeated fields are joined; a binary body is base64.
  const answer = await handler(event({ headers: { 'x-reply': reply(202, [['set-cookie', 'a=1'], ['x-m', 'p'], ['set-cookie', 'b=2'], ['x-m', 'q'],
    ['__proto__', 'p'], ['constructor', 'c'], ['content-type', 'image/png']], '\u0000') } }));
  assert.deepEqual([answer.statusCode, answer.cookies, answer.headers['x-m'], answer.isBase64Encoded, answer.body], [202, ['a=1', 'b=2'], 'p, q', true, 'AA==']);
  assert.equal(Object.getPrototypeOf(answer.headers), null);
  assert.deepEqual([answer.headers.__proto__, answer.headers.constructor], ['p', 'c']);
  assert.equal(answer.headers['set-cookie'], undefined);
});

test('Lambda, API Gateway REST (payload 1.0): decoded queries, multi-value forms, multiValueHeaders', async () => {
  const handler = await lambda();
  const single = await handler({ httpMethod: 'GET', path: '/p', queryStringParameters: { a: 'x y', b: '%' }, headers: { 'X-T': 'v' }, requestContext: {} });
  const seen = echoed(bodyOf(single));
  assert.deepEqual([seen.method, seen.url, named(seen.headers, 'x-t')], ['GET', '/p?a=x+y&b=%25', ['v']]);
  assert.deepEqual([single.statusCode, single.isBase64Encoded, single.statusDescription, single.headers], [200, false, undefined, undefined]);
  assert.deepEqual(single.multiValueHeaders['content-type'], ['application/json']);
  assert.equal(Object.getPrototypeOf(single.multiValueHeaders), null);
  // The multi-value forms win over the single-value ones.
  const multi = await handler({ httpMethod: 'POST', path: '/m', queryStringParameters: { a: 'last' }, multiValueQueryStringParameters: { a: ['1', '2'], e: null },
    headers: { 'x-t': 'single' }, multiValueHeaders: { 'x-t': ['1', '2'], 'x-none': null }, body: 'b', isBase64Encoded: false });
  const multiSeen = echoed(bodyOf(multi));
  assert.deepEqual([multiSeen.url, named(multiSeen.headers, 'x-t'), Buffer.from(multiSeen.body, 'base64').toString()], ['/m?a=1&a=2', ['1', '2'], 'b']);
  const none = echoed(bodyOf(await handler({ httpMethod: 'GET', path: '/n' })));
  assert.equal(none.url, '/n');
  const answer = await handler({ httpMethod: 'GET', path: '/r', headers: { 'x-reply': reply(404, [['set-cookie', 'a=1'], ['set-cookie', 'b=2'], ['x-m', 'p'], ['x-m', 'q']], 'nope', 'Gone') } });
  assert.deepEqual([answer.statusCode, answer.body, answer.multiValueHeaders['set-cookie'], answer.multiValueHeaders['x-m'], answer.statusDescription],
    [404, 'nope', ['a=1', 'b=2'], ['p', 'q'], undefined]);
});

test('Lambda, Application Load Balancer: raw query values, statusDescription, single- and multi-value headers', async () => {
  const handler = await lambda();
  const elb = { elb: { targetGroupArn: 'arn' } };
  const spec = reply(200, [['set-cookie', 'a=1'], ['set-cookie', 'b=2'], ['x-m', 'p'], ['x-m', 'q'], ['content-type', 'text/plain']], 'ok', 'Fine');
  const single = await handler({ httpMethod: 'GET', path: '/s', requestContext: elb, queryStringParameters: { q: '%E0', r: 'a%20b' }, headers: { 'x-reply': spec } });
  assert.deepEqual([single.statusCode, single.statusDescription, single.body, single.isBase64Encoded], [200, '200 Fine', 'ok', false]);
  assert.deepEqual([single.headers['set-cookie'], single.headers['x-m'], single.multiValueHeaders], ['b=2', 'p, q', undefined]);
  assert.equal(Object.getPrototypeOf(single.headers), null);
  const echo = echoed(bodyOf(await handler({ httpMethod: 'GET', path: '/s', requestContext: elb, queryStringParameters: { q: '%E0', r: 'a%20b' }, headers: {} })));
  assert.equal(echo.url, '/s?q=%E0&r=a%20b', 'query values are forwarded as the client sent them');
  const multi = await handler({ httpMethod: 'GET', path: '/m', requestContext: elb, multiValueQueryStringParameters: { q: ['1', '%41'], e: null },
    multiValueHeaders: { 'x-reply': [spec] } });
  assert.deepEqual([multi.statusDescription, multi.multiValueHeaders['set-cookie'], multi.multiValueHeaders['x-m'], multi.headers], ['200 Fine', ['a=1', 'b=2'], ['p', 'q'], undefined]);
  const multiEcho = echoed(bodyOf(await handler({ httpMethod: 'GET', path: '/m', requestContext: elb, multiValueQueryStringParameters: { q: ['1', '%41'], e: null }, multiValueHeaders: {} })));
  assert.equal(multiEcho.url, '/m?q=1&q=%41');
  const bare = echoed(bodyOf(await handler({ httpMethod: 'GET', path: '/b', requestContext: elb, headers: {} })));
  assert.equal(bare.url, '/b');
});

test('Lambda@Edge (CloudFront): header lists, refused response fields, text and base64 bodies', async () => {
  const handler = await lambda();
  const record = (request) => ({ Records: [{ cf: { request: { method: 'GET', uri: '/u', querystring: '', headers: {}, ...request } } }] });
  const post = await handler(record({ method: 'POST', uri: '/a b', querystring: 'q=1', headers: { cookie: [{ key: 'Cookie', value: 'a=1' }, { key: 'Cookie', value: 'b=2' }], 'x-t': [{ key: 'X-T', value: 'v' }] },
    body: { data: Buffer.from('ß').toString('base64'), encoding: 'base64' } }));
  const seen = echoed(bodyOf(post));
  assert.deepEqual([seen.method, seen.url, Buffer.from(seen.body, 'base64').toString(), named(seen.headers, 'cookie'), named(seen.headers, 'x-t')],
    ['POST', '/a%20b?q=1', 'ß', ['a=1; b=2'], ['v']]);
  assert.deepEqual([post.status, post.statusDescription, post.bodyEncoding], ['200', 'OK', 'text']);
  const text = echoed(bodyOf(await handler(record({ method: 'PUT', body: { data: 'plain', encoding: 'text' } }))));
  assert.equal(Buffer.from(text.body, 'base64').toString(), 'plain');
  for (const body of [undefined, { data: '' }]) assert.equal(echoed(bodyOf(await handler(record({ method: 'PUT', body })))).body, '');
  assert.equal(echoed(bodyOf(await handler(record({ headers: undefined })))).url, '/u');
  const refused = ['content-length', 'via', 'x-cache', 'x-real-ip', 'x-forwarded-proto', 'expect', 'proxy-authenticate', 'proxy-authorization',
    'x-amz-cf-id', 'x-edge-location', 'x-accel-buffering'];
  const answer = await handler(record({ headers: { 'x-reply': [{ key: 'X-Reply', value: reply(418, [...refused.map(name => [name, '1']),
    ['set-cookie', 'a=1'], ['set-cookie', 'b=2'], ['x-amz-other', 'kept'], ['content-type', 'application/octet-stream']], '\u0001', 'Teapot') }] } }));
  assert.deepEqual([answer.status, answer.statusDescription, answer.bodyEncoding, answer.body], ['418', 'Teapot', 'base64', 'AQ==']);
  assert.deepEqual(Object.keys(answer.headers).filter(name => name !== 'date').sort(), ['content-type', 'set-cookie', 'x-amz-other']);
  assert.deepEqual(answer.headers['set-cookie'], [{ key: 'set-cookie', value: 'a=1' }, { key: 'set-cookie', value: 'b=2' }]);
  assert.equal(Object.getPrototypeOf(answer.headers), null);
});

test('Lambda refuses an event it does not know', async () => {
  const handler = await lambda();
  const message = 'Unsupported Lambda event: expected API Gateway, a function URL, an Application Load Balancer or CloudFront (Lambda@Edge).';
  for (const event of [undefined, null, {}, { version: '1.0' }, { Records: [{}] }, { Records: [] }])
    await assert.rejects(handler(event), { message });
});

// --- Properties of the forwarding ---------------------------------------

// ∀ path query, requestTarget path query has only printable ASCII, no `#`, and decodes (as UTF-8) to the inputs
// Proposition: Lasm.Serverless.Spec.target_valid
//   ∀ p q : String, ∀ c ∈ (requestTarget p q).toList, printable c = true ∧ c ≠ '#'
test('property: requestTarget percent-encodes exactly what a target cannot carry', async () => {
  const { requestTarget } = await import(shim('lasm-server.mjs'));
  const alphabet = ['a', 'Z', '0', '/', '?', '#', ' ', '%', '~', 'é', '\u{1F600}', '\x7f', '\x00', '=', '&', ':', '+'];
  forAll(r => ({ path: '/' + r.string(alphabet.filter(c => c !== '%')), query: r.string(alphabet.filter(c => c !== '%')) }), ({ path, query }) => {
    const target = requestTarget(path, query);
    assert.match(target, /^[\x21-\x7e]+$/);
    assert.ok(!target.includes('#'));
    const at = target.indexOf('?');
    assert.equal(decodeURIComponent(at < 0 ? target : target.slice(0, at)), path);
    assert.equal(at < 0 ? '' : decodeURIComponent(target.slice(at + 1)), query);
  });
});

// Proposition: Lasm.Serverless.Spec.target_unchanged
//   ∀ p q : String, (∀ c ∈ p.toList, pathUnsafe c = false) → (∀ c ∈ q.toList, queryUnsafe c = false) →
//     requestTarget p q = (if p.isEmpty then "/" else p) ++ (if q.isEmpty then "" else "?" ++ q)
test('property: requestTarget leaves a valid target unchanged', async () => {
  const { requestTarget } = await import(shim('lasm-server.mjs'));
  const printable = Array.from({ length: 0x7e - 0x21 + 1 }, (_, i) => String.fromCharCode(0x21 + i)).filter(c => c !== '?' && c !== '#');
  const query = Array.from({ length: 0x7e - 0x21 + 1 }, (_, i) => String.fromCharCode(0x21 + i)).filter(c => c !== '#');
  forAll(r => ({ p: r.pick(['', '/']) + r.string(printable, 0, 20), q: r.string(query, 0, 12) }),
    ({ p, q }) => assert.equal(requestTarget(p, q), (p === '' ? '/' : p) + (q === '' ? '' : '?' + q)));
});

// ∀ headers, (joinCookies headers).filter isCookie has length ≤ 1 ∧ non-cookie fields keep their order
test('property: joinCookies leaves at most one Cookie field and every other field in order', async () => {
  const { joinCookies } = await import(shim('lasm-server.mjs'));
  const names = ['cookie', 'Cookie', 'x', 'host', 'accept'];
  forAll(r => r.array(r.int(0, 6), () => [r.pick(names), r.pick(['a=1', '', 'b=2, c=3', 'd=4; e=5'])]), headers => {
    const out = joinCookies(headers);
    const isCookie = ([name]) => name.toLowerCase() === 'cookie';
    assert.ok(out.filter(isCookie).length <= 1);
    assert.deepEqual(out.filter(pair => !isCookie(pair)), headers.filter(pair => !isCookie(pair)));
    const crumbs = headers.filter(isCookie).flatMap(([, value]) => value.split(/[;,]\s*/)).filter(Boolean);
    assert.deepEqual(out.filter(isCookie).flatMap(([, value]) => value.split('; ')), crumbs);
  });
});

test('parseSetCookie: spaces around names, values and attributes; invalid Max-Age and SameSite are dropped attributes', async () => {
  const { parseSetCookie, isTextual } = await import(shim('lasm-server.mjs'));
  assert.deepEqual(parseSetCookie(' a = 1 ; Path = /p ; Max-Age = 5 ; SameSite = Strict ; ; Secure'),
    { name: 'a', value: '1', path: '/p', maxAge: 5, sameSite: 'Strict', secure: true, dropped: [] });
  assert.deepEqual(parseSetCookie('a=1; Max-Age=5s; Max-Age=x5; SameSite=lazy; Expires=never; Domain=; Path='),
    { name: 'a', value: '1', dropped: ['Max-Age=5s', 'Max-Age=x5', 'SameSite=lazy', 'Expires=never', 'Domain=', 'Path='] });
  assert.deepEqual(parseSetCookie('a=1; SameSite=None; HttpOnly=; Foo'), { name: 'a', value: '1', sameSite: 'None', httpOnly: true, dropped: ['Foo'] });
  assert.deepEqual(parseSetCookie('a=1; =x'), { name: 'a', value: '1', dropped: [] }, 'an attribute without a name is ignored');
  assert.equal(parseSetCookie(' =1'), null);
  assert.equal(parseSetCookie('   =1'), null, 'a name of spaces is no name');
  assert.deepEqual(parseSetCookie('a='), { name: 'a', value: '', dropped: [] });
  // An identity Content-Encoding is no encoding.
  assert.equal(isTextual([['content-type', 'text/plain'], ['content-encoding', 'identity']], Buffer.from('x')), true);
  assert.equal(isTextual([['content-type', 'x-text/plain']]), false);
  assert.equal(isTextual([['content-type', 'application/x-www-form-urlencodedx']]), true, 'a prefix test, as the Lean model');
  assert.equal(isTextual([['content-type', 'image/svg+xml']]), true);
  assert.equal(isTextual([['content-type', 'my/application/graphql']]), false);
});

test('Lambda: an empty body string, and cookies only in the event', async () => {
  const handler = await lambda();
  const seen = echoed(bodyOf(await handler({ version: '2.0', rawPath: '/e', rawQueryString: '', headers: {}, requestContext: { http: { method: 'POST' } }, body: '', isBase64Encoded: false })));
  assert.deepEqual([seen.body, named(seen.headers, 'content-length')], ['', []]);
  const cookies = echoed(bodyOf(await handler({ version: '2.0', rawPath: '/c', headers: { Cookie: 'kept=1' }, cookies: [], requestContext: { http: { method: 'GET' } } })));
  assert.deepEqual(named(cookies.headers, 'cookie'), ['kept=1'], 'an empty cookies list leaves the header');
});
