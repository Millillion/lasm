import { beforeAll, afterAll, describe, test, expect } from 'vitest';
import { spawn, execFileSync } from 'node:child_process';
import { mkdtemp, rm, readFile } from 'node:fs/promises';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import net from 'node:net';
import http from 'node:http';
import { pathToFileURL } from 'node:url';
import { buildMain } from '../../../src/main.mjs';
import { root } from '../../../src/toolchain.mjs';

const project = join(root, 'examples/lean-server');
let artifact;
beforeAll(async () => {
  artifact = await buildMain(join(project, 'Main.lean'));
  execFileSync('lake', ['build', 'server'], { cwd: project, stdio: 'pipe', timeout: 180_000 });
});

async function start(mode, directory) {
  const args = ['0', directory];
  const child = mode === 'wasm'
    ? spawn(process.execPath, [join(artifact.output, 'main.mjs'), ...args])
    : spawn(join(project, '.lake/build/bin', process.platform === 'win32' ? 'server.exe' : 'server'), args, { env: { ...process.env, LEAN_NUM_THREADS: '2' } });
  let stdout = '', stderr = '';
  const exited = new Promise(resolve => child.once('exit', (code, signal) => resolve({ code, signal })));
  child.stderr.on('data', bytes => { stderr += bytes; });
  const base = await new Promise((resolve, reject) => {
    const timer = setTimeout(() => { child.kill(); reject(new Error(`Server startup timed out: ${stderr}`)); }, 10_000);
    child.once('error', err => { clearTimeout(timer); reject(err); });
    child.once('exit', code => { clearTimeout(timer); reject(new Error(`Server exited ${code}: ${stderr}`)); });
    child.stdout.on('data', bytes => {
      stdout += bytes;
      const match = stdout.match(/http:\/\/127\.0\.0\.1:\d+/);
      if (match) { clearTimeout(timer); resolve(match[0]); }
    });
  });
  return {
    base, child, get stderr() { return stderr; },
    async stop() {
      if (child.exitCode === null && !child.signalCode) {
        try { await fetch(base + '/shutdown', { method: 'POST', signal: AbortSignal.timeout(3000) }); }
        catch { child.kill(); }
      }
      const timer = setTimeout(() => child.kill('SIGKILL'), 5000);
      const result = await exited; clearTimeout(timer);
      expect(result).toEqual({ code: 0, signal: null });
      expect(stdout).toContain('Server stopped');
    },
  };
}
async function raw(base, request) {
  const url = new URL(base);
  return new Promise((resolve, reject) => {
    const socket = net.connect({ host: url.hostname, port: Number(url.port) });
    let result = '';
    socket.setTimeout(5000, () => socket.destroy(new Error('Raw request timed out')));
    socket.on('connect', () => socket.write(request));
    socket.on('data', bytes => { result += bytes; });
    socket.on('error', reject); socket.on('close', () => resolve(result));
  });
}

