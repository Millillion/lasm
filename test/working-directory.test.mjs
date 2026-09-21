import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { root } from '../src/toolchain.mjs';

test('Linux working directories retain identity and release their native handles',
  { skip: process.platform !== 'linux', timeout: 120_000 }, async t => {
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const mode of ['instance', 'propagate']) await t.test(`${name}: ${mode}`, () => {
        const result = spawnSync(executable, [...prefix, join(root, 'test/fixtures/cwd-tracking-host.mjs'), mode], {
          encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
        });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, 'cwd rename/deletion, child inheritance, instance isolation and descriptor cleanup passed\n');
      });
    }
  });
