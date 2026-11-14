// Target equivalence of Porter's traffic (docs/TESTING.md#the-flagship-apps-recorded-traffic).
//
// `node test/oracles.mjs --equivalence` and `node test/attacks.mjs --equivalence`
// record every request the oracle libraries (openid-client, oauth4webapi, jose)
// and the adversarial suite send to the server, with its response, at the
// fetch level (a proxy would change the issuer the clients must see).
// `node test/equivalence.mjs compare NAME` normalizes both recordings and
// compares them with Node's, committed as test/equivalence/oracles.json and
// test/equivalence/attacks.json: equal statuses, equal response headers (apart
// from the shared IGNORED_HEADERS and PLATFORM_HEADERS of
// scripts/equivalence/traffic.mjs) and equal bodies, request by request. The
// adversarial suite's two concurrent checks (one code redeemed 12 times at
// once, one refresh token used 8 times at once) are not recorded: which
// request wins is the scheduler's choice. They still run, and are asserted, on
// every platform.
//
//   node test/equivalence.mjs compare NAME   # test-results/traffic-{oracles,attacks}-NAME.json against the golden files
//   node test/equivalence.mjs self-test      # the normalizer and the diff on made-up traffic
//
// Re-recording: copy test-results/normalized-SUITE-node-24.json from the Node 24
// job's artifact over test/equivalence/SUITE.json and review the diff.
// Known differences, each with an open issue: test/equivalence/known.json.
//
// What is normalized, and why:
// - The issuer (the server's own origin, http://127.0.0.1:PORT; also
//   percent-encoded, as in RFC 9207's iss parameter) becomes <issuer>: the
//   port is free and different in every run.
// - JWTs (ID tokens, and the ones the adversarial suite forges) become
//   <jwt header payload sig:LENGTH>: the decoded header and claims are kept
//   and compared, the signature only by its length. ES256 signatures are
//   randomized, and every signature depends on the key Porter generates on
//   its first start. iat and auth_time become <time>, exp becomes <time>+TTL
//   (the lifetime is compared, the clock is not).
// - Random values: every base64url string of exactly 43 characters (32 random
//   bytes: Porter's codes, tokens, session and interaction ids, its keys' kid
//   and coordinates; the clients' state, nonce, PKCE verifier and challenge)
//   becomes <r#N>, N its ordinal by first appearance, and at_hash (half a
//   SHA-256 of a random token) becomes <h#N> the same way. The values are
//   random by design; the ordinals still check every reference: the code a
//   redirect issued is the code redeemed, the token issued is the one used.
//   Their numbers are compared as facts.
// - Times in JSON outside a JWT (iat, exp, auth_time, nbf, updated_at) become
//   <time>.
// Nothing else is: client ids, users, claims, error codes and descriptions,
// pages and cookies' attributes are the same everywhere (on Azure, Set-Cookie
// is compared in the canonical form of traffic.mjs's PLATFORM_FORMS: its
// host re-serializes all but one cookie per reply).
import { fileURLToPath } from 'node:url';
import { main, normalizeWith, ordinals, selfTestCompare } from '../../../scripts/equivalence/traffic.mjs';

const JWT = /eyJ[A-Za-z0-9_-]*\.eyJ[A-Za-z0-9_-]*\.[A-Za-z0-9_-]*/g;
const RANDOM = /(?<![A-Za-z0-9_-])[A-Za-z0-9_-]{43}(?![A-Za-z0-9_-])/g;
const TIME_KEYS = /"(iat|exp|auth_time|nbf|updated_at)":(\d{9,})/g;

function decode(segment) {
  try { return JSON.parse(Buffer.from(segment, 'base64url').toString('utf8')); } catch { return undefined; }
}

