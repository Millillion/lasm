// The browser suite (.github/workflows/browser.yml; CI only: never run browsers
// on a desktop). For one browser engine (Playwright's Chromium, Firefox or
// WebKit, headless), against the builds in APPS (each a lasm build --target
// browser output with its lasm-manifest.json) served by scripts/browser/test-server.mjs:
//   - counter (lasm init --template web): mount, clicks, start time cold and warm,
//     bytes transferred;
//   - platform (test/browser/platform): every automatic Lasm.Web check, the
//     interactive ones (clicks, typing, keys, prevented defaults, pointer, forms),
//     the console, ports and messages, a second app on the page, unmount, and a
//     blocking wait stopping the instance;
//   - the Lasm.UI examples (scripts/ui/browser-checks.mjs): TodoMVC end to end,
//     the js-framework-benchmark against vanilla JavaScript, the counter and
//     the feature demo;
//   - any other app directory: it mounts and reports no error.
// Writes OUT (JSON); exits 1 when a check fails.
//   node scripts/browser/browser-ci.mjs --browser chromium --apps DIR --out FILE [--playwright DIR]
import { readFileSync, readdirSync, writeFileSync, existsSync, mkdirSync } from 'node:fs';
import { join, resolve, dirname } from 'node:path';
import { pathToFileURL } from 'node:url';
import { parseArgs } from 'node:util';
import { startTestServer } from './test-server.mjs';
import { uiChecks } from '../ui/browser-checks.mjs';

const { values } = parseArgs({ options: { browser: { type: 'string' }, apps: { type: 'string' }, out: { type: 'string' }, playwright: { type: 'string' } } });
const engine = values.browser;
if (!['chromium', 'firefox', 'webkit'].includes(engine)) throw new Error('--browser chromium|firefox|webkit');
const apps = resolve(values.apps), out = resolve(values.out);
const playwrightModule = values.playwright ? pathToFileURL(join(resolve(values.playwright), 'node_modules/playwright-core/index.mjs')).href : 'playwright-core';
const playwright = await import(playwrightModule);

const report = { schema: 1, engine, platform: `${process.platform}-${process.arch}`, node: process.version, startedAt: new Date().toISOString(), apps: {} };
const failures = [];
const expect = (app, name, ok, detail = '') => {
  (report.apps[app].checks ??= []).push({ name, ok: !!ok, detail: String(detail).slice(0, 300) });
  if (!ok) failures.push(`${app}: ${name}: ${detail}`);
};

const browser = await playwright[engine].launch({ headless: true });
report.browserVersion = browser.version();
// Observes app startup: the loader's lasm:evaluated mark, then the first frame
// after the app mounted (lasm:mounted is dispatched on the element; capture
// sees it on the document).
const timingScript = () => {
  window.__lasm = { console: [], errors: [] };
  document.addEventListener('lasm:mounted', event => {
    const mountedAt = performance.now();
    requestAnimationFrame(() => requestAnimationFrame(frame => {
      const evaluated = performance.getEntriesByName('lasm:evaluated')[0]?.startTime ?? null;
      const compiled = performance.getEntriesByName('lasm:compiled')[0]?.startTime ?? null;
      (window.__lasm.mounts ??= []).push({ id: event.target.id, evaluated, compiled, mountedAt, firstFrame: frame,
        startMs: evaluated === null ? null : frame - evaluated });
    }));
  }, true);
};

async function openPage(server, path) {
  const context = await browser.newContext();
  const page = await context.newPage();
  const consoleLines = [];
  page.on('console', message => consoleLines.push(`${message.type()}: ${message.text()}`));
  page.on('pageerror', error => consoleLines.push(`pageerror: ${error.message}`));
  await page.addInitScript(timingScript);
  await page.goto(new URL(path, server.url).href, { waitUntil: 'load' });
  return { context, page, consoleLines };
}

async function resourceSizes(page) {
  return page.evaluate(() => performance.getEntriesByType('resource').filter(r => /app\.[0-9a-f]{12}\.(js|wasm)$/.test(r.name))
    .map(r => ({ name: r.name.split('/').at(-1), transferSize: r.transferSize, encodedBodySize: r.encodedBodySize, decodedBodySize: r.decodedBodySize })));
}

