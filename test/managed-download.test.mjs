import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm, stat } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { setTimeout as delay } from 'node:timers/promises';
import { attemptDispatcher, downloadArtifact, globalDispatcher, downloadPolicy, retryDelay, transportDiagnostic } from '../src/managed-download.mjs';

const bytes = Buffer.from('a small but complete download');
const artifact = { name: 'fixture', url: 'https://example.invalid/tool', bytes: bytes.length,
  sha256: createHash('sha256').update(bytes).digest('hex') };
const policy = { attempts: 4, connectMs: 500, idleMs: 500, totalMs: 10_000 };
async function fixture(t) {
  const base = await mkdtemp(join(tmpdir(), 'lasm-download-'));
  t.after(() => rm(base, { force: true, recursive: true }));
  const events = [], waits = [];
  return { file: join(base, 'archive'), events, waits,
    options: { policy, random: () => 0, event: event => events.push(event), sleep: async ms => { waits.push(ms); } } };
}
const failed = code => Object.assign(new Error('simulated connection failure'), { code });

for (const status of [408, 429, 500, 502, 503, 504, 520, 599]) test(`recovers from HTTP ${status} within the attempt budget`, async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => ++requests < 3
    ? new Response('', { status, headers: { 'retry-after': '2' } }) : new Response(bytes) });
  assert.equal(requests, 3); assert.deepEqual(f.waits, [2000, 3000]); // Retry-After or the backoff, whichever is longer
  assert.deepEqual(await readFile(f.file), bytes);
  assert.equal(f.events.filter(e => e.type === 'failed-attempt').length, 2);
});

for (const code of ['ECONNRESET', 'EAI_AGAIN', 'UND_ERR_SOCKET']) test(`recovers from nested ${code}`, async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    if (++requests === 1) throw new TypeError('fetch failed', { cause: failed(code) });
    return new Response(bytes);
  } });
  assert.equal(requests, 2);
});

test('recovers when the connection closes before Content-Length arrives', async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    if (++requests > 1) return new Response(bytes);
    return new Response(new ReadableStream({ pull(controller) {
      controller.error(new TypeError('terminated', { cause: failed('UND_ERR_RES_CONTENT_LENGTH_MISMATCH') }));
    } }));
  } });
  assert.equal(requests, 2); assert.deepEqual(await readFile(f.file), bytes);
});

for (const scenario of ['404', '400', '403', 'certificate', 'checksum', 'oversized', 'truncated', 'encoding']) test(`${scenario} is terminal`, async t => {
  const f = await fixture(t); let requests = 0;
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    requests++;
    if (/^\d+$/.test(scenario)) return new Response('', { status: Number(scenario) });
    if (scenario === 'certificate') throw new TypeError('fetch failed', { cause: failed('CERT_HAS_EXPIRED') });
    if (scenario === 'checksum') return new Response(Buffer.alloc(bytes.length));
    if (scenario === 'oversized') return new Response(Buffer.concat([bytes, bytes]));
    if (scenario === 'truncated') return new Response(bytes.subarray(2));
    return new Response(bytes, { headers: { 'content-encoding': 'gzip' } });
  } }));
  assert.equal(requests, 1); assert.deepEqual(f.waits, []);
});

test('default backoff rides out about 2-3 minutes of server errors', async t => {
  const defaults = downloadPolicy({});
  assert.equal(defaults.attempts, 8);
  const total = random => Array.from({ length: defaults.attempts - 1 }, (_, i) => retryDelay(i + 1, () => random)).reduce((a, b) => a + b);
  assert.deepEqual(Array.from({ length: 7 }, (_, i) => retryDelay(i + 1, () => 1)), [2000, 4000, 8000, 16000, 32000, 60000, 60000]);
  assert.equal(total(0), 136_500); assert.equal(total(1), 182_000);
  // Seven 502s in a row (a burst lasting minutes), then success, with the default policy.
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, policy: { ...defaults, totalMs: 600_000 }, fetch: async () => ++requests < 8
    ? new Response('', { status: 502 }) : new Response(bytes) });
  assert.equal(requests, 8);
  assert.deepEqual(f.waits, [1500, 3000, 6000, 12000, 24000, 45000, 45000]);
  assert.deepEqual(await readFile(f.file), bytes);
  // Integrity is still checked after retries: a wrong archive after 502s is refused.
  const g = await fixture(t); let calls = 0;
  await assert.rejects(downloadArtifact(artifact, g.file, { ...g.options, policy: defaults, fetch: async () => ++calls < 3
    ? new Response('', { status: 502 }) : new Response(Buffer.alloc(bytes.length)) }));
  assert.equal(calls, 3);
});

test('exhausted retries preserve attempts and nested diagnostics', async t => {
  const f = await fixture(t); let requests = 0;
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    requests++; throw new TypeError('fetch failed', { cause: failed('ECONNRESET') });
  } }), /example.invalid.*ECONNRESET/);
  assert.equal(requests, 4); assert.equal(f.waits.length, 3);
});

