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

## New: `Lasm.JS.Cloudflare`, Cloudflare Workers' runtime APIs

- **`import Lasm.JS.Cloudflare`** binds the runtime APIs of Cloudflare
  Workers, generated from Cloudflare's own TypeScript declarations
  (`@cloudflare/workers-types` 5.20261019.1, pinned by hash): Workers KV
  (`KVNamespace`), D1 (`D1Database`, prepared statements, batches, sessions),
  R2 (`R2Bucket`, objects, ranges, conditions, checksums, multipart uploads),
  Durable Objects (namespaces, ids, stubs, `DurableObjectState` and its
  storage, transactions and alarms), Queues (`Queue.send`, `sendBatch`;
  `MessageBatch` and `Message` in the queue handler), the handler's
  `ExecutionContext` (`waitUntil`, `passThroughOnException`), the Cache API
  (`caches`), TCP sockets (`connect` of `cloudflare:sockets`) and `env` of
  `cloudflare:workers`. Lasm.JS.Web's `Request`, `Response` and streams are
  their web types. A Worker publishes an `ExportedHandler` with `fetch`,
  `scheduled` and `queue`:

  ```lean
  import Lasm.JS.Cloudflare
  open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

  def main : IO Unit := do
    let fetch ← ExportedHandlerFetchHandler.ofFn fun request env _ctx => do
      let kv ← IO.ofExcept (readField KVNamespace env "KV")
      let hits := ((← kv.get "hits").bind String.toNat?).getD 0
      kv.put "hits" (.domString (toString (hits + 1)))
      Response.new (some (.usvString s!"{hits + 1}")) none
    let scheduled ← ExportedHandlerScheduledHandler.ofFn fun controller env _ => do
      let kv ← IO.ofExcept (readField KVNamespace env "KV")
      kv.put "last-cron" (.domString (← controller.cron))
    exportDefault ({ fetch := some fetch, scheduled := some scheduled } : ExportedHandler)
  ```

  Build with `lasm build Main.lean --target workers`. A Durable Object's
  class stays a few lines of JavaScript that call Lean functions. Guide,
  coverage and mapping rules: docs/JS_BINDINGS.md, "Cloudflare Workers:
  Lasm.JS.Cloudflare". Tested under `wrangler dev` with local emulation only.
- **`Lasm.JS.exportDefault` takes any `ToJS` value** (it took a `Value`), so a
  handler object such as an `ExportedHandler` can be published as it is.
  Programs that pass a `Value` are unchanged.
- **The Workers entry forwards cron triggers and queue batches.** The
  generated `workers/worker.mjs` now exports `scheduled` and `queue` besides
  `fetch`, calling the published object's methods of those names (a handler
  without them fails those events with a message saying so), and imports
  `cloudflare:workers` and `cloudflare:sockets` for `Lasm.JS.Cloudflare`.
