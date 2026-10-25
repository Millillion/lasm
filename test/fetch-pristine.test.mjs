import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { mkdtempSync, readFileSync, writeFileSync, existsSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fetchVerified } from '../scripts/language-coverage/fetch-pristine.mjs';

const body = Buffer.from('lean source archive bytes '.repeat(1000));
const sha256 = createHash('sha256').update(body).digest('hex');
// A response whose stream ends early (as undici's "terminated"), or carries wrong bytes.
const response = (bytes, { length = body.length, cutAfter } = {}) => ({ ok: true, status: 200,
  headers: new Headers({ 'content-length': String(length) }),
  body: new ReadableStream({ start(controller) {
    if (cutAfter === undefined) { controller.enqueue(bytes); controller.close(); return; }
    controller.enqueue(bytes.subarray(0, cutAfter));
    controller.error(Object.assign(new TypeError('terminated'), { cause: { code: 'UND_ERR_RES_CONTENT_LENGTH_MISMATCH', message: 'Response body length does not match content-length header' } }));
  } }) });

test('a cut-off, short or corrupt download is retried and only a verified archive is kept', async t => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-fetch-')); t.after(() => rmSync(directory, { recursive: true, force: true }));
  const archive = join(directory, 'lean.tar.gz'), logs = [];
  const replies = [response(body, { cutAfter: 100 }), response(body.subarray(0, 50)), response(Buffer.from(body).fill(1)), response(body)];
  const result = await fetchVerified('https://example.invalid/lean.tar.gz', sha256, archive,
    { backoffMs: 1, fetchImpl: async () => replies.shift(), log: line => logs.push(line) });
  assert.equal(result.attempts, 4);
  assert.deepEqual(readFileSync(archive), body);
  assert.equal(existsSync(archive + '.partial'), false);
  assert.match(logs[0], /attempt 1\/6.*terminated.*UND_ERR_RES_CONTENT_LENGTH_MISMATCH/);
  assert.match(logs[1], /short read: 50 of 26000 bytes/);
  assert.match(logs[2], /checksum mismatch/);
  // A verified archive already present is reused; a corrupt one is replaced.
  assert.equal((await fetchVerified('x', sha256, archive, { fetchImpl: () => assert.fail('no download') })).attempts, 0);
  writeFileSync(archive, 'corrupt');
  assert.equal((await fetchVerified('x', sha256, archive, { backoffMs: 1, fetchImpl: async () => response(body), log: () => {} })).attempts, 1);
});

test('persistent failure stops after the attempt limit', async () => {
  const directory = mkdtempSync(join(tmpdir(), 'lasm-fetch-'));
  try {
    await assert.rejects(fetchVerified('x', sha256, join(directory, 'a'), { attempts: 3, backoffMs: 1, log: () => {},
      fetchImpl: async () => ({ ok: false, status: 503, headers: new Headers() }) }), /after 3 attempts: HTTP 503/);
  } finally { rmSync(directory, { recursive: true, force: true }); }
});
