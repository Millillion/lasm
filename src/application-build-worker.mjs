import { parentPort, workerData } from 'node:worker_threads';
import { buildApplication } from './application-build.mjs';

try {
  const result = await buildApplication(workerData.file, { ...workerData.options,
    log: text => parentPort.postMessage({ type: 'log', text }),
    progress: event => parentPort.postMessage({ type: 'progress', event }),
  });
  parentPort.postMessage({ type: 'result', result });
} catch (error) {
  // Error cloning alone drops subprocess diagnostics. Preserve the fields used
  // by the CLI so Lean still reports its original filename and line number.
  parentPort.postMessage({ type: 'failure', error: {
    name: error.name, message: error.message, stack: error.stack,
    stderr: error.stderr?.toString(), stdout: error.stdout?.toString(),
  } });
  process.exitCode = 1;
} finally { parentPort.close(); }
