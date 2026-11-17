/-
The site on Deno and Deno Deploy (`npm run build:deno`, `build:deno-deploy`):
the program's default export, which Deno serves. The todos are kept in Deno KV
(`Deno.openKv()`, Lasm.JS.Deno.Kv: built into Deno Deploy, `deno run
--unstable-kv` locally), under the keys `["TODOS", key]`. Without Deno KV the
program fails at start with an error saying so, rather than keeping the todos
in memory.
-/
import JsSite
import Lasm.JS.Deno.Kv
open Lasm.JS Lasm.JS.Deno

/-- Deno KV as the site's store, opened on the first request. -/
def denoKv : IO Site.Kv := do
  -- A missing Deno KV is an error at start, not a store in memory.
  unless (← (← (← global).get "Deno").get "openKv" Data) matches .ref .. do
    throw (IO.userError "Deno KV is not available: run with deno run --unstable-kv (Deno Deploy has it built in)")
  let opened ← IO.mkRef (none : Option Kv)
  let db : Async Kv := do
    if let some kv ← opened.get then return kv
    let kv ← openKv
    opened.set (some kv)
    return kv
  let key (k : String) : Array KvKeyPart := #[.domString "TODOS", .domString k]
  return {
    get := fun k => do
      match (← (← db).get (key k)).value with
      | .string s => return some s
      | _ => return none
    put := fun k v => do discard <| (← db).set (key k) (.string v) }

def main : IO Unit := do
  exportDefault (JsSite.handle (← denoKv))
