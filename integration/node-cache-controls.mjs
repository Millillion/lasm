// Fault injection against the installed provisioner, using a tiny real archive.
// These are transport/cache controls, not substitutes for cold compiler installs.
import assert from 'node:assert/strict';
import { mkdirSync, writeFileSync, readFileSync, rmSync, readdirSync } from 'node:fs';
import { join } from 'node:path';
import { pathToFileURL } from 'node:url';
import { createRequire } from 'node:module';
import { createHash } from 'node:crypto';

export async function cacheControls(compiler, directory) {
  const { provisionArtifact } = await import(pathToFileURL(join(compiler, 'src/managed-artifacts.mjs')));
  const { c: tar } = createRequire(join(compiler, 'package.json'))('tar');
  mkdirSync(join(directory, 'source/tool'), { recursive: true });
  writeFileSync(join(directory, 'source/tool/value'), 'verified fixture\n');
  await tar({ cwd: join(directory, 'source'), file: join(directory, 'archive.tgz'), gzip: true, portable: true }, ['tool']);
  const bytes = readFileSync(join(directory, 'archive.tgz'));
  const artifact = { name: 'recovery-control.tar.gz', root: 'tool', url: 'https://example.invalid/control',
    format: 'tar.gz', bytes: bytes.length, sha256: createHash('sha256').update(bytes).digest('hex'), maximumExtractedBytes: 10000 };
  const results = [];
  for (const failure of ['interrupted', 'truncated', 'checksum', 'unavailable', 'incomplete-cache', 'damaged-cache']) {
    const cache = join(directory, failure); let downloads = 0;
    const options = { cache, log() {}, fetch: async () => { downloads++; return new Response(bytes); } };
    if (failure.endsWith('-cache')) {
      const installed = await provisionArtifact(artifact, options);
      if (failure === 'incomplete-cache') rmSync(join(installed.directory, '.lasm-artifact.json'));
      else writeFileSync(join(installed.directory, 'value'), 'damaged');
      await assert.rejects(provisionArtifact(artifact, options), /cache|Cache/);
      assert.equal(downloads, 1, 'Never trust or execute damaged cached tools');
      // Exercise the documented recovery, removing exactly the diagnosed entry.
      rmSync(installed.directory, { recursive: true });
    } else {
      const broken = { ...options, fetch: async () => {
        if (failure === 'unavailable') return new Response('missing', { status: 503 });
        if (failure === 'interrupted') return new Response(new ReadableStream({ start(controller) {
          controller.enqueue(bytes.subarray(0, 5)); controller.error(new Error('connection interrupted'));
        } }));
        const corrupt = Buffer.from(bytes); corrupt[corrupt.length - 1] ^= 1;
        return new Response(failure === 'truncated' ? bytes.subarray(0, -5) : corrupt);
      } };
      await assert.rejects(provisionArtifact(artifact, broken));
      assert.deepEqual(readdirSync(join(cache, 'artifacts')), [], 'Do not publish a partial download');
    }
    const recovered = await provisionArtifact(artifact, options);
    assert.equal(recovered.cacheHit, false);
    assert.equal(readFileSync(join(recovered.directory, 'value'), 'utf8'), 'verified fixture\n');
    const reused = await provisionArtifact(artifact, { ...options, fetch: async () => { throw new Error('Unexpected cached download'); } });
    assert.equal(reused.cacheHit, true);
    results.push({ failure, recovered: true, cachedWithoutDownload: true });
  }
  return results;
}
