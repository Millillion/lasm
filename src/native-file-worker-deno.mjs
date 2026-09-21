// Deno's Node bootstrap uses cwd when a worker has no mainModule. Supply this
// private worker's own absolute module URL before importing any Node module.
// Nothing changes the real OS cwd or the main thread's Deno namespace.
Object.defineProperty(Deno, 'mainModule', { value: import.meta.url, configurable: true });
const waiting = [];
const queue = event => waiting.push(event.data);
addEventListener('message', queue);
globalThis.Buffer = (await import('node:buffer')).Buffer;
await import('./native-file-worker.mjs');
removeEventListener('message', queue);
for (const data of waiting) dispatchEvent(new MessageEvent('message', { data }));
