// Emscripten 6.0.9 treats an existing global postMessage as evidence that
// node:worker_threads messages reach globalThis.onmessage. Bun 1.4.2 instead
// delivers them through parentPort. Let Emscripten install its Node bridge.
// Applied only to pthread workers, before runtime_pthread.js installs handlers.
if (globalThis.process?.versions?.bun && ENVIRONMENT_IS_PTHREAD) {
  globalThis.postMessage = undefined;
}

// Wasm's value/control stack belongs to the JS engine, independently of Lean's
// C stack in linear memory. Node's default 4 MiB worker stack can overflow while
// Lean still has ample C stack (for example, finalizing channel continuations).
// Deno also supports this worker option. Bun does not; do not pretend otherwise.
if (ENVIRONMENT_IS_NODE) {
  var LasmHostWorker = globalThis.Worker;
  var lasmWorkerHost = process.env.LASM_FULL_HOST_MODULE;
  var LasmCwdWorker, lasmCwdWorkerError;
  if (process.versions.deno && process.platform === 'linux' && !ENVIRONMENT_IS_PTHREAD && lasmWorkerHost) {
    try {
      LasmCwdWorker = require(require('node:url').fileURLToPath(new URL('./native-pthread-factory.cjs', lasmWorkerHost)))
        .createCwdWorkerFactory();
    } catch (error) {
      // Some Linux sandboxes deny unshare(CLONE_FS). Ordinary worker creation
      // remains available; report the missing capability only if needed.
      lasmCwdWorkerError = error;
    }
  }
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
        && (/wasm-function|wasm:\/\//.test(failure.stack ?? '')
          || (process.versions.bun && event === 'message' && args[0]?.cmd === 8))) lasmStackOverflow();
  };
  globalThis.Worker = class extends LasmHostWorker {
    constructor(filename, options = {}) {
      if (process.versions.bun && process.env.LASM_BUN_SMOL === "1") options = { ...options, smol: true };
      if (!process.versions.bun) options = {
        ...options, resourceLimits: { ...options.resourceLimits, stackSizeMb: lasmVmStackMb } };
      if (!process.versions.bun && !process.versions.deno && lasmWorkerHost) {
        options = { ...options, execArgv: [...(options.execArgv ?? process.execArgv), '--require',
          require('node:url').fileURLToPath(new URL('./native-worker-cwd.cjs', lasmWorkerHost))] };
      }
      if (LasmCwdWorker || lasmCwdWorkerError) {
        var removed = false;
        try { Deno.cwd(); } catch (error) {
          if (error.name !== 'NotFound' && error.code !== 'ENOENT') throw error;
          removed = true;
        }
        if (removed) {
          if (lasmCwdWorkerError) throw lasmCwdWorkerError;
          var worker = new LasmCwdWorker(filename, options), originalEmit = worker.emit;
          worker.emit = function(event, ...args) {
            lasmCheckWorkerFailure(event, args); return originalEmit.call(this, event, ...args);
          };
          return worker;
        }
      }
      super(filename, options);
    }
    emit(event, ...args) {
      // Emscripten reports a caught worker exception as CMD_ONERROR (8),
      // whereas the engine reports an uncaught worker exception as 'error'.
      // Native Lean's guard aborts with this diagnostic on an exhausted stack.
      // Preserve that behavior for uncaught engine stack exhaustion in Wasm,
      // while leaving unrelated JavaScript errors and Lean exceptions intact.
      // Bun 1.4.2 renders Wasm frames as `unknown`; structured cloning then
      // loses that stack. CMD_UNCAUGHT_EXN still identifies its pthread failure.
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
