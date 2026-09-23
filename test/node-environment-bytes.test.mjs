import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, copyFileSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root, resolveLean } from '../src/toolchain.mjs';

test('ordinary environment reads and child inheritance preserve native POSIX bytes',
  { skip: process.platform !== 'linux', timeout: 600_000 }, async t => {
    const fixture = join(root, 'test/fixtures/environment-bytes');
    const source = join(fixture, 'Main.lean');
    const cases = [
      ['ascii', Buffer.from('plain/value').toString('hex')],
      ['valid-unicode', Buffer.from('λ/hello/😀').toString('hex')],
      ['invalid-lead-continuation', 'ff80'], ['overlong-two', 'c080'],
      ['surrogate', 'eda080'], ['above-unicode-range', 'f4908080'],
      ['truncated-three', 'e282'], ['isolated-continuations', '808182'],
    ];
    function execute(command, valueHex) {
      const result = spawnSync('/usr/bin/python3', [join(fixture, 'run.py')], {
        input: JSON.stringify({ command, valueHex }), encoding: 'utf8', timeout: 35_000,
      });
      assert.equal(result.status, 0, result.error?.message ?? result.stderr);
      const output = JSON.parse(result.stdout);
      // Abort the parent test on a timeout instead of starting another engine.
      assert.equal(output.timeoutSeconds, undefined, 'Stop the guarded workload after a timeout');
      return output;
    }
    const oracle = new Map();
    for (const [name, valueHex] of cases) {
      const result = execute([resolveLean(root).lean, '--run', source], valueHex);
      assert.equal(result.status, 0, Buffer.from(result.stdoutHex + result.stderrHex, 'hex').toString());
      assert.equal(result.stderrHex, '');
      assert.match(Buffer.from(result.stdoutHex, 'hex').toString(), /raw-environment comparison completed\n$/);
      oracle.set(name, result);
    }
    mkdirSync(join(root, '.work'), { recursive: true });
    const directory = mkdtempSync(join(root, '.work/environment-byte-package-'));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const copiedSource = join(directory, 'Main.lean');
    copyFileSync(source, copiedSource);
    const built = await buildMain(copiedSource), program = join(built.output, 'main.mjs');
    for (const [engine, executable, args] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${engine}: not installed`); continue; }
      const host = execute([executable, ...args, join(fixture, 'host.mjs'), 'ff80'], 'ff80');
      await t.test(`${engine}/JavaScript-and-Lean-edits`, () => {
        assert.equal(host.status, 0, Buffer.from(host.stderrHex, 'hex').toString());
        assert.equal(host.stderrHex, '');
        assert.equal(Buffer.from(host.stdoutHex, 'hex').toString(), 'environment host checked\n');
      });
      for (const [name, valueHex] of cases) {
        const result = execute([executable, ...args, program], valueHex);
        await t.test(`${engine}/${name}`, () => assert.deepEqual(result, oracle.get(name)));
      }
    }
  });
