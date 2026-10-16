// Use the host CRT's real abort without the engine's extra fatal-error output.
// This private adapter is called only for a deployed program's C abort().
const { existsSync } = require('node:fs');
const { join } = require('node:path');
let terminate;
module.exports = function nativeAbort() {
  if (!terminate) {
    const bundled = join(__dirname, 'native/node_modules/koffi/index.cjs');
    const ffi = existsSync(bundled) ? require(bundled) : require('koffi');
    // Resolve the CRT explicitly: the engine may interpose its own abort symbol
    // in the process-global namespace and print an unrelated engine crash report.
    const library = ffi.load(process.platform === 'win32' ? 'ucrtbase.dll'
      : process.platform === 'darwin' ? '/usr/lib/libSystem.B.dylib' : 'libc.so.6');
    const abort = library.func('void abort(void)');
    terminate = () => abort();
  }
  terminate();
  throw new Error('Native abort unexpectedly returned');
};
