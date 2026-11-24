// Mirror fallback for pinned source downloads (scripts/ci/verified-download.mjs).
import test from 'node:test';
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { mkdtempSync, readFileSync, writeFileSync, existsSync, readdirSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { candidateUrls, obtainVerified, parseMirrorList, zigMirrors, zigMirrorSnapshot } from '../scripts/ci/verified-download.mjs';

const payload = Buffer.from('pinned zig tarball bytes '.repeat(1000));
const input = { name: 'zig-x86_64-linux-0.16.0.tar.xz', url: 'https://ziglang.org/download/0.16.0/zig-x86_64-linux-0.16.0.tar.xz',
  bytes: payload.length, sha256: createHash('sha256').update(payload).digest('hex') };
const quiet = () => {};

function body(chunks) {
  return new ReadableStream({ start(controller) { for (const c of chunks) controller.enqueue(new Uint8Array(c)); controller.close(); } });
}
// A server that sends half the bytes, then nothing, until aborted.
function stalling(signal) {
  return new ReadableStream({ start(controller) {
    controller.enqueue(new Uint8Array(payload.subarray(0, 100)));
    signal.addEventListener('abort', () => controller.error(signal.reason));
  } });
}
function fakeFetch(behaviors) {
  const calls = [];
  const impl = async (url, { signal }) => {
    calls.push(url);
    const kind = behaviors[url];
    if (kind === 'ok') return new Response(body([payload.subarray(0, 4000), payload.subarray(4000)]));
    if (kind === 'missing') return new Response('no', { status: 404 });
    if (kind === 'wrong') { const bad = Buffer.from(payload); bad[0] ^= 1; return new Response(body([bad])); }
    if (kind === 'oversized') return new Response(body([payload, Buffer.from('extra')]));
    if (kind === 'short') return new Response(body([payload.subarray(0, 10)]));
    if (kind === 'stall') return new Response(stalling(signal));
    if (kind === 'refused') throw new TypeError('fetch failed');
    throw new Error('unexpected url ' + url);
  };
  return { impl, calls };
}
const store = () => mkdtempSync(join(tmpdir(), 'lasm-verified-'));

test('candidateUrls: shuffled mirrors with the file name, then the official URL', () => {
  const mirrors = ['https://a.example/zig', 'https://b.example', 'https://c.example/zig'];
  const urls = candidateUrls(input.url, mirrors, { random: () => 0 });
  assert.equal(urls.length, 4);
  assert.equal(urls.at(-1), input.url);
  assert.deepEqual(urls.slice(0, 3).map(u => u.replace(/\/zig-x86_64-linux-0\.16\.0\.tar\.xz\?source=lasm-ci$/, '')).sort(), [...mirrors].sort());
  assert.deepEqual(candidateUrls(input.url, [], {}), [input.url]);
});

test('parseMirrorList keeps https base URLs only', () => {
  assert.deepEqual(parseMirrorList('https://a.example/zig/\n\n# note\nhttp://plain.example\nnot a url\nhttps://b.example?x=1\nhttps://a.example/zig\n'),
    ['https://a.example/zig']);
  assert.ok(zigMirrorSnapshot.every(m => m.startsWith('https://')));
});

test('zigMirrors falls back to the committed snapshot', async () => {
  assert.deepEqual(await zigMirrors({ fetchImpl: async () => { throw new Error('down'); }, log: quiet }), zigMirrorSnapshot);
  assert.deepEqual(await zigMirrors({ fetchImpl: async () => new Response('', { status: 200 }), log: quiet }), zigMirrorSnapshot);
  assert.deepEqual(await zigMirrors({ fetchImpl: async () => new Response('https://m.example/zig\n'), log: quiet }), ['https://m.example/zig']);
});

test('falls through failing, stalled and mismatching sources to one with the pinned bytes', async () => {
  const dir = store();
  const urls = ['https://refused.example/f', 'https://missing.example/f', 'https://stall.example/f',
    'https://wrong.example/f', 'https://oversized.example/f', 'https://short.example/f', 'https://ok.example/f', 'https://never.example/f'];
  const { impl, calls } = fakeFetch({ [urls[0]]: 'refused', [urls[1]]: 'missing', [urls[2]]: 'stall', [urls[3]]: 'wrong',
    [urls[4]]: 'oversized', [urls[5]]: 'short', [urls[6]]: 'ok' });
  const got = await obtainVerified(input, { store: dir, candidates: urls, fetchImpl: impl, stallMs: 200, log: quiet });
  assert.equal(got.source, urls[6]);
  assert.deepEqual(calls, urls.slice(0, 7));
  assert.equal(got.sha256, input.sha256); assert.equal(got.bytes, input.bytes);
  assert.deepEqual(readFileSync(got.path), payload);
  assert.equal(got.path, join(dir, input.sha256));
  assert.deepEqual(got.failures.map(f => f.url), urls.slice(0, 6));
  assert.match(got.failures[2].error, /stalled/);
  assert.match(got.failures[3].error, /sha256/);
  assert.match(got.failures[4].error, /pinned size/);
  assert.match(got.failures[5].error, /size 10/);
  assert.deepEqual(readdirSync(dir), [input.sha256], 'no partial file is left behind');
  rmSync(dir, { recursive: true });
});

test('a slow source that keeps making progress is not aborted', async () => {
  const dir = store();
  const slow = async () => new Response(new ReadableStream({ async start(controller) {
    for (let i = 0; i < payload.length; i += 2500) {
      await new Promise(r => setTimeout(r, 60));
      controller.enqueue(new Uint8Array(payload.subarray(i, i + 2500)));
    }
    controller.close();
  } }));
  // Total time (~600 ms) exceeds the stall window (150 ms) many times over.
  const got = await obtainVerified(input, { store: dir, candidates: ['https://slow.example/f'], fetchImpl: slow, stallMs: 150, log: quiet });
  assert.equal(got.sha256, input.sha256);
  rmSync(dir, { recursive: true });
});

test('fails with every source listed when none has the pinned bytes', async () => {
  const dir = store();
  const { impl } = fakeFetch({ 'https://a.example/f': 'wrong', 'https://b.example/f': 'missing' });
  await assert.rejects(obtainVerified(input, { store: dir, candidates: ['https://a.example/f', 'https://b.example/f'], fetchImpl: impl, log: quiet }),
    /no source produced the pinned size and sha256:\n {2}https:\/\/a\.example\/f: sha256 .*\n {2}https:\/\/b\.example\/f: HTTP 404/);
  assert.equal(existsSync(join(dir, input.sha256)), false);
  rmSync(dir, { recursive: true });
});

test('a stored copy is used only when it matches the pins again', async () => {
  const dir = store();
  writeFileSync(join(dir, input.sha256), payload);
  const none = async () => { throw new Error('must not download'); };
  const hit = await obtainVerified(input, { store: dir, candidates: [], fetchImpl: none, log: quiet });
  assert.equal(hit.source, 'store');
  const tampered = Buffer.from(payload); tampered[5] ^= 1;
  writeFileSync(join(dir, input.sha256), tampered);
  const { impl, calls } = fakeFetch({ 'https://ok.example/f': 'ok' });
  const again = await obtainVerified(input, { store: dir, candidates: ['https://ok.example/f'], fetchImpl: impl, log: quiet });
  assert.equal(again.source, 'https://ok.example/f'); assert.equal(calls.length, 1);
  assert.deepEqual(readFileSync(again.path), payload);
  rmSync(dir, { recursive: true });
});

test('a non-https final URL is refused, and pins are required', async () => {
  const dir = store();
  const redirected = async () => { const r = new Response(body([payload])); Object.defineProperty(r, 'url', { value: 'http://plain.example/f' }); return r; };
  await assert.rejects(obtainVerified(input, { store: dir, candidates: ['https://a.example/f'], fetchImpl: redirected, log: quiet }), /not served over https/);
  await assert.rejects(obtainVerified({ ...input, sha256: 'abc' }, { store: dir, candidates: [], log: quiet }), /pinned size and sha256/);
  await assert.rejects(obtainVerified({ ...input, bytes: undefined }, { store: dir, candidates: [], log: quiet }), /pinned size and sha256/);
  rmSync(dir, { recursive: true });
});
