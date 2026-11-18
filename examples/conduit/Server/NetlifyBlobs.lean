/-
Netlify Blobs, Netlify's key-value store, for Netlify Edge Functions: the
`@netlify/blobs` package's `getStore` (an npm package: bound here with
`@[js]`), as a `KvStore` (so Conduit's store is `Server/Kv.lean`). The store finds its site and credentials in the
request's context (on Netlify, and in `netlify dev`'s local sandbox), so it
is looked up on every call. Strong consistency: a write is visible to the
next read.
-/
import Lasm.JS
import Server.Kv
open Lasm.JS

namespace Conduit.Server.NetlifyBlobs

/-- `getStore(options)` from @netlify/blobs. -/
@[js "@netlify/blobs" "getStore"] opaque getStore : Data → IO Value

/-- The blob store `name`. -/
def «open» (name : String) : IO KvStore := do
  let store : IO Value := getStore (obj [("name", toJS name), ("consistency", toJS "strong")])
  return {
    get := fun k => do
      match ← (← store).callMethodAwait "get" #[toJS k] Data with
      | .string v => return some v
      | _ => return none
    put := fun k v => do
      let _ ← (← store).callMethodAwait "set" #[toJS k, toJS v] Data
    delete := fun k => do
      let _ ← (← store).callMethodAwait "delete" #[toJS k] Data }

end Conduit.Server.NetlifyBlobs
