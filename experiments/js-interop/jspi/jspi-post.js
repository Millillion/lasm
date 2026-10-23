// Configuration B (JSPI) prototype: JavaScript entry points into Lean closures
// registered by experiments/js-interop/proto/c/jsproto.c.
if (!ENVIRONMENT_IS_PTHREAD) {
  // Asynchronous callback: a promising export, so the Lean closure may suspend.
  globalThis.__jsprotoInvoke = async function (slot, text) {
    var bytes = Buffer.from(text);
    var input = _malloc(bytes.length + 1), failed = _malloc(4);
    HEAPU8.set(bytes, input);
    try {
      // MEMORY64: the promising export is not wrapped for pointer conversion.
      var output = Number(await _jsproto_invoke_async(slot, BigInt(input), BigInt(bytes.length), BigInt(failed)));
      var result = UTF8ToString(output);
      _free(output);
      if (HEAP32[failed / 4]) throw new Error(result);
      return result;
    } finally { _free(input); _free(failed); }
  };
  // Synchronous callback: nothing below it may suspend.
  globalThis.__jsprotoCompare = function (a, b) {
    lasmJspi.syncDepth++;
    try { return _jsproto_compare(a, b); } finally { lasmJspi.syncDepth--; }
  };
  globalThis.__jsprotoJspiStats = function () { return { ...lasmJspi }; };
}
