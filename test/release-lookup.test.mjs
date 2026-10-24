// Release lookups (scripts/ci/release-lookup.mjs) retry rate limits and
// outages with backoff, authenticate to the GitHub API, and report failures
// instead of throwing. No network: a stub fetch answers.
import assert from 'node:assert/strict';
import { test } from 'node:test';
import { fetchJson, githubHeaders, retryDelay } from '../scripts/ci/release-lookup.mjs';

const reply = (status, headers = {}, body = '') => ({ ok: status >= 200 && status < 300, status, headers: new Headers(headers),
  json: async () => JSON.parse(body), text: async () => body });
function stub(replies) {
  const calls = [];
  return { calls, fetchImpl: async (url, options) => { calls.push({ url, options }); const next = replies.shift(); if (next instanceof Error) throw next; return next; } };
}
const quiet = { sleep: async ms => { quiet.slept.push(ms); }, log: () => {}, slept: [] };

test('GitHub API requests carry the workflow token; other hosts never do', () => {
  assert.equal(githubHeaders('https://api.github.com/repos/leanprover/lean4/releases/latest', { GITHUB_TOKEN: 't1' }).Authorization, 'Bearer t1');
  assert.equal(githubHeaders('https://api.github.com/x', { GH_TOKEN: 't2' }).Authorization, 'Bearer t2');
  assert.equal(githubHeaders('https://nodejs.org/dist/index.json', { GITHUB_TOKEN: 't1' }).Authorization, undefined);
  assert.equal(githubHeaders('https://api.github.com/x', {}).Authorization, undefined);
});

test('retry delays honor Retry-After and x-ratelimit-reset, and skip non-retryable answers', () => {
  const now = 1_000_000_000_000;
  assert.equal(retryDelay(reply(429, { 'retry-after': '7' }), '', 1, { now }), 7000);
  assert.equal(retryDelay(reply(403, { 'x-ratelimit-remaining': '0', 'x-ratelimit-reset': String(now / 1000 + 30) }), '', 1, { now }), 31_000);
  assert.equal(retryDelay(reply(403, { 'x-ratelimit-remaining': '0', 'x-ratelimit-reset': String(now / 1000 + 9999) }), '', 1, { now }), 120_000, 'capped');
  assert.equal(retryDelay(reply(403), '{"message":"API rate limit exceeded for 1.2.3.4"}', 2, { now }), 4000);
  assert.equal(retryDelay(reply(503), '', 3, { now }), 8000);
  assert.equal(retryDelay(reply(403), '{"message":"Resource not accessible"}', 1, { now }), undefined);
  assert.equal(retryDelay(reply(404), '', 1, { now }), undefined);
});

test('a rate-limited lookup succeeds after retrying', async () => {
  quiet.slept = [];
  const { calls, fetchImpl } = stub([reply(403, { 'x-ratelimit-remaining': '0', 'retry-after': '2' }, '{"message":"API rate limit exceeded"}'),
    reply(502), new Error('fetch failed'), reply(200, {}, '{"tag_name":"v4.35.0"}')]);
  const result = await fetchJson('https://api.github.com/repos/leanprover/lean4/releases/latest',
    { fetchImpl, ...quiet, headers: githubHeaders('https://api.github.com/', { GITHUB_TOKEN: 'secret' }) });
  assert.deepEqual([result.ok, result.json.tag_name, result.attempts], [true, 'v4.35.0', 4]);
  assert.deepEqual(quiet.slept, [2000, 4000, 8000]);
  assert.equal(calls[0].options.headers.Authorization, 'Bearer secret');
});

test('lookups report failure instead of throwing', async () => {
  quiet.slept = [];
  const permanent = stub([reply(404)]);
  assert.deepEqual(await fetchJson('https://api.github.com/x', { fetchImpl: permanent.fetchImpl, ...quiet }), { ok: false, error: 'HTTP 404', attempts: 1 });
  const outage = stub([reply(500), reply(500), reply(500)]);
  assert.deepEqual(await fetchJson('https://nodejs.org/dist/index.json', { fetchImpl: outage.fetchImpl, attempts: 3, ...quiet }),
    { ok: false, error: 'HTTP 500', attempts: 3 });
  assert.equal(outage.calls.length, 3);
});