for (const scenario of ['range', 'ignored-range', 'bad-range', 'changed-etag', 'no-etag'])
  test(`interrupted stream: ${scenario}`, async t => {
    const f = await fixture(t); let requests = 0;
    const options = { ...f.options, fetch: async (url, { headers }) => {
      if (++requests === 1) {
        const stream = new ReadableStream({ async start(controller) {
          controller.enqueue(bytes.subarray(0, 5));
          // Interrupt only after the first bytes are on disk: the downloader
          // resumes from the file's actual size, which a fixed delay did not
          // guarantee on slow runners (the retry then correctly sent no Range).
          for (let i = 0; i < 500; i++) {
            if (await stat(f.file).then(s => s.size === 5, () => false)) break;
            await delay(10);
          }
          controller.error(failed('ECONNRESET'));
        } });
        return new Response(stream, { headers: scenario === 'no-etag' ? {} : { etag: '"fixture"' } });
      }
      if (scenario === 'no-etag') { assert.equal(headers.range, undefined); return new Response(bytes); }
      assert.equal(headers.range, 'bytes=5-'); assert.equal(headers['if-range'], '"fixture"');
      if (scenario === 'ignored-range') return new Response(bytes);
      return new Response(bytes.subarray(5), { status: 206, headers: {
        etag: scenario === 'changed-etag' ? '"changed"' : '"fixture"',
        'content-range': `bytes ${scenario === 'bad-range' ? 6 : 5}-${bytes.length - 1}/${bytes.length}`,
      } });
    } };
    if (['bad-range', 'changed-etag'].includes(scenario)) await assert.rejects(downloadArtifact(artifact, f.file, options), /resumable/);
    else { await downloadArtifact(artifact, f.file, options); assert.deepEqual(await readFile(f.file), bytes); }
    assert.equal(requests, 2);
  });

test('a progressing slow transfer is governed by overall rather than connection deadline', async t => {
  const f = await fixture(t);
  await downloadArtifact(artifact, f.file, { ...f.options, policy: { ...policy, connectMs: 20, idleMs: 300 },
    fetch: async () => new Response(new ReadableStream({ async start(controller) {
      for (const chunk of [bytes.subarray(0, 5), bytes.subarray(5)]) { await delay(50); controller.enqueue(chunk); }
      controller.close();
    } })) });
  assert.deepEqual(await readFile(f.file), bytes);
});

test('header stalls retry; body stalls retry; overall and caller cancellation are terminal', async t => {
  for (const mode of ['headers', 'body', 'overall', 'caller']) {
    const f = await fixture(t); let requests = 0;
    const abort = new AbortController();
    const timer = mode === 'caller' ? setTimeout(() => abort.abort(failed('CALLER_CANCELLED')), 30) : undefined;
    try {
      await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, signal: abort.signal,
        policy: { ...policy, connectMs: mode === 'overall' ? 1000 : 30, idleMs: 30, totalMs: mode === 'overall' ? 50 : 10_000 },
        fetch: async (url, { signal }) => {
          requests++;
          if (mode === 'body') return new Response(new ReadableStream({ start() {} }));
          return new Promise((resolve, reject) => signal.addEventListener('abort', () => reject(signal.reason), { once: true }));
        } }), /timeout|Timed out|stopped receiving|time budget|CALLER_CANCELLED/i);
      assert.equal(requests, ['overall', 'caller'].includes(mode) ? 1 : 4);
    } finally { clearTimeout(timer); }
  }
});

// #152: a stalled attempt's connection pool is destroyed with it, and the
// retry (and every redirect hop of an attempt) uses a pool of its own.
test('every attempt fetches through its own dispatcher, destroyed when the attempt ends', async t => {
  const f = await fixture(t), made = [], seen = [];
  const newDispatcher = () => {
    const dispatcher = { id: made.length, destroyed: false, destroy: async () => { dispatcher.destroyed = true; } };
    made.push(dispatcher); return dispatcher;
  };
  await downloadArtifact(artifact, f.file, { ...f.options, dispatcher: newDispatcher, policy: { ...policy, idleMs: 30 },
    fetch: async (url, { dispatcher, signal }) => {
      seen.push({ url, id: dispatcher.id, live: made.filter(d => !d.destroyed).map(d => d.id) });
      if (!url.endsWith('/cdn')) return new Response('', { status: 302, headers: { location: '/cdn' } });
      if (made.length === 1) return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 4)); } }), { headers: { etag: '"v"' } });
      assert.equal(signal.aborted, false);
      return new Response(bytes.subarray(4), { status: 206, headers: { etag: '"v"', 'content-range': `bytes 4-${bytes.length - 1}/${bytes.length}` } });
    } });
  assert.deepEqual(await readFile(f.file), bytes);
  // Two attempts, two hops each; while one attempt runs, its own pool is the only one open.
  assert.deepEqual(seen, [
    { url: artifact.url, id: 0, live: [0] }, { url: 'https://example.invalid/cdn', id: 0, live: [0] },
    { url: artifact.url, id: 1, live: [1] }, { url: 'https://example.invalid/cdn', id: 1, live: [1] }]);
  assert.deepEqual(made.map(d => d.destroyed), [true, true]);
});

test('a dispatcher that fails to close does not fail the download; none means the global one', async t => {
  const f = await fixture(t); const options = [];
  await downloadArtifact(artifact, f.file, { ...f.options, dispatcher: () => ({ destroy: () => Promise.reject(new Error('already closed')) }),
    fetch: async (url, init) => { options.push(init); return new Response(bytes); } });
  assert.ok(options[0].dispatcher);
  const g = await fixture(t);
  await downloadArtifact(artifact, g.file, { ...g.options, dispatcher: () => undefined,
    fetch: async (url, init) => { options.push(init); return new Response(bytes); } });
  assert.equal('dispatcher' in options[1], false);
});

