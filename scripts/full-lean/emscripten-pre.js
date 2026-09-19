// Emscripten 6.0.9 treats an existing global postMessage as evidence that
// node:worker_threads messages reach globalThis.onmessage. Bun 1.4.2 instead
// delivers them through parentPort. Let Emscripten install its Node bridge.
// Applied only to pthread workers, before runtime_pthread.js installs handlers.
if (globalThis.process?.versions?.bun && ENVIRONMENT_IS_PTHREAD) {
  globalThis.postMessage = undefined;
}
