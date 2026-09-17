import test from 'node:test';
import assert from 'node:assert/strict';
import { createServer } from 'node:http';
import { mkdir, writeFile, readFile } from 'node:fs/promises';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { build } from '../src/build.mjs';
import { root } from '../scripts/build-runtime.mjs';
import { createNodeHost } from '../src/host.mjs';

const mode = process.argv[2] ?? 'asyncify';
const output = join(root, `.work/test-io-${mode}`);
const report = await build(join(root, 'examples/io/lasm.json'), output, { asyncMode: mode });
const { default: createModule } = await import(pathToFileURL(join(output, 'index.mjs')));
const directory = join(root, '.work/io-fixtures');
await mkdir(directory, { recursive: true });
const binary = Uint8Array.from({ length: 1024 }, (_, i) => i & 255);
const unicode = new TextEncoder().encode('日本語\0🙂\n');
await writeFile(join(directory, 'binary'), binary);
await writeFile(join(directory, 'unicode'), unicode);
await writeFile(join(directory, 'oversized'), new Uint8Array(65_537));
let hostCalls = 0;
const host = await createNodeHost({ directory, fetch: globalThis.fetch, maxBytes: 65_536, timeoutMs: 2000 });
const trackedHost = Object.fromEntries(Object.entries(host).map(([name, fn]) => [name, (...args) => { hostCalls++; return fn(...args); }]));
const api = await createModule({ host: trackedHost });
const server = createServer((request, response) => {
  if (request.url === '/fail') { response.writeHead(503); response.end('unavailable'); }
  else if (request.url === '/redirect') { response.writeHead(302, { location: '/binary' }); response.end(); }
  else if (request.url === '/large') { response.writeHead(200, { 'content-length': '65537' }); response.end(new Uint8Array(65_537)); }
  else if (request.url === '/chunked-large') { response.writeHead(200); response.write(new Uint8Array(40_000)); response.end(new Uint8Array(40_000)); }
  else if (request.url === '/slow') {
    const timeout = setTimeout(() => response.end('slow'), 250);
    request.on('close', () => clearTimeout(timeout));
  } else response.end(request.url === '/unicode' ? unicode : binary);
});
await new Promise((resolve, reject) => { server.once('error', reject); server.listen(0, '127.0.0.1', resolve); });
const url = `http://127.0.0.1:${server.address().port}`;
test.after(async () => {
  if (!api.stats().disposed) api.dispose();
  server.closeAllConnections();
  await new Promise(resolve => server.close(resolve));
});

test(`${mode}: filesystem IO crosses indirect calls and consecutive suspensions`, async () => {
  assert.equal(await api.ready(), 42n);
  assert.equal(await api.scalar(), 0xffff_ffff);
  assert.equal(await api.truth(), true);
  const before = hostCalls;
  assert.deepEqual(await api.readPair('binary', 'unicode'), Uint8Array.from([...binary, ...unicode]));
  assert.equal(hostCalls - before, 2);
  assert.deepEqual(await api.copy('binary', 'copied'), binary);
  assert.deepEqual(new Uint8Array(await readFile(join(directory, 'copied'))), binary);
  assert.equal(await api.write('written', unicode), undefined);
  assert.deepEqual(new Uint8Array(await readFile(join(directory, 'written'))), unicode);
  await assert.rejects(api.readPair('missing', 'binary'), /ENOENT/);
  assert.equal(await api.recover('missing'), 'caught inside Lean');
  await assert.rejects(api.readPair('../escape', 'binary'), /outside/);
  await assert.rejects(api.readPair('oversized', 'binary'), /response limit/);
  assert.equal(api.stats().disposed, false);
});

test(`${mode}: HTTP success, failures, redirects, and bounded streaming`, async () => {
  assert.deepEqual(await api.fetchPair(`${url}/binary`, `${url}/unicode`), Uint8Array.from([...binary, ...unicode]));
  await assert.rejects(api.fetch(`${url}/fail`), /HTTP 503/);
  await assert.rejects(api.fetch(`${url}/redirect`), /fetch failed|redirect/i);
  await assert.rejects(api.fetch(`${url}/large`), /response limit/);
  await assert.rejects(api.fetch(`${url}/chunked-large`), /response limit/);
  await assert.rejects(api.fetch('file:///tmp/example'), /HTTP and HTTPS/);
  const connectionFailure = await createModule({ host: { fetchBytes: async () => { throw new Error('ECONNREFUSED injected transport error'); } } });
  await assert.rejects(connectionFailure.fetch(url), /ECONNREFUSED/);
  connectionFailure.dispose();
});

test(`${mode}: cancellation unwinds as Lean IO error and rejects concurrent calls`, async () => {
  const controller = new AbortController();
  const pending = api.fetch(`${url}/slow`, { signal: controller.signal });
  assert.equal(api.stats().busy, true);
  await assert.rejects(api.readPair('binary', 'unicode'), /busy/);
  assert.throws(() => api.dispose(), /busy/);
  controller.abort(new Error('cancelled by test'));
  await assert.rejects(pending, /cancelled by test/);
  assert.equal(api.stats().busy, false);
  assert.deepEqual(await api.fetch(`${url}/binary`), binary);
  await assert.rejects(api.fetch(url, { signal: AbortSignal.abort(new Error('already cancelled')) }), /already cancelled/);
  assert.equal(api.stats().disposed, false);
});

test(`${mode}: capabilities and host failures are recoverable IO errors`, async () => {
  const denied = await createModule();
  await assert.rejects(denied.readPair('binary', 'unicode'), /capability unavailable/);
  denied.dispose();
  const permission = await createModule({ host: { readBytes: async () => { throw new Error('EACCES permission denied (injected)'); } } });
  await assert.rejects(permission.readPair('binary', 'unicode'), /EACCES/);
  assert.equal(await permission.recover('binary'), 'caught inside Lean');
  permission.dispose();
});

test(`${mode}: references and initialization state are local to each instance`, async () => {
  const first = await createModule();
  const second = await createModule();
  try {
    assert.equal(await first.wasInitializing(), true);
    assert.equal(await first.isInitializing(), false);
    assert.equal(await first.increment(), 1n);
    assert.equal(await first.increment(), 2n);
    assert.equal(await second.increment(), 1n);
    assert.equal(await second.isInitializing(), false);
  } finally { first.dispose(); second.dispose(); }
});

test(`${mode}: repeated success and failure release guest resources`, async () => {
  const cycle = async () => {
    assert.deepEqual(await api.readPair('binary', 'unicode'), Uint8Array.from([...binary, ...unicode]));
    await assert.rejects(api.fetch(`${url}/fail`), /HTTP 503/);
  };
  for (let i = 0; i < 10; i++) await cycle();
  const memoryBytes = api.stats().memoryBytes;
  for (let i = 0; i < 100; i++) await cycle();
  assert.equal(api.stats().memoryBytes, memoryBytes);
  const c = await readFile(join(report.buildDir, 'Example.c'), 'utf8');
  assert.ok(c.includes('lean_apply_'), 'the suspended closure path must retain indirect calls');
  await mkdir(join(root, '.work/evidence'), { recursive: true });
  await writeFile(join(root, `.work/evidence/io-${mode}.json`), JSON.stringify({
    ...report, hostCalls, memoryBytes, repeatedCycles: 110, node: process.version,
    errorTests: { actualMissingFile: true, injectedPermissionDenied: true, injectedTransportFailure: true },
  }, null, 2) + '\n');
});
