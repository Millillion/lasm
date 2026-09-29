import { readFile, writeFile } from 'node:fs/promises';
import { join } from 'node:path';
import { provisionArtifact, deriveArtifact } from '../../src/managed-artifacts.mjs';
import { withCacheLease } from '../../src/cache-lifecycle.mjs';

const [configuration, mode, phase] = process.argv.slice(2);
const { artifact, cache, archive } = JSON.parse(await readFile(configuration, 'utf8'));
const hold = marker => {
  process.send?.({ type: 'hold', marker });
  Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0);
};
if (mode === 'lease') await withCacheLease(cache, () => hold('lease'));
else if (mode === 'derive') {
  const result = await deriveArtifact({ schema: 1, fixture: true }, async directory => {
    if (phase === 'produce') hold('produce');
    await writeFile(join(directory, 'derived'), 'verified derivation');
  }, { cache, log() {} });
  process.send?.({ type: 'result', directory: result.directory, cacheHit: result.cacheHit });
} else {
  const result = await provisionArtifact(artifact, { cache, log() {},
    fetch: async () => {
      process.send?.({ type: 'download' });
      if (phase === 'download') hold('download');
      await new Promise(resolve => setTimeout(resolve, 100));
      return new Response(await readFile(archive));
    }, progress: event => {
      if (phase && event.stage.startsWith(phase)) hold(phase);
    },
  });
  process.send?.({ type: 'result', directory: result.directory, cacheHit: result.cacheHit });
}
