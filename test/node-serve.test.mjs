// lasm:node-serve (src/lasm-modules/node-serve.mjs), the JavaScript side of
// Node.serve (library/Lasm/JS/Node/Serve.lean), with JavaScript fetch handlers
// in place of Lean ones (the Lean program runs in test/fixtures/js-serve):
// requests over real sockets, read and written raw, so every guarantee in the
// module's header is checked as a client sees it.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import http from 'node:http';
import net from 'node:net';
import { hostPort, plainHost, requestUrl, respond, serve, toRequest, writeResponse } from '../src/lasm-modules/node-serve.mjs';
import { forAll } from './helpers/property.mjs';

/** One request with raw header lines: { status, statusText, headers: [[name, value]], body, complete }. */
function request(port, path, { method = 'GET', headers = [], body, host = `127.0.0.1:${port}` } = {}) {
  return new Promise((resolve, reject) => {
    const req = http.request({ host: '127.0.0.1', port, method, path, agent: false, setHost: false,
      headers: [...(host === null ? [] : ['host', host]), ...headers.flat()] }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c));
      const pairs = () => { const out = []; for (let i = 0; i < res.rawHeaders.length; i += 2) out.push([res.rawHeaders[i].toLowerCase(), res.rawHeaders[i + 1]]); return out; };
      res.on('end', () => resolve({ status: res.statusCode, statusText: res.statusMessage, headers: pairs(), body: Buffer.concat(chunks), complete: res.complete }));
      res.on('error', error => resolve({ status: res.statusCode, error, headers: pairs(), body: Buffer.concat(chunks) }));
    });
    req.on('error', reject);
    req.end(body);
  });
}
const named = (headers, name) => headers.filter(([n]) => n === name).map(([, v]) => v);

/** serve() on a free loopback port, stopped after the test. */
async function started(t, options) {
  const server = await serve({ port: 0, hostname: '127.0.0.1', ...options });
  t.after(() => server.stop(true));
  return server;
}

/** A handler that answers with what it saw. */
const echo = async request => {
  const url = new URL(request.url);
  return Response.json({ method: request.method, url: request.url, path: url.pathname + url.search, headers: [...request.headers],
    body: request.body ? await request.text() : null });
};

test('serve: the handle, the URL, the method, the body and the fields', async t => {
  const server = await started(t, { fetch: echo });
  assert.equal(server.hostname, '127.0.0.1');
  assert.ok(server.port > 0);
  assert.equal(server.url, `http://127.0.0.1:${server.port}/`);
  const r = await request(server.port, '/a/b?c=1&d', { method: 'POST', body: 'héllo',
    headers: [['Content-Type', 'text/plain'], ['Cookie', 'a=1'], ['cookie', 'b=2'], ['Connection', 'keep-alive'], ['X-Many', '1'], ['x-many', '2']] });
  assert.equal(r.status, 200);
  const seen = JSON.parse(r.body);
  assert.deepEqual([seen.method, seen.url, seen.body], ['POST', `http://127.0.0.1:${server.port}/a/b?c=1&d`, 'héllo']);
  const fields = Object.fromEntries(seen.headers);
  // The client sent the body chunked: Transfer-Encoding is hop-by-hop and not passed on.
  assert.deepEqual([fields.cookie, fields['x-many'], fields['content-type'], fields['transfer-encoding'], fields.connection],
    ['a=1; b=2', '1, 2', 'text/plain', undefined, undefined]);
  const sized = JSON.parse((await request(server.port, '/s', { method: 'PUT', body: 'abc', headers: [['content-length', '3']] })).body);
  assert.deepEqual([sized.body, Object.fromEntries(sized.headers)['content-length']], ['abc', '3']);
  // A GET has no body; one with Content-Length 0 neither.
  assert.equal(JSON.parse((await request(server.port, '/')).body).body, null);
  assert.equal(JSON.parse((await request(server.port, '/', { method: 'POST', headers: [['content-length', '0']] })).body).body, null);
  // An absolute-form target (a proxy request) keeps its URL.
  assert.equal(JSON.parse((await request(server.port, 'http://other.example/x')).body).url, 'http://other.example/x');
});

