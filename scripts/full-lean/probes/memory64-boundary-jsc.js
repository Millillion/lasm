// JSC-shell control, run only through the guarded validation helper.
// Usage: jsc --useWasmMemory64=true FILE -- shared|unshared PAGES TIER "$LASM_RESOURCE_UNIT"
// JSC has no process.env API. Require the guard's unit token explicitly so an
// accidental standalone invocation cannot request the large allocation.
if (!/^lasm-heavy-[a-f0-9]{12}\.service$/.test(arguments[3] || ''))
  throw new Error('Run this probe through the guarded validation helper');
const shared = arguments[0] === 'shared';
if (!['shared', 'unshared'].includes(arguments[0])) throw new Error('Choose shared or unshared');
const pages = Number(arguments[1] || 65537);
if (!Number.isSafeInteger(pages) || pages < 2 || pages > 131072) throw new Error('Invalid page count');
function check(condition, message) { if (!condition) throw new Error(message); }
function uleb(value) {
  const bytes = [];
  do { bytes.push((value & 127) | (value > 127 ? 128 : 0)); value >>>= 7; } while (value);
  return bytes;
}
const nameBytes = value => [...uleb(value.length), ...Array.from(value, c => c.charCodeAt(0))];
const section = (id, bytes) => [id, ...uleb(bytes.length), ...bytes];
const get = [0, 0x20, 0, 0x2d, 0, 0, 0x0b];
const set = [0, 0x20, 0, 0x20, 1, 0x3a, 0, 0, 0x0b];
const binary = Uint8Array.from([
  0, 97, 115, 109, 1, 0, 0, 0,
  ...section(1, [2, 0x60, 1, 0x7e, 1, 0x7f, 0x60, 2, 0x7e, 0x7f, 0]),
  ...section(2, [1, ...nameBytes('env'), ...nameBytes('memory'), 2, shared ? 7 : 5, 1, ...uleb(131072)]),
  ...section(3, [2, 0, 1]),
  ...section(7, [2, ...nameBytes('get'), 0, 0, ...nameBytes('set'), 0, 1]),
  ...section(10, [2, ...uleb(get.length), ...get, ...uleb(set.length), ...set]),
]);
const memory = new WebAssembly.Memory({ initial: 1n, maximum: 131072n, address: 'i64', shared });
const wasm = new WebAssembly.Instance(new WebAssembly.Module(binary), { env: { memory } }).exports;
check(memory.toResizableBuffer().maxByteLength === 2 ** 33, 'declared 8 GiB capacity was narrowed');
check(memory.grow(BigInt(pages - 1)) === 1n, 'unexpected old page count');
const bytes = new Uint8Array(memory.buffer);
check(bytes.length === pages * 65536, 'memory length was narrowed');
const offsets = [0, 1, 16, 65535, 2 ** 31 - 1, 2 ** 31, 2 ** 32 - 1, 2 ** 32, 2 ** 32 + 1, bytes.length - 1]
  .filter((value, index, all) => value < bytes.length && all.indexOf(value) === index);
for (let i = 0; i < offsets.length; i++) {
  wasm.set(BigInt(offsets[i]), 31 + i);
  check(bytes[offsets[i]] === 31 + i, 'Wasm write and JS read disagree');
  check(wasm.get(BigInt(offsets[i])) === 31 + i, 'Wasm read disagrees');
}
let sawFinalTier = false;
let sawWideFinalTier = false;
function readAt(view, offset) {
  const value = view[offset];
  const finalTier = isFinalTier();
  sawFinalTier ||= finalTier;
  if (finalTier && offset >= 2 ** 32) sawWideFinalTier = true;
  return value;
}
noInline(readAt);
for (let i = 0; i < 20000; i++) {
  const index = i % offsets.length;
  check(readAt(bytes, offsets[index]) === 31 + index, 'hot indexed read lost its offset');
}
const cross = bytes.length > 2 ** 32 ? 2 ** 32 - 2 : 65534;
const view = new DataView(memory.buffer);
view.setUint32(cross, 0x21436587, true);
check(view.getUint32(cross, true) === 0x21436587, 'DataView boundary access failed');
[0x87, 0x65, 0x43, 0x21].forEach((value, index) => {
  check(wasm.get(BigInt(cross + index)) === value, 'Wasm boundary byte disagrees');
});
if (arguments[2] === 'require-final-tier') {
  check(sawFinalTier, 'readAt never reached the final tier');
  if (bytes.length > 2 ** 32) check(sawWideFinalTier, 'wide indexed read never completed in the final tier');
}
print(JSON.stringify({ shared, pages, byteLength: bytes.length, offsets, sawFinalTier,
  sawWideFinalTier, optimizedCompilations: numberOfDFGCompiles(readAt), passed: true }));
