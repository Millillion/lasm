/-
The server on Fastly Compute, on Fastly's own host calls (Lasm.Fastly):
`npm run build:fastly` writes bin/main.wasm and the package Fastly deploys;
`fastly compute serve` runs it locally (Viceroy). Each instance answers one
request: it is passed to the site (Site.lean) as an `Http.Request`. The todos
are kept in the KV Store TODOS (fastly.toml), through Fastly's own KV Store
calls; without that store every request fails with an error naming it.
-/
import Lasm.Fastly
import Site
open Lasm.Fastly

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

/-- The KV Store TODOS as the site's store. -/
def store : Site.Kv where
  get key := (do
    let kv ← KvStore.open "TODOS"
    match ← found? (KvStore.lookupWaitV2 (← KvStore.lookup kv key {} {})) with
    | some (body, _, _, .ok) => return String.fromUTF8? (← readAll body)
    | some (_, _, _, .notFound) | none => return none
    | some (_, _, _, e) => throw (IO.userError s!"Fastly KV Store TODOS: lookup of {key}: {e}") : IO _)
  put key value := (do
    let kv ← KvStore.open "TODOS"
    let body ← HttpBody.new
    writeAll body value.toUTF8
    match ← KvStore.insertWait (← KvStore.insert kv key body {} {}) with
    | .ok => pure ()
    | e => throw (IO.userError s!"Fastly KV Store TODOS: insert of {key}: {e}") : IO _)

def main : IO Unit := do
  let (request, body) ← HttpReq.bodyDownstreamGet
  let method ← HttpReq.methodGet request
  let mut headers := #[]
  for name in ← HttpReq.headerNamesGet request do
    for value in ← HttpReq.headerValuesGet request name.toUTF8 do headers := headers.push (name, value)
  let req : Http.Request := { method, url := ← HttpReq.uriGet request, headers, body := ← readAll body }
  let r ← try (Site.respond store req).block
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  let response ← HttpResp.new
  HttpResp.statusSet response r.status
  for (k, v) in r.headers do HttpResp.headerAppend response k.toUTF8 v.toUTF8
  let out ← HttpBody.new
  unless Http.bodyless method r.status do writeAll out r.body
  HttpResp.sendDownstream response out 0