test('serve: a Host that is not a plain host[:port] cannot move the path or the query', async t => {
  const server = await started(t, { fetch: echo });
  const own = `127.0.0.1:${server.port}`;
  for (const forged of ['x/admin#', 'a b', 'u@h', 'h\\x', 'h?q', 'a:b:c', ''])
    { const r = await request(server.port, '/public', { host: forged }); assert.equal(r.status, 200, JSON.stringify(forged) + r.status + r.body); assert.equal(JSON.parse(r.body).url, `http://${own}/public`, JSON.stringify(forged)); }
  // An HTTP/1.1 request without Host: Node's server answers 400 itself (requireHostHeader).
  assert.equal((await request(server.port, '/p', { host: null })).status, 400);
  assert.equal(JSON.parse((await request(server.port, '/p', { host: 'example.com:8080' })).body).url, 'http://example.com:8080/p');
  // A target that is no URL path: 400, and the handler is not called.
  let called = false;
  const strict = await started(t, { fetch: () => { called = true; return new Response('x'); } });
  const star = await request(strict.port, '*', { method: 'OPTIONS' });
  assert.deepEqual([star.status, called], [400, false]);
});

test('serve: Set-Cookie lines, status text, HEAD, null-body statuses and empty bodies', async t => {
  const server = await started(t, {
    fetch: request => {
      const path = new URL(request.url).pathname;
      if (path === '/cookies') return new Response('ok', { status: 201, statusText: 'Made It', headers: [['set-cookie', 'a=1; Path=/'], ['set-cookie', 'b=2'], ['x', '1']] });
      if (path === '/empty-bytes') return new Response(new Uint8Array(0), { status: 303, headers: { location: '/there' } });
      if (path === '/empty-text') return new Response('');
      if (path === '/no-content') return new Response(null, { status: 204 });
      if (path === '/not-modified') return new Response(null, { status: 304, headers: { etag: '"e"' } });
      if (path === '/null') return new Response(null, { status: 200 });
      if (path === '/sized') return new Response('abc', { headers: { 'content-length': '3' } });
      return new Response('body for GET', { headers: { 'content-type': 'text/plain' } });
    },
  });
  const cookies = await request(server.port, '/cookies');
  assert.deepEqual([cookies.status, cookies.statusText, named(cookies.headers, 'set-cookie'), named(cookies.headers, 'x'), cookies.body.toString()],
    [201, 'Made It', ['a=1; Path=/', 'b=2'], ['1'], 'ok']);
  const head = await request(server.port, '/x', { method: 'HEAD' });
  assert.deepEqual([head.status, head.body.length, named(head.headers, 'content-type')], [200, 0, ['text/plain']]);
  // An empty byte body: content-length 0, no content type added, no chunked encoding.
  const bytes = await request(server.port, '/empty-bytes');
  assert.deepEqual([bytes.status, named(bytes.headers, 'location'), named(bytes.headers, 'content-length'), named(bytes.headers, 'content-type'),
    named(bytes.headers, 'transfer-encoding'), bytes.body.length], [303, ['/there'], ['0'], [], [], 0]);
  // A string body's type is the Response's own (text/plain, Fetch standard), not one Lasm adds.
  const text = await request(server.port, '/empty-text');
  assert.deepEqual([named(text.headers, 'content-type'), named(text.headers, 'content-length')], [['text/plain;charset=UTF-8'], ['0']]);
  const noContent = await request(server.port, '/no-content');
  assert.deepEqual([noContent.status, named(noContent.headers, 'content-length'), noContent.body.length], [204, [], 0]);
  const notModified = await request(server.port, '/not-modified');
  assert.deepEqual([notModified.status, named(notModified.headers, 'etag'), notModified.body.length], [304, ['"e"'], 0]);
  const nullBody = await request(server.port, '/null');
  assert.deepEqual([nullBody.status, nullBody.body.length], [200, 0]);
  const sized = await request(server.port, '/sized');
  assert.deepEqual([named(sized.headers, 'content-length'), sized.body.toString()], [['3'], 'abc']);
});

