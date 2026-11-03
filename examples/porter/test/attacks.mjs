// The adversarial suite: attacks from RFC 6749 §10, RFC 6819 (the OAuth 2.0
// threat model), RFC 9700 (the OAuth 2.0 Security Best Current Practice) and
// OpenID Connect Core, each sent to a running Porter over HTTP, each with the
// answer a safe provider must give. Every check names the section it comes
// from. Raw HTTP, no client library: the attacker does not follow the rules.
//
//   node test/attacks.mjs [--url URL | --command CMD | --platform NAME] [--name NAME]
import assert from 'node:assert/strict';
import { createHash, randomBytes } from 'node:crypto';
import { Browser, harness, serverArgs, startPorter } from './server.mjs';
import { cb, clients, users } from './config.mjs';

const args = serverArgs();
const server = await startPorter(args);
const base = server.base;
const t = harness(`Adversarial suite${args.name ? ` (${args.name})` : ''}`);

const b64url = b => Buffer.from(b).toString('base64url');
const verifierPair = () => {
  const verifier = b64url(randomBytes(32));
  return { verifier, challenge: b64url(createHash('sha256').update(verifier).digest()) };
};

/** An authorization URL with sensible defaults, any parameter overridden (null removes it). */
function authUrl(params = {}) {
  const url = new URL(`${base}/authorize`);
  const all = { client_id: clients.basic.client_id, redirect_uri: cb, response_type: 'code',
    scope: 'openid profile offline_access', state: 'st', code_challenge_method: 'S256', ...params };
  for (const [k, v] of Object.entries(all)) if (v !== null) url.searchParams.append(k, v);
  return url.toString();
}

/** Signs alice in and returns a fresh code for a client, with its verifier. */
async function getCode(c = clients.basic, { browser = new Browser(base), redirect_uri = cb, scope } = {}) {
  const { verifier, challenge } = verifierPair();
  const location = await browser.authorize(authUrl({ client_id: c.client_id, redirect_uri, code_challenge: challenge,
    ...(scope ? { scope } : {}) }));
  const u = new URL(location);
  assert.equal(u.searchParams.get('iss'), base);
  return { code: u.searchParams.get('code'), verifier, challenge, browser, location };
}

/** A token request with arbitrary form fields and client credentials. */
async function tokenRequest(form, { basic, headers = {} } = {}) {
  const h = { 'content-type': 'application/x-www-form-urlencoded', ...headers };
  if (basic) h.authorization = 'Basic ' + Buffer.from(`${encodeURIComponent(basic[0])}:${encodeURIComponent(basic[1])}`).toString('base64');
  const res = await fetch(`${base}/token`, { method: 'POST', headers: h, body: new URLSearchParams(form).toString() });
  const text = await res.text();
  let body; try { body = JSON.parse(text); } catch { body = text; }
  return { status: res.status, body, headers: res.headers, text };
}

const basicAuth = c => ({ basic: [c.client_id, c.client_secret] });
const redeem = (c, code, verifier, extra = {}) =>
  tokenRequest({ grant_type: 'authorization_code', code, redirect_uri: cb, code_verifier: verifier, ...extra }, basicAuth(c));
const userinfo = token => fetch(`${base}/userinfo`, { headers: { authorization: `Bearer ${token}` } });
const refresh = (c, rt, extra = {}) => tokenRequest({ grant_type: 'refresh_token', refresh_token: rt, ...extra }, basicAuth(c));

function assertError(res, status, error) {
  assert.equal(res.status, status, `status ${res.status}: ${res.text}`);
  assert.equal(res.body.error, error);
}

/** The answer to an authorization request, without following anything. */
async function authorizeRaw(url, browser = new Browser(base)) { return browser.request(url); }

function assertNoRedirect(res) {
  assert.equal(res.status >= 400, true, `status ${res.status}`);
  assert.equal(res.location, null, 'no Location header');
}

