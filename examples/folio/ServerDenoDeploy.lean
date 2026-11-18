/- Folio's site server on Deno Deploy (`npm run build:deno-deploy`; locally
`deno run -A --unstable-kv deno/main.mjs`): `Server/Edge.lean`'s handler on Deno KV, through
Lasm.JS.Deno's generated `Kv`, keys `["folio", path]`. The program's default export, which Deno
serves. Without Deno KV the program fails at start with an error saying so (never a store in
memory). -/
import Server.Edge
import Server.JsServe
import Lasm.JS.Deno.Kv
open Lasm.JS Lasm.JS.Deno

/-- Deno KV (`Deno.openKv()`, opened on the first request), keys `["folio", path]`, as Folio's store. -/
def denoStore : IO Folio.Edge.Store := do
  -- A missing Deno KV is an error at start, not a store in memory.
  unless (← (← (← global).get "Deno").get "openKv" Data) matches .ref .. do
    throw (IO.userError "Folio: Deno KV is not available: run with deno run --unstable-kv (Deno Deploy has it built in)")
  let opened ← IO.mkRef (none : Option Kv)
  let db : Std.Async.Async Kv := do
    if let some kv ← opened.get then return kv
    let kv ← openKv
    opened.set (some kv)
    return kv
  return { kind := "deno", get := fun k => do
    match (← (← db).get #[.domString Folio.Edge.storeName, .domString k]).value with
    | .string s => return some s
    | _ => return none }

def main : IO Unit := do
  let store ← denoStore
  exportDefault (Folio.Server.JsServe.webHandler (Folio.Edge.handle store))
