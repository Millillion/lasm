/- Conduit on Deno Deploy with Deno KV (Lasm.JS.Deno.Kv): `npm run build:deno-deploy`; locally
`deno run -A --unstable-kv deno/main.mjs`. The program's default export, which Deno serves. The data is
kept under the keys `["conduit", key]` (Server/Kv.lean). Without Deno KV the program fails at start
with an error saying so, rather than keeping the data in memory. JWT_SECRET as everywhere. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.Kv
import Lasm.JS.Deno.Kv
open Lasm.JS Lasm.JS.Deno

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

/-- Deno KV (`Deno.openKv()`) as Conduit's key-value store, opened on the first request. -/
def denoKv : IO Conduit.Server.KvStore := do
  -- A missing Deno KV is an error at start, not a store in memory.
  unless (← (← (← global).get "Deno").get "openKv" Data) matches .ref .. do
    throw (IO.userError "Deno KV is not available: run with deno run --unstable-kv (Deno Deploy has it built in)")
  let opened ← IO.mkRef (none : Option Kv)
  let db : Async Kv := do
    if let some kv ← opened.get then return kv
    let kv ← openKv
    opened.set (some kv)
    return kv
  let key (k : String) : Array KvKeyPart := #[.domString "conduit", .domString k]
  return {
    get := fun k => do
      match (← (← db).get (key k)).value with
      | .string s => return some s
      | _ => return none
    put := fun k v => do discard <| (← db).set (key k) (.string v)
    delete := fun k => do (← db).delete (key k) }

def main : IO Unit := do
  let handler ← Conduit.Server.storeHandler (Conduit.Server.Kv.store (← denoKv)) assets
  exportDefault (Conduit.Server.JsServe.webHandler handler)