function assertErrorRedirect(res, error, uri = cb) {
  assert.equal(res.status, 303);
  const u = new URL(res.location);
  assert.equal(u.origin + u.pathname, uri);
  assert.equal(u.searchParams.get('error'), error);
  assert.equal(u.searchParams.get('iss'), base);
  assert.equal(u.searchParams.get('code'), null);
}

// ---------------------------------------------------------------------------
console.log('Authorization codes');

await t.check('code replay (RFC 6749 §4.1.2, §10.5): the second redemption fails and revokes the first one\'s tokens', async () => {
  const { code, verifier } = await getCode();
  const first = await redeem(clients.basic, code, verifier);
  assert.equal(first.status, 200);
  assert.equal((await userinfo(first.body.access_token)).status, 200);
  assertError(await redeem(clients.basic, code, verifier), 400, 'invalid_grant');
  assert.equal((await userinfo(first.body.access_token)).status, 401, 'the access token is revoked');
  assertError(await refresh(clients.basic, first.body.refresh_token), 400, 'invalid_grant');
});

await t.check('concurrent redemption of one code (RFC 9700 §4.5): exactly one succeeds', async () => {
  const { code, verifier } = await getCode();
  const results = await Promise.all(Array.from({ length: 12 }, () => redeem(clients.basic, code, verifier)));
  assert.equal(results.filter(r => r.status === 200).length, 1, results.map(r => r.status).join(','));
  for (const r of results.filter(r => r.status !== 200)) assertError(r, 400, 'invalid_grant');
});

await t.check('code injection (RFC 9700 §4.5): another client\'s code is refused, and stays usable by its client', async () => {
  const { code, verifier } = await getCode(clients.basic);
  assertError(await redeem(clients.other, code, verifier), 400, 'invalid_grant');
  assert.equal((await redeem(clients.basic, code, verifier)).status, 200);
});

await t.check('a code for one redirect_uri, redeemed with another (RFC 6749 §4.1.3) is refused', async () => {
  const { code, verifier } = await getCode();
  assertError(await redeem(clients.basic, code, verifier, { redirect_uri: cb + '?existing=1' }), 400, 'invalid_grant');
  assertError(await redeem(clients.basic, code, verifier, { redirect_uri: cb + '/' }), 400, 'invalid_grant');
});

await t.check('a redirect_uri with a query keeps it and adds the code with & (RFC 6749 §3.1.2)', async () => {
  const { location } = await getCode(clients.basic, { redirect_uri: cb + '?existing=1' });
  assert.match(location, /^http:\/\/127\.0\.0\.1:9\/cb\?existing=1&code=/);
});

await t.check('made-up and malformed codes are refused', async () => {
  const { verifier } = verifierPair();
  for (const code of ['x', b64url(randomBytes(32)), 'a'.repeat(600), '%00', '../../etc/passwd'])
    assert.ok([400].includes((await redeem(clients.basic, code, verifier)).status));
});

// ---------------------------------------------------------------------------
console.log('PKCE');

await t.check('PKCE: no code_verifier is invalid_request; a wrong one is invalid_grant (RFC 7636 §4.6)', async () => {
  const { code, verifier } = await getCode();
  assertError(await redeem(clients.basic, code, undefined, { code_verifier: '' }), 400, 'invalid_request');
  assertError(await redeem(clients.basic, code, verifierPair().verifier), 400, 'invalid_grant');
  assert.equal((await redeem(clients.basic, code, verifier)).status, 200, 'the right verifier still works');
});

await t.check('PKCE downgrade (RFC 9700 §2.1.1, §4.8): the challenge itself as the verifier is refused', async () => {
  const { code, challenge } = await getCode();
  assertError(await redeem(clients.basic, code, challenge), 400, 'invalid_grant');
});

