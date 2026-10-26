// The wasi-http component of `lasm build --target wasi-http` (docs/WASI.md).
//
// A component wraps the program's core module with Wasmtime's
// wasi_snapshot_preview1 proxy adapter (libc's preview 1 calls become
// wasi:cli/wasi:io/wasi:clocks/wasi:random calls) and the canonical ABI glue
// that `wasm-tools component new` generates. Every Lasm program's core module
// has the same imports and exports (src/wasi/lasm_wasi_http.c references all
// of them; wasi-link.mjs keeps only the world's exports), so that wrapper is
// the same for every program: Lasm ships it once, as a template whose main
// module is a placeholder (component/proxy-template.wasm, made by
// scripts/wasi/make-component-template.mjs with pinned wasm-tools in CI, which
// also checks that splicing a program into it gives wasm-tools' own output
// byte for byte). A build splices the program's module into the template: no
// wasm-tools, Rust or Python is needed.
import { readFileSync } from 'node:fs';

export const httpHandlerExport = 'wasi:http/incoming-handler@0.2.12#handle';
const templateUrl = new URL('./component/proxy-template.wasm', import.meta.url);

/** The template's stand-in for the main module: an empty module with a custom section. */
export function placeholderModule() {
  const name = new TextEncoder().encode('lasm:main-module');
  const payload = [name.length, ...name];
  return Uint8Array.from([0, 0x61, 0x73, 0x6d, 1, 0, 0, 0, 0, payload.length, ...payload]);
}

const leb = value => { const out = []; do { let b = value & 0x7f; value = Math.floor(value / 128); if (value) b |= 0x80; out.push(b); } while (value); return out; };
function readLeb(bytes, at) {
  let result = 0, shift = 0, b;
  do { b = bytes[at++]; result += (b & 0x7f) * 2 ** shift; shift += 7; } while (b & 0x80);
  return [result, at];
}
/** A component's top-level sections: [{ id, start, end }] (payload offsets). */
function sections(bytes) {
  if (bytes[0] !== 0 || bytes[1] !== 0x61 || bytes[2] !== 0x73 || bytes[3] !== 0x6d || bytes[6] !== 1 || bytes[7] !== 0)
    throw new Error('Not a WebAssembly component');
  const list = [];
  for (let at = 8; at < bytes.length;) {
    const id = bytes[at];
    const [size, start] = readLeb(bytes, at + 1);
    list.push({ id, start, end: start + size });
    at = start + size;
  }
  return list;
}
const startsWith = (a, prefix) => a.length >= prefix.length && prefix.every((x, i) => x === a[i]);

/** Replaces the core module section that starts with `prefix` (wasm-tools
 * appends custom sections, such as its producers record, to the main module)
 * by `to` followed by the same suffix. */
export function replaceCoreModule(component, prefix, to) {
  const found = sections(component).filter(s => s.id === 1 && startsWith(component.subarray(s.start, s.end), prefix));
  if (found.length !== 1) throw new Error(`The component has ${found.length} matching core modules (expected one)`);
  const [s] = found;
  const suffix = component.subarray(s.start + prefix.length, s.end);
  const module = new Uint8Array(to.length + suffix.length);
  module.set(to, 0); module.set(suffix, to.length);
  const header = [1, ...leb(module.length)];
  const headerStart = s.start - leb(s.end - s.start).length - 1;
  const out = new Uint8Array(headerStart + header.length + module.length + component.length - s.end);
  out.set(component.subarray(0, headerStart), 0);
  out.set(header, headerStart);
  out.set(module, headerStart + header.length);
  out.set(component.subarray(s.end), headerStart + header.length + module.length);
  return out;
}

/** The program's wasi-http component. */
export function componentize(core, template = readFileSync(templateUrl)) {
  return replaceCoreModule(new Uint8Array(template), placeholderModule(), core instanceof Uint8Array ? core : new Uint8Array(core));
}

/** The template of a component wasm-tools made from `core`. */
export function makeTemplate(component, core) {
  return replaceCoreModule(new Uint8Array(component), new Uint8Array(core), placeholderModule());
}

/** A module without its `component-type*` custom sections (what wasm-tools embeds). */
export function withoutComponentType(module) {
  const out = [module.subarray(0, 8)];
  for (let at = 8; at < module.length;) {
    const id = module[at];
    const [size, start] = readLeb(module, at + 1);
    let drop = false;
    if (id === 0) { const [n, nameStart] = readLeb(module, start); drop = new TextDecoder().decode(module.subarray(nameStart, nameStart + n)).startsWith('component-type'); }
    if (!drop) out.push(module.subarray(at, start + size));
    at = start + size;
  }
  const result = new Uint8Array(out.reduce((n, p) => n + p.length, 0));
  let offset = 0; for (const p of out) { result.set(p, offset); offset += p.length; }
  return result;
}

/** The program's core module in a component made by `componentize`. */
export function extractCore(component, template = readFileSync(templateUrl)) {
  const t = new Uint8Array(template), placeholder = placeholderModule();
  const modules = sections(t).filter(s => s.id === 1);
  const index = modules.findIndex(s => startsWith(t.subarray(s.start, s.end), placeholder));
  if (index < 0) throw new Error('The component template has no placeholder module');
  const suffixLength = modules[index].end - modules[index].start - placeholder.length;
  const c = new Uint8Array(component);
  const main = sections(c).filter(s => s.id === 1)[index];
  return c.slice(main.start, main.end - suffixLength);
}
