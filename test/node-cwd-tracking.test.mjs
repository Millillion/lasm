import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, realpathSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean retains a renamed or removed Linux working directory',
  { skip: process.platform !== 'linux', timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-cwd-tracking-')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const source = join(root, 'test/fixtures/cwd-tracking/Main.lean');
    const options = { encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL' };
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], options);
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.ok(native.stdout.endsWith('cwd tracking comparison completed\n'));
    const built = await buildMain(source);
    const deleted = await buildMain(join(root, 'test/fixtures/cwd-tracking/DeletedProcess.lean'));
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      await t.test(name, () => {
        const result = spawnSync(executable, [...prefix, join(built.output, 'main.mjs'), directory], options);
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, native.stdout);
        // Pinned native Lean dereferences a null filename in this error branch.
        // Returning ENOENT safely is intentional, not a native-conformance pass.
        const removed = spawnSync(executable, [...prefix, join(deleted.output, 'main.mjs'),
          join(directory, 'deleted-process')], options);
        assert.equal(removed.status, 0, removed.error?.message ?? removed.stdout + removed.stderr);
        assert.equal(removed.stderr, '');
        assert.equal(removed.stdout, 'before deleted process cwd\nerror: IO.Error.noFileOrDirectory "" 2 "No such file or directory"\n');
      });
    }
  });