await t.check('PKCE downgrade: plain, a missing method or a missing challenge is refused at /authorize', async () => {
  const { challenge } = verifierPair();
  assertErrorRedirect(await authorizeRaw(authUrl({ code_challenge: challenge, code_challenge_method: 'plain' })), 'invalid_request');
  assertErrorRedirect(await authorizeRaw(authUrl({ code_challenge: challenge, code_challenge_method: null })), 'invalid_request');
  assertErrorRedirect(await authorizeRaw(authUrl({ code_challenge: null })), 'invalid_request');
  assertErrorRedirect(await authorizeRaw(authUrl({ code_challenge: 'short' })), 'invalid_request');
});

await t.check('PKCE: malformed verifiers (too short, too long, bad characters) are invalid_request', async () => {
  const { code } = await getCode();
  for (const v of ['a'.repeat(42), 'a'.repeat(129), 'a'.repeat(42) + ' ', 'a'.repeat(42) + '/'])
    assertError(await redeem(clients.basic, code, v), 400, 'invalid_request');
});

// ---------------------------------------------------------------------------
console.log('Redirect URIs and open redirects');

await t.check('redirect_uri tricks (RFC 6749 §10.6, RFC 9700 §4.1): only the exact registered URI; never a redirect', async () => {
  const { challenge } = verifierPair();
  const tricks = [
    'http://127.0.0.1:9/cb/', 'http://127.0.0.1:9/CB', 'HTTP://127.0.0.1:9/cb', 'http://127.0.0.1:9/cb/../evil',
    'http://127.0.0.1:9/cb#frag', 'http://127.0.0.1:9/cb?x=1', 'http://127.0.0.1:9/cb?existing=1&x=2',
    'http://127.0.0.1:9@evil.example/cb', 'http://evil.example/cb', 'http://127.0.0.1:9/%63b', 'http://127.0.0.1:9/cb%20',
    'http://127.0.0.1:9/cbx', 'http://127.0.0.1:90/cb', '//evil.example/cb', 'javascript:alert(1)', ' http://127.0.0.1:9/cb',
    'http://127.0.0.1:9/other', // another client's URI
  ];
  for (const uri of tricks) {
    const res = await authorizeRaw(authUrl({ redirect_uri: uri, code_challenge: challenge }));
    assertNoRedirect(res);
    assert.equal(res.status, 400, uri);
  }
  assertNoRedirect(await authorizeRaw(authUrl({ redirect_uri: null, code_challenge: challenge })));
  const twice = new URL(authUrl({ code_challenge: challenge }));
  twice.searchParams.append('redirect_uri', cb);
  assertNoRedirect(await authorizeRaw(twice.toString()));
});

await t.check('an unknown client never redirects, even to a URI registered for another client (RFC 6749 §4.1.2.1)', async () => {
  const { challenge } = verifierPair();
  assertNoRedirect(await authorizeRaw(authUrl({ client_id: 'nobody', code_challenge: challenge })));
  assertNoRedirect(await authorizeRaw(authUrl({ client_id: null, code_challenge: challenge })));
});

await t.check('open redirect via logout (OpenID RP-Initiated Logout §3): unregistered post_logout_redirect_uri is refused', async () => {
  for (const params of [
    { client_id: clients.basic.client_id, post_logout_redirect_uri: 'http://evil.example/' },
    { client_id: clients.basic.client_id, post_logout_redirect_uri: 'http://127.0.0.1:9/bye/' },
    { post_logout_redirect_uri: 'http://127.0.0.1:9/bye' },
    { client_id: 'nobody', post_logout_redirect_uri: 'http://127.0.0.1:9/bye' },
    { client_id: clients.post.client_id, post_logout_redirect_uri: 'http://127.0.0.1:9/bye' }, // not registered for it
  ]) {
    const res = await new Browser(base).request(`${base}/logout`, { method: 'POST', form: { ...params, confirm: 'yes' } });
    assertNoRedirect(res);
  }
});

