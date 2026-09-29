import test from 'node:test';
import assert from 'node:assert/strict';
import { mkdtemp, readFile, rm } from 'node:fs/promises';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { createHash } from 'node:crypto';
import { setTimeout as delay } from 'node:timers/promises';
import { downloadArtifact, downloadPolicy, transportDiagnostic } from '../src/managed-download.mjs';

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

for (const status of [408, 429, 500, 502, 503, 504]) test(`recovers from HTTP ${status} within the attempt budget`, async t => {
  const f = await fixture(t); let requests = 0;
  await downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => ++requests < 3
    ? new Response('', { status, headers: { 'retry-after': '2' } }) : new Response(bytes) });
  assert.equal(requests, 3); assert.deepEqual(f.waits, [2000, 2000]);
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

for (const scenario of ['404', 'certificate', 'checksum', 'oversized', 'truncated', 'encoding']) test(`${scenario} is terminal`, async t => {
  const f = await fixture(t); let requests = 0;
  await assert.rejects(downloadArtifact(artifact, f.file, { ...f.options, fetch: async () => {
    requests++;
    if (scenario === '404') return new Response('', { status: 404 });
    if (scenario === 'certificate') throw new TypeError('fetch failed', { cause: failed('CERT_HAS_EXPIRED') });
    if (scenario === 'checksum') return new Response(Buffer.alloc(bytes.length));
    if (scenario === 'oversized') return new Response(Buffer.concat([bytes, bytes]));
    if (scenario === 'truncated') return new Response(bytes.subarray(2));
    return new Response(bytes, { headers: { 'content-encoding': 'gzip' } });
  } }));
  assert.equal(requests, 1); assert.deepEqual(f.waits, []);
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
          await delay(30); controller.error(failed('ECONNRESET'));
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
  for (const value of ['0', '11', '-1', '1.5', 'oops'])
    assert.throws(() => downloadPolicy({ LASM_DOWNLOAD_ATTEMPTS: value }), /integer/);
  const message = transportDiagnostic(new Error('failed https://user:password@proxy.invalid/path?token=secret#secret'));
  assert.equal(message, 'failed https://proxy.invalid/path');
});
