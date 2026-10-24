// Emscripten JavaScript library of Lasm's edge profile (Phase 7, docs/EDGE.md):
// the Lean runtime's host imports on one thread, without SharedArrayBuffer.
// Host calls go straight to Module.lasmEdge (edge-pre.js), which owns the
// JavaScript host (edge-host.mjs) and the event queue.
addToLibrary({
  // WASI random_get (mimalloc and libc++ seed themselves from it in static
  // constructors). Cloudflare Workers forbid generating random values in the
  // global scope, where the program starts: there a fallback generator fills
  // the bytes, which only seeds allocator hardening, never Lean's IO.getRandomBytes
  // (host operation 28 uses crypto.getRandomValues and fails clearly there).
  random_get__sig: 'ipp',
  random_get: (buffer, size) => {
    buffer = Number(buffer); size = Number(size);
    try { for (let i = 0; i < size; i += 65536) crypto.getRandomValues(HEAPU8.subarray(buffer + i, buffer + Math.min(size, i + 65536))); }
    catch {
      let x = (Date.now() ^ Math.floor(performance.now() * 1000) ^ 0x9e3779b9) >>> 0 || 1;
      for (let i = 0; i < size; i++) { x ^= x << 13; x >>>= 0; x ^= x >>> 17; x ^= x << 5; x >>>= 0; HEAPU8[buffer + i] = x & 255; }
    }
    return 0;
  },
  lasm_edge_initialized__sig: 'v',
  lasm_edge_initialized: () => Module.lasmEdge.initialized(),
  lasm_host_platform__sig: 'i',
  lasm_host_platform: () => 0,
  lasm_fiber_current__sig: 'i',
  lasm_fiber_current: () => 1,
  lasm_host_backtrace__deps: ['$stringToNewUTF8'],
  lasm_host_backtrace__sig: 'p',
  lasm_host_backtrace: () => {
    var stack = new Error().stack;
    return stringToNewUTF8(typeof stack === 'string' ? stack.replace(/^Error\n/, '').trimEnd() : '(stack trace unavailable)');
  },
  lasm_collect_loaded_libraries__deps: ['$stringToNewUTF8', 'free', '$dynCall'],
  lasm_collect_loaded_libraries__sig: 'vpp',
  lasm_collect_loaded_libraries: (context, callback) => {
    var pointer = stringToNewUTF8('');
    dynCall('vppp', callback, [context, 0, pointer]);
    _free(pointer);
  },
  // Synchronous host call. A host operation that completes asynchronously
  // (returns a promise) is kept and reported as pending (INT64_MIN); the
  // runtime then calls lasm_edge_await_call, which can suspend.
  lasm_node_call__sig: 'jiijpp',
  lasm_node_call: (operation, handle, argument, input, length) => Module.lasmEdge.call(operation, handle, argument, Number(input), Number(length)),
  lasm_node_copy__sig: 'vpp',
  lasm_node_copy: (output, length) => Module.lasmEdge.copy(Number(output), Number(length)),
  lasm_node_release__sig: 'vi',
  lasm_node_release: (handle) => Module.lasmEdge.release(handle),
  lasm_node_start__sig: 'iiijpp',
  lasm_node_start: () => { throw new Error('lasm_node_start is not used by the edge runtime'); },
  // 1 when Lean may suspend now (JSPI build, inside a promising entry, not in a
  // synchronous JavaScript callback). Checked before lasm_edge_wait: calling a
  // suspending import with JavaScript frames on the stack throws SuspendError.
  lasm_edge_can_wait__sig: 'i',
  lasm_edge_can_wait: () => Module.lasmEdge.canSuspend() ? 1 : 0,
#if JSPI || ASYNCIFY
  lasm_edge_await_call__async: 'auto',
  lasm_edge_await_call__sig: 'j',
  lasm_edge_await_call: () => Module.lasmEdge.awaitCall(),
  lasm_edge_wait__async: 'auto',
  lasm_edge_wait__sig: 'i',
  lasm_edge_wait: () => Module.lasmEdge.wait(),
#else
  lasm_edge_await_call__sig: 'j',
  lasm_edge_await_call: () => Module.lasmEdge.cannotAwait(),
  lasm_edge_wait__sig: 'i',
  lasm_edge_wait: () => 0,
#endif
});
