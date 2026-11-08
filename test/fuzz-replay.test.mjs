// The boundary fuzzers' committed corpus and regressions (test/fuzz/), replayed
// once each: every input that ever failed stays fixed. fuzz.yml runs the same
// replay on every pull request, and the campaigns nightly and weekly
// (docs/TESTING.md#fuzzing-at-the-boundaries).
import test from 'node:test';
import assert from 'node:assert/strict';
import { spawnSync } from 'node:child_process';
import { fileURLToPath } from 'node:url';

const run = fileURLToPath(new URL('./fuzz/run.mjs', import.meta.url));

test('the JavaScript fuzz targets pass their corpus and regressions', () => {
  const result = spawnSync(process.execPath, [run, 'replay', 'cli-arguments', 'serverless-http', 'ui-patch'], { encoding: 'utf8', timeout: 120_000 });
  assert.equal(result.status, 0, result.stdout + result.stderr);
  for (const target of ['cli-arguments', 'serverless-http', 'ui-patch']) assert.match(result.stdout, new RegExp(`ok   ${target}: \\d+ inputs`));
});

test('the CLI oracle accepts clean refusals and valid parses', async () => {
  // An inherited key is refused with a plain Error (the fix the target found).
  const target = await import('./fuzz/targets/cli-arguments.mjs');
  const { fields } = await import('./fuzz/input.mjs');
  assert.doesNotThrow(() => target.run(fields('init', 'app', '--template', 'constructor')));
  assert.doesNotThrow(() => target.run(fields('build', 'Main.lean', '--target', 'workers')));
});

test('a campaign lets the timers each run queues fire (issue #160)', async () => {
  // Timers that never fired kept every unmounted ui-patch UI and its DOM alive
  // until the worker ran out of memory after about 50,000 runs.
  const { Worker } = await import('node:worker_threads');
  const { mkdtempSync, rmSync } = await import('node:fs');
  const { tmpdir } = await import('node:os');
  const { join } = await import('node:path');
  const dir = mkdtempSync(join(tmpdir(), 'lasm-fuzz-timers-'));
  try {
    const worker = new Worker(new URL('./fuzz/worker.mjs', import.meta.url), { workerData: {
      targetFile: fileURLToPath(new URL('./fixtures/fuzz-timers-target.mjs', import.meta.url)), root: fileURLToPath(new URL('..', import.meta.url)),
      mode: 'fuzz', seedDirs: [], outDir: join(dir, 'corpus'), crashDir: join(dir, 'crashes'), seconds: 2, seed: 1,
      sab: new SharedArrayBuffer(8 + 65536) } });
    const done = await new Promise((resolve, reject) => {
      worker.on('message', message => { if (message.type === 'done') resolve(message); });
      worker.on('error', reject);
    });
    await worker.terminate();
    assert.equal(done.error, undefined);
    assert.ok(done.execs > 500, `only ${done.execs} runs`);
  } finally { rmSync(dir, { recursive: true, force: true }); }
});
