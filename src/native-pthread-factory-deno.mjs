// Initialize this private worker's Node compatibility without consulting cwd.
Object.defineProperty(Deno, 'mainModule', { value: import.meta.url, configurable: true });
addEventListener('message', async function initialize(event) {
  removeEventListener('message', initialize);
  const data = event.data, ready = new Int32Array(data.ready, 0, 2);
  try {
    const { default: factory } = await import('./native-pthread-factory.cjs');
    factory.runCwdFactory(data, {
      on(_event, callback) { addEventListener('message', event => callback(event.data)); },
      postMessage(value, transfer) { globalThis.postMessage(value, transfer); },
    });
  } catch (error) {
    const bytes = new TextEncoder().encode(error.message).subarray(0, data.ready.byteLength - 8);
    new Uint8Array(data.ready, 8, bytes.length).set(bytes);
    Atomics.store(ready, 1, bytes.length); Atomics.store(ready, 0, -1); Atomics.notify(ready, 0);
  }
});