export function normalize({ exchanges, base }, target = 'node') {
  const random = ordinals('<r#'), hashes = ordinals('<h#');
  let jwts = 0;
  const issuer = text => (base ? text.replaceAll(base, '<issuer>').replaceAll(encodeURIComponent(base), '<issuer>') : text);
  const jwt = token => {
    const [h, p, sig] = token.split('.');
    const header = decode(h), payload = decode(p);
    if (!header || !payload || typeof payload !== 'object') return token;
    jwts++;
    const claims = { ...payload };
    const iat = typeof payload.iat === 'number' ? payload.iat : undefined;
    if (iat !== undefined) claims.iat = '<time>';
    if (typeof payload.exp === 'number') claims.exp = iat !== undefined ? `<time>+${payload.exp - iat}` : '<time>';
    if (typeof payload.auth_time === 'number') claims.auth_time = '<time>';
    if (typeof payload.nbf === 'number') claims.nbf = '<time>';
    for (const k of ['at_hash', 'c_hash']) if (typeof claims[k] === 'string') claims[k] = `${hashes(claims[k])}>`;
    const show = o => JSON.stringify(o).replaceAll('"', "'");
    return `<jwt ${issuer(show(header))} ${issuer(show(claims))} sig:${sig.length}>`;
  };
  const scrub = text => issuer(text)
    .replace(JWT, jwt)
    .replace(TIME_KEYS, (_, k) => `"${k}":"<time>"`)
    .replace(RANDOM, v => `${random(v)}>`);
  return normalizeWith(exchanges, target, {
    scrub,
    facts: () => ({ randomValues: random.size(), hashes: hashes.size(), jwts }),
  });
}

function selfTest() {
  const b = s => Buffer.from(s).toString('base64');
  const enc = o => Buffer.from(JSON.stringify(o)).toString('base64url');
  const rnd = (seed, i) => Buffer.alloc(32, seed * 31 + i).toString('base64url');
  const traffic = seed => {
    const base = `http://127.0.0.1:${40000 + seed}`;
    const idToken = `${enc({ alg: 'ES256', kid: rnd(seed, 9) })}.${enc({ iss: base, sub: '1', iat: 1_800_000_000 + seed, exp: 1_800_000_300 + seed, nonce: rnd(seed, 3), at_hash: rnd(seed, 4).slice(0, 22) })}.${rnd(seed, 5)}${rnd(seed, 6)}`;
    return { base, exchanges: [
      { request: { method: 'GET', path: `/authorize?state=${rnd(seed, 1)}&nonce=${rnd(seed, 3)}`, headers: [], body: '' },
        response: { status: 303, headers: [['location', `http://127.0.0.1:59999/cb?code=${rnd(seed, 2)}&state=${rnd(seed, 1)}&iss=${encodeURIComponent(base)}`], ['set-cookie', `s=${rnd(seed, 7)}; Path=/; Max-Age=3600; HttpOnly`]], body: '' } },
      { request: { method: 'POST', path: '/token', headers: [['content-type', 'application/x-www-form-urlencoded']], body: b(`code=${rnd(seed, 2)}&grant_type=authorization_code`) },
        response: { status: 200, headers: [['content-type', 'application/json']], body: b(`{"access_token":"${rnd(seed, 8)}","id_token":"${idToken}","expires_in":300}`) } },
      { request: { method: 'GET', path: '/userinfo', headers: [['authorization', `Bearer ${rnd(seed, 8)}`]], body: '' },
        response: { status: 200, headers: [['content-type', 'application/json']], body: b(`{"sub":"1","updated_at":${1_700_000_000 + seed}}`) } },
    ] };
  };
  const n = normalize(traffic(0));
  const loc = n.exchanges[0].response.headers.find(h => h.startsWith('location'));
  if (loc !== 'location: http://127.0.0.1:59999/cb?code=<r#3>&state=<r#1>&iss=<issuer>') throw new Error(`unexpected location: ${loc}`);
  if (!n.exchanges[1].response.body.includes("'exp':'<time>+300'") || !n.exchanges[1].response.body.includes("'at_hash':'<h#1>'")) throw new Error(`JWT not normalized: ${n.exchanges[1].response.body}`);
  if (n.exchanges[2].request.headers[0] !== 'authorization: Bearer <r#5>') throw new Error(`token reference lost: ${n.exchanges[2].request.headers[0]}`);
  return selfTestCompare(normalize, traffic, r => { r.status = 500; r.headers.push(['X-Extra', 'x']); r.body = b('{}'); });
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  main({ app: 'Porter', root: fileURLToPath(new URL('..', import.meta.url)), suites: ['oracles', 'attacks'], normalize, selfTest });
}