await t.check('errors after the redirect URI is trusted go to it, with iss and the state (RFC 6749 §4.1.2.1, RFC 9207)', async () => {
  const { challenge } = verifierPair();
  assertErrorRedirect(await authorizeRaw(authUrl({ response_type: 'token', code_challenge: challenge })), 'unsupported_response_type');
  assertErrorRedirect(await authorizeRaw(authUrl({ response_type: 'code id_token', code_challenge: challenge })), 'unsupported_response_type');
  assertErrorRedirect(await authorizeRaw(authUrl({ response_mode: 'fragment', code_challenge: challenge })), 'invalid_request');
  assertErrorRedirect(await authorizeRaw(authUrl({ scope: 'profile', code_challenge: challenge })), 'invalid_scope');
  assertErrorRedirect(await authorizeRaw(authUrl({ request: 'eyJ.x.y', code_challenge: challenge })), 'request_not_supported');
  assertErrorRedirect(await authorizeRaw(authUrl({ request_uri: 'https://evil.example/r', code_challenge: challenge })), 'request_uri_not_supported');
  assertErrorRedirect(await authorizeRaw(authUrl({ prompt: 'none login', code_challenge: challenge })), 'invalid_request');
  const twice = new URL(authUrl({ code_challenge: challenge }));
  twice.searchParams.append('scope', 'openid');
  const res = await authorizeRaw(twice.toString());
  assertErrorRedirect(res, 'invalid_request');
  assert.equal(new URL(res.location).searchParams.get('state'), 'st');
});

// ---------------------------------------------------------------------------
console.log('Mix-up and token substitution');

await t.check('mix-up (RFC 9700 §4.4, RFC 9207): every authorization response names this issuer', async () => {
  const { location } = await getCode();
  assert.equal(new URL(location).searchParams.get('iss'), base);
  const d = await (await fetch(`${base}/.well-known/openid-configuration`)).json();
  assert.equal(d.authorization_response_iss_parameter_supported, true);
});

await t.check('token substitution (OIDC Core §3.1.3.7): an ID token names its client as aud, and another client cannot refresh', async () => {
  const { code, verifier } = await getCode(clients.basic);
  const res = await redeem(clients.basic, code, verifier);
  const payload = JSON.parse(Buffer.from(res.body.id_token.split('.')[1], 'base64url'));
  assert.equal(payload.aud, clients.basic.client_id);
  assert.equal(payload.iss, base);
  assertError(await refresh(clients.other, res.body.refresh_token), 400, 'invalid_grant');
  assert.equal((await refresh(clients.basic, res.body.refresh_token)).status, 200, 'still the owner\'s');
});

await t.check('tokens of one kind are not accepted as another', async () => {
  const { code, verifier } = await getCode();
  const res = await redeem(clients.basic, code, verifier);
  assertError(await refresh(clients.basic, res.body.access_token), 400, 'invalid_grant');
  const asRefresh = await refresh(clients.basic, res.body.id_token);
  assert.equal(asRefresh.status, 400);
  assert.ok(['invalid_grant', 'invalid_request'].includes(asRefresh.body.error));
  assert.equal((await userinfo(res.body.refresh_token)).status, 401);
  assert.equal((await userinfo(res.body.id_token)).status, 401);
  assertError(await redeem(clients.basic, res.body.access_token, verifierPair().verifier), 400, 'invalid_grant');
});

await t.check('access tokens are accepted only in the Authorization header (RFC 9700 §4.3.2)', async () => {
  const { code, verifier } = await getCode();
  const res = await redeem(clients.basic, code, verifier);
  assert.equal((await fetch(`${base}/userinfo?access_token=${res.body.access_token}`)).status, 401);
  const post = await fetch(`${base}/userinfo`, { method: 'POST', headers: { 'content-type': 'application/x-www-form-urlencoded' },
    body: `access_token=${res.body.access_token}` });
  assert.equal(post.status, 401);
  assert.match(post.headers.get('www-authenticate'), /^Bearer/);
});

// ---------------------------------------------------------------------------
console.log('Refresh tokens');