for (const mode of ['wasm', 'native']) describe(`ordinary Lean HTTP server: ${mode}`, () => {
  let app, directory;
  beforeAll(async () => { directory = await mkdtemp(join(tmpdir(), 'lean-http-')); app = await start(mode, directory); });
  afterAll(async () => { try { await app?.stop(); } finally { app?.child.kill(); await rm(directory, { recursive: true, force: true }); } });
  const json = async (path, method = 'GET', body) => {
    const response = await fetch(app.base + path, { method, headers: { 'content-type': 'application/json' },
      ...(body === undefined ? {} : { body: JSON.stringify(body) }), signal: AbortSignal.timeout(10_000) });
    return { response, body: await response.json() };
  };

  test('routes requests and produces ordinary HTTP metadata', async () => {
    const { response, body } = await json('/health');
    expect(response.status).toBe(200); expect(body).toEqual({ ok: true });
    expect(response.headers.get('content-type')).toContain('application/json');
    expect(response.headers.get('x-powered-by')).toBe('Lean');
    expect(Math.abs(Date.parse(response.headers.get('date')) - Date.now())).toBeLessThan(5000);
    expect((await json('/unknown')).response.status).toBe(404);
  });

  test('validates JSON and Unicode titles', async () => {
    for (const body of [{}, { title: '' }, { title: ' '.repeat(10) }, { title: 4 }, { title: 'x'.repeat(121) }])
      expect((await json('/todos', 'POST', body)).response.status).toBe(400);
    const invalid = await fetch(app.base + '/todos', { method: 'POST', body: '{' });
    expect(invalid.status).toBe(400); await invalid.arrayBuffer();
    const created = await json('/todos', 'POST', { title: '  λ 日本語  ' });
    expect(created.response.status).toBe(201);
    expect(created.body).toEqual({ id: 1, title: 'λ 日本語', completed: false, revision: 1 });
  });

  test('reads, updates with revision checks, and deletes todos', async () => {
    expect((await json('/todos/1')).body.title).toBe('λ 日本語');
    expect((await json('/todos/not-a-number')).response.status).toBe(400);
    expect((await json('/todos/9999')).response.status).toBe(404);
    const updated = await json('/todos/1', 'PATCH', { completed: true, revision: 1 });
    expect(updated.body).toMatchObject({ completed: true, revision: 2 });
    expect((await json('/todos/1', 'PATCH', { completed: false, revision: 1 })).response.status).toBe(409);
    expect((await json('/todos/1', 'PATCH', {})).response.status).toBe(400);
    expect((await json('/todos/1', 'DELETE')).response.status).toBe(200);
    expect((await json('/todos/1', 'DELETE')).response.status).toBe(404);
  });

  test('concurrent mutations are serialized without losing updates', async () => {
    const results = await Promise.all(Array.from({ length: 24 }, (_, i) => json('/todos', 'POST', { title: `concurrent ${i} λ` })));
    expect(results.every(result => result.response.status === 201)).toBe(true);
    expect(new Set(results.map(result => result.body.id)).size).toBe(24);
    const listing = (await json('/todos')).body;
    expect(listing).toHaveLength(24);
    const disk = JSON.parse(await readFile(join(directory, 'todos.json'), 'utf8'));
    expect(disk.todos).toEqual(listing);
    expect(disk.nextId).toBe(26);
  });

  test('preserves arbitrary binary request and response bodies', async () => {
    const bytes = Uint8Array.from([0, 255, 128, 13, 10, 42]);
    const response = await fetch(app.base + '/echo', { method: 'POST', body: bytes });
    expect(response.status).toBe(200); expect(new Uint8Array(await response.arrayBuffer())).toEqual(bytes);
  });

  test('accepts chunked request bodies', async () => {
    const result = await new Promise((resolve, reject) => {
      const req = http.request(app.base + '/echo', { method: 'POST' }, res => {
        const chunks = []; res.on('data', value => chunks.push(value)); res.on('end', () => resolve(Buffer.concat(chunks).toString()));
      });
      req.on('error', reject); req.write('first λ'); req.write(' second'); req.end(' third');
    });
    expect(result).toBe('first λ second third');
  });

  test('streams events and remains usable after a client disconnects', async () => {
    const response = await fetch(app.base + '/events');
    expect(response.headers.get('content-type')).toBe('text/event-stream');
    expect(await response.text()).toBe('data: 0\n\ndata: 1\n\ndata: 2\n\n');
    const aborted = new AbortController();
    const partial = await fetch(app.base + '/events', { signal: aborted.signal });
    const reader = partial.body.getReader(); await reader.read(); aborted.abort();
    await reader.cancel().catch(() => {});
    expect((await json('/health')).response.status).toBe(200);
  });

  test('enforces body limits and rejects malformed protocol input', async () => {
    const response = await fetch(app.base + '/echo', { method: 'POST', body: 'x'.repeat(20_000) });
    expect(response.status).toBe(413); await response.arrayBuffer();
    const malformed = await raw(app.base, 'POST /echo HTTP/1.1\r\nHost: localhost\r\nContent-Length: nope\r\nConnection: close\r\n\r\n');
    expect(malformed).toMatch(/^HTTP\/1.1 400 /);
  });

  test('serves pipelined requests over one connection', async () => {
    const result = await raw(app.base, 'GET /health HTTP/1.1\r\nHost: localhost\r\n\r\nGET /health HTTP/1.1\r\nHost: localhost\r\nConnection: close\r\n\r\n');
    expect(result.match(/HTTP\/1.1 200 /g)).toHaveLength(2);
    expect(result.match(/\{"ok":true\}/g)).toHaveLength(2);
  });

  test('reloads persisted state after graceful shutdown and restart', async () => {
    const expected = (await json('/todos')).body;
    await app.stop(); app = await start(mode, directory);
    expect((await json('/todos')).body).toEqual(expected);
    expect(app.stderr).not.toMatch(/RuntimeError|out of bounds|assertion/);
  });
});

