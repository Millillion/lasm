// The oracle tests: two independent, widely used OpenID Connect client
// libraries, by Filip Skokan (panva), validate everything Porter issues, run
// locally against a fresh server (no account, no hosted service):
//
// - openid-client 6.8.8 (discovery, the authorization URL, the code grant with
//   PKCE, state and nonce checks, ID token validation including its signature
//   against /jwks, userinfo, refresh, RP-initiated logout);
// - oauth4webapi 3.8.8 (the same flow through its lower-level functions,
//   RFC 9207 `iss` validation, and `validateApplicationLevelSignature`);
// - jose 6.2.12 (`jwtVerify` of every ID token against the JWK Set).
//
// Every client of test/config.mjs is exercised: client_secret_basic and
// client_secret_post, a public client, ES256 and EdDSA.
//
//   node test/oracles.mjs [--url URL | --command CMD | --platform NAME] [--name NAME]
import assert from 'node:assert/strict';
import * as client from 'openid-client';
import * as oauth from 'oauth4webapi';
import * as jose from 'jose';
import { Browser, harness, serverArgs, startPorter } from './server.mjs';
import { cb, clients, users } from './config.mjs';

const args = serverArgs();
const server = await startPorter(args);
const base = server.base;
const t = harness(`Oracle tests${args.name ? ` (${args.name})` : ''}`);
const insecure = { [oauth.allowInsecureRequests]: true };
const jwks = jose.createRemoteJWKSet(new URL(`${base}/jwks`));

/** openid-client's Configuration for one of the test clients. */
async function configFor(c, auth) {
  const metadata = { id_token_signed_response_alg: c.alg, ...(c.client_secret ? { client_secret: c.client_secret } : {}) };
  const clientAuth = auth === 'post' ? client.ClientSecretPost(c.client_secret)
    : auth === 'basic' ? client.ClientSecretBasic(c.client_secret) : client.None();
  return client.discovery(new URL(base), c.client_id, metadata, clientAuth,
    { execute: [client.allowInsecureRequests, client.enableNonRepudiationChecks] });
}

/** Checks an ID token's claims the way a relying party should, with jose. */
async function verifyIdToken(idToken, c, { nonce, sub }) {
  const { payload, protectedHeader } = await jose.jwtVerify(idToken, jwks, {
    issuer: base, audience: c.client_id, algorithms: [c.alg], requiredClaims: ['sub', 'iat', 'exp', 'auth_time'],
  });
  assert.equal(protectedHeader.alg, c.alg);
  assert.equal(payload.sub, sub);
  if (nonce !== undefined) assert.equal(payload.nonce, nonce);
  assert.ok(payload.exp > payload.iat);
  return payload;
}

/** The whole flow with openid-client for one client and authentication method. */
async function openidClientFlow(c, auth, { scope = 'openid profile email offline_access', user = 'alice' } = {}) {
  const config = await configFor(c, auth);
  const code_verifier = client.randomPKCECodeVerifier();
  const code_challenge = await client.calculatePKCECodeChallenge(code_verifier);
  const state = client.randomState(), nonce = client.randomNonce();
  const url = client.buildAuthorizationUrl(config, { redirect_uri: cb, scope, code_challenge,
    code_challenge_method: 'S256', state, nonce });
  const browser = new Browser(base);
  const callback = await browser.authorize(url, { username: user, password: users[user].password });
  const tokens = await client.authorizationCodeGrant(config, new URL(callback),
    { pkceCodeVerifier: code_verifier, expectedState: state, expectedNonce: nonce, idTokenExpected: true });
  const claims = tokens.claims();
  assert.equal(claims.iss, base);
  assert.equal(claims.aud, c.client_id);
  assert.equal(claims.sub, users[user].sub);
  assert.equal(claims.nonce, nonce);
  assert.equal(tokens.token_type.toLowerCase(), 'bearer');
  await verifyIdToken(tokens.id_token, c, { nonce, sub: users[user].sub });
  return { config, tokens, claims, browser };
}

