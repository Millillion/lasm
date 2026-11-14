// Runs the CLI's glue program: the pure parts of the CLI that moved into Lean
// (docs/proposals/M6_GLUE.md), compiled by Lasm into one WASI command,
// lasm-glue.wasm (verification/cli/Lasm/Cli/Glue.lean, built by
// .github/workflows/glue.yml). The request is the program's stdin, a list of
// fields each written `<length>:<UTF-8 bytes>`; its stdout is `ok:` and the
// result or `error:` and a message. The WASI host below is the least the
// program needs: stdin, stdout and stderr, the standard clocks and random
// bytes; no files, arguments beyond the program's name, or environment, and
// every other call fails with ENOSYS. It uses only WebAssembly and Buffer, so
// it runs under Node, Bun and Deno, synchronously.
import { Buffer } from 'node:buffer';
import { readFileSync } from 'node:fs';

let compiled;
/** The glue module, compiled once per process, at its first use. */
export const glueModule = () => compiled ??= new WebAssembly.Module(readFileSync(new URL('./lasm-glue.wasm', import.meta.url)));

/** Fields as the glue program reads them. */
export function encodeFields(fields) {
  const parts = [];
  for (const field of fields) {
    const bytes = Buffer.from(field, 'utf8');
    parts.push(Buffer.from(`${bytes.length}:`), bytes);
  }
  return Buffer.concat(parts);
}

/** The fields of a result, as the glue program writes them. */
export function decodeFields(text) {
  const bytes = Buffer.from(text, 'utf8'), fields = [];
  for (let i = 0; i < bytes.length;) {
    const colon = bytes.indexOf(0x3a, i);
    const digits = colon < 0 ? '' : bytes.toString('latin1', i, colon), length = Number(digits);
    if (!/^\d+$/.test(digits) || colon + 1 + length > bytes.length) throw new Error('The glue program wrote a malformed field');
    fields.push(bytes.toString('utf8', colon + 1, colon + 1 + length));
    i = colon + 1 + length;
  }
  return fields;
}

const SUCCESS = 0, BADF = 8, NOSYS = 52, SPIPE = 70;
class Exit { constructor(code) { this.code = code; } }

/** Runs one operation: `{ ok }` with the result, or `{ error }` with the program's message. */
export function runGlue(fields, module = glueModule()) {
  const input = encodeFields(fields);
  let offset = 0, memory;
  const out = [], err = [];
  const view = () => new DataView(memory.buffer);
  const bytes = () => new Uint8Array(memory.buffer);
  const iovecs = (pointer, count) => Array.from({ length: count }, (_, i) =>
    [view().getUint32(pointer + 8 * i, true), view().getUint32(pointer + 8 * i + 4, true)]);
  const name = Buffer.from('lasm-glue\0');
  const host = {
    args_sizes_get(count, size) { view().setUint32(count, 1, true); view().setUint32(size, name.length, true); return SUCCESS; },
    args_get(argv, buffer) { view().setUint32(argv, buffer, true); bytes().set(name, buffer); return SUCCESS; },
    environ_sizes_get(count, size) { view().setUint32(count, 0, true); view().setUint32(size, 0, true); return SUCCESS; },
    environ_get() { return SUCCESS; },
    fd_write(fd, pointer, count, written) {
      if (fd !== 1 && fd !== 2) return BADF;
      let total = 0;
      for (const [at, length] of iovecs(pointer, count)) { (fd === 1 ? out : err).push(bytes().slice(at, at + length)); total += length; }
      view().setUint32(written, total, true);
      return SUCCESS;
    },
    fd_read(fd, pointer, count, read) {
      if (fd !== 0) return BADF;
      let total = 0;
      for (const [at, length] of iovecs(pointer, count)) {
        const chunk = input.subarray(offset, offset + length);
        bytes().set(chunk, at);
        offset += chunk.length;
        total += chunk.length;
        if (chunk.length < length) break;
      }
      view().setUint32(read, total, true);
      return SUCCESS;
    },
    fd_fdstat_get(fd, stat) {
      if (fd > 2) return BADF;
      const v = view();
      v.setUint8(stat, 2); // a character device
      v.setUint16(stat + 2, 0, true);
      v.setBigUint64(stat + 8, 0xffffffffffffffffn, true);
      v.setBigUint64(stat + 16, 0xffffffffffffffffn, true);
      return SUCCESS;
    },
    fd_close: fd => fd > 2 ? BADF : SUCCESS,
    fd_seek: fd => fd > 2 ? BADF : SPIPE,
    fd_prestat_get: () => BADF,
    fd_prestat_dir_name: () => BADF,
    clock_time_get(id, precision, time) {
      view().setBigUint64(time, id === 0 ? BigInt(Date.now()) * 1000000n : BigInt(Math.round(performance.now() * 1e6)), true);
      return SUCCESS;
    },
    clock_res_get(id, resolution) { view().setBigUint64(resolution, 1000n, true); return SUCCESS; },
    random_get(buffer, length) {
      for (let at = 0; at < length; at += 65536) crypto.getRandomValues(bytes().subarray(buffer + at, buffer + Math.min(length, at + 65536)));
      return SUCCESS;
    },
    proc_exit(code) { throw new Exit(code); },
    sched_yield: () => SUCCESS,
  };
  const wasi = {};
  for (const { module: from, name: imported, kind } of WebAssembly.Module.imports(module)) {
    if (from !== 'wasi_snapshot_preview1' || kind !== 'function') throw new Error(`The glue program imports ${from}.${imported}, which its host does not provide`);
    wasi[imported] = host[imported] ?? (() => NOSYS);
  }
  const instance = new WebAssembly.Instance(module, { wasi_snapshot_preview1: wasi });
  memory = instance.exports.memory;
  try {
    instance.exports._start();
  } catch (error) {
    if (!(error instanceof Exit)) throw error;
    if (error.code !== 0) throw new Error(`The glue program exited with status ${error.code}: ${Buffer.concat(err).toString('utf8').trim()}`);
  }
  const text = Buffer.concat(out).toString('utf8');
  if (text.startsWith('ok:')) return { ok: text.slice(3) };
  if (text.startsWith('error:')) return { error: text.slice(6) };
  throw new Error(`The glue program wrote no answer${err.length ? `: ${Buffer.concat(err).toString('utf8').trim()}` : ''}`);
}
