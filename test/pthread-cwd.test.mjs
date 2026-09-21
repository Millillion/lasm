import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { root } from '../src/toolchain.mjs';

test('private pthread factory preserves application cwd and worker messaging after deletion',
  { skip: process.platform !== 'linux' || process.getuid?.() === 0, timeout: 35_000 }, async t => {
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      // Deno prints an intentional uncaught worker exception even when the
      // parent's error event is handled. Compare the unwrapped engine control
      // so this adapter must preserve its diagnostic, not merely ignore stderr.
      const direct = spawnSync(executable, [...prefix, join(root, 'test/fixtures/pthread-cwd-host.cjs'), 'direct-error'], {
        encoding: 'utf8', timeout: 12000, killSignal: 'SIGKILL' });
      assert.equal(direct.status, 0, direct.error?.message ?? direct.stdout + direct.stderr);
      assert.equal(direct.stdout, 'direct worker error control passed\n');
      for (const mode of ['messaging', 'drop']) await t.test(`${name}: ${mode}`, () => {
        const result = spawnSync(executable, [...prefix, join(root, 'test/fixtures/pthread-cwd-host.cjs'), mode], {
          encoding: 'utf8', timeout: mode === 'drop' ? 3000 : 12000, killSignal: 'SIGKILL' });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, mode === 'messaging' ? direct.stderr : '');
        assert.equal(result.stdout, mode === 'drop' ? 'unreferenced factory child permits host exit\n'
          : 'private worker cwd, shared memory, transferred ports, errors and shutdown passed\n');
      });
    }
  });
