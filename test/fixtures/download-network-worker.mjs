// Exercise the real build-worker transport/progress path with a tiny download;
// full compiler installation remains a separate packed-candidate acceptance gate.
import { parentPort, workerData } from 'node:worker_threads';
import { downloadArtifact } from '../../src/managed-download.mjs';
try {
  const { artifact, destination, policy } = workerData.options;
  await downloadArtifact(artifact, destination, { policy, event: event => parentPort.postMessage({ type: 'log', text: JSON.stringify(event) }),
    update: (receivedBytes, complete) => parentPort.postMessage({ type: 'progress', event: {
      stage: 'Downloading TLS fixture', receivedBytes, totalBytes: artifact.bytes, complete,
    } }) });
  parentPort.postMessage({ type: 'result', result: { cacheHit: false } });
} catch (error) {
  parentPort.postMessage({ type: 'failure', error: { message: error.message, code: error.code } });
  process.exitCode = 1;
} finally { parentPort.close(); }
