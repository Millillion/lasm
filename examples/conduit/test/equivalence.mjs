// Target equivalence for the RealWorld API traffic (docs/TESTING.md#conduits-realworld-traffic).
//
// test/api.mjs --equivalence puts a recording proxy between the official hurl
// suite and the server and normalizes what legitimately differs between
// targets (below); `compare` checks the result against the Node recording
// committed in test/equivalence/realworld.json: equal statuses, equal headers
// (apart from the documented IGNORED_HEADERS) and byte-equal bodies, request
// by request, in the order the suite sent them.
//
//   node test/equivalence.mjs compare NAME   # test-results/realworld-NAME.json against the golden file;
//                                            # writes test-results/equivalence-NAME.{txt,json}
//   node test/equivalence.mjs self-test      # the normalizer and the diff on made-up traffic
//
// Re-recording (after a deliberate change to Conduit's answers, Lasm or the
// pinned suite): copy test-results/realworld-node-24.json from the api-node job's
// artifact (or a local `node test/api.mjs --equivalence --name node-24` on an
// empty database) to test/equivalence/realworld.json, and review the diff.
// Known differences, each with an open issue, are listed in
// test/equivalence/known.json: reported, not failed.
//
// What is normalized, and why each is legitimate:
// - JWTs (header.payload.signature, anywhere in a request or a response) become
//   <jwt#N>, N numbered by first appearance of the token's identity: its
//   header and claims without iat/exp. The signature depends on the target's
//   secret and iat/exp on the clock; whether login gives a new token or the
//   same one depends on whether a second boundary passed. The identities
//   (header, claims, exp - iat) are compared in `tokens`, and every token a
//   request sends must be one a response issued earlier, or the same literal
//   the suite itself sent on Node.
// - ISO 8601 timestamps (createdAt, updatedAt) keep their shape with each digit
//   replaced by 0: the format is compared, the clock is not.
// - Header names are lower-cased and sorted (HTTP field names are
//   case-insensitive and the order of different fields is not significant);
//   repeated fields keep their order.
// - IGNORED_HEADERS: the date, framing and hop-by-hop fields and the ones a
//   platform adds by itself, each with its reason. Every other response header
//   must be present on both sides with the same value.
// - The request's host (the proxy's own port) and the reason phrase (optional
//   in HTTP/1.1, not sent in HTTP/2) are not compared.
// Ids are not normalized: every run starts on an empty store with a fixed
// UID_VAL, so the ids and slugs the suite sees are the same on every target.
import { existsSync, readFileSync, writeFileSync } from 'node:fs';
import { createServer, request } from 'node:http';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

// Response headers that may differ between targets (or be missing on some).
export const IGNORED_HEADERS = {
  date: 'the wall clock (RFC 9110 6.6.1)',
  connection: 'hop-by-hop (RFC 9110 7.6.1)',
  'keep-alive': 'hop-by-hop (RFC 9110 7.6.1)',
  'transfer-encoding': 'framing, hop-by-hop: the body bytes are compared instead',
  'content-length': 'framing: the body bytes are compared instead (chunked or not is the platform\'s choice)',
  server: 'the platform\'s product name',
};

// ---------- recording ----------

/**
 * A recording reverse proxy in front of `upstream` (http://host:port). Every
 * request is forwarded unchanged apart from its Host; each exchange is kept in
 * `exchanges` with the raw headers as received.
 */
