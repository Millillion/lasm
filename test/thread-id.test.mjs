import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

test('thread IDs identify actual native threads rather than Wasm pointers', () => {
  const result = spawnSync(process.execPath, [fileURLToPath(new URL('fixtures/thread-id-host.mjs', import.meta.url))],
    { encoding: 'utf8', timeout: 20_000 });
  assert.equal(result.status, 0, result.error?.message ?? result.stderr);
  assert.equal(result.stdout, 'native thread IDs are stable and identify each live OS thread\n');
  assert.equal(result.stderr, '');
});
