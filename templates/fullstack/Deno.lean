/-
The site on Deno and Deno Deploy (`npm run build:deno`, `build:deno-deploy`):
the program's default export, which Deno serves. The todos are kept in Deno KV
(`Deno.openKv()`: built into Deno Deploy, `deno run --unstable-kv` locally),
under the keys `["TODOS", key]`. Without Deno KV the program fails at start
with an error saying so, rather than keeping the todos in memory.
-/
import JsSite
open Lasm.JS

/-- Deno KV (`Deno.openKv()`) as the site's store. -/
def denoKv : IO Site.Kv := do
  let deno ← (← global).get "Deno"
  unless (← deno.get "openKv" Data) matches .ref .. do
    throw (IO.userError "Deno KV is not available: run with deno run --unstable-kv (Deno Deploy has it built in)")
  let kv : Value ← deno.callMethodAwait "openKv" #[] Value
  return {
    get := fun key => do
      match ← (← kv.callMethodAwait "get" #[.array #[.string "TODOS", .string key]] Value).get "value" Data with
      | .string s => return some s
      | _ => return none
    put := fun key value => do
      let _ : Data ← kv.callMethodAwait "set" #[.array #[.string "TODOS", .string key], .string value] }

def main : IO Unit := do
  exportDefault (JsSite.handle (← denoKv))