test('Wasm server releases request resources over a sustained workload', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'lean-http-resources-'));
  const create = (await import(pathToFileURL(join(artifact.output, 'index.mjs')).href)).default;
  let ready;
  const address = new Promise(resolve => { ready = resolve; });
  const api = await create({ args: ['0', directory], stdio: { stdout(bytes) {
    const match = Buffer.from(bytes).toString().match(/http:\/\/127\.0\.0\.1:\d+/); if (match) ready(match[0]);
  }, stderr() {} } });
  const controller = new AbortController();
  const running = api.runMain({ signal: controller.signal }); running.catch(() => {});
  try {
    const base = await Promise.race([address, running.then(() => { throw new Error('Server stopped before startup'); })]);
    const cycle = async () => { const response = await fetch(base + '/health'); expect(await response.json()).toEqual({ ok: true }); };
    for (let i = 0; i < 30; i++) await cycle();
    const before = api.stats();
    for (let i = 0; i < 150; i++) await cycle();
    const steady = api.stats();
    expect(steady.memoryBytes).toBeLessThanOrEqual(before.memoryBytes + 2 * 1024 * 1024);
    expect(steady.resources).toBeLessThanOrEqual(before.resources + 2);
    expect(steady.waitingTasks).toBeLessThanOrEqual(before.waitingTasks + 8);
    for (let i = 0; i < 12; i++) {
      const abort = new AbortController();
      const response = await fetch(base + '/events', { signal: abort.signal });
      const reader = response.body.getReader(); await reader.read(); abort.abort();
      await reader.cancel().catch(() => {});
      await cycle();
    }
    await new Promise(resolve => setTimeout(resolve, 100));
    const after = api.stats();
    expect(after.resources).toBeLessThanOrEqual(before.resources + 2);
    expect(after.waitingTasks).toBeLessThanOrEqual(steady.waitingTasks + 8);
    const freshConnection = async () => {
      const response = await fetch(base + '/health', { headers: { Connection: 'close' } });
      expect(await response.json()).toEqual({ ok: true });
    };
    for (let i = 0; i < 30; i++) await freshConnection();
    await new Promise(resolve => setTimeout(resolve, 100));
    const warmConnections = api.stats();
    for (let i = 0; i < 300; i++) await freshConnection();
    await new Promise(resolve => setTimeout(resolve, 100));
    const repeatedConnections = api.stats();
    expect(repeatedConnections.waitingTasks).toBeLessThanOrEqual(warmConnections.waitingTasks + 4);
    expect(repeatedConnections.resources).toBeLessThanOrEqual(warmConnections.resources + 2);
    expect(repeatedConnections.memoryBytes).toBeLessThanOrEqual(warmConnections.memoryBytes + 2 * 1024 * 1024);
    const response = await fetch(base + '/shutdown', { method: 'POST' }); await response.arrayBuffer();
    expect(await running).toBe(0);
    expect(api.stats()).toMatchObject({ fibers: 0, waitingTasks: 0, resources: 0 });
  } finally { controller.abort(); await running.catch(() => {}); api.dispose(); await rm(directory, { recursive: true, force: true }); }
});

test('an external abort closes a running Lean main and its listener', async () => {
  const directory = await mkdtemp(join(tmpdir(), 'lean-http-abort-'));
  const create = (await import(pathToFileURL(join(artifact.output, 'index.mjs')).href)).default;
  let ready;
  const address = new Promise(resolve => { ready = resolve; });
  const api = await create({ args: ['0', directory], stdio: { stdout(bytes) {
    const match = Buffer.from(bytes).toString().match(/http:\/\/127\.0\.0\.1:\d+/); if (match) ready(match[0]);
  }, stderr() {} } });
  const controller = new AbortController();
  const running = api.runMain({ signal: controller.signal }); running.catch(() => {});
  try {
    const base = await address;
    controller.abort(new Error('test shutdown'));
    await expect(running).rejects.toThrow('test shutdown');
    expect(api.stats()).toMatchObject({ disposed: true, resources: 0, fibers: 0 });
    await expect(fetch(base + '/health')).rejects.toThrow();
  } finally { controller.abort(); await running.catch(() => {}); api.dispose(); await rm(directory, { recursive: true, force: true }); }
});
