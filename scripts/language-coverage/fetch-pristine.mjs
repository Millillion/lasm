// Download, verify and extract the pinned upstream Lean source archive on any
// runner OS (no sha256sum/curl assumptions).
//
//   node fetch-pristine.mjs LEAN_VERSION [--no-extract]
//
// Transfers can be cut off mid-stream (undici "terminated" /
// ResponseContentLengthMismatchError on GitHub's codeload, run 40122487472), so
// each attempt streams to a .partial file, checks its length against
// Content-Length and its SHA-256 against the pin, and only then renames it into
// place. Failed or mismatching attempts are discarded and retried with backoff.
import assert from 'node:assert/strict';
import { createHash } from 'node:crypto';
import { createWriteStream, mkdirSync, readFileSync, renameSync, rmSync, existsSync, statSync } from 'node:fs';
import { execFileSync } from 'node:child_process';
import { Readable, Transform } from 'node:stream';
import { pipeline } from 'node:stream/promises';
import { setTimeout as sleep } from 'node:timers/promises';
import { fileURLToPath } from 'node:url';

export async function fetchVerified(url, sha256, archive, { attempts = 6, backoffMs = 2000, timeoutMs = 300_000, fetchImpl = fetch, log = console.error } = {}) {
  const hashOf = path => createHash('sha256').update(readFileSync(path)).digest('hex');
  if (existsSync(archive)) {
    if (hashOf(archive) === sha256) return { attempts: 0 };
    log(`Discarding ${archive}: checksum mismatch`); rmSync(archive);
  }
  const partial = archive + '.partial';
  let lastError;
  for (let attempt = 1; attempt <= attempts; attempt++) {
    rmSync(partial, { force: true });
    try {
      const response = await fetchImpl(url, { signal: AbortSignal.timeout(timeoutMs) });
      if (!response.ok || !response.body) throw new Error(`HTTP ${response.status}`);
      const expected = Number(response.headers.get('content-length')) || undefined;
      const digest = createHash('sha256');
      let bytes = 0;
      await pipeline(Readable.fromWeb(response.body), new Transform({ transform(chunk, _, done) {
        bytes += chunk.length; digest.update(chunk); done(null, chunk);
      } }), createWriteStream(partial, { flags: 'wx' }));
      if (expected !== undefined && bytes !== expected) throw new Error(`short read: ${bytes} of ${expected} bytes`);
      const actual = digest.digest('hex');
      if (actual !== sha256) throw new Error(`checksum mismatch (${actual}, ${bytes} bytes)`);
      assert.equal(statSync(partial).size, bytes);
      renameSync(partial, archive);
      return { attempts: attempt, bytes };
    } catch (error) {
      lastError = error;
      rmSync(partial, { force: true });
      const cause = error.cause ? ` (${error.cause.code ?? error.cause.name}: ${error.cause.message})` : '';
      log(`Download attempt ${attempt}/${attempts} of ${url} failed: ${error.message}${cause}`);
      if (attempt < attempts) await sleep(backoffMs * 2 ** (attempt - 1));
    }
  }
  throw new Error(`Could not download a verified ${url} after ${attempts} attempts: ${lastError?.message}`, { cause: lastError });
}

if (process.argv[1] === fileURLToPath(import.meta.url)) {
  const [version] = process.argv.slice(2);
  const pins = JSON.parse(readFileSync(new URL('../full-lean/lean-sources.json', import.meta.url)));
  assert.ok(pins[version], `No pinned source archive for Lean ${version}`);
  const { url, sha256 } = pins[version];
  mkdirSync('.cache/downloads', { recursive: true });
  const archive = `.cache/downloads/lean4-v${version}.tar.gz`;
  const { attempts } = await fetchVerified(url, sha256, archive);
  if (!process.argv.includes('--no-extract')) {
    mkdirSync('.work/pristine', { recursive: true });
    execFileSync('tar', ['-xzf', archive, '-C', '.work/pristine', '--strip-components=1'], { stdio: 'inherit' });
  }
  console.log(`Verified${process.argv.includes('--no-extract') ? '' : ' and extracted'} Lean ${version} sources (${sha256}; ${attempts} download attempt(s))`);
}
