import { afterEach, describe, expect, test, vi } from 'vitest';
import { createServer } from 'node:http';
import { mkdtemp, readFile, readdir, rm, writeFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { createApp } from '../app.mjs';

const directories = [];
const servers = [];
const services = [];

async function listen(handler) {
  const server = createServer(handler);
  servers.push(server);
  await new Promise((resolve, reject) => {
    server.once('error', reject);
    server.listen(0, '127.0.0.1', resolve);
  });
  return { server, url: `http://127.0.0.1:${server.address().port}` };
}

async function fixture(options = {}) {
  const directory = options.directory ?? await mkdtemp(join(tmpdir(), 'lasm-express-'));
  if (!options.directory) directories.push(directory);
  const service = await createApp({ ...options, directory });
  services.push(service);
  const { server, url } = await listen(service.app);
  async function request(path, { method = 'GET', body, headers = {}, ...rest } = {}) {
    const response = await fetch(url + path, {
      method,
      ...(body === undefined ? {} : { body: JSON.stringify(body), headers: { 'content-type': 'application/json', ...headers } }),
      ...(body === undefined ? { headers } : {}),
      ...rest,
    });
    const text = await response.text();
    return { status: response.status, headers: response.headers, body: text ? JSON.parse(text) : null };
  }
  const create = body => request('/api/tasks', { method: 'POST', body });
  return { directory, service, server, url, request, create };
}

afterEach(async () => {
  // Closing active sockets also cancels any request deliberately held by a test.
  const closing = servers.splice(0).map(server => {
    server.closeAllConnections();
    return new Promise(resolve => server.close(resolve));
  });
  await Promise.all(services.splice(0).map(service => service.close()));
  await Promise.all(closing);
  await Promise.all(directories.splice(0).map(directory => rm(directory, { recursive: true, force: true })));
});

describe('real Express → Lean/Wasm → Node capabilities', () => {
  test('health and an empty collection are implemented by the compiled Lean module', async () => {
    const app = await fixture();
    const health = await app.request('/health');
    expect(health.status).toBe(200);
    expect(health.body).toEqual({ ok: true, implementation: 'Lean/Wasm' });
    expect(health.headers.get('x-endpoint-implementation')).toBe('Lean/Wasm');
    expect(health.headers.has('x-powered-by')).toBe(false);
    expect((await app.request('/api/tasks')).body).toEqual({ items: [], total: 0, offset: 0, limit: 20 });
    expect(JSON.parse(await readFile(join(app.directory, 'tasks.json'), 'utf8'))).toEqual({ schemaVersion: 1, nextId: 1, tasks: [] });
  });

  test('Unicode CRUD, defaults, version conflicts, headers, deletion, and monotonic IDs', async () => {
    const app = await fixture();
    const created = await app.create({ title: '  日本語 🙂  ', description: 'line\nquoted "text"\u0000' });
    expect(created.status).toBe(201);
    expect(created.headers.get('location')).toBe('/api/tasks/1');
    expect(created.headers.get('etag')).toBe('"1-1"');
    expect(created.body).toEqual({ id: 1, title: '日本語 🙂', description: 'line\nquoted "text"\u0000', priority: 3, status: 'open', version: 1 });
    expect((await app.request('/api/tasks/1')).body).toEqual(created.body);
    const updated = await app.request('/api/tasks/1', {
      method: 'PATCH', body: { version: 1, title: 'Completed', status: 'done', priority: 5, description: '' },
    });
    expect(updated.status).toBe(200);
    expect(updated.headers.get('etag')).toBe('"1-2"');
    expect(updated.body).toEqual({ id: 1, title: 'Completed', description: '', priority: 5, status: 'done', version: 2 });
    const stale = await app.request('/api/tasks/1', { method: 'PATCH', body: { version: 1, title: 'Lost update' } });
    expect(stale.status).toBe(409);
    expect(stale.body.error.code).toBe('version_conflict');
    expect((await app.request('/api/tasks/1?version=1', { method: 'DELETE' })).status).toBe(409);
    const deleted = await app.request('/api/tasks/1?version=2', { method: 'DELETE' });
    expect(deleted.status).toBe(204);
    expect(deleted.body).toBeNull();
    expect((await app.request('/api/tasks/1')).status).toBe(404);
    expect((await app.create({ title: 'Next task' })).body.id).toBe(2);
    expect((await readdir(app.directory)).sort()).toEqual(['.task-board.lock', 'tasks.json']);
  });

  test('filtering, case-sensitive search, pagination, and aggregate statistics', async () => {
    const app = await fixture();
    await app.create({ title: 'Alpha', priority: 1 });
    await app.create({ title: 'Beta', description: 'contains Alpha', priority: 5 });
    await app.create({ title: 'Gamma', priority: 1 });
    await app.request('/api/tasks/2', { method: 'PATCH', body: { version: 1, status: 'done' } });
    const page = await app.request('/api/tasks?status=open&offset=1&limit=1');
    expect(page.status).toBe(200);
    expect(page.body).toMatchObject({ total: 2, offset: 1, limit: 1 });
    expect(page.body.items.map(task => task.id)).toEqual([3]);
    expect((await app.request('/api/tasks?q=Alpha')).body.items.map(task => task.id)).toEqual([1, 2]);
    expect((await app.request('/api/tasks?q=alpha')).body.total).toBe(0);
    expect((await app.request('/api/tasks?offset=100')).body.items).toEqual([]);
    expect((await app.request('/api/stats')).body).toEqual({
      total: 3, open: 2, done: 1,
      byPriority: [2, 0, 0, 0, 1].map((count, i) => ({ priority: i + 1, count })),
    });
  });

  test.each([
    ['missing title', {}], ['empty title', { title: '' }], ['whitespace title', { title: ' \t\n ' }],
    ['nonstring title', { title: 42 }], ['NUL title', { title: 'a\u0000b' }],
    ['long title', { title: '🙂'.repeat(121) }], ['null title', { title: null }],
    ['long description', { title: 'a', description: 'x'.repeat(2001) }],
    ['nonstring description', { title: 'a', description: 1 }],
    ['priority zero', { title: 'a', priority: 0 }], ['priority six', { title: 'a', priority: 6 }],
    ['negative priority', { title: 'a', priority: -1 }], ['fractional priority', { title: 'a', priority: 1.5 }],
    ['string priority', { title: 'a', priority: '3' }], ['null priority', { title: 'a', priority: null }],
    ['unknown field', { title: 'a', extra: true }], ['client assigned ID', { title: 'a', id: 1 }],
    ['array body', []], ['null body', null], ['string body', 'a'],
  ])('Lean rejects %s without changing the store', async (_, body) => {
    const app = await fixture();
    const before = await readFile(join(app.directory, 'tasks.json'));
    const result = await app.create(body);
    expect(result.status).toBe(400);
    expect(result.body.error.code).toBe('invalid_request');
    expect(await readFile(join(app.directory, 'tasks.json'))).toEqual(before);
  });

  test('length validation counts Unicode characters and accepts exact limits', async () => {
    const app = await fixture();
    const title = '🙂'.repeat(120);
    const description = '日'.repeat(2000);
    const result = await app.create({ title, description });
    expect(result.status).toBe(201);
    expect(result.body).toMatchObject({ title, description });
  });

  test.each(['limit=0', 'limit=101', 'limit=1.5', 'offset=-1', 'offset=1000000001', 'status=other', 'limit=1&limit=2', 'q=a&q=b', 'unexpected=1'])('Lean rejects invalid query %s', async query => {
    const app = await fixture();
    const result = await app.request(`/api/tasks?${query}`);
    expect(result.status).toBe(400);
    expect(result.body.error.code).toBe('invalid_request');
  });

  test('invalid patches and delete versions never change a task', async () => {
    const app = await fixture();
    const task = (await app.create({ title: 'Keep me' })).body;
    for (const body of [
      { title: 'No version' }, { version: 1 }, { version: 0, title: 'Bad' },
      { version: '1', title: 'Bad' }, { version: 1, status: 'pending' },
      { version: 1, priority: 7 }, { version: 1, title: null },
      { version: 1, id: 20 }, { version: 1, description: false },
    ]) expect((await app.request('/api/tasks/1', { method: 'PATCH', body })).status).toBe(400);
    for (const query of ['', '?version=0', '?version=-1', '?version=1&version=1', '?version=1&extra=1']) {
      expect((await app.request('/api/tasks/1' + query, { method: 'DELETE' })).status).toBe(400);
    }
    expect((await app.request('/api/tasks/1')).body).toEqual(task);
  });

  test('route errors and missing resources have deliberate status codes', async () => {
    const app = await fixture();
    for (const path of ['/api/tasks/0', '/api/tasks/nope', '/api/tasks/1000000001']) {
      expect((await app.request(path)).status).toBe(400);
    }
    expect((await app.request('/api/tasks/99')).status).toBe(404);
    expect((await app.request('/missing')).status).toBe(404);
    expect((await app.request('/api/tasks', { method: 'PUT' })).status).toBe(405);
    expect((await app.request('/api/tasks/import')).status).toBe(405);
  });

  test('transport bounds bodies, media types, encodings, and URLs while Lean parses JSON', async () => {
    const app = await fixture();
    const raw = (body, headers = { 'content-type': 'application/json' }) => fetch(app.url + '/api/tasks', { method: 'POST', headers, body });
    const malformed = await raw('{"title":');
    expect(malformed.status).toBe(400);
    expect((await malformed.json()).error.code).toBe('invalid_request');
    const utf8 = await raw(Buffer.from([0xff]));
    expect(utf8.status).toBe(400);
    expect((await utf8.json()).error.code).toBe('invalid_encoding');
    expect((await raw('{}', { 'content-type': 'text/plain' })).status).toBe(415);
    expect((await raw('{}', { 'content-type': 'application/json', 'content-encoding': 'gzip' })).status).toBe(415);
    expect((await raw('x'.repeat(33 * 1024))).status).toBe(413);
    expect((await app.request('/api/tasks?q=' + 'x'.repeat(8300))).status).toBe(414);
    const vendor = await raw('{"title":"Vendor JSON"}', { 'content-type': 'application/vnd.task+json' });
    expect(vendor.status).toBe(201);
  });

  test('parallel creates and competing versioned patches are serialized without lost updates', async () => {
    const app = await fixture();
    const results = await Promise.all(Array.from({ length: 24 }, (_, i) => app.create({ title: `Task ${i}` })));
    expect(results.every(result => result.status === 201)).toBe(true);
    expect(results.map(result => result.body.id).sort((a, b) => a - b)).toEqual(Array.from({ length: 24 }, (_, i) => i + 1));
    expect((await app.request('/api/tasks?limit=100')).body.total).toBe(24);
    const patches = await Promise.all(['First', 'Second'].map(title => app.request('/api/tasks/1', { method: 'PATCH', body: { version: 1, title } })));
    expect(patches.map(result => result.status).sort()).toEqual([200, 409]);
    expect((await app.request('/api/tasks/1')).body).toEqual(patches.find(result => result.status === 200).body);
    expect(app.service.stats()).toMatchObject({ pending: 0, busy: false, disposed: false });
  });

  test('restarting retains state and a second writer cannot share the directory', async () => {
    const first = await fixture();
    const created = await first.create({ title: 'Persistent' });
    await expect(createApp({ directory: first.directory })).rejects.toThrow('already locked');
    await first.service.close();
    await first.service.close(); // Idempotent shutdown.
    expect((await first.request('/health')).status).toBe(503);
    const second = await fixture({ directory: first.directory });
    expect((await second.request('/api/tasks/1')).body).toEqual(created.body);
    expect((await second.create({ title: 'After restart' })).body.id).toBe(2);
  });

  test.each([
    ['invalid JSON', '{broken'],
    ['wrong schema', JSON.stringify({ schemaVersion: 2, nextId: 1, tasks: [] })],
    ['invalid IDs', JSON.stringify({ schemaVersion: 1, nextId: 1, tasks: [{ id: 1, title: 'Bad', description: '', priority: 3, status: 'open', version: 1 }] })],
    ['invalid UTF-8', Buffer.from([0xff])],
  ])('corrupt storage (%s) is preserved and errors are sanitized', async (_, corrupt) => {
    const app = await fixture();
    const path = join(app.directory, 'tasks.json');
    const original = await readFile(path);
    await writeFile(path, corrupt);
    for (const result of [await app.request('/api/tasks'), await app.create({ title: 'Do not overwrite' })]) {
      expect(result.status).toBe(503);
      expect(result.body).toEqual({ error: { code: 'storage_unavailable', message: 'Task storage is unavailable or invalid' } });
    }
    expect(await readFile(path)).toEqual(Buffer.from(corrupt));
    expect((await app.request('/health')).status).toBe(200);
    await writeFile(path, original);
    expect((await app.create({ title: 'Recovered' })).status).toBe(201);
  });

  test('the bounded example store returns a clear capacity error', async () => {
    const app = await fixture();
    const tasks = Array.from({ length: 250 }, (_, i) => ({ id: i + 1, title: `Task ${i}`, description: '', status: 'open', priority: 3, version: 1 }));
    const source = JSON.stringify({ schemaVersion: 1, nextId: 251, tasks });
    await writeFile(join(app.directory, 'tasks.json'), source);
    const result = await app.create({ title: 'Overflow' });
    expect(result.status).toBe(507);
    expect(result.body.error.code).toBe('store_full');
    expect(await readFile(join(app.directory, 'tasks.json'), 'utf8')).toBe(source);
  });

  test('Lean fetches a template over HTTP, validates it, and persists the new task', async () => {
    const requests = [];
    const upstream = await listen((req, res) => {
      requests.push({ method: req.method, path: req.url });
      res.setHeader('content-type', 'application/json');
      res.end(JSON.stringify({ title: 'Remote 日本語', description: 'From HTTP', priority: 2 }));
    });
    const app = await fixture({ upstream: upstream.url });
    const imported = await app.request('/api/tasks/import', { method: 'POST', body: { templateId: 7 } });
    expect(imported.status).toBe(201);
    expect(imported.body).toMatchObject({ title: 'Remote 日本語', description: 'From HTTP', priority: 2, id: 1, version: 1 });
    expect(requests).toEqual([{ method: 'GET', path: '/templates/7' }]);
    expect((await app.request('/api/tasks/1')).body).toEqual(imported.body);
    for (const body of [{ templateId: 0 }, { templateId: '7' }, { templateId: 7, url: 'http://example.invalid' }]) {
      expect((await app.request('/api/tasks/import', { method: 'POST', body })).status).toBe(400);
    }
    expect(requests).toHaveLength(1);
  });

  test.each([
    ['HTTP error', 503, '{}', {}, 'upstream_unavailable'],
    ['redirect', 302, '', { location: '/templates/1' }, 'upstream_unavailable'],
    ['invalid JSON', 200, '{bad', {}, 'invalid_upstream_response'],
    ['invalid UTF-8', 200, Buffer.from([0xff]), {}, 'invalid_upstream_response'],
    ['invalid schema', 200, '{"title":"Remote","priority":99}', {}, 'invalid_upstream_response'],
    ['oversized body', 200, 'x'.repeat(4 * 1024 * 1024 + 1), {}, 'upstream_unavailable'],
  ])('upstream %s does not mutate stored data', async (_, status, body, headers, code) => {
    let calls = 0;
    const upstream = await listen((req, res) => { calls++; res.writeHead(status, headers); res.end(body); });
    const app = await fixture({ upstream: upstream.url });
    const before = await readFile(join(app.directory, 'tasks.json'));
    const result = await app.request('/api/tasks/import', { method: 'POST', body: { templateId: 1 } });
    expect(result.status).toBe(502);
    expect(result.body.error.code).toBe(code);
    expect(await readFile(join(app.directory, 'tasks.json'))).toEqual(before);
    expect(calls).toBe(1);
    expect((await app.create({ title: 'Still healthy' })).status).toBe(201);
  });

  test('an unconfigured upstream fails clearly', async () => {
    const app = await fixture();
    const result = await app.request('/api/tasks/import', { method: 'POST', body: { templateId: 1 } });
    expect(result.status).toBe(503);
    expect(result.body.error.code).toBe('upstream_disabled');
  });

  test('a timed-out upstream releases the queue and leaves storage unchanged', async () => {
    const upstream = await listen(() => {});
    const app = await fixture({ upstream: upstream.url, upstreamTimeoutMs: 100 });
    const result = await app.request('/api/tasks/import', { method: 'POST', body: { templateId: 1 } });
    expect(result.status).toBe(502);
    expect(result.body.error.code).toBe('upstream_unavailable');
    expect((await app.create({ title: 'After timeout' })).body.id).toBe(1);
  });

  test('bounded queue rejects overload and cancels queued work before it mutates storage', async () => {
    const entered = Promise.withResolvers();
    let upstreamResponse;
    const upstream = await listen((req, res) => { upstreamResponse = res; entered.resolve(); });
    const app = await fixture({ upstream: upstream.url, maxPending: 2 });
    const importing = app.request('/api/tasks/import', { method: 'POST', body: { templateId: 1 } }).catch(error => error);
    await entered.promise;
    const queuedClosed = Promise.withResolvers();
    app.server.on('request', (req, res) => {
      if (req.headers['x-test-request'] === 'cancel-me') res.once('close', queuedClosed.resolve);
    });
    const controller = new AbortController();
    const queued = app.request('/api/tasks', { method: 'POST', body: { title: 'Cancelled' },
      headers: { 'x-test-request': 'cancel-me' }, signal: controller.signal }).catch(error => error);
    await vi.waitFor(() => expect(app.service.stats().pending).toBe(2));
    const overloaded = await app.create({ title: 'Overloaded' });
    expect(overloaded.status).toBe(503);
    expect(overloaded.body.error.code).toBe('queue_full');
    controller.abort();
    expect(await queued).toBeInstanceOf(Error);
    // Observe the server-side close before releasing the active request.
    await queuedClosed.promise;
    upstreamResponse.end('{"title":"Imported"}');
    expect((await importing).status).toBe(201);
    await vi.waitFor(() => expect(app.service.stats().pending).toBe(0));
    const tasks = (await app.request('/api/tasks')).body.items;
    expect(tasks.map(task => task.title)).toEqual(['Imported']);
    expect((await app.create({ title: 'Accepted later' })).body.id).toBe(2);
  });

  test('disconnecting an active import aborts its HTTP request and permits subsequent work', async () => {
    const entered = Promise.withResolvers();
    const upstreamClosed = Promise.withResolvers();
    const upstream = await listen((req, res) => { res.once('close', upstreamClosed.resolve); entered.resolve(); });
    const app = await fixture({ upstream: upstream.url });
    const controller = new AbortController();
    const pending = app.request('/api/tasks/import', { method: 'POST', body: { templateId: 1 }, signal: controller.signal }).catch(error => error);
    await entered.promise;
    controller.abort();
    expect(await pending).toBeInstanceOf(Error);
    await upstreamClosed.promise;
    await vi.waitFor(() => expect(app.service.stats().pending).toBe(0));
    expect((await app.create({ title: 'After disconnect' })).body.id).toBe(1);
    expect((await readdir(app.directory)).sort()).toEqual(['.task-board.lock', 'tasks.json']);
  });

  test('repeated JSON and IO workloads keep the instance usable with stable memory', async () => {
    const app = await fixture();
    await app.create({ title: 'Repeated work' });
    const cycle = async () => {
      expect((await app.request('/api/tasks?q=Repeated')).status).toBe(200);
      expect((await app.create({ title: '' })).status).toBe(400);
    };
    for (let i = 0; i < 10; i++) await cycle();
    const memoryBytes = app.service.stats().memoryBytes;
    for (let i = 0; i < 50; i++) await cycle();
    expect(app.service.stats()).toMatchObject({ memoryBytes, disposed: false, pending: 0, busy: false });
  });
});