test('attemptDispatcher makes a new instance of the global dispatcher class', () => {
  class Pool { constructor() { this.fresh = true; } destroy() {} }
  const global = new Pool(); global.fresh = false;
  const made = attemptDispatcher(global);
  assert.ok(made instanceof Pool); assert.notEqual(made, global); assert.equal(made.fresh, true);
  assert.equal(attemptDispatcher(null), undefined, 'no global dispatcher yet');
  assert.equal(attemptDispatcher({}), undefined, 'a plain object is no dispatcher class');
  assert.equal(attemptDispatcher(Object.create(null)), undefined);
  assert.equal(attemptDispatcher(new (class { close() {} })()), undefined, 'no destroy: not a dispatcher');
  assert.equal(attemptDispatcher(new (class Broken { constructor(fail) { if (fail !== false) throw new Error('needs options'); } destroy() {} })(false)), undefined);
});

test("attemptDispatcher defaults to a new pool of the kind fetch's own global dispatcher is", async () => {
  const current = Symbol.for('undici.globalDispatcher.2'), legacy = Symbol.for('undici.globalDispatcher.1');
  assert.equal(globalDispatcher({ [current]: 'v2', [legacy]: 'v1 wrapper' }), 'v2');
  assert.equal(globalDispatcher({ [legacy]: 'v1' }), 'v1');
  assert.equal(globalDispatcher({}), undefined);
  // Node's own, once fetch has been used: Agent (or EnvHttpProxyAgent), never
  // undici 8's wrapper for the older API, which cannot be made without a pool.
  await fetch('data:,').then(r => r.text());
  const global = globalDispatcher();
  assert.ok(global, 'fetch has a global dispatcher');
  const native = attemptDispatcher();
  assert.ok(native, `a new ${global.constructor.name}`);
  assert.equal(native.constructor, global.constructor); assert.notEqual(native, global);
  assert.match(native.constructor.name, /^(Agent|EnvHttpProxyAgent)$/);
  await native.destroy();
});

test('Retry-After beyond the total budget fails rather than retrying early', async t => {
  const f = await fixture(t);
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options,
    fetch: async () => new Response('', { status: 429, headers: { 'retry-after': '3600' } }) }), /Retry-After/);
  assert.deepEqual(f.waits, []);
});

test('redirects remain HTTPS, have no credentials, and are bounded', async t => {
  for (const location of ['http://other.invalid/file', 'https://user:secret@other.invalid/file', '/loop']) {
    const f = await fixture(t); let requests = 0;
    await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
      requests++; return new Response('', { status: 302, headers: { location } });
    } }), /redirect/);
    assert.equal(requests, location === '/loop' ? 9 : 1);
  }
});

test('policy validates settings and diagnostics redact secrets', () => {
  assert.equal(downloadPolicy({}).totalMs, 7_200_000);
  assert.equal(downloadPolicy({ LASM_DOWNLOAD_ATTEMPTS: '2' }).attempts, 2);
  for (const value of ['0', '21', '-1', '1.5', 'oops'])
    assert.throws(() => downloadPolicy({ LASM_DOWNLOAD_ATTEMPTS: value }), /integer/);
  const message = transportDiagnostic(new Error('failed https://user:password@proxy.invalid/path?token=secret#secret'));
  assert.equal(message, 'failed https://proxy.invalid/path');
});

// --- Behaviour the installer's callers rely on, case by case (mutation testing). ---

const respond = (...responses) => { let i = 0; const seen = [];
  const fetch = async (url, init) => { seen.push({ url, init }); const next = responses[Math.min(i++, responses.length - 1)];
    return typeof next === 'function' ? next(url, init) : next; };
  return { fetch, seen }; };

for (const status of [400, 401, 404, 407, 409, 410, 499]) test(`HTTP ${status} is not retried`, async t => {
  const f = await fixture(t); const { fetch, seen } = respond(new Response('', { status }));
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch }),
    error => error.code === 'LASM_HTTP' && error.message.includes(`HTTP ${status}`));
  assert.equal(seen.length, 1);
});

test('a 2xx other than 200 or 206, or a body-less 200, is refused', async t => {
  for (const response of [() => new Response(bytes, { status: 203 }), () => new Response(null, { status: 200 })]) {
    const f = await fixture(t); const { fetch, seen } = respond(response);
    await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch }), error => error.code === 'LASM_HTTP');
    assert.equal(seen.length, 1);
  }
  const f = await fixture(t);
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => new Response(bytes, { status: 203 }) }),
    /Unexpected HTTP 203/);
});

test('Retry-After as an HTTP date, in the past, or unreadable falls back to the backoff', async t => {
  for (const [value, expected] of [[new Date(Date.now() + 5000).toUTCString(), [4000, 5000]], [new Date(0).toUTCString(), 1500], ['soon', 1500], ['', 1500], ['1.5', 1500]]) {
    const f = await fixture(t);
    const { fetch } = respond(new Response('', { status: 503, headers: value ? { 'retry-after': value } : {} }), new Response(bytes));
    await downloadArtifact(artifact, f.file, { ...f.options, random: () => 0, fetch });
    if (Array.isArray(expected)) assert.ok(f.waits[0] >= expected[0] && f.waits[0] <= expected[1], `${value}: ${f.waits}`);
    else assert.deepEqual(f.waits, [expected], value);
  }
});

test('the wait is the larger of Retry-After and the backoff', async t => {
  const f = await fixture(t);
  const { fetch } = respond(new Response('', { status: 503, headers: { 'retry-after': '1' } }), new Response('', { status: 503, headers: { 'retry-after': '0' } }), new Response(bytes));
  await downloadArtifact(artifact, f.file, { ...f.options, random: () => 1, fetch });
  assert.deepEqual(f.waits, [2000, 4000]);
});

