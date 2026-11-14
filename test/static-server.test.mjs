// The static file server of browser builds and lasm dev (src/browser/static-server.mjs):
// what a page, a script, the Wasm and their precompressed copies are served
// with, which paths are refused, the fallback page, live reload and listen errors.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { mkdtempSync, mkdirSync, rmSync, writeFileSync } from 'node:fs';
import { request } from 'node:http';
import { createServer } from 'node:net';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { brotliCompressSync, gzipSync } from 'node:zlib';
import { hashedFile, listenError, mimeTypes, startStaticServer } from '../src/browser/static-server.mjs';
import { forAll } from './helpers/property.mjs';

/** A raw request (the path is sent exactly as given): { status, headers, body }. */
function raw(server, path, { method = 'GET', headers = {} } = {}) {
  return new Promise((resolve, reject) => {
    request({ host: '127.0.0.1', port: server.port, path, method, headers }, response => {
      const chunks = [];
      response.on('data', chunk => chunks.push(chunk));
      response.on('end', () => resolve({ status: response.statusCode, headers: response.headers, body: Buffer.concat(chunks) }));
    }).on('error', reject).end();
  });
}

function site() {
  const parent = mkdtempSync(join(tmpdir(), 'lasm-static-'));
  const root = join(parent, 'dist');
  mkdirSync(join(root, 'nested'), { recursive: true });
  mkdirSync(join(parent, 'dist-secret'));
  writeFileSync(join(parent, 'secret.txt'), 'outside the root');
  writeFileSync(join(parent, 'dist-secret', 'key.txt'), 'outside too');
  writeFileSync(join(root, 'index.html'), '<!doctype html><body><p>home</p></body>');
  writeFileSync(join(root, 'nested', 'index.html'), '<p>nested page</p>');
  writeFileSync(join(root, 'style.css'), 'p { color: red }');
  writeFileSync(join(root, 'data.bin'), Buffer.from([1, 2, 3]));
  writeFileSync(join(root, 'photo.png'), Buffer.from([137, 80, 78, 71]));
  const js = 'export const x = 1;\n';
  writeFileSync(join(root, 'app.0123456789ab.js'), js);
  writeFileSync(join(root, 'app.0123456789ab.js.br'), brotliCompressSync(js));
  writeFileSync(join(root, 'app.0123456789ab.js.gz'), gzipSync(js));
  writeFileSync(join(root, 'app.js'), js);
  writeFileSync(join(root, 'app.js.gz'), gzipSync(js));
  // A .png is not compressible: its .gz copy is never served.
  writeFileSync(join(root, 'photo.png.gz'), gzipSync(Buffer.from([137, 80, 78, 71])));
  return { parent, root, js };
}

