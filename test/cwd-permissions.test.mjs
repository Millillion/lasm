import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { root } from '../src/toolchain.mjs';

test('Linux process cwd inheritance survives loss of directory search permission',
  { skip: process.platform !== 'linux' || process.getuid?.() === 0, timeout: 60_000 }, async t => {
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const mode of ['named', 'removed']) await t.test(`${name}: ${mode}`, () => {
        const result = spawnSync(executable, [...prefix, join(root, 'test/fixtures/cwd-permissions-host.mjs'), mode], {
          encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
        });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, 'inherited cwd permissions, removed cwd and explicit child cwd passed\n');
      });
    }
  });