test('serve: a handler that throws, rejects or returns no Response; the error handler', async t => {
  const errors = [];
  t.mock.method(console, 'error', message => errors.push(String(message)));
  const fetch = request => {
    const path = new URL(request.url).pathname;
    if (path === '/throw') throw new Error('sync boom');
    if (path === '/none') return 'not a response';
    return Promise.reject(new Error('async boom'));
  };
  const plain = await started(t, { fetch });
  for (const path of ['/throw', '/none', '/reject']) {
    const r = await request(plain.port, path);
    assert.deepEqual([r.status, r.body.toString(), named(r.headers, 'content-type')], [500, 'Internal Server Error', ['text/plain; charset=utf-8']], path);
  }
  assert.deepEqual(errors.splice(0), ['Lasm Node.serve: the handler failed: sync boom', 'Lasm Node.serve: the handler failed: the handler did not return a Response',
    'Lasm Node.serve: the handler failed: async boom']);
  const seen = [];
  const handled = await started(t, { fetch, error: message => { seen.push(message); return new Response('handled: ' + message, { status: 503 }); } });
  const r = await request(handled.port, '/throw');
  assert.deepEqual([r.status, r.body.toString(), seen, errors], [503, 'handled: sync boom', ['sync boom'], []]);
  const failing = await started(t, { fetch, error: message => { throw new Error('again ' + message); } });
  assert.equal((await request(failing.port, '/reject')).status, 500);
  const useless = await started(t, { fetch, error: () => 42 });
  assert.equal((await request(useless.port, '/reject')).status, 500);
  assert.deepEqual(errors, ['Lasm Node.serve: the error handler failed: again async boom', 'Lasm Node.serve: the error handler did not return a Response']);
});

test('serve: request bodies stream to the handler with backpressure', async t => {
  let sawFirst;
  const first = new Promise(resolve => { sawFirst = resolve; });
  const server = await started(t, {
    fetch: async request => {
      const reader = request.body.getReader();
      let total = 0, chunks = 0;
      for (;;) {
        const { done, value } = await reader.read();
        if (done) break;
        if (!chunks++) sawFirst();
        total += value.length;
      }
      return new Response(`${total} bytes`);
    },
  });
  // The handler reads the first chunk before the client has sent the rest.
  const reply = new Promise((resolve, reject) => {
    const req = http.request({ host: '127.0.0.1', port: server.port, method: 'POST', path: '/up', agent: false }, res => {
      const chunks = [];
      res.on('data', c => chunks.push(c)).on('end', () => resolve(Buffer.concat(chunks).toString()));
    }).on('error', reject);
    req.write(Buffer.alloc(1000, 1));
    first.then(() => { req.write(Buffer.alloc(2000, 2)); req.end(); });
  });
  assert.equal(await reply, '3000 bytes');
  // A handler that does not read a large body leaves the socket's data unread
  // (the stream pauses) instead of buffering it.
  let unread;
  const lazy = await started(t, { fetch: request => { unread = request; return new Promise(() => {}); } });
  const socket = net.connect(lazy.port, '127.0.0.1');
  t.after(() => socket.destroy());
  await new Promise(resolve => socket.once('connect', resolve));
  socket.write(`POST / HTTP/1.1\r\nhost: x\r\ncontent-length: ${64 * 1024 * 1024}\r\n\r\n`);
  const chunk = Buffer.alloc(1024 * 1024);
  let written = 0;
  while (written < 64 && socket.write(chunk)) written++;
  await new Promise(resolve => setTimeout(resolve, 200));
  for (; written < 64 && socket.write(chunk); written++);
  assert.ok(written < 64, `the client could write only part of the body (${written} MB): the server did not read ahead`);
  assert.ok(unread);
});