test('events report each attempt, failure, retry and the transfer in order', async t => {
  const f = await fixture(t);
  const { fetch } = respond(() => { throw new TypeError('fetch failed', { cause: failed('ECONNREFUSED') }); }, new Response(bytes));
  await downloadArtifact(artifact, f.file, { ...f.options, fetch });
  assert.deepEqual(f.events, [
    { type: 'attempt', attempt: 1, maximumAttempts: 4, offset: 0 },
    { type: 'failed-attempt', attempt: 1, code: undefined, detail: 'fetch failed; ECONNREFUSED: simulated connection failure' },
    { type: 'retry', attempt: 1, waitMs: 1500, detail: 'fetch failed; ECONNREFUSED: simulated connection failure' },
    { type: 'attempt', attempt: 2, maximumAttempts: 4, offset: 0 },
    { type: 'transferred', attempt: 2, receivedBytes: bytes.length },
  ]);
});

test('progress updates report received bytes, then the verified total once', async t => {
  const f = await fixture(t), updates = [];
  await downloadArtifact(artifact, f.file, { ...f.options, update: (...args) => updates.push(args),
    fetch: async () => new Response(new ReadableStream({ async start(c) { c.enqueue(bytes.subarray(0, 3)); await delay(300); c.enqueue(bytes.subarray(3)); c.close(); } })) });
  assert.deepEqual(updates, [[3], [bytes.length], [bytes.length, true]]);
  // Chunks closer together than 250 ms are reported once.
  const g = await fixture(t), quick = [];
  await downloadArtifact(artifact, g.file, { ...g.options, update: (...args) => quick.push(args),
    fetch: async () => new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 3)); c.enqueue(bytes.subarray(3)); c.close(); } })) });
  assert.deepEqual(quick, [[3], [bytes.length, true]]);
});

test('the final error names the artifact and host, keeps the cause and its code, and explains the fix', async t => {
  const f = await fixture(t); const cause = new TypeError('fetch failed', { cause: failed('ECONNRESET') });
  const error = await downloadArtifact(artifact, f.file, { ...f.options, policy: { ...policy, attempts: 2 }, fetch: async () => { throw cause; } }).then(() => null, e => e);
  assert.equal(error.message, 'Could not download fixture from example.invalid: fetch failed; ECONNRESET: simulated connection failure. '
    + 'Check network access and retry. For a proxy use NODE_USE_ENV_PROXY=1 with HTTPS_PROXY; '
    + 'for a private CA set NODE_EXTRA_CA_CERTS before starting Node. TLS verification must remain enabled.');
  assert.equal(error.cause, cause);
  // The cause has no code of its own: the last failed attempt's code is not invented either.
  assert.equal(error.code, undefined);
  const g = await fixture(t);
  const coded = await downloadArtifact(artifact, g.file, { ...g.options, fetch: async () => new Response('', { status: 404 }) }).then(() => null, e => e);
  assert.equal(coded.code, 'LASM_HTTP'); assert.equal(coded.cause.code, 'LASM_HTTP');
  const h = await fixture(t);
  const integrity = await downloadArtifact(artifact, h.file, { ...h.options, fetch: async () => new Response(Buffer.alloc(bytes.length)) }).then(() => null, e => e);
  assert.equal(integrity.code, 'LASM_INTEGRITY'); assert.match(integrity.message, /checksum or size mismatch: fixture/);
});

test('one attempt allowed: a retryable failure is final', async t => {
  const f = await fixture(t); const { fetch, seen } = respond(new Response('', { status: 503 }));
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, policy: { ...policy, attempts: 1 }, fetch }),
    error => error.code === 'LASM_HTTP_RETRY');
  assert.equal(seen.length, 1); assert.deepEqual(f.waits, []);
});

test('requests ask for an unencoded body, without a Range header on a fresh attempt', async t => {
  const f = await fixture(t); const { fetch, seen } = respond(new Response(bytes, { headers: { 'content-encoding': 'identity', 'content-length': String(bytes.length) } }));
  await downloadArtifact(artifact, f.file, { ...f.options, fetch });
  assert.deepEqual(seen[0].init.headers, { 'accept-encoding': 'identity' });
  assert.equal(seen[0].init.redirect, 'manual');
  assert.ok(seen[0].init.signal instanceof AbortSignal);
  assert.deepEqual(await readFile(f.file), bytes);
  if (process.platform !== 'win32') assert.equal((await stat(f.file)).mode & 0o777, 0o600);
});

test('a Content-Length other than the artifact size is an integrity failure before any byte is written', async t => {
  for (const length of [bytes.length - 1, bytes.length + 1]) {
    const f = await fixture(t);
    const { fetch, seen } = respond(() => new Response(bytes, { headers: { 'content-length': String(length) } }));
    await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch }),
      error => error.code === 'LASM_INTEGRITY' && /size mismatch: fixture/.test(error.message));
    assert.equal(seen.length, 1);
  }
});

test('a body larger than the artifact fails as an integrity error, not a retry', async t => {
  const f = await fixture(t);
  const { fetch, seen } = respond(() => new Response(new ReadableStream({ start(c) { c.enqueue(bytes); c.enqueue(Buffer.from('x')); c.close(); } })));
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch }), error => error.code === 'LASM_INTEGRITY');
  assert.equal(seen.length, 1);
  // Exactly the artifact's size passes the running check.
  const g = await fixture(t);
  await downloadArtifact(artifact, g.file, { ...g.options, fetch: async () => new Response(new ReadableStream({ start(c) { c.enqueue(bytes); c.close(); } })) });
});

