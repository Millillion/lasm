// Target equivalence of Ledger's API traffic (docs/TESTING.md#the-flagship-apps-recorded-traffic).
//
// `node test/api.mjs --equivalence` puts a recording proxy between the API test
// and the server; `node test/equivalence.mjs compare NAME` normalizes the
// traffic and compares it with Node's, committed as test/equivalence/api.json:
// equal statuses, equal response headers (apart from the shared
// IGNORED_HEADERS and PLATFORM_HEADERS of scripts/equivalence/traffic.mjs) and
// byte-equal bodies, request by request. The API test is sequential and uses
// fixed ids, so every target sees the same requests on an empty database.
// (The bank workload is concurrent and random, so it is not recorded.)
//
//   node test/equivalence.mjs compare NAME   # test-results/traffic-api-NAME.json against the golden file
//   node test/equivalence.mjs self-test      # the normalizer and the diff on made-up traffic
//
// Re-recording: copy test-results/normalized-api-node-24.json from the Node 24 job's
// artifact (ledger-api-node-24) over test/equivalence/api.json and review the diff.
// Known differences, each with an open issue: test/equivalence/known.json.
//
// What is normalized, and why:
// - Timestamps (every "timestamp":"N" in a body, and the ?after=N of a request
//   path) become <ts#R>, R the value's rank among all the timestamps the run's
//   responses carried. They are nanoseconds from the server's clock
//   (Date.now() x 10^6, then one apart within a batch: Ledger/Rules.lean), so
//   the values differ between runs, while their order (which event came
//   first) is still compared. Their count and that each is above 10^18 are
//   compared as facts.
// Nothing else is: ids, amounts, balances and statuses are the API test's own
// and the same everywhere.
import { fileURLToPath } from 'node:url';
import { decodeBody, main, normalizeWith, selfTestCompare } from '../../../scripts/equivalence/traffic.mjs';

const TIMESTAMP = /"timestamp":"(\d+)"/g;

export function normalize({ exchanges }, target = 'node') {
  // The rank of each timestamp among all the responses carried.
  const seen = new Set();
  for (const x of exchanges) {
    if (!x.response?.body) continue;
    const encoding = x.response.headers?.find(([n]) => n.toLowerCase() === 'content-encoding')?.[1];
    const { text } = decodeBody(x.response.body, encoding);
    if (text !== undefined) for (const [, n] of text.matchAll(TIMESTAMP)) seen.add(n);
  }
  const sorted = [...seen].sort((a, b) => (BigInt(a) < BigInt(b) ? -1 : BigInt(a) > BigInt(b) ? 1 : 0));
  const rank = new Map(sorted.map((n, i) => [n, i + 1]));
  const ts = n => (rank.has(n) ? `<ts#${rank.get(n)}>` : n);
  const scrub = (text, where) => where === 'path'
    ? text.replace(/([?&]after=)(\d+)/g, (_, k, n) => k + ts(n))
    : text.replace(TIMESTAMP, (_, n) => `"timestamp":"${ts(n)}"`);
  return normalizeWith(exchanges, target, {
    scrub,
    facts: () => ({ timestamps: { count: sorted.length, allAbove1e18: sorted.every(n => BigInt(n) > 10n ** 18n) } }),
  });
}

function selfTest() {
  const b = s => Buffer.from(s).toString('base64');
  const traffic = shift => {
    const t = n => String(1_800_000_000_000_000_000n + BigInt(shift) * 7_000_000n + BigInt(n));
    return [
      { request: { method: 'POST', path: '/api/accounts', headers: [['Host', 'a:1'], ['Content-Type', 'application/json']], body: b('[{"id":"1"}]') },
        response: { status: 200, headers: [['Date', String(shift)], ['Content-Type', 'application/json']], body: b('[{"index":0,"status":"created"}]') } },
      { request: { method: 'GET', path: '/api/accounts/1', headers: [], body: '' },
        response: { status: 200, headers: [['content-type', 'application/json']], body: b(`{"id":"1","timestamp":"${t(5)}"}`) } },
      { request: { method: 'GET', path: `/api/transfers?after=${t(5)}`, headers: [], body: '' },
        response: { status: 200, headers: [['content-type', 'application/json'], ['x-a', '1']], body: b(`[{"id":"9","timestamp":"${t(9)}"}]`) } },
    ];
  };
  const n = normalize({ exchanges: traffic(0) });
  if (n.exchanges[2].request.path !== '/api/transfers?after=<ts#1>' || !n.exchanges[2].response.body.includes('<ts#2>')) throw new Error(`timestamps not ranked: ${JSON.stringify(n.exchanges[2])}`);
  return selfTestCompare(normalize, traffic, r => { r.status = 500; r.headers.push(['X-Extra', 'x']); r.body = b('[]'); });
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const root = fileURLToPath(new URL('..', import.meta.url));
  main({ app: 'Ledger', root, suites: ['api'], normalize, selfTest });
}
