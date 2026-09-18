import test from 'node:test';
import assert from 'node:assert/strict';
import { createServer } from 'node:http';
import { readFile } from 'node:fs/promises';
import { mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { resolve, join, sep, extname } from 'node:path';
import { chromium } from 'playwright-core';
import { Miniflare, convertV4MiniflareOptions } from 'miniflare';
import { build } from '../src/build.mjs';
import { root, sha256 } from '../src/toolchain.mjs';

const basic = await build(join(root, 'examples/basic/lasm.json'));
const io = await build(join(root, 'examples/io/lasm.json'));
let browser;
let worker;
const report = { node: process.version, platform: `${process.platform}-${process.arch}`,
  miniflare: JSON.parse(readFileSync(join(root, 'node_modules/miniflare/package.json'))).version,
  workerd: JSON.parse(readFileSync(join(root, 'node_modules/workerd/package.json'))).version,
  wasm: Object.fromEntries([['basic', basic], ['io', io]].map(([name, result]) => [name, {
    bytes: result.wasmBytes, sha256: sha256(readFileSync(join(result.output, 'module.wasm'))),
  }])), passed: [] };
const server = createServer(async (req, res) => {
  const url = new URL(req.url, 'http://localhost');
  if (url.pathname === '/') { res.setHeader('content-type', 'text/html'); res.end('<!doctype html><title>Lasm browser acceptance</title>'); return; }
  if (url.pathname === '/binary') { res.end(Buffer.from([0, 255, 37])); return; }
  if (url.pathname === '/fail') { res.writeHead(503); res.end(); return; }
  if (url.pathname === '/redirect') { res.writeHead(302, { location: '/binary' }); res.end(); return; }
  if (url.pathname === '/large') { res.end(Buffer.alloc(65_537)); return; }
  if (url.pathname === '/slow') { const timer = setTimeout(() => res.end('late'), 1000); res.once('close', () => clearTimeout(timer)); return; }
  const match = url.pathname.match(/^\/(basic|io)\/(.+)$/);
  if (!match) { res.writeHead(404); res.end(); return; }
  const directory = match[1] === 'basic' ? basic.output : io.output;
  const path = resolve(directory, match[2]);
  if (!path.startsWith(directory + sep)) { res.writeHead(403); res.end(); return; }
  try {
    const bytes = await readFile(path);
    res.setHeader('content-type', extname(path) === '.wasm' ? 'application/wasm' : 'text/javascript');
    res.end(bytes);
  } catch { res.writeHead(404); res.end(); }
});
await new Promise((resolve, reject) => { server.once('error', reject); server.listen(0, '127.0.0.1', resolve); });
const url = `http://127.0.0.1:${server.address().port}`;
test.after(async () => {
  await browser?.close();
  await worker?.dispose();
  server.closeAllConnections();
  await new Promise(resolve => server.close(resolve));
  mkdirSync(join(root, '.work/evidence'), { recursive: true });
  writeFileSync(join(root, '.work/evidence/hosts.json'), JSON.stringify(report, null, 2) + '\n');
});

test('real Chrome runs native-sized integers, Unicode, closures, and actual IndexedDB/fetch IO', async () => {
  browser = await chromium.launch({ executablePath: process.env.LASM_CHROME ?? '/usr/bin/google-chrome', headless: true });
  report.chrome = browser.version();
  const page = await browser.newPage();
  await page.goto(url);
  const result = await page.evaluate(async () => {
    const { default: createBasic } = await import('/basic/browser.mjs');
    const { default: createIO } = await import('/io/browser.mjs');
    const { createWebHost, createIndexedDbStorage } = await import('/io/web-host.mjs');
    const basic = await createBasic();
    const value = 2n ** 128n + 5n;
    const square = basic.square(value).toString();
    const unicode = basic.unicode('日本語\0🙂');
    const closure = basic.closure(42n).toString();
    basic.dispose();
    const storage = await createIndexedDbStorage({ name: 'lasm-browser-acceptance' });
    const host = createWebHost({ storage, fetch: globalThis.fetch.bind(globalThis), maxBytes: 65_536, timeoutMs: 2000 });
    const api = await createIO({ host });
    const bytes = new Uint8Array([0, 255, 37]);
    await api.write('first', bytes);
    await api.write('second', new TextEncoder().encode('🙂'));
    const pair = [...await api.readPair('first', 'second')];
    const fetched = [...await api.fetch(location.origin + '/binary')];
    const errors = {};
    for (const path of ['/fail', '/redirect', '/large']) {
      try { await api.fetch(location.origin + path); errors[path] = 'unexpected success'; }
      catch (error) { errors[path] = error.name; }
    }
    try { await api.read('missing'); } catch (error) { errors.missing = error.name; }
    const controller = new AbortController();
    const pending = api.fetch(location.origin + '/slow', { signal: controller.signal }).catch(error => error.name);
    controller.abort();
    errors.cancelled = await pending;
    const denied = await createIO();
    try { await denied.read('first'); } catch (error) { errors.denied = error.name; }
    denied.dispose();
    api.dispose(); storage.close();
    // A new instance and a reopened database must retain bytes.
    const reopened = await createIndexedDbStorage({ name: 'lasm-browser-acceptance' });
    const next = await createIO({ host: createWebHost({ storage: reopened }) });
    const persisted = [...await next.read('first')];
    const initial = await next.wasInitializing();
    const after = await next.isInitializing();
    next.dispose(); reopened.close();
    return { square, unicode, closure, pair, fetched, errors, persisted, initial, after };
  });
  assert.equal(result.square, ((2n ** 128n + 5n) ** 2n).toString());
  assert.equal(result.unicode, '日本語\0🙂λ');
  assert.equal(result.closure, '126');
  assert.deepEqual(result.pair, [0, 255, 37, ...new TextEncoder().encode('🙂')]);
  assert.deepEqual(result.fetched, [0, 255, 37]);
  assert.deepEqual(result.persisted, [0, 255, 37]);
  assert.ok(Object.values(result.errors).every(value => value === 'LeanIOError'));
  assert.equal(Object.keys(result.errors).length, 6);
  assert.equal(result.initial, true); assert.equal(result.after, false);
  await page.close();
  report.passed.push('Chrome: integers, Unicode, closures, IndexedDB persistence, HTTP failures/limits/redirects, cancellation, disabled capabilities');
});

test('real workerd loads the compiled module and uses explicit KV and service bindings', async () => {
  const settings = serviceBindings => ({ ...convertV4MiniflareOptions({
    modulesRoot: root,
    modules: [
      { type: 'ESModule', path: join(root, 'examples/worker/worker.mjs') },
      ...['worker.mjs', 'browser.mjs', 'runtime.mjs', 'scheduler.mjs', 'wasi.mjs', 'web-host.mjs'].map(file => ({ type: 'ESModule', path: join(io.output, file) })),
      { type: 'CompiledWasm', path: join(io.output, 'module.wasm') },
    ],
    compatibilityDate: '2026-09-17', cf: false,
    kvNamespaces: ['DATA'],
    serviceBindings,
  }), telemetry: { enabled: false } });
  worker = new Miniflare(settings({ UPSTREAM: () => new Response(new Uint8Array([0, 255, 37])) }));
  await worker.ready;
  assert.deepEqual(await (await worker.dispatchFetch('https://worker.test/health')).json(), { ready: '42' });
  const bytes = new Uint8Array([0, 255, 37, ...new TextEncoder().encode('日本語🙂')]);
  assert.equal((await worker.dispatchFetch('https://worker.test/files/example', { method: 'PUT', body: bytes })).status, 204);
  assert.deepEqual(new Uint8Array(await (await worker.dispatchFetch('https://worker.test/files/example')).arrayBuffer()), bytes);
  assert.deepEqual(new Uint8Array(await (await worker.dispatchFetch('https://worker.test/remote')).arrayBuffer()), new Uint8Array([0, 255, 37]));
  const missing = await worker.dispatchFetch('https://worker.test/files/missing');
  assert.equal(missing.status, 502);
  assert.deepEqual(await missing.json(), { error: 'host_operation_failed' });
  assert.equal((await worker.dispatchFetch('https://worker.test/files/large', { method: 'PUT', body: new Uint8Array(65_537) })).status, 413);
  await worker.setOptions(settings({ UPSTREAM: () => new Response(null, { status: 302, headers: { location: 'https://elsewhere.invalid' } }) }));
  assert.equal((await worker.dispatchFetch('https://worker.test/remote')).status, 502);
  await worker.setOptions(settings({}));
  assert.equal((await worker.dispatchFetch('https://worker.test/remote')).status, 502);
  report.passed.push('workerd: static Wasm module, KV across requests, service binding, failures/redirects, request limits, disabled capabilities');
});
