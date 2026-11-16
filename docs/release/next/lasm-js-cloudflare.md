## New: `Lasm.JS.Cloudflare`, Cloudflare Workers' runtime APIs

- **`Lasm.JS.Cloudflare.*`** (`import Lasm.JS.Cloudflare.Kv`, `.D1`, `.Workers`, …) binds the runtime APIs of Cloudflare
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
  import Lasm.JS
  import Lasm.JS.Cloudflare.Kv
  import Lasm.JS.Cloudflare.Workers
  import Lasm.JS.Cloudflare.Handlers
  open Lasm.JS Lasm.JS.Web Lasm.JS.Cloudflare

  structure Env where
    KV : KVNamespace     -- wrangler.toml: [[kv_namespaces]] binding = "KV"
    deriving FromJS

  def main : IO Unit := do
    let fetch ← ExportedHandlerFetchHandler.ofFn fun _request (env : Env) ctx => do
      let hits := ((← env.KV.get "hits").bind String.toNat?).getD 0
      ctx.waitUntil (← Async.toPromise (env.KV.put "hits" (.domString (toString (hits + 1)))))
      Response.new (some (.usvString s!"{hits + 1}")) none
    let scheduled ← ExportedHandlerScheduledHandler.ofFn fun controller (env : Env) _ => do
      env.KV.put "last-cron" (.domString (← controller.cron))
    exportDefault ({ fetch := some fetch, scheduled := some scheduled } : ExportedHandler)
  ```

  The handlers receive the Worker's `env` typed: the program declares its
  bindings as a structure with `deriving FromJS`, and each handler's `ofFn` takes
  it as a type parameter (`Data` also works). Build with
  `lasm build Main.lean --target workers`. A Durable Object's
  class stays a few lines of JavaScript that call Lean functions. Guide,
  coverage and mapping rules: docs/JS_BINDINGS.md, "Cloudflare Workers:
  Lasm.JS.Cloudflare". Tested under `wrangler dev` with local emulation only.
- **New: `Lasm.JS.Async.toPromise : Async α → IO Value`** starts a Lean `Async`
  computation and returns a JavaScript promise of its result, for APIs that take
  a promise of running work (Workers' `ctx.waitUntil`, `state.waitUntil`).
- **`Lasm.JS.exportDefault` takes any `ToJS` value** (it took a `Value`), so a
  handler object such as an `ExportedHandler` can be published as it is.
  Programs that pass a `Value` are unchanged.
- **The Workers entry forwards cron triggers and queue batches.** The
  generated `workers/worker.mjs` now exports `scheduled` and `queue` besides
  `fetch`, calling the published object's methods of those names (a handler
  without them fails those events with a message saying so), and imports
  `cloudflare:workers` and `cloudflare:sockets` for `Lasm.JS.Cloudflare`.
