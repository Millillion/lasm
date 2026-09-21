const { Worker } = require('node:worker_threads');
const { once } = require('node:events');
const { writeSync } = require('node:fs');
const forwardWorkerStdio = require('../../src/worker-stdio.cjs');

(async () => {
  const mode = process.argv[2];
  const worker = new Worker(`
    const { parentPort, workerData } = require('node:worker_threads');
    console.log('worker stdout');
    console.error('worker stderr');
    parentPort.postMessage('ready');
    if (workerData === 'unref') setInterval(() => {}, 1000);
  `, { eval: true, workerData: mode, stdout: true, stderr: true });
  const ready = once(worker, 'message');
  const diagnostics = Promise.all([once(worker.stdout, 'data'), once(worker.stderr, 'data')]);
  const exited = mode === 'finite' ? once(worker, 'exit') : null;
  forwardWorkerStdio(worker);
  await Promise.all([ready, diagnostics]);
  if (mode === 'unref') worker.unref();
  else if ((await exited)[0] !== 0) throw new Error('Worker failed');
  // These descriptors still belong to the application after worker shutdown.
  writeSync(1, 'parent stdout\n');
  writeSync(2, 'parent stderr\n');
})().catch(error => { writeSync(2, String(error) + '\n'); process.exitCode = 1; });
