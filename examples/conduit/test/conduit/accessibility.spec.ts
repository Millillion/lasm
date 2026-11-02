// The two accessibility fixes of SPEC.md section 4 in the browser:
// L6, a Markdown link with empty text shows its target; L7, the comment-delete
// and tag-remove icons are buttons the keyboard reaches and presses.
import { test, expect, type APIRequestContext, type Locator, type Page } from '@playwright/test';

const unique = () => `${Date.now().toString(36)}${Math.random().toString(36).slice(2, 7)}`;

async function register(request: APIRequestContext) {
  const id = unique();
  const user = { username: `a11y${id}`, email: `a11y${id}@example.com`, password: 'correct horse battery' };
  const res = await request.post('/api/users', { data: { user } });
  expect(res.status()).toBe(201);
  return { ...user, token: (await res.json()).user.token as string };
}

async function article(request: APIRequestContext, token: string, body: string) {
  const res = await request.post('/api/articles', {
    headers: { Authorization: `Token ${token}` },
    data: { article: { title: `Links ${unique()}`, description: 'Links with and without text', body, tagList: [] } },
  });
  expect(res.status()).toBe(201);
  return (await res.json()).article.slug as string;
}

/** Tab from `from` reaches `target`. WebKit (as Safari by default) tabs only
between form fields, so there the button is focused directly: still only
possible for a focusable element. */
async function tabTo(page: Page, browserName: string, from: Locator, target: Locator) {
  if (browserName === 'webkit') await target.focus();
  else {
    await from.focus();
    await page.keyboard.press('Tab');
  }
  await expect(target).toBeFocused();
}

async function signIn(page: Page, email: string, password: string) {
  await page.goto('/login');
  await page.getByPlaceholder('Email').fill(email);
  await page.getByPlaceholder('Password').fill(password);
  await page.getByRole('button', { name: 'Sign in' }).click();
  await expect(page).toHaveURL(/\/$/);
}

test('a Markdown link with empty text shows its target (L6)', async ({ page, request }) => {
  const me = await register(request);
  const slug = await article(request, me.token,
    'See [](https://example.com/empty), [ ](/blank), [named](https://example.com/named), []( ) and [](javascript:alert(1)).');
  await page.goto(`/article/${slug}`);
  const body = page.locator('.article-content');
  await expect(body.locator('a[href="https://example.com/empty"]')).toHaveText('https://example.com/empty');
  await expect(body.locator('a[href="/blank"]')).toHaveText('/blank');
  await expect(body.locator('a[href="https://example.com/named"]')).toHaveText('named');
  // An empty target and empty text: nothing to show or follow, so it stays text.
  await expect(body).toContainText('[]( )');
  // An unsafe target is still `#`, and shown as such.
  await expect(body.locator('a[href^="javascript"]')).toHaveCount(0);
  await expect(body.locator('a[href="#"]')).toHaveText('#');
  for (const link of await body.locator('a').all()) expect((await link.innerText()).trim()).not.toBe('');
});

test('the comment-delete button is reached and pressed from the keyboard (L7)', async ({ page, request, browserName }) => {
  const me = await register(request);
  const slug = await article(request, me.token, 'An article to comment on.');
  const comment = `A comment to delete ${unique()}`;
  const res = await request.post(`/api/articles/${slug}/comments`, {
    headers: { Authorization: `Token ${me.token}` }, data: { comment: { body: comment } },
  });
  expect(res.status()).toBe(201);
  await signIn(page, me.email, me.password);
  await page.goto(`/article/${slug}`);
  const card = page.locator('.card', { hasText: comment });
  const remove = card.getByRole('button', { name: 'Delete comment' });
  await expect(remove).toHaveAttribute('type', 'button');
  // Tab from the author's name link, the element before it, reaches the button.
  await tabTo(page, browserName, card.locator('.comment-author').last(), remove);
  await page.keyboard.press('Enter');
  await expect(page.locator('.card', { hasText: comment })).toHaveCount(0);
});

test('the tag-remove button is reached and pressed from the keyboard (L7)', async ({ page, request, browserName }) => {
  const me = await register(request);
  await signIn(page, me.email, me.password);
  await page.goto('/editor');
  const tags = page.getByPlaceholder('Enter tags');
  for (const tag of ['first', 'second']) {
    await tags.fill(tag);
    await tags.press('Enter');
  }
  const remove = page.getByRole('button', { name: 'Remove tag first' });
  await expect(remove).toHaveAttribute('type', 'button');
  await tabTo(page, browserName, tags, remove);
  await page.keyboard.press('Space');
  await expect(page.locator('.tag-list .tag-pill')).toHaveText([/second/]);
  await page.getByRole('button', { name: 'Remove tag second' }).press('Enter');
  await expect(page.locator('.tag-list .tag-pill')).toHaveCount(0);
});
