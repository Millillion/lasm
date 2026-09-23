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
