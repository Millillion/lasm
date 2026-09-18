import test from 'node:test';
import assert from 'node:assert/strict';
import { createNodeRuntimeHost } from '../src/node-host.mjs';

// Direct adapter checks for durations that cannot be exercised in real time.
test('IO.sleep preserves durations beyond one Node timeout instead of clamping to 1ms', async t => {
  t.mock.timers.enable({ apis: ['setTimeout'] });
  const host = createNodeRuntimeHost();
  t.after(() => host.close());
  let done = false;
  const pending = host.request(35, 0, 2_147_483_652n, new Uint8Array()).then(result => { done = true; return result; });
  t.mock.timers.tick(2_147_483_647);
  await Promise.resolve();
  assert.equal(done, false);
  assert.equal(host.stats().resources, 1);
  t.mock.timers.tick(5);
  assert.equal((await pending).error, false);
  assert.equal(host.stats().resources, 0);
});

test('runtime teardown cancels sleeps and releases their Node timers', async () => {
  const host = createNodeRuntimeHost();
  const pending = host.request(35, 0, 60_000n, new Uint8Array());
  assert.equal(host.stats().resources, 1);
  host.close();
  const result = await pending;
  assert.equal(result.error, true);
  assert.equal(result.bytes.readBigUInt64LE(0), 10n); // cancellation
  assert.equal(host.stats().resources, 0);
  host.close();
});
