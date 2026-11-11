# Unreleased

## Example apps

- **Conduit and Folio build with 0.7.0 and no longer use `Lasm.Fetch`.** Each
  platform runs the app's handler with its own server: Cloudflare Workers and
  the edge platforms through the program's default export
  (`Lasm.JS.exportDefault`), Deno with `Deno.serve` (`Lasm.JS.Deno`), Bun with
  `Bun.serve` (`Lasm.JS.Bun`), Node through the npm package `@hono/node-server`
  (an `@[js]` binding), Fastly Compute on its host calls (`Lasm.Fastly`) and
  wasi-http on the proxy world's interfaces (`Lasm.WASI.Http`). What
  `Lasm.Fetch` provided that has no replacement (embedded static files, the
  request type and its path parsing, outbound HTTP on wasi-http, the Worker's
  `env`) is now code inside each app (`Server/` in both), listed in
  docs/REVIEW.md. Conduit reads its Fastly secret with the generated
  `SecretStore` calls. Every platform each app ran on before is still checked
  in CI, with the same suites and thresholds.
