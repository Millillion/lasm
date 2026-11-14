// Recorded-traffic equivalence for the flagship apps (docs/TESTING.md#the-flagship-apps-recorded-traffic):
// a recording reverse proxy goes between an app's own test driver and the
// server, the driver's traffic is normalized (only what legitimately differs
// between targets, each app documents its rules), and `compare` checks it
// against the Node recording committed in the app's test/equivalence/: equal
// statuses, equal response headers (apart from IGNORED_HEADERS and
// PLATFORM_HEADERS) and byte-equal bodies, exchange by exchange in the order the
// driver sent them.
//
// Each app's test/equivalence.mjs supplies its normalizer and calls `main`:
//   node test/equivalence.mjs compare NAME   # each suite's test-results/traffic-SUITE-NAME.json against
//                                            # test/equivalence/SUITE.json; writes equivalence-SUITE-NAME.{txt,json}
//                                            # and the normalized traffic (normalized-SUITE-NAME.json)
//   node test/equivalence.mjs self-test      # the app's normalizer, and this file's diff, on made-up traffic
//
// Re-recording (after a deliberate change to the app's answers or Lasm):
// copy test-results/normalized-SUITE-node-24.json from the Node 24 job's artifact over
// the app's test/equivalence/SUITE.json and review the diff.
//
// Conduit has its own copy of these pieces (examples/conduit/test/equivalence.mjs)
// with JWT handling specific to RealWorld.
import { gunzipSync, inflateSync, brotliDecompressSync } from 'node:zlib';
import { existsSync, mkdirSync, readFileSync, writeFileSync } from 'node:fs';
import { createServer, request } from 'node:http';
import { join } from 'node:path';

// Response headers that may differ between targets (or be missing on some).
export const IGNORED_HEADERS = {
  date: 'the wall clock (RFC 9110 6.6.1)',
  connection: 'hop-by-hop (RFC 9110 7.6.1)',
  'keep-alive': 'hop-by-hop (RFC 9110 7.6.1)',
  'transfer-encoding': 'framing, hop-by-hop: the body bytes are compared instead',
  'content-length': 'framing: the body bytes are compared instead (chunked or not is the platform\'s choice)',
  server: 'the platform\'s product name',
};

// Headers one platform's local runtime adds by itself, only on that platform.
// The same list as Conduit's; a rule is added only with a reason.
export const PLATFORM_HEADERS = [
  { targets: ['netlify'], name: /^x-nf-/, reason: 'Netlify\'s function bootstrap adds x-nf-invocation-metadata and x-nf-start-timestamp to every response' },
  { targets: ['lambda', 'lambda-image'], name: /^content-type$/, value: /^application\/json$/, emptyBody: true,
    reason: 'sam local start-api gives a bodiless response (204) Content-Type: application/json when the function sets none' },
];
function platformHeader(target, name, value, res) {
  return PLATFORM_HEADERS.some(rule => rule.targets.includes(target) && rule.name.test(name) &&
    (!rule.value || rule.value.test(value)) && (!rule.emptyBody || !res.body));
}

// ---------- recording ----------

const HOP = ['connection', 'keep-alive', 'transfer-encoding', 'content-length'];

