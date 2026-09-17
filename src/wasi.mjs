// The reactor's measured WASI compatibility surface, without Node dependencies.
// No files, environment, or network are exposed here; those use Lasm hosts.
export function createPortableWasi({ stdout, stderr } = {}) {
  let memory;
  const open = new Set([0, ...(stdout ? [1] : []), ...(stderr ? [2] : [])]);
  const range = (pointer, length) => {
    pointer >>>= 0;
    if (!Number.isSafeInteger(length) || length < 0 || pointer > memory.buffer.byteLength || length > memory.buffer.byteLength - pointer) throw new RangeError('WASI memory range');
    return new Uint8Array(memory.buffer, pointer, length);
  };
  const data = (pointer, length) => { range(pointer, length); return new DataView(memory.buffer, pointer >>> 0, length); };
  const put32 = (pointer, value) => data(pointer, 4).setUint32(0, value, true);
  const checked = fn => (...args) => {
    try { return fn(...args); }
    catch (error) { if (error instanceof RangeError) return 21; throw error; } // EFAULT
  };
  const imports = {
    environ_sizes_get: checked((count, size) => { put32(count, 0); put32(size, 0); return 0; }),
    environ_get: () => 0, // An empty environment has no entries to write.
    clock_time_get: checked((id, precision, pointer) => {
      let nanoseconds;
      if (id === 0) nanoseconds = BigInt(Date.now()) * 1_000_000n;
      else if (id === 1 && globalThis.performance) nanoseconds = BigInt(Math.floor(performance.now() * 1_000_000));
      else return 28; // EINVAL: no process/thread CPU clock in these hosts.
      data(pointer, 8).setBigUint64(0, nanoseconds, true); return 0;
    }),
    fd_close(fd) { if (!open.delete(fd)) return 8; return 0; }, // EBADF
    fd_fdstat_get: checked((fd, pointer) => {
      if (!open.has(fd)) return 8;
      range(pointer, 24).fill(0);
      const result = data(pointer, 24);
      result.setUint8(0, 2); // Character device.
      result.setBigUint64(8, fd === 0 ? 2n : 64n, true); // FD_READ or FD_WRITE.
      return 0;
    }),
    fd_seek(fd) { return open.has(fd) ? 70 : 8; }, // ESPIPE for console streams.
    fd_read: checked((fd, iov, count, read) => {
      if (fd !== 0 || !open.has(fd)) return 8;
      range(iov, count * 8); put32(read, 0); return 0; // Explicit empty stdin.
    }),
    fd_write: checked((fd, iov, count, written) => {
      const sink = fd === 1 ? stdout : fd === 2 ? stderr : undefined;
      if (!open.has(fd) || typeof sink !== 'function') return 8;
      const vectors = data(iov, count * 8);
      let total = 0;
      const pieces = [];
      for (let i = 0; i < count; i++) {
        const bytes = range(vectors.getUint32(i * 8, true), vectors.getUint32(i * 8 + 4, true)).slice();
        total += bytes.length; pieces.push(bytes);
      }
      data(written, 4); // Validate output before causing external effects.
      for (const bytes of pieces) sink(bytes);
      put32(written, total); return 0;
    }),
    proc_exit(code) { throw new Error(`Wasm guest exited with status ${code}`); },
  };
  return {
    getImportObject: () => ({ wasi_snapshot_preview1: imports }),
    initialize(instance) {
      memory = instance.exports.memory;
      if (!(memory instanceof WebAssembly.Memory)) throw new Error('Wasm reactor must export memory');
      instance.exports._initialize();
    },
  };
}
