// Discover/prune only this workflow's checksum-addressed native Lean ccache data.
import assert from 'node:assert/strict';
import { appendFileSync, mkdirSync, writeFileSync } from 'node:fs';
import { resolve, dirname, relative } from 'node:path';
import { fileURLToPath } from 'node:url';
import { hashFile } from '../../src/managed-artifacts.mjs';

export const cacheFamily = 'lasm-win-arm64-lean-ccache-v1-';
const keyPattern = /^lasm-win-arm64-lean-ccache-v1-([a-f0-9]{64})-([a-f0-9]{64})$/;

export function checkpointRecords(entries) {
  return entries.filter(entry => entry.ref === 'refs/heads/main' && keyPattern.test(entry.key))
    .map(entry => {
      assert.ok(Number.isSafeInteger(entry.id) && entry.id > 0);
      assert.ok(Number.isSafeInteger(entry.size_in_bytes) && entry.size_in_bytes >= 0);
      assert.ok(Number.isFinite(Date.parse(entry.created_at)));
      const [, identity, sha256] = keyPattern.exec(entry.key);
      return { ...entry, identity, sha256 };
    }).sort((a, b) => Date.parse(b.created_at) - Date.parse(a.created_at) || b.id - a.id);
}

export function selectCheckpoint(entries, identity) {
  assert.match(identity, /^[a-f0-9]{64}$/);
  return checkpointRecords(entries).find(entry => entry.identity === identity);
}

export function checkpointPruning(entries, savedKey) {
  assert.match(savedKey, keyPattern);
  const records = checkpointRecords(entries);
  const saved = records.find(entry => entry.key === savedKey);
  assert.ok(saved, 'Verify the new saved checkpoint exists before pruning previous data');
  // Keep the just-saved object and one previous checkpoint. Never touch cache
  // keys belonging to another workflow, branch or unrecognized format.
  const previous = records.find(entry => entry.id !== saved.id);
  const kept = new Set([saved.id, previous?.id]);
  return { keep: records.filter(entry => kept.has(entry.id)), remove: records.filter(entry => !kept.has(entry.id)) };
}

async function main() {
  assert.equal(process.env.GITHUB_REPOSITORY, 'Millillion/lasm');
  assert.equal(process.env.GITHUB_REF, 'refs/heads/main');
  assert.equal(process.env.LASM_CACHE_WRITER_GROUP, 'lasm-cache-writer');
  assert.ok(process.env.GITHUB_TOKEN);
  const [operation, identityArg, reportArg, savedKey] = process.argv.slice(2);
  assert.ok(['select', 'prune'].includes(operation));
  assert.ok(identityArg && reportArg);
  for (const path of [identityArg, reportArg]) {
    const local = relative(resolve('.work'), resolve(path));
    assert.ok(local && !local.startsWith('..') && resolve('.work', local) === resolve(path));
  }
  const identity = await hashFile(identityArg);
  const api = async (suffix, method = 'GET') => {
    const response = await fetch('https://api.github.com/repos/Millillion/lasm' + suffix, {
      method, headers: { Authorization: 'Bearer ' + process.env.GITHUB_TOKEN,
        Accept: 'application/vnd.github+json', 'X-GitHub-Api-Version': '2022-11-28' },
      signal: AbortSignal.timeout(15_000),
    });
    assert.ok(response.ok, `Checkpoint API failed: HTTP ${response.status}`);
    return response.status === 204 ? undefined : response.json();
  };
  const repo = await api('');
  assert.equal(repo.private, false); assert.equal(repo.visibility, 'public');
  const entries = [], ids = new Set();
  for (let page = 1; ; page++) {
    assert.ok(page <= 20, 'Too many cache records to inspect');
    const result = await api(`/actions/caches?per_page=100&page=${page}`);
    assert.ok(Array.isArray(result.actions_caches));
    for (const entry of result.actions_caches) {
      assert.ok(!ids.has(entry.id), 'Cache inventory changed during pagination');
      ids.add(entry.id); entries.push(entry);
    }
    if (result.actions_caches.length < 100) break;
  }
  let result;
  if (operation === 'select') {
    const selected = selectCheckpoint(entries, identity);
    result = { operation, identity, selected: selected ?? null };
    if (process.env.GITHUB_OUTPUT) appendFileSync(process.env.GITHUB_OUTPUT,
      `found=${Boolean(selected)}\nidentity=${identity}\nkey=${selected?.key ?? ''}\nsha256=${selected?.sha256 ?? ''}\n`);
  } else {
    assert.ok(savedKey?.startsWith(cacheFamily + identity + '-'), 'Saved key must match this recipe');
    const plan = checkpointPruning(entries, savedKey), deleted = [];
    for (const entry of plan.remove) {
      await api(`/actions/caches/${entry.id}`, 'DELETE');
      deleted.push({ id: entry.id, key: entry.key, sizeInBytes: entry.size_in_bytes });
    }
    result = { operation, identity, kept: plan.keep.map(entry => ({ id: entry.id, key: entry.key })), deleted };
  }
  mkdirSync(dirname(resolve(reportArg)), { recursive: true });
  writeFileSync(reportArg, JSON.stringify({ ...result, checkedAt: new Date().toISOString() }, null, 2) + '\n');
  console.log(JSON.stringify(result));
}
if (process.argv[1] && resolve(process.argv[1]) === fileURLToPath(import.meta.url)) await main();