test('static server: content types, caching, precompressed copies and HEAD', async () => {
  const { parent, root, js } = site();
  const logged = [];
  const server = await startStaticServer(root, { log: line => logged.push(line) });
  try {
    assert.equal(server.url, `http://127.0.0.1:${server.port}/`);
    const home = await raw(server, '/');
    assert.equal(home.status, 200);
    assert.equal(home.headers['content-type'], 'text/html; charset=utf-8');
    assert.equal(home.headers['cache-control'], 'no-cache');
    assert.equal(home.headers['x-content-type-options'], 'nosniff');
    assert.equal(home.headers.vary, 'accept-encoding');
    assert.equal(home.body.toString(), '<!doctype html><body><p>home</p></body>', 'no live reload unless asked');
    assert.equal(home.headers['content-length'], String(home.body.length));

    const css = await raw(server, '/style.css');
    assert.equal(css.headers['content-type'], 'text/css; charset=utf-8');
    assert.equal((await raw(server, '/data.bin')).headers['content-type'], 'application/octet-stream');

    // Content-hashed files are immutable; brotli is preferred over gzip; the client must accept the encoding.
    const both = await raw(server, '/app.0123456789ab.js', { headers: { 'accept-encoding': 'gzip, deflate, br' } });
    assert.equal(both.headers['content-encoding'], 'br');
    assert.equal(both.headers['cache-control'], 'public, max-age=31536000, immutable');
    assert.equal(both.headers['content-type'], 'text/javascript; charset=utf-8');
    assert.deepEqual(both.body, brotliCompressSync(js));
    const gz = await raw(server, '/app.0123456789ab.js', { headers: { 'accept-encoding': 'gzip' } });
    assert.equal(gz.headers['content-encoding'], 'gzip');
    assert.equal(Number(gz.headers['content-length']), gzipSync(js).length);
    const plain = await raw(server, '/app.0123456789ab.js');
    assert.equal(plain.headers['content-encoding'], undefined);
    assert.equal(plain.body.toString(), js);
    // "brotli" is not "br", "xgzip" is not "gzip": whole tokens only.
    assert.equal((await raw(server, '/app.0123456789ab.js', { headers: { 'accept-encoding': 'brotli, xgzip' } })).headers['content-encoding'], undefined);
    // A stable name gets no-cache; a missing .br falls through to the .gz.
    const stable = await raw(server, '/app.js', { headers: { 'accept-encoding': 'br, gzip' } });
    assert.equal(stable.headers['content-encoding'], 'gzip');
    assert.equal(stable.headers['cache-control'], 'no-cache');
    assert.equal((await raw(server, '/photo.png', { headers: { 'accept-encoding': 'gzip' } })).headers['content-encoding'], undefined);

    const head = await raw(server, '/app.0123456789ab.js', { method: 'HEAD', headers: { 'accept-encoding': 'br' } });
    assert.equal(head.status, 200);
    assert.equal(head.body.length, 0);
    assert.equal(Number(head.headers['content-length']), brotliCompressSync(js).length);

    const post = await raw(server, '/', { method: 'POST' });
    assert.equal(post.status, 405);
    assert.equal(post.headers.allow, 'GET, HEAD');

    assert.deepEqual(logged, ['GET /', 'GET /style.css', 'GET /data.bin', 'GET /app.0123456789ab.js br', 'GET /app.0123456789ab.js gzip',
      'GET /app.0123456789ab.js', 'GET /app.0123456789ab.js', 'GET /app.js gzip', 'GET /photo.png']);
  } finally { await server.close(); rmSync(parent, { recursive: true, force: true }); }
});

test('static server: paths outside the root are refused; directories, fallback and 404', async () => {
  const { parent, root } = site();
  const server = await startStaticServer(root);
  try {
    for (const path of ['/..%2fsecret.txt', '/%2e%2e%2fsecret.txt', '/nested/..%2f..%2fsecret.txt', '/..%2fdist-secret/key.txt', '/..%5csecret.txt'.replace('%5c', '%2f')]) {
      const answer = await raw(server, path);
      assert.equal(answer.status, 403, path);
      assert.doesNotMatch(answer.body.toString(), /outside/, path);
    }
    // A path that resolves to the root itself is not outside it: the page is served.
    const self = await raw(server, '/nested%2f..');
    assert.equal(self.status, 200);
    assert.match(self.body.toString(), /home/);
    assert.match((await raw(server, '/nested/')).body.toString(), /nested page/);
    // Client-side routes (no extension) get the page; missing files with an extension are 404.
    const route = await raw(server, '/users/42');
    assert.equal(route.status, 200);
    assert.equal(route.headers['content-type'], 'text/html; charset=utf-8');
    assert.match(route.body.toString(), /home/);
    const missing = await raw(server, '/missing.js');
    assert.equal(missing.status, 404);
    assert.equal(missing.headers['content-type'], 'text/plain; charset=utf-8');
    assert.equal(missing.body.toString(), 'Not found\n');
    // A directory without index.html and no extension: the fallback page.
    assert.match((await raw(server, '/nested')).body.toString(), /home/);
    // A malformed escape is the client's error, not a crash.
    const bad = await raw(server, '/%E0%A4%A');
    assert.equal(bad.status, 400);
    assert.equal(bad.headers['content-type'], 'text/plain; charset=utf-8');
    assert.match(bad.body.toString(), /not valid percent-encoded/);
  } finally { await server.close(); }
  // Without a fallback, unknown routes are 404.
  const strict = await startStaticServer(root, { fallback: null });
  try { assert.equal((await raw(strict, '/users/42')).status, 404); }
  finally { await strict.close(); }
  // A fallback page that does not exist: 404.
  rmSync(join(root, 'index.html'));
  const empty = await startStaticServer(root);
  try {
    assert.equal((await raw(empty, '/users/42')).status, 404);
    assert.equal((await raw(empty, '/')).status, 404);
  } finally { await empty.close(); rmSync(parent, { recursive: true, force: true }); }
});

