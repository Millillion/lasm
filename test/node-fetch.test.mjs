// Outbound HTTP (operations 190–192) against a local server, and the mapping
// of fetch failures to the IO errors Lean understands.
import test from 'node:test';
import assert from 'node:assert/strict';
import http from 'node:http';
import { once } from 'node:events';
import { createNodeFetch, fetchError, fetchProtocolVersion } from '../src/node-fetch.mjs';

function client() {
  const table = new Map();
  let next = 0;
  const outbound = createNodeFetch({ add: resource => { table.set(++next, resource); return next; },
    get: (id, type) => { const r = table.get(id); if (!r || r.type !== type) throw Object.assign(new Error('bad'), { code: 'EBADF' }); return r; } });
  const request = (value, body = Buffer.alloc(0)) => {
    const json = Buffer.from(JSON.stringify(value)), length = Buffer.alloc(4);
    length.writeUInt32LE(json.length);
    return outbound.dispatch(190, 0, 0n, Buffer.concat([length, json, body]));
  };
  const read = id => outbound.dispatch(191, id, 0n, Buffer.alloc(0));
  return { outbound, table, request, read };
}
async function server(t, handler) {
  const seen = [];
  const s = http.createServer((req, res) => {
    const chunks = [];
    req.on('data', c => chunks.push(c));
    req.on('end', () => { seen.push({ method: req.method, url: req.url, headers: req.headers, body: Buffer.concat(chunks).toString() }); handler(req, res); });
  });
  s.listen(0, '127.0.0.1');
  await once(s, 'listening');
  t.after(() => { s.closeAllConnections(); s.close(); });
  return { url: `http://127.0.0.1:${s.address().port}`, seen };
}
const readAll = async (read, id) => {
  const chunks = [];
  for (;;) {
    const chunk = await read(id);
    if (chunk[0] === 0) { assert.equal(chunk.length, 1); return Buffer.concat(chunks).toString(); }
    assert.equal(chunk[0], 1);
    chunks.push(chunk.subarray(1));
  }
};

test('the protocol version is 1 and other operations are unsupported', () => {
  const { outbound } = client();
  assert.equal(fetchProtocolVersion, 1);
  assert.deepEqual(outbound.dispatch(192, 0, 0n, Buffer.alloc(0)), Buffer.from([1]));
  assert.throws(() => outbound.dispatch(193, 0, 0n, Buffer.alloc(0)), { code: 'ENOSYS', message: 'Unsupported fetch operation 193' });
});

test('a request carries its method, headers and body; the reply describes the response and streams the body', async t => {
  const { url, seen } = await server(t, (req, res) => {
    res.setHeader('set-cookie', ['a=1', 'b=2']);
    res.writeHead(201, 'Made', { 'x-reply': 'yes' });
    res.write('hello ');
    setTimeout(() => res.end('world'), 5);
  });
  const { request, read, table } = client();
  const reply = JSON.parse(await request({ url: url + '/path?q=1', method: 'POST', headers: [['x-test', 'value']], hasBody: true }, Buffer.from('payload')));
  assert.equal(reply.handle, 1);
  assert.equal(reply.status, 201);
  assert.equal(reply.statusText, 'Made');
  assert.equal(reply.url, url + '/path?q=1');
  assert.equal(reply.redirected, false);
  assert.deepEqual(reply.headers.filter(([name]) => name === 'set-cookie'), [['set-cookie', 'a=1'], ['set-cookie', 'b=2']]);
  assert.deepEqual(reply.headers.find(([name]) => name === 'x-reply'), ['x-reply', 'yes']);
  assert.deepEqual(seen.map(({ method, url, body }) => ({ method, url, body })), [{ method: 'POST', url: '/path?q=1', body: 'payload' }]);
  assert.equal(seen[0].headers['x-test'], 'value');
  assert.equal(await readAll(read, reply.handle), 'hello world');
  assert.equal(table.get(reply.handle).type, 'fetch');
  table.get(reply.handle).close();
});

test('GET, HEAD and requests without a body send none', async t => {
  const { url, seen } = await server(t, (req, res) => res.end());
  const { request, table } = client();
  for (const [method, hasBody] of [['GET', true], ['HEAD', true], ['PUT', false]]) {
    const reply = JSON.parse(await request({ url, method, hasBody }, Buffer.from('ignored')));
    table.get(reply.handle).close();
  }
  assert.deepEqual(seen.map(({ method, body, headers }) => [method, body, headers['content-length']]),
    [['GET', '', undefined], ['HEAD', '', undefined], ['PUT', '', undefined]].map(([m, b, l]) => [m, b, m === 'PUT' ? '0' : l]));
});

test('redirects are followed by default and can be left to Lean', async t => {
  const { url } = await server(t, (req, res) => {
    if (req.url === '/old') { res.writeHead(302, { location: '/new' }); res.end(); } else res.end('moved here');
  });
  const { request, read, table } = client();
  const followed = JSON.parse(await request({ url: url + '/old', method: 'GET' }));
  assert.deepEqual([followed.status, followed.url, followed.redirected], [200, url + '/new', true]);
  assert.equal(await readAll(read, followed.handle), 'moved here');
  const manual = JSON.parse(await request({ url: url + '/old', method: 'GET', redirect: 'manual' }));
  assert.deepEqual([manual.status, manual.redirected], [302, false]);
  assert.deepEqual(manual.headers.find(([name]) => name === 'location'), ['location', '/new']);
  for (const id of table.keys()) table.get(id).close();
});

