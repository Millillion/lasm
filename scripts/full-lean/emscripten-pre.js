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
  // Workers accept only per-thread Node options in execArgv. Per-process V8 and
  // Node options (--max-old-space-size, --stack-size, --expose-gc, --jitless,
  // --title, ...) make the Worker constructor throw ERR_WORKER_INVALID_EXEC_ARGV,
  // although they already apply process-wide (V8 flags are global). Node names
  // the rejected options in that error; drop them (with a separate value
  // argument, which in execArgv is a token not starting with '-') and retry.
  // The filtered list is kept for every later worker.
  var lasmForwardedExecArgv;
  var lasmDropExecArgv = function(argv, rejected) {
    var result = [];
    for (var i = 0; i < argv.length; i++) {
      if (!rejected.includes(argv[i])) { result.push(argv[i]); continue; }
      if (!argv[i].includes('=')) while (i + 1 < argv.length && !argv[i + 1].startsWith('-')) i++;
    }
    return result;
  };
  var LasmWorker = class extends LasmHostWorker {
    constructor(filename, options = {}) {
      options = {
        ...options, resourceLimits: { ...options.resourceLimits, stackSizeMb: lasmVmStackMb } };
      if (lasmWorkerHost) {
        options = { ...options, stdout: true, stderr: true,
          execArgv: [...(options.execArgv ?? lasmForwardedExecArgv ?? process.execArgv), '--require',
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
  globalThis.Worker = function Worker(filename, options = {}) {
    for (var attempt = 0; ; attempt++) {
      try { return new LasmWorker(filename, options); }
      catch (error) {
        var listed = error?.code === 'ERR_WORKER_INVALID_EXEC_ARGV' && options.execArgv === undefined && attempt < 2
          && /invalid execArgv flags: (.+)$/.exec(String(error.message));
        if (!listed) throw error;
        var rejected = listed[1].split(', ');
        var current = lasmForwardedExecArgv ?? process.execArgv;
        var next = lasmDropExecArgv(current, rejected);
        if (next.length === current.length) throw error;
        lasmForwardedExecArgv = next;
      }
    }
  };
  globalThis.Worker.prototype = LasmWorker.prototype;
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

// Package C code (extern_lib) uses Emscripten's raw Node file system. POSIX C
// libraries such as SQLite build absolute paths by putting '/' before getcwd(),
// which on Windows is "D:\..." (giving "/D:\..."). Present the working directory
// to C as "/D:/..." and map such paths back to "D:/..." for Node. Lean's own
// file operations use Lasm's host and are unaffected.
if (ENVIRONMENT_IS_NODE && process.platform === 'win32') {
  Module['preRun'] = [].concat(Module['preRun'] || [], function lasmWindowsCPaths() {
    var drive = function (path) {
      return typeof path === 'string' && /^\/[A-Za-z]:(?:[\\/]|$)/.test(path) ? path.slice(1) : path;
    };
    FS.cwd = function () { return '/' + process.cwd().replace(/\\/g, '/'); };
    ['lookupPath', 'stat', 'lstat', 'open', 'mkdir', 'readdir', 'rmdir', 'unlink', 'readlink', 'chmod', 'lchmod',
      'chown', 'lchown', 'utime', 'truncate', 'mknod', 'analyzePath', 'findObject'].forEach(function (name) {
      var original = FS[name];
      if (typeof original === 'function') FS[name] = function (path) {
        var args = Array.prototype.slice.call(arguments); args[0] = drive(path); return original.apply(this, args);
      };
    });
    ['rename', 'symlink'].forEach(function (name) {
      var original = FS[name];
      if (typeof original === 'function') FS[name] = function (a, b) {
        var args = Array.prototype.slice.call(arguments); args[0] = drive(a); args[1] = drive(b); return original.apply(this, args);
      };
    });
  });
}
