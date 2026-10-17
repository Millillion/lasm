// Opt-in maintainer diagnostic for the Server MVP soak (not a product API).
// Loaded with `node --import <this file> deployed/main.mjs` only when
// LASM_ROBUSTNESS_DIAG names a JSONL file. It records the main thread's
// process.memoryUsage() and the byte length of every WebAssembly.Memory the
// application creates, every LASM_ROBUSTNESS_DIAG_MS (default 2000) ms.
// LASM_ROBUSTNESS_DIAG_WORKERS=1 also samples each worker isolate's V8 heap.
import { isMainThread, threadId } from 'node:worker_threads';
import { getHeapStatistics } from 'node:v8';
import { appendFileSync } from 'node:fs';
import { createRequire } from 'node:module';

const file = process.env.LASM_ROBUSTNESS_DIAG;
if (isMainThread && file) {
  const memories = [];
  const Original = WebAssembly.Memory;
  // Emscripten creates the shared pthread memory with `new WebAssembly.Memory`.
  const Tracked = function Memory(descriptor) {
    const memory = new Original(descriptor);
    memories.push(new WeakRef(memory));
    return memory;
  };
  Tracked.prototype = Original.prototype;
  Object.defineProperty(WebAssembly, 'Memory', { value: Tracked, writable: true, configurable: true });
  // Count pthread workers created and exited (Emscripten uses worker_threads.Worker).
  const threads = createRequire(import.meta.url)('node:worker_threads');
  const workers = { created: 0, exited: 0 };
  try {
    const OriginalWorker = threads.Worker;
    threads.Worker = class extends OriginalWorker {
      constructor(...args) { super(...args); workers.created++; this.once('exit', () => { workers.exited++; }); }
    };
  } catch { /* leave uninstrumented */ }
  const sample = () => {
    const usage = process.memoryUsage();
    const wasmBytes = memories.map(ref => ref.deref()).filter(Boolean)
      .reduce((total, memory) => total + memory.buffer.byteLength, 0);
    try {
      appendFileSync(file, JSON.stringify({ at: Date.now(), rss: usage.rss, heapUsed: usage.heapUsed,
        heapTotal: usage.heapTotal, external: usage.external, arrayBuffers: usage.arrayBuffers,
        wasmMemories: memories.length, wasmBytes, workersCreated: workers.created, workersExited: workers.exited }) + '\n');
    } catch { /* diagnostics never affect the application */ }
  };
  setInterval(sample, Number(process.env.LASM_ROBUSTNESS_DIAG_MS ?? 2000)).unref();
  setTimeout(sample, 200).unref();
} else if (file && process.env.LASM_ROBUSTNESS_DIAG_WORKERS) {
  // Optional per-isolate heap of each pthread worker (each is a V8 isolate).
  const sample = () => {
    const h = getHeapStatistics();
    try {
      appendFileSync(file + '.workers', JSON.stringify({ at: Date.now(), threadId, used: h.used_heap_size,
        total: h.total_heap_size, external: h.external_memory, malloced: h.malloced_memory, contexts: h.number_of_native_contexts }) + '\n');
    } catch {}
  };
  setInterval(sample, Number(process.env.LASM_ROBUSTNESS_DIAG_MS ?? 2000) * 5).unref();
}
