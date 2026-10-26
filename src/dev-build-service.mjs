// The main-thread side of `lasm dev`'s long-lived build worker.
import { Worker } from 'node:worker_threads';

/** unref: the worker does not keep the process alive (a Vite dev server owns its lifetime). */
export function createBuildService({ workerUrl = new URL('./dev-build-worker.mjs', import.meta.url), unref = false } = {}) {
  let worker, nextId = 0;
  const pending = new Map();
  const start = () => {
    const self = worker = new Worker(workerUrl, { stdout: true, stderr: true });
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
    // A crashed worker fails its build; the next build starts a new one.
    const fail = error => {
      for (const request of pending.values()) request.reject(error);
      pending.clear(); if (worker === self) worker = undefined;
    };
    self.once('error', fail);
    self.once('exit', code => fail(new Error(`The Lasm build worker stopped (exit ${code}).`)));
  };
  return {
    build(file, options, { target, onProgress, onLog } = {}) {
      if (!worker) start();
      const id = nextId++;
      return new Promise((resolve, reject) => {
        pending.set(id, { resolve, reject, onProgress, onLog });
        worker.postMessage({ id, file, options, target });
      });
    },
    async close() { const current = worker; worker = undefined; await current?.terminate(); },
  };
}
