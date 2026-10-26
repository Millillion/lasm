// @lasm/vite in development (CI only, headless Chromium; .github/workflows/browser.yml):
// starts `vite` on the Vite fixture (built by scripts/browser/build-apps.mjs),
// opens the page, clicks the counter, edits Main.lean's view, and checks that
// the app is rebuilt and remounted in place without a page reload.
//   node scripts/browser/vite-dev-check.mjs VITE_APP OUT_JSON --playwright DIR
import { spawn } from 'node:child_process';
import { readFileSync, writeFileSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { pathToFileURL, fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../../', import.meta.url));
const [appArg, outArg, , playwrightArg] = process.argv.slice(2);
const app = resolve(appArg), out = resolve(outArg);
const { chromium } = await import(pathToFileURL(join(resolve(playwrightArg), 'node_modules/playwright-core/index.mjs')).href);
const port = 5199;
const env = { ...process.env, LASM_CLI: join(root, 'bin/lasm.mjs'), BROWSER: 'none', CI: '1' };
const server = spawn(process.execPath, [join(app, 'node_modules/vite/bin/vite.js'), '--port', String(port), '--strictPort'], { cwd: app, env, stdio: ['ignore', 'pipe', 'pipe'] });
let log = '';
server.stdout.on('data', c => { log += c; }); server.stderr.on('data', c => { log += c; process.stderr.write(c); });
const result = { schema: 1, checks: [] };
const expect = (name, ok, detail = '') => { result.checks.push({ name, ok: !!ok, detail: String(detail).slice(0, 300) }); };
const browser = await chromium.launch({ headless: true });
try {
  for (let i = 0; i < 120 && !log.includes('Local'); i++) await new Promise(r => setTimeout(r, 500));
  const page = await browser.newPage();
  const lines = [];
  page.on('console', m => lines.push(m.text()));
  let loads = 0;
  page.on('load', () => { loads++; });
  const started = Date.now();
  await page.goto(`http://localhost:${port}/`);
  await page.waitForSelector('#app button', { timeout: 240_000 });
  result.firstBuildSeconds = (Date.now() - started) / 1000;
  const [, plus] = await page.$$('#app button');
  await plus.click(); await plus.click();
  await page.waitForFunction(() => document.querySelector('#app output')?.textContent === '2', null, { timeout: 5000 });
  const main = join(app, 'Main.lean');
  const before = readFileSync(main, 'utf8');
  writeFileSync(main, before.replace('{App.greet "Lean"}', '{App.greet "hot Lean"}'));
  const edited = Date.now();
  const updated = await page.waitForFunction(() => document.querySelector('#app h1')?.textContent.includes('hot Lean'), null, { timeout: 240_000 }).then(() => true, () => false);
  result.updateSeconds = (Date.now() - edited) / 1000;
  expect('vite-dev.update', updated, await page.textContent('#app h1').catch(() => ''));
  expect('vite-dev.no-reload', loads === 1, `${loads} page loads`);
  expect('vite-dev.logged', lines.some(l => l.includes('[lasm]') && l.includes('updated')), lines.slice(-5).join(' | '));
  await (await page.$$('#app button'))[1].click();
  expect('vite-dev.still-interactive', await page.waitForFunction(() => /^\d+$/.test(document.querySelector('#app output')?.textContent ?? ''), null, { timeout: 5000 }).then(() => true, () => false));
  writeFileSync(main, before);
} catch (error) {
  expect('vite-dev.runner', false, error.stack ?? error.message);
} finally {
  await browser.close();
  server.kill();
  writeFileSync(out, JSON.stringify(result, null, 2) + '\n');
}
const failed = result.checks.filter(c => !c.ok);
console.log(`vite dev: ${result.checks.length - failed.length}/${result.checks.length} checks; first build ${result.firstBuildSeconds}s, update ${result.updateSeconds}s`);
for (const f of failed) console.log('  FAIL ' + f.name + ': ' + f.detail);
process.exit(failed.length ? 1 : 0);