test('a response without a body reads as ended at once', async t => {
  const { url } = await server(t, (req, res) => { res.writeHead(204); res.end(); });
  const { request, read, table } = client();
  const reply = JSON.parse(await request({ url, method: 'GET' }));
  assert.equal(reply.status, 204);
  assert.deepEqual(await read(reply.handle), Buffer.from([0]));
  table.get(reply.handle).close();
});

test('a request shorter than its length prefix is malformed', async () => {
  const { outbound } = client();
  await assert.rejects(outbound.dispatch(190, 0, 0n, Buffer.from([1, 0])), { code: 'EINVAL', message: 'malformed fetch request' });
});

test('a timeout aborts a slow response as ETIMEDOUT and names its duration', async t => {
  const { url } = await server(t, () => {});
  const { request } = client();
  const started = performance.now();
  await assert.rejects(request({ url, method: 'GET', timeoutMs: 50 }), { code: 'ETIMEDOUT', message: 'request timed out after 50 ms' });
  assert.ok(performance.now() - started >= 45);
});

test('a timeout during the body fails the read as ETIMEDOUT', async t => {
  const { url } = await server(t, (req, res) => { res.writeHead(200); res.write('start'); });
  const { request, read } = client();
  const reply = JSON.parse(await request({ url, method: 'GET', timeoutMs: 100 }));
  const first = await read(reply.handle);
  assert.equal(first.subarray(1).toString(), 'start');
  await assert.rejects(read(reply.handle), { code: 'ETIMEDOUT', message: 'request timed out' });
});

test('a finished body clears its timeout, and close cancels the stream', async t => {
  const { url } = await server(t, (req, res) => res.end('x'));
  const { request, read, table } = client();
  const reply = JSON.parse(await request({ url, method: 'GET', timeoutMs: 60_000 }));
  const resource = table.get(reply.handle);
  assert.equal(await readAll(read, reply.handle), 'x');
  assert.equal(resource.timer._destroyed, true);
  resource.close();
  assert.equal(resource.controller.signal.aborted, true);
});

test('a refused connection is ECONNREFUSED with fetch\'s and the cause\'s messages', async t => {
  const s = http.createServer(); s.listen(0, '127.0.0.1'); await once(s, 'listening');
  const port = s.address().port; s.close(); await once(s, 'close');
  const { request } = client();
  await assert.rejects(request({ url: `http://127.0.0.1:${port}/`, method: 'GET' }), error =>
    error.code === 'ECONNREFUSED' && error.leanUserError === false && /^fetch failed: connect ECONNREFUSED/.test(error.message));
});

test('fetch failures map to the IO errors Lean understands', () => {
  const failed = (code, where = 'cause') => where === 'cause' ? Object.assign(new Error('fetch failed'), { cause: Object.assign(new Error('inner'), { code }) })
    : Object.assign(new Error('outer'), { code });
  for (const code of ['ECONNREFUSED', 'ECONNRESET', 'ETIMEDOUT', 'EHOSTUNREACH', 'ENETUNREACH', 'EPIPE'])
    assert.deepEqual({ ...fetchError(failed(code)) }, { code, leanUserError: false }, code);
  for (const code of ['ENOTFOUND', 'EAI_AGAIN']) assert.equal(fetchError(failed(code)).code, 'EHOSTUNREACH');
  for (const code of ['UND_ERR_CONNECT_TIMEOUT', 'UND_ERR_HEADERS_TIMEOUT', 'UND_ERR_BODY_TIMEOUT']) assert.equal(fetchError(failed(code)).code, 'ETIMEDOUT');
  for (const code of ['UND_ERR_SOCKET', 'ERR_INVALID_URL', undefined]) {
    const error = fetchError(failed(code));
    assert.equal(error.code, 'EPROTO');
    assert.equal(error.leanUserError, true);
  }
  // The code may sit on the failure itself, or be the cause's errno.
  assert.equal(fetchError(failed('ECONNRESET', 'self')).code, 'ECONNRESET');
  assert.equal(fetchError(Object.assign(new Error('x'), { cause: { errno: 'EPIPE', message: 'p' } })).code, 'EPIPE');
  assert.equal(fetchError(Object.assign(new Error('x'), { cause: { code: 'EPIPE', errno: 'ECONNRESET' } })).code, 'EPIPE');
  assert.equal(fetchError(failed('ECONNRESET')).message, 'fetch failed: inner');
  assert.equal(fetchError(new Error('only')).message, 'only');
  assert.equal(fetchError({}).message, 'fetch failed');
  assert.equal(fetchError(undefined).code, 'EPROTO');
  for (const name of ['TimeoutError', 'AbortError']) {
    assert.deepEqual([fetchError({ name }, 20).code, fetchError({ name }, 20).message], ['ETIMEDOUT', 'request timed out after 20 ms']);
    assert.equal(fetchError({ name }).message, 'request timed out');
    assert.equal(fetchError({ name }, 0).message, 'request timed out');
    assert.equal(fetchError({ name }).leanUserError, undefined);
  }
  assert.equal(fetchError(Object.assign(new Error('e'), { code: 'ECONNRESET' })).cause, undefined);
});
