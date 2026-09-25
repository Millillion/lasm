import { Worker, isMainThread, parentPort } from 'node:worker_threads';
import { createRequire } from 'node:module';
import { prepareBunStack } from '../../src/bun-stack.mjs';

if (isMainThread) {
  prepareBunStack(import.meta.url, { minimumStackMiB: Number(process.env.LASM_STACK_TEST_MINIMUM) });
  const worker = new Worker(new URL(import.meta.url));
  worker.on('message', size => console.log(JSON.stringify({ size, requested: process.env.LASM_VM_STACK_MB, pid: process.pid })));
  worker.on('error', error => { throw error; });
} else {
  const ffi = createRequire(import.meta.url)('koffi'), libc = ffi.load(null);
  const attrs = Buffer.alloc(128), base = [null], size = [0];
  const self = libc.func('uint64_t pthread_self()');
  const get = libc.func('int pthread_getattr_np(uint64_t thread, void *attributes)');
  const stack = libc.func('int pthread_attr_getstack(void *attributes, _Out_ void **base, _Out_ size_t *size)');
  const destroy = libc.func('int pthread_attr_destroy(void *attributes)');
  if (get(self(), attrs)) throw new Error('Cannot inspect actual worker stack');
  try {
    if (stack(attrs, base, size)) throw new Error('Cannot inspect actual worker stack size');
    parentPort.postMessage(Number(size[0]));
  } finally { destroy(attrs); }
}