for (const [label, c, auth] of [
  ['client_secret_basic, ES256', clients.basic, 'basic'],
  ['client_secret_post, EdDSA', clients.post, 'post'],
  ['public client (PKCE, none), EdDSA', clients.pub, 'none'],
]) {
  await t.check(`openid-client: code flow, ${label}: tokens, userinfo, refresh`, async () => {
    const { config, tokens, claims } = await openidClientFlow(c, auth);
    const info = await client.fetchUserInfo(config, tokens.access_token, claims.sub);
    assert.deepEqual(info, { sub: users.alice.sub, name: 'Alice Liddell', preferred_username: 'alice',
      email: 'alice@example.com', email_verified: true });
    assert.ok(tokens.refresh_token, 'offline_access gives a refresh token');
    const refreshed = await client.refreshTokenGrant(config, tokens.refresh_token);
    assert.notEqual(refreshed.refresh_token, tokens.refresh_token, 'the refresh token rotates');
    const rclaims = refreshed.claims();
    assert.equal(rclaims.sub, claims.sub);
    assert.equal(rclaims.auth_time, claims.auth_time);
    await verifyIdToken(refreshed.id_token, c, { sub: claims.sub });
    const info2 = await client.fetchUserInfo(config, refreshed.access_token, claims.sub);
    assert.equal(info2.sub, claims.sub);
    // A narrower scope on refresh.
    const narrow = await client.refreshTokenGrant(config, refreshed.refresh_token, { scope: 'openid' });
    assert.equal(narrow.scope, 'openid');
    const info3 = await client.fetchUserInfo(config, narrow.access_token, claims.sub);
    assert.deepEqual(info3, { sub: claims.sub });
  });
}

await t.check('openid-client: scopes select the userinfo claims; no offline_access, no refresh token', async () => {
  const { config, tokens, claims } = await openidClientFlow(clients.noOffline, 'none', { scope: 'openid email', user: 'bob' });
  assert.equal(tokens.refresh_token, undefined);
  assert.equal(tokens.scope, 'openid email');
  const info = await client.fetchUserInfo(config, tokens.access_token, claims.sub);
  assert.deepEqual(info, { sub: users.bob.sub, email: 'bob@example.com', email_verified: false });
});

await t.check('openid-client: a second sign-in reuses the session and the consent (no pages)', async () => {
  const { config, browser } = await openidClientFlow(clients.basic, 'basic');
  const verifier = client.randomPKCECodeVerifier();
  const url = client.buildAuthorizationUrl(config, { redirect_uri: cb, scope: 'openid profile', state: 's2',
    code_challenge: await client.calculatePKCECodeChallenge(verifier), code_challenge_method: 'S256' });
  const res = await browser.request(url.toString());
  assert.equal(res.status, 303);
  assert.ok(res.location.startsWith(cb + '?code='), res.location);
  const tokens = await client.authorizationCodeGrant(config, new URL(res.location),
    { pkceCodeVerifier: verifier, expectedState: 's2', idTokenExpected: true });
  assert.equal(tokens.claims().sub, users.alice.sub);
  assert.equal(tokens.claims().nonce, undefined);
});

await t.check('openid-client: prompt=none without a session answers login_required', async () => {
  const config = await configFor(clients.pub, 'none');
  const verifier = client.randomPKCECodeVerifier();
  const url = client.buildAuthorizationUrl(config, { redirect_uri: cb, scope: 'openid', state: 'pn', prompt: 'none',
    code_challenge: await client.calculatePKCECodeChallenge(verifier), code_challenge_method: 'S256' });
  const res = await new Browser(base).request(url.toString());
  assert.equal(res.status, 303);
  await assert.rejects(client.authorizationCodeGrant(config, new URL(res.location),
    { pkceCodeVerifier: verifier, expectedState: 'pn' }), e => e.error === 'login_required');
});

await t.check('openid-client: prompt=consent asks again, and denying answers access_denied', async () => {
  const config = await configFor(clients.pub, 'none');
  const verifier = client.randomPKCECodeVerifier();
  const url = client.buildAuthorizationUrl(config, { redirect_uri: cb, scope: 'openid', state: 'deny', prompt: 'consent',
    code_challenge: await client.calculatePKCECodeChallenge(verifier), code_challenge_method: 'S256' });
  const location = await new Browser(base).authorize(url, { deny: true });
  await assert.rejects(client.authorizationCodeGrant(config, new URL(location),
    { pkceCodeVerifier: verifier, expectedState: 'deny' }), e => e.error === 'access_denied');
});

await t.check('openid-client: RP-initiated logout ends the session and returns to the registered URI', async () => {
  const { config, tokens, browser } = await openidClientFlow(clients.basic, 'basic');
  const url = client.buildEndSessionUrl(config, { id_token_hint: tokens.id_token,
    post_logout_redirect_uri: 'http://127.0.0.1:9/bye', state: 'bye-state' });
  const page = await browser.request(url.toString());
  assert.equal(page.status, 200);
  assert.match(page.text, /Sign out\?/);
  const form = Object.fromEntries([...page.text.matchAll(/<input type="hidden" name="([^"]+)" value="([^"]*)">/g)]
    .map(m => [m[1], m[2].replaceAll('&amp;', '&').replaceAll('&#39;', "'").replaceAll('&quot;', '"')]));
  const done = await browser.request(`${base}/logout`, { method: 'POST', form });
  assert.equal(done.status, 303);
  assert.equal(done.location, 'http://127.0.0.1:9/bye?state=bye-state');
  assert.equal(browser.cookies.has('porter_session'), false);
  // Signed out: the next authorization asks for a password again.
  const verifier = client.randomPKCECodeVerifier();
  const again = client.buildAuthorizationUrl(config, { redirect_uri: cb, scope: 'openid', state: 'x',
    code_challenge: await client.calculatePKCECodeChallenge(verifier), code_challenge_method: 'S256' });
  const res = await browser.follow(again.toString());
  assert.equal(res.status, 200);
  assert.match(res.text, /name="password"/);
});

