// The fullstack template end to end (.github/workflows/fullstack.yml; CI only,
// headless): against a running server built from `lasm init --template
// fullstack` (Node, or `wrangler dev` for Workers), in one Playwright browser:
//   - the first page is rendered by the server (the todos are in the HTML);
//   - the browser app hydrates it (the server's nodes are kept);
//   - the shared validation runs in the browser (no request is sent) and on
//     the server (a request sent around the browser app is refused, 400);
//   - adding, toggling and deleting go through the RPC endpoints, and a reload
//     shows the server's state;
//   - no console errors.
//   node scripts/fullstack/fullstack-ci.mjs --browser chromium --url http://127.0.0.1:3000/ --out FILE [--playwright DIR]
import { writeFileSync, mkdirSync } from 'node:fs';
import { dirname, join, resolve } from 'node:path';
import { pathToFileURL } from 'node:url';
import { parseArgs } from 'node:util';

const { values } = parseArgs({ options: { browser: { type: 'string' }, url: { type: 'string' }, out: { type: 'string' }, playwright: { type: 'string' }, label: { type: 'string' } } });
const playwright = await import(values.playwright ? pathToFileURL(join(resolve(values.playwright), 'node_modules/playwright-core/index.mjs')).href : 'playwright-core');
const base = values.url;
const result = { schema: 1, browser: values.browser, label: values.label ?? 'node', url: base, checks: [] };
const expect = (name, ok, detail = '') => result.checks.push({ name, ok: !!ok, detail: String(detail).slice(0, 300) });

// Wait for the server.
for (let i = 0; i < 240; i++) {
  try { if ((await fetch(base)).ok) break; } catch { /* not yet */ }
  await new Promise(r => setTimeout(r, 500));
}
const browser = await playwright[values.browser].launch({ headless: true });
try {
  // Server-side rendering and both checks of the shared validation, without a browser.
  const html = await (await fetch(base)).text();
  expect('ssr.todos-in-html', html.includes('Write the server in Lean') && html.includes('data-lasm-hydrate'), html.slice(0, 200));
  const refused = await fetch(new URL('/rpc/addTodo', base), { method: 'POST', headers: { 'content-type': 'application/json' }, body: JSON.stringify({ title: '   ' }) });
  const refusedBody = await refused.text();
  expect('rpc.server-validates', refused.status === 400 && refusedBody.includes('Write something first'), `${refused.status} ${refusedBody}`);
  const tooLong = await fetch(new URL('/rpc/addTodo', base), { method: 'POST', body: JSON.stringify({ title: 'x'.repeat(81) }) });
  expect('rpc.server-validates-length', tooLong.status === 400, String(tooLong.status));
  const malformed = await fetch(new URL('/rpc/addTodo', base), { method: 'POST', body: '{"titel": 1}' });
  expect('rpc.malformed', malformed.status === 400, String(malformed.status));

  const context = await browser.newContext();
  const page = await context.newPage();
  const lines = [], rpc = [];
  page.on('console', m => lines.push(`${m.type()}: ${m.text()}`));
  page.on('pageerror', e => lines.push(`pageerror: ${e.message}`));
  page.on('request', r => { if (r.url().includes('/rpc/')) rpc.push(r.url().split('/rpc/')[1]); });
  // Keep the server's first item, to compare after hydration.
  await page.addInitScript(() => {
    document.addEventListener('DOMContentLoaded', () => { window.__ssrItem = document.querySelector('#app li'); });
    document.addEventListener('lasm:mounted', () => { window.__mounted = true; }, true);
  });
  await page.goto(base, { waitUntil: 'load' });
  await page.waitForFunction(() => window.__mounted, null, { timeout: 30_000 }).catch(() => {});
  expect('hydrate.mounted', await page.evaluate(() => !!window.__mounted), lines.slice(-3).join(' | '));
  expect('hydrate.adopted', await page.evaluate(() => !!window.__ssrItem && window.__ssrItem === document.querySelector('#app li')), 'the server-rendered item was replaced');
  const items = () => page.$$eval('#app li span', spans => spans.map(s => s.textContent));
  const until = fn => page.waitForFunction(fn, null, { timeout: 10_000 }).then(() => true, () => false);

  // The shared validation in the browser: nothing is sent.
  await page.fill('#new-todo', '   ');
  await page.click('button[type=submit]');
  expect('client.validates', await until(() => document.querySelector('.error')?.textContent === 'Write something first.'), await page.textContent('.error').catch(() => ''));
  expect('client.no-request', !rpc.includes('addTodo'), rpc.join(','));

  // Add, toggle, delete through the API.
  const before = (await items()).length;
  await page.fill('#new-todo', '  Buy milk  ');
  await page.press('#new-todo', 'Enter');
  expect('rpc.add', await until(() => [...document.querySelectorAll('#app li span')].some(s => s.textContent === 'Buy milk')), JSON.stringify(await items()));
  expect('rpc.add-count', (await items()).length === before + 1, JSON.stringify(await items()));
  expect('client.input-cleared', (await page.inputValue('#new-todo')) === '', await page.inputValue('#new-todo'));
  await page.check('#app li:last-child input[type=checkbox]');
  expect('rpc.toggle', await until(() => document.querySelector('#app li:last-child')?.className === 'done'), await page.getAttribute('#app li:last-child', 'class'));
  await page.reload({ waitUntil: 'load' });
  const html2 = await page.content();
  expect('ssr.server-state', html2.includes('Buy milk'), 'the server page lacks the new todo');
  await page.waitForFunction(() => window.__mounted, null, { timeout: 30_000 }).catch(() => {});
  expect('ssr.toggle-kept', await page.getAttribute('#app li:last-child', 'class') === 'done', await page.getAttribute('#app li:last-child', 'class'));
  await page.click('#app li:last-child .delete');
  expect('rpc.delete', await until(() => ![...document.querySelectorAll('#app li span')].some(s => s.textContent === 'Buy milk')), JSON.stringify(await items()));
  await page.click('#refresh');
  expect('rpc.list', await until(() => !document.querySelector('.error') && document.querySelectorAll('#app li').length >= 2), JSON.stringify(await items()));
  expect('no-errors', !lines.some(l => /^(error|pageerror)/.test(l) && !/status of 400/.test(l)), lines.filter(l => /^(error|pageerror)/.test(l)).join(' | '));
  result.console = lines.slice(-30);
  await context.close();
} catch (error) {
  expect('runner', false, error.stack ?? error.message);
} finally {
  await browser.close();
  mkdirSync(dirname(resolve(values.out)), { recursive: true });
  writeFileSync(values.out, JSON.stringify(result, null, 2) + '\n');
}
const failed = result.checks.filter(c => !c.ok);
console.log(`fullstack (${result.label}) in ${values.browser}: ${result.checks.length - failed.length}/${result.checks.length} checks`);
for (const f of failed) console.log('  FAIL ' + f.name + ': ' + f.detail);
process.exit(failed.length ? 1 : 0);
