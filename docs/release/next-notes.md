# Unreleased

## Example apps

- **Conduit and Folio build with 0.7.0 and use `Lasm.Fetch` only for Node.**
  Each platform runs the app's handler with its own server: Cloudflare Workers and
  the edge platforms through the program's default export
  (`Lasm.JS.exportDefault`), Deno with `Deno.serve` (`Lasm.JS.Deno`), Bun with
  `Bun.serve` (`Lasm.JS.Bun`), Fastly Compute on its host calls (`Lasm.Fastly`) and
  wasi-http on the proxy world's interfaces (`Lasm.WASI.Http`). Node keeps
  `Lasm.Fetch`'s server until how Lean servers run on Node is decided. What
  `Lasm.Fetch` provided that has no replacement (embedded static files, the
  request type and its path parsing, outbound HTTP on wasi-http, the Worker's
  `env`) is now code inside each app (`Server/` in both), listed in
  docs/REVIEW.md. Conduit reads its Fastly secret with the generated
  `SecretStore` calls. Every platform each app ran on before is still checked
  in CI, with the same suites and thresholds.

- **Porter builds with 0.7.0 and uses `Lasm.Fetch` only for Node**, as
  Conduit and Folio do: Workers through the default export, Deno with
  `Deno.serve`, Bun with `Bun.serve`. Its request type, embedded files and
  cookie joining are code inside the app (`examples/porter/Server/`).

- **Ledger builds with 0.7.0 and uses `Lasm.Fetch` only for Node**, as
  Conduit and Folio do: Workers through the default export, Deno with
  `Deno.serve`, Bun with `Bun.serve`. Its request type and embedded files are
  code inside the app (`examples/ledger/Server/`).

## Fixes

- **`HTMLCanvasElement.getContext`, `Document.currentScript` and
  `HTMLFormControlsCollection.namedItem` return `none` for `null`.** They were
  `some` of a reference to `null` (an unsupported context id, no current
  script, no such control). The generator now requests a nullable `Value`
  result as data (`Lasm.JS.Web.Support.optionalValue`). Types are unchanged.
