#!/usr/bin/env node
// HTTP checks of a deployed fullstack template (no browser): the server-rendered
// page, the browser app and public/ files served by the same program (embedded
// with embed_dir!, or the platform's assets), the RPC endpoints, and
// persistence through Lasm.KV.
//
//   node scripts/fullstack/smoke.mjs --url URL --label NAME --out FILE
//        [--add TITLE] [--expect TITLE] [--no-persist] [--platform-assets]
//
// --add stores a todo; --expect checks a todo is listed (after a restart:
// the KV backend kept it); --no-persist (wasi-http: one instance per request,
// memory store) only checks that adding succeeds. --platform-assets (Workers:
// [assets] serves dist/public before the Worker, with its own cache headers)
// skips the immutable-caching check of the embedded files.
import { mkdirSync, writeFileSync } from 'node:fs';
import { dirname } from 'node:path';

const args = process.argv.slice(2);
const option = name => { const i = args.indexOf(name); return i >= 0 ? args[i + 1] : undefined; };
const base = option('--url'), label = option('--label') ?? 'smoke', out = option('--out');
const add = option('--add'), expected = option('--expect'), persist = !args.includes('--no-persist'), platformAssets = args.includes('--platform-assets');
if (!base) { console.error('usage: smoke.mjs --url URL [--label NAME] [--out FILE] [--add TITLE] [--expect TITLE] [--no-persist]'); process.exit(2); }
const results = { label, url: base, checks: {} };
let failed = false;
const expect = (name, ok, detail = '') => { results.checks[name] = ok; if (!ok) failed = true; console.log(`${ok ? 'ok  ' : 'FAIL'} ${label} ${name}${!ok && detail ? ` — ${detail}` : ''}`); };
const url = path => new URL(path, base);
const rpc = async (name, body) => {
  const response = await fetch(url(`/rpc/${name}`), { method: 'POST', headers: { 'content-type': 'application/json' }, body: JSON.stringify(body) });
  return { status: response.status, text: await response.text() };
};

const deadline = Date.now() + 120_000;
let html = '';
for (;;) {
  try { const r = await fetch(base); if (r.ok) { html = await r.text(); break; } } catch { /* not yet */ }
  if (Date.now() > deadline) break;
  await new Promise(r => setTimeout(r, 250));
}
try {
  expect('ssr', html.includes('<li') && html.includes('Write the server in Lean'), html.slice(0, 300));
  const script = /src="(\/client\/[^"]+\.js)"/.exec(html)?.[1];
  expect('page-links-client', !!script, html.slice(0, 600));
  const js = await fetch(url(script ?? '/client/app.js'));
  const jsText = await js.text();
  expect('client-js', js.ok && /javascript/.test(js.headers.get('content-type') ?? ''), `${js.status} ${js.headers.get('content-type')}`);
  // The loader names the hashed program (app.<hash>.js imports app.<hash>.wasm).
  const loader = /from ['"]\.\/(app\.[0-9a-f]+\.js)['"]/.exec(jsText)?.[1] ?? /(app\.[0-9a-f]+\.js)/.exec(jsText)?.[1];
  if (loader) {
    const hashed = await fetch(url(`/client/${loader}`));
    const hashedText = await hashed.text();
    expect('client-hashed-js', hashed.ok, String(hashed.status));
    if (!platformAssets) expect('client-hashed-immutable', /immutable/.test(hashed.headers.get('cache-control') ?? ''), hashed.headers.get('cache-control') ?? '(none)');
    const wasmName = /(app\.[0-9a-f]+\.wasm)/.exec(hashedText)?.[1];
    if (wasmName) {
      const wasm = await fetch(url(`/client/${wasmName}`));
      const bytes = new Uint8Array(await wasm.arrayBuffer());
      expect('client-wasm', wasm.ok && bytes[0] === 0 && bytes[1] === 0x61 && bytes[2] === 0x73 && bytes[3] === 0x6d, `${wasm.status} ${wasm.headers.get('content-type')} ${bytes.length}`);
      expect('client-wasm-type', (wasm.headers.get('content-type') ?? '').startsWith('application/wasm'), wasm.headers.get('content-type') ?? '');
    } else expect('client-wasm-named', false, hashedText.slice(0, 300));
  } else expect('client-loader-named', false, jsText.slice(0, 300));
  const css = await fetch(url('/client/style.css'));
  expect('public-file', css.ok && /text\/css/.test(css.headers.get('content-type') ?? ''), `${css.status} ${css.headers.get('content-type')}`);
  expect('not-found', (await fetch(url('/no/such/page'))).status === 404);
  expect('no-traversal', ![200].includes((await fetch(url('/client/%2e%2e/%2e%2e/package.json'))).status));
  const refused = await rpc('addTodo', { title: '   ' });
  expect('rpc-validates', refused.status === 400 && refused.text.includes('Write something first'), `${refused.status} ${refused.text}`);
  const list = await rpc('listTodos', null);
  expect('rpc-list', list.status === 200 && list.text.includes('"ok"'), `${list.status} ${list.text}`);
  if (add) {
    const added = await rpc('addTodo', { title: add });
    expect('rpc-add', added.status === 200 && added.text.includes(add), `${added.status} ${added.text}`);
    if (persist) {
      const after = await rpc('listTodos', null);
      expect('kv-across-requests', after.text.includes(add), after.text);
      const page = await (await fetch(base)).text();
      expect('ssr-from-kv', page.includes(add), page.slice(0, 400));
    }
  }
  if (expected) {
    const after = await rpc('listTodos', null);
    expect('kv-across-restart', after.text.includes(expected), after.text);
  }
} catch (error) {
  expect('no-exception', false, String(error?.stack ?? error));
}
if (out) { mkdirSync(dirname(out), { recursive: true }); writeFileSync(out, JSON.stringify(results, null, 2) + '\n'); }
process.exit(failed ? 1 : 0);
