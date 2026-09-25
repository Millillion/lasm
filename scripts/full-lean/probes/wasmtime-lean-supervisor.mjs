import assert from 'node:assert/strict';
import { Worker } from 'node:worker_threads';
import { writeSync } from 'node:fs';
import { createRequire } from 'node:module';
import { prepareBunStack } from '../../../src/bun-stack.mjs';

assert.ok(process.env.LASM_RESOURCE_UNIT);
assert.equal(process.platform, 'linux', 'This private supervisor owns a Linux diagnostic process');
prepareBunStack(import.meta.url);
// Node's process.exit can wait indefinitely for workers blocked inside native
// Wasm. This standalone diagnostic owns the whole process. After synchronous
// result/error output, the CRT exit reclaims all its threads without deleting
// Stores that another thread is still using. This is not embedded disposal.
const ffi = createRequire(import.meta.url)('koffi');
const exitOwnedProcess = ffi.load('libc.so.6').func('void _Exit(int code)');
const args = process.argv.slice(2);
assert.ok(args.length === 4 || args.length === 5,
  'Supply helper, verified cache, cache hash, Node-API driver and optional application check');
const runtime = new Worker(new URL('./wasmtime-lean-main.mjs', import.meta.url), {
  workerData: { runtimeRoot: true, arguments: args }, resourceLimits: { stackSizeMb: 96, maxOldGenerationSizeMb: 128 },
});
let completed = false;
const fail = error => { writeSync(2, String(error.stack ?? error) + '\n'); exitOwnedProcess(1); };
runtime.on('message', value => {
  if (value.kind === 'application-result') {
    completed = true; writeSync(1, JSON.stringify(value.result) + '\n'); exitOwnedProcess(0);
  } else if (value.kind === 'diagnostic-failure') fail(new Error(JSON.stringify(value.result)));
  else fail(new Error('Unexpected runtime supervisor message'));
});
runtime.on('error', fail);
runtime.on('exit', code => { if (!completed) fail(new Error(`Runtime exited before result: ${code}`)); });
setTimeout(() => fail(new Error('Native API runtime deadline')), 70_000);