export async function startRecorder(upstream) {
  const target = new URL(upstream);
  const exchanges = [];
  const server = createServer((req, res) => {
    const chunks = [];
    req.on('data', c => chunks.push(c));
    req.on('end', () => {
      const body = Buffer.concat(chunks);
      const headers = [];
      for (let i = 0; i < req.rawHeaders.length; i += 2) {
        const name = req.rawHeaders[i];
        const lower = name.toLowerCase();
        if (lower === 'host') headers.push(name, target.host);
        else if (lower !== 'connection' && lower !== 'keep-alive') headers.push(name, req.rawHeaders[i + 1]);
      }
      const exchange = { request: { method: req.method, path: req.url, headers: pairs(req.rawHeaders), body: body.toString('base64') } };
      exchanges.push(exchange);
      const out = request({ host: target.hostname, port: target.port, method: req.method, path: req.url, headers, agent: false }, up => {
        const parts = [];
        up.on('data', c => parts.push(c));
        up.on('end', () => {
          const payload = Buffer.concat(parts);
          exchange.response = { status: up.statusCode, statusMessage: up.statusMessage, headers: pairs(up.rawHeaders), body: payload.toString('base64') };
          // Forwarded with the upstream's headers, framed by this proxy.
          const back = [];
          for (const [name, value] of pairs(up.rawHeaders)) {
            if (!['connection', 'keep-alive', 'transfer-encoding', 'content-length'].includes(name.toLowerCase())) back.push(name, value);
          }
          if (req.method !== 'HEAD' && up.statusCode !== 204 && up.statusCode !== 304) back.push('Content-Length', String(payload.length));
          else if (up.headers['content-length'] !== undefined) back.push('Content-Length', up.headers['content-length']);
          res.writeHead(up.statusCode, up.statusMessage, back);
          res.end(payload);
        });
        up.on('error', e => fail(e));
      });
      const fail = e => {
        exchange.response = { error: String(e.message) };
        if (!res.headersSent) res.writeHead(502, { 'content-type': 'text/plain' });
        res.end(`equivalence proxy: ${e.message}`);
      };
      out.on('error', fail);
      out.end(body);
    });
  });
  await new Promise((ok, fail) => server.once('error', fail).listen(0, '127.0.0.1', ok));
  const close = () => new Promise(ok => { server.close(() => ok()); server.closeAllConnections(); });
  return { url: `http://127.0.0.1:${server.address().port}`, exchanges, close };
}

function pairs(raw) {
  const out = [];
  for (let i = 0; i < raw.length; i += 2) out.push([raw[i], raw[i + 1]]);
  return out;
}

// ---------- normalization ----------

const JWT = /eyJ[A-Za-z0-9_-]+\.eyJ[A-Za-z0-9_-]+\.[A-Za-z0-9_-]*/g;
const ISO_TIME = /\d{4}-\d{2}-\d{2}T\d{2}:\d{2}:\d{2}(?:\.\d+)?(?:Z|[+-]\d{2}:\d{2})?/g;

const b64json = part => { try { return JSON.parse(Buffer.from(part, 'base64url').toString('utf8')); } catch { return null; } };
function identity(token) {
  const [h, p] = token.split('.');
  const header = b64json(h), claims = b64json(p);
  if (!header || !claims || typeof claims !== 'object') return { key: `opaque:${token}`, info: { opaque: true } };
  const rest = { ...claims };
  const lifetime = typeof claims.iat === 'number' && typeof claims.exp === 'number' ? claims.exp - claims.iat : undefined;
  delete rest.iat; delete rest.exp;
  const info = { header, claims: rest, ...(lifetime !== undefined ? { lifetime } : {}), times: ['iat', 'exp'].filter(k => k in claims) };
  return { key: JSON.stringify([header, rest]), info };
}

function decode(base64) {
  const bytes = Buffer.from(base64, 'base64');
  const text = bytes.toString('utf8');
  return Buffer.from(text, 'utf8').equals(bytes) ? { text } : { base64 };
}