/**
 * A recording reverse proxy in front of `upstream` (its origin is used; the
 * request's path is forwarded as sent). Every request is forwarded unchanged
 * apart from its Host and framing; each exchange is kept in `exchanges` with
 * the raw headers as received. Requests are recorded in the order they
 * arrive, so the driver must send them one at a time.
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
        else if (!HOP.includes(lower)) headers.push(name, req.rawHeaders[i + 1]);
      }
      // The client's framing: a length when it sent a body or a length, none
      // otherwise (Node would chunk a bodiless POST, which some launchers reject).
      const framed = body.length > 0 || req.headers['content-length'] !== undefined;
      if (framed) headers.push('Content-Length', String(body.length));
      const exchange = { request: { method: req.method, path: req.url, headers: pairs(req.rawHeaders), body: body.toString('base64') } };
      exchanges.push(exchange);
      const fail = e => {
        exchange.response = { error: String(e.message) };
        if (!res.headersSent) res.writeHead(502, { 'content-type': 'text/plain' });
        res.end(`equivalence proxy: ${e.message}`);
      };
      const out = request({ host: target.hostname, port: target.port, method: req.method, path: req.url, agent: false, setDefaultHeaders: false }, up => {
        const parts = [];
        up.on('data', c => parts.push(c));
        up.on('end', () => {
          const payload = Buffer.concat(parts);
          exchange.response = { status: up.statusCode, statusMessage: up.statusMessage, headers: pairs(up.rawHeaders), body: payload.toString('base64') };
          const back = [];
          for (const [name, value] of pairs(up.rawHeaders)) if (!HOP.includes(name.toLowerCase())) back.push(name, value);
          if (req.method !== 'HEAD' && up.statusCode !== 204 && up.statusCode !== 304) back.push('Content-Length', String(payload.length));
          else if (up.headers['content-length'] !== undefined) back.push('Content-Length', up.headers['content-length']);
          res.writeHead(up.statusCode, up.statusMessage, back);
          res.end(payload);
        });
        up.on('error', fail);
      });
      out.on('error', fail);
      const grouped = new Map();
      for (let i = 0; i < headers.length; i += 2) {
        const key = headers[i].toLowerCase();
        if (!grouped.has(key)) grouped.set(key, [headers[i], []]);
        grouped.get(key)[1].push(headers[i + 1]);
      }
      for (const [name, values] of grouped.values()) out.setHeader(name, values.length === 1 ? values[0] : values);
      out.setHeader('Connection', 'close'); // one connection per request
      if (!framed) out.useChunkedEncodingByDefault = false;
      out.end(body.length ? body : undefined);
    });
  });
  await new Promise((ok, fail) => server.once('error', fail).listen(0, '127.0.0.1', ok));
  const close = () => new Promise(ok => { server.close(() => ok()); server.closeAllConnections(); });
  return { url: `http://127.0.0.1:${server.address().port}`, exchanges, close };
}

/** Writes a recording to ROOT/test-results/traffic-NAME.json (`extra`: e.g. the server's base URL). */
export function saveTraffic(root, name, exchanges, extra = {}) {
  mkdirSync(join(root, 'test-results'), { recursive: true });
  const file = join(root, 'test-results', `traffic-${name}.json`);
  writeFileSync(file, JSON.stringify({ target: name, ...extra, exchanges }, null, 1) + '\n');
  return file;
}

/**
 * Records the traffic a test driver sends with the global fetch to `base`
 * (other URLs pass through unrecorded), for drivers whose clients must see
 * the server's own origin (an OpenID provider's issuer), where a proxy would
 * change it. Records what fetch exposes: the headers the client set (not
 * undici's defaults), the response's headers (set-cookie one per line) and its
 * body after any content-encoding is undone. `unrecorded(fn)` runs fn
 * without recording (concurrent requests, whose order is the scheduler's);
 * `stop()` restores fetch.
 */
export function recordFetch(base) {
  const original = globalThis.fetch;
  const exchanges = [];
  let paused = 0;
  globalThis.fetch = async (input, init) => {
    const req = new Request(input, init);
    if (paused || !(req.url === base || req.url.startsWith(base + '/'))) return original(req);
    const body = Buffer.from(await req.clone().arrayBuffer());
    const exchange = { request: { method: req.method, path: req.url.slice(base.length) || '/', headers: [...req.headers], body: body.toString('base64') } };
    exchanges.push(exchange);
    try {
      const res = await original(req);
      const payload = Buffer.from(await res.clone().arrayBuffer());
      exchange.response = { status: res.status, headers: [...res.headers], body: payload.toString('base64') };
      return res;
    } catch (e) {
      exchange.response = { error: String(e.message ?? e) };
      throw e;
    }
  };
  return {
    exchanges,
    async unrecorded(fn) { paused++; try { return await fn(); } finally { paused--; } },
    stop() { globalThis.fetch = original; },
  };
}

/** `fn()`, unrecorded when a fetch recorder is given. */
export const unrecorded = (recorder, fn) => (recorder ? recorder.unrecorded(fn) : fn());

function pairs(raw) {
  const out = [];
  for (let i = 0; i < raw.length; i += 2) out.push([raw[i], raw[i + 1]]);
  return out;
}

// ---------- normalization ----------

/** A body as text when it is UTF-8 (after undoing a content-encoding), else base64. */
export function decodeBody(base64, encoding) {
  let bytes = Buffer.from(base64 ?? '', 'base64');
  const coding = (encoding ?? '').trim().toLowerCase();
  try {
    if (coding === 'gzip' || coding === 'x-gzip') bytes = gunzipSync(bytes);
    else if (coding === 'deflate') bytes = inflateSync(bytes);
    else if (coding === 'br') bytes = brotliDecompressSync(bytes);
  } catch {}
  const text = bytes.toString('utf8');
  return Buffer.from(text, 'utf8').equals(bytes) ? { text } : { base64: bytes.toString('base64') };
}

