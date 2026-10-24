import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, realpathSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';
import { launcherSource, managedLean, programStderr } from './helpers/launcher-source.mjs';

test('standalone Lean mains retain native Linux cwd permission behavior',
  { skip: process.platform !== 'linux' || process.getuid?.() === 0, timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-main-cwd-permissions-')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const source = join(root, 'test/fixtures/cwd-permissions/Main.lean');
    const options = { encoding: 'utf8', timeout: 20_000, killSignal: 'SIGKILL' };
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], options);
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.ok(native.stdout.endsWith('cwd permission comparison completed\n'));
    const built = await buildMain(source);
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      // The launcher builds with managed Lean, whose messages and error codes
      // differ from the legacy builder's Lean 4.32: compare it with that release natively.
      const pinned = launcherSource(t, source);
      const managed = spawnSync(await managedLean(pinned), ['--run', pinned, directory], options);
      assert.equal(managed.status, 0, managed.error?.message ?? managed.stdout + managed.stderr);
      for (const [mode, args, oracle] of [
        ['built', [join(built.output, 'main.mjs'), directory], native],
        ['source launcher', [join(root, `lasm-${name}.js`), pinned, directory], managed],
      ]) await t.test(`${name}: ${mode}`, () => {
        // The source launcher compiles first (minutes on a cold cache).
        const result = spawnSync(executable, [...prefix, ...args], mode === 'built' ? options : { ...options, timeout: 480_000 });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(mode === 'built' ? result.stderr : programStderr(result.stderr), '');
        assert.equal(result.stdout, oracle.stdout);
      });
    }
  });
