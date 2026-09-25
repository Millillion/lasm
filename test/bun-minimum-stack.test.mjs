import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { resolve } from 'node:path';
import { existsSync } from 'node:fs';

const binary = resolve(process.env.LASM_TEST_BUN ?? '.cache/js-runtimes/bun-1.4.2/bun-linux-x64/bun');
const fixture = resolve('test/fixtures/bun-minimum-stack.mjs');
const enabled = process.platform === 'linux' && existsSync(binary);
if (process.env.LASM_REQUIRE_BUN_TESTS === '1' && !enabled)
  throw new Error('Required native Bun minimum-stack controls are unavailable');
test('native backend minimum increases actual Bun worker reservation and restores visible settings', { skip: !enabled }, () => {
  const result = spawnSync(binary, [fixture], { env: { PATH: '', LASM_VM_STACK_MB: '64', LASM_STACK_TEST_MINIMUM: '96' },
    encoding: 'utf8', timeout: 20_000, killSignal: 'SIGKILL' });
  assert.ifError(result.error); assert.equal(result.status, 0, result.stderr);
  const observed = JSON.parse(result.stdout);
  assert.ok(observed.size >= 96 * 1024 ** 2); assert.equal(observed.requested, '64'); assert.equal(observed.pid, result.pid);
});
test('invalid native backend stack minimum rejects before worker creation', { skip: !enabled }, () => {
  for (const minimum of ['-1', 'NaN', 'Infinity']) {
    const result = spawnSync(binary, [fixture], { env: { PATH: '', LASM_STACK_TEST_MINIMUM: minimum },
      encoding: 'utf8', timeout: 10_000, killSignal: 'SIGKILL' });
    assert.ifError(result.error); assert.equal(result.status, 1);
    assert.match(result.stderr, /Invalid minimum Bun worker stack/); assert.equal(result.stdout, '');
  }
});