test('a 206 without a requested range, or with a wrong end or total, is refused', async t => {
  const first = await fixture(t);
  await assert.rejects(downloadArtifact(artifact, first.file, { ...first.options,
    fetch: async () => new Response(bytes, { status: 206, headers: { etag: '"v"', 'content-range': `bytes 0-${bytes.length - 1}/${bytes.length}` } }) }),
  error => error.code === 'LASM_RANGE');
  for (const range of [`bytes 5-${bytes.length - 2}/${bytes.length}`, `bytes 5-${bytes.length - 1}/${bytes.length + 1}`, `bytes 5-${bytes.length - 1}/*`, `x bytes 5-${bytes.length - 1}/${bytes.length}`, '']) {
    const f = await fixture(t); let requests = 0;
    await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
      if (++requests === 1) return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 5)); setTimeout(() => c.error(failed('ECONNRESET')), 50); } }), { headers: { etag: '"v"' } });
      return new Response(bytes.subarray(5), { status: 206, headers: { etag: '"v"', ...(range ? { 'content-range': range } : {}) } });
    } }), error => error.code === 'LASM_RANGE', range);
    assert.equal(requests, 2);
  }
});

test('only a strong, quoted ETag is used to resume', async t => {
  for (const etag of ['W/"weak"', 'unquoted', '""', '"a"b"']) {
    const f = await fixture(t); const ranges = [];
    await downloadArtifact(artifact, f.file, { ...f.options, fetch: async (url, { headers }) => {
      ranges.push(headers.range);
      if (ranges.length === 1) return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 5)); setTimeout(() => c.error(failed('ECONNRESET')), 50); } }), { headers: { etag } });
      return new Response(bytes);
    } });
    assert.deepEqual(ranges, [undefined, undefined], etag);
    assert.deepEqual(await readFile(f.file), bytes);
  }
});

test('a body that fails after its last byte is verified without another request', async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    requests++;
    return new Response(new ReadableStream({ async start(c) {
      c.enqueue(bytes);
      for (let i = 0; i < 500 && !await stat(f.file).then(s => s.size === bytes.length, () => false); i++) await delay(10);
      c.error(failed('ECONNRESET'));
    } }), { headers: { etag: '"whole"' } });
  } });
  assert.equal(requests, 1); assert.deepEqual(await readFile(f.file), bytes);
  assert.deepEqual(f.events.map(e => e.type), ['attempt', 'failed-attempt', 'retry']);
});

test('a response delivered over plain HTTP is refused even when fetch followed it', async t => {
  const f = await fixture(t);
  const response = new Response(bytes); Object.defineProperty(response, 'url', { value: 'http://example.invalid/tool' });
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => response }),
    error => error.code === 'LASM_REDIRECT' && /away from HTTPS/.test(error.message));
  const g = await fixture(t);
  const secure = new Response(bytes); Object.defineProperty(secure, 'url', { value: 'https://cdn.invalid/tool' });
  await downloadArtifact(artifact, g.file, { ...g.options, fetch: async () => secure });
});

test('an already cancelled caller signal makes no request', async t => {
  const f = await fixture(t); const { fetch, seen } = respond(new Response(bytes));
  const reason = failed('CALLER_CANCELLED');
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, signal: AbortSignal.abort(reason), fetch }),
    error => error.code === 'CALLER_CANCELLED' && error.cause === reason);
  assert.equal(seen.length, 0);
});

test('cancellation during the backoff stops the retry', async t => {
  const f = await fixture(t); const abort = new AbortController(); const { fetch, seen } = respond(new Response('', { status: 503 }));
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, signal: abort.signal, fetch,
    sleep: async (ms, value, { signal }) => { abort.abort(failed('STOPPED')); signal.throwIfAborted(); } }), error => error.code === 'STOPPED');
  assert.equal(seen.length, 1);
});

test('a retry whose wait reaches the remaining budget is not attempted', async t => {
  const f = await fixture(t); const { fetch, seen } = respond(new Response('', { status: 503, headers: { 'retry-after': '10' } }));
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, policy: { ...policy, totalMs: 10_000 }, fetch }),
    error => error.code === 'LASM_TOTAL_TIMEOUT');
  assert.equal(seen.length, 1); assert.deepEqual(f.waits, []);
  const g = await fixture(t); const ok = respond(new Response('', { status: 503, headers: { 'retry-after': '5' } }), new Response(bytes));
  await downloadArtifact(artifact, g.file, { ...g.options, policy: { ...policy, totalMs: 10_000 }, fetch: ok.fetch });
  assert.deepEqual(g.waits, [5000]);
});

test('an error whose own code is not transient is final even with a transient cause', async t => {
  const f = await fixture(t); let requests = 0;
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    requests++; throw Object.assign(new Error('refused', { cause: failed('ECONNRESET') }), { code: 'ERR_TLS_CERT_ALTNAME_INVALID' });
  } }), error => error.code === 'ERR_TLS_CERT_ALTNAME_INVALID');
  assert.equal(requests, 1);
});

for (const [name, make] of [
  ['an aggregate of connection errors', () => new AggregateError([new Error('v6'), failed('ECONNREFUSED')], 'all addresses failed')],
  ['a deeply nested cause', () => new TypeError('fetch failed', { cause: new Error('socket', { cause: new Error('inner', { cause: failed('ETIMEDOUT') }) }) })],
  ['an aggregate inside a cause', () => new TypeError('fetch failed', { cause: new AggregateError([failed('EPIPE')]) })],
]) test(`${name} is retried`, async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => { if (++requests === 1) throw make(); return new Response(bytes); } });
  assert.equal(requests, 2);
});

