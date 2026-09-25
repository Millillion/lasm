// The existing oracle stays in the diagnostic entry point. Deployed mains use
// the same worker implementation without an application-check file.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { isMainThread, workerData } from 'node:worker_threads';
import { prepareBunStack } from '../../../src/bun-stack.mjs';
import { runWasmtimeMain } from '../../../src/wasmtime-runtime.mjs';

prepareBunStack(import.meta.url);
const [helper, cache, cacheSha256, nativeApi, checkPath] = isMainThread ? process.argv.slice(2) : workerData.arguments;
const diagnostic = checkPath ? JSON.parse(readFileSync(checkPath, 'utf8')) : {
  name: 'const_fold', lean: '4.34.0', args: ['15'], leanStackSizeKb: '4194304',
  expected: { stdout: '93011 93011\n', stderr: '', code: 0 },
  computationStackBytes: String(4 * 1024 ** 3 + 128 * 1024),
};
assert.equal(typeof diagnostic.expected.stdout, 'string');
assert.equal(typeof diagnostic.expected.stderr, 'string');
assert.ok(Number.isInteger(diagnostic.expected.code) && diagnostic.expected.code >= 0 && diagnostic.expected.code <= 255);
await runWasmtimeMain({ helper, cache, cacheSha256, nativeApi, diagnostic });
