// Caches have a separate 10 GiB included allowance per repository. Keep a
// lower, fixed ceiling and serialize every writer with lasm-cache-writer.
import { lstatSync, writeFileSync, mkdirSync, appendFileSync } from 'node:fs';
import { dirname, resolve, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { trustedRef } from './trusted-ref.mjs';

const GiB = 1024 ** 3;
export function planCacheUpload(payloadBytes, reportedBytes, listedBytes) {
  for (const value of [payloadBytes, reportedBytes, listedBytes])
    if (!Number.isSafeInteger(value) || value < 0) throw new Error('Invalid cache byte count');
  if (payloadBytes > 2 * GiB) throw new Error('Checkpoint exceeds the 2 GiB payload limit');
  // Only one prebuilt regular file is uploaded. Include a conservative bound
  // for the action's additional tar/compression framing, not an assumed saving.
  const uploadUpperBound = Math.ceil(payloadBytes * 1.02) + 16 * 1024 ** 2;
  const usedBytes = Math.max(reportedBytes, listedBytes);
  const ceilingBytes = 8 * GiB;
  if (usedBytes + uploadUpperBound > ceilingBytes)
    throw new Error('Cache upload would exceed the fixed 8 GiB repository ceiling');
  return { payloadBytes, reportedBytes, listedBytes, usedBytes, uploadUpperBound, ceilingBytes,
    includedAllowanceBytes: 10 * GiB, maximumAfterUpload: usedBytes + uploadUpperBound };
}

// Before an upload would cross the ceiling, the writer may evict its own
// workflow's oldest caches (LASM_CACHE_EVICT_PREFIX, e.g. `node-candidate-`):
// oldest last access first, never one accessed in the last `keepHours` (an
// in-flight run may still restore it), until the upload fits. Returns the
// caches to delete, or null when evicting every eligible one is not enough.
export function planEviction(caches, { payloadBytes, usedBytes, prefix, now = Date.now(), keepHours = 24, ceilingBytes = 8 * GiB }) {
  if (!prefix) return null;
  const uploadUpperBound = Math.ceil(payloadBytes * 1.02) + 16 * 1024 ** 2;
  const eligible = caches
    .filter(c => c.key.startsWith(prefix) && now - Date.parse(c.last_accessed_at) > keepHours * 3600_000)
    .sort((a, b) => Date.parse(a.last_accessed_at) - Date.parse(b.last_accessed_at) || a.id - b.id);
  const evict = [];
  let used = usedBytes;
  for (const cache of eligible) {
    if (used + uploadUpperBound <= ceilingBytes) break;
    evict.push(cache); used -= cache.size_in_bytes;
  }
  return used + uploadUpperBound <= ceilingBytes ? evict : null;
}

async function main() {
  if (!trustedRef())
    throw new Error('Cache writes are restricted to the authorized repository main branch and its own pull requests');
  if (!process.env.GITHUB_TOKEN) throw new Error('Missing CI API token');
  if (process.env.LASM_CACHE_WRITER_GROUP !== 'lasm-cache-writer')
    throw new Error('Run this check only in the serialized lasm-cache-writer job');
  const [fileArg, reportArg] = process.argv.slice(2);
  if (!fileArg || !reportArg) throw new Error('Supply the single payload file and budget report');
  const file = resolve(fileArg), report = resolve(reportArg), work = resolve('.work');
  if (file === report) throw new Error('Keep the payload separate from its budget receipt');
  for (const name of [file, report]) {
    const local = relative(work, name);
    if (!local || local.startsWith('..') || resolve(work, local) !== name)
      throw new Error('CI cache payload and report must be inside .work');
  }
  const info = lstatSync(file, { throwIfNoEntry: true });
  if (!info.isFile()) throw new Error('Upload exactly one prebuilt regular file');
  const api = async suffix => {
    const response = await fetch(`https://api.github.com/repos/Millillion/lasm${suffix}`, {
      headers: { Authorization: 'Bearer ' + process.env.GITHUB_TOKEN,
        Accept: 'application/vnd.github+json', 'X-GitHub-Api-Version': '2022-11-28' },
      signal: AbortSignal.timeout(15_000),
    });
    if (!response.ok) throw new Error(`Cache budget API failed: HTTP ${response.status}`);
    return response.json();
  };
  const repo = await api('');
  if (repo.private !== false || repo.visibility !== 'public') throw new Error('Standard public-runner eligibility is required');
  const usage = await api('/actions/cache/usage');
  let listedBytes = 0, count = 0;
  const ids = new Set(), caches = [];
  for (let page = 1; ; page++) {
    if (page > 20) throw new Error('Too many cache records to verify the budget');
    const result = await api(`/actions/caches?per_page=100&page=${page}`);
    if (!Array.isArray(result.actions_caches)) throw new Error('Invalid cache inventory');
    for (const entry of result.actions_caches) {
      if (ids.has(entry.id) || !Number.isSafeInteger(entry.size_in_bytes) || entry.size_in_bytes < 0)
        throw new Error('Inconsistent cache inventory');
      ids.add(entry.id); listedBytes += entry.size_in_bytes; count++;
    }
    caches.push(...result.actions_caches);
    if (result.actions_caches.length < 100) break;
  }
  let reportedBytes = usage.active_caches_size_in_bytes;
  let evicted = [];
  try { planCacheUpload(info.size, reportedBytes, listedBytes); } catch (error) {
    if (!/repository ceiling/.test(error.message)) throw error;
    const evict = planEviction(caches, { payloadBytes: info.size, usedBytes: Math.max(reportedBytes, listedBytes),
      prefix: process.env.LASM_CACHE_EVICT_PREFIX });
    if (!evict) throw error;
    for (const cache of evict) {
      const response = await fetch(`https://api.github.com/repos/Millillion/lasm/actions/caches/${cache.id}`, { method: 'DELETE',
        headers: { Authorization: 'Bearer ' + process.env.GITHUB_TOKEN, Accept: 'application/vnd.github+json', 'X-GitHub-Api-Version': '2022-11-28' },
        signal: AbortSignal.timeout(15_000) });
      if (!response.ok && response.status !== 404) throw new Error(`Cache eviction failed: HTTP ${response.status}`);
      console.error(`Evicted cache ${cache.key} (${cache.size_in_bytes} bytes, last used ${cache.last_accessed_at})`);
    }
    evicted = evict.map(({ id, key, size_in_bytes }) => ({ id, key, bytes: size_in_bytes }));
    const freed = evict.reduce((n, c) => n + c.size_in_bytes, 0);
    // The usage report lags deletions; count them out of both figures.
    listedBytes -= freed; reportedBytes = Math.max(0, reportedBytes - freed);
  }
  const plan = planCacheUpload(info.size, reportedBytes, listedBytes);
  const result = { ...plan, evicted, cacheEntries: count, repository: repo.full_name,
    payload: fileArg, serializedWriterGroup: process.env.LASM_CACHE_WRITER_GROUP,
    checkedAt: new Date().toISOString(),
    billingSource: 'https://docs.github.com/en/billing/concepts/product-billing/github-actions' };
  mkdirSync(dirname(report), { recursive: true });
  writeFileSync(report, JSON.stringify(result, null, 2) + '\n');
  if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, 'allowed=true\n');
  console.log(JSON.stringify(result, null, 2));
}
if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) await main();
