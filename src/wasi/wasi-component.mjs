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
//
// The splicing is Lean: the model verification/cli/Lasm/Cli/Model/WasiComponent.lean,
// compiled by Lasm into the CLI's glue program (src/glue/glue.mjs,
// docs/proposals/M6_GLUE.md) through its proved fast versions
// (Lasm/Cli/Fast/WasiComponent.lean). What stays here is reading the template
// and taking any array of bytes.
import { readFileSync } from 'node:fs';
import { encodeByteRequest, runRequest } from '../glue/glue.mjs';

export const httpHandlerExport = 'wasi:http/incoming-handler@0.2.12#handle';
const templateUrl = new URL('./component/proxy-template.wasm', import.meta.url);

const asBytes = value => value instanceof Uint8Array ? value : new Uint8Array(value);
/** Runs one of the glue program's operations on bytes. */
function run(operation, ...fields) {
  const result = runRequest(encodeByteRequest(operation, fields.map(asBytes)), undefined, true);
  if ('error' in result) throw new Error(result.error);
  return result.ok;
}

/** The template's stand-in for the main module: an empty module with a custom section. */
export const placeholderModule = () => run('placeholderModule');

/** Replaces the core module section that starts with `prefix` (wasm-tools
 * appends custom sections, such as its producers record, to the main module)
 * by `to` followed by the same suffix. */
export const replaceCoreModule = (component, prefix, to) => run('replaceCoreModule', component, prefix, to);

/** The program's wasi-http component. */
export const componentize = (core, template = readFileSync(templateUrl)) => run('componentize', core, template);

/** The template of a component wasm-tools made from `core`. */
export const makeTemplate = (component, core) => run('makeTemplate', component, core);

/** A module without its `component-type*` custom sections (what wasm-tools embeds). */
export const withoutComponentType = module => run('withoutComponentType', module);

/** The program's core module in a component made by `componentize`. */
export const extractCore = (component, template = readFileSync(templateUrl)) => run('extractCore', component, template);
