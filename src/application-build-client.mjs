import { Worker } from 'node:worker_threads';
import { basename } from 'node:path';
import { createBuildProgress } from './build-progress.mjs';

/** Keep terminal updates responsive even while Lean, Lake or the linker uses a
 * synchronous subprocess. There is still only one build, in one worker.
 */
export async function buildApplicationWithProgress(file, options = {}, {
  workerUrl = new URL('./application-build-worker.mjs', import.meta.url),
  stdout = process.stdout, stderr = process.stderr, intervalMs = 10_000,
} = {}) {
  const progress = createBuildProgress({ log: text => stderr.write(text + '\n'), intervalMs });
  progress.update({ stage: `Preparing ${basename(file)}` });
  try {
    const worker = new Worker(workerUrl, { workerData: { file, options }, stdout: true, stderr: true });
    worker.stdout.pipe(stdout, { end: false });
    worker.stderr.pipe(stderr, { end: false });
    const result = await new Promise((resolve, reject) => {
      let result, failure;
      worker.on('message', message => {
        if (message.type === 'progress') progress.update(message.event);
        else if (message.type === 'log') progress.message(message.text);
        else if (message.type === 'result') result = message.result;
        else if (message.type === 'failure') failure = Object.assign(new Error(message.error.message), message.error);
      });
      worker.once('error', reject);
      worker.once('exit', code => {
        if (failure) reject(failure);
        else if (code !== 0 || !result) reject(new Error(`Lasm build worker stopped before completing (exit ${code}).`));
        else resolve(result);
      });
    });
    progress.finish(result.cacheHit ? 'Reused cached build' : 'Build ready');
    return result;
  } finally { progress.finish(); }
}
