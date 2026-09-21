import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, realpathSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('standalone Lean mains preserve native child behavior after cwd removal and permission revocation',
  { skip: process.platform !== 'linux' || process.getuid?.() === 0, timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-main-cwd-removed-permissions-')));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const source = join(root, 'test/fixtures/cwd-removed-permissions/Main.lean');
    const options = { encoding: 'utf8', timeout: 30_000, killSignal: 'SIGKILL' };
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], options);
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.ok(native.stdout.endsWith('removed cwd permission comparison completed\n'));
    const built = await buildMain(source);
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      for (const [mode, args] of [
        ['built', [join(built.output, 'main.mjs'), directory]],
        ['source launcher', [join(root, `lasm-${name}.js`), source, directory]],
      ]) await t.test(`${name}: ${mode}`, () => {
        const result = spawnSync(executable, [...prefix, ...args], options);
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, native.stdout);
      });
    }
  });
