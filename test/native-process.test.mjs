import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { root } from '../src/toolchain.mjs';

test('Linux native spawn and each engine child reaper coexist',
  { skip: process.platform !== 'linux', timeout: 130_000 }, async t => {
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const launcher of ['javascript', 'native']) await t.test(`${name}: ${launcher}`, () => {
        const result = spawnSync(executable, [...prefix, join(root, 'test/fixtures/native-process-host.mjs'), launcher], {
          encoding: 'utf8', timeout: 20_000, killSignal: 'SIGKILL',
        });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, 'native spawn preserves descriptors, large configurations, mixed reapers and kill status\n');
      });
    }
  });
