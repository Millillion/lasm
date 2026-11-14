// Target equivalence of Tandem's sync-protocol traffic (docs/TESTING.md#the-flagship-apps-recorded-traffic).
//
// `node test/protocol.mjs --equivalence` records the HTTP requests the protocol
// tests send to the server, with their responses; `node test/equivalence.mjs
// compare NAME` normalizes the recording and compares it with Node's,
// committed as test/equivalence/protocol.json: equal statuses, equal response
// headers (apart from the shared IGNORED_HEADERS and PLATFORM_HEADERS of
// scripts/equivalence/traffic.mjs) and byte-equal bodies, request by request.
// Not recorded (test/protocol.mjs marks them): the 24 concurrent writers
// (the order the log takes them in is the scheduler's), the long-poll (its
// timeout is 2 s on Node and 10 s on Workers), and the WebSocket and SIGKILL
// tests, which only some targets run. The simulation and the fuzzer are
// concurrent or time-bounded, so they are not recorded either.
//
//   node test/equivalence.mjs compare NAME   # test-results/traffic-protocol-NAME.json against the golden file
//   node test/equivalence.mjs self-test      # the normalizer and the diff on made-up traffic
//
// Re-recording: copy test-results/normalized-protocol-node-24.json from the
// Node 24 job's artifact over test/equivalence/protocol.json and review the diff.
// Known differences, each with an open issue: test/equivalence/known.json.
//
// What is normalized, and why:
// - Document names: the tests name each document p<clock>-<n> (the clock so
//   that a rerun against a running server starts fresh), and the clock part
//   becomes <clock>. The <n> is the test's own counter and is compared.
// Nothing else is: the operations, cursors, logs, errors and statuses are the
// same everywhere.
import { fileURLToPath } from 'node:url';
import { main, normalizeWith, selfTestCompare } from '../../../scripts/equivalence/traffic.mjs';

export function normalize({ exchanges }, target = 'node') {
  const scrub = (text, where) => (where === 'path' ? text.replace(/^\/doc\/p\d+-(\d+)\//, '/doc/p<clock>-$1/') : text);
  return normalizeWith(exchanges, target, { scrub });
}

function selfTest() {
  const b = s => Buffer.from(s).toString('base64');
  const traffic = seed => [
    { request: { method: 'POST', path: `/doc/p${12345 + seed}-0/sync`, headers: [['content-type', 'text/plain']], body: b('tandem 1\nsync 0\ni 1 1 R 104\n') },
      response: { status: 200, headers: [['date', String(seed)], ['content-type', 'text/plain; charset=utf-8']], body: b('tandem 1\nlog 0 1\ni 1 1 R 104\n') } },
    { request: { method: 'GET', path: `/doc/p${12345 + seed}-0/text`, headers: [], body: '' },
      response: { status: 200, headers: [['content-type', 'text/plain; charset=utf-8']], body: b('h') } },
  ];
  const n = normalize({ exchanges: traffic(0) });
  if (n.exchanges[1].request.path !== '/doc/p<clock>-0/text') throw new Error(`document name not normalized: ${n.exchanges[1].request.path}`);
  return selfTestCompare(normalize, traffic, r => { r.status = 500; r.headers.push(['X-Extra', 'x']); r.body = b(''); });
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  main({ app: 'Tandem', root: fileURLToPath(new URL('..', import.meta.url)), suites: ['protocol'], normalize, selfTest });
}