async function counter(server, name, manifest) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  try {
    await page.waitForSelector('button', { timeout: 30_000 });
    const [minus, plus] = await page.$$('button');
    for (let i = 0; i < 3; i++) await plus.click();
    await minus.click();
    expect(name, 'counter.clicks', (await page.textContent('output')) === '2', await page.textContent('output'));
    const cold = await page.waitForFunction(() => window.__lasm.mounts?.[0], null, { timeout: 10_000 }).then(h => h.jsonValue());
    report.apps[name].sizes = await resourceSizes(page);
    // Warm start: the same page again, with the content-hashed files in the HTTP cache.
    await page.reload({ waitUntil: 'load' });
    await page.waitForSelector('button', { timeout: 30_000 });
    const warm = await page.waitForFunction(() => window.__lasm.mounts?.[0], null, { timeout: 10_000 }).then(h => h.jsonValue());
    report.apps[name].start = { cold, warm };
    expect(name, 'counter.start-measured', typeof warm.startMs === 'number', JSON.stringify(warm));
    expect(name, 'counter.no-errors', !consoleLines.some(line => /^(error|pageerror)/.test(line)), consoleLines.filter(l => /^(error|pageerror)/.test(l)).join(' | '));
  } finally { report.apps[name].console = consoleLines.slice(-50); await context.close(); }
}

async function platform(server, name, manifest) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  try {
    await page.waitForSelector('#app #done', { timeout: 60_000 });
    const results = JSON.parse(await page.textContent('#app #results'));
    for (const r of results) expect(name, r.name, r.ok, r.detail);
    expect(name, 'platform.automatic-checks', results.length >= 40, `${results.length} checks`);
    const text = selector => page.textContent(`#app ${selector}`);
    // Events
    await page.click('#app #click-me'); await page.click('#app #click-me');
    expect(name, 'events.click', (await text('#click-count')) === '2', await text('#click-count'));
    expect(name, 'events.once', (await text('#once-count')) === '1', await text('#once-count'));
    await page.fill('#app #type-here', 'héllo wörld');
    expect(name, 'events.input-value', (await text('#typed')) === 'héllo wörld', await text('#typed'));
    await page.focus('#app #type-here');
    await page.keyboard.press('Shift+KeyA');
    expect(name, 'events.key-info', (await text('#keys')) === 'A/KeyA/true', await text('#keys'));
    await page.keyboard.press('Enter');
    expect(name, 'events.key-enter', (await text('#keys')) === 'Enter/Enter/false', await text('#keys'));
    await page.click('#app #prevented-link');
    expect(name, 'events.prevent-default', (await text('#prevented')) === 'true' && !(await page.evaluate(() => location.hash)).includes('navigated'),
      `${await text('#prevented')} ${await page.evaluate(() => location.hash)}`);
    await page.click('#app #remove-me'); await page.click('#app #remove-me');
    expect(name, 'events.remove-listener', (await text('#removed-count')) === '1', await text('#removed-count'));
    const pad = await page.$('#app #pad');
    const box = await pad.boundingBox();
    await page.mouse.move(box.x + 10, box.y + 20); await page.mouse.down(); await page.mouse.up();
    // Within a pixel: element boxes can sit at fractional positions.
    const [px, py, pb] = (await text('#pointer')).split(',').map(Number);
    expect(name, 'events.pointer', Math.abs(px - 10) <= 1 && Math.abs(py - 20) <= 1 && pb === 0, await text('#pointer'));
    await page.fill('#fixture-form input[name=name]', 'Ada');
    await page.click('#submit');
    expect(name, 'events.form-submit', (await text('#submitted')) === 'name=Ada, lang=Lean' && page.url().endsWith(`/${name}/`), `${await text('#submitted')} ${page.url()}`);
    // The console (Console.log and IO.println).
    expect(name, 'console.lines', consoleLines.some(l => l.includes('lasm-console-check') && l.includes('42')) && consoleLines.some(l => l.includes('lasm-println-check')),
      consoleLines.filter(l => l.includes('check')).join(' | '));
    // Ports and messages through the loader's app handle.
    const entry = new URL(`/${name}/${manifest.entry}`, server.url).href;
    const doubled = await page.evaluate(async entry => {
      const loader = await import(entry);
      const app = loader.appOf(document.getElementById('app'));
      const answer = new Promise(resolve => app.ports.out.subscribe(resolve));
      await app.ports.in.send(21);
      await app.send('hello, Lean');
      return answer;
    }, entry);
    expect(name, 'app.ports', doubled === 42, doubled);
    expect(name, 'app.send', (await text('#message')) === 'hello, Lean', await text('#message'));
    // A second app on the same page, then unmounted; a blocking wait stops an instance.
    const second = await page.evaluate(async entry => {
      const loader = await import(entry);
      const app = await loader.mount('#second', { flags: 'platform' });
      await new Promise(resolve => { const t = setInterval(() => { if (document.querySelector('#second #done')) { clearInterval(t); resolve(); } }, 20); });
      const summary = document.querySelector('#second #done').textContent;
      const failed = JSON.parse(document.querySelector('#second #results').textContent).filter(r => !r.ok);
      const first = loader.appOf(document.getElementById('app'));
      app.unmount();
      return { summary, failed, cleared: document.getElementById('second').childNodes.length === 0, unmountHandler: window.lasmUnmounted === true,
        stopped: app.stopped, firstAlive: !first.stopped };
    }, entry);
    const [passed, total] = second.summary.split('/').map(Number);
    expect(name, 'app.second-instance', passed === total && total === results.length, `${second.summary} ${JSON.stringify(second.failed)}`);
    expect(name, 'app.unmount', second.cleared && second.unmountHandler && second.stopped && second.firstAlive, JSON.stringify(second));
    await page.click('#app #click-me');
    expect(name, 'app.first-unaffected', (await text('#click-count')) === '3', await text('#click-count'));
    await page.click('#app #block');
    await page.waitForTimeout(200);
    const stopped = await page.evaluate(async entry => (await import(entry)).appOf(document.getElementById('app')).stopped, entry);
    // --suspend jspi in a browser with JSPI: the wait suspends and the app goes on.
    const suspends = manifest.suspend === 'jspi' && await page.evaluate(() => typeof WebAssembly.Suspending === 'function');
    report.apps[name].jspi = suspends;
    if (suspends) {
      await page.click('#app #click-me');
      expect(name, 'app.blocking-wait-suspends', !stopped && (await text('#slept')) === 'slept' && (await text('#click-count')) === '4',
        `${stopped} ${await text('#slept')} ${await text('#click-count')}`);
    } else expect(name, 'app.blocking-wait-stops', stopped && consoleLines.some(l => l.includes('the Lean instance stopped') && l.includes('cannot suspend')),
      consoleLines.filter(l => l.includes('stopped')).join(' | '));
    report.apps[name].start = await page.evaluate(() => window.__lasm.mounts);
  } finally { report.apps[name].console = consoleLines.slice(-80); await context.close(); }
}

