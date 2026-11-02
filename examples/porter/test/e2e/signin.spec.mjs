// A person signs in and consents in a real browser, through the Lasm.UI
// pages (Frontend/Ui.lean), and the application exchanges the code it gets
// (oauth4webapi checks the response and the ID token). Also: a wrong
// password, denying, the pages without JavaScript, and no Content Security
// Policy violation or script error on the way.
import { expect, test } from '@playwright/test';
import { createHash, randomBytes } from 'node:crypto';
import * as oauth from 'oauth4webapi';
import { cb, clients, users } from '../config.mjs';

const verifierPair = () => {
  const verifier = randomBytes(32).toString('base64url');
  return { verifier, challenge: createHash('sha256').update(verifier).digest('base64url') };
};

function authUrl(baseURL, params) {
  const url = new URL('/authorize', baseURL);
  for (const [k, v] of Object.entries({ client_id: clients.basic.client_id, redirect_uri: cb, response_type: 'code',
    scope: 'openid profile email', state: 'e2e', code_challenge_method: 'S256', ...params })) url.searchParams.set(k, v);
  return url.toString();
}

/** The redirect to the client's URI (nothing listens there: the browser's
request is all the test needs). A redirected navigation is not routed, so it
is caught as a request. */
async function catchCallback(page) {
  return page.waitForRequest(r => r.url().startsWith('http://127.0.0.1:59999/'), { timeout: 20_000 }).then(r => r.url());
}

/** Collects console errors and CSP violations. */
function watch(page) {
  const problems = [];
  page.on('console', m => { if (m.type() === 'error') problems.push(m.text()); });
  page.on('pageerror', e => problems.push(String(e)));
  return problems;
}

test('sign in and consent with the browser app, then the code works', async ({ page, baseURL }) => {
  const problems = watch(page);
  const { verifier, challenge } = verifierPair();
  const callback = catchCallback(page);
  await page.goto(authUrl(baseURL, { code_challenge: challenge, nonce: 'n-e2e', prompt: 'consent' }));
  // The app mounts (Lasm.UI) and shows the sign-in form.
  await expect(page.locator('[data-porter-ui="login"]')).toBeVisible();
  await expect(page.getByRole('heading', { name: 'Sign in' })).toBeVisible();
  await expect(page.getByText('Basic ES256')).toBeVisible();
  await page.locator('#username').fill('alice');
  await page.locator('#password').fill(users.alice.password);
  // Show password switches the field's type.
  await page.locator('#show-password').check();
  await expect(page.locator('#password')).toHaveAttribute('type', 'text');
  await page.locator('#sign-in').click();
  // The consent page, by the app, lists the scopes.
  await expect(page.locator('[data-porter-ui="consent"]')).toBeVisible();
  await expect(page.getByRole('heading', { name: 'Allow Basic ES256?' })).toBeVisible();
  await expect(page.locator('#scopes li')).toHaveCount(3);
  await expect(page.locator('[data-scope="email"]')).toHaveText('Your email address');
  await page.locator('#allow').click();
  const url = new URL(await callback);
  expect(url.searchParams.get('state')).toBe('e2e');
  // The application's side: oauth4webapi checks the response and redeems the code.
  const issuer = new URL(baseURL);
  const opts = { [oauth.allowInsecureRequests]: true };
  const as = await oauth.processDiscoveryResponse(issuer, await oauth.discoveryRequest(issuer, opts));
  const client = { client_id: clients.basic.client_id, id_token_signed_response_alg: 'ES256' };
  const params = oauth.validateAuthResponse(as, client, url, 'e2e');
  const response = await oauth.authorizationCodeGrantRequest(as, client, oauth.ClientSecretBasic(clients.basic.client_secret),
    params, cb, verifier, opts);
  const result = await oauth.processAuthorizationCodeResponse(as, client, response, { expectedNonce: 'n-e2e', requireIdToken: true });
  expect(oauth.getValidatedIdTokenClaims(result).sub).toBe(users.alice.sub);
  expect(problems).toEqual([]);
});

test('a wrong password shows the error, and the right one then works', async ({ page, baseURL }) => {
  const problems = watch(page);
  await page.goto(authUrl(baseURL, { code_challenge: verifierPair().challenge }));
  await expect(page.locator('[data-porter-ui="login"]')).toBeVisible();
  await page.locator('#username').fill('alice');
  await page.locator('#password').fill('not the password');
  await page.locator('#sign-in').click();
  await expect(page.getByRole('alert')).toHaveText('The username or password is incorrect.');
  await expect(page.locator('#password')).toHaveValue('');
  expect(problems).toEqual([]);
});

test('denying sends access_denied to the application', async ({ page, baseURL }) => {
  const callback = catchCallback(page);
  await page.goto(authUrl(baseURL, { code_challenge: verifierPair().challenge, client_id: clients.pub.client_id, prompt: 'consent' }));
  await page.locator('#username').fill('bob');
  await page.locator('#password').fill(users.bob.password);
  await page.locator('#sign-in').click();
  await expect(page.locator('[data-porter-ui="consent"]')).toBeVisible();
  await page.locator('#deny').click();
  const url = new URL(await callback);
  expect(url.searchParams.get('error')).toBe('access_denied');
  expect(url.searchParams.get('iss')).toBe(baseURL.replace(/\/$/, ''));
});

test.describe('without JavaScript', () => {
  test.use({ javaScriptEnabled: false });
  test('the same pages work as plain forms', async ({ page, baseURL }) => {
    const callback = catchCallback(page);
    await page.goto(authUrl(baseURL, { code_challenge: verifierPair().challenge, prompt: 'consent' }));
    await page.locator('input[name="username"]').fill('alice');
    await page.locator('input[name="password"]').fill(users.alice.password);
    await page.getByRole('button', { name: 'Sign in' }).click();
    await page.getByRole('button', { name: 'Allow' }).click();
    expect(new URL(await callback).searchParams.get('code')).toBeTruthy();
  });
});
