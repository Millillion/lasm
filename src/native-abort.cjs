// Use the host CRT's real abort without the engine's extra fatal-error output.
// This private adapter is called only for a deployed program's C abort().
const { existsSync } = require('node:fs');
const { join, resolve } = require('node:path');
const { constants } = require('node:os');
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
    let restoreDefault;
    if (process.versions.bun && process.platform !== 'win32') {
      const sigaction = library.func('int sigaction(int signal, const void *action, void *previous)');
      const signal = library.func('void *signal(int signal, void *handler)');
      const infoType = ffi.struct({ file: 'str', base: 'void *', name: 'str', address: 'void *' });
      const dladdr = library.func('dladdr', 'int', ['void *', ffi.out(ffi.pointer(infoType))]);
      restoreDefault = () => {
        if (process.listenerCount('SIGABRT')) return;
        // sigaction starts with the handler pointer on the supported 64-bit
        // POSIX ABIs. This buffer covers Linux's 152 bytes and Darwin's 16.
        const action = Buffer.alloc(256), info = {};
        if (sigaction(constants.signals.SIGABRT, null, action) !== 0) return;
        const handler = ffi.decode(action, 'void *');
        // Preserve handlers installed by a native extension. Only Bun's own
        // crash reporter is removed, immediately before intentional abort.
        if (handler && dladdr(handler, info) && info.file
            && resolve(info.file) === resolve(process.execPath))
          signal(constants.signals.SIGABRT, null);
      };
    }
    terminate = () => { restoreDefault?.(); abort(); };
  }
  terminate();
  throw new Error('Native abort unexpectedly returned');
};
