// Release lookups for scripts/ci/check-acceptance-versions.mjs: JSON over HTTPS
// with retries, so a rate limit or an outage of api.github.com or nodejs.org
// cannot fail a candidate by itself.
//   - GitHub API requests carry GITHUB_TOKEN (or GH_TOKEN) when set: an
//     authenticated runner gets a far higher rate limit than an anonymous IP.
//   - 429, 5xx, network errors, and 403 that is a rate limit (x-ratelimit-
//     remaining 0, Retry-After, or a "rate limit" message) are retried with
//     backoff that honors Retry-After and x-ratelimit-reset (capped).
//   - Other failures are returned, not thrown: the caller records the lookup as
//     unavailable instead of failing.

const sleepFor = ms => new Promise(done => setTimeout(done, ms));

export function githubHeaders(url, env = process.env) {
  const headers = { 'User-Agent': 'Lasm-acceptance', Accept: 'application/vnd.github+json' };
  const token = env.GITHUB_TOKEN || env.GH_TOKEN;
  if (token && new URL(url).hostname === 'api.github.com') headers.Authorization = `Bearer ${token}`;
  return headers;
}

/** Milliseconds to wait before retrying `response`, or undefined when it must not be retried. */
export function retryDelay(response, body, attempt, { now = Date.now(), maxMs = 120_000 } = {}) {
  const status = response.status;
  const header = name => response.headers.get(name);
  const rateLimited = status === 403 && (header('x-ratelimit-remaining') === '0' || header('retry-after') !== null || /rate limit/i.test(body ?? ''));
  if (!(status === 429 || status >= 500 || rateLimited)) return undefined;
  const after = Number(header('retry-after'));
  if (header('retry-after') !== null && Number.isFinite(after)) return Math.min(maxMs, Math.max(0, after * 1000));
  const reset = Number(header('x-ratelimit-reset'));
  if (header('x-ratelimit-reset') !== null && Number.isFinite(reset)) return Math.min(maxMs, Math.max(1000, reset * 1000 - now + 1000));
  return Math.min(maxMs, 2000 * 2 ** (attempt - 1));
}

/** { ok: true, json } or { ok: false, error } after up to `attempts` tries. */
export async function fetchJson(url, { headers = githubHeaders(url), attempts = 5, fetchImpl = fetch, sleep = sleepFor, now = () => Date.now(),
  timeoutMs = 30_000, log = message => console.warn(message) } = {}) {
  let error;
  for (let attempt = 1; attempt <= attempts; attempt++) {
    let response, body;
    try {
      response = await fetchImpl(url, { headers, signal: AbortSignal.timeout(timeoutMs) });
      if (response.ok) return { ok: true, json: await response.json(), attempts: attempt };
      body = await response.text().catch(() => '');
      error = `HTTP ${response.status}`;
      const delay = retryDelay(response, body, attempt, { now: now() });
      if (delay === undefined) return { ok: false, error, attempts: attempt };
      if (attempt < attempts) { log(`${url}: ${error}; retrying in ${Math.round(delay / 1000)} s`); await sleep(delay); }
    } catch (failure) {
      error = failure.message;
      if (attempt < attempts) { const delay = Math.min(60_000, 2000 * 2 ** (attempt - 1)); log(`${url}: ${error}; retrying in ${delay / 1000} s`); await sleep(delay); }
    }
  }
  return { ok: false, error, attempts };
}
