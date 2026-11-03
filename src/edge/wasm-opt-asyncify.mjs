// Binaryen's wasm-opt for emcc's Asyncify edge link (maintainer emcc driver,
// src/edge/edge-link.mjs): Asyncify does not support tail calls, so the
// module is lowered first (return_call -> call + return), exactly as the Node
// link driver does before the same step (src/link-driver/link.mjs).
//   node wasm-opt-asyncify.mjs REAL_WASM_OPT [wasm-opt arguments...]
import { readFileSync, writeFileSync } from 'node:fs';
import { spawnSync } from 'node:child_process';
import { lowerTailCalls } from '../wasi/lower-atomics.mjs';

const [real, ...args] = process.argv.slice(2);
let forwarded = args;
if (args.includes('--asyncify')) {
  // The input module: the first argument that is neither an option nor -o's value.
  const input = args.find((arg, index) => !arg.startsWith('-') && args[index - 1] !== '-o' && arg.endsWith('.wasm'));
  if (!input) throw new Error('wasm-opt --asyncify without an input module');
  writeFileSync(input, lowerTailCalls(readFileSync(input)));
  forwarded = args.filter(arg => arg !== '--enable-tail-call');
}
const result = spawnSync(real, forwarded, { stdio: 'inherit' });
process.exit(result.status ?? 1);
