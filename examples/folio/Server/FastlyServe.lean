/-
Serving Folio's site server on Fastly Compute with Fastly's own host calls (Lasm.Fastly,
generated from Fastly's witx; docs/WASI_FASTLY_BINDINGS.md): each instance
answers one request, the downstream request.
-/
import Lasm.Fastly
import Server.Web
open Lasm.Fastly Std.Async

namespace Folio.Server.FastlyServe

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

/-- Answers this instance's request with `handler`. -/
def serve (handler : Web.Handler) : IO Unit := do
  let (h, body) ← (HttpReq.bodyDownstreamGet : IO _)
  let method ← (HttpReq.methodGet h : IO _)
  let url ← (HttpReq.uriGet h : IO _)
  let mut headers := #[]
  for name in ← (HttpReq.headerNamesGet h : IO _) do
    for value in ← (HttpReq.headerValuesGet h name : IO _) do
      headers := headers.push (name, value)
  let bytes ← (readAll body : IO _)
  let r ← (Web.respond handler { method, url, headers, body := bytes }).block
  let resp ← (HttpResp.new : IO _)
  (HttpResp.statusSet resp r.status : IO _)
  for (k, v) in r.headers do (HttpResp.headerAppend resp k v : IO _)
  let out ← (HttpBody.new : IO _)
  unless Web.bodyless method r.status do (writeAll out r.body : IO _)
  (HttpResp.sendDownstream resp out 0 : IO _)

end Folio.Server.FastlyServe
