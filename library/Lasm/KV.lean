/-
Lasm.KV: a small key-value store for servers, with one interface over the
platform's own stores:

| `Lasm.KV.open name` on | uses |
| --- | --- |
| Cloudflare Workers with a KV binding `name` (wrangler.toml `[[kv_namespaces]]`), once the fetch handler passed its `env` to `setWorkersEnv` | Workers KV |
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

/-- The memory store's contents. `get`, `put` and `delete` of the memory
store are these functions on the table it holds, which is what its proofs
are about (library/Lasm/KV/Spec.lean). -/
abbrev Table := Std.HashMap String String

/-- The value of `key`, if any. -/
def Table.read (t : Table) (key : String) : Option String := t[key]?
/-- The table with `key` set to `value`. -/
def Table.write (t : Table) (key value : String) : Table := t.insert key value
/-- The table without `key`. -/
def Table.remove (t : Table) (key : String) : Table := t.erase key

/-- A store in memory. -/
def memory : IO Store := do
  let table ← IO.mkRef ({} : Table)
  return { kind := "memory",
           get := fun k => do return Table.read (← table.get) k,
           put := fun k v => table.modify (Table.write · k v),
           delete := fun k => table.modify (Table.remove · k) }

/-- Cloudflare Workers' `env` (its bindings: KV namespaces, D1, variables), as
the last request brought it; `.undefined` until then and elsewhere. -/
initialize workersEnv : IO.Ref Data ← IO.mkRef .undefined

/-- Records the `env` that Workers passed to the fetch handler
(`(request, env, ctx) => …`), so that the stores `open` made find their
bindings. Call it at the start of every request: Workers may pass a new
`env` with each. -/
def setWorkersEnv (env : Data) : IO Unit := do
  match env with
  | .ref _ _ | .object _ => workersEnv.set env
  | _ => pure ()

/-- The binding `name` of Workers' `env` (`setWorkersEnv`), if it is an object. -/
def binding (name : String) : IO (Option Value) := do
  let found : Data ← match ← workersEnv.get with
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

namespace FastlyKV
open Lasm.Fastly

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` to `body` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

def get (name key : String) : IO (Option String) := do
  let store ← KvStore.open name
  -- A missing key: KvError.notFound (or the status $none).
  match ← found? (KvStore.lookupWaitV2 (← KvStore.lookup store key {} {})) with
  | some (body, _, _, .ok) => return String.fromUTF8? (← readAll body)
  | some (_, _, _, .notFound) | none => return none
  | some (_, _, _, e) => throw (IO.userError s!"Lasm.KV: Fastly KV Store {name}: lookup of {key}: {e}")

def put (name key value : String) : IO Unit := do
  let store ← KvStore.open name
  let body ← HttpBody.new
  writeAll body value.toUTF8
  match ← KvStore.insertWait (← KvStore.insert store key body {} {}) with
  | .ok => pure ()
  | e => throw (IO.userError s!"Lasm.KV: Fastly KV Store {name}: insert of {key}: {e}")

def delete (name key : String) : IO Unit := do
  let store ← KvStore.open name
  match ← KvStore.deleteWait (← KvStore.delete store key {} {}) with
  | .ok | .notFound => pure ()
  | e => throw (IO.userError s!"Lasm.KV: Fastly KV Store {name}: delete of {key}: {e}")

end FastlyKV

/-- A Fastly KV Store (Lasm.Fastly.KvStore). -/
def fastly (name : String) : Store :=
  { kind := "fastly",
    get := fun k => (FastlyKV.get name k : IO _),
    put := fun k v => (FastlyKV.put name k v : IO _),
    delete := fun k => (FastlyKV.delete name k : IO _) }

/-- The platform's store named `name` where there is one (see the module
documentation), else memory. On Workers the binding is looked up per request:
when the Worker has no binding `name`, the store falls back to memory then. -/
def «open» (name : String) : IO Store := do
  -- Fastly: the store must exist (Viceroy: fastly.toml). Elsewhere every
  -- Lasm.Fastly call fails (`unsupported`), so this finds no store.
  let onFastly ← try
      discard <| (Lasm.Fastly.KvStore.open name : IO _)
      pure true
    catch _ => pure false
  if onFastly then return fastly name
  -- WASI, wasi-http, Fastly without the store, native Lean: memory.
  if !Lasm.JS.isAvailable then return ← memory
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

end Lasm.KV