/** Normalized traffic: { exchanges, tokens, clientTokens } (see the header comment). */
export function normalize(exchanges) {
  const ids = new Map(); // identity key -> placeholder number
  const tokens = [];
  const issued = new Set(); // raw tokens a response has carried
  const sentFirst = new Set(); // raw tokens a request carried before any response did
  const replaceTokens = (text, where) => text.replace(JWT, token => {
    const { key, info } = identity(token);
    if (!ids.has(key)) { ids.set(key, tokens.length + 1); tokens.push(info); }
    if (where === 'response') issued.add(token);
    else if (!issued.has(token)) sentFirst.add(token);
    return `<jwt#${ids.get(key)}>`;
  });
  const scrub = (text, where) => replaceTokens(text, where).replace(ISO_TIME, t => t.replace(/\d/g, '0'));
  const body = (base64, where) => {
    const d = decode(base64 ?? '');
    return d.text !== undefined ? scrub(d.text, where) : { base64: d.base64 };
  };
  const out = exchanges.map(x => {
    const req = x.request;
    const request = {
      method: req.method,
      path: scrub(req.path, 'request'),
      headers: sortHeaders(req.headers.filter(([n]) => n.toLowerCase() !== 'host').map(([n, v]) => [n.toLowerCase(), scrub(v, 'request')])),
      body: body(req.body, 'request'),
    };
    if (!x.response || x.response.error) return { request, response: { error: x.response?.error ?? 'no response' } };
    const res = x.response;
    const response = {
      status: res.status,
      headers: sortHeaders(res.headers.map(([n, v]) => [n.toLowerCase(), v]).filter(([n]) => !(n in IGNORED_HEADERS)).map(([n, v]) => [n, scrub(v, 'response')])),
      body: body(res.body, 'response'),
    };
    return { request, response };
  });
  // Tokens a request sent that no response had issued: only the suite's own
  // literals may do that, and they are compared as such.
  return { exchanges: out, tokens, clientTokens: sentFirst.size };
}

// "name: value", sorted by name (stable: a repeated field keeps its order).
const sortHeaders = list => list.map((h, i) => [h, i]).sort(([a, i], [b, j]) => (a[0] < b[0] ? -1 : a[0] > b[0] ? 1 : i - j)).map(([[n, v]]) => `${n}: ${v}`);

// ---------- comparison ----------

const keyOf = x => `${x.request.method} ${x.request.path}`;

// Longest common subsequence of the exchanges by method and path, so that a
// missing or extra request (a hurl file stops at its first failed assertion)
// does not shift every later comparison.
function align(a, b) {
  const n = a.length, m = b.length;
  const ka = a.map(keyOf), kb = b.map(keyOf);
  const dp = Array.from({ length: n + 1 }, () => new Uint32Array(m + 1));
  for (let i = n - 1; i >= 0; i--) for (let j = m - 1; j >= 0; j--) dp[i][j] = ka[i] === kb[j] ? dp[i + 1][j + 1] + 1 : Math.max(dp[i + 1][j], dp[i][j + 1]);
  const steps = [];
  let i = 0, j = 0;
  while (i < n && j < m) {
    if (ka[i] === kb[j]) steps.push([i++, j++]);
    else if (dp[i + 1][j] >= dp[i][j + 1]) steps.push([i++, null]);
    else steps.push([null, j++]);
  }
  while (i < n) steps.push([i++, null]);
  while (j < m) steps.push([null, j++]);
  return steps;
}

function lineDiff(a, b, context = 2) {
  const x = a.split('\n'), y = b.split('\n');
  const n = x.length, m = y.length;
  if (n * m > 4_000_000) return [`- (${a.length} bytes)`, `+ (${b.length} bytes)`];
  const dp = Array.from({ length: n + 1 }, () => new Uint32Array(m + 1));
  for (let i = n - 1; i >= 0; i--) for (let j = m - 1; j >= 0; j--) dp[i][j] = x[i] === y[j] ? dp[i + 1][j + 1] + 1 : Math.max(dp[i + 1][j], dp[i][j + 1]);
  const ops = [];
  let i = 0, j = 0;
  while (i < n || j < m) {
    if (i < n && j < m && x[i] === y[j]) ops.push([' ', x[i++]]), j++;
    else if (j < m && (i === n || dp[i][j + 1] > dp[i + 1][j])) ops.push(['+', y[j++]]);
    else ops.push(['-', x[i++]]);
  }
  const keep = ops.map((op, k) => op[0] !== ' ' || ops.slice(Math.max(0, k - context), k + context + 1).some(o => o[0] !== ' '));
  const lines = [];
  ops.forEach((op, k) => { if (keep[k]) lines.push(`${op[0]} ${op[1]}`); else if (keep[k - 1]) lines.push('  …'); });
  return lines;
}

