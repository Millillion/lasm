// Deno's Node worker adapter recursively inspects message properties for
// MessagePorts, including every index in a typed array. Send binary payloads as
// ArrayBuffers instead. Tag all containers so user bytes/paths and record keys
// cannot be mistaken for part of this private transport protocol.
export function encodeFileMessage(value, { move = false } = {}) {
  const transfers = new Set();
  function encode(value) {
    if (value instanceof ArrayBuffer || typeof SharedArrayBuffer !== 'undefined' && value instanceof SharedArrayBuffer) {
      if (move && value instanceof ArrayBuffer) transfers.add(value);
      return { type: 'buffer', value };
    }
    if (value instanceof Uint8Array) {
      // Retain only the visible bytes of short reads and pooled/sliced Buffers.
      // Never detach pooled peers or transfer shared memory.
      const bytes = value.byteOffset === 0 && value.byteLength === value.buffer.byteLength &&
        value.buffer instanceof ArrayBuffer ? value : new Uint8Array(value);
      if (move) transfers.add(bytes.buffer);
      return { type: 'bytes', value: bytes.buffer };
    }
    if (Array.isArray(value)) return { type: 'array', value: value.map(encode) };
    if (value !== null && typeof value === 'object')
      return { type: 'record', value: Object.entries(value).map(([key, item]) => [key, encode(item)]) };
    return value;
  }
  const message = encode(value);
  return { message, transfer: [...transfers] };
}

export function decodeFileMessage(value) {
  if (value === null || typeof value !== 'object') return value;
  if (value.type === 'bytes') return new Uint8Array(value.value);
  if (value.type === 'buffer') return value.value;
  if (value.type === 'array') return value.value.map(decodeFileMessage);
  if (value.type === 'record')
    return Object.fromEntries(value.value.map(([key, item]) => [key, decodeFileMessage(item)]));
  throw new Error('Invalid native file worker message');
}
