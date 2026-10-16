// Wasm's value/control stack belongs to the JS engine, independently of Lean's
// C stack in linear memory. Node's default 4 MiB worker stack can overflow while
// Lean still has ample C stack (for example, finalizing channel continuations).
if (ENVIRONMENT_IS_NODE) {
  var LasmHostWorker = globalThis.Worker;
  var lasmWorkerHost = process.env.LASM_FULL_HOST_MODULE;
  var lasmVmStackMb = Number(process.env.LASM_VM_STACK_MB ?? 64);
  if (!Number.isFinite(lasmVmStackMb) || lasmVmStackMb <= 0) throw new Error('Invalid LASM_VM_STACK_MB');
  var lasmStackOverflow = function() {
    require('node:fs').writeSync(2, '\nStack overflow detected. Aborting.\n');
    process.exit(134);
  };
  var lasmCheckWorkerFailure = function(event, args) {
    // Emscripten reports caught pthread exceptions as CMD_ONERROR (8).
    var failure = event === 'message' && args[0]?.cmd === 8 ? args[0].error
      : event === 'error' ? args[0] : undefined;
    if (failure?.name === 'RangeError'
        && /call stack|stack overflow/i.test(failure.message)
        && /wasm-function|wasm:\/\//.test(failure.stack ?? '')) lasmStackOverflow();
  };
  globalThis.Worker = class extends LasmHostWorker {
    constructor(filename, options = {}) {
      options = {
        ...options, resourceLimits: { ...options.resourceLimits, stackSizeMb: lasmVmStackMb } };
      if (lasmWorkerHost) {
        options = { ...options, stdout: true, stderr: true,
          execArgv: [...(options.execArgv ?? process.execArgv), '--require',
          require('node:url').fileURLToPath(new URL('./native-worker-cwd.cjs', lasmWorkerHost))] };
      }
      super(filename, options);
      if (lasmWorkerHost) {
        require(require('node:url').fileURLToPath(new URL('./worker-stdio.cjs', lasmWorkerHost)))(this);
      }
    }
    emit(event, ...args) {
      // Emscripten reports a caught worker exception as CMD_ONERROR (8),
      // whereas the engine reports an uncaught worker exception as 'error'.
      // Native Lean's guard aborts with this diagnostic on an exhausted stack.
      // Preserve that behavior for uncaught engine stack exhaustion in Wasm,
      // while leaving unrelated JavaScript errors and Lean exceptions intact.
      lasmCheckWorkerFailure(event, args);
      return super.emit(event, ...args);
    }
  };
  Module.lasmFatalStackOverflow = lasmStackOverflow;
  var lasmPreviousOnAbort = Module.onAbort;
  Module.onAbort = function(reason) {
    if (/^stack overflow/i.test(String(reason))) {
      if (ENVIRONMENT_IS_PTHREAD) {
        require('node:worker_threads').parentPort.postMessage({ cmd: 9, handler: 'lasmFatalStackOverflow', args: [] });
        throw 'unwind';
      }
      lasmStackOverflow();
    }
    lasmPreviousOnAbort?.(reason);
  };
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
      var searchPaths = [...(process.env[variable] ?? '').split(path.delimiter).filter(Boolean),
        ...(Module.lasmRuntimeLibraryPaths ?? [])];
      for (var base of searchPaths) {
        base = base.replace(/\$\{ORIGIN\}|\$ORIGIN\b|@(?:executable|loader)_path/g, __dirname);
        var candidate = path.resolve(base, name);
        try { if (require('node:fs').statSync(candidate).isFile()) return candidate; } catch {}
      }
    }
    return lasmPreviousLocateFile ? lasmPreviousLocateFile(name, directory) : directory + name;
  };
}
