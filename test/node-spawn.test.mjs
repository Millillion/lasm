import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, chmodSync, realpathSync, rmSync, symlinkSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { tmpdir } from 'node:os';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean POSIX spawn errors, PID, environment, PATH and text execution match native Lean',
  { skip: !['linux', 'darwin'].includes(process.platform) || process.getuid?.() === 0, timeout: 650_000 }, async t => {
    const directory = realpathSync(mkdtempSync(join(tmpdir(), 'lasm-spawn-errors-')));
    t.after(() => {
      chmodSync(join(directory, 'denied'), 0o700);
      rmSync(directory, { recursive: true, force: true });
    });
    writeFileSync(join(directory, 'file'), 'not executable');
    writeFileSync(join(directory, 'executable-text'), 'printf \'%s\\n\' "$1"\n', { mode: 0o755 });
    symlinkSync('loop', join(directory, 'loop'));
    mkdirSync(join(directory, 'denied'), { mode: 0 });
    const source = join(root, 'test/fixtures/process-spawn-errors/Main.lean');
    const native = spawnSync(resolveLean(root).lean, ['--run', source, directory], {
      encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
    });
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.equal(native.stdout.match(/child 255/g)?.length, 10);
    assert.ok(native.stdout.endsWith('process spawn error comparison completed\n'));
    const built = await buildMain(source);
    for (const [name, executable, prefix] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      await t.test(name, () => {
        const result = spawnSync(executable, [...prefix, join(built.output, 'main.mjs'), directory], {
          encoding: 'utf8', timeout: 15_000, killSignal: 'SIGKILL',
        });
        assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
        assert.equal(result.stderr, '');
        assert.equal(result.stdout, native.stdout);
      });
    }
  });
