// Preloaded into every test process Stryker starts (scripts/mutation/run.mjs).
// A mutant can make a loop endless. Stryker then times the mutant out and stops
// its own test-runner process, but the test file's process (started by the tap
// runner) can outlive it, still spinning; and a loop that allocates outside
// V8's heap (typed arrays, DOM text) is not stopped by --max-old-space-size.
// Either way memory runs out for the whole machine (it did on CI and locally).
// This thread ends the process when its parent is gone, when it holds more
// than 1 GiB, or after 90 seconds (a test file takes seconds). A process ended
// for its memory first reports a failed test, so the mutant counts as killed.
import { Worker } from 'node:worker_threads';

new Worker(`
const { workerData } = require('node:worker_threads');
const { writeSync } = require('node:fs');
const started = Date.now();
const parentAlive = () => { try { process.kill(workerData.ppid, 0); return true; } catch (error) { return error.code === 'EPERM'; } };
setInterval(() => {
  if (process.memoryUsage.rss() > workerData.maxBytes) {
    try { writeSync(1, '\\nnot ok 9999 - the mutant made this test file use more than 1 GiB\\n'); } catch {}
    process.kill(workerData.pid, 'SIGKILL');
  }
  if (!parentAlive() || Date.now() - started > workerData.limit) process.kill(workerData.pid, 'SIGKILL');
}, 100);
`, { eval: true, workerData: { pid: process.pid, ppid: process.ppid, limit: 90_000, maxBytes: 1024 * 1024 * 1024 } }).unref();
