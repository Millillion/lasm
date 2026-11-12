// The site server (ServerEdge.lean) on an edge platform's local tooling
// (test/platforms.mjs): the example site is put in the platform's store, and
// every page the server answers must be byte for byte the page `folio build`
// writes for the same files (the Node build, dist/cli, `npm run build`).
// Then a changed site (a new page, an edited page, a page made a draft, a
// new layout) is put in a new store and checked the same way, so the pages
// come from the store; then, with --spec, the CommonMark specification's
// 652 examples run on the server (test/spec.mjs over POST /api/render), and
// with --pathological, CommonMark's pathological inputs and the deep nesting
// of issue #231 (test/pathological.mjs over POST /api/render).
//
//   node test/edge.mjs --platform fastly|workers|deno-deploy [--spec] [--pathological] [--port N]
import { spawnSync } from 'node:child_process';
import { cpSync, mkdirSync, mkdtempSync, readdirSync, readFileSync, rmSync, statSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { platforms, removeRunDirectory, runDirectory, seed, startServer } from './platforms.mjs';

const root = fileURLToPath(new URL('..', import.meta.url));
const option = name => process.argv.includes(name) ? process.argv[process.argv.indexOf(name) + 1] : null;
const name = option('--platform');
if (!platforms[name]) { console.error(`usage: node test/edge.mjs --platform ${Object.keys(platforms).join('|')} [--spec] [--pathological]`); process.exit(2); }
const port = Number(option('--port') ?? 8788);
const base = `http://127.0.0.1:${port}`;

let failed = 0;
const check = (ok, what) => { if (!ok) failed++; console.log(`${ok ? 'ok  ' : 'FAIL'} ${name}: ${what}`); };

/** The files `folio build` writes for the site in `site`. */
function reference(site) {
  const out = mkdtempSync(join(tmpdir(), 'folio-reference-'));
  try {
    const r = spawnSync(process.execPath, [join(root, 'dist', 'cli', 'main.mjs'), 'build', site, out], { encoding: 'utf8' });
    if (r.status !== 0) throw new Error(`folio build failed: ${r.stdout}${r.stderr}`);
    const files = {};
    const walk = d => {
      for (const f of readdirSync(d).sort()) {
        const p = join(d, f);
        if (statSync(p).isDirectory()) walk(p); else files[relative(out, p).split('\\').join('/')] = readFileSync(p, 'utf8');
      }
    };
    walk(out);
    return files;
  } finally {
    rmSync(out, { recursive: true, force: true });
  }
}

/** Waits until the server answers (wrangler and Viceroy take a while to start). */
async function ready(server) {
  const deadline = Date.now() + 180_000;
  while (Date.now() < deadline) {
    if (server.child.exitCode !== null) throw new Error(`the server exited (${server.child.exitCode})`);
    try {
      const r = await fetch(base + '/', { signal: AbortSignal.timeout(10_000) });
      await r.arrayBuffer();
      return;
    } catch {}
    await new Promise(r => setTimeout(r, 500));
  }
  throw new Error('the server did not answer within 3 minutes');
}

const get = (path, init = {}) => fetch(base + path, { redirect: 'manual', ...init });

/** Serves the site in `site` from a new store; checks every page against `folio build`'s. Returns the server. */
async function phase(label, site, extra) {
  const data = runDirectory(name);
  cpSync(site, join(data, 'site'), { recursive: true });
  seed(name, data);
  const server = startServer(name, port, data);
  try {
    await ready(server);
    const expected = reference(site);
    for (const [path, text] of Object.entries(expected)) {
      const url = '/' + path.replace(/index\.html$/, '');
      const r = await get(url);
      const body = await r.text();
      check(r.status === 200 && body === text, `${label}: GET ${url} is folio build's ${path} (${r.status}${r.status === 200 && body !== text ? ', different bytes' : ''})`);
      const type = path.endsWith('.xml') ? 'application/rss+xml; charset=utf-8' : 'text/html; charset=utf-8';
      check(r.headers.get('content-type') === type, `${label}: ${url} is ${type} (${r.headers.get('content-type')})`);
      check(r.headers.get('x-folio-store') === platforms[name].store, `${label}: ${url} came from the store ${platforms[name].store} (${r.headers.get('x-folio-store')})`);
    }
    await extra?.(expected);
    return { server, data };
  } catch (e) {
    await server.stop();
    removeRunDirectory(data);
    throw e;
  }
}

const render = async (markdown, raw) => {
  const r = await get(raw ? '/api/render?raw_html=1' : '/api/render', { method: 'POST', body: markdown });
  return { status: r.status, type: r.headers.get('content-type'), body: await r.text() };
};

// 1. The example site.
let run = await phase('the example site', join(root, 'site'), async expected => {
  check(JSON.stringify(Object.keys(expected).sort()) === JSON.stringify(['feed.xml', 'hello/index.html', 'index.html', 'notes/index.html', 'untrusted/index.html']), 'folio build writes the expected files');
  const all = (await Promise.all(Object.keys(expected).map(p => get('/' + p.replace(/index\.html$/, '')).then(r => r.text())))).join('\n');
  check(!/Not yet/.test(all) && (await get('/draft/')).status === 404, 'the draft is served nowhere');
  check(!/<script|<img|javascript:/i.test(all), 'no HTML or unsafe URL from the untrusted page');
  const redirect = await get('/hello');
  check(redirect.status === 301 && redirect.headers.get('location') === '/hello/', `/hello redirects to /hello/ (${redirect.status} ${redirect.headers.get('location')})`);
  check((await get('/nothing-here/')).status === 404, 'an unknown page is 404');
  check((await get('/%2F%2Fexample.com')).status === 404, 'no redirect off the site');
  check((await get('/', { method: 'PUT', body: 'x' })).status === 405, 'PUT is 405');
  const doc = '# Title\n\n<b>bold</b> *and* [x](javascript:y)\n';
  const safe = await render(doc, false);
  check(safe.status === 200 && safe.body === '<h1>Title</h1>\n<p>&lt;b&gt;bold&lt;/b&gt; <em>and</em> <a>x</a></p>\n' && safe.type === 'text/html; charset=utf-8', 'POST /api/render (safe, HTML)');
  const raw = await render(doc, true);
  check(raw.status === 200 && raw.body === '<h1>Title</h1>\n<p><b>bold</b> <em>and</em> <a href="javascript:y">x</a></p>\n' && raw.type === 'text/plain; charset=utf-8', 'POST /api/render?raw_html=1 (raw HTML, as text)');
});

// 2. The CommonMark examples on this server.
if (process.argv.includes('--spec')) {
  mkdirSync(join(root, 'test-results'), { recursive: true });
  const r = spawnSync(process.execPath, [join(root, 'test', 'spec.mjs'), '--engine', base, '--json', join(root, 'test-results', `spec-${name}.json`)], { stdio: 'inherit' });
  check(r.status === 0, 'the CommonMark 0.31.2 specification\'s 652 examples');
}
if (process.argv.includes('--pathological')) {
  const r = spawnSync(process.execPath, [join(root, 'test', 'pathological.mjs'), '--engine', base], { stdio: 'inherit' });
  check(r.status === 0, 'CommonMark\'s pathological inputs and deep nesting');
}
await run.server.stop();
removeRunDirectory(run.data);

// 3. A changed site in a new store: the pages follow the store's files.
const changed = mkdtempSync(join(tmpdir(), 'folio-changed-'));
cpSync(join(root, 'site'), changed, { recursive: true });
writeFileSync(join(changed, 'content', 'new.md'), '---\ntitle: Written at the edge\ndate: 2026-11-07\nlayout: plain\n---\nA page that **only** the changed store has.\n');
writeFileSync(join(changed, 'content', 'hello.md'), readFileSync(join(changed, 'content', 'hello.md'), 'utf8').replace('Folio renders', 'Folio (edited) renders'));
writeFileSync(join(changed, 'content', 'notes', 'tables.md'), readFileSync(join(changed, 'content', 'notes', 'tables.md'), 'utf8').replace('slug: notes', 'slug: notes\ndraft: true'));
writeFileSync(join(changed, 'layouts', 'plain.html'), '<!doctype html><title>{{ title }}</title><main class="plain">{{ content }}</main>\n');
run = await phase('the changed site', changed, async expected => {
  check(expected['new/index.html']?.includes('class="plain"') && expected['hello/index.html']?.includes('(edited)'), 'the changed site has the new page, its layout and the edit');
  check((await get('/notes/')).status === 404, 'the page made a draft is gone');
});
await run.server.stop();
removeRunDirectory(run.data);
rmSync(changed, { recursive: true, force: true });

console.log(failed ? `${failed} checks failed on ${name}` : `all checks passed on ${name}`);
process.exitCode = failed ? 1 : 0;
