// Expected responses of the edge test apps (Phase 7.2): the Hono template
// (lasm init --template hono --deploy workers) and examples/edge-pure.
export const apps = {
  hono: {
    checks: [
      { path: '/', status: 200, body: '{"message":"Hello from Lean on Hono!"}' },
      { path: '/hello/Ada', status: 200, body: '{"message":"Hello, Ada, from Lean!"}' },
      { method: 'POST', path: '/echo', send: '{"n":[1,2]}', type: 'application/json', status: 200, body: '{"echo":{"n":[1,2]}}' },
      { path: '/health', status: 200, body: '{"ok":true}' },
      { path: '/missing', status: 404 },
    ],
    bench: { trivial: '/health', json: '/hello/Ada' },
  },
  pure: {
    checks: [
      { path: '/', status: 200, body: '{"message":"Hello from pure Lean on the edge!"}' },
      { path: '/fib/25', status: 200, body: '{"fib":75025}' },
      { path: '/primes/100000', status: 200, body: '{"count":9592,"last":99991}' },
      { path: '/bignum', status: 200, body: '{"twoTo200":"1606938044258990275541962092341162602522202993782792835301376"}' },
      { method: 'POST', path: '/words', send: 'to be or not to be', status: 200, body: '{"be":2,"not":1,"or":1,"to":2}' },
      { path: '/asleep/20', status: 200, body: '{"sum":16}' },
      { path: '/sleep/20', status: 200, match: /^\{"sleptMs":(19|2\d|3\d|4\d)\}$/ },
      { path: '/block', status: 200, body: '{"blocked":42}' },
      { path: '/task/20', status: 200, body: '{"task":5}' },
      { path: '/mutex', status: 200, body: '{"count":8}' },
      { path: '/date', status: 200, match: /^\{"now":"20\d\d-\d\d-\d\dT/ },
      { path: '/deep/5000', status: 200, body: '{"depth":5000}' },
      { path: '/nope', status: 404, body: '{"error":"not found"}' },
    ],
    // Stops the instance; the next request must get a fresh one.
    fatal: { path: '/deep/1000000', after: { path: '/fib/10', status: 200, body: '{"fib":55}' } },
    bench: { trivial: '/', json: '/primes/10000' },
  },
};
