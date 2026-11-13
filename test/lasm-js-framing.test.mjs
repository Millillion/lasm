// Lasm.JS's framing between its C glue and the JavaScript hosts
// (library/c/lasm_js_framing.h, which library/c/lasm_js.c and
// src/edge/lasm_js_edge.c include; encodeEvents, splitRequest and intoPrefix
// of src/node-js.mjs and src/edge/edge-js.mjs). The C runs as
// test/models/js-framing-harness.c, compiled as is and with a 32-bit size_t
// (wasm32's, where the glues run). The Lean model is
// verification/cli/Lasm/Cli/Model/JsFraming.lean, which
// test/models/cli-differential.mjs checks against the same code.
import { test, after } from 'node:test';
import assert from 'node:assert/strict';
import { execFileSync, spawnSync } from 'node:child_process';
import { mkdtempSync, rmSync } from 'node:fs';
import { tmpdir } from 'node:os';
import { join } from 'node:path';
import { fileURLToPath } from 'node:url';
import { forAll } from './helpers/property.mjs';
import * as nodeJs from '../src/node-js.mjs';
import * as edgeJs from '../src/edge/edge-js.mjs';

const cc = process.env.CC || 'cc';
const skip = spawnSync(cc, ['--version']).status === 0 ? false : `no C compiler (${cc})`;
const hosts = [['node', nodeJs], ['edge', edgeJs]];
let dir;
const harnesses = {};
after(() => { if (dir) rmSync(dir, { recursive: true, force: true }); });

function harness(width) {
  if (!harnesses[width]) {
    dir ??= mkdtempSync(join(tmpdir(), 'lasm-js-framing-'));
    harnesses[width] = join(dir, `framing-${width}`);
    execFileSync(cc, ['-O1', '-w', ...(width === 32 ? ['-DLASM_JS_SIZE32'] : []), '-o', harnesses[width],
      fileURLToPath(new URL('./models/js-framing-harness.c', import.meta.url))], { stdio: ['ignore', 'inherit', 'inherit'] });
  }
  return harnesses[width];
}
function run(width, args, input) {
  const result = spawnSync(harness(width), args, { input: Uint8Array.from(input), timeout: 10_000, maxBuffer: 1 << 20 });
  assert.equal(result.status, 0, `the ${width}-bit framing harness exited ${result.status ?? result.signal ?? result.error}`);
  return result.stdout.toString();
}
/** The glue's reading of a batch: the events it delivers (as the host's
 * objects) and the message it panics with, or null. */
function readEvents(width, batch) {
  const events = [];
  for (const line of run(width, ['events'], batch).split('\n').filter(Boolean)) {
    if (line.startsWith('fatal ')) return { events, fatal: line.slice(6) };
    const [kind, a, b, data = ''] = line.split(' ');
    const bytes = Uint8Array.from(Buffer.from(data, 'hex'));
    events.push(kind === 'completion' ? { kind: 1, promise: BigInt(a), failed: Number(b) !== 0, bytes }
      : kind === 'call' ? { kind: 2, call: BigInt(a), fn: Number(b), bytes } : { kind: 3, fn: Number(a) });
  }
  return { events, fatal: null };
}
const bytes = (r, high) => Array.from({ length: r.int(0, high) }, () => r.int(0, 255));
const word = r => r.pick([0n, 2n ** 64n - 1n, BigInt(r.int(0, 2 ** 31)) * 2n ** 32n + BigInt(r.int(0, 2 ** 31))]);
const fn = r => r.pick([0, 0xffffffff, r.int(0, 2 ** 31)]);
const event = r => r.pick([
  () => ({ kind: 1, promise: word(r), failed: r.next() < 0.5, bytes: Uint8Array.from(bytes(r, 8)) }),
  () => ({ kind: 2, call: word(r), fn: fn(r), bytes: Uint8Array.from(bytes(r, 8)) }),
  () => ({ kind: 3, fn: fn(r) })])();

