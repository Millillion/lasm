// Caches have a separate 10 GiB included allowance per repository. Keep a
// lower, fixed ceiling and serialize every writer with lasm-cache-writer.
import { lstatSync, writeFileSync, mkdirSync, appendFileSync } from 'node:fs';
import { dirname, resolve, relative } from 'node:path';
import { fileURLToPath } from 'node:url';

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

async function main() {
  if (process.env.GITHUB_REPOSITORY !== 'Millillion/lasm' || process.env.GITHUB_REF !== 'refs/heads/main')
    throw new Error('Cache writes are restricted to the authorized repository main branch');
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
  const ids = new Set();
  for (let page = 1; ; page++) {
    if (page > 20) throw new Error('Too many cache records to verify the budget');
    const result = await api(`/actions/caches?per_page=100&page=${page}`);
    if (!Array.isArray(result.actions_caches)) throw new Error('Invalid cache inventory');
    for (const entry of result.actions_caches) {
      if (ids.has(entry.id) || !Number.isSafeInteger(entry.size_in_bytes) || entry.size_in_bytes < 0)
        throw new Error('Inconsistent cache inventory');
      ids.add(entry.id); listedBytes += entry.size_in_bytes; count++;
    }
    if (result.actions_caches.length < 100) break;
  }
  const plan = planCacheUpload(info.size, usage.active_caches_size_in_bytes, listedBytes);
  const result = { ...plan, cacheEntries: count, repository: repo.full_name,
    payload: fileArg, serializedWriterGroup: process.env.LASM_CACHE_WRITER_GROUP,
    checkedAt: new Date().toISOString(),
    billingSource: 'https://docs.github.com/en/billing/concepts/product-billing/github-actions' };
  mkdirSync(dirname(report), { recursive: true });
  writeFileSync(report, JSON.stringify(result, null, 2) + '\n');
  if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT, 'allowed=true\n');
  console.log(JSON.stringify(result, null, 2));
}
if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) await main();