for (const [name, make] of [
  ['an error with no code or cause', () => new Error('plain')],
  ['an aggregate of permanent errors', () => new AggregateError([failed('CERT_HAS_EXPIRED'), new Error('x')])],
  ['a nested permanent cause', () => new TypeError('fetch failed', { cause: new Error('socket', { cause: failed('ERR_SSL_WRONG_VERSION_NUMBER') }) })],
]) test(`${name} is final`, async t => {
  const f = await fixture(t); let requests = 0;
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => { requests++; throw make(); } }));
  assert.equal(requests, 1);
});

for (const code of ['ECONNRESET', 'ECONNREFUSED', 'EPIPE', 'ETIMEDOUT', 'EAI_AGAIN', 'UND_ERR_SOCKET', 'UND_ERR_CONNECT_TIMEOUT',
  'UND_ERR_HEADERS_TIMEOUT', 'UND_ERR_BODY_TIMEOUT', 'UND_ERR_RES_CONTENT_LENGTH_MISMATCH', 'LASM_CONNECT_TIMEOUT', 'LASM_IDLE_TIMEOUT', 'LASM_HTTP_RETRY'])
  test(`transient code ${code} is retried directly`, async t => {
    const f = await fixture(t); let requests = 0;
    await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => { if (++requests === 1) throw failed(code); return new Response(bytes); } });
    assert.equal(requests, 2);
  });

test('redirect statuses are followed explicitly; other 3xx statuses are returned', async t => {
  for (const status of [301, 302, 303, 307, 308]) {
    const seen = [];
    const response = await (await import('../src/managed-download.mjs')).fetchArtifact('https://a.invalid/x/file', { headers: { h: '1' } }, async (url, init) => {
      seen.push([url, init.redirect, init.headers.h]);
      return seen.length === 1 ? new Response(null, { status, headers: { location: '../y/next?q=1' } }) : new Response('done');
    });
    assert.equal(await response.text(), 'done');
    assert.deepEqual(seen, [['https://a.invalid/x/file', 'manual', '1'], ['https://a.invalid/y/next?q=1', 'manual', '1']], String(status));
  }
  const { fetchArtifact } = await import('../src/managed-download.mjs');
  for (const status of [300, 304]) {
    let calls = 0;
    const response = await fetchArtifact('https://a.invalid/f', {}, async () => { calls++; return new Response(null, { status, headers: { location: '/g' } }); });
    assert.equal(response.status, status); assert.equal(calls, 1);
  }
  await assert.rejects(fetchArtifact('https://a.invalid/f', {}, async () => new Response(null, { status: 302 })),
    error => error.code === 'LASM_REDIRECT' && /no location/.test(error.message));
  // Eight redirects are followed; a ninth is too many.
  for (const [hops, ok] of [[8, true], [9, false]]) {
    let calls = 0;
    const result = fetchArtifact('https://a.invalid/0', {}, async () => ++calls <= hops ? new Response(null, { status: 302, headers: { location: `/${calls}` } }) : new Response('end'));
    if (ok) assert.equal(await (await result).text(), 'end');
    else await assert.rejects(result, error => error.code === 'LASM_REDIRECT' && /Too many/.test(error.message));
  }
  for (const url of ['http://a.invalid/f', 'https://user@a.invalid/f', 'https://:pw@a.invalid/f'])
    await assert.rejects(fetchArtifact(url, {}, async () => assert.fail('no request')), error => error.code === 'LASM_REDIRECT');
});

test('every policy setting has its own variable and inclusive bounds', () => {
  for (const [key, name, fallback, min, max] of [['attempts', 'LASM_DOWNLOAD_ATTEMPTS', 8, 1, 20], ['connectMs', 'LASM_DOWNLOAD_CONNECT_MS', 60_000, 1_000, 600_000],
    ['idleMs', 'LASM_DOWNLOAD_IDLE_MS', 120_000, 1_000, 1_800_000], ['totalMs', 'LASM_DOWNLOAD_TOTAL_MS', 7_200_000, 1_000, 86_400_000]]) {
    assert.equal(downloadPolicy({})[key], fallback);
    assert.equal(downloadPolicy({ [name]: String(min) })[key], min);
    assert.equal(downloadPolicy({ [name]: String(max) })[key], max);
    assert.throws(() => downloadPolicy({ [name]: String(min - 1) }), { message: `${name} must be an integer from ${min} to ${max}.` });
    assert.throws(() => downloadPolicy({ [name]: String(max + 1) }), { message: `${name} must be an integer from ${min} to ${max}.` });
  }
  assert.deepEqual(downloadPolicy({}), { attempts: 8, connectMs: 60_000, idleMs: 120_000, totalMs: 7_200_000 });
  // An empty value is 0, not the default.
  assert.throws(() => downloadPolicy({ LASM_DOWNLOAD_ATTEMPTS: '' }), /LASM_DOWNLOAD_ATTEMPTS/);
});

test('diagnostics walk causes and aggregates once, bounded, without duplicates', () => {
  const inner = failed('ECONNRESET');
  const top = new TypeError('fetch failed', { cause: new AggregateError([inner, inner, new Error('second')], 'many', { cause: inner }) });
  assert.equal(transportDiagnostic(top), 'fetch failed; many; ECONNRESET: simulated connection failure; second');
  const cycle = new Error('loop'); cycle.cause = cycle;
  assert.equal(transportDiagnostic(cycle), 'loop');
  assert.equal(transportDiagnostic({ code: 'ONLY_CODE' }), 'ONLY_CODE');
  assert.equal(transportDiagnostic(undefined), '');
  // At most eight errors of a chain are described.
  let chain; for (let i = 12; i >= 1; i--) chain = new Error(`e${i}`, chain ? { cause: chain } : undefined);
  assert.equal(transportDiagnostic(chain), 'e1; e2; e3; e4; e5; e6; e7; e8');
  assert.equal(transportDiagnostic(new Error('x'.repeat(5000))).length, 3000);
  assert.equal(transportDiagnostic(new Error('see HTTP://Proxy.invalid:8080/a?b#c and https://[broken then')),
    'see http://proxy.invalid:8080/a and [redacted URL] then');
});