const pretty = body => {
  if (typeof body !== 'string') return JSON.stringify(body);
  try { return JSON.stringify(JSON.parse(body), null, 2); } catch { return body; }
};
const headerText = hs => hs.join('\n');

/**
 * Compares normalized traffic with the golden (Node) recording. Returns the
 * differences (with `known` set where test/equivalence/known.json lists them)
 * and a readable report.
 */
export function compare(golden, observed, { target = 'target', known = [] } = {}) {
  const differences = [];
  const isKnown = (key) => known.find(k => k.targets.includes(target) && new RegExp(k.request).test(key))?.issue;
  const add = (d) => { const issue = isKnown(d.key ?? d.request); differences.push(issue ? { ...d, known: issue } : d); };
  if (JSON.stringify(golden.tokens) !== JSON.stringify(observed.tokens)) {
    add({ request: '(tokens)', what: 'token identities', lines: lineDiff(JSON.stringify(golden.tokens, null, 2), JSON.stringify(observed.tokens, null, 2)) });
  }
  if (golden.clientTokens !== observed.clientTokens) {
    add({ request: '(tokens)', what: 'tokens sent before any response issued them', lines: [`- ${golden.clientTokens}`, `+ ${observed.clientTokens}`] });
  }
  for (const [i, j] of align(golden.exchanges, observed.exchanges)) {
    if (j === null) { add({ request: `#${i + 1} ${keyOf(golden.exchanges[i])}`, key: keyOf(golden.exchanges[i]), what: 'missing on this target (sent on Node)' }); continue; }
    if (i === null) { add({ request: `(this target's #${j + 1}) ${keyOf(observed.exchanges[j])}`, key: keyOf(observed.exchanges[j]), what: 'extra on this target (not sent on Node)' }); continue; }
    const g = golden.exchanges[i], o = observed.exchanges[j];
    const request = `#${i + 1} ${keyOf(g)}`;
    const checks = [
      ['request headers', headerText(g.request.headers), headerText(o.request.headers)],
      ['request body', pretty(g.request.body), pretty(o.request.body)],
    ];
    if (o.response.error || g.response.error) checks.push(['response', JSON.stringify(g.response), JSON.stringify(o.response)]);
    else {
      checks.push(['status', String(g.response.status), String(o.response.status)]);
      checks.push(['response headers', headerText(g.response.headers), headerText(o.response.headers)]);
      // Byte-equal bodies; shown pretty-printed when they are JSON.
      if (JSON.stringify(g.response.body) !== JSON.stringify(o.response.body)) {
        const a = pretty(g.response.body), b = pretty(o.response.body);
        checks.push(['response body', a === b ? JSON.stringify(g.response.body) : a, a === b ? JSON.stringify(o.response.body) : b]);
      }
    }
    for (const [what, a, b] of checks) if (a !== b) add({ request, key: keyOf(g), what, lines: lineDiff(a, b) });
  }
  const failing = differences.filter(d => !d.known);
  const report = [];
  report.push(`Conduit RealWorld traffic, ${target} against Node (golden): ${observed.exchanges.length} exchanges (Node ${golden.exchanges.length}), ` +
    `${failing.length} differences${differences.length - failing.length ? `, ${differences.length - failing.length} known` : ''}`);
  for (const d of differences.slice(0, 40)) {
    report.push('', `${d.known ? `KNOWN (${d.known}) ` : ''}${d.request}: ${d.what}`);
    if (d.lines) report.push(...d.lines.slice(0, 60).map(l => `    ${l}`), ...(d.lines.length > 60 ? [`    … ${d.lines.length - 60} more lines`] : []));
  }
  if (differences.length > 40) report.push('', `… ${differences.length - 40} more differences (the JSON report has all of them)`);
  report.push('', '("-" is Node, "+" is this target)');
  return { differences, failing, report: report.join('\n') };
}

