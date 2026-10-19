// Emscripten JavaScript library. A Lean pthread waits while the JavaScript main
// thread continues serving asynchronous filesystem, process, and network calls.
addToLibrary({
  // Emscripten's libc abort otherwise throws a JavaScript RuntimeError. Proxy
  // synchronously so the main thread terminates the complete native process.
  _abort_js__sig: 'v',
  _abort_js__proxy: 'sync',
  _abort_js: function () {
    var path = require('node:url').fileURLToPath(new URL('./native-abort.cjs', process.env.LASM_FULL_HOST_MODULE));
    require(path)();
  },
  lasm_host_platform__sig: 'i',
  lasm_host_platform: function () {
    return process.platform === 'win32' ? 1 : process.platform === 'darwin' ? 2 : 0;
  },
  // Capture on the calling Lean pthread, before returning through Wasm. V8
  // exposes actual Wasm frames here. Keep the engine's property
  // descriptor intact after allowing the same 100-frame budget as native Lean.
  lasm_host_backtrace__deps: ['$stringToNewUTF8'],
  lasm_host_backtrace__sig: 'p',
  lasm_host_backtrace: function () {
    var descriptor = Object.getOwnPropertyDescriptor(Error, 'stackTraceLimit');
    var changed = !descriptor || descriptor.configurable;
    var assignLimit = !descriptor || descriptor.writable || descriptor.set;
    var oldLimit = Error.stackTraceLimit;
    try {
      if (changed) {
        if (assignLimit) Error.stackTraceLimit = 100;
        else Object.defineProperty(Error, 'stackTraceLimit', {
          value: 100, configurable: true, writable: true,
        });
      }
      var stack = new Error().stack;
      return stringToNewUTF8(typeof stack === 'string'
        ? stack.replace(/^Error\n/, '').trimEnd() : '(stack trace unavailable)');
    } finally {
      if (changed) {
        if (assignLimit) Error.stackTraceLimit = oldLimit;
        else Object.defineProperty(Error, 'stackTraceLimit', descriptor);
        if (!descriptor) delete Error.stackTraceLimit;
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
  // Lean→host calls use a request/reply slot in shared Wasm memory, one per
  // thread and nesting depth. Layout (byte offsets, little endian):
  //   0 i32 request sequence (incremented by this thread; the host waits on it)
  //   4 i32 reply ready (0 while pending, 1 when the host has replied)
  //   8 i32 kind (0 request, 1 release, 2 start, 3 copy a large reply)
  //  12 i32 operation  16 u32 handle  20 i32 reply status
  //     (0 ok, 1 Lean IO error, 2 host failure message, 3 reply larger than the buffer)
  //  24 u64 argument  32 u64 input pointer  40 u64 input length
  //  48 u64 reply buffer pointer  56 u64 reply buffer capacity  64 u64 reply length
  //  72 u64 calling pthread  80 u64 native thread id  88 i32 native thread id present
  // Requests are read and replies written in place: nothing is cloned or
  // transferred. A reply that does not fit is kept by the host until this
  // thread has grown its buffer and asked for it (kind 3). The host registers
  // each slot once (CMD_CALL_HANDLER message) and then waits on its sequence
  // with Atomics.waitAsync. This thread waits through Emscripten's futex
  // implementation, which also services the pthread mailbox; a raw
  // Atomics.wait would starve dylink synchronization. A call nested in that
  // wait (a serviced mailbox task) uses the next depth's slot.
  $lasmFullRPC__deps: ['malloc', 'free', 'emscripten_futex_wait'],
  $lasmFullRPC: {
    response: null,
    slots: null,
    depth: 0,
    slotBytes: 96,
    replyBytes: 65536,
    newSlot: function () {
      var slot = Number(_malloc(lasmFullRPC.slotBytes));
      var buffer = Number(_malloc(lasmFullRPC.replyBytes));
      if (!slot || !buffer) throw new Error('Cannot allocate a Lean host call slot');
      HEAPU8.fill(0, slot, slot + lasmFullRPC.slotBytes);
      HEAPU64[(slot + 48) / 8] = BigInt(buffer);
      HEAPU64[(slot + 56) / 8] = BigInt(lasmFullRPC.replyBytes);
      require('node:worker_threads').parentPort.postMessage({ cmd: 9, handler: 'lasmFullHostSlot', args: [slot] });
      return slot;
    },
    exchange: function (slot, kind, operation, handle, argument, input, length) {
      HEAP32[(slot + 8) / 4] = kind;
      HEAP32[(slot + 12) / 4] = operation;
      HEAPU32[(slot + 16) / 4] = handle;
      HEAPU64[(slot + 24) / 8] = BigInt.asUintN(64, BigInt(argument));
      HEAPU64[(slot + 32) / 8] = BigInt(input);
      HEAPU64[(slot + 40) / 8] = BigInt(length);
      HEAPU64[(slot + 72) / 8] = BigInt(_pthread_self());
      Atomics.store(HEAP32, (slot + 4) / 4, 0);
      Atomics.add(HEAP32, slot / 4, 1);
      Atomics.notify(HEAP32, slot / 4);
      while (Atomics.load(HEAP32, (slot + 4) / 4) === 0) _emscripten_futex_wait(slot + 4, 0, Infinity);
      return HEAP32[(slot + 20) / 4];
    },
    call: function (kind, operation, handle, argument, input, length) {
      if (!ENVIRONMENT_IS_PTHREAD) throw new Error('Lean host calls require PROXY_TO_PTHREAD');
      var code = { request: 0, release: 1, start: 2 }[kind];
      var depth = lasmFullRPC.depth++;
      try {
        lasmFullRPC.slots ??= [];
        var slot = lasmFullRPC.slots[depth] ??= lasmFullRPC.newSlot();
        if (operation === 37) {
          var path = require('node:url').fileURLToPath(new URL('./thread-id.cjs', process.env.LASM_FULL_HOST_MODULE));
          HEAPU64[(slot + 80) / 8] = BigInt.asUintN(64, BigInt(require(path)()));
          HEAP32[(slot + 88) / 4] = 1;
        } else HEAP32[(slot + 88) / 4] = 0;
        var status = lasmFullRPC.exchange(slot, code, operation, handle, argument, Number(input), Number(length));
        var size = Number(HEAPU64[(slot + 64) / 8]);
        if (status === 3) {
          // Grow this slot's reply buffer once and keep it for later replies.
          var buffer = Number(_malloc(size));
          if (!buffer) throw new Error('Cannot allocate a Lean host reply buffer');
          _free(Number(HEAPU64[(slot + 48) / 8]));
          HEAPU64[(slot + 48) / 8] = BigInt(buffer);
          HEAPU64[(slot + 56) / 8] = BigInt(size);
          status = lasmFullRPC.exchange(slot, 3, 0, 0, 0, 0, 0);
        }
        var pointer = Number(HEAPU64[(slot + 48) / 8]);
        if (status === 2) throw new Error(new TextDecoder().decode(HEAPU8.slice(pointer, pointer + size)));
        return { error: status === 1, pointer: pointer, length: size };
      } finally {
        lasmFullRPC.depth--;
      }
    },
  },
  lasm_node_call__deps: ['$lasmFullRPC', '$lasmFullClock'],
  lasm_node_call__sig: 'jiijpp',
  lasm_node_call: function (operation, handle, argument, input, length) {
    var clock = lasmFullClock.read(operation);
    if (clock) {
      lasmFullRPC.response = clock;
      return BigInt(clock.length);
    }
    var result = lasmFullRPC.call('request', operation, handle, argument, input, length);
    // The reply stays in this thread's slot buffer until lasm_node_copy, which
    // the runtime calls next on this thread without another host call.
    lasmFullRPC.response = result;
    var length = BigInt(result.length);
    return result.error ? -length - 1n : length;
  },
  lasm_node_copy__deps: ['$lasmFullRPC'],
  lasm_node_copy__sig: 'vpp',
  lasm_node_copy: function (output, length) {
    var response = lasmFullRPC.response;
    lasmFullRPC.response = null;
    if (!response || Number(length) !== response.length) throw new Error('Mismatched Lean host response size');
    if (response instanceof Uint8Array) HEAPU8.set(response, Number(output));
    else HEAPU8.copyWithin(Number(output), response.pointer, response.pointer + response.length);
  },
  lasm_node_start__deps: ['$lasmFullRPC'],
  lasm_node_start__sig: 'iiijpp',
  lasm_node_start: function (operation, handle, argument, input, length) {
    var result = lasmFullRPC.call('start', operation, handle, argument, input, length);
    return Number(HEAPU64[result.pointer / 8]);
  },
  lasm_node_release__deps: ['$lasmFullRPC'],
  lasm_node_release__sig: 'vi',
  lasm_node_release: function (handle) {
    lasmFullRPC.call('release', 0, handle, 0n, 0, 0);
  },
  // Clocks read on the calling Lean thread, without a host round trip, from
  // the same sources and with the same encoding as src/node-host.mjs:
  // process.hrtime (libuv uv_hrtime, one process-wide monotonic clock) and
  // native-clock.mjs (the native realtime clock). Undefined: ask the host.
  $lasmFullClock: {
    wall: null,
    loaded: false,
    read: function (operation) {
      var numbers = function () {
        var view = new DataView(new ArrayBuffer(arguments.length * 8));
        for (var i = 0; i < arguments.length; i++) view.setBigUint64(i * 8, BigInt.asUintN(64, arguments[i]), true);
        return new Uint8Array(view.buffer);
      };
      if (operation === 25) return numbers(process.hrtime.bigint() / 1000000n);
      if (operation === 26) return numbers(process.hrtime.bigint());
      if (operation !== 27) return undefined;
      if (!lasmFullClock.loaded) {
        lasmFullClock.loaded = true;
        try {
          var path = require('node:url').fileURLToPath(new URL('./native-clock.mjs', process.env.LASM_FULL_HOST_MODULE));
          lasmFullClock.wall = require(path).nativeClock();
        } catch (error) { /* keep using the host */ }
      }
      if (!lasmFullClock.wall) return undefined;
      var ns;
      // Clock errors keep the host's Lean error encoding.
      try { ns = lasmFullClock.wall.now(); } catch (error) { return undefined; }
      return numbers(ns / 1000000000n, ns % 1000000000n);
    },
  },
  lasm_fiber_current__sig: 'i',
  lasm_fiber_current: function () { return Number(_pthread_self()); },
});
