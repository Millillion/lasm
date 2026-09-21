import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';

test('standard-output flush and disposal leave the host event loop available',
  { skip: process.platform !== 'linux' }, async t => {
    for (const [name, engine, prefix] of [
      ['node', process.execPath, []],
      ['deno', '.cache/js-runtimes/deno-2.9.7/deno', ['run', '-A']],
      ['bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun', []],
    ]) {
      if (!existsSync(engine)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const action of ['flush', 'close']) await t.test(`${name}: ${action}`, () => {
        const result = spawnSync(engine, [...prefix, 'test/fixtures/stdio-backpressure.mjs', action],
          { encoding: 'utf8', timeout: 10_000, killSignal: 'SIGKILL' });
        assert.equal(result.status, 0, result.error?.message ?? result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, `${action} drained a full stdout pipe without blocking its JS reader\n`);
      });
    }
  });
