// Runs Folio's renderer on many Markdown documents at once, in the format of
// Folio.batch (Folio/Batch.lean), on one of its builds:
//
// - `node` (the default): the Lasm build for Node, dist/batch/main.mjs
//   (`npm run build:batch`);
// - `native`: Lake's native build (`lake build folio-batch`), for development;
// - `wasmtime`, `wasmer`, `node-wasi`: the WASI build, dist/batch-wasi/main.wasm
//   (`npm run build:batch-wasi`), on that engine;
// - `chromium`, `firefox`, `webkit`: the browser build, dist/batch-browser
//   (`npm run build:batch-browser`), in Playwright's headless browser
//   (renderAllAsync only);
// - a URL: `POST URL/api/render` once per document (`?raw_html=1` for raw
//   HTML), on a running server (ServerEdge.lean; renderAllAsync only).
//
// The engine is the `engine` option, else FOLIO_BATCH, else `node`.
import { execFileSync } from 'node:child_process';
import { createServer } from 'node:http';
import { mkdtempSync, readFileSync, rmSync, writeFileSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { extname, join, normalize } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('..', import.meta.url));
const browsers = ['chromium', 'firefox', 'webkit'];

/** The batch input for `docs` ({ markdown, unsafe }). */
function encode(docs) {
  return docs.map(d => `${d.unsafe ? 'u' : 's'} ${[...d.markdown].length}\n${d.markdown}`).join('');
}

/** The HTML strings of a batch output. */
function decode(text, count) {
  const out = [...text];
  const results = [];
  let i = 0;
  while (i < out.length) {
    let j = i;
    while (out[j] !== '\n') j++;
    const n = Number(out.slice(i, j).join(''));
    results.push(out.slice(j + 1, j + 1 + n).join(''));
    i = j + 1 + n;
  }
  if (results.length !== count) throw new Error(`expected ${count} results, got ${results.length}`);
  return results;
}

/** The command that renders batch file `inp` into `out`, both in `dir`. */
function command(engine, dir) {
  const wasm = join(root, 'dist', 'batch-wasi', 'main.wasm');
  switch (engine) {
    case 'node': return [process.execPath, [join(root, 'dist', 'batch', 'main.mjs'), join(dir, 'in'), join(dir, 'out')]];
    case 'native': return [join(root, '.lake', 'build', 'bin', 'folio-batch'), [join(dir, 'in'), join(dir, 'out')]];
    case 'wasmtime': return ['wasmtime', ['run', '--dir', `${dir}::/w`, wasm, '/w/in', '/w/out']];
    case 'wasmer': return ['wasmer', ['run', `--volume=${dir}:/w`, wasm, '--', '/w/in', '/w/out']];
    case 'node-wasi': return [process.execPath, ['--no-warnings', '--input-type=module', '-e', `
      import { WASI } from 'node:wasi'; import { readFile } from 'node:fs/promises';
      const wasi = new WASI({ version: 'preview1', args: ['batch', '/w/in', '/w/out'], env: {},
        preopens: { '/w': ${JSON.stringify(dir)} }, returnOnExit: true });
      const m = await WebAssembly.compile(await readFile(${JSON.stringify(wasm)}));
      process.exitCode = wasi.start(await WebAssembly.instantiate(m, wasi.getImportObject()));`]];
    default: throw new Error(`unknown batch engine ${engine}`);
  }
}

/** Renders each `{ markdown, unsafe }` with a program (node, native or a WASI engine); returns the HTML strings. */
export function renderAll(docs, { timeout = 600_000, engine = process.env.FOLIO_BATCH ?? 'node' } = {}) {
  const dir = mkdtempSync(join(tmpdir(), 'folio-batch-'));
  try {
    writeFileSync(join(dir, 'in'), encode(docs));
    const [cmd, args] = command(engine, dir);
    execFileSync(cmd, args, { stdio: ['ignore', 'inherit', 'inherit'], timeout });
    return decode(readFileSync(join(dir, 'out'), 'utf8'), docs.length);
  } finally {
    rmSync(dir, { recursive: true, force: true });
  }
}

/** Serves `dir`'s files on 127.0.0.1 (an ephemeral port); returns { url, close }. */
async function serveStatic(dir) {
  const types = { '.html': 'text/html', '.js': 'text/javascript', '.mjs': 'text/javascript', '.wasm': 'application/wasm', '.json': 'application/json' };
  const server = createServer((req, res) => {
    const path = normalize(decodeURIComponent(new URL(req.url, 'http://x').pathname)).replace(/^([/\\])+/, '');
    if (path.startsWith('..')) { res.writeHead(403).end(); return; }
    try {
      const body = readFileSync(join(dir, path || 'index.html'));
      res.writeHead(200, { 'content-type': types[extname(path || 'index.html')] ?? 'application/octet-stream' }).end(body);
    } catch { res.writeHead(404).end(); }
  });
  await new Promise(r => server.listen(0, '127.0.0.1', r));
  return { url: `http://127.0.0.1:${server.address().port}/`, close: () => new Promise(r => server.close(r)) };
}

/** Renders in a headless browser: the browser build reads the batch from a global and writes its output to another. */
async function renderInBrowser(docs, engine, timeout) {
  const playwright = await import('@playwright/test');
  const site = await serveStatic(join(root, 'dist', 'batch-browser'));
  const browser = await playwright[engine].launch({ headless: true });
  try {
    const page = await browser.newPage();
    const errors = [];
    page.on('pageerror', e => errors.push(String(e)));
    await page.addInitScript(input => { globalThis.folioBatchInput = input; }, encode(docs));
    await page.goto(site.url);
    try {
      await page.waitForFunction(() => typeof globalThis.folioBatchOutput === 'string', null, { timeout, polling: 100 });
    } catch (e) {
      throw new Error(`${engine}: no output (${errors.join('; ') || e.message})`);
    }
    return decode(await page.evaluate(() => globalThis.folioBatchOutput), docs.length);
  } finally {
    await browser.close();
    await site.close();
  }
}

/** Renders over HTTP: one `POST /api/render` per document, a few at a time. */
async function renderOverHttp(docs, base, timeout) {
  const results = new Array(docs.length);
  let next = 0;
  const worker = async () => {
    while (next < docs.length) {
      const i = next++;
      const url = new URL(docs[i].unsafe ? 'api/render?raw_html=1' : 'api/render', base.endsWith('/') ? base : base + '/');
      let response;
      for (let attempt = 0; ; attempt++) {
        try {
          response = await fetch(url, { method: 'POST', body: docs[i].markdown, headers: { 'content-type': 'text/markdown; charset=utf-8' }, signal: AbortSignal.timeout(timeout) });
          break;
        } catch (e) {
          // Only a failed connection is retried (the platform's proxy restarting), never a wrong answer.
          if (attempt >= 2 || e.name === 'TimeoutError') throw new Error(`document ${i}: ${e.message}`);
        }
      }
      if (response.status !== 200) throw new Error(`document ${i}: status ${response.status}: ${await response.text()}`);
      results[i] = await response.text();
    }
  };
  await Promise.all(Array.from({ length: 8 }, worker));
  return results;
}

/** Renders each `{ markdown, unsafe }` on any engine (see the top of this file). */
export async function renderAllAsync(docs, { timeout = 600_000, engine = process.env.FOLIO_BATCH ?? 'node' } = {}) {
  if (/^https?:\/\//.test(engine)) return renderOverHttp(docs, engine, timeout);
  if (browsers.includes(engine)) return renderInBrowser(docs, engine, timeout);
  return renderAll(docs, { timeout, engine });
}