test('serve: response bodies stream with backpressure; a client that goes away aborts the request and cancels the body', async t => {
  let aborted, cancelled, pulls = 0;
  const abortedSeen = new Promise(resolve => { aborted = resolve; });
  const cancelledSeen = new Promise(resolve => { cancelled = resolve; });
  const server = await started(t, {
    fetch: request => {
      const path = new URL(request.url).pathname;
      if (path === '/stream') {
        const parts = ['one ', 'two ', 'three'];
        return new Response(new ReadableStream({ pull(c) { if (parts.length) c.enqueue(new TextEncoder().encode(parts.shift())); else c.close(); } }));
      }
      request.signal.addEventListener('abort', () => aborted(request.signal.reason?.name));
      // An endless body: the server pulls only as fast as the client reads.
      return new Response(new ReadableStream({
        pull(c) { pulls++; c.enqueue(new Uint8Array(64 * 1024)); },
        cancel() { cancelled(); },
      }, { highWaterMark: 0 }));
    },
  });
  const streamed = await request(server.port, '/stream');
  assert.deepEqual([streamed.body.toString(), named(streamed.headers, 'transfer-encoding')], ['one two three', ['chunked']]);
  const socket = net.connect(server.port, '127.0.0.1');
  await new Promise(resolve => socket.once('connect', resolve));
  socket.write('GET /endless HTTP/1.1\r\nhost: x\r\n\r\n');
  socket.pause();
  await new Promise(resolve => setTimeout(resolve, 300));
  const stalled = pulls;
  await new Promise(resolve => setTimeout(resolve, 200));
  assert.ok(pulls - stalled <= 2, `the server stopped pulling while the client did not read (${stalled} → ${pulls})`);
  assert.ok(pulls < 1000);
  socket.destroy();
  assert.equal(await abortedSeen, 'AbortError');
  await cancelledSeen;
});

test('serve: a body that fails mid-way breaks the connection; one that fails at once is a 500', async t => {
  const errors = [];
  t.mock.method(console, 'error', message => errors.push(String(message)));
  const server = await started(t, {
    fetch: request => {
      let sent = false;
      const late = new URL(request.url).pathname === '/late';
      return new Response(new ReadableStream({ pull(c) {
        if (late && !sent) { sent = true; c.enqueue(new TextEncoder().encode('part')); return; }
        c.error(new Error('body failed'));
      } }));
    },
  });
  // The client sees a broken reply: an error, or a response that never completes.
  const late = await request(server.port, '/late').catch(error => ({ error }));
  assert.ok(late.error || late.complete === false);
  const early = await request(server.port, '/early');
  assert.deepEqual([early.status, early.body.toString()], [500, 'Internal Server Error']);
  assert.deepEqual(errors, ['Lasm Node.serve: the response failed: body failed', 'Lasm Node.serve: the response failed: body failed']);
});

test('serve: stop finishes the requests in progress; stop(true) closes them; finished settles', async t => {
  let release;
  const held = new Promise(resolve => { release = resolve; });
  const server = await serve({ port: 0, hostname: '127.0.0.1', fetch: async request => {
    if (new URL(request.url).pathname === '/slow') await held;
    return new Response('done');
  } });
  const keepAlive = new http.Agent({ keepAlive: true });
  const idle = await new Promise(resolve => http.get({ host: '127.0.0.1', port: server.port, path: '/', agent: keepAlive }, res => { res.resume(); res.on('end', resolve); }));
  assert.equal(idle, undefined);
  const slow = request(server.port, '/slow');
  await new Promise(resolve => setTimeout(resolve, 50));
  let finished = false;
  server.finished.then(() => { finished = true; });
  const stopped = server.stop();
  assert.equal(server.stop(), stopped, 'stop is idempotent');
  await new Promise(resolve => setTimeout(resolve, 50));
  assert.equal(finished, false, 'a request in progress holds the server');
  await assert.rejects(request(server.port, '/'), { code: 'ECONNREFUSED' });
  release();
  assert.equal((await slow).body.toString(), 'done');
  await stopped;
  assert.equal(finished, true);
  keepAlive.destroy();

  const forced = await serve({ port: 0, hostname: '127.0.0.1', fetch: () => new Promise(() => {}) });
  const hanging = request(forced.port, '/');
  await new Promise(resolve => setTimeout(resolve, 50));
  await forced.stop(true);
  await assert.rejects(hanging);
});

