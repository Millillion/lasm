import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, realpathSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean console streams preserve buffering and inherited-child output order',
  { skip: process.platform === 'win32', timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-console-buffering-')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const source = join(root, 'test/fixtures/console-buffering/Main.lean');
    const options = { encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL' };
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], options);
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, 'stderr parent before|stderr child|stderr parent after\n');
    assert.ok(native.stdout.endsWith('normal shutdown flush\n'));
    const built = await buildMain(source);
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      await t.test(name, () => {
        const result = spawnSync(executable, [...prefix, join(built.output, 'main.mjs'), directory], options);
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, native.stderr);
        assert.equal(result.stdout, native.stdout);
      });
    }
  });
