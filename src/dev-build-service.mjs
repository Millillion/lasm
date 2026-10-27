// The main-thread side of `lasm dev`'s long-lived build workers.
import { Worker } from 'node:worker_threads';

/** unref: the workers do not keep the process alive (a Vite dev server owns its lifetime).
 * workers: how many builds may run at once (lasm dev's outputs, one worker each);
 * build(…, { slot }) picks the worker, so each output keeps its warm worker. */
export function createBuildService({ workerUrl = new URL('./dev-build-worker.mjs', import.meta.url), unref = false, workers: count = 1 } = {}) {
  const slots = Array.from({ length: Math.max(1, count) }, () => ({ worker: undefined }));
  let nextId = 0;
  const pending = new Map();
  const start = slot => {
    const self = slot.worker = new Worker(workerUrl, { stdout: true, stderr: true });
    if (unref) self.unref();
    self.stdout.pipe(process.stdout, { end: false });
    self.stderr.pipe(process.stderr, { end: false });
    self.on('message', message => {
      const request = pending.get(message.id);
      if (!request) return;
      if (message.type === 'progress') request.onProgress?.(message.event);
      else if (message.type === 'log') request.onLog?.(message.text);
      else {
        pending.delete(message.id);
        if (message.type === 'result') request.resolve(message.result);
        else request.reject(Object.assign(new Error(message.error.message), message.error));
      }
    });
    // A crashed worker fails its builds; the next build starts a new one.
    const fail = error => {
      for (const [id, request] of pending) if (request.worker === self) { pending.delete(id); request.reject(error); }
      if (slot.worker === self) slot.worker = undefined;
    };
    self.once('error', fail);
    self.once('exit', code => fail(new Error(`The Lasm build worker stopped (exit ${code}).`)));
  };
  return {
    workers: slots.length,
    build(file, options, { target, onProgress, onLog, slot: index = 0 } = {}) {
      const slot = slots[index % slots.length];
      if (!slot.worker) start(slot);
      const id = nextId++;
      return new Promise((resolve, reject) => {
        pending.set(id, { resolve, reject, onProgress, onLog, worker: slot.worker });
        slot.worker.postMessage({ id, file, options, target });
      });
    },
    async close() {
      const current = slots.map(slot => slot.worker).filter(Boolean);
      for (const slot of slots) slot.worker = undefined;
      await Promise.all(current.map(worker => worker.terminate()));
    },
  };
}
