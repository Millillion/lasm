// The direct Node-API Wasm driver (host/native-api.node) in tests: the current
// stand-in's (globalThis.__lasmNativeApi).
module.exports = { open: library => globalThis.__lasmNativeApi.open(library) };