// ---------- the command line ----------

function selfTest() {
  const enc = o => Buffer.from(JSON.stringify(o)).toString('base64url');
  const jwt = (sub, iat, sig) => `${enc({ alg: 'HS256', typ: 'JWT' })}.${enc({ sub, iat, exp: iat + 3600 })}.${sig}`;
  const b = s => Buffer.from(s).toString('base64');
  const traffic = (iat, sig, extra = {}) => [
    { request: { method: 'POST', path: '/api/users', headers: [['Host', 'a:1'], ['Content-Type', 'application/json']], body: b('{"user":{}}') },
      response: { status: 201, headers: [['Date', String(iat)], ['Content-Type', 'application/json'], ['X-B', '2'], ['x-a', '1']], body: b(`{"user":{"token":"${jwt('1', iat, sig)}","createdAt":"2026-11-0${iat % 9}T10:00:00.123Z"}}`) } },
    { request: { method: 'GET', path: '/api/user', headers: [['Authorization', `Token ${jwt('1', iat, sig)}`]], body: '' },
      response: { status: extra.status ?? 200, headers: [['content-type', 'application/json'], ['x-a', '1'], ['x-b', '2'], ...(extra.header ? [extra.header] : [])], body: b(extra.body ?? '{"ok":true}') } },
  ];
  const node = normalize(traffic(100, 'sigA'));
  const same = compare(node, normalize(traffic(205, 'sigB')), { target: 'same' });
  if (same.failing.length) throw new Error(`equal traffic differs:\n${same.report}`);
  const differs = compare(node, normalize(traffic(205, 'sigB', { status: 201, header: ['X-Powered-By', 'x'], body: '{"ok":false}' })), { target: 'differs' });
  const what = differs.failing.map(d => d.what).join(',');
  if (what !== 'status,response headers,response body') throw new Error(`expected three differences, got ${what}:\n${differs.report}`);
  const known = compare(node, normalize(traffic(205, 'sigB', { status: 201 })), { target: 't', known: [{ targets: ['t'], request: '^GET /api/user$', issue: 'https://example.invalid/1' }] });
  if (known.failing.length || known.differences.length !== 1) throw new Error(`known difference not recognized:\n${known.report}`);
  const shifted = compare(node, normalize(traffic(100, 'sigA').slice(1)), { target: 'shifted' });
  if (shifted.failing.length !== 2) throw new Error(`a missing request should give two differences (tokens, missing):\n${shifted.report}`);
  console.log('self-test passed\n\n' + differs.report);
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const [command, name] = process.argv.slice(2);
  const root = fileURLToPath(new URL('..', import.meta.url));
  if (command === 'self-test') selfTest();
  else if (command === 'compare' && name) {
    const golden = join(root, 'test/equivalence/realworld.json');
    const traffic = join(root, `test-results/realworld-${name}.json`);
    if (!existsSync(traffic)) {
      console.log(`No recording ${traffic}: run node test/api.mjs --equivalence first`);
      process.exitCode = 1;
    } else if (!existsSync(golden)) {
      console.log(`No golden recording ${golden}: review ${traffic} (Node's) and commit it there`);
      process.exitCode = 1;
    } else {
      const { known } = JSON.parse(readFileSync(join(root, 'test/equivalence/known.json'), 'utf8'));
      const outcome = compare(JSON.parse(readFileSync(golden, 'utf8')), JSON.parse(readFileSync(traffic, 'utf8')), { target: name, known });
      writeFileSync(join(root, `test-results/equivalence-${name}.json`), JSON.stringify({ target: name, differences: outcome.differences }, null, 2) + '\n');
      writeFileSync(join(root, `test-results/equivalence-${name}.txt`), outcome.report + '\n');
      console.log(outcome.report);
      process.exitCode = outcome.failing.length ? 1 : 0;
    }
  } else {
    console.error('usage: node test/equivalence.mjs compare NAME | self-test');
    process.exitCode = 2;
  }
}
