import { createReadStream, createWriteStream } from 'node:fs';
import { stat } from 'node:fs/promises';
import { createHash } from 'node:crypto';
import { Readable, Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { setTimeout as delay } from 'node:timers/promises';

const retryStatuses = new Set([408, 429, 500, 502, 503, 504]);
const retryCodes = new Set(['ECONNRESET', 'ECONNREFUSED', 'EPIPE', 'ETIMEDOUT', 'EAI_AGAIN',
  'UND_ERR_SOCKET', 'UND_ERR_CONNECT_TIMEOUT', 'UND_ERR_HEADERS_TIMEOUT', 'UND_ERR_BODY_TIMEOUT',
  'LASM_CONNECT_TIMEOUT', 'LASM_IDLE_TIMEOUT', 'LASM_HTTP_RETRY']);
const error = (message, code) => Object.assign(new Error(message), { code });

export function downloadPolicy(env = process.env) {
  const settings = [
    ['attempts', 'LASM_DOWNLOAD_ATTEMPTS', 4, 1, 10],
    ['connectMs', 'LASM_DOWNLOAD_CONNECT_MS', 60_000, 1_000, 600_000],
    ['idleMs', 'LASM_DOWNLOAD_IDLE_MS', 120_000, 1_000, 1_800_000],
    ['totalMs', 'LASM_DOWNLOAD_TOTAL_MS', 7_200_000, 1_000, 86_400_000],
  ];
  return Object.fromEntries(settings.map(([key, name, fallback, min, max]) => {
    const value = env[name] === undefined ? fallback : Number(env[name]);
    if (!Number.isSafeInteger(value) || value < min || value > max)
      throw new Error(`${name} must be an integer from ${min} to ${max}.`);
    return [key, value];
  }));
}

export function transportDiagnostic(cause) {
  const parts = [], seen = new Set();
  function visit(e) {
    if (!e || seen.has(e) || seen.size >= 8) return;
    seen.add(e);
    parts.push([e.code, e.message].filter(Boolean).join(': '));
    visit(e.cause);
    for (const child of e.errors ?? []) visit(child);
  }
  visit(cause);
  // Never echo proxy credentials, signed query strings or URL fragments.
  return [...new Set(parts)].join('; ').replace(/https?:\/\/[^\s"'<>]+/gi, value => {
    try { const url = new URL(value); return `${url.protocol}//${url.host}${url.pathname}`; }
    catch { return '[redacted URL]'; }
  }).slice(0, 3000);
}

function retryable(cause) {
  if (cause?.code) return retryCodes.has(cause.code);
  return retryCodes.has(cause?.cause?.code) || cause?.errors?.some(retryable) || retryableNested(cause?.cause);
}
function retryableNested(cause) { return cause ? retryable(cause) : false; }

function retryAfter(response, now) {
  const value = response.headers.get('retry-after');
  if (!value) return 0;
  const ms = /^\d+$/.test(value) ? Number(value) * 1000 : Date.parse(value) - now;
  return Number.isFinite(ms) ? Math.max(0, ms) : 0;
}

/** Stream to a private file, resume only a validated response, then hash the
 * entire archive. Timers bound silent connections and stalls independently of
 * progressing transfers. Nothing is extracted until the pinned digest matches.
 */
export async function downloadArtifact(artifact, destination, {
  fetch: fetch_ = fetch, update, event, signal, policy = downloadPolicy(),
  random = Math.random, sleep = delay,
} = {}) {
  const overall = new AbortController();
  const totalTimer = setTimeout(() => overall.abort(error('Download exceeded its overall time budget', 'LASM_TOTAL_TIMEOUT')), policy.totalMs);
  const lifetime = signal ? AbortSignal.any([signal, overall.signal]) : overall.signal;
  let validator, lastFailure;
  const started = Date.now();
  try {
    for (let attempt = 1; attempt <= policy.attempts; attempt++) {
      lifetime.throwIfAborted();
      let offset = 0;
      if (validator) { try { offset = (await stat(destination)).size; } catch (e) { if (e.code !== 'ENOENT') throw e; } }
      // A body may fail after its last bytes: verify those bytes without issuing
      // an unsatisfiable Range request. Integrity failures remain terminal.
      if (offset === artifact.bytes) break;
      const controller = new AbortController();
      const attemptSignal = AbortSignal.any([lifetime, controller.signal]);
      let timer, response, received = offset, waitMs = 0;
      const arm = (ms, code, message) => {
        clearTimeout(timer);
        timer = setTimeout(() => controller.abort(error(message, code)), ms);
      };
      event?.({ type: 'attempt', attempt, maximumAttempts: policy.attempts, offset });
      try {
        arm(policy.connectMs, 'LASM_CONNECT_TIMEOUT', 'Timed out connecting or waiting for download headers');
        response = await fetchArtifact(artifact.url, { signal: attemptSignal,
          headers: { 'accept-encoding': 'identity', ...(offset ? { range: `bytes=${offset}-`, 'if-range': validator } : {}) } }, fetch_);
        // Redirects are followed explicitly below so HTTP downgrades are refused
        // before a request is made, not after fetch has followed them.
        if (response.url && new URL(response.url).protocol !== 'https:')
          throw error('Artifact download redirected away from HTTPS', 'LASM_REDIRECT');
        if (retryStatuses.has(response.status)) {
          waitMs = retryAfter(response, Date.now());
          throw error(`HTTP ${response.status}`, 'LASM_HTTP_RETRY');
        }
        if (!response.ok || !response.body) throw error(`HTTP ${response.status}`, 'LASM_HTTP');
        if (response.status === 206) {
          const range = /^bytes (\d+)-(\d+)\/(\d+)$/.exec(response.headers.get('content-range') ?? '');
          if (!offset || !range || Number(range[1]) !== offset || Number(range[2]) !== artifact.bytes - 1
              || Number(range[3]) !== artifact.bytes || response.headers.get('etag') !== validator)
            throw error('Invalid resumable download response', 'LASM_RANGE');
        } else if (response.status === 200) { offset = 0; received = 0; }
        else throw error(`Unexpected HTTP ${response.status}`, 'LASM_HTTP');
        const encoding = response.headers.get('content-encoding');
        if (encoding && encoding !== 'identity') throw error('Unexpected download content encoding', 'LASM_INTEGRITY');
        const length = response.headers.get('content-length');
        if (length !== null && Number(length) !== artifact.bytes - offset)
          throw error('Download size mismatch: ' + artifact.name, 'LASM_INTEGRITY');
        const etag = response.headers.get('etag');
        validator = etag && /^"[^"\r\n]+"$/.test(etag) ? etag : undefined;
        let lastUpdate = 0;
        arm(policy.idleMs, 'LASM_IDLE_TIMEOUT', 'Download stopped receiving data');
        const check = new Transform({ transform(chunk, encoding, callback) {
          received += chunk.length;
          if (received > artifact.bytes) return callback(error(`Download size mismatch: ${artifact.name}`, 'LASM_INTEGRITY'));
          arm(policy.idleMs, 'LASM_IDLE_TIMEOUT', 'Download stopped receiving data');
          if (Date.now() - lastUpdate >= 250) { update?.(received); lastUpdate = Date.now(); }
          callback(null, chunk);
        } });
        await pipeline(Readable.fromWeb(response.body), check,
          createWriteStream(destination, { flags: offset ? 'a' : 'w', mode: 0o600 }), { signal: attemptSignal });
        if (received !== artifact.bytes) throw error(`Download checksum or size mismatch: ${artifact.name}`, 'LASM_INTEGRITY');
        event?.({ type: 'transferred', attempt, receivedBytes: received });
        break;
      } catch (caught) {
        const cause = attemptSignal.aborted ? attemptSignal.reason : caught;
        lastFailure = cause;
        event?.({ type: 'failed-attempt', attempt, code: cause.code, detail: transportDiagnostic(cause) });
        if (lifetime.aborted) throw lifetime.reason;
        if (!retryable(cause) || attempt === policy.attempts) throw cause;
        const backoff = Math.min(30_000, 1000 * 2 ** (attempt - 1)) * (0.5 + random() * 0.5);
        waitMs = Math.max(waitMs, backoff);
        if (waitMs >= policy.totalMs - (Date.now() - started))
          throw error('Retry-After exceeds the remaining download time budget', 'LASM_TOTAL_TIMEOUT');
        event?.({ type: 'retry', attempt, waitMs, detail: transportDiagnostic(cause) });
      } finally {
        clearTimeout(timer);
        if (response?.body && !response.body.locked) await response.body.cancel().catch(() => {});
      }
      await sleep(waitMs, undefined, { signal: lifetime });
    }
    lifetime.throwIfAborted();
    let bytes = 0;
    const hash = createHash('sha256');
    for await (const chunk of createReadStream(destination, { signal: lifetime })) { hash.update(chunk); bytes += chunk.length; }
    if (bytes !== artifact.bytes || hash.digest('hex') !== artifact.sha256)
      throw error(`Download checksum or size mismatch: ${artifact.name}`, 'LASM_INTEGRITY');
    update?.(bytes, true);
  } catch (cause) {
    const detail = transportDiagnostic(cause);
    throw Object.assign(new Error(`Could not download ${artifact.name} from ${new URL(artifact.url).hostname}: ${detail}. `
      + 'Check network access and retry. For a proxy use NODE_USE_ENV_PROXY=1 with HTTPS_PROXY; '
      + 'for a private CA set NODE_EXTRA_CA_CERTS before starting Node. TLS verification must remain enabled.', { cause }),
    { code: cause.code ?? lastFailure?.code });
  } finally { clearTimeout(totalTimer); }
}

/** Follow a bounded HTTPS-only redirect chain, including release asset CDNs. */
export async function fetchArtifact(url, options, fetch_ = fetch) {
  let current = url;
  for (let redirects = 0; redirects <= 8; redirects++) {
    const parsed = new URL(current);
    if (parsed.protocol !== 'https:' || parsed.username || parsed.password)
      throw error('Artifact download redirected away from credential-free HTTPS', 'LASM_REDIRECT');
    const response = await fetch_(current, { ...options, redirect: 'manual' });
    if (![301, 302, 303, 307, 308].includes(response.status)) return response;
    await response.body?.cancel();
    const location = response.headers.get('location');
    if (!location) throw error('Download redirect has no location', 'LASM_REDIRECT');
    current = new URL(location, current).href;
  }
  throw error('Too many download redirects', 'LASM_REDIRECT');
}