await t.check('refresh token reuse (RFC 9700 §4.14.2): the rotated token revokes the whole family', async () => {
  const { code, verifier } = await getCode();
  const t0 = (await redeem(clients.basic, code, verifier)).body;
  const t1 = (await refresh(clients.basic, t0.refresh_token)).body;
  const t2 = (await refresh(clients.basic, t1.refresh_token)).body;
  assert.ok(t2.refresh_token);
  assert.equal((await userinfo(t2.access_token)).status, 200);
  assertError(await refresh(clients.basic, t0.refresh_token), 400, 'invalid_grant'); // the reuse
  assertError(await refresh(clients.basic, t2.refresh_token), 400, 'invalid_grant'); // the newest, revoked
  assert.equal((await userinfo(t2.access_token)).status, 401, 'the family\'s access tokens too');
  assert.equal((await userinfo(t0.access_token)).status, 401);
});

await t.check('concurrent refreshes of one token: at most one succeeds', async () => {
  const { code, verifier } = await getCode();
  const t0 = (await redeem(clients.basic, code, verifier)).body;
  const results = await Promise.all(Array.from({ length: 8 }, () => refresh(clients.basic, t0.refresh_token)));
  assert.ok(results.filter(r => r.status === 200).length <= 1, results.map(r => r.status).join(','));
});

await t.check('a refresh never widens the scope (RFC 6749 §6)', async () => {
  const { code, verifier } = await getCode(clients.basic, { scope: 'openid offline_access' });
  const t0 = (await redeem(clients.basic, code, verifier)).body;
  assert.equal(t0.scope, 'openid offline_access');
  assertError(await refresh(clients.basic, t0.refresh_token, { scope: 'openid offline_access email' }), 400, 'invalid_scope');
  const t1 = await refresh(clients.basic, t0.refresh_token, { scope: 'openid' });
  assert.equal(t1.status, 200);
  assert.equal(t1.body.scope, 'openid');
  // The family keeps its scope: the next refresh may ask for offline_access again.
  const t2 = await refresh(clients.basic, t1.body.refresh_token, { scope: 'openid offline_access' });
  assert.equal(t2.status, 200);
});

// ---------------------------------------------------------------------------
console.log('Client authentication');

await t.check('client authentication (RFC 6749 §2.3, §5.2): wrong, missing, doubled or misplaced credentials', async () => {
  const { code, verifier } = await getCode();
  const form = { grant_type: 'authorization_code', code, redirect_uri: cb, code_verifier: verifier };
  const wrong = await tokenRequest(form, { basic: [clients.basic.client_id, 'wrong'] });
  assertError(wrong, 401, 'invalid_client');
  assert.match(wrong.headers.get('www-authenticate'), /^Basic/);
  assertError(await tokenRequest({ ...form, client_id: clients.basic.client_id }), 401, 'invalid_client');
  assertError(await tokenRequest({ ...form, client_secret: clients.basic.client_secret }, basicAuth(clients.basic)), 400, 'invalid_request');
  assertError(await tokenRequest({ ...form, client_id: clients.other.client_id }, basicAuth(clients.basic)), 400, 'invalid_request');
  assertError(await tokenRequest({ ...form, client_id: clients.pub.client_id, client_secret: 'anything' }), 401, 'invalid_client');
  assertError(await tokenRequest({ ...form, client_id: 'nobody' }), 401, 'invalid_client');
  assertError(await tokenRequest(form), 401, 'invalid_client');
  assertError(await tokenRequest(form, { basic: ['', ''] }), 401, 'invalid_client');
  assert.equal((await redeem(clients.basic, code, verifier)).status, 200, 'none of that spent the code');
});

