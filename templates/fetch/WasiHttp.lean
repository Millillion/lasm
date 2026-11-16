/-
The routes of Handler.lean as a wasi:http component, on the wasi:http proxy
world's own interfaces (Lasm.WASI.Http): `npm run build:wasi-http` writes
wasi-http/main.wasm; `wasmtime serve wasi-http/main.wasm`, Spin or any other
wasi:http host serves it, one instance per request.
-/
import App
import Lasm.WASI.Http
import Lean.Data.Json
open Lasm.WASI.Http Lasm.WASI.Http.Types Lean

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

/-- The path's segments, decoded, as a URL parser resolves them on the
JavaScript runtimes (so every target routes a path alike): `\` counts as `/`,
and `.`, `..` and their escaped forms (`%2e`) are removed. -/
def segments (pathWithQuery : String) : List String :=
  let path := (pathWithQuery.takeWhile (fun c => c != '?' && c != '#')).toString
  let raw := (path.splitOn "/").flatMap (·.splitOn "\\")
  let resolved := raw.foldl (init := ([] : List String)) fun stack s =>
    match percentDecode s with
    | ".." => stack.drop 1
    | "." => stack
    | _ => s :: stack
  resolved.reverse.filter (· ≠ "") |>.map percentDecode

def json (fields : List (String × Json)) : UInt16 × String × ByteArray :=
  (200, "application/json", (Json.mkObj fields).compress.toUTF8)

def main : IO Unit := IncomingHandler.serve fun request out => do
  let method ← request.method
  let path := (← request.pathWithQuery).getD "/"
  let (status, contentType, body) ← match method, segments path with
    | .get, [] | .head, [] => pure (json [("message", "Hello from Lean!")])
    | .get, ["hello", name] | .head, ["hello", name] => pure (json [("message", App.greet name)])
    | .post, ["echo"] =>
      let contentType := ((← (← request.headers).get "content-type")[0]? >>= String.fromUTF8?).getD "application/octet-stream"
      pure (200, contentType, ← request.readBody)
    | .get, ["health"] | .head, ["health"] => pure (json [("ok", true)])
    | _, _ => pure (404, "text/plain; charset=utf-8", "Not Found\n".toUTF8)
  -- `Lasm.WASI.Http.respond`: no body for `HEAD`.
  respond out status #[("content-type", contentType)] (if method matches .head then .empty else body)
