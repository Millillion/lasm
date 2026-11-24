// Download a pinned source archive (size + sha256) robustly:
// - a verified local store (.cache/verified-sources/<sha256>, restored by
//   .github/actions/verified-sources from the GitHub Actions cache) is used
//   only after its size and sha256 are checked again;
// - otherwise each candidate URL is tried in turn: Zig's community mirrors
//   (https://ziglang.org/download/community-mirrors.txt; Zig asks CI to use
//   them and verify the checksum) in random order, then the official URL;
// - an attempt is aborted when no bytes arrive for `stallMs` (progress, not
//   total time), and a failed, oversized, short or mismatching attempt is
//   discarded before the next candidate is tried.
// Nothing is accepted without the pinned size and sha256.
import { createHash } from 'node:crypto';
import { createReadStream, createWriteStream, existsSync, mkdirSync, renameSync, rmSync, statSync } from 'node:fs';
import { join } from 'node:path';
import { Readable, Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';

// Snapshot of https://ziglang.org/download/community-mirrors.txt (2026-11-24),
// used when the live list cannot be read.
export const zigMirrorSnapshot = [
  'https://pkg.hexops.org/zig', 'https://zigmirror.hryx.net/zig', 'https://zig.linus.dev/zig',
  'https://zig.squirl.dev', 'https://zig.mirror.mschae23.de/zig', 'https://ziglang.freetls.fastly.net',
  'https://zig.tilok.dev', 'https://zig-mirror.tsimnet.eu/zig', 'https://zig.karearl.com/zig',
  'https://pkg.earth/zig', 'https://fs.liujiacai.net/zigbuilds', 'https://zigmirror.com',
  'https://zig.chainsafe.dev', 'https://zig.savalione.com', 'https://zig.bcr.ist',
  'https://zig.vortan.dev/zig', 'https://pkg.alexrp.com/zig',
];

export function parseMirrorList(text) {
  const mirrors = [];
  for (const line of String(text).split('\n')) {
    const entry = line.trim();
    if (!entry || entry.startsWith('#')) continue;
    let url;
    try { url = new URL(entry); } catch { continue; }
    if (url.protocol !== 'https:' || url.search || url.hash) continue;
    mirrors.push(entry.replace(/\/+$/, ''));
  }
  return [...new Set(mirrors)];
}

export async function zigMirrors({ fetchImpl = fetch, timeoutMs = 15_000, log = console.error } = {}) {
  try {
    const response = await fetchImpl('https://ziglang.org/download/community-mirrors.txt', { signal: AbortSignal.timeout(timeoutMs) });
    if (!response.ok) throw new Error(`HTTP ${response.status}`);
    const mirrors = parseMirrorList(await response.text());
    if (mirrors.length) return mirrors;
    throw new Error('empty list');
  } catch (error) {
    log(`Zig community mirror list unavailable (${error.message}); using the committed snapshot`);
    return [...zigMirrorSnapshot];
  }
}

function shuffle(list, random) {
  const out = [...list];
  for (let i = out.length - 1; i > 0; i--) {
    const j = Math.floor(random() * (i + 1));
    [out[i], out[j]] = [out[j], out[i]];
  }
  return out;
}

// Mirrors (shuffled, so load spreads) first, then the official URL. A Zig
// release tarball is served at <mirror>/<file name>; `source` identifies us.
export function candidateUrls(officialUrl, mirrors = [], { random = Math.random, source = 'lasm-ci' } = {}) {
  const name = new URL(officialUrl).pathname.split('/').pop();
  const fromMirrors = shuffle(mirrors, random).map(m => `${m}/${name}?source=${encodeURIComponent(source)}`);
  return [...fromMirrors, officialUrl];
}

async function hashFile(path) {
  const hash = createHash('sha256');
  let bytes = 0;
  for await (const chunk of createReadStream(path)) { hash.update(chunk); bytes += chunk.length; }
  return { bytes, sha256: hash.digest('hex') };
}

// One attempt: stream into `partial`, enforcing the pinned size while streaming
// and aborting when nothing arrives for stallMs.
async function attempt(url, input, partial, { fetchImpl, stallMs }) {
  const controller = new AbortController();
  let timer;
  const arm = () => {
    clearTimeout(timer);
    timer = setTimeout(() => controller.abort(new Error(`stalled: no bytes for ${stallMs} ms`)), stallMs);
  };
  arm();
  try {
    const response = await fetchImpl(url, { signal: controller.signal });
    if (!response.ok || !response.body) throw new Error(`HTTP ${response.status}`);
    if (new URL(response.url || url).protocol !== 'https:') throw new Error('not served over https');
    arm();
    let bytes = 0;
    const hash = createHash('sha256');
    const check = new Transform({ transform(chunk, _, callback) {
      arm(); bytes += chunk.length; hash.update(chunk);
      callback(bytes > input.bytes ? new Error('download exceeds its pinned size') : null, chunk);
    } });
    await pipeline(Readable.fromWeb(response.body), check, createWriteStream(partial, { flags: 'wx' }), { signal: controller.signal });
    const sha256 = hash.digest('hex');
    if (bytes !== input.bytes) throw new Error(`size ${bytes}, pinned ${input.bytes}`);
    if (sha256 !== input.sha256) throw new Error(`sha256 ${sha256}, pinned ${input.sha256}`);
    return { bytes, sha256 };
  } catch (error) {
    throw controller.signal.aborted && controller.signal.reason instanceof Error ? controller.signal.reason : error;
  } finally { clearTimeout(timer); }
}

// Returns { path, bytes, sha256, source: 'store' | url, failures } for a file
// in `store` named by its pinned sha256.
export async function obtainVerified(input, { store, candidates, fetchImpl = fetch, stallMs = 60_000, log = console.error }) {
  if (!/^[0-9a-f]{64}$/.test(input.sha256) || !Number.isSafeInteger(input.bytes) || input.bytes <= 0)
    throw new Error(`${input.name}: needs a pinned size and sha256`);
  mkdirSync(store, { recursive: true });
  const path = join(store, input.sha256);
  if (existsSync(path)) {
    const stored = await hashFile(path);
    if (stored.bytes === input.bytes && stored.sha256 === input.sha256) return { path, ...stored, source: 'store', failures: [] };
    log(`${input.name}: discarding a stored copy that does not match its pins`);
    rmSync(path, { force: true });
  }
  const partial = path + '.partial', failures = [];
  for (const url of candidates) {
    rmSync(partial, { force: true });
    try {
      const observed = await attempt(url, input, partial, { fetchImpl, stallMs });
      if (statSync(partial).size !== observed.bytes) throw new Error('written size differs');
      renameSync(partial, path);
      log(`${input.name}: verified from ${url}`);
      return { path, ...observed, source: url, failures };
    } catch (error) {
      rmSync(partial, { force: true });
      failures.push({ url, error: error.message });
      log(`${input.name}: ${url} failed: ${error.message}; trying the next source`);
    }
  }
  throw new Error(`${input.name}: no source produced the pinned size and sha256:\n` +
    failures.map(f => `  ${f.url}: ${f.error}`).join('\n'));
}
