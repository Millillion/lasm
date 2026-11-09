// scripts/browser/browser-ci.mjs's per-app timeout (#162): an app whose page
// never answers fails within the timeout, naming its step and the page's
// state, the browser is relaunched, and the apps after it still run. Uses a
// stand-in playwright-core (no browser): the browser suite itself runs in CI.
import { test } from 'node:test';
import assert from 'node:assert/strict';
import { mkdtempSync, mkdirSync, writeFileSync, readFileSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { spawnSync } from 'node:child_process';

const script = new URL('../scripts/browser/browser-ci.mjs', import.meta.url).pathname;

const fakePlaywright = `
let launches = 0;
const never = () => new Promise(() => {});
function page() {
  let path = '';
  return {
    on() {}, async addInitScript() {},
    async goto(url) { path = new URL(url).pathname; },
    // The hung app's page never settles a wait (as page.evaluate on a page with no frames).
    waitForFunction() { return path.startsWith('/hang/') ? never() : Promise.resolve({ jsonValue: async () => 1 }); },
    async evaluate(fn) { return String(fn).includes('visibilityState') ? 'visibilityState hidden, hasFocus false, readyState complete' : null; },
  };
}
export const webkit = {
  async launch() {
    const n = ++launches;
    return { version: () => 'fake ' + n, async close() {},
      async newContext() { return { async newPage() { return page(); }, async close() {} }; } };
  },
};
`;

test('an app that never answers times out, the browser is relaunched, the next app runs', () => {
  const dir = mkdtempSync(join(tmpdir(), 'lasm-browser-ci-'));
  try {
    const pw = join(dir, 'pw', 'node_modules', 'playwright-core');
    mkdirSync(pw, { recursive: true });
    writeFileSync(join(pw, 'index.mjs'), fakePlaywright);
    for (const app of ['hang', 'later']) {
      mkdirSync(join(dir, 'apps', app), { recursive: true });
      writeFileSync(join(dir, 'apps', app, 'lasm-manifest.json'), JSON.stringify({ entry: 'app.js', wasm: 'app.wasm' }));
    }
    const out = join(dir, 'out.json');
    const started = Date.now();
    const run = spawnSync(process.execPath, [script, '--browser', 'webkit', '--apps', join(dir, 'apps'), '--out', out, '--playwright', join(dir, 'pw')],
      { encoding: 'utf8', env: { ...process.env, LASM_BROWSER_APP_TIMEOUT_MS: '1000' }, timeout: 60_000 });
    assert.ok(Date.now() - started < 30_000, 'the suite did not wait for the hung app');
    assert.equal(run.status, 1, run.stdout + run.stderr);
    assert.match(run.stdout, /hang: 0\/1 checks in [\d.]+ s \(TIMED OUT at starting\)/);
    assert.match(run.stdout, /later: 2\/2 checks/);
    const report = JSON.parse(readFileSync(out, 'utf8'));
    assert.deepEqual(report.failures.length, 1, report.failures.join('\n'));
    assert.match(report.failures[0], /^hang: timeout: no result after 1 s, at: starting\. \/hang\/: visibilityState hidden/);
    assert.deepEqual(report.apps.hang.checks.map(c => c.name), ['timeout'], 'the abandoned checks are dropped');
    assert.ok(report.apps.later.checks.every(c => c.ok));
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
