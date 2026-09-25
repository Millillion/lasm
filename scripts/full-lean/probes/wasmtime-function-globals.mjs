// Execute the real resolved table entries in each engine. The comparison uses
// unchanged console/decoder functions from verified, generated Emscripten glue.
import assert from 'node:assert/strict';
import { readFileSync } from 'node:fs';
import { createRequire } from 'node:module';
import { createHash } from 'node:crypto';
import { hashFile } from '../../../src/managed-artifacts.mjs';
import { invokeConsoleImport } from './wasmtime-console.mjs';
import { writeGuestBytes } from './wasmtime-guest-memory.mjs';
import { emscriptenConsoleCases } from '../../../test/fixtures/emscripten-console.mjs';

const [libraryPath, cache, cacheSha256, gluePath, glueSha256, ...extra] = process.argv.slice(2);
assert.ok(libraryPath && glueSha256 && !extra.length);
assert.equal(await hashFile(cache), cacheSha256);
assert.equal(await hashFile(gluePath), glueSha256);
const glue = readFileSync(gluePath, 'utf8');
function extract(start, end) {
  const from = glue.indexOf(start); assert.ok(from >= 0, `Missing SDK function ${start}`);
  const to = glue.indexOf(end, from + start.length); assert.ok(to > from);
  return glue.slice(from, to + end.length);
}
const names = ['emscripten_console_log', 'emscripten_console_error', 'emscripten_console_warn',
  'emscripten_console_trace', 'emscripten_out', 'emscripten_err'];
const originalFunctions = [
  extract('var UTF8Decoder =', ';\n'), extract('var findStringEnd =', '\n};'),
  extract('var UTF8ArrayToString =', '\n};'), extract('var UTF8ToString =', ';\n'),
  extract('var bigintToI53Checked =', ';\n'),
  ...names.map(name => extract(`function _${name}(`, '\n}')),
].join('\n');
// Exact low pointers stay within the generated function's checked range.
// growMemViews is inert only in this oracle's fixed, synthetic heap.
const makeOracle = new Function('HEAPU8', 'console', 'out', 'err', 'growMemViews', 'INT53_MIN', 'INT53_MAX',
  originalFunctions + '\nreturn [' + names.map(name => '_' + name).join(',') + '];');
const ffi = createRequire(import.meta.url)('koffi');
ffi.config({ sync_stack_size: 16 * 1024 ** 2 });
const library = ffi.load(libraryPath);
const create = library.func('void *lasm_lean_instance_new(str cache, void *clock, void *mailbox, const uint8_t *environment, size_t environment_size, size_t environment_count, str program_name, void *parent, void *spawn, void *event, char *error, size_t capacity)');
const destroy = library.func('void lasm_lean_instance_delete(void *probe)');
const call = library.func('int lasm_lean_instance_call(void *probe, str name, const uint64_t *arguments, size_t count, uint32_t results, _Out_ uint64_t *result, char *error, size_t capacity)');
const setRuntime = library.func('void lasm_lean_instance_set_runtime(void *probe, void *callback)');
const countGlobals = library.func('uint64_t lasm_lean_instance_function_global_count(void *probe)');
const getGlobal = library.func('int lasm_lean_instance_function_global(void *probe, str name, _Out_ uint64_t *pointer, char *error, size_t capacity)');
const window = library.func('void *lasm_lean_instance_memory_window(void *probe, uint64_t offset, size_t length)');
const details = library.func('void lasm_lean_instance_details(void *probe, _Out_ uint64_t *values)');
const clockType = ffi.proto('double lasm_got_clock(void)');
const mailboxType = ffi.proto('int32_t lasm_got_mailbox(uint64_t target, uint64_t sender)');
const runtimeType = ffi.proto('int32_t lasm_got_runtime(uint32_t kind, uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e, uint64_t *result)');
const clock = ffi.register(() => Date.now(), ffi.pointer(clockType));
const mailbox = ffi.register(() => 0, ffi.pointer(mailboxType));
const error = Buffer.alloc(8192), message = () => error.toString('utf8').split('\0')[0];
const environment = Buffer.from('LASM_GOT_CONTROL=1\0');
const probe = create(cache, clock, mailbox, environment, environment.length, 1, 'function-global-control',
  null, null, null, error, error.length);
