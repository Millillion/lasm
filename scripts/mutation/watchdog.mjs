// Preloaded into every test process Stryker starts (scripts/mutation/run.mjs).
// When Stryker times a mutant out it stops its own test-runner process, but the
// test file's process (started by the tap runner) can outlive it, spinning in
// the loop the mutant made endless and holding its memory. Such orphans add up
// until the machine runs out of memory. This thread ends the process when its
// parent is gone, or after 90 seconds in any case (a test file takes seconds).
import { Worker } from 'node:worker_threads';

new Worker(`
const { workerData } = require('node:worker_threads');
const started = Date.now();
const parentAlive = () => { try { process.kill(workerData.ppid, 0); return true; } catch (error) { return error.code === 'EPERM'; } };
setInterval(() => {
  if (!parentAlive() || Date.now() - started > workerData.limit) process.kill(workerData.pid, 'SIGKILL');
}, 250);
`, { eval: true, workerData: { pid: process.pid, ppid: process.ppid, limit: 90_000 } }).unref();
