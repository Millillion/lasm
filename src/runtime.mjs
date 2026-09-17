import { WASI } from 'node:wasi';

const encoder = new TextEncoder();
const decoder = new TextDecoder('utf-8', { fatal: true });
const heapTypes = new Set(['Nat', 'Int', 'String', 'ByteArray']);
const MAX_TRANSFER = 16 * 1024 * 1024;
class LeanIOError extends Error { name = 'LeanIOError'; }

/** Internal ABI adapter. Applications receive typed functions, never pointers. */
export async function instantiate(bytes, manifest, { host = {} } = {}) {
  if (manifest.abi !== 1) throw new Error(`Unsupported Lasm ABI: ${manifest.abi}`);
  const module = await WebAssembly.compile(bytes);
  if (JSON.stringify(WebAssembly.Module.imports(module)) !== JSON.stringify(manifest.imports)) {
    throw new Error('Wasm imports do not match the build manifest');
  }
  let wasi = new WASI({ version: 'preview1', args: [], env: {}, preopens: {}, returnOnExit: true });
  let instance;
  let e;
  let failure;
  let disposed = false;
  let busy = false;
  let currentSignal;
  let pending;
  let response;
  let asyncData;
  const mode = manifest.asyncMode ?? 'sync';
  if (mode === 'jspi' && (typeof WebAssembly.Suspending !== 'function' || typeof WebAssembly.promising !== 'function')) {
    throw new Error('This artifact requires JSPI. Use an Asyncify artifact for flag-free Node.');
  }
  function drop(error) {
    failure = error;
    disposed = true;
    e = null;
    instance = null;
    wasi = null;
    pending = null;
    response = null;
  }
  function check() {
    if (disposed) throw new Error(failure ? 'Lasm instance failed; create a new instance' : 'Lasm instance is disposed', { cause: failure });
    if (busy) throw new Error('Lasm instance is busy; await the active call or use another instance');
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
  async function hostRequest(operation, keyPointer, keyLength, bodyPointer, bodyLength) {
    // Copy inputs synchronously, before the first await. A suspension never
    // retains views into guest memory, which can subsequently grow.
    try {
      if ((keyLength >>> 0) > MAX_TRANSFER || (bodyLength >>> 0) > MAX_TRANSFER) throw new Error('Host request exceeds the transfer limit');
      const key = decoder.decode(view(keyPointer, keyLength));
      const body = view(bodyPointer, bodyLength).slice();
      const method = { 1: 'readBytes', 2: 'writeBytes', 3: 'fetchBytes' }[operation];
      if (!method || typeof host[method] !== 'function') throw new Error(`Host capability unavailable: ${method ?? operation}`);
      currentSignal.throwIfAborted();
      const signal = currentSignal;
      let onAbort;
      const abort = new Promise((_, reject) => {
        onAbort = () => reject(signal.reason ?? new Error('Operation aborted'));
        signal.addEventListener('abort', onAbort, { once: true });
      });
      let result;
      try {
        result = await Promise.race([
          Promise.resolve().then(() => method === 'writeBytes'
            ? host[method](key, body, { signal }) : host[method](key, { signal })), abort,
        ]);
      } finally { signal.removeEventListener('abort', onAbort); }
      signal.throwIfAborted();
      if (method === 'writeBytes') result = new Uint8Array();
      if (!(result instanceof Uint8Array)) throw new Error('Host must return Uint8Array');
      if (result.byteLength > MAX_TRANSFER) throw new Error('Host response exceeds the transfer limit');
      return { bytes: new Uint8Array(result), error: false };
    } catch (error) {
      const message = String(error?.message ?? error).slice(0, 8192);
      return { bytes: encoder.encode(message), error: true };
    }
  }
  function responseCode() { return response.error ? -response.bytes.length - 1 : response.bytes.length; }
  function request(...args) {
    if (mode === 'asyncify' && e.asyncify_get_state() === 2) {
      e.asyncify_stop_rewind();
      return responseCode();
    }
    if (!busy || !currentSignal) throw new Error('Host IO during module initialization is not supported');
    pending = hostRequest(...args);
    if (mode === 'jspi') return pending.then(value => { response = value; return responseCode(); });
    e.asyncify_start_unwind(asyncData);
    return 0;
  }
  const imports = wasi.getImportObject();
  if (mode !== 'sync') imports.lasm = {
    request: mode === 'jspi' ? new WebAssembly.Suspending(request) : request,
    copy_response(pointer, length) {
      if (!response || (length >>> 0) !== response.bytes.length) throw new Error('Invalid host response copy');
      view(pointer, length).set(response.bytes);
      response = null;
    },
  };
  instance = await WebAssembly.instantiate(module, imports);
  e = instance.exports;
  try {
    wasi.initialize(instance);
    e.lasm_runtime_initialize();
    const result = e[manifest.initializer](1);
    const failed = e.lasm_io_is_error(result);
    e.lasm_release(result);
    if (failed) throw new Error('Lean module initialization failed');
    if (mode === 'asyncify') {
      const stackSize = 1024 * 1024;
      asyncData = e.lasm_alloc(stackSize + 8);
      if (!asyncData) throw new Error('Cannot allocate Asyncify stack');
      const data = new DataView(e.memory.buffer);
      data.setUint32(asyncData, asyncData + 8, true);
      data.setUint32(asyncData + 4, asyncData + 8 + stackSize, true);
    }
  } catch (error) { drop(error); throw error; }
  const api = Object.create(null);
  for (const declaration of manifest.exports) {
    function argumentsFor(args) {
      check();
      if (args.length !== declaration.parameters.length) throw new TypeError(`${declaration.name} expects ${declaration.parameters.length} arguments`);
      // Validate every argument before allocating any guest objects.
      return declaration.parameters.map((t, i) => prepare(t, args[i]));
    }
    function encodeArguments(prepared) {
      const encoded = [];
      for (let i = 0; i < prepared.length; i++) encoded.push(encode(declaration.parameters[i], prepared[i]));
      if (!prepared.length) encoded.push(1); // Generated Unit parameter forces a callable export.
      return encoded;
    }
    function fatal(error) {
      const failure = error instanceof Error ? error : new Error('Lean guest exited', { cause: error });
      drop(failure);
      return failure;
    }
    if (declaration.effect !== 'io') api[declaration.name] = (...args) => {
      const prepared = argumentsFor(args);
      try {
        return decode(declaration.result, e[declaration.symbol](...encodeArguments(prepared)));
      } catch (error) {
        // After a guest trap its stack and ownership cannot be recovered safely.
        // Discard the entire instance, including its persistent module constants.
        throw fatal(error);
      }
    };
    else api[declaration.name] = async (...args) => {
      const options = args.length === declaration.parameters.length + 1 ? args.pop() : undefined;
      if (options !== undefined && (!options || typeof options !== 'object' || (options.signal !== undefined && !(options.signal instanceof AbortSignal)))) {
        throw new TypeError('IO call options require an AbortSignal');
      }
      const prepared = argumentsFor(args);
      currentSignal = options?.signal ?? new AbortController().signal;
      currentSignal.throwIfAborted();
      busy = true;
      try {
        const encoded = encodeArguments(prepared);
        let result;
        if (mode === 'jspi') result = await WebAssembly.promising(e[declaration.symbol])(...encoded);
        else {
          result = e[declaration.symbol](...encoded);
          while (e.asyncify_get_state() === 1) {
            e.asyncify_stop_unwind();
            response = await pending;
            e.asyncify_start_rewind(asyncData);
            result = e[declaration.symbol](...encoded);
          }
          if (e.asyncify_get_state() !== 0) throw new Error('Invalid Asyncify state after execution');
        }
        const failed = e.lasm_io_is_error(result);
        const value = e.lasm_io_value(result);
        if (failed) throw new LeanIOError(decode('String', value));
        if (declaration.result === 'UInt32') return e.lasm_unbox_u32(value) >>> 0;
        if (declaration.result === 'Bool') return e.lasm_unbox_scalar(value) !== 0;
        return decode(declaration.result, value);
      } catch (error) {
        if (error instanceof LeanIOError) throw error;
        throw fatal(error);
      } finally {
        busy = false;
        currentSignal = undefined;
        pending = null;
        response = null;
      }
    };
  }
  api.dispose = () => { if (busy) throw new Error('Cannot dispose a busy instance; cancel and await its active call'); if (!disposed) drop(); };
  api.stats = () => ({ memoryBytes: e?.memory.buffer.byteLength ?? 0, disposed, busy });
  return Object.freeze(api);
}
