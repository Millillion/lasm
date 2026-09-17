import assert from 'node:assert/strict';
import { readFile } from 'node:fs/promises';

const [mode, wasmPath, fixturePath] = process.argv.slice(2);
const bytes = await readFile(wasmPath);
const calls = [];
const host = async (input) => {
  // Real asynchronous filesystem work; no network or remote service required.
  const multiplier = Number(await readFile(fixturePath, 'utf8'));
  calls.push(input);
  return multiplier * input;
};
let run;
if (mode === 'jspi') {
  assert.equal(typeof WebAssembly.Suspending, 'function');
  assert.equal(typeof WebAssembly.promising, 'function');
  const { instance } = await WebAssembly.instantiate(bytes, {
    lasm: { read_number: new WebAssembly.Suspending(host) },
  });
  instance.exports._initialize();
  run = WebAssembly.promising(instance.exports.run);
} else if (mode === 'asyncify') {
  // Minimal experiment driver, not a production Asyncify implementation.
  let api;
  let data;
  let pending;
  let result;
  let busy = false;
  const { instance } = await WebAssembly.instantiate(bytes, {
    lasm: {
      read_number(input) {
        if (api.asyncify_get_state() === 2) {
          api.asyncify_stop_rewind();
          return result;
        }
        pending = host(input);
        api.asyncify_start_unwind(data);
        return 0;
      },
    },
  });
  api = instance.exports;
  api._initialize();
  data = api.asyncify_data();
  run = async (seed) => {
    assert.equal(busy, false, 'This experiment allows one active call per instance');
    busy = true;
    try {
      let output = api.run(seed);
      while (api.asyncify_get_state() === 1) {
        api.asyncify_stop_unwind();
        result = await pending;
        api.asyncify_start_rewind(data);
        output = api.run(seed);
      }
      return output;
    } finally {
      busy = false;
    }
  };
} else {
  throw new Error(`Unknown mode: ${mode}`);
}

const results = [];
for (const seed of [0, 7, 11]) {
  const result = await run(seed);
  assert.equal(result, 6 * seed + 2);
  results.push(result);
}
assert.deepEqual(calls, [0, 1, 7, 15, 11, 23]);
console.log(JSON.stringify({ mode, results, hostCalls: calls.length }));
