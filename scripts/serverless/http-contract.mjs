// The HTTP contract every `lasm init` server template implements, checked
// through a platform's local server (Vercel's Node launcher, netlify dev,
// Azure Functions Core Tools, the Functions Framework, containers).
import assert from 'node:assert/strict';

export async function waitFor(url, { timeoutMs = 120_000, alive = () => true } = {}) {
  const started = performance.now();
  for (;;) {
    const ok = await fetch(url, { signal: AbortSignal.timeout(10_000) }).then(r => r.status < 500, () => false);
    if (ok) return Math.round(performance.now() - started);
    assert.ok(alive(), `the server exited before ${url} answered`);
    assert.ok(performance.now() - started < timeoutMs, `${url} did not answer within ${timeoutMs} ms`);
    await new Promise(done => setTimeout(done, 100));
  }
}

/** Returns [{ name, ok, error? }]. */
export async function checkContract(base, framework) {
  const checks = [];
  const check = async (name, method, path, body, status, expected) => {
    try {
      const response = await fetch(base + path, { method, headers: body ? { 'content-type': 'application/json' } : {},
        body: body ? JSON.stringify(body) : undefined, signal: AbortSignal.timeout(60_000) });
      const text = await response.text();
      assert.equal(response.status, status, `${method} ${path}: ${response.status} ${text.slice(0, 500)}`);
      if (expected !== undefined) assert.deepEqual(JSON.parse(text), expected, `${method} ${path}`);
      checks.push({ name, ok: true });
    } catch (error) { checks.push({ name, ok: false, error: error.message.slice(0, 1000) }); }
  };
  await check('GET /', 'GET', '/', undefined, 200, { message: `Hello from Lean on ${framework}!` });
  await check('GET /hello/Ada?x=1', 'GET', '/hello/Ada?x=1', undefined, 200, { message: 'Hello, Ada, from Lean!' });
  await check('POST /echo (JSON body)', 'POST', '/echo', { n: [1, 2], s: 'λ' }, 200, { echo: { n: [1, 2], s: 'λ' } });
  await check('GET /health', 'GET', '/health', undefined, 200, { ok: true });
  await check('GET /missing is 404', 'GET', '/missing', undefined, 404);
  return checks;
}
