// This synchronous helper runs in the actual JavaScript thread executing Lean.
// Node worker_threads.threadId and Wasm pthread pointers are not native OS IDs.
const { existsSync } = require('node:fs');
const { join } = require('node:path');
let getId;
module.exports = function nativeThreadId() {
  if (!getId) {
    const bundled = join(__dirname, 'native/node_modules/koffi/index.cjs');
    const ffi = existsSync(bundled) ? require(bundled) : require('koffi');
    if (process.platform === 'win32') {
      const library = ffi.load('kernel32.dll');
      const call = library.func('uint32_t __stdcall GetCurrentThreadId()');
      getId = () => BigInt(call());
    } else if (process.platform === 'darwin') {
      const library = ffi.load('/usr/lib/libSystem.B.dylib');
      const call = library.func('int pthread_threadid_np(void *thread, _Out_ uint64_t *id)');
      getId = () => { const id = [0]; if (call(null, id)) throw new Error('pthread_threadid_np failed'); return BigInt(id[0]); };
    } else {
      const library = ffi.load(null);
      try {
        const call = library.func('int gettid()');
        getId = () => BigInt(call());
      } catch (error) {
        // Linux syscall ABI for the two supported native architectures. This
        // fallback covers glibc 2.28/2.29, before the gettid wrapper was added.
        const number = { x64: 186, arm64: 178 }[process.arch];
        if (number === undefined) throw error;
        const call = library.func('syscall', 'long', ['long']);
        getId = () => BigInt(call(number));
      }
    }
  }
  return getId();
};
