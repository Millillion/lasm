import { workerData } from 'node:worker_threads';
import { runWasmtimeMain } from './wasmtime-runtime.mjs';

await runWasmtimeMain(workerData.options);
