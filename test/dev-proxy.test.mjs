import assert from 'node:assert/strict';
import { test } from 'node:test';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { createServer, request as httpRequest } from 'node:http';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { affects, freePort, importClosure, startDevProxy, waitForPort } from '../src/dev-proxy.mjs';

test('importClosure follows project imports only; affects picks the outputs to rebuild', () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-proxy-'));
  try {
    mkdirSync(join(project, 'App'));
    writeFileSync(join(project, 'Shared.lean'), 'import Lean.Data.Json\n\ndef x := 1\n');
    writeFileSync(join(project, 'View.lean'), '/- a comment\nimport Nope -/\nimport Shared\nimport Lasm.UI\n\ndef v := 2\nimport NotAHeader\n');
    writeFileSync(join(project, 'App/Util.lean'), 'module\n\npublic import Shared\n');
    writeFileSync(join(project, 'Server.lean'), 'import Lasm.Fetch\nimport View\n');
    writeFileSync(join(project, 'Client.lean'), '-- the browser app\nimport View App.Util\n');
    writeFileSync(join(project, 'Tool.lean'), 'def main : IO Unit := pure ()\n');
    const names = entry => [...importClosure(project, join(project, entry))].map(f => f.slice(project.length + 1)).sort();
    assert.deepEqual(names('Server.lean'), ['Server.lean', 'Shared.lean', 'View.lean']);
    assert.deepEqual(names('Client.lean'), ['App/Util.lean', 'Client.lean', 'Shared.lean', 'View.lean']);
    const at = file => join(project, file);
    assert.equal(affects(project, at('Server.lean'), [at('Client.lean')]), false);
    assert.equal(affects(project, at('Client.lean'), [at('Client.lean')]), true);
    assert.equal(affects(project, at('Server.lean'), [at('Shared.lean')]), true);
    assert.equal(affects(project, at('Server.lean'), [at('App/Util.lean')]), false);
    assert.equal(affects(project, at('Server.lean'), [at('Tool.lean')]), false);
    assert.equal(affects(project, at('Server.lean'), [at('lakefile.toml')]), true);
    assert.equal(affects(project, at('Server.lean'), [at('public/style.css')]), true);
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('the dev proxy forwards to the server, injects live reload into HTML and pushes reloads', async () => {
  const upstreamPort = await freePort();
  const upstream = createServer((req, res) => {
    if (req.url === '/') res.writeHead(200, { 'content-type': 'text/html; charset=utf-8' }).end('<!doctype html><body><p>hi</p></body>');
    else if (req.url === '/echo') { let b = ''; req.on('data', c => b += c); req.on('end', () => res.writeHead(201, { 'content-type': 'application/json' }).end(JSON.stringify({ method: req.method, body: b }))); }
    else res.writeHead(404).end('no');
  });
  await new Promise(r => upstream.listen(upstreamPort, '127.0.0.1', r));
  const proxy = await startDevProxy({ port: 0, upstreamPort });
  try {
    const html = await (await fetch(proxy.url)).text();
    assert.match(html, /<p>hi<\/p><script type="module">[\s\S]*\/__lasm\/events[\s\S]*<\/script>\n<\/body>/);
    const echo = await fetch(new URL('/echo', proxy.url), { method: 'POST', body: 'payload' });
    assert.equal(echo.status, 201);
    assert.deepEqual(await echo.json(), { method: 'POST', body: 'payload' });
    assert.equal((await fetch(new URL('/missing', proxy.url))).status, 404);
    const controller = new AbortController();
    const events = await fetch(new URL('/__lasm/events', proxy.url), { signal: controller.signal });
    const reader = events.body.getReader();
    await reader.read();
    proxy.reload();
    const { value } = await reader.read();
    assert.match(new TextDecoder().decode(value), /event: reload/);
    controller.abort();
  } finally {
    await proxy.close();
    await new Promise(r => upstream.close(r));
  }
});

/** A raw request through the proxy: { status, headers, body }. */
function raw(port, path, { method = 'GET', headers = {}, body } = {}) {
  return new Promise((resolve, reject) => {
    const req = httpRequest({ host: '127.0.0.1', port, path, method, headers }, response => {
      const chunks = [];
      response.on('data', chunk => chunks.push(chunk));
      response.on('end', () => resolve({ status: response.statusCode, headers: response.headers, body: Buffer.concat(chunks).toString() }));
    });
    req.on('error', reject);
    req.end(body);
  });
}

test('the dev proxy: headers sent upstream, pages rewritten (and not for HEAD), other replies passed through', async () => {
  const upstreamPort = await freePort();
  const seen = [];
  const upstream = createServer((req, res) => {
    seen.push({ url: req.url, method: req.method, host: req.headers.host, encoding: req.headers['accept-encoding'], custom: req.headers['x-custom'] });
    if (req.url.startsWith('/page')) res.writeHead(200, { 'content-type': 'text/html', 'content-length': '14', 'cache-control': 'max-age=60', 'x-up': 'yes' }).end('<p>no body</p>');
    else if (req.url === '/text') res.writeHead(200, { 'content-type': 'text/plain', 'cache-control': 'max-age=60' }).end('</body> stays');
    else if (req.url === '/htmlish') res.writeHead(200, { 'content-type': 'application/xhtml+xml; note=text/html' }).end('<x></body>');
    else res.writeHead(204).end();
  });
  await new Promise(r => upstream.listen(upstreamPort, '127.0.0.1', r));
  const proxy = await startDevProxy({ port: 0, upstreamPort });
  try {
    assert.equal(proxy.url, `http://127.0.0.1:${proxy.port}/`);
    const page = await raw(proxy.port, '/page?x=1', { headers: { 'accept-encoding': 'gzip, br', 'x-custom': 'kept' } });
    assert.equal(page.status, 200);
    assert.match(page.body, /^<p>no body<\/p><script type="module">\n\/\/ Injected by lasm dev[\s\S]*<\/script>$/, 'appended when the page has no </body>');
    assert.equal(page.headers['cache-control'], 'no-store');
    assert.equal(page.headers['x-up'], 'yes');
    assert.notEqual(page.headers['content-length'], '14');
    assert.deepEqual(seen.at(-1), { url: '/page?x=1', method: 'GET', host: `127.0.0.1:${upstreamPort}`, encoding: undefined, custom: 'kept' });
    const head = await raw(proxy.port, '/page', { method: 'HEAD' });
    assert.equal(head.status, 200);
    assert.equal(head.body, '');
    assert.equal(head.headers['cache-control'], 'max-age=60', 'HEAD replies pass through untouched');
    const text = await raw(proxy.port, '/text');
    assert.equal(text.body, '</body> stays');
    assert.equal(text.headers['cache-control'], 'max-age=60');
    assert.equal((await raw(proxy.port, '/htmlish')).body, '<x></body>', 'only text/html is rewritten');
    assert.equal((await raw(proxy.port, '/empty', { method: 'DELETE' })).status, 204);
    assert.equal(seen.at(-1).method, 'DELETE');
  } finally {
    await proxy.close();
    await new Promise(r => upstream.close(r));
  }
});

test('the dev proxy waits for a (re)starting server; error reports and close reach the page', async () => {
  const upstreamPort = await freePort();
  const proxy = await startDevProxy({ port: 0, upstreamPort });
  const upstream = createServer((req, res) => { let b = ''; req.on('data', c => b += c); req.on('end', () => res.writeHead(200, { 'content-type': 'text/plain' }).end('late ' + b)); });
  try {
    const pending = raw(proxy.port, '/x', { method: 'POST', body: 'body kept' });
    await new Promise(r => setTimeout(r, 350));
    await new Promise(r => upstream.listen(upstreamPort, '127.0.0.1', r));
    const answer = await pending;
    assert.equal(answer.status, 200);
    assert.equal(answer.body, 'late body kept', 'the request body is sent again once the server is up');
    const events = await fetch(new URL('/__lasm/events', proxy.url));
    assert.equal(events.headers.get('content-type'), 'text/event-stream');
    assert.equal(events.headers.get('cache-control'), 'no-cache');
    const reader = events.body.getReader();
    const decoder = new TextDecoder();
    assert.equal(decoder.decode((await reader.read()).value), ': lasm dev\n\n');
    proxy.report('Server.lean:1:2: error');
    assert.equal(decoder.decode((await reader.read()).value), 'event: error-report\ndata: "Server.lean:1:2: error"\n\n');
    proxy.reload();
    assert.match(decoder.decode((await reader.read()).value), /^event: reload\ndata: \d+\n\n$/);
    await proxy.close();
    assert.equal((await reader.read()).done, true, 'close ends the event streams');
  } finally {
    await new Promise(r => upstream.close(r));
  }
});

test('the dev proxy shows localhost for a wildcard host and explains a busy port', async () => {
  const upstreamPort = await freePort();
  const proxy = await startDevProxy({ port: 0, host: '0.0.0.0', upstreamPort });
  try {
    assert.equal(proxy.url, `http://localhost:${proxy.port}/`);
    await assert.rejects(startDevProxy({ port: proxy.port, host: '0.0.0.0', upstreamPort }), /already in use\. Stop the program that uses it/);
  } finally { await proxy.close(); }
});

test('freePort and waitForPort', async () => {
  const port = await freePort();
  assert.ok(Number.isInteger(port) && port > 0 && port < 65536);
  const started = Date.now();
  assert.equal(await waitForPort(port, 200), false);
  assert.ok(Date.now() - started >= 150, 'it keeps trying until the deadline');
  const server = createServer((req, res) => res.end());
  setTimeout(() => server.listen(port, '127.0.0.1'), 120);
  try { assert.equal(await waitForPort(port, 3000), true); }
  finally { await new Promise(r => server.close(r)); }
});

test('importClosure: import modifiers, header end, missing and unreadable files', () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-proxy-'));
  try {
    mkdirSync(join(project, 'A'));
    writeFileSync(join(project, 'Main.lean'), 'prelude\n-- comment\n\nprivate meta import A.B\npublic meta import C\nimport Missing D 1bad\nimport E\ntheorem t : True := trivial\nimport F\n');
    writeFileSync(join(project, 'A/B.lean'), 'import Main\n');
    writeFileSync(join(project, 'C.lean'), '');
    writeFileSync(join(project, 'D.lean'), 'def d := 1\n');
    writeFileSync(join(project, 'E.lean'), 'importx G\n');
    writeFileSync(join(project, 'F.lean'), '');
    writeFileSync(join(project, 'G.lean'), '');
    mkdirSync(join(project, 'H.lean'));
    writeFileSync(join(project, 'Dir.lean'), 'import H\n');
    const names = entry => [...importClosure(project, join(project, entry))].map(f => f.slice(project.length + 1)).sort();
    assert.deepEqual(names('Main.lean'), ['A/B.lean', 'C.lean', 'D.lean', 'E.lean', 'Main.lean']);
    // A directory named like a module is in the closure but has no imports to read.
    assert.deepEqual(names('Dir.lean'), ['Dir.lean', 'H.lean']);
    assert.deepEqual(names('Nope.lean'), []);
    const at = file => join(project, file);
    assert.equal(affects(project, at('Main.lean'), [at('F.lean')]), false);
    assert.equal(affects(project, at('Main.lean'), [at('F.lean'), at('C.lean')]), true);
    assert.equal(affects(project, at('Main.lean'), [join(tmpdir(), 'elsewhere', 'X.lean')]), true, 'a Lean file outside the project (a dependency) rebuilds');
    assert.equal(affects(project, at('Main.lean'), [project + '-sibling/X.lean']), true);
    assert.equal(affects(project, at('Main.lean'), []), false);
  } finally { rmSync(project, { recursive: true, force: true }); }
});

test('the dev proxy: content-encoding of a rewritten page is dropped; its event stream is kept alive; an IPv6 wildcard shows localhost', async () => {
  const upstreamPort = await freePort();
  const upstream = createServer((req, res) => res.writeHead(200, { 'content-type': 'text/html', 'content-encoding': 'identity' }).end('<body></body>'));
  await new Promise(r => upstream.listen(upstreamPort, '127.0.0.1', r));
  const proxy = await startDevProxy({ port: 0, upstreamPort });
  try {
    const page = await raw(proxy.port, '/');
    assert.equal(page.headers['content-encoding'], undefined);
    assert.match(page.body, /<script type="module">/);
    const headers = await new Promise(resolve => {
      const req = httpRequest({ host: '127.0.0.1', port: proxy.port, path: '/__lasm/events' }, response => { resolve(response.headers); req.destroy(); });
      req.on('error', () => {}).end();
    });
    assert.equal(headers.connection, 'keep-alive');
  } finally { await proxy.close(); await new Promise(r => upstream.close(r)); }
  let wildcard;
  try { wildcard = await startDevProxy({ port: 0, host: '::', upstreamPort }); } catch { return; }  // no IPv6 here
  try { assert.equal(wildcard.url, `http://localhost:${wildcard.port}/`); } finally { await wildcard.close(); }
});

test('importClosure: indented imports, doubled spaces, a "module" word later in a line, names that are not modules', () => {
  const project = mkdtempSync(join(tmpdir(), 'lasm-dev-proxy-'));
  try {
    writeFileSync(join(project, 'Main.lean'), '  import   A\npublic  meta  import  B\nimport 1bad D-x\ndef module := 1\nimport C\n');
    for (const name of ['A', 'B', 'C', '1bad', 'D', 'D-x']) writeFileSync(join(project, name + '.lean'), '');
    const names = [...importClosure(project, join(project, 'Main.lean'))].map(f => f.slice(project.length + 1)).sort();
    assert.deepEqual(names, ['A.lean', 'B.lean', 'Main.lean']);
  } finally { rmSync(project, { recursive: true, force: true }); }
});