// Proposition: Lasm.Cli.Candidates.static_inside_root
//   ∀ root path : String,
//     (staticServe root path).1 ∈ [200, 400, 403, 404] ∧
//     ∀ f, (staticServe root path).2 = some f → f.startsWith (root ++ "/")
test('static server: no request path reaches a file outside the root', async () => {
  const { parent, root } = site();
  const server = await startStaticServer(root, { fallback: null });
  try {
    const paths = [];
    forAll(gen => '/' + gen.array(gen.int(1, 5), () => gen.pick(['..', '%2e%2e', '.', 'nested', 'secret.txt', 'dist-secret', 'key.txt', 'dist', 'index.html', '%', '%zz', '%e2%82'])).join(gen.pick(['/', '%2f', '%2F'])), path => { paths.push(path); }, { runs: 150 });
    for (const path of paths) {
      const answer = await raw(server, path);
      assert.doesNotMatch(answer.body.toString(), /outside/, path);
      assert.ok([200, 400, 403, 404].includes(answer.status), `${path}: ${answer.status}`);
    }
  } finally { await server.close(); rmSync(parent, { recursive: true, force: true }); }
});

test('static server: a path whose percent-encoding is malformed is a bad request', async () => {
  const { parent, root } = site();
  const server = await startStaticServer(root, { fallback: null });
  try {
    for (const path of ['/%', '/%zz', '/a%2', '/%e2%82', '/nested/%c0']) {
      const answer = await raw(server, path);
      assert.equal(answer.status, 400, path);
      assert.equal(answer.body.toString(), 'Bad request: the path is not valid percent-encoded UTF-8\n', path);
    }
  } finally { await server.close(); rmSync(parent, { recursive: true, force: true }); }
});