async function generic(server, name) {
  const { context, page, consoleLines } = await openPage(server, `/${name}/`);
  try {
    const mounted = await page.waitForFunction(() => window.__lasm.mounts?.length, null, { timeout: 30_000 }).then(() => true, () => false);
    expect(name, 'mounts', mounted, consoleLines.slice(-5).join(' | '));
    expect(name, 'no-errors', !consoleLines.some(line => /^(error|pageerror)/.test(line)), consoleLines.filter(l => /^(error|pageerror)/.test(l)).join(' | '));
    report.apps[name].start = await page.evaluate(() => window.__lasm.mounts ?? null);
  } finally { report.apps[name].console = consoleLines.slice(-50); await context.close(); }
}

const server = await startTestServer(apps);
try {
  for (const name of readdirSync(apps).sort()) {
    const manifestFile = join(apps, name, 'lasm-manifest.json');
    if (!existsSync(manifestFile)) continue;
    const manifest = JSON.parse(readFileSync(manifestFile, 'utf8'));
    report.apps[name] = { transfer: manifest.transfer, entry: manifest.entry, wasm: manifest.wasm };
    const ui = uiChecks[name];
    const run = name === 'counter' ? counter : name === 'platform' || name === 'platform-jspi' ? platform
      : ui ? (s, n, m) => ui({ server: s, name: n, manifest: m, openPage, expect, report }) : generic;
    try { await run(server, name, manifest); }
    catch (error) { expect(name, 'runner', false, error.stack ?? error.message); }
  }
} finally {
  await server.close();
  await browser.close();
  report.finishedAt = new Date().toISOString();
  report.failures = failures;
  mkdirSync(dirname(out), { recursive: true });
  writeFileSync(out, JSON.stringify(report, null, 2) + '\n');
}
console.log(`${engine} ${report.browserVersion}: ${failures.length ? failures.length + ' failed' : 'all passed'}`);
for (const failure of failures) console.log('  FAIL ' + failure);
for (const [name, app] of Object.entries(report.apps)) console.log(`  ${name}: ${(app.checks ?? []).filter(c => c.ok).length}/${(app.checks ?? []).length} checks; start ${JSON.stringify(app.start?.warm?.startMs ?? app.start?.[0]?.startMs ?? null)} ms`);
process.exit(failures.length ? 1 : 0);
