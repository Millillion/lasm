import { WASI } from 'node:wasi';

const encoder = new TextEncoder();
const decoder = new TextDecoder('utf-8', { fatal: true });
const heapTypes = new Set(['Nat', 'Int', 'String', 'ByteArray']);
const MAX_TRANSFER = 16 * 1024 * 1024;

/** Internal ABI adapter. Applications receive typed functions, never pointers. */
export async function instantiate(bytes, manifest) {
  if (manifest.abi !== 1) throw new Error(`Unsupported Lasm ABI: ${manifest.abi}`);
  const module = await WebAssembly.compile(bytes);
  if (JSON.stringify(WebAssembly.Module.imports(module)) !== JSON.stringify(manifest.imports)) {
    throw new Error('Wasm imports do not match the build manifest');
  }
  let wasi = new WASI({ version: 'preview1', args: [], env: {}, preopens: {}, returnOnExit: true });
  let instance = await WebAssembly.instantiate(module, wasi.getImportObject());
  let e = instance.exports;
  let failure;
  let disposed = false;
  function drop(error) {
    failure = error;
    disposed = true;
    e = null;
    instance = null;
    wasi = null;
  }
  function check() {
    if (disposed) throw new Error(failure ? 'Lasm instance failed; create a new instance' : 'Lasm instance is disposed', { cause: failure });
  }
  function view(pointer, length) {
    pointer >>>= 0;
    length >>>= 0;
    if (pointer > e.memory.buffer.byteLength || length > e.memory.buffer.byteLength - pointer) {
      throw new Error('Invalid guest memory range');
    }
    return new Uint8Array(e.memory.buffer, pointer, length);
  }
  function prepare(type, value) {
    if (type === 'Nat' || type === 'Int') {
      if (typeof value !== 'bigint' || (type === 'Nat' && value < 0n)) throw new TypeError(`${type} requires ${type === 'Nat' ? 'a nonnegative' : 'a'} bigint`);
      value = encoder.encode(value.toString());
    } else if (type === 'String') {
      if (typeof value !== 'string' || !value.isWellFormed()) throw new TypeError('String requires a well-formed Unicode string');
      value = encoder.encode(value);
    } else if (type === 'ByteArray') {
      if (!(value instanceof Uint8Array)) throw new TypeError('ByteArray requires Uint8Array');
    } else if (type === 'UInt32') {
      if (!Number.isInteger(value) || value < 0 || value > 0xffff_ffff) throw new TypeError('UInt32 requires an integer from 0 through 4294967295');
    } else if (type === 'Bool') {
      if (typeof value !== 'boolean') throw new TypeError('Bool requires a boolean');
      return value ? 1 : 0;
    } else if (type === 'Unit') {
      if (value !== undefined) throw new TypeError('Unit requires undefined');
      return 1; // lean_box(0)
    } else throw new TypeError(`Unsupported ABI type: ${type}`);
    if (value instanceof Uint8Array && value.byteLength > MAX_TRANSFER) throw new RangeError('Argument exceeds the 16 MiB transfer limit');
    return value;
  }
  function encode(type, value) {
    if (!heapTypes.has(type)) return value;
    const pointer = e.lasm_alloc(value.byteLength + 1);
    if (!pointer) throw new Error('Guest allocation failed');
    const target = view(pointer, value.byteLength + 1);
    target.set(value);
    target[value.byteLength] = 0;
    const result = type === 'Nat' ? e.lasm_nat_new(pointer) : type === 'Int' ? e.lasm_int_new(pointer)
      : type === 'String' ? e.lasm_string_new(pointer, value.byteLength) : e.lasm_bytes_new(pointer, value.byteLength);
    e.lasm_free(pointer);
    return result;
  }
  function decode(type, value) {
    if (type === 'UInt32') return value >>> 0;
    if (type === 'Bool') return value !== 0;
    if (type === 'Unit') return undefined;
    let result;
    if (type === 'ByteArray') result = view(e.lasm_bytes_data(value), e.lasm_bytes_size(value)).slice();
    else if (type === 'String') result = decoder.decode(view(e.lasm_string_data(value), e.lasm_string_size(value)));
    else {
      const string = type === 'Nat' ? e.lasm_nat_string(value) : e.lasm_int_string(value);
      result = BigInt(decoder.decode(view(e.lasm_string_data(string), e.lasm_string_size(string))));
      e.lasm_release(string);
    }
    e.lasm_release(value);
    return result;
  }
  try {
    wasi.initialize(instance);
    e.lasm_runtime_initialize();
    const result = e[manifest.initializer](1);
    const failed = e.lasm_io_is_error(result);
    e.lasm_release(result);
    if (failed) throw new Error('Lean module initialization failed');
  } catch (error) { drop(error); throw error; }
  const api = Object.create(null);
  for (const declaration of manifest.exports) {
    api[declaration.name] = (...args) => {
      check();
      if (args.length !== declaration.parameters.length) throw new TypeError(`${declaration.name} expects ${declaration.parameters.length} arguments`);
      // Validate every argument before allocating any guest objects.
      const prepared = declaration.parameters.map((t, i) => prepare(t, args[i]));
      const encoded = [];
      try {
        for (let i = 0; i < prepared.length; i++) encoded.push(encode(declaration.parameters[i], prepared[i]));
        return decode(declaration.result, e[declaration.symbol](...encoded));
      } catch (error) {
        // After a guest trap its stack and ownership cannot be recovered safely.
        // Discard the entire instance, including its persistent module constants.
        const failure = error instanceof Error ? error : new Error('Lean guest exited', { cause: error });
        drop(failure);
        throw failure;
      }
    };
  }
  api.dispose = () => { if (!disposed) drop(); };
  api.stats = () => ({ memoryBytes: e?.memory.buffer.byteLength ?? 0, disposed });
  return Object.freeze(api);
}