/**
 * The generic normalization: header names lower-cased and sorted (a repeated
 * field keeps its order), IGNORED_HEADERS and the target's PLATFORM_HEADERS
 * dropped, the request's Host dropped, bodies as text. `scrub(text, where, x)`
 * (where: 'path' | 'request' | 'response'; x: the raw exchange) is the app's
 * own rule for what legitimately differs; `facts()` after the pass returns
 * whatever the app compares separately (e.g. counts or identities).
 */
export function normalizeWith(exchanges, target, { scrub = t => t, facts = () => ({}) } = {}) {
  const out = exchanges.map(x => {
    const req = x.request;
    const header = list => list.map(([n, v]) => [n.toLowerCase(), v]);
    const reqHeaders = header(req.headers).filter(([n]) => n !== 'host');
    const reqBody = decodeBody(req.body);
    const request = {
      method: req.method,
      path: scrub(req.path, 'path', x),
      headers: sortHeaders(reqHeaders.map(([n, v]) => [n, scrub(v, 'request', x)])),
      body: reqBody.text === undefined ? { base64: reqBody.base64 } : scrub(reqBody.text, 'request', x),
    };
    if (!x.response || x.response.error) return { request, response: { error: x.response?.error ?? 'no response' } };
    const res = x.response;
    const resHeaders = header(res.headers);
    const encoding = resHeaders.find(([n]) => n === 'content-encoding')?.[1];
    const resBody = decodeBody(res.body, encoding);
    const response = {
      status: res.status,
      headers: sortHeaders(resHeaders.filter(([n, v]) => !(n in IGNORED_HEADERS) && !platformHeader(target, n, v, res)).map(([n, v]) => [n, scrub(v, 'response', x)])),
      body: resBody.text === undefined ? { base64: resBody.base64 } : scrub(resBody.text, 'response', x),
    };
    return { request, response };
  });
  return { exchanges: out, facts: facts() };
}

// "name: value", sorted by name (stable: a repeated field keeps its order).
export const sortHeaders = list => list.map((h, i) => [h, i]).sort(([a, i], [b, j]) => (a[0] < b[0] ? -1 : a[0] > b[0] ? 1 : i - j)).map(([[n, v]]) => `${n}: ${v}`);

/** Replaces each distinct value with its ordinal by first appearance (a shared map per run). */
export function ordinals(prefix = '') {
  const map = new Map();
  const of = v => { if (!map.has(v)) map.set(v, map.size + 1); return `${prefix}${map.get(v)}`; };
  of.has = v => map.has(v);
  of.size = () => map.size;
  return of;
}

// ---------- comparison ----------

const keyOf = x => `${x.request.method} ${x.request.path}`;

// Longest common subsequence of the exchanges by method and path, so that a
// missing or extra request does not shift every later comparison.
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

