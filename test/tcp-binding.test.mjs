import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary Lean TCP binding, errors, and bound clients match native Lean',
  { skip: !['linux', 'darwin'].includes(process.platform), timeout: 650_000 }, async t => {
    const source = join(root, 'test/fixtures/tcp-binding/Main.lean');
    const native = spawnSync(resolveLean(root).lean, ['-j4', '--run', source], {
      cwd: root, encoding: 'utf8', timeout: 15_000, maxBuffer: 1024 * 1024, killSignal: 'SIGKILL',
    });
    assert.equal(native.status, 0, native.error?.message ?? native.stdout + native.stderr);
    assert.equal(native.stderr, '');
    assert.ok(native.stdout.endsWith('TCP binding comparison completed\n'));
    const built = await buildMain(source);
    const engines = [
      ['node', process.execPath, [join(built.output, 'main.mjs')]],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A', join(built.output, 'main.mjs')]],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), [join(built.output, 'main.mjs')]],
    ];
    for (const [name, executable, args] of engines) {
      if (!existsSync(executable)) { t.diagnostic(`${name}: not installed`); continue; }
      const result = spawnSync(executable, args, {
        cwd: root, encoding: 'utf8', timeout: 15_000, maxBuffer: 1024 * 1024, killSignal: 'SIGKILL',
      });
      assert.equal(result.status, 0, `${name}: ${result.error?.message ?? ''}\n${result.stdout}${result.stderr}`);
      assert.equal(result.stderr, '', name);
      assert.equal(result.stdout, native.stdout, name);
      t.diagnostic(`${name}: matched native output, including errors and both address families`);
    }
  });