await t.check('token requests: repeated parameters, unknown grants, the wrong content type, GET', async () => {
  const { code, verifier } = await getCode();
  const body = `grant_type=authorization_code&code=${code}&code=${code}&redirect_uri=${encodeURIComponent(cb)}&code_verifier=${verifier}`;
  const res = await fetch(`${base}/token`, { method: 'POST', body, headers: { 'content-type': 'application/x-www-form-urlencoded',
    authorization: 'Basic ' + Buffer.from('basic-es256:basic-es256-secret').toString('base64') } });
  assert.equal(res.status, 400);
  assert.equal((await res.json()).error, 'invalid_request');
  assertError(await tokenRequest({ grant_type: 'password', username: 'alice', password: 'wonderland' }, basicAuth(clients.basic)), 400, 'unsupported_grant_type');
  assertError(await tokenRequest({ grant_type: 'client_credentials' }, basicAuth(clients.basic)), 400, 'unsupported_grant_type');
  assertError(await tokenRequest({ grant_type: 'refresh_token', refresh_token: 'x' }, { basic: ['no-offline', ''] }), 401, 'invalid_client');
  const json = await fetch(`${base}/token`, { method: 'POST', headers: { 'content-type': 'application/json' },
    body: JSON.stringify({ grant_type: 'authorization_code', code }) });
  assert.equal(json.status, 400);
  assert.equal((await fetch(`${base}/token?grant_type=authorization_code&code=${code}`)).status, 405);
  assert.equal((await redeem(clients.basic, code, verifier)).status, 200);
});

// ---------------------------------------------------------------------------
console.log('Sessions, CSRF and the pages');

/** Starts an interaction in a browser; returns the browser and the interaction's id. */
async function startInteraction(params = {}) {
  const browser = new Browser(base);
  const res = await browser.request(authUrl({ code_challenge: verifierPair().challenge, ...params }));
  assert.equal(res.status, 303);
  const id = new URL(res.location).pathname.split('/')[2];
  return { browser, id };
}

await t.check('login CSRF (RFC 6749 §10.12): a sign-in posted without the interaction cookie is refused', async () => {
  const { id } = await startInteraction();
  const attacker = new Browser(base); // the victim's browser, posting from the attacker's page: no cookie for this interaction
  const res = await attacker.request(`${base}/interaction/${id}/login`, { method: 'POST', form: { username: 'alice', password: 'wonderland' } });
  assert.equal(res.status, 400);
  assert.equal(attacker.cookies.has('porter_session'), false);
});

await t.check('consent CSRF (RFC 6749 §10.12, RFC 6819 §4.4.1.8): consent needs the interaction cookie and the same session', async () => {
  // The attacker starts an interaction and signs in as themselves (bob)...
  const { browser: attacker, id } = await startInteraction({ prompt: 'consent' });
  const page = await attacker.request(`${base}/interaction/${id}/login`, { method: 'POST', form: { username: 'bob', password: 'builder' } });
  assert.equal(page.status, 303);
  // ...then makes the victim (alice, signed in) post the consent form.
  const { browser: victim } = await getCode(clients.basic);
  for (const b of [victim, new Browser(base)]) {
    const res = await b.request(`${base}/interaction/${id}/consent`, { method: 'POST', form: { decision: 'allow' } });
    assert.equal(res.status, 400);
    assert.equal(res.location, null);
  }
  // Even with the interaction cookie copied, the victim's session is not the one that signed in.
  victim.cookies.set('porter_interaction', attacker.cookies.get('porter_interaction'));
  const res = await victim.request(`${base}/interaction/${id}/consent`, { method: 'POST', form: { decision: 'allow' } });
  assert.equal(res.status, 400);
  // The attacker's own browser can finish its own interaction.
  const own = await attacker.request(`${base}/interaction/${id}/consent`, { method: 'POST', form: { decision: 'allow' } });
  assert.equal(own.status, 303);
  assert.match(own.location, /^http:\/\/127\.0\.0\.1:9\/cb\?code=/);
});

