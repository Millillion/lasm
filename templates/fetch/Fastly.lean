/-
The routes of Main.lean on Fastly Compute, on Fastly's own host calls
(Lasm.Fastly): `npm run build:fastly` writes bin/main.wasm and the package
Fastly deploys; `fastly compute serve` runs it locally (Viceroy), one instance
per request.
-/
import App
import Lasm.Fastly
import Lean.Data.Json
open Lasm.Fastly Lean

/-- Decodes `%XX` escapes; text that is not valid UTF-8 afterwards is kept as it was. -/
def percentDecode (s : String) : String := Id.run do
  let hex (b : UInt8) : Option UInt8 :=
    if 48 ≤ b && b ≤ 57 then some (b - 48) else if 65 ≤ b && b ≤ 70 then some (b - 55)
    else if 97 ≤ b && b ≤ 102 then some (b - 87) else none
  let bytes := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < bytes.size do
    if bytes[i]! == 37 && i + 2 < bytes.size then
      if let (some h, some l) := (hex bytes[i + 1]!, hex bytes[i + 2]!) then
        out := out.push (h * 16 + l); i := i + 3; continue
    out := out.push bytes[i]!
    i := i + 1
  return (String.fromUTF8? out).getD s

/-- The path's segments of the request's URL (`https://host/a/b?q`), decoded,
as a URL parser resolves them on the JavaScript runtimes (so every target
routes a path alike): `\` counts as `/`, and `.`, `..` and their escaped forms
(`%2e`) are removed. -/
def segments (url : String) : List String :=
  let afterScheme := match url.splitOn "://" with | _ :: rest@(_ :: _) => "://".intercalate rest | _ => url
  let path := ((afterScheme.dropWhile (fun c => c != '/' && c != '\\')).takeWhile (fun c => c != '?' && c != '#')).toString
  let raw := (path.splitOn "/").flatMap (·.splitOn "\\")
  let resolved := raw.foldl (init := ([] : List String)) fun stack s =>
    match percentDecode s with
    | ".." => stack.drop 1
    | "." => stack
    | _ => s :: stack
  resolved.reverse.filter (· ≠ "") |>.map percentDecode

/-- A body's bytes, read to its end. -/
partial def readAll (body : BodyHandle) (acc : ByteArray := .empty) : EIO FastlyStatus ByteArray := do
  let chunk ← HttpBody.read body 65536
  if chunk.isEmpty then return acc else readAll body (acc ++ chunk)

/-- Writes all of `bytes` (a write may take part of them). -/
partial def writeAll (body : BodyHandle) (bytes : ByteArray) : EIO FastlyStatus Unit := do
  if bytes.isEmpty then return
  let n ← HttpBody.write body bytes .back
  writeAll body (bytes.extract n.toNat bytes.size)

/-- Sends the response downstream: status, content type and body (none for `HEAD`). -/
def send (status : UInt16) (contentType : String) (bytes : ByteArray) (head : Bool) : IO Unit := do
  let response ← HttpResp.new
  HttpResp.statusSet response status
  HttpResp.headerAppend response "content-type" contentType
  let body ← HttpBody.new
  unless head do writeAll body bytes
  HttpResp.sendDownstream response body 0

def json (fields : List (String × Json)) : UInt16 × String × ByteArray :=
  (200, "application/json", (Json.mkObj fields).compress.toUTF8)

def main : IO Unit := do
  let (request, body) ← HttpReq.bodyDownstreamGet
  let method ← HttpReq.methodGet request
  let (status, contentType, bytes) ← match (if method == "HEAD" then "GET" else method), segments (← HttpReq.uriGet request) with
    | "GET", [] => pure (json [("message", "Hello from Lean!")])
    | "GET", ["hello", name] => pure (json [("message", App.greet name)])
    | "POST", ["echo"] =>
      let contentType := (← found? (HttpReq.headerValueGet request "content-type")).getD "application/octet-stream"
      pure (200, contentType, ← readAll body)
    | "GET", ["health"] => pure (json [("ok", true)])
    | _, _ => pure (404, "text/plain; charset=utf-8", "Not Found\n".toUTF8)
  send status contentType bytes (method == "HEAD")