test('serve: the signal, SIGTERM and SIGINT stop the server; a second signal closes what is still open', async t => {
  const controller = new AbortController();
  const bySignal = await serve({ port: 0, hostname: '127.0.0.1', signal: controller.signal, fetch: () => new Response('x') });
  controller.abort();
  await bySignal.finished;
  await assert.rejects(request(bySignal.port, '/'), { code: 'ECONNREFUSED' });
  const already = await serve({ port: 0, hostname: '127.0.0.1', signal: AbortSignal.abort(), fetch: () => new Response('x') });
  await already.finished;

  const before = process.listenerCount('SIGTERM');
  const server = await serve({ port: 0, hostname: '127.0.0.1', fetch: () => new Promise(() => {}) });
  assert.equal(process.listenerCount('SIGTERM'), before + 1);
  const hanging = request(server.port, '/');
  await new Promise(resolve => setTimeout(resolve, 50));
  process.emit('SIGTERM');
  let finished = false;
  server.finished.then(() => { finished = true; });
  await new Promise(resolve => setTimeout(resolve, 50));
  assert.equal(finished, false, 'the first signal waits for the request');
  process.emit('SIGINT');
  await server.finished;
  await assert.rejects(hanging);
  assert.equal(process.listenerCount('SIGTERM'), before, 'the listeners go with the server');
  assert.equal(process.listenerCount('SIGINT'), process.listenerCount('SIGINT'));
});

test('serve: the defaults (port $PORT else 3000, every IPv4 address), and the failures', async t => {
  const saved = process.env.PORT;
  t.after(() => { if (saved === undefined) delete process.env.PORT; else process.env.PORT = saved; });
  const free = await new Promise(resolve => { const s = net.createServer().listen(0, '127.0.0.1', () => { const { port } = s.address(); s.close(() => resolve(port)); }); });
  process.env.PORT = String(free);
  const server = await serve({ fetch: () => new Response('x') });
  t.after(() => server.stop(true));
  assert.deepEqual([server.hostname, server.port, server.url], ['0.0.0.0', free, `http://localhost:${free}/`]);
  // The port is taken now: listening fails.
  await assert.rejects(serve({ fetch: () => new Response('x') }), { code: 'EADDRINUSE' });
  process.env.PORT = 'not a number';
  const fallback = serve({ port: undefined, hostname: '127.0.0.1', fetch: () => new Response('x') });
  const listening = await fallback.catch(error => error);
  if (listening.code !== 'EADDRINUSE') { assert.equal(listening.port, 3000); await listening.stop(true); }
  assert.throws(() => serve({}), { message: 'Node.serve: fetch must be a function' });
  assert.throws(() => serve(), { message: 'Node.serve: fetch must be a function' });
  const v6 = await serve({ port: 0, hostname: '::1', fetch: request => new Response(request.url) }).catch(() => null);
  if (v6) {
    t.after(() => v6.stop(true));
    assert.equal(v6.url, `http://[::1]:${v6.port}/`);
  }
});

