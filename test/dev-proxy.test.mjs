import assert from 'node:assert/strict';
import { test } from 'node:test';
import { mkdtempSync, mkdirSync, writeFileSync, rmSync } from 'node:fs';
import { createServer } from 'node:http';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { affects, freePort, importClosure, startDevProxy } from '../src/dev-proxy.mjs';

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
