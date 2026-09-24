// Emscripten JavaScript library. A Lean pthread waits while the JavaScript main
// thread continues serving asynchronous filesystem, process, and network calls.
addToLibrary({
  lasm_host_platform__sig: 'i',
  lasm_host_platform: function () {
    return process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0;
  },
  // Capture on the calling Lean pthread, before returning through Wasm. V8 and
  // JavaScriptCore expose actual Wasm frames here. Keep the engine's property
  // descriptor intact after allowing the same 100-frame budget as native Lean.
  lasm_host_backtrace__deps: ['$stringToNewUTF8'],
  lasm_host_backtrace__sig: 'p',
  lasm_host_backtrace: function () {
    var descriptor = Object.getOwnPropertyDescriptor(Error, 'stackTraceLimit');
    var changed = !descriptor || descriptor.configurable;
    try {
      if (changed) Object.defineProperty(Error, 'stackTraceLimit', {
        value: 100, configurable: true, writable: true,
      });
      var stack = new Error().stack;
      return stringToNewUTF8(typeof stack === 'string'
        ? stack.replace(/^Error\n/, '').trimEnd() : '(stack trace unavailable)');
    } finally {
      if (changed) {
        if (descriptor) Object.defineProperty(Error, 'stackTraceLimit', descriptor);
        else delete Error.stackTraceLimit;
      }
    }
  },
  lasm_collect_loaded_libraries__deps: ['$LDSO', '$dynCall', '$stringToNewUTF8', 'free'],
  lasm_collect_loaded_libraries__sig: 'vpp',
  lasm_collect_loaded_libraries: function (context, callback) {
    var emit = (base, name) => {
      var pointer = stringToNewUTF8(name);
      dynCall('vppp', callback, [context, base, pointer]);
      _free({{{ to64('pointer') }}});
    };
    // Wasm closures contain table indices, not ELF code addresses. Dynamic
    // modules store their table allocation in Emscripten's shared dso record.
    emit(0, '');
    for (var key of Object.keys(LDSO.loadedLibsByHandle)) {
      var handle = Number(key);
      if (handle <= 0) continue;
      var size = {{{ makeGetValue('handle', C_STRUCTS.dso.table_size, 'i32') }}};
      if (!size) continue;
      var base = {{{ makeGetValue('handle', C_STRUCTS.dso.table_addr, '*') }}};
      emit(base, LDSO.loadedLibsByHandle[key].name);
    }
  },
  $lasmFullRPC__deps: ['malloc', 'free', 'emscripten_futex_wait'],
  $lasmFullRPC: {
    response: new Uint8Array(0),
    call: function (kind, operation, handle, argument, input, length) {
      if (!ENVIRONMENT_IS_PTHREAD) throw new Error('Lean host calls require PROXY_TO_PTHREAD');
      length = Number(length);
      var wt = require('node:worker_threads');
      var nativeThreadId;
      if (operation === 37) {
        var path = require('node:url').fileURLToPath(new URL('./thread-id.cjs', process.env.LASM_FULL_HOST_MODULE));
        nativeThreadId = require(path)();
      }
      var channel = new wt.MessageChannel();
      // Wait through Emscripten's futex implementation, which also services the
      // pthread mailbox. A raw Atomics.wait on a separate buffer starves dylink
      // synchronization indefinitely when this thread waits for host IO.
      var signalPointer = _malloc({{{ to64('4') }}});
      if (!signalPointer) throw new Error('Cannot allocate Lean host wait signal');
      var signal = new Int32Array(wasmMemory.buffer, Number(signalPointer), 1);
      Atomics.store(signal, 0, 0);
      var bytes = length ? HEAPU8.slice(Number(input), Number(input) + length) : new Uint8Array(0);
      // CMD_CALL_HANDLER is Emscripten 6.0.9's documented-in-source dispatch to a
      // Module callback. Transfer the reply port, never the Wasm memory itself.
      wt.parentPort.postMessage({ cmd: 9, handler: 'lasmFullHostRequest', args: [{
        // Send the numeric offset, not the typed view. Some engine structured
        // cloners truncate a typed array's byteOffset above 4 GiB. The parent
        // already owns this shared Wasm memory and can construct its own view.
        // Deno's synchronous port receiver recursively enumerates typed-array
        // indices. Send the backing store and numeric view bounds instead.
        kind, operation, handle, argument, byteBuffer: bytes.buffer,
        byteOffset: bytes.byteOffset, byteLength: bytes.byteLength,
        signalPointer: Number(signalPointer), port: channel.port2,
        thread: Number(_pthread_self()),
        nativeThreadId,
      }] }, [channel.port2, bytes.buffer]);
      var packet;
      try {
        while (Atomics.load(signal, 0) === 0) _emscripten_futex_wait(signalPointer, 0, Infinity);
        while (!(packet = wt.receiveMessageOnPort(channel.port1))) _emscripten_futex_wait(signalPointer, 1, 1);
      } finally {
        channel.port1.close();
        _free(signalPointer);
      }
      if (packet.message.failure) throw new Error(packet.message.failure);
      if (packet.message.byteBuffer !== undefined) {
        packet.message.bytes = new Uint8Array(packet.message.byteBuffer,
          packet.message.byteOffset, packet.message.byteLength);
      }
      return packet.message;
    },
  },
  lasm_node_call__deps: ['$lasmFullRPC'],
  lasm_node_call__sig: 'jiijpp',
  lasm_node_call: function (operation, handle, argument, input, length) {
    var result = lasmFullRPC.call('request', operation, handle, argument, input, length);
    lasmFullRPC.response = result.bytes;
    var length = BigInt(result.bytes.length);
    return result.error ? -length - 1n : length;
  },
  lasm_node_copy__deps: ['$lasmFullRPC'],
  lasm_node_copy__sig: 'vpp',
  lasm_node_copy: function (output, length) {
    if (Number(length) !== lasmFullRPC.response.length) throw new Error('Mismatched Lean host response size');
    HEAPU8.set(lasmFullRPC.response, Number(output));
    lasmFullRPC.response = new Uint8Array(0);
  },
  lasm_node_start__deps: ['$lasmFullRPC'],
  lasm_node_start__sig: 'iiijpp',
  lasm_node_start: function (operation, handle, argument, input, length) {
    return lasmFullRPC.call('start', operation, handle, argument, input, length).id;
  },
  lasm_node_release__deps: ['$lasmFullRPC'],
  lasm_node_release__sig: 'vi',
  lasm_node_release: function (handle) {
    lasmFullRPC.call('release', 0, handle, 0n, 0, 0);
  },
  lasm_fiber_current__sig: 'i',
  lasm_fiber_current: function () { return Number(_pthread_self()); },
});
