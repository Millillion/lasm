import { parentPort } from 'node:worker_threads';
import { nativeFiles } from './native-files.mjs';

// FILE pointers and CRT descriptors belong to this process, not to a JS
// isolate. The owning host serializes operations and keeps each stream alive
// until its call completes. Only the native call blocks this worker's thread.
const files = nativeFiles({ synchronous: true });
const port = parentPort ?? {
  on(_event, listener) { addEventListener('message', event => listener(event.data)); },
  postMessage(value, transfer) { globalThis.postMessage(value, transfer); },
};
const operations = new Set(['open', 'read', 'write', 'flush', 'rewind', 'truncate', 'getLine',
  'closeAsync', 'readDirectory', 'realPath', 'groupInfo', 'checkDirectorySearch']);
port.on('message', async ({ operation, args }) => {
  try {
    if (!operations.has(operation)) throw new Error(`Invalid native file operation: ${operation}`);
    let value = await files[operation](...args);
    if (operation === 'open') value = { stream: value.stream, fd: value.fd, type: value.type };
    // Move full allocations directly. A short read or pooled Buffer must copy
    // only its returned bytes: cloning the view would clone its entire backing
    // allocation, even at EOF. A fresh Uint8Array also leaves pooled peers live.
    const transfer = [];
    if (Buffer.isBuffer(value)) {
      if (value.byteOffset !== 0 || value.byteLength !== value.buffer.byteLength)
        value = new Uint8Array(value);
      transfer.push(value.buffer);
    }
    port.postMessage({ ok: true, value }, transfer);
  } catch (error) {
    port.postMessage({ ok: false, error: { message: error.message,
      code: error.code, errno: error.errno, nativeMessage: error.nativeMessage,
      leanUserError: error.leanUserError } });
  }
});