await t.check('an interaction is single-use: replaying the consent post after it finished is refused', async () => {
  const { browser, id } = await startInteraction({ prompt: 'consent' });
  await browser.request(`${base}/interaction/${id}/login`, { method: 'POST', form: { username: 'alice', password: 'wonderland' } });
  browser.cookies.set('porter_interaction_saved', browser.cookies.get('porter_interaction'));
  const first = await browser.request(`${base}/interaction/${id}/consent`, { method: 'POST', form: { decision: 'allow' } });
  assert.equal(first.status, 303);
  const saved = browser.cookies.get('porter_interaction_saved');
  browser.cookies.set('porter_interaction', { ...saved, name: 'porter_interaction' });
  const again = await browser.request(`${base}/interaction/${id}/consent`, { method: 'POST', form: { decision: 'allow' } });
  assert.equal(again.status, 400);
});

await t.check('session fixation (RFC 6819 §4.4.1.13): signing in always makes a new session id', async () => {
  const { browser, id } = await startInteraction();
  browser.cookies.set('porter_session', { name: 'porter_session', value: 'attacker-chosen', path: '/' });
  await browser.request(`${base}/interaction/${id}/login`, { method: 'POST', form: { username: 'alice', password: 'wonderland' } });
  assert.notEqual(browser.cookies.get('porter_session').value, 'attacker-chosen');
});

await t.check('user enumeration: a wrong password and an unknown user get the same page', async () => {
  const { browser, id } = await startInteraction();
  const post = form => browser.request(`${base}/interaction/${id}/login`, { method: 'POST', form });
  const a = await post({ username: 'alice', password: 'wrong' });
  const b = await post({ username: 'nobody-' + Math.random(), password: 'wrong' });
  assert.equal(a.status, 200);
  assert.equal(a.status, b.status);
  assert.equal(a.text, b.text);
  assert.doesNotMatch(a.text, /wrong/);
});

await t.check('pages cannot be framed (clickjacking, RFC 6749 §10.13) and cookies are HttpOnly, SameSite=Lax', async () => {
  const { browser, id } = await startInteraction();
  const page = await browser.request(`${base}/interaction/${id}`);
  assert.equal(page.status, 200);
  assert.match(page.headers.get('content-security-policy'), /frame-ancestors 'none'/);
  assert.equal(page.headers.get('x-frame-options'), 'DENY');
  const res = await browser.request(`${base}/interaction/${id}/login`, { method: 'POST', form: { username: 'alice', password: 'wonderland' } });
  const setCookie = res.headers.getSetCookie().join('\n');
  assert.match(setCookie, /porter_session=[^;]+; Path=\/; Max-Age=\d+; HttpOnly; SameSite=Lax/);
});

await t.check('no error reveals its input or a secret: injected markup and secrets are not echoed', async () => {
  const xss = '"><script>alert(1)</script>';
  const res = await authorizeRaw(authUrl({ redirect_uri: 'http://evil.example/' + xss, state: xss, code_challenge: verifierPair().challenge }));
  assertNoRedirect(res);
  assert.ok(!res.text.includes('<script>') && !res.text.includes('evil.example'));
  const wrong = await tokenRequest({ grant_type: 'authorization_code', code: xss, redirect_uri: cb, code_verifier: 'a'.repeat(43) },
    { basic: [clients.basic.client_id, 'secret-' + xss] });
  assert.ok(!wrong.text.includes('secret-') && !wrong.text.includes('<script>'));
  const page = await new Browser(base).request(`${base}/logout?state=${encodeURIComponent(xss)}`);
  assert.ok(!page.text.includes('<script>'), 'escaped in the logout form');
});

await t.check('token and userinfo replies are not cached (RFC 6749 §5.1)', async () => {
  const { code, verifier } = await getCode();
  const res = await redeem(clients.basic, code, verifier);
  assert.equal(res.headers.get('cache-control'), 'no-store');
  assert.equal(res.headers.get('pragma'), 'no-cache');
  assert.equal((await userinfo(res.body.access_token)).headers.get('cache-control'), 'no-store');
});

await server.stop();
t.done();
