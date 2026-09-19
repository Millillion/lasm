import test from 'node:test';
import assert from 'node:assert/strict';
import { spawn } from 'node:child_process';
import { once } from 'node:events';
import { cleanupTestProcesses } from '../scripts/full-lean/cleanup-processes.mjs';

test('suite cleanup only stops processes tagged for this run and completed test',
  { skip: process.platform !== 'linux', timeout: 10_000 }, async t => {
    const runId = `lasm-cleanup-test:${process.pid}:${Date.now()}`;
    async function child(run, name) {
      const process_ = spawn(process.execPath, ['-e', 'process.stdout.write("ready"); setInterval(() => {}, 1000)'], {
        env: { ...process.env, LASM_UPSTREAM_RUN_ID: run, LASM_UPSTREAM_TEST: name },
        stdio: ['ignore', 'pipe', 'pipe'],
      });
      t.after(() => process_.kill('SIGKILL'));
      await once(process_.stdout, 'data');
      return process_;
    }
    const finished = await child(runId, 'finished');
    const running = await child(runId, 'running');
    const unrelated = await child(runId + ':another', 'finished');
    const exited = once(finished, 'exit');
    const stopped = cleanupTestProcesses(runId, new Set(['finished']));
    assert.deepEqual(stopped, [{ pid: finished.pid, test: 'finished', signal: 'SIGTERM' }]);
    assert.equal((await exited)[1], 'SIGTERM');
    assert.equal(running.exitCode, null);
    assert.equal(running.signalCode, null);
    assert.equal(unrelated.exitCode, null);
    assert.equal(unrelated.signalCode, null);
  });
