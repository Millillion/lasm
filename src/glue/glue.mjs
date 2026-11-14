// Runs the CLI's glue program: the pure parts of the CLI that moved into Lean
// (docs/proposals/M6_GLUE.md), compiled by Lasm into one WASI command,
// lasm-glue.wasm (verification/cli/Lasm/Cli/Glue.lean, built by
// .github/workflows/glue.yml). The request is the program's stdin, a list of
// UTF-8 fields: a 0 byte, their count, a 0 byte and the fields separated by 0
// bytes, or, when a field contains a 0 byte, each field written
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

let scratch = new Uint8Array(1 << 16);
const encoder = new TextEncoder();
/** A request as the glue program reads it, from lists of fields (in order;
 * joining whole lists is what makes it cheap): a 0 byte, the number of fields,
 * a 0 byte and the fields separated by 0 bytes; when a field contains a 0 byte
 * (its separators are then too many), `encodeFields` of them all. The bytes
 * are valid until the next request. */
export function encodeRequest(lists) {
  let count = 0;
  const parts = [];
  for (const list of lists) if (list.length) { count += list.length; parts.push(list.join('\0')); }
  const text = `\0${count}\0${parts.join('\0')}`;
  let separators = 0;
  for (let i = text.indexOf('\0'); i !== -1; i = text.indexOf('\0', i + 1)) separators++;
  if (separators !== count + 1) return encodeFields(lists.flat());
  if (scratch.length < text.length * 3) scratch = new Uint8Array(text.length * 3);
  return scratch.subarray(0, encoder.encodeInto(text, scratch).written);
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
