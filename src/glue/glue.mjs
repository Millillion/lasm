// Runs the CLI's glue program: the pure parts of the CLI that moved into Lean
// (docs/proposals/M6_GLUE.md), compiled by Lasm into one WASI command,
// lasm-glue.wasm (verification/cli/Lasm/Cli/Glue.lean, built by
// .github/workflows/glue.yml). The request is the program's stdin, a list of
// UTF-8 fields: a table of the distinct fields and each field's index in it
// (encodeRequest), or, when a field contains a 0 byte, each field written
// `<length>:<UTF-8 bytes>`. Its stdout is `ok:` and the result or `error:`
// and a message. The WASI host below is the least the program needs: reading
// stdin, writing stdout and stderr, a clock that always reads 0 (Lean's
// runtime reads one as it starts) and exiting; every other call (files,
// arguments, environment, random bytes) fails with ENOSYS. It uses only
// WebAssembly, Buffer and TextEncoder, so it runs under Node, Bun and Deno,
// synchronously.
import { Buffer } from 'node:buffer';
import { readFileSync } from 'node:fs';

let compiled;
/** The glue module, compiled once per process, at its first use. */
export const glueModule = () => compiled ??= new WebAssembly.Module(readFileSync(new URL('./lasm-glue.wasm', import.meta.url)));

/** Fields written `<length>:<UTF-8 bytes>`, the program's second way to read them. */
export function encodeFields(fields) {
  let text = '';
  for (const field of fields) text += `${Buffer.byteLength(field)}:${field}`;
  return Buffer.from(text);
}

const encoder = new TextEncoder();
/** A request as the glue program reads it, from lists of fields (in order):
 * a table of the distinct fields and each field's index in it (the byte 1,
 * the number of distinct fields and of fields, each field's index, all 32-bit
 * little-endian, then the distinct fields separated by 0 bytes); with no
 * fields, or when a field contains a 0 byte (the table's separators are then
 * too many), `encodeFields` of them all. */
export function encodeRequest(lists) {
  let count = 0;
  for (const list of lists) count += list.length;
  const index = new Map(), table = [], indices = new Uint32Array(count);
  let k = 0;
  for (const list of lists) for (const field of list) {
    let i = index.get(field);
    if (i === undefined) { i = table.length; index.set(field, i); table.push(field); }
    indices[k++] = i;
  }
  const text = table.join('\0');
  let separators = 0;
  for (let i = text.indexOf('\0'); i !== -1; i = text.indexOf('\0', i + 1)) separators++;
  if (!count || separators !== table.length - 1) return encodeFields(lists.flat());
  const start = 9 + 4 * count, bytes = new Uint8Array(start + text.length * 3), view = new DataView(bytes.buffer);
  bytes[0] = 1;
  view.setUint32(1, table.length, true);
  view.setUint32(5, count, true);
  for (let j = 0; j < count; j++) view.setUint32(9 + 4 * j, indices[j], true);
  return bytes.subarray(0, start + encoder.encodeInto(text, bytes.subarray(start)).written);
}

/** The fields of a result, as the glue program writes them. */
export function decodeFields(text) {
  const bytes = Buffer.from(text), fields = [];
  for (let i = 0; i < bytes.length;) {
    const colon = bytes.indexOf(0x3a, i);
    const digits = colon < 0 ? '' : bytes.toString('latin1', i, colon), length = Number(digits);
    if (!/^\d+$/.test(digits) || colon + 1 + length > bytes.length) throw new Error('The glue program wrote a malformed field');
    fields.push(bytes.toString(undefined, colon + 1, colon + 1 + length));
    i = colon + 1 + length;
  }
  return fields;
}

const SUCCESS = 0, BADF = 8, NOSYS = 52;
class Exit { constructor(code) { this.code = code; } }

/** Runs one operation, its fields in one list: `{ ok }` with the result, or `{ error }` with the program's message. */
export const runGlue = (fields, module = glueModule()) => runRequest(encodeRequest([fields]), module);

/** Runs one encoded request (`encodeRequest`). */
export function runRequest(input, module = glueModule()) {
  let offset = 0, memory;
  const out = [], err = [];
  const view = () => new DataView(memory.buffer);
  const bytes = () => new Uint8Array(memory.buffer);
  const iovecs = (pointer, count) => Array.from({ length: count }, (_, i) =>
    [view().getUint32(pointer + 8 * i, true), view().getUint32(pointer + 8 * i + 4, true)]);
  const host = {
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
    fd_write(fd, pointer, count, written) {
      if (fd !== 1 && fd !== 2) return BADF;
      let total = 0;
      for (const [at, length] of iovecs(pointer, count)) { (fd === 1 ? out : err).push(bytes().slice(at, at + length)); total += length; }
      view().setUint32(written, total, true);
      return SUCCESS;
    },
    // The program's time stands still: every clock reads 0.
    clock_time_get(id, precision, time) { view().setBigUint64(time, 0n, true); return SUCCESS; },
    proc_exit(code) { throw new Exit(code); },
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
