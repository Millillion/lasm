import test from 'node:test';
import assert from 'node:assert/strict';
import { existsSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';

const root = fileURLToPath(new URL('../', import.meta.url));
for (const [name, engine, prefix] of [
  ['node', process.execPath, []],
  ['deno', join(root, '.cache/js-runtimes/deno-2.9.7/deno'), ['run', '-A']],
  ['bun', join(root, '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun'), []],
]) test(`${name}: deployed applications can relaunch themselves without build tools or PATH`,
  { skip: !existsSync(engine), timeout: 30_000 }, () => {
    const result = spawnSync(engine, [...prefix, join(root, 'test/fixtures/application-self-process.mjs')],
      { encoding: 'utf8', timeout: 25_000 });
    assert.ifError(result.error);
    assert.equal(result.status, 0, result.stdout + result.stderr);
    assert.equal(result.stderr, '');
    assert.equal(result.stdout, 'self launch preserves engine, empty PATH, explicit environment, cwd, pipes, arguments and PID\n');
  });
