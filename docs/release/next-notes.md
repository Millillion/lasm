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

- **Ledger builds with 0.7.0 and uses `Lasm.Fetch` only for Node**, as
  Conduit and Folio do: Workers through the default export, Deno with
  `Deno.serve`, Bun with `Bun.serve`. Its request type and embedded files are
  code inside the app (`examples/ledger/Server/`).

## Templates

- **`lasm init --template fetch` no longer uses `Lasm.Fetch` except on Node.**
  `Main.lean` is a handler on the web's `Request` and `Response`
  (`Lasm.JS.Web`), served as the program's default export on Bun, Deno,
  Cloudflare Workers and the other edge targets; Node keeps `Lasm.Fetch`'s
  Node server until Lasm's Node server lands. Fastly, wasi:http and WASI each
  get their own program with the same routes on that platform's own
  interface: `--deploy fastly` adds `Fastly.lean` (`Lasm.Fastly`),
  `--deploy wasi-http` and `--deploy spin` add `WasiHttp.lean`
  (`Lasm.WASI.Http`), and `--deploy wasi` adds `Cgi.lean` (a CGI program in
  Lean's `IO`); their `build:<target>` scripts build them. Existing projects
  keep building: `Lasm.Fetch` still ships.

## Fixes

- **`HTMLCanvasElement.getContext`, `Document.currentScript` and
  `HTMLFormControlsCollection.namedItem` return `none` for `null`.** They were
  `some` of a reference to `null` (an unsupported context id, no current
  script, no such control). The generator now requests a nullable `Value`
  result as data (`Lasm.JS.Web.Support.optionalValue`). Types are unchanged.