export function lineDiff(a, b, context = 2) {
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
 * differences (with `known` set where the app's known list names them) and a
 * readable report.
 */
export function compare(golden, observed, { app = 'app', target = 'target', known = [] } = {}) {
  const differences = [];
  const isKnown = key => known.find(k => k.targets.includes(target) && new RegExp(k.request).test(key))?.issue;
  const add = d => { const issue = isKnown(d.key ?? d.request); differences.push(issue ? { ...d, known: issue } : d); };
  for (const fact of new Set([...Object.keys(golden.facts ?? {}), ...Object.keys(observed.facts ?? {})])) {
    const a = JSON.stringify(golden.facts?.[fact], null, 2) ?? 'undefined', b = JSON.stringify(observed.facts?.[fact], null, 2) ?? 'undefined';
    if (a !== b) add({ request: `(${fact})`, what: fact, lines: lineDiff(a, b) });
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
  report.push(`${app} traffic, ${target} against Node (golden): ${observed.exchanges.length} exchanges (Node ${golden.exchanges.length}), ` +
    `${failing.length} differences${differences.length - failing.length ? `, ${differences.length - failing.length} known` : ''}`);
  for (const d of differences.slice(0, 40)) {
    report.push('', `${d.known ? `KNOWN (${d.known}) ` : ''}${d.request}: ${d.what}`);
    if (d.lines) report.push(...d.lines.slice(0, 60).map(l => `    ${l}`), ...(d.lines.length > 60 ? [`    … ${d.lines.length - 60} more lines`] : []));
  }
  if (differences.length > 40) report.push('', `… ${differences.length - 40} more differences (the JSON report has all of them)`);
  report.push('', '("-" is Node, "+" is this target)');
  return { differences, failing, report: report.join('\n') };
}

/** The generic self-test: equal traffic agrees, a changed status, header and body each differ, a missing exchange is found. */
export function selfTestCompare(normalizeRecording, traffic, tweak) {
  const normalize = (exchanges, target) => normalizeRecording({ exchanges }, target);
  const node = normalize(traffic(0), 'node');
  const same = compare(node, normalize(traffic(1), 'same'), { target: 'same' });
  if (same.failing.length) throw new Error(`equal traffic differs:\n${same.report}`);
  const changed = traffic(1);
  tweak(changed.at(-1).response);
  const differs = compare(node, normalize(changed, 'differs'), { target: 'differs' });
  // (A changed body may also change an app's facts; only the exchanges are checked here.)
  const what = differs.failing.filter(d => d.request.startsWith('#')).map(d => d.what).join(',');
  if (what !== 'status,response headers,response body') throw new Error(`expected status, header and body differences, got ${what}:\n${differs.report}`);
  const known = compare(node, normalize(changed, 't'), { target: 't', known: [{ targets: ['t'], request: '.', issue: 'https://example.invalid/1' }] });
  if (known.failing.length || known.differences.filter(d => d.request.startsWith('#')).length !== 3) throw new Error(`known differences not recognized:\n${known.report}`);
  const shifted = compare(node, normalize(traffic(1).slice(1), 'shifted'), { target: 'shifted' });
  if (!shifted.failing.some(d => d.what.startsWith('missing'))) throw new Error(`a missing exchange was not reported:\n${shifted.report}`);
  return differs.report;
}

// ---------- the command line ----------

/**
 * The `compare NAME` / `self-test` command line of an app's test/equivalence.mjs.
 * Each suite is one driver's recording: test-results/traffic-SUITE-NAME.json
 * against the app's committed Node recording test/equivalence/SUITE.json
 * (normalized); `known` is its known-differences file
 * ({ known: [{ suite?, targets, request, issue }] }, request: a regular expression for "METHOD PATH").
 */
export function main({ app, root, suites, normalize, selfTest, argv = process.argv.slice(2) }) {
  const [command, name, ...only] = argv;
  if (command === 'self-test') { console.log('self-test passed\n\n' + selfTest()); return; }
  if (command !== 'compare' || !name) {
    console.error('usage: node test/equivalence.mjs compare NAME [SUITE...] | self-test');
    process.exitCode = 2;
    return;
  }
  const knownFile = join(root, 'test/equivalence/known.json');
  const known = existsSync(knownFile) ? JSON.parse(readFileSync(knownFile, 'utf8')).known : [];
  let failed = false;
  for (const suite of only.length ? only : suites) {
    const traffic = join(root, `test-results/traffic-${suite}-${name}.json`);
    const golden = join(root, `test/equivalence/${suite}.json`);
    if (!existsSync(traffic)) {
      console.log(`No recording ${traffic}: run the ${suite} driver with --equivalence first`);
      failed = true;
      continue;
    }
    const observed = normalize(JSON.parse(readFileSync(traffic, 'utf8')), name);
    writeFileSync(join(root, `test-results/normalized-${suite}-${name}.json`), JSON.stringify(observed, null, 1) + '\n');
    if (!existsSync(golden)) {
      console.log(`No golden recording ${golden}: review test-results/normalized-${suite}-${name}.json (Node's) and commit it there`);
      failed = true;
      continue;
    }
    const outcome = compare(JSON.parse(readFileSync(golden, 'utf8')), observed, {
      app: `${app} (${suite})`, target: name,
      known: known.filter(k => !k.suite || k.suite === suite),
    });
    writeFileSync(join(root, `test-results/equivalence-${suite}-${name}.json`), JSON.stringify({ target: name, suite, differences: outcome.differences }, null, 2) + '\n');
    writeFileSync(join(root, `test-results/equivalence-${suite}-${name}.txt`), outcome.report + '\n');
    console.log(outcome.report + '\n');
    if (outcome.failing.length) failed = true;
  }
  process.exitCode = failed ? 1 : 0;
}
