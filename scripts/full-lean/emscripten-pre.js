// Emscripten 6.0.9 treats an existing global postMessage as evidence that
// node:worker_threads messages reach globalThis.onmessage. Bun 1.4.2 instead
// delivers them through parentPort. Let Emscripten install its Node bridge.
// Applied only to pthread workers, before runtime_pthread.js installs handlers.
if (globalThis.process?.versions?.bun && ENVIRONMENT_IS_PTHREAD) {
  globalThis.postMessage = undefined;
}

// Emscripten preloads DT_NEEDED libraries before its libc loader can search
// LD_LIBRARY_PATH. Lake supplies that path when running an executable. Resolve
// it from the host at this early stage, preserving normal library precedence.
if (ENVIRONMENT_IS_NODE) {
  var lasmPreviousLocateFile = Module.locateFile;
  Module.locateFile = function(name, directory) {
    var path = require('node:path');
    if (!path.isAbsolute(name) && /\.(so(?:\.\d+)*|dylib|dll)$/.test(name)) {
      var variable = process.platform === 'win32' ? 'PATH'
        : process.platform === 'darwin' ? 'DYLD_LIBRARY_PATH' : 'LD_LIBRARY_PATH';
      for (var base of (process.env[variable] ?? '').split(path.delimiter)) {
        if (!base) continue;
        var candidate = path.resolve(base, name);
        try { if (require('node:fs').statSync(candidate).isFile()) return candidate; } catch {}
      }
    }
    return lasmPreviousLocateFile ? lasmPreviousLocateFile(name, directory) : directory + name;
  };
}
