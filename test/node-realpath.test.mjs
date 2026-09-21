import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, chmodSync, realpathSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';
import { setupRealPath } from './fixtures/realpath/setup.mjs';

test('ordinary Lean realPath preserves symlink traversal, bytes and errors',
  { skip: !['linux', 'darwin'].includes(process.platform), timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-realpath-')));
    t.after(() => { chmodSync(join(directory, 'denied'), 0o700); rmSync(directory, { recursive: true, force: true }); });
    setupRealPath(directory);
    const source = join(root, 'test/fixtures/realpath/Main.lean');
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], { encoding: 'utf8', timeout: 15_000 });
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.match(native.stdout, /realPath comparison completed\n$/);
    const built = await buildMain(source), program = join(built.output, 'main.mjs');
    for (const [label, executable, args] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${label}: not installed`); continue; }
      await t.test(label, () => {
        const result = spawnSync(executable, [...args, program, directory], { encoding: 'utf8', timeout: 20_000, killSignal: 'SIGKILL' });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, native.stdout);
      });
    }
  });
