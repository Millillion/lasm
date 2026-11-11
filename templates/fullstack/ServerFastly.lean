/-
The server on Fastly Compute, on Fastly's own host calls (Lasm.Fastly):
`npm run build:fastly` writes bin/main.wasm and the package Fastly deploys;
`fastly compute serve` runs it locally (Viceroy). Each instance answers one
request: it is passed to the site (Site.lean) as an `Http.Request`. The todos
are kept in the KV Store TODOS (fastly.toml) through Lasm.KV.
-/
import Lasm.Fastly
import Embed
import Site
open Lasm.Fastly

/-- The browser app and public/ (dist/public), embedded in the program. -/
def assets : Http.Assets := embed_dir! "dist/public"

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

def main : IO Unit := do
  let (request, body) ← HttpReq.bodyDownstreamGet
  let method ← HttpReq.methodGet request
  let mut headers := #[]
  for name in ← HttpReq.headerNamesGet request do
    for value in ← HttpReq.headerValuesGet request name.toUTF8 do headers := headers.push (name, value)
  let req : Http.Request := { method, url := ← HttpReq.uriGet request, headers, body := ← readAll body }
  let r ← try (Site.respond (← Lasm.KV.open "TODOS") assets req).block
    catch e => do
      IO.eprintln s!"{method} {req.path}: {e}"
      pure (Http.Response.text "Internal Server Error\n" 500)
  let response ← HttpResp.new
  HttpResp.statusSet response r.status
  for (k, v) in r.headers do HttpResp.headerAppend response k.toUTF8 v.toUTF8
  let out ← HttpBody.new
  unless Http.bodyless method r.status do writeAll out r.body
  HttpResp.sendDownstream response out 0
