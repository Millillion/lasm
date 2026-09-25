import assert from 'node:assert/strict';
import { Worker } from 'node:worker_threads';
import { writeSync } from 'node:fs';
import { prepareBunStack } from '../../../src/bun-stack.mjs';

assert.ok(process.env.LASM_RESOURCE_UNIT);
prepareBunStack(import.meta.url);
const args = process.argv.slice(2);
assert.equal(args.length, 4, 'Supply helper, verified cache, cache hash and Node-API driver');
const runtime = new Worker(new URL('./wasmtime-lean-main.mjs', import.meta.url), {
  workerData: { runtimeRoot: true, arguments: args }, resourceLimits: { stackSizeMb: 96, maxOldGenerationSizeMb: 128 },
});
let completed = false;
const fail = error => { writeSync(2, String(error.stack ?? error) + '\n'); process.exit(1); };
runtime.on('message', value => {
  if (value.kind === 'application-result') {
    completed = true; writeSync(1, JSON.stringify(value.result) + '\n'); process.exit(0);
  } else if (value.kind === 'diagnostic-failure') fail(new Error(JSON.stringify(value.result)));
  else fail(new Error('Unexpected runtime supervisor message'));
});
runtime.on('error', fail);
runtime.on('exit', code => { if (!completed) fail(new Error(`Runtime exited before result: ${code}`)); });
setTimeout(() => fail(new Error('Native API runtime deadline')), 70_000);
