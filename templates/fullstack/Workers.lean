/-
The site on Cloudflare Workers (`npm run build:workers`): the Worker's fetch
handler, with its bindings typed. The todos are kept in the KV namespace bound
as TODOS (wrangler.toml); without that binding every request fails with an
error naming it, rather than keeping the todos in memory.
-/
import JsSite
import Lasm.JS
import Lasm.JS.Cloudflare.Kv
import Lasm.JS.Cloudflare.Workers
open Lasm.JS Lasm.JS.Cloudflare

/-- The Worker's bindings (wrangler.toml). -/
structure Env where
  TODOS : KVNamespace
  deriving FromJS

/-- The KV namespace as the site's store. -/
def store (ns : KVNamespace) : Site.Kv where
  get key := ns.get key
  put key value := ns.put key (.domString value)

def main : IO Unit := do
  exportDefault (← ExportedHandlerFetchHandler.ofFn fun request (env : Env) _ctx =>
    JsSite.handle (store env.TODOS) request)
