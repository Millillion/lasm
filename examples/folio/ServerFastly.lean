/- Folio's site server on Fastly Compute (`npm run build:fastly`; locally
`viceroy serve -C fastly.toml bin/main.wasm`): `Server/Edge.lean`'s handler on the KV Store `folio`
(fastly.toml), through Lasm.Fastly's generated KV Store calls, served on Fastly's own host calls
(`Server/FastlyServe.lean`), one request per instance. Fastly runs no JavaScript. Without the KV
Store every request fails with an error naming it (never a store in memory). -/
import Server.Edge
import Server.FastlyServe
import Lasm.Fastly
open Lasm.Fastly

/-- The KV Store `folio` (fastly.toml) as Folio's store; an error naming it when the service has none. -/
def fastlyStore : IO Folio.Edge.Store := do
  let name := Folio.Edge.storeName
  let store ← try (KvStore.open name : IO KvStoreHandle) catch e =>
    throw (IO.userError s!"Folio: Fastly KV Store {name} is not available ({e}): link a KV Store named {name} to the service (locally: fastly.toml [local_server.kv_stores])")
  let get (key : String) : IO (Option String) := do
    match ← (found? (KvStore.lookupWaitV2 (← KvStore.lookup store key {} {})) : IO _) with
    | some (body, _, _, .ok) => return String.fromUTF8? (← (Folio.Server.FastlyServe.readAll body : IO _))
    | some (_, _, _, .notFound) | none => return none
    | some (_, _, _, e) => throw (IO.userError s!"Fastly KV Store {name}: lookup of {key}: {e}")
  return { kind := "fastly", get := fun k => (get k : IO _) }

def main : IO Unit := do
  Folio.Server.FastlyServe.serve (Folio.Edge.handle (← fastlyStore))