test('static server: live reload is injected into pages and pushed to them; routes and headers', async () => {
  const { parent, root } = site();
  const seen = [];
  const server = await startStaticServer(root, {
    liveReload: true, headers: { 'cross-origin-opener-policy': 'same-origin' },
    routes(request, response, url) {
      seen.push(url.pathname);
      if (url.pathname === '/api/ping') { response.writeHead(200, { 'content-type': 'text/plain' }).end('pong'); return true; }
      if (url.pathname === '/api/throw') throw new Error('route failed');
      return false;
    },
  });
  try {
    const home = await raw(server, '/');
    assert.equal(home.headers['cache-control'], 'no-store');
    assert.equal(home.headers['cross-origin-opener-policy'], 'same-origin');
    assert.match(home.body.toString(), /^<!doctype html><body><p>home<\/p><script type="module">\n\/\/ Injected by lasm dev[\s\S]*new EventSource\('\/__lasm\/events'\)[\s\S]*<\/script>\n<\/body>$/);
    // A page without </body>: the client is appended.
    const nested = (await raw(server, '/nested/')).body.toString();
    assert.match(nested, /^<p>nested page<\/p><script type="module">[\s\S]*<\/script>$/);
    const head = await raw(server, '/', { method: 'HEAD' });
    assert.equal(head.status, 200);
    assert.equal(head.body.length, 0);
    assert.equal(head.headers['cache-control'], 'no-store');
    // Non-HTML files are not touched.
    assert.equal((await raw(server, '/style.css')).body.toString(), 'p { color: red }');
    assert.equal((await raw(server, '/style.css')).headers['cross-origin-opener-policy'], 'same-origin');
    assert.equal((await raw(server, '/api/ping')).body.toString(), 'pong');
    const thrown = await raw(server, '/api/throw');
    assert.equal(thrown.status, 500);
    assert.equal(thrown.body.toString(), 'route failed');
    assert.ok(seen.includes('/api/ping') && seen.includes('/'));

    const controller = new AbortController();
    const events = await fetch(new URL('/__lasm/events', server.url), { signal: controller.signal });
    assert.equal(events.headers.get('content-type'), 'text/event-stream');
    assert.equal(events.headers.get('cache-control'), 'no-cache');
    const reader = events.body.getReader();
    const decoder = new TextDecoder();
    assert.equal(decoder.decode((await reader.read()).value), ': lasm dev\n\n');
    server.report('Main.lean:3:4: error: unknown identifier');
    assert.equal(decoder.decode((await reader.read()).value), 'event: error-report\ndata: "Main.lean:3:4: error: unknown identifier"\n\n');
    server.reload();
    assert.match(decoder.decode((await reader.read()).value), /^event: reload\ndata: \d+\n\n$/);
    controller.abort();
  } finally { await server.close(); }
  // Without live reload, /__lasm/events is an ordinary path.
  const plain = await startStaticServer(root, { fallback: null });
  try { assert.equal((await raw(plain, '/__lasm/events')).status, 404); }
  finally { await plain.close(); rmSync(parent, { recursive: true, force: true }); }
});

test('static server: close ends open event streams', async () => {
  const { parent, root } = site();
  const server = await startStaticServer(root, { liveReload: true });
  const events = await fetch(new URL('/__lasm/events', server.url));
  const reader = events.body.getReader();
  await reader.read();
  await server.close();
  assert.equal((await reader.read()).done, true);
  rmSync(parent, { recursive: true, force: true });
});

test('static server: the URL it shows for each host', async () => {
  const { parent, root } = site();
  for (const [host, shown] of [['0.0.0.0', 'localhost'], ['::', 'localhost'], ['::1', '[::1]'], ['localhost', 'localhost']]) {
    let server;
    try { server = await startStaticServer(root, { host }); }
    catch (error) { if (/EADDRNOTAVAIL|EAFNOSUPPORT|has no address/.test(error.message)) continue; throw error; }
    try { assert.equal(server.url, `http://${shown}:${server.port}/`); }
    finally { await server.close(); }
  }
  rmSync(parent, { recursive: true, force: true });
});

test('listen errors name what to do', async () => {
  const busy = createServer();
  await new Promise(resolve => busy.listen(0, '127.0.0.1', resolve));
  const { port } = busy.address();
  try {
    await assert.rejects(startStaticServer(tmpdir(), { port }), error => {
      assert.equal(error.message, `Port ${port} on 127.0.0.1 is already in use. Stop the program that uses it, or choose another port with --port.`);
      assert.equal(error.code, 'EADDRINUSE');
      assert.equal(error.lasmInternal, false);
      return true;
    });
  } finally { await new Promise(resolve => busy.close(resolve)); }
  assert.equal(listenError({ code: 'EACCES' }, 80, '::1').message, 'Not allowed to listen on [::1]:80 (ports below 1024 need extra privileges). Choose another port with --port.');
  assert.equal(listenError({ code: 'EACCES' }, 80, '127.0.0.1').message, 'Not allowed to listen on 127.0.0.1:80 (ports below 1024 need extra privileges). Choose another port with --port.');
  assert.equal(listenError({ code: 'EADDRNOTAVAIL' }, 5173, '10.9.9.9').message, 'Cannot listen on 10.9.9.9:5173: this machine has no address 10.9.9.9. Choose another with --host (for example 127.0.0.1).');
  const other = Object.assign(new Error('boom'), { code: 'EPERM' });
  assert.equal(listenError(other, 1, 'h'), other);
  assert.equal(listenError(undefined, 1, 'h'), undefined);
});

