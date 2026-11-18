/- Folio's site server on Cloudflare Workers (`npm run build:workers`, then `npx wrangler dev`):
`Server/Edge.lean`'s handler on Workers KV. The Worker's fetch handler, the program's default export,
receives its bindings typed (`Env`): the KV namespace `folio` (wrangler.toml), read through
Lasm.JS.Cloudflare's generated `KVNamespace`. Without that binding every request fails with an
error naming it (never a store in memory). -/
import Server.Edge
import Server.JsServe
import Lasm.JS.Cloudflare.Kv
import Lasm.JS.Cloudflare.Workers
open Lasm.JS Lasm.JS.Cloudflare

/-- The Worker's bindings (wrangler.toml). -/
structure Env where
  folio : KVNamespace
  deriving FromJS

/-- Workers KV, the namespace bound as `folio`, as Folio's store. -/
def workersStore (env : Env) : Folio.Edge.Store :=
  { kind := "workers", get := fun k => env.folio.get k }

def main : IO Unit := do
  exportDefault (← ExportedHandlerFetchHandler.ofFn fun request (env : Env) _ctx =>
    Folio.Server.JsServe.webHandler (Folio.Edge.handle (workersStore env)) request)
