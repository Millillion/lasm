/-
Lasm.KV: a small key-value store for Lasm.Fetch servers, with one interface
over the platform's own stores:

| `Lasm.KV.open name` on | uses |
| --- | --- |
| Cloudflare Workers with a KV binding `name` (wrangler.toml `[[kv_namespaces]]`) | Workers KV |
| Deno, Deno Deploy (where `Deno.openKv` exists: Deploy, `deno run --unstable-kv`) | Deno KV |
| Fastly Compute with a KV Store `name` (Viceroy: `fastly.toml`'s `[local_server.kv_stores]`) | Fastly KV |
| anywhere else (Node, Bun, WASI, wasi-http; or no such store) | memory: one copy per process, isolate or instance |

Values are strings (JSON, for structured data). Guide: docs/RPC.md.

    let kv ← Lasm.KV.open "TODOS"
    kv.put "state" json
    match ← kv.get "state" with …
-/
import Std.Data.HashMap
import Lasm.JS.Core
import Lasm.Fetch
import Lasm.Fastly

namespace Lasm.KV
open Lasm.JS Std.Async

/-- A key-value store. -/
structure Store where
  /-- Which backend this is (`memory`, `workers`, `deno`, `fastly`). -/
  kind : String
  get : String → Async (Option String)
  put : String → String → Async Unit
  delete : String → Async Unit

instance : Inhabited Store := ⟨{ kind := "none", get := fun _ => pure none, put := fun _ _ => pure (), delete := fun _ => pure () }⟩

/-- A store in memory. -/
def memory : IO Store := do
  let table ← IO.mkRef ({} : Std.HashMap String String)
  return { kind := "memory",
           get := fun k => do return (← table.get)[k]?,
           put := fun k v => table.modify (·.insert k v),
           delete := fun k => table.modify (·.erase k) }

/-- The binding `name` of the edge platform's `env` (Workers), if it is an object. -/
def binding (name : String) : IO (Option Value) := do
  let found : Data ← match ← Lasm.Fetch.platformEnv.get with
    | .ref env _ => (try env.get name Data catch _ => pure .undefined)
    | env@(.object _) => pure (env.field name)
    | _ => pure .undefined
  match found with
  | .ref v _ => return some v
  | _ => return none

/-- Workers KV: the binding `name` of the Worker's `env` (read on every call,
as each request brings it). -/
def workers (name : String) : Store :=
  let ns : IO Value := do
    match ← binding name with
    | some v => pure v
    | none => throw (IO.userError s!"Lasm.KV: no Workers environment with a binding {name}")
  let get (k : String) : Async (Option String) := do
    match ← (← ns).callMethodAwait "get" #[.string k] Data with
    | .string s => return some s
    | _ => return none
  let put (k v : String) : Async Unit := do
    let _ : Data ← (← ns).callMethodAwait "put" #[.string k, .string v]
  let delete (k : String) : Async Unit := do
    let _ : Data ← (← ns).callMethodAwait "delete" #[.string k]
  { kind := "workers", get, put, delete }

/-- Deno KV (`Deno.openKv()`), keys `[name, key]`. -/
def deno (name : String) : IO Store := do
  let g ← global
  let denoNs ← g.get "Deno"
  let kv : Value ← denoNs.callMethodAwait "openKv" #[] Value
  let get (k : String) : Async (Option String) := do
    let entry : Value ← kv.callMethodAwait "get" #[.array #[.string name, .string k]] Value
    match ← entry.get "value" Data with
    | .string s => return some s
    | _ => return none
  let put (k v : String) : Async Unit := do
    let _ : Data ← kv.callMethodAwait "set" #[.array #[.string name, .string k], .string v]
  let delete (k : String) : Async Unit := do
    let _ : Data ← kv.callMethodAwait "delete" #[.array #[.string name, .string k]]
  return { kind := "deno", get, put, delete }

/-- A Fastly KV Store. -/
def fastly (name : String) : Store :=
  { kind := "fastly",
    get := fun k => (Lasm.Fastly.kvGetText name k : IO _),
    put := fun k v => (Lasm.Fastly.kvPut name k v.toUTF8 : IO _),
    delete := fun k => (Lasm.Fastly.kvDelete name k : IO _) }

/-- The platform's store named `name` where there is one (see the module
documentation), else memory. On Workers the binding is looked up per request:
when the Worker has no binding `name`, the store falls back to memory then. -/
def «open» (name : String) : IO Store := do
  match Lasm.Fetch.platformCode () with
  | 2 =>
    -- Fastly: the store must exist (Viceroy: fastly.toml); otherwise memory.
    try
      discard <| Lasm.Fastly.kvGet name "lasm:probe"
      return fastly name
    catch _ => memory
  | 0 =>
    let g ← global
    -- `Deno` is a plain object: read it as a reference (reading a field of
    -- undefined throws elsewhere), then look for openKv.
    let hasDenoKv ← try
        let denoNs ← g.get "Deno" Value
        let f ← denoNs.get "openKv" Data
        pure (f matches .ref _ _)
      catch _ => pure false
    if hasDenoKv then
      try return ← deno name catch _ => memory
    else if ← Lasm.JS.onEdge then
      let mem ← memory
      let w := workers name
      let bound : IO Bool := return (← binding name).isSome
      let get (k : String) : Async (Option String) := do if ← bound then w.get k else mem.get k
      let put (k v : String) : Async Unit := do if ← bound then w.put k v else mem.put k v
      let delete (k : String) : Async Unit := do if ← bound then w.delete k else mem.delete k
      return { kind := "workers or memory", get, put, delete }
    else memory
  | _ => memory

end Lasm.KV
