import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync, mkdtempSync, rmSync } from 'node:fs';
import { join, resolve } from 'node:path';
import { tmpdir } from 'node:os';
import { spawnSync } from 'node:child_process';

test('line and byte reads preserve partial-read, sticky-error, and EOF ordering like native Lean',
  { skip: process.platform === 'win32' }, async t => {
    const directory = mkdtempSync(join(tmpdir(), 'lasm-getline-state-'));
    t.after(() => rmSync(directory, { recursive: true, force: true }));
    const executable = join(directory, 'native');
    const compiled = spawnSync('cc', ['-O2', '-Wall', '-Wextra', '-Werror',
      'test/fixtures/getline-state/native.c', '-o', executable], { encoding: 'utf8', timeout: 20_000 });
    assert.equal(compiled.status, 0, compiled.error?.message ?? compiled.stderr);
    const native = spawnSync(executable, [], { encoding: 'utf8', timeout: 5000 });
    assert.equal(native.status, 0, native.error?.message ?? native.stderr);
    assert.equal(native.stderr, '');
    const control = JSON.parse(native.stdout);
    for (const [name, engine, prefix] of [
      ['node', process.execPath, []],
      ['deno', '.cache/js-runtimes/deno-2.9.7/deno', ['run', '-A']],
      ['bun', '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun', []],
    ]) {
      if (!existsSync(engine)) { t.diagnostic(`${name}: not installed`); continue; }
      await t.test(name, () => {
        const result = spawnSync(engine, [...prefix, 'test/fixtures/getline-state/host.mjs',
          resolve('src/native-files.mjs')], { encoding: 'utf8', timeout: 10_000 });
        assert.equal(result.status, 0, result.error?.message ?? result.stderr);
        assert.equal(result.stderr, '');
        assert.deepEqual(JSON.parse(result.stdout), control);
      });
    }
  });
