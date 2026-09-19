import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

test('OS signals reach only the child host and preserve waiter lifecycle', { skip: process.platform === 'win32' }, () => {
  const result = spawnSync(process.execPath, [fileURLToPath(new URL('fixtures/signal-host.mjs', import.meta.url))],
    { encoding: 'utf8', timeout: 10_000 });
  assert.equal(result.status, 0, result.error?.message ?? result.stderr);
  assert.equal(result.stdout, 'signal delivery, cancellation, and listener cleanup passed\n');
  assert.equal(result.stderr, '');
});
