// Internal memory64 adapter under development; no shipping runtime uses it yet.
// These branded spans describe native memory without allocating a huge JS view.
// They are not TypedArrays: ordinary indexed access, growth and wait scheduling
// belong to the remaining heap/scheduler adapter. Never replace global Atomics.

const native = Atomics;
const operations = { load: 0, store: 1, add: 2, sub: 3, and: 4, or: 5,
  xor: 6, exchange: 7, compareExchange: 8 };
const formats = new Map([
  [Int8Array, true], [Uint8Array, false], [Int16Array, true], [Uint16Array, false],
  [Int32Array, true], [Uint32Array, false], [BigInt64Array, true], [BigUint64Array, false],
].map(([Type, signed]) => [Type, { Type, signed, width: Type.BYTES_PER_ELEMENT }]));

// ToIndex rejects BigInt (Number(value) would incorrectly accept it), truncates
// fractions, and treats NaN/undefined as zero. Validate before converting values.
function indexWithin(value, length) {
  const number = +value;
  const index = Number.isNaN(number) ? 0 : Math.trunc(number);
  if (index < 0 || index >= length || !Number.isSafeInteger(index))
    throw new RangeError('Atomic index outside native view');
  return index;
}

export function createNativeAtomicViews({ byteLength, atomic }) {
  if (!Number.isSafeInteger(byteLength) || byteLength < 0 || typeof atomic !== 'function')
    throw new TypeError('Native atomics require a bounded memory and atomic primitive');
  const spans = new WeakMap();
  let closed = false;
  function ensureOpen() {
    if (closed) throw new TypeError('Native atomic memory has been released');
  }
  function view(Type, byteOffset, length) {
    ensureOpen();
    const format = formats.get(Type);
    if (!format) throw new TypeError('Expected an integer TypedArray constructor');
    const { width } = format;
    if (!Number.isSafeInteger(byteOffset) || byteOffset < 0 || byteOffset % width
        || !Number.isSafeInteger(length) || length < 0 || byteOffset > byteLength
        || length > Math.floor((byteLength - byteOffset) / width))
      throw new RangeError('Native atomic view outside memory');
    const span = Object.freeze(Object.assign(Object.create(null), {
      byteOffset, byteLength: length * width, length, BYTES_PER_ELEMENT: width,
      [Symbol.toStringTag]: `NativeAtomic${Type.name}`,
    }));
    spans.set(span, { ...format, byteOffset, length });
    return span;
  }
  function convert(format, value) {
    // Reuse the engine's exact ToIntegerOrInfinity/ToBigInt rules, including
    // user-defined coercions. A private, one-element buffer is NOT guest memory.
    // Keeping it local makes recursive coercions safe. Store returns the
    // converted input, which can differ from the truncated bits actually stored.
    const scratch = new format.Type(1);
    const converted = native.store(scratch, 0, value);
    return { converted, bits: BigInt.asUintN(format.width * 8, BigInt(scratch[0])) };
  }
  function decode(format, bits) {
    const value = format.signed ? BigInt.asIntN(format.width * 8, bits)
      : BigInt.asUintN(format.width * 8, bits);
    return format.width === 8 ? value : Number(value);
  }
  const atomics = {};
  for (const [name, operation] of Object.entries(operations)) {
    atomics[name] = (span, index, value, replacement) => {
      const format = spans.get(span);
      if (!format) return native[name](span, index, value, replacement);
      ensureOpen();
      const offset = format.byteOffset + indexWithin(index, format.length) * format.width;
      let input, comparison = 0n;
      if (name !== 'load') {
        input = convert(format, value);
        if (name === 'compareExchange') {
          comparison = input.bits;
          input = convert(format, replacement);
        }
      }
      // Coercion can call arbitrary JS, including close(). Recheck immediately
      // before FFI so such a callback cannot reach released native memory.
      ensureOpen();
      const result = atomic(offset, format.width, operation, input?.bits ?? 0n, comparison);
      return name === 'store' ? input.converted : decode(format, BigInt(result));
    };
  }
  for (const name of Object.getOwnPropertyNames(native)) {
    if (name in atomics || typeof native[name] !== 'function') continue;
    atomics[name] = (...args) => {
      if (spans.has(args[0]))
        throw new TypeError(`Native atomic ${name} adapter is not implemented`);
      return native[name](...args);
    };
  }
  return Object.freeze({ view, atomics: Object.freeze(atomics),
    // The owner must close spans, join all users, then release the backing store.
    close() { closed = true; } });
}
