// The live preview: it renders the sample on load, follows every edit,
// agrees with the server's rendering (the same Lean function, on the
// server's runtime), and never runs anything from the Markdown.
import { expect, test } from '@playwright/test';

const hostile = [
  '# Attack <img src=x onerror="window.__pwned=1">',
  '',
  '<script>window.__pwned = 2</script>',
  '',
  '<iframe src="javascript:window.__pwned=3"></iframe>',
  '',
  '[click](javascript:window.__pwned=4) ![i](javascript:x) <a href="x" onclick="window.__pwned=5">a</a>',
  '',
  '<svg onload="window.__pwned=6"></svg> &lt;b&gt; `<b>`',
].join('\n');

test('the sample renders on load', async ({ page }) => {
  await page.goto('/');
  await expect(page.getByRole('heading', { name: 'Folio live preview', level: 1 })).toBeVisible();
  const preview = page.locator('#preview');
  await expect(preview.locator('h1')).toHaveText('Hello, Folio');
  await expect(preview.locator('strong')).toHaveText('Markdown');
  await expect(preview.locator('li')).toHaveCount(2);
  await expect(preview.locator('blockquote a')).toHaveAttribute('href', 'https://commonmark.org');
  await expect(preview.locator('script')).toHaveCount(0);
  await expect(preview).toContainText('<script>alert(1)</script>');
});

test('the preview follows every edit', async ({ page }) => {
  await page.goto('/');
  const source = page.getByRole('textbox', { name: 'Markdown' });
  await source.fill('');
  await source.pressSequentially('*one* **two**\n\n1. a\n2. b\n\n```\ncode <x>\n```\n');
  const preview = page.locator('#preview');
  await expect(preview.locator('em')).toHaveText('one');
  await expect(preview.locator('strong')).toHaveText('two');
  await expect(preview.locator('ol > li')).toHaveCount(2);
  await expect(preview.locator('pre code')).toHaveText('code <x>\n');
  await source.fill('# Replaced');
  await expect(preview.locator('h1')).toHaveText('Replaced');
  await expect(preview.locator('ol')).toHaveCount(0);
});

test('the page and the server render the same HTML', async ({ page, request }) => {
  await page.goto('/');
  const docs = ['', '# a\n\n* b\n* c\n', hostile, '> [x][y]\n\n[y]: /u "t"\n', '***a** b*\n\n    code\n\n<div>\n*x*\n</div>\n'];
  for (const md of docs) {
    await page.getByRole('textbox', { name: 'Markdown' }).fill(md);
    const server = await (await request.post('/api/render', { data: md, headers: { 'content-type': 'text/plain' } })).text();
    await expect(page.locator('#html')).toHaveText(server);
  }
});

test('nothing in the Markdown runs', async ({ page }) => {
  const dialogs = [];
  page.on('dialog', d => { dialogs.push(d.message()); d.dismiss(); });
  await page.goto('/');
  await page.getByRole('textbox', { name: 'Markdown' }).fill(hostile);
  const preview = page.locator('#preview');
  await expect(preview.locator('h1')).toContainText('Attack');
  await expect(preview).toContainText('<script>window.__pwned = 2</script>');
  await expect(preview.locator('script, iframe, svg, img[onerror], [onclick], [onload]')).toHaveCount(0);
  // the only element with a src is the image, and its unsafe URL was dropped
  await expect(preview.locator('img')).toHaveAttribute('src', '');
  await expect(preview.locator('a').first()).not.toHaveAttribute('href', /javascript/);
  await page.waitForTimeout(500);
  expect(await page.evaluate(() => window.__pwned)).toBeUndefined();
  expect(dialogs).toEqual([]);
  // every element in the preview is one of Folio's
  const tags = await preview.evaluate(el => [...el.querySelectorAll('*')].map(e => e.localName));
  const folio = new Set(['p', 'h1', 'h2', 'h3', 'h4', 'h5', 'h6', 'ul', 'ol', 'li', 'blockquote', 'pre', 'code', 'em', 'strong', 'a', 'hr', 'br', 'img']);
  expect(tags.filter(t => !folio.has(t))).toEqual([]);
});
