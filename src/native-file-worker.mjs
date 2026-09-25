import { parentPort } from 'node:worker_threads';
import { nativeFiles } from './native-files.mjs';
import { encodeFileMessage, decodeFileMessage } from './native-file-message.mjs';

// FILE pointers and CRT descriptors belong to this process, not to a JS
// isolate. The owning host serializes operations and keeps each stream alive
// until its call completes. Only the native call blocks this worker's thread.
const files = nativeFiles({ synchronous: true });
const port = parentPort ?? {
  on(_event, listener) { addEventListener('message', event => listener(event.data)); },
  postMessage(value, transfer) { globalThis.postMessage(value, transfer); },
};
const operations = new Set(['open', 'read', 'write', 'flush', 'rewind', 'truncate', 'getLine',
  'closeAsync', 'readDirectory', 'realPath', 'removeFile', 'groupInfo', 'checkDirectorySearch', 'createTemporary']);
function respond(value) {
  const encoded = encodeFileMessage(value, { move: true });
  port.postMessage(encoded.message, encoded.transfer);
}
port.on('message', async message => {
  try {
    const { operation, args } = decodeFileMessage(message);
    if (!operations.has(operation)) throw new Error(`Invalid native file operation: ${operation}`);
    let value = await files[operation](...args);
    if (operation === 'open') value = { stream: value.stream, fd: value.fd, type: value.type };
    if (operation === 'createTemporary' && value.file)
      value.file = { stream: value.file.stream, fd: value.file.fd, type: value.file.type };
    respond({ ok: true, value });
  } catch (error) {
    respond({ ok: false, error: { message: error.message,
      code: error.code, errno: error.errno, nativeMessage: error.nativeMessage,
      leanUserError: error.leanUserError, errorOrigin: error.errorOrigin } });
  }
});
