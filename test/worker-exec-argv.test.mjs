// scripts/full-lean/emscripten-pre.js forwards only the exec flags that a Worker
// accepts (integration/node-exec-flags.mjs runs real applications).
import test from 'node:test';
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import vm from 'node:vm';

const source = readFileSync(new URL('../scripts/full-lean/emscripten-pre.js', import.meta.url), 'utf8');
// A Worker that rejects per-process flags the way Node does.
const perProcess = new Set(['--max-old-space-size=2048', '--expose-gc', '--stack-size=2000', '--title']);
function prelude(execArgv) {
  const created = [];
  class FakeWorker {
    constructor(filename, options) {
      const invalid = (options.execArgv ?? []).filter(flag => perProcess.has(flag));
      if (invalid.length) throw Object.assign(new Error(`Initiated Worker with invalid execArgv flags: ${invalid.join(', ')}`),
        { code: 'ERR_WORKER_INVALID_EXEC_ARGV' });
      created.push(Array.from(options.execArgv ?? []));
    }
    emit() { return true; }
  }
  const context = { ENVIRONMENT_IS_NODE: true, ENVIRONMENT_IS_PTHREAD: false, Module: {}, require: createRequire(import.meta.url),
    URL, process: { env: { LASM_FULL_HOST_MODULE: 'file:///host/host.mjs' }, execArgv, platform: 'linux' }, Array, Error, Object, Number, String };
  context.globalThis = context; context.Worker = FakeWorker;
  // worker-stdio.cjs is the host's; this test only checks the constructor's options.
  context.require = Object.assign(name => name.endsWith('worker-stdio.cjs') ? () => {} : createRequire(import.meta.url)(name),
    { resolve: createRequire(import.meta.url).resolve });
  vm.runInNewContext(source, context);
  return { Worker: context.Worker, created };
}

test('per-process flags are dropped from pthread workers; per-thread flags and --require are kept', () => {
  const { Worker, created } = prelude(['--max-old-space-size=2048', '--enable-source-maps', '--title', 'app', '--expose-gc', '--no-warnings']);
  new Worker('a.js', {}); new Worker('b.js', {});
  for (const argv of created) assert.deepEqual(argv.slice(0, 2), ['--enable-source-maps', '--no-warnings']);
  for (const argv of created) assert.equal(argv[2], '--require');
  assert.equal(created.length, 2);
});

test('accepted flags pass unchanged and an unrelated error is not swallowed', () => {
  const { Worker, created } = prelude(['--trace-warnings', '--inspect=0']);
  new Worker('a.js', {});
  assert.deepEqual(created[0].slice(0, 2), ['--trace-warnings', '--inspect=0']);
  const explicit = prelude([]);
  assert.throws(() => new explicit.Worker('a.js', { execArgv: ['--expose-gc'] }), { code: 'ERR_WORKER_INVALID_EXEC_ARGV' });
});