for (const [label, c, auth] of [
  ['client_secret_post, EdDSA', clients.post, 'post'],
  ['client_secret_basic, ES256', clients.basic, 'basic'],
  ['public client, EdDSA', clients.pub, 'none'],
]) {
  await t.check(`oauth4webapi: code flow, ${label}: iss parameter, signatures, userinfo, refresh`, async () => {
    const issuer = new URL(base);
    const as = await oauth.processDiscoveryResponse(issuer, await oauth.discoveryRequest(issuer, insecure));
    assert.equal(as.authorization_response_iss_parameter_supported, true);
    const cl = { client_id: c.client_id, id_token_signed_response_alg: c.alg };
    const clientAuth = auth === 'post' ? oauth.ClientSecretPost(c.client_secret)
      : auth === 'basic' ? oauth.ClientSecretBasic(c.client_secret) : oauth.None();
    const verifier = oauth.generateRandomCodeVerifier();
    const state = oauth.generateRandomState(), nonce = oauth.generateRandomNonce();
    const url = new URL(as.authorization_endpoint);
    for (const [k, v] of Object.entries({ client_id: c.client_id, redirect_uri: cb, response_type: 'code',
      scope: 'openid profile offline_access', state, nonce, code_challenge: await oauth.calculatePKCECodeChallenge(verifier),
      code_challenge_method: 'S256' })) url.searchParams.set(k, v);
    const location = await new Browser(base).authorize(url);
    const params = oauth.validateAuthResponse(as, cl, new URL(location), state);
    const response = await oauth.authorizationCodeGrantRequest(as, cl, clientAuth, params, cb, verifier, insecure);
    const result = await oauth.processAuthorizationCodeResponse(as, cl, response, { expectedNonce: nonce, requireIdToken: true });
    await oauth.validateApplicationLevelSignature(as, response, insecure);
    const claims = oauth.getValidatedIdTokenClaims(result);
    assert.equal(claims.sub, users.alice.sub);
    assert.equal(claims.aud, c.client_id);
    await verifyIdToken(result.id_token, c, { nonce, sub: users.alice.sub });
    const ui = await oauth.processUserInfoResponse(as, cl, claims.sub,
      await oauth.userInfoRequest(as, cl, result.access_token, insecure));
    assert.equal(ui.preferred_username, 'alice');
    const refreshResponse = await oauth.refreshTokenGrantRequest(as, cl, clientAuth, result.refresh_token, insecure);
    const refreshed = await oauth.processRefreshTokenResponse(as, cl, refreshResponse);
    await oauth.validateApplicationLevelSignature(as, refreshResponse, insecure);
    assert.ok(refreshed.refresh_token && refreshed.refresh_token !== result.refresh_token);
  });
}

await t.check('the JWK Set: one ES256 and one Ed25519 key, kid = RFC 7638 thumbprint, no private members', async () => {
  const set = await (await fetch(`${base}/jwks`)).json();
  assert.equal(set.keys.length, 2);
  for (const key of set.keys) {
    assert.equal(key.d, undefined);
    assert.equal(key.kid, await jose.calculateJwkThumbprint(key, 'sha256'));
    assert.equal(key.use, 'sig');
  }
  assert.deepEqual(set.keys.map(k => [k.alg, k.kty, k.crv]), [['ES256', 'EC', 'P-256'], ['EdDSA', 'OKP', 'Ed25519']]);
});

await t.check('discovery: the metadata OpenID Connect Discovery requires, and only S256', async () => {
  const d = await (await fetch(`${base}/.well-known/openid-configuration`)).json();
  for (const k of ['issuer', 'authorization_endpoint', 'token_endpoint', 'userinfo_endpoint', 'jwks_uri',
    'response_types_supported', 'subject_types_supported', 'id_token_signing_alg_values_supported']) assert.ok(d[k], k);
  assert.equal(d.issuer, base);
  assert.deepEqual(d.code_challenge_methods_supported, ['S256']);
  assert.equal(d.request_uri_parameter_supported, false);
});

await server.stop();
t.done();