// ∀ attempt ≥ 1, ∀ r ∈ [0, 1], let b := min 60000 (2000 * 2 ^ (attempt - 1)); 3b/4 ≤ retryDelay attempt r ≤ b
test('retry delays stay within 75-100 % of the capped doubling backoff', async () => {
  const { forAll } = await import('./helpers/property.mjs');
  forAll(g => ({ attempt: g.int(1, 20), r: g.next() }), ({ attempt, r }) => {
    const base = Math.min(60_000, 2000 * 2 ** (attempt - 1)), wait = retryDelay(attempt, () => r);
    assert.ok(wait >= Math.round(base * 0.75) && wait <= base, `${wait} for base ${base}`);
    assert.equal(wait, Math.round(base * (0.75 + r * 0.25)));
  });
  assert.equal(retryDelay(1, () => 0.5), 1750);
  assert.equal(retryDelay(7, () => 0), 45_000);
});

const failure = promise => promise.then(() => assert.fail('expected a failure'), error => error);
const diagnosticOf = error => error.message.slice(error.message.indexOf(': ') + 2, error.message.indexOf('. Check network access'));

test('each timeout names itself: headers, idle body, overall budget', async t => {
  const stall = async (url, { signal }) => new Promise((resolve, reject) => signal.addEventListener('abort', () => reject(signal.reason), { once: true }));
  const f = await fixture(t);
  const headers = await failure(downloadArtifact(artifact, f.file, { ...f.options, policy: { ...policy, attempts: 1, connectMs: 20 }, fetch: stall }));
  assert.equal(headers.code, 'LASM_CONNECT_TIMEOUT');
  assert.equal(diagnosticOf(headers), 'LASM_CONNECT_TIMEOUT: Timed out connecting or waiting for download headers');
  const g = await fixture(t);
  const idle = await failure(downloadArtifact(artifact, g.file, { ...g.options, policy: { ...policy, attempts: 1, idleMs: 20 },
    fetch: async () => new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 3)); } })) }));
  assert.equal(idle.code, 'LASM_IDLE_TIMEOUT');
  assert.equal(diagnosticOf(idle), 'LASM_IDLE_TIMEOUT: Download stopped receiving data');
  const h = await fixture(t);
  const overall = await failure(downloadArtifact(artifact, h.file, { ...h.options, policy: { ...policy, connectMs: 5000, totalMs: 30 }, fetch: stall }));
  assert.equal(overall.code, 'LASM_TOTAL_TIMEOUT');
  assert.equal(diagnosticOf(overall), 'LASM_TOTAL_TIMEOUT: Download exceeded its overall time budget');
});

test('HTTP failures are described exactly', async t => {
  const f = await fixture(t);
  const notFound = await failure(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => new Response('', { status: 404 }) }));
  assert.equal(diagnosticOf(notFound), 'LASM_HTTP: HTTP 404');
  const g = await fixture(t);
  const busy = await failure(downloadArtifact(artifact, g.file, { ...g.options, policy: { ...policy, attempts: 1 }, fetch: async () => new Response('', { status: 503 }) }));
  assert.equal(diagnosticOf(busy), 'LASM_HTTP_RETRY: HTTP 503');
  const h = await fixture(t);
  const gzip = await failure(downloadArtifact(artifact, h.file, { ...h.options, fetch: async () => new Response(bytes, { headers: { 'content-encoding': 'gzip' } }) }));
  assert.equal(diagnosticOf(gzip), 'LASM_INTEGRITY: Unexpected download content encoding');
  const i = await fixture(t);
  const large = await failure(downloadArtifact(artifact, i.file, { ...i.options, fetch: async () => new Response(Buffer.concat([bytes, bytes])) }));
  assert.equal(diagnosticOf(large), 'LASM_INTEGRITY: Download size mismatch: fixture');
  const j = await fixture(t);
  const short = await failure(downloadArtifact(artifact, j.file, { ...j.options, fetch: async () => new Response(bytes.subarray(2)) }));
  assert.equal(diagnosticOf(short), 'LASM_INTEGRITY: Download checksum or size mismatch: fixture');
  assert.equal(j.events.some(e => e.type === 'transferred'), false, 'a short body is not reported as transferred');
  // Statuses outside 100-599 (only a non-standard fetch returns them) are not server errors to retry.
  const k = await fixture(t); let requests = 0;
  const odd = await failure(downloadArtifact(artifact, k.file, { ...k.options, fetch: async () => { requests++; return { status: 600, ok: false, url: '', headers: new Headers(), body: null }; } }));
  assert.equal(odd.code, 'LASM_HTTP'); assert.equal(requests, 1);
});

test('Retry-After: only whole seconds count as seconds', async t => {
  for (const [value, expected] of [['10', [10_000]], ['5.3', [2000]], ['7e1', [2000]]]) {
    const f = await fixture(t);
    await downloadArtifact(artifact, f.file, { ...f.options, random: () => 1, policy: { ...policy, totalMs: 600_000 },
      fetch: (() => { let n = 0; return async () => ++n === 1 ? new Response('', { status: 503, headers: { 'retry-after': value } }) : new Response(bytes); })() });
    assert.deepEqual(f.waits, expected, value);
  }
});

