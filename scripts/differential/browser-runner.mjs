// Runs a `lasm build --target browser` output in a headless Playwright browser,
// for the browser differential of scripts/differential/run.mjs
// (docs/TESTING.md#more-oracles).
//
//   node browser-runner.mjs --browser chromium|firefox|webkit --playwright DIR --dist DIR [--result FILE]
//
// DIR (--playwright) holds node_modules/playwright-core. The dist/ directory is
// served from 127.0.0.1 as a static host serves it (application/wasm for the
// module); a blank page imports app.js and mounts the app with the public API
// (`mount(element, { stdout, stderr })`, docs/BROWSER.md), as an embedding page
// does. Lean's standard output and error arrive as lines and are written here
// line by line (every generated program ends its lines). A browser has no exit
// status: mount resolves when main returned 0 and rejects otherwise (a non-zero
// result, an uncaught error, a stopped instance), so this process exits 0 or 1
// and the harness compares zero against non-zero. --result FILE gets the
// outcome (the rejection's message, the browser's version, page errors).
// A failure of the runner itself exits 3 with a message naming it.
import { createServer } from 'node:http';
import { readFile, stat } from 'node:fs/promises';
import { writeFileSync } from 'node:fs';
import { join, resolve, extname, sep } from 'node:path';
import { pathToFileURL } from 'node:url';
import { parseArgs } from 'node:util';

const { values } = parseArgs({ options: { browser: { type: 'string' }, playwright: { type: 'string' }, dist: { type: 'string' }, result: { type: 'string' } } });
const engine = values.browser;
const fail = message => { process.stderr.write(`browser-runner (harness, not the program): ${message}\n`); process.exit(3); };
if (!['chromium', 'firefox', 'webkit'].includes(engine)) fail('--browser chromium|firefox|webkit');
if (!values.dist) fail('--dist DIR is required');
const dist = resolve(values.dist);
const timeoutMs = Number(process.env.LASM_BROWSER_RUN_TIMEOUT_MS ?? 100_000);

const types = { '.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.mjs': 'text/javascript; charset=utf-8', '.wasm': 'application/wasm', '.json': 'application/json', '.txt': 'text/plain; charset=utf-8' };
const page = '<!doctype html><html><head><meta charset="utf-8"><title>lasm differential</title></head><body><div id="app"></div></body></html>';
const server = createServer(async (request, response) => {
  const path = decodeURIComponent(new URL(request.url, 'http://localhost').pathname);
  if (path === '/' || path === '/__lasm_diff.html') { response.writeHead(200, { 'content-type': types['.html'] }); response.end(page); return; }
  const file = resolve(dist, '.' + path);
  if (!file.startsWith(dist + sep)) { response.writeHead(403); response.end(); return; }
  try {
    if (!(await stat(file)).isFile()) throw new Error('not a file');
    response.writeHead(200, { 'content-type': types[extname(file)] ?? 'application/octet-stream', 'cache-control': 'no-store' });
    response.end(await readFile(file));
  } catch { response.writeHead(404); response.end(); }
});
await new Promise(done => server.listen(0, '127.0.0.1', done));
const origin = `http://127.0.0.1:${server.address().port}`;

let browser;
const timer = setTimeout(async () => {
  process.stderr.write(`browser-runner (harness, not the program): no result after ${timeoutMs} ms\n`);
  try { await browser?.close(); } catch { /* exiting anyway */ }
  process.exit(124);
}, timeoutMs);

let result;
try {
  const moduleUrl = values.playwright ? pathToFileURL(join(resolve(values.playwright), 'node_modules/playwright-core/index.mjs')).href : 'playwright-core';
  const playwright = await import(moduleUrl);
  browser = await playwright[engine].launch({ headless: true });
  const context = await browser.newContext();
  const tab = await context.newPage();
  const pageErrors = [];
  tab.on('pageerror', error => pageErrors.push(String(error?.message ?? error)));
  await tab.goto(`${origin}/__lasm_diff.html`);
  const run = await tab.evaluate(async () => {
    const out = [], err = [];
    let outcome;
    try {
      const { mount } = await import(new URL('./app.js', location.href).href);
      const app = await mount(document.getElementById('app'), { stdout: line => out.push(line), stderr: line => err.push(line), onError: () => {} });
      outcome = { ok: true, jspi: app.jspi };
      app.unmount();
    } catch (error) {
      outcome = { ok: false, reason: String(error?.message ?? error) };
    }
    return { out, err, outcome };
  });
  result = { ...run.outcome, browser: engine, version: browser.version(), pageErrors };
  await new Promise(done => process.stdout.write(run.out.map(line => line + '\n').join(''), done));
  await new Promise(done => process.stderr.write(run.err.map(line => line + '\n').join(''), done));
} catch (error) {
  clearTimeout(timer);
  try { await browser?.close(); } catch { /* reported below */ }
  fail(String(error?.stack ?? error));
}
clearTimeout(timer);
await browser.close();
server.close();
if (values.result) writeFileSync(values.result, JSON.stringify(result, null, 1) + '\n');
process.exit(result.ok ? 0 : 1);
