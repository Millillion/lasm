import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { runInNewContext } from 'node:vm';

const prelude = readFileSync(new URL('../scripts/full-lean/host-pre.js', import.meta.url), 'utf8');
test('full-runtime exit drains redirected output before closing leftover host handles', async () => {
  const events = [];
  let drain;
  const output = new Promise(resolve => { drain = resolve; });
  const Module = { onExit: code => events.push(['exit', code]) };
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module,
    lasmFullHost: Promise.resolve({
      async flushStdIO() { events.push(['flush']); await output; events.push(['drained']); },
      close() { events.push(['closed']); },
    }),
  });
  const finished = Module.onExit(7);
  await Promise.resolve();
  assert.deepEqual(events, [['exit', 7], ['flush']]);
  drain(); await finished;
  assert.deepEqual(events, [['exit', 7], ['flush'], ['drained'], ['closed']]);
});

test('failed final output flush still releases handles and a pure main needs no host', async () => {
  let closed = 0;
  const Module = {};
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module,
    lasmFullHost: Promise.resolve({
      async flushStdIO() { throw new Error('broken output pipe'); },
      close() { closed++; },
    }),
  });
  await Module.onExit(0);
  assert.equal(closed, 1);
  const pure = {};
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module: pure });
  assert.equal(pure.onExit(0), undefined);
});

test('private worker disposal follows the final output drain and handle release', async () => {
  const events = [];
  let drain, released;
  const pendingDrain = new Promise(resolve => { drain = resolve; });
  const pendingRelease = new Promise(resolve => { released = resolve; });
  const Module = { async lasmDisposeCwdWorkers() {
    events.push('disposing'); await pendingRelease; events.push('disposed');
  } };
  runInNewContext(prelude, { ENVIRONMENT_IS_PTHREAD: false, Module,
    lasmFullHost: Promise.resolve({ async flushStdIO() { events.push('flush'); await pendingDrain; },
      close() { events.push('close'); } }) });
  let complete = false;
  const exiting = Module.onExit(0).then(() => { complete = true; });
  await Promise.resolve(); assert.deepEqual(events, ['flush']); assert.equal(complete, false);
  drain();
  for (let i = 0; i < 10 && !events.includes('disposing'); i++) await Promise.resolve();
  assert.deepEqual(events, ['flush', 'close', 'disposing']); assert.equal(complete, false);
  released(); await exiting; assert.equal(complete, true);
  assert.deepEqual(events, ['flush', 'close', 'disposing', 'disposed']);
});

test('pure main and failed host initialization both release a private worker bootstrap', async () => {
  for (const rejected of [false, true]) {
    let disposed = 0;
    const Module = { async lasmDisposeCwdWorkers() { disposed++; } };
    const context = { ENVIRONMENT_IS_PTHREAD: false, Module };
    if (rejected) context.lasmFullHost = Promise.reject(new Error('host initialization failed'));
    runInNewContext(prelude, context);
    await Module.onExit(0); assert.equal(disposed, 1);
  }
});
