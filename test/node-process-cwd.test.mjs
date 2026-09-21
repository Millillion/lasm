import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, realpathSync, rmSync, symlinkSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean child cwd preserves OS symlink and dot-segment resolution',
  { skip: !['linux', 'darwin'].includes(process.platform), timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm process cwd λ ')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    mkdirSync(join(directory, 'base'));
    mkdirSync(join(directory, 'target/inner'), { recursive: true });
    symlinkSync(join(directory, 'target/inner'), join(directory, 'base/link'));
    const source = join(root, 'test/fixtures/process-cwd/Main.lean');
    function run(label, executable, args) {
      const result = spawnSync(executable, [...args, directory], {
        encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
      });
      assert.equal(result.status, 0, `${label}: ${result.error?.message ?? result.stdout + result.stderr}`);
      assert.equal(result.stderr, '', label);
      assert.equal(result.stdout, 'process cwd comparison completed\n', label);
      t.diagnostic(`${label}: absolute and relative child cwd preserve symlink/..`);
    }
    run('native Lean', resolveLean(root).lean, ['--run', source]);
    const built = await buildMain(source);
    const program = join(built.output, 'main.mjs');
    for (const [label, executable, args] of [
      ['node', process.execPath, [program]],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', program]],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [program]],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${label}: not installed`); continue; }
      await t.test(label, () => run(label, executable, args));
    }
  });
