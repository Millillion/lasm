// Outbound HTTP for Lean programs through Node's global fetch (undici): the
// Lasm/Node backend of the Millillion/fetch Lean package. The package's C shim,
// compiled for Wasm by Lasm, calls these host operations through the Lean
// runtime's host call ABI (lasm_node_call / lasm_node_copy / lasm_node_release):
//   190 start   input: u32 JSON length, JSON request, body bytes
//               reply: JSON { handle, status, statusText, url, redirected, headers }
//   191 read    handle → [1, …chunk] or [0] at the end of the body
//   192 version reply: the protocol version (1)
// The response body is a resource of the runtime's handle table: Lean's
// finalizer (or an explicit close) releases it and cancels the stream.
const decoder = new TextDecoder();
export const fetchProtocolVersion = 1;

function error(code, message, cause) {
  return Object.assign(new Error(message), { code, ...(cause ? { cause } : {}) });
}

/** Map a fetch failure to the IO error codes Lean understands. */
export function fetchError(failure, timeoutMs) {
  if (failure?.name === 'TimeoutError' || failure?.name === 'AbortError')
    return error('ETIMEDOUT', `request timed out${timeoutMs ? ` after ${timeoutMs} ms` : ''}`);
  const cause = failure?.cause;
  const code = cause?.code ?? cause?.errno ?? failure?.code;
  const known = ['ECONNREFUSED', 'ECONNRESET', 'ENOTFOUND', 'EAI_AGAIN', 'ETIMEDOUT', 'EHOSTUNREACH', 'ENETUNREACH', 'EPIPE'];
  const mapped = code === 'ENOTFOUND' || code === 'EAI_AGAIN' ? 'EHOSTUNREACH'
    : code === 'UND_ERR_CONNECT_TIMEOUT' || code === 'UND_ERR_HEADERS_TIMEOUT' || code === 'UND_ERR_BODY_TIMEOUT' ? 'ETIMEDOUT'
    : known.includes(code) ? code : 'EPROTO';
  const message = [failure?.message, cause?.message].filter(Boolean).join(': ') || 'fetch failed';
  return Object.assign(error(mapped, message), { leanUserError: mapped === 'EPROTO' });
}

export function createNodeFetch({ add, get }) {
  async function start(bytes) {
    if (bytes.length < 4) throw error('EINVAL', 'malformed fetch request');
    const length = bytes.readUInt32LE(0);
    const request = JSON.parse(decoder.decode(bytes.subarray(4, 4 + length)));
    const body = bytes.subarray(4 + length);
    const timeoutMs = Number(request.timeoutMs ?? 0);
    const controller = new AbortController();
    let timer;
    if (timeoutMs > 0) timer = setTimeout(() => controller.abort(Object.assign(new Error('timeout'), { name: 'TimeoutError' })), timeoutMs);
    let response;
    try {
      response = await fetch(request.url, {
        method: request.method, headers: request.headers, redirect: request.redirect ?? 'follow',
        body: ['GET', 'HEAD'].includes(request.method) || !request.hasBody ? undefined : body,
        signal: controller.signal,
      });
    } catch (failure) {
      clearTimeout(timer);
      throw fetchError(controller.signal.aborted ? controller.signal.reason : failure, timeoutMs);
    }
    const reader = response.body?.getReader();
    const resource = { type: 'fetch', reader, controller, timer,
      close() { clearTimeout(this.timer); this.reader?.cancel().catch(() => {}); this.controller.abort(); } };
    const handle = add(resource);
    // Header iteration yields each set-cookie value separately (Fetch standard).
    const headers = [...response.headers];
    return Buffer.from(JSON.stringify({ handle, status: response.status, statusText: response.statusText, url: response.url,
      redirected: response.redirected, headers }));
  }
  async function read(id) {
    const resource = get(id, 'fetch');
    if (!resource.reader) return Buffer.from([0]);
    try {
      const { done, value } = await resource.reader.read();
      if (done) { clearTimeout(resource.timer); return Buffer.from([0]); }
      return Buffer.concat([Buffer.from([1]), Buffer.from(value.buffer, value.byteOffset, value.byteLength)]);
    } catch (failure) {
      throw fetchError(resource.controller.signal.aborted ? resource.controller.signal.reason : failure);
    }
  }
  return {
    dispatch(op, id, arg, bytes) {
      if (op === 190) return start(bytes);
      if (op === 191) return read(id);
      if (op === 192) return Buffer.from([fetchProtocolVersion]);
      throw error('ENOSYS', `Unsupported fetch operation ${op}`);
    },
  };
}
