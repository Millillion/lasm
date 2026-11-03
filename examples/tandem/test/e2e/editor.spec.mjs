// People editing one document in real browsers, through the Lasm.UI editor
// (Frontend/Ui.lean): typing, two browsers at once (live, and concurrently
// at the same place), offline then reconnecting, a reload while offline,
// the caret staying put when other people's text arrives, and no script
// error or Content Security Policy violation on the way.
import { expect, test } from '@playwright/test';

let n = 0;
const docName = () => `e2e-${Date.now().toString(36)}-${n++}`;
const editor = page => page.locator('#tandem-editor');

function watch(page) {
  const problems = [];
  // An offline browser's failed requests are expected; anything else is a problem.
  const offline = /ERR_INTERNET_DISCONNECTED|Failed to fetch|NetworkError|Load failed|WebSocket|ERR_CONNECTION|WebKit encountered an internal error/;
  page.on('console', m => { if (m.type() === 'error' && !offline.test(m.text())) problems.push(m.text()); });
  page.on('pageerror', e => problems.push(String(e)));
  return problems;
}

async function open(context, doc) {
  const page = await context.newPage();
  const problems = watch(page);
  await page.goto(`/d/${doc}`);
  await expect(page.locator('#tandem-status')).toHaveText(/Saved/, { timeout: 30_000 });
  return { page, problems };
}

const serverText = async (request, doc) => (await request.get(`/doc/${doc}/text`)).text();

async function converge(request, doc, pages, timeout = 30_000) {
  await expect.poll(async () => {
    const values = await Promise.all(pages.map(p => editor(p).inputValue()));
    const server = await serverText(request, doc);
    return values.every(v => v === server) ? server : `${JSON.stringify(values)} vs ${JSON.stringify(server)}`;
  }, { timeout }).not.toMatch(/ vs /);
  return serverText(request, doc);
}

test('typing is saved to the server', async ({ browser, request }) => {
  const doc = docName();
  const context = await browser.newContext();
  const { page, problems } = await open(context, doc);
  await editor(page).click();
  await page.keyboard.type('Hello, Tandem!');
  await expect(page.locator('#tandem-status')).toHaveText(/Saved/);
  await expect.poll(() => serverText(request, doc)).toBe('Hello, Tandem!');
  // Edits in the middle, and deletions.
  await page.keyboard.press('Home');
  await page.keyboard.press('ArrowRight');
  await page.keyboard.press('ArrowRight');
  await page.keyboard.press('ArrowRight');
  await page.keyboard.press('ArrowRight');
  await page.keyboard.press('ArrowRight');
  await page.keyboard.type(' there');
  await page.keyboard.press('End');
  await page.keyboard.press('Backspace');
  await expect.poll(() => serverText(request, doc)).toBe('Hello there, Tandem');
  // A new page shows the saved text.
  const second = await open(context, doc);
  await expect(editor(second.page)).toHaveValue('Hello there, Tandem');
  expect(problems).toEqual([]);
  expect(second.problems).toEqual([]);
  await context.close();
});

test('two browsers edit at once and see each other live', async ({ browser, request }) => {
  const doc = docName();
  const a = await open(await browser.newContext(), doc);
  const b = await open(await browser.newContext(), doc);
  await editor(a.page).click();
  await a.page.keyboard.type('From A. ');
  await expect(editor(b.page)).toHaveValue('From A. ', { timeout: 20_000 });
  await editor(b.page).click();
  await b.page.keyboard.press('End');
  await b.page.keyboard.type('From B.');
  await expect(editor(a.page)).toHaveValue('From A. From B.', { timeout: 20_000 });
  // Both type at the same place at the same time: never interleaved.
  await editor(a.page).click(); await a.page.keyboard.press('End');
  await editor(b.page).click(); await b.page.keyboard.press('End');
  await Promise.all([a.page.keyboard.type(' alpha', { delay: 15 }), b.page.keyboard.type(' omega', { delay: 15 })]);
  const final = await converge(request, doc, [a.page, b.page]);
  expect(final.startsWith('From A. From B.')).toBe(true);
  const tail = final.slice('From A. From B.'.length);
  expect([' alpha omega', ' omega alpha']).toContain(tail);
  expect(a.problems).toEqual([]);
  expect(b.problems).toEqual([]);
});

test('offline edits merge when the network comes back', async ({ browser, request }) => {
  const doc = docName();
  const ca = await browser.newContext(), cb = await browser.newContext();
  const a = await open(ca, doc), b = await open(cb, doc);
  await editor(a.page).click();
  await a.page.keyboard.type('shared line\n');
  await expect(editor(b.page)).toHaveValue('shared line\n', { timeout: 20_000 });
  await cb.setOffline(true);
  await editor(b.page).click();
  await b.page.keyboard.press('End');
  await b.page.keyboard.type('written offline');
  await expect(b.page.locator('#tandem-status')).toHaveText(/Offline/, { timeout: 20_000 });
  await a.page.keyboard.type('written online\n');
  await expect.poll(() => serverText(request, doc)).toBe('shared line\nwritten online\n');
  await cb.setOffline(false);
  const final = await converge(request, doc, [a.page, b.page], 45_000);
  expect(final).toContain('written offline');
  expect(final).toContain('written online');
  expect(final.startsWith('shared line\n')).toBe(true);
  expect(a.problems).toEqual([]);
  expect(b.problems).toEqual([]);
});

test('edits made offline survive closing the page', async ({ browser, request }) => {
  const doc = docName();
  const context = await browser.newContext();
  const first = await open(context, doc);
  await editor(first.page).click();
  await first.page.keyboard.type('online ');
  await expect.poll(() => serverText(request, doc)).toBe('online ');
  await context.setOffline(true);
  await first.page.keyboard.type('offline');
  await expect(first.page.locator('#tandem-status')).toHaveText(/Offline/, { timeout: 20_000 });
  await first.page.waitForTimeout(800);   // the state is saved after 400 ms
  await first.page.close();
  await context.setOffline(false);
  const second = await open(context, doc);
  await expect(editor(second.page)).toHaveValue('online offline');
  await expect.poll(() => serverText(request, doc), { timeout: 20_000 }).toBe('online offline');
  expect(second.problems).toEqual([]);
});

test('the caret stays put when other people insert before it', async ({ browser, request }) => {
  const doc = docName();
  const a = await open(await browser.newContext(), doc);
  const b = await open(await browser.newContext(), doc);
  await editor(a.page).click();
  await a.page.keyboard.type('world');
  await expect(editor(b.page)).toHaveValue('world', { timeout: 20_000 });
  await editor(b.page).click();
  await b.page.keyboard.press('Home');
  await b.page.keyboard.type('hello ');
  await expect(editor(a.page)).toHaveValue('hello world', { timeout: 20_000 });
  // A's caret was at the end of "world": typing continues there.
  await a.page.keyboard.type('!');
  await converge(request, doc, [a.page, b.page]);
  expect(await serverText(request, doc)).toBe('hello world!');
});
