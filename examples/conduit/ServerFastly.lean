/- Conduit on Fastly Compute: `npm run build:fastly`; locally `fastly compute serve` (Viceroy,
fastly.toml). The store is the KV Store `conduit`, through Fastly's own KV Store calls
(Lasm.Fastly.KvStore); without it every request fails with an error naming it. JWT_SECRET comes from
the secret store `conduit`. Passwords and tokens are pure Lean (Server/LeanCrypto.lean): Fastly runs
no JavaScript. -/
import Server.Http
import Server.Kv
import Server.LeanCrypto
import Lasm.Fastly
import Server.Embed
import Server.FastlyServe
open Lasm.Fastly

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

/-- `JWT_SECRET` from the secret store `conduit`, else the development secret. -/
def secret : IO String := do
  try
    match ← (found? (SecretStore.get (← SecretStore.open "conduit") "JWT_SECRET") : IO _) with
    | some s => return ← (SecretStore.plaintext s : IO _)
    | none => return Conduit.Server.developmentSecret
  catch _ => return Conduit.Server.developmentSecret

/-- The KV Store `name`; an error naming it when the service has none. -/
def openStore (name : String) : IO KvStoreHandle := do
  try (KvStore.open name : IO KvStoreHandle)
  catch e => throw (IO.userError s!"Fastly KV Store {name} is not available ({e}): link a KV Store named {name} to the service (locally: fastly.toml)")

/-- The KV Store `name` (fastly.toml) as Conduit's key-value store. -/
def kvStore (name : String) : Conduit.Server.KvStore where
  get key := (do
    let kv ← openStore name
    match ← found? (KvStore.lookupWaitV2 (← KvStore.lookup kv key {} {})) with
    | some (body, _, _, .ok) => return String.fromUTF8? (← Conduit.Server.FastlyServe.readAll body)
    | some (_, _, _, .notFound) | none => return none
    | some (_, _, _, e) => throw (IO.userError s!"Fastly KV Store {name}: lookup of {key}: {e}") : IO _)
  put key value := (do
    let kv ← openStore name
    let body ← HttpBody.new
    Conduit.Server.FastlyServe.writeAll body value.toUTF8
    match ← KvStore.insertWait (← KvStore.insert kv key body {} {}) with
    | .ok => pure ()
    | e => throw (IO.userError s!"Fastly KV Store {name}: insert of {key}: {e}") : IO _)
  delete key := (do
    let kv ← openStore name
    match ← KvStore.deleteWait (← KvStore.delete kv key {} {}) with
    | .ok | .notFound => pure ()
    | e => throw (IO.userError s!"Fastly KV Store {name}: delete of {key}: {e}") : IO _)

def main : IO Unit := do
  Conduit.Server.FastlyServe.serve
    (← Conduit.Server.handlerWith (Conduit.Server.Kv.store (kvStore "conduit"))
      (Conduit.Server.LeanCrypto.services secret) assets)
