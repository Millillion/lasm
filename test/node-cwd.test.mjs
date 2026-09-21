import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, chmodSync, realpathSync, rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean chdir preserves native error constructors and search permissions',
  { skip: !['linux', 'darwin'].includes(process.platform) || process.getuid?.() === 0, timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-cwd-errors-')));
    t.after(() => {
      for (const name of ['denied', 'search-only']) chmodSync(join(directory, name), 0o700);
      rmSync(directory, { recursive: true, force: true });
    });
    writeFileSync(join(directory, 'file'), 'file');
    symlinkSync('loop', join(directory, 'loop'));
    mkdirSync(join(directory, 'denied'), { mode: 0 });
    mkdirSync(join(directory, 'search-only'), { mode: 0o111 });
    const source = join(root, 'test/fixtures/cwd-errors/Main.lean');
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], {
      encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
    });
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.match(native.stdout, /search denied: IO\.Error\.permissionDenied/);
    assert.match(native.stdout, /search without read: ok\ncwd error comparison completed\n$/);
    const built = await buildMain(source);
    const program = join(built.output, 'main.mjs');
    for (const [label, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${label}: not installed`); continue; }
      await t.test(label, () => {
        const result = spawnSync(executable, [...prefix, program, directory], {
          encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
        });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, native.stdout);
      });
    }
  });
