import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdirSync, mkdtempSync, copyFileSync, readFileSync, rmSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { buildMain } from '../src/main.mjs';
import { root } from '../src/toolchain.mjs';

test('ordinary Lean temporary APIs use the original raw POSIX directory bytes',
  { skip: process.platform !== 'linux', timeout: 650_000 }, async t => {
    mkdirSync(join(root, '.work'), { recursive: true });
    const directory = mkdtempSync(join(root, '.work/temporary-path-byte-package-'));
    let complete = false;
    t.after(() => {
      if (complete) rmSync(directory, { recursive: true, force: true });
      else t.diagnostic(`Retained failed comparison: ${directory}`);
    });
    const fixture = join(root, 'test/fixtures/temporary-path-bytes');
    const source = join(directory, 'Main.lean');
    copyFileSync(join(fixture, 'Main.lean'), source);
    const built = await buildMain(source), program = join(built.output, 'main.mjs');
    for (const [engine, executable, args] of [
      ['node', process.execPath, []],
      ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
      ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
    ]) {
      if (!existsSync(executable)) { t.diagnostic(`${engine}: not installed`); continue; }
      const output = join(directory, engine);
      const result = spawnSync('/usr/bin/python3', [join(fixture, 'compare.py'), output,
        engine, executable, ...args, program], { encoding: 'utf8', timeout: 180_000 });
      assert.equal(result.status, 0, result.error?.message ?? result.stdout + result.stderr);
      const comparison = JSON.parse(readFileSync(join(output, 'comparison.json')));
      assert.equal(comparison.sourceUnchanged, true);
      assert.equal(comparison.results[0].passed, true, 'Native oracle and physical creation checks');
      assert.equal(comparison.results[1].cases.length, 6);
      for (const entry of comparison.results[1].cases)
        await t.test(`${engine}/${entry.name}`, () => assert.equal(entry.passed, true));
    }
    complete = true;
  });