// Proposition: Lasm.Cli.Spec.events_read_back
//   ∀ (queue : List JsEvent) (rest : List UInt8), (∀ e ∈ queue, e.Fits) →
//     (encodeEvents queue).2 = queue.drop 1024 ∧
//     readEvents ((encodeEvents queue).1 ++ rest) = (queue.take 1024 ++ (readEvents rest).1, (readEvents rest).2)
test('a batch of interop events reads back, the first 1024, followed by what follows it', { skip }, () => {
  forAll(r => ({
    queue: r.next() < 0.05 ? Array.from({ length: r.int(1020, 1030) }, () => ({ kind: 3, fn: r.int(0, 9) })) : r.array(r.int(0, 6), () => event(r)),
    rest: r.next() < 0.5 ? [] : bytes(r, 20),
  }), ({ queue, rest }) => {
    for (const [name, host] of hosts) {
      const left = [...queue];
      const batch = host.encodeEvents(left);
      assert.deepEqual(left, queue.slice(1024), name);
      for (const width of [64, 32]) {
        const after = readEvents(width, rest);
        const read = readEvents(width, [...batch, ...rest]);
        assert.deepEqual(read, { events: [...queue.slice(0, 1024), ...after.events], fatal: after.fatal }, `${name}, ${width}-bit`);
      }
    }
  }, { runs: 60 });
});

// Proposition: Lasm.Cli.Spec.request_read_back
//   ∀ (released : List Nat) (payload : List UInt8),
//     released.length < 2 ^ 32 → (∀ i ∈ released, i < 2 ^ 32) →
//     splitRequest (frameRequest released payload) = .ok (released, payload)
test('a request’s released handles and payload read back', { skip }, () => {
  forAll(r => ({ released: r.array(r.int(0, 6), () => fn(r)), payload: bytes(r, 16) }), ({ released, payload }) => {
    const request = Buffer.from(run(64, ['request', ...released.map(String)], payload).trim(), 'hex');
    for (const [name, host] of hosts) {
      const [ids, rest] = host.splitRequest(Uint8Array.from(request));
      assert.deepEqual(ids, released, name);
      assert.deepEqual([...rest], payload, name);
    }
  }, { runs: 100 });
});

// Proposition: Lasm.Cli.Spec.into_read_back
//   ∀ (promise : Nat) (input : List UInt8), promise < 2 ^ 64 →
//     intoPrefix (frameInto promise input) = .ok (promise, input)
test('the promise a call settles, and its input, read back', { skip }, () => {
  forAll(r => ({ promise: word(r), input: bytes(r, 16) }), ({ promise, input }) => {
    const payload = Buffer.from(run(64, ['into', String(promise)], input).trim(), 'hex');
    for (const [name, host] of hosts) {
      // Node's dispatch hands it a Buffer (splitRequest's), the edge's a Uint8Array.
      const [p, rest] = host.intoPrefix(name === 'node' ? payload : Uint8Array.from(payload));
      assert.equal(p, promise, name);
      assert.deepEqual([...rest], input, name);
    }
  }, { runs: 100 });
});

test('a malformed request is refused by both hosts with the same error', () => {
  for (const request of [[], [1, 0, 0], [2, 0, 0, 0, 7, 0, 0, 0], [0xff, 0xff, 0xff, 0xff]]) {
    for (const [name, host] of hosts) assert.throws(() => host.splitRequest(Uint8Array.from(request)), { message: 'TypeError: Malformed Lasm.JS request' }, name);
  }
  for (const [name, host] of hosts) assert.throws(() => host.intoPrefix(Buffer.alloc(7)), { message: 'TypeError: Malformed Lasm.JS request' }, name);
});

// Found by the model differential: where size_t is 32 bits wide (wasm32),
// the glues' bounds check `offset + size > batch.size` wrapped for a size
// near 2³², so a completion or call claiming almost 4 GiB passed it and the
// glue read far past the batch. It now compares with what remains.
test('a glue with a 32-bit size_t refuses an event whose size runs past the batch', { skip }, () => {
  const size = [...Buffer.from(Uint32Array.of(2 ** 32 - 13).buffer)];
  const completion = [1, ...Array(8).fill(0), 0, ...size, 1, 2, 3];
  const call = [2, ...Array(8).fill(0), 1, 0, 0, 0, ...size, 1, 2, 3];
  for (const width of [64, 32]) {
    assert.deepEqual(readEvents(width, completion), { events: [], fatal: 'Lasm.JS: malformed completion' }, `${width}-bit`);
    assert.deepEqual(readEvents(width, call), { events: [], fatal: 'Lasm.JS: malformed callback' }, `${width}-bit`);
  }
});
