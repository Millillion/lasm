// Configuration B of the Phase 4 threading prototype (throwaway): Lean's main
// thread is Node's main thread and Wasm suspends on JavaScript promises (JSPI).
// Linked after scripts/full-lean/host-library.js, whose definitions it replaces:
//   - lasm_node_call / lasm_node_start / lasm_node_release on the main thread
//     call the host directly; a promise result suspends the calling Wasm stack.
//     Other Lean threads keep the shared-memory slot RPC.
//   - lasm_jspi_futex_wait: blocking waits of the main thread (Task.wait,
//     IO.wait, mutexes, pthread_join) suspend on Atomics.waitAsync instead of
//     blocking the event loop (with -Wl,--wrap=emscripten_futex_wait).
// Inside a synchronous JS -> Wasm callback nothing can suspend; a promise there
// is an error and a futex wait falls back to blocking (which can deadlock).
addToLibrary({
  // trace is read from the environment once, at the first call (the library
  // object itself is serialized at link time).
  $lasmJspi: { trace: null, syncDepth: 0, suspensions: 0, directCalls: 0, futexSuspensions: 0, blockingFallbacks: 0 },
  $lasmJspiDirect__deps: ['$lasmJspi', '$runtimeKeepalivePush', '$runtimeKeepalivePop'],
  $lasmJspiDirect: function (kind, operation, handle, argument, input, length) {
    lasmJspi.directCalls++;
    lasmJspi.trace ??= process.env.JSPROTO_TRACE ?? '';
    if (lasmJspi.trace) require('node:fs').writeSync(2, `[jspi] direct kind=${kind} op=${operation}\n`);
    var bytes = length ? HEAPU8.slice(input, input + length) : new Uint8Array(0);
    var context = { fiber: Number(_pthread_self()) };
    var settle = function (result) {
      if (result && result.failure !== undefined) throw new Error(result.failure);
      return result;
    };
    var run = function (host) {
      var result = lasmFullDispatch(host, kind, operation, handle, argument, bytes, context);
      return result && result.then ? result.then(settle, function (error) {
        if (error && error.name === 'LeanExit') return lasmFullExit(error);
        throw error;
      }) : settle(result);
    };
    var result = lasmFullHostValue ? run(lasmFullHostValue) : lasmFullLoadHost().then(run);
    if (result && result.then) {
      if (lasmJspi.syncDepth) throw new Error('An asynchronous JavaScript operation cannot complete inside a synchronous callback into Lean');
      lasmJspi.suspensions++;
      // Like Emscripten's Asyncify.handleAsync: while suspended, the runtime
      // must not look idle (otherwise a later callUserCallback exits it).
      runtimeKeepalivePush();
      return result.finally(runtimeKeepalivePop);
    }
    return result;
  },
  lasm_node_call__deps: ['$lasmFullRPC', '$lasmFullClock', '$lasmJspiDirect'],
  lasm_node_call__sig: 'jiijpp',
  lasm_node_call__async: true,
  lasm_node_call: function (operation, handle, argument, input, length) {
    var clock = lasmFullClock.read(operation);
    if (clock) { lasmFullRPC.response = clock; return BigInt(clock.length); }
    if (ENVIRONMENT_IS_PTHREAD) {
      var result = lasmFullRPC.call('request', operation, handle, argument, input, length);
      lasmFullRPC.response = result;
      var size = BigInt(result.length);
      return result.error ? -size - 1n : size;
    }
    var finish = function (result) {
      var bytes = result.bytes || new Uint8Array(0);
      lasmFullRPC.response = bytes instanceof Uint8Array ? bytes : new Uint8Array(bytes);
      var size = BigInt(lasmFullRPC.response.length);
      return result.error ? -size - 1n : size;
    };
    var direct = lasmJspiDirect(0, operation, handle, argument, Number(input), Number(length));
    return direct && direct.then ? direct.then(finish) : finish(direct);
  },
  lasm_node_start__deps: ['$lasmFullRPC', '$lasmJspiDirect'],
  lasm_node_start__sig: 'iiijpp',
  lasm_node_start__async: true,
  lasm_node_start: function (operation, handle, argument, input, length) {
    if (ENVIRONMENT_IS_PTHREAD) {
      var result = lasmFullRPC.call('start', operation, handle, argument, input, length);
      return Number(HEAPU64[result.pointer / 8]);
    }
    var read = function (result) { return Number(Buffer.from(result.bytes).readBigUInt64LE(0)); };
    var direct = lasmJspiDirect(2, operation, handle, argument, Number(input), Number(length));
    return direct && direct.then ? direct.then(read) : read(direct);
  },
  // Finalizers run anywhere (including synchronous callbacks): never suspend.
  lasm_node_release__deps: ['$lasmFullRPC'],
  lasm_node_release__sig: 'vi',
  lasm_node_release: function (handle) {
    if (ENVIRONMENT_IS_PTHREAD) return lasmFullRPC.call('release', 0, handle, 0n, 0, 0);
    var release = function (host) { return host.releaseAsync(handle); };
    if (lasmFullHostValue) Promise.resolve(release(lasmFullHostValue)).catch(function () {});
    else lasmFullLoadHost().then(release).catch(function () {});
  },
  // Diagnostics: a blocking (non-suspending) futex wait.
  lasm_jspi_futex_trace__sig: 'vpid',
  lasm_jspi_futex_trace: function (address, value, milliseconds) {
    lasmJspi.trace ??= process.env.JSPROTO_TRACE ?? '';
    if (lasmJspi.trace && !ENVIRONMENT_IS_PTHREAD) { Error.stackTraceLimit = 200; require('node:fs').writeSync(2, `[jspi] BLOCKING futex ${address} ${value} ${milliseconds} depth=${lasmJspi.syncDepth}\n${new Error().stack}\n`); }
  },
  lasm_jspi_futex_wait__deps: ['$lasmJspi', '$runtimeKeepalivePush', '$runtimeKeepalivePop'],
  lasm_jspi_futex_wait__sig: 'ipid',
  lasm_jspi_futex_wait__async: true,
  lasm_jspi_futex_wait: function (address, value, milliseconds) {
    lasmJspi.trace ??= process.env.JSPROTO_TRACE ?? '';
    if (lasmJspi.trace && !ENVIRONMENT_IS_PTHREAD) require('node:fs').writeSync(2, `[jspi] futex ${address} ${value} ${milliseconds} sync=${lasmJspi.syncDepth}\n${lasmJspi.trace === 'stack' ? new Error().stack + '\n' : ''}`);
    if (ENVIRONMENT_IS_PTHREAD) return -1000;
    if (lasmJspi.syncDepth) { lasmJspi.blockingFallbacks++; return -1000; }
    var wait = Atomics.waitAsync(HEAP32, Number(address) / 4, value, milliseconds === Infinity ? undefined : milliseconds);
    if (!wait.async) return wait.value === 'not-equal' ? -6 : -73;
    lasmJspi.futexSuspensions++;
    // Atomics.waitAsync keeps neither Node's event loop nor Emscripten's
    // runtime alive by itself.
    var keepAlive = setInterval(function () {}, 1 << 30);
    runtimeKeepalivePush();
    return wait.value.then(function (outcome) { clearInterval(keepAlive); runtimeKeepalivePop(); return outcome === 'ok' ? 0 : -73; });
  },
});
