// "— 10s elapsed" lines for long steps that block the thread running them
// (the edge, browser and WASI links call their tools synchronously). A worker
// thread (src/elapsed-ticker-worker.mjs) writes straight to file descriptor 2,
// so the lines appear while the calling thread waits; nothing is printed for
// steps shorter than the interval.
import { Worker } from 'node:worker_threads';

/** Starts the ticker; returns a function that stops it. */
export function startElapsedTicker(label, { intervalMs = 10_000 } = {}) {
  let worker;
  try {
    worker = new Worker(new URL('./elapsed-ticker-worker.mjs', import.meta.url), { workerData: { label, intervalMs }, execArgv: [] });
    worker.on('error', () => {});
    worker.unref();
  } catch { return () => {}; }
  return () => { worker.terminate().catch(() => {}); };
}