test('MIME types and hashed names', () => {
  assert.equal(mimeTypes['.wasm'], 'application/wasm');
  assert.equal(mimeTypes['.mjs'], 'text/javascript; charset=utf-8');
  assert.equal(mimeTypes['.svg'], 'image/svg+xml');
  assert.ok(Object.isFrozen(mimeTypes));
  assert.equal(hashedFile.test('app.0123456789ab.js'), true);
  assert.equal(hashedFile.test('app.0123456789ab.wasm'), true);
  assert.equal(hashedFile.test('app.0123456789a.js'), false);
  assert.equal(hashedFile.test('app.0123456789AB.js'), false);
  assert.equal(hashedFile.test('app.0123456789ab.js.br'), false);
  assert.equal(hashedFile.test('app.0123456789ab.css'), false);
});

test('static server: every content type, which types are served precompressed, files without an extension, odd errors', async () => {
  assert.deepEqual({ ...mimeTypes }, {
    '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8',
    '.css': 'text/css; charset=utf-8', '.json': 'application/json; charset=utf-8', '.wasm': 'application/wasm',
    '.svg': 'image/svg+xml', '.png': 'image/png', '.jpg': 'image/jpeg', '.jpeg': 'image/jpeg', '.gif': 'image/gif', '.webp': 'image/webp',
    '.avif': 'image/avif', '.ico': 'image/x-icon', '.txt': 'text/plain; charset=utf-8', '.map': 'application/json; charset=utf-8',
    '.woff': 'font/woff', '.woff2': 'font/woff2', '.webmanifest': 'application/manifest+json', '.xml': 'application/xml',
  });
  const root = mkdtempSync(join(tmpdir(), 'lasm-static-types-'));
  const compressible = ['.html', '.js', '.mjs', '.css', '.json', '.wasm', '.svg', '.txt', '.map', '.xml', '.webmanifest'];
  for (const extension of Object.keys(mimeTypes)) {
    writeFileSync(join(root, 'f' + extension), 'plain');
    writeFileSync(join(root, 'f' + extension + '.gz'), gzipSync('plain'));
  }
  writeFileSync(join(root, 'index.html'), 'page');
  writeFileSync(join(root, 'LICENSE'), 'licence text');
  const server = await startStaticServer(root, {
    routes(request, response, url) { if (url.pathname === '/null') throw null; return false; },
  });
  try {
    for (const extension of Object.keys(mimeTypes)) {
      const answer = await raw(server, '/f' + extension, { headers: { 'accept-encoding': 'gzip' } });
      assert.equal(answer.headers['content-type'], mimeTypes[extension], extension);
      assert.equal(answer.headers['content-encoding'], compressible.includes(extension) ? 'gzip' : undefined, extension);
    }
    // An existing file without an extension is served as itself, not as the page.
    const licence = await raw(server, '/LICENSE');
    assert.equal(licence.body.toString(), 'licence text');
    assert.equal(licence.headers['content-type'], 'application/octet-stream');
    const thrown = await raw(server, '/null');
    assert.equal(thrown.status, 500);
    assert.equal(thrown.body.toString(), 'null');
  } finally { await server.close(); rmSync(root, { recursive: true, force: true }); }
  // The event stream is kept alive.
  const live = await startStaticServer(tmpdir(), { liveReload: true });
  try {
    const headers = await new Promise((resolve, reject) => {
      const req = request({ host: '127.0.0.1', port: live.port, path: '/__lasm/events' }, response => { resolve(response.headers); req.destroy(); });
      req.on('error', () => {}).end();
    });
    assert.equal(headers.connection, 'keep-alive');
  } finally { await live.close(); }
});