assert.ok(probe, message());
const values = Array(26).fill(0); details(probe, values); const memoryBytes = BigInt(values[3]);
assert.equal(memoryBytes, 128n * 1024n ** 2n);
const view = (offset, length) => {
  const pointer = window(probe, offset, length); assert.ok(pointer);
  return new DataView(ffi.view(pointer, length));
};
let observed = [], callbackError, callbacks = 0;
function sinks(record) {
  const console = {};
  for (const method of ['log', 'error', 'warn', 'trace']) console[method] = function (text) {
    assert.equal(this, console); record.push([method, text]);
  };
  return { console, out: text => record.push(['out', text]), err: text => record.push(['err', text]) };
}
const runtime = ffi.register((kind, a, b, c, d, e, output) => {
  try {
    for (const unused of [b, c, d, e]) assert.equal(BigInt(unused), 0n);
    invokeConsoleImport({ kind, pointer: a, memoryBytes, view, ...sinks(observed) });
    callbacks++; ffi.encode(output, 'uint64_t', 0n); return 0;
  } catch (error) { callbackError = error; return 1; }
}, ffi.pointer(runtimeType));
try {
  setRuntime(probe, runtime);
  assert.equal(BigInt(countGlobals(probe)), 9n);
  const pointers = names.map(name => {
    const pointer = [0]; assert.equal(getGlobal(probe, name, pointer, error, error.length), 0, message());
    return String(pointer[0]);
  });
  assert.deepEqual(pointers, ['2', '3', '4', '5', '6', '7']);
  const cases = emscriptenConsoleCases(), digest = createHash('sha256');
  for (const sample of cases) {
    const bytes = Buffer.from(sample.bytes), expected = [];
    const oracleHeap = Buffer.concat([Buffer.alloc(16), bytes]);
    const oracleSinks = sinks(expected);
    const original = makeOracle(oracleHeap, oracleSinks.console, oracleSinks.out, oracleSinks.err,
      () => {}, -9007199254740991n, 9007199254740991n);
    const address = sample.nullPointer ? 0n : sample.endOfMemory ? memoryBytes - BigInt(bytes.length) : 4096n;
    if (bytes.length) writeGuestBytes({ offset: address, bytes: sample.endOfMemory ? bytes
      : Buffer.concat([bytes, Buffer.alloc(3)]), memoryBytes, view });
    for (const [index, emitter] of ['log', 'error', 'warn', 'trace', 'out', 'err'].entries()) {
      expected.length = 0; observed = [];
      original[index](sample.nullPointer ? 0n : 16n);
      const result = [0];
      const status = call(probe, 'emit_' + emitter, [address], 1, 0, result, error, error.length);
      assert.ifError(callbackError); assert.equal(status, 0, message());
      assert.deepEqual(observed, expected, `${sample.name}/${emitter}`);
      digest.update(JSON.stringify([sample.name, emitter, observed]) + '\n');
    }
  }
  assert.equal(callbacks, cases.length * 6);
  assert.equal(await hashFile(cache), cacheSha256); assert.equal(await hashFile(gluePath), glueSha256);
  console.log(JSON.stringify({ passed: true, scope: 'Private helper indirect console functions with unchanged SDK decoder/sink oracle',
    engine: process.versions.bun ? 'bun' : process.versions.deno ? 'deno' : 'node',
    version: process.versions.bun ?? process.versions.deno ?? process.versions.node,
    cases: cases.length, callbacks, pointers, resultSha256: digest.digest('hex'),
    oracle: { path: gluePath, sha256: glueSha256, extractedFunctionSha256: createHash('sha256').update(originalFunctions).digest('hex') },
    capturedMethods: ['log', 'error', 'warn', 'trace', 'out', 'err'],
    scopeNotes: ['Console method dispatch and arguments are exact; engine stack-trace text is not normalized or claimed equal.',
      'Synthetic low-address reference heaps are compared with real Wasmtime memory, including its endpoint.'] }));
} finally {
  destroy(probe); ffi.unregister(runtime); ffi.unregister(clock); ffi.unregister(mailbox);
}
