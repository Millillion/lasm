import { parentPort, workerData } from 'node:worker_threads';

parentPort.postMessage({ type: 'progress', event: { stage: 'Linking fixture application' } });
// Deliberately block this worker's JS loop, as execFileSync does during a link.
// The CLI reporter must continue to produce output on its separate main thread.
Atomics.wait(new Int32Array(new SharedArrayBuffer(4)), 0, 0, 250);
if (workerData.options.fail) {
  parentPort.postMessage({ type: 'failure', error: {
    name: 'Error', message: 'compiler failed', stderr: 'Main.lean:2:3: unknown identifier', stdout: '',
  } });
  process.exitCode = 1;
} else if (workerData.options.crash) {
  throw new Error('unexpected fixture failure');
} else if (!workerData.options.noResult) {
  console.log('fixture stdout');
  console.error('fixture diagnostic');
  parentPort.postMessage({ type: 'result', result: { output: '/fixture/dist', cacheHit: !!workerData.options.cached } });
}
parentPort.close();
