// The FFI library as src/ sees it in tests (index.mjs). Node caches CommonJS
// resolution per directory, so every host file of src/ gets this module; the
// Wasmtime host files (the property's reader, found on the stack) get the
// current stand-in's properties (globalThis.__lasmKoffi), the others (Node's
// host: native-files, thread ids, signals) the real library's.
const real = require('koffi');
const reader = () => {
  const limit = Error.stackTraceLimit;
  Error.stackTraceLimit = 3;
  try { return new Error().stack.split('\n')[3] ?? ''; } finally { Error.stackTraceLimit = limit; }
};
module.exports = new Proxy({}, { get: (_, key) => {
  const standIn = globalThis.__lasmKoffi;
  return standIn && key in standIn && /[/\\]wasmtime-[a-z-]+\.mjs/.test(reader()) ? standIn[key] : real[key];
} });