test('a resume from a two-digit offset is validated exactly', async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async (url, { headers }) => {
    if (++requests === 1) return new Response(new ReadableStream({ async start(c) {
      c.enqueue(bytes.subarray(0, 12));
      for (let i = 0; i < 500 && !await stat(f.file).then(s => s.size === 12, () => false); i++) await delay(10);
      c.error(failed('ECONNRESET'));
    } }), { headers: { etag: '"v"' } });
    assert.equal(headers.range, 'bytes=12-');
    return new Response(bytes.subarray(12), { status: 206, headers: { etag: '"v"', 'content-range': `bytes 12-${bytes.length - 1}/${bytes.length}`,
      'content-length': String(bytes.length - 12) } });
  } });
  assert.deepEqual(await readFile(f.file), bytes);
  const g = await fixture(t); let calls = 0;
  await assert.rejects(downloadArtifact(artifact, g.file, { ...g.options, fetch: async () => {
    if (++calls === 1) return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 5)); setTimeout(() => c.error(failed('ECONNRESET')), 50); } }), { headers: { etag: '"v"' } });
    return new Response(bytes.subarray(5), { status: 206, headers: { etag: '"v"', 'content-range': `bytes 5-${bytes.length - 1}/${bytes.length}x` } });
  } }), error => error.code === 'LASM_RANGE');
});

test('a partial file that disappears before the retry is downloaded again; other file errors stop', async t => {
  const f = await fixture(t); const ranges = [];
  await downloadArtifact(artifact, f.file, { ...f.options, sleep: async () => { await rm(f.file); },
    fetch: async (url, { headers }) => {
      ranges.push(headers.range);
      if (ranges.length === 1) return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 5)); setTimeout(() => c.error(failed('ECONNRESET')), 50); } }), { headers: { etag: '"v"' } });
      return new Response(bytes);
    } });
  assert.deepEqual(ranges, [undefined, undefined]);
  assert.deepEqual(await readFile(f.file), bytes);
  const base = await mkdtemp(join(tmpdir(), 'lasm-download-gone-'));
  t.after(() => rm(base, { recursive: true, force: true }));
  const { mkdir, writeFile } = await import('node:fs/promises');
  await mkdir(join(base, 'parent'));
  const file = join(base, 'parent', 'archive'); let requests = 0;
  const error = await failure(downloadArtifact(artifact, file, { ...f.options, sleep: async () => { await rm(join(base, 'parent'), { recursive: true }); await writeFile(join(base, 'parent'), ''); },
    fetch: async () => { requests++; return new Response(new ReadableStream({ start(c) { c.enqueue(bytes.subarray(0, 5)); setTimeout(() => c.error(failed('ECONNRESET')), 50); } }), { headers: { etag: '"v"' } }); } }));
  assert.equal(error.code, 'ENOTDIR'); assert.equal(requests, 1);
});

test('cancellation is honoured between attempts and during an attempt, whatever its reason', async t => {
  const f = await fixture(t); const abort = new AbortController(); let requests = 0;
  const error = await failure(downloadArtifact(artifact, f.file, { ...f.options, signal: abort.signal, sleep: async () => { abort.abort(failed('STOPPED')); },
    fetch: async () => { requests++; return requests === 1 ? new Response('', { status: 503 }) : new Response(bytes); } }));
  assert.equal(error.code, 'STOPPED'); assert.equal(requests, 1);
  // A caller's reason that looks transient is still final.
  const g = await fixture(t); const stop = new AbortController(); let calls = 0;
  const reset = await failure(downloadArtifact(artifact, g.file, { ...g.options, signal: stop.signal, fetch: async (url, { signal }) => {
    calls++; setTimeout(() => stop.abort(failed('ECONNRESET')), 10);
    return new Promise((resolve, reject) => signal.addEventListener('abort', () => reject(signal.reason), { once: true }));
  } }));
  assert.equal(reset.code, 'ECONNRESET'); assert.equal(calls, 1);
});

test('an unread error body is cancelled', async t => {
  const f = await fixture(t); let cancelled = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: (() => { let n = 0; return async () => ++n === 1
    ? new Response(new ReadableStream({ cancel() { cancelled++; } }), { status: 503 }) : new Response(bytes); })() });
  assert.equal(cancelled, 1);
});

test('the final error keeps the failure that ended the download, else the last attempt\'s code', async t => {
  const f = await fixture(t);
  const thrown = new Error('sleep failed');
  const plain = await failure(downloadArtifact(artifact, f.file, { ...f.options, sleep: async () => { throw thrown; }, fetch: async () => new Response('', { status: 503 }) }));
  assert.equal(plain.cause, thrown); assert.equal(plain.code, 'LASM_HTTP_RETRY');
  const g = await fixture(t);
  const coded = await failure(downloadArtifact(artifact, g.file, { ...g.options, sleep: async () => { throw failed('X_SLEEP'); }, fetch: async () => new Response('', { status: 503 }) }));
  assert.equal(coded.code, 'X_SLEEP');
  // A failure with neither code nor cause is the cause itself (not an error from classifying it).
  for (const make of [() => new Error('plain'), () => new AggregateError([new Error('x')]), () => new Error('outer', { cause: new Error('inner') })]) {
    const h = await fixture(t); const error = make();
    assert.equal((await failure(downloadArtifact(artifact, h.file, { ...h.options, fetch: async () => { throw error; } }))).cause, error);
  }
});

test('a constructor without a prototype is no dispatcher class', () => {
  assert.equal(attemptDispatcher({ constructor: () => {} }), undefined);
});