test('requestUrl, plainHost and hostPort', () => {
  assert.equal(requestUrl('/a?b', 'h.example:1', 'f:2'), 'http://h.example:1/a?b');
  assert.equal(requestUrl('/a', 'x/admin#', 'f:2'), 'http://f:2/a');
  assert.equal(requestUrl('/a', undefined, 'f:2', 'https'), 'https://f:2/a');
  assert.equal(requestUrl('//evil.example/x', 'h', 'f'), 'http://h//evil.example/x');
  assert.equal(requestUrl('https://p.example/x', 'h', 'f'), 'https://p.example/x');
  for (const target of ['*', 'h.example:443', 'ftp://p/x', 'javascript:alert(1)', '', undefined])
    assert.equal(requestUrl(target, 'h', 'f'), null, String(target));
  assert.deepEqual(['example.com:8080', '[::1]:3000', '', 'x/admin#', 'a b', 'u@h', 'h\\x', 'h?', 'é', undefined, 7].map(plainHost),
    [true, true, false, false, false, false, false, false, false, false, false]);
  assert.deepEqual([hostPort('127.0.0.1', 1), hostPort('::1', 2), hostPort('localhost', 3)], ['127.0.0.1:1', '[::1]:2', 'localhost:3']);
});

// ∀ target host, requestUrl keeps the origin-form target as the URL's path and query, under host only when it is plain
test('property: an origin-form target is the URL\'s path and query; only a plain Host is its authority', () => {
  const alphabet = ['a', 'Z', '0', '/', '?', '%2F', '#', '@', '\\', ':', ' ', '.', '..', '=', '&', 'é'];
  forAll(r => ({ target: '/' + r.string(alphabet.filter(c => c !== '#' && c !== ' ' && c !== 'é' && c !== '\\')), host: r.string(alphabet, 0, 12) }), ({ target, host }) => {
    const url = requestUrl(target, host, 'fallback:9');
    assert.ok(url.endsWith(target));
    const parsed = new URL(url);
    if (!(plainHost(host) && URL.canParse(`http://${host}/`))) assert.equal(parsed.host, 'fallback:9');
    else assert.equal(parsed.host, new URL(`http://${host}/`).host);
  });
});

test('toRequest: a body the platform read, a target in place of req.url, the scheme, the fields a Request cannot hold', async () => {
  const req = { method: 'PUT', url: '/ignored', rawHeaders: ['Host', 'h.example', 'Transfer-Encoding', 'chunked', 'Content-Length', '99', 'X-Bad', 'a\u0000b', 'Cookie', '', 'x', '1'] };
  const request = toRequest(req, { target: '/the/original?q', body: Buffer.from('read'), scheme: 'https' });
  assert.equal(request.url, 'https://h.example/the/original?q');
  assert.deepEqual([...request.headers], [['content-length', '4'], ['host', 'h.example'], ['x', '1']]);
  assert.equal(await request.text(), 'read');
  const empty = toRequest({ method: 'POST', url: '/', rawHeaders: ['content-length', '5'] }, { body: Buffer.alloc(0) });
  assert.deepEqual([empty.body, empty.headers.get('content-length'), empty.headers.get('host')], [null, null, 'localhost']);
  const get = toRequest({ method: 'GET', url: '/', rawHeaders: [] }, { body: Buffer.from('x') });
  assert.equal(get.body, null);
  assert.equal(toRequest({ method: 'TRACE', url: '/', rawHeaders: [] }), null, 'a method a Request cannot hold');
  assert.equal(toRequest({ method: 'GET', url: '*', rawHeaders: [] }), null);
  assert.equal(toRequest({ method: 'GET', url: '/', rawHeaders: undefined }).url, 'http://localhost/');
});

test('writeResponse and respond, without a server', async () => {
  const written = [];
  const res = { headersSent: false, destroyed: false,
    writeHead(...args) { written.push(['head', ...args]); this.headersSent = true; },
    write(chunk) { written.push(['write', Buffer.from(chunk).toString()]); return true; },
    end(chunk) { written.push(['end', chunk]); }, once() {} };
  await writeResponse(res, new Response('ab', { status: 202 }), 'GET');
  assert.deepEqual(written, [['head', 202, ['content-type', 'text/plain;charset=UTF-8']], ['write', 'ab'], ['end', undefined]]);
  assert.equal((await respond(() => new Response('r'), new Request('http://h/'))).status, 200);
  const extra = await respond((request, a, b) => new Response(`${a} ${b}`), new Request('http://h/'), undefined, [1, 2]);
  assert.equal(await extra.text(), '1 2');
});
