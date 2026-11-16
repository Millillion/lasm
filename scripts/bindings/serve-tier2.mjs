// Tier 2 of the standard bindings, second part: Lasm.JS.Deno and Lasm.JS.Bun, the
// HTTP server entry points of Deno (`Deno.serve`) and Bun (`Bun.serve`) and what a
// handler needs. Lasm.JS.Web's Request and Response are the handler's types.
//
// The source is each runtime's own TypeScript declarations, pinned to the runtime
// version CI runs (the same Deno and Bun as the conformance jobs) and checked
// against SHA-256 hashes in serve-api.lock.json:
//   - Deno: cli/tsc/dts/lib.deno.ns.d.ts and lib.deno_net.d.ts of denoland/deno at
//     the release tag (what `deno types` prints; MIT, Copyright the Deno authors);
//   - Bun: packages/bun-types/serve.d.ts and bun.d.ts of oven-sh/bun at the
//     release tag (the files of the npm package bun-types of the same version;
//     MIT, Copyright Oven and the Bun contributors).
// DECISIONS.md says why these and not the runtimes' prose docs.
//
// scripts/bindings/serve-api.mjs reads the declarations selected here and lowers
// them to WebIDL (scripts/bindings/deno.idl, bun.idl); generate-web.mjs turns that
// into library/Lasm/JS/{Deno,Bun}/*.lean with Lasm.JS.Web's mapping rules
// (docs/JS_BINDINGS.md, "Lasm.JS.Deno and Lasm.JS.Bun").
//
// Declarations are lowered `as` an interface (a handle to an object the runtime
// keeps: a server, a request's info), a dictionary (plain data, copied: options,
// an address) or a callback (a function type).
//
// Selection. Every member of a selected declaration, and every overload of a
// selected function, is either lowered or listed in `exclude` with the reason; the
// lowering fails on a member that is neither, so a new version's additions are
// decided, not dropped. A member or overload whose doc comment says @experimental,
// UNSTABLE or @deprecated is never lowered (the lowering records it as excluded,
// with the tag as the reason).
//
// Types. The declarations' own types are lowered by the rules of serve-api.mjs
// (`string` → DOMString, `T | Promise<T>` → Promise<T>, a union of string literals
// → an enum, a function type → a callback, …). `integers` narrows a `number` that
// the declaration's doc comment describes as a count, port or size (WebIDL `double`
// otherwise): each entry quotes the words of the doc comment it relies on, and the
// lowering fails if they are no longer there. `typeNames` maps the names the
// declarations use that are not selected here (web classes are Lasm.JS.Web's).

import { deno } from './deno-tier2.mjs';
import { bun } from './bun-tier2.mjs';

/** The runtimes, each one Lean module tree Lasm.JS.<name>. */
export const hosts = [
  // Lasm.JS.Deno: the whole Deno namespace (deno-tier2.mjs, lowered by ts-auto.mjs).
  deno,
  // Lasm.JS.Bun: the whole Bun namespace and bun:sqlite (bun-tier2.mjs, lowered by ts-auto.mjs).
  bun,
];
