import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';

for (const mode of ['finite', 'unref']) {
  test(`worker diagnostics preserve application descriptors and ${mode} lifetime`, () => {
    const result = spawnSync(process.execPath, ['test/fixtures/worker-stdio.cjs', mode],
      { encoding: 'utf8', timeout: 5000, killSignal: 'SIGKILL' });
    assert.equal(result.status, 0, result.error?.message ?? result.stderr);
    assert.deepEqual(result.stdout.trim().split('\n').sort(), ['parent stdout', 'worker stdout']);
    assert.deepEqual(result.stderr.trim().split('\n').sort(), ['parent stderr', 'worker stderr']);
  });
}
