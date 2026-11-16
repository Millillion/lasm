/-
The app's HTTP handler, on the web's own `Request` and `Response`
(Lasm.JS.Web). Main.lean serves it on Node (`Node.serve`); Export.lean
publishes it as the program's default export for Bun, Deno, Cloudflare Workers,
the other edge targets and the function platforms.
  GET  /             {"message": "Hello from Lean!"}
  GET  /hello/NAME   {"message": "Hello, NAME, from Lean!"}
  POST /echo         the request body, with its content type
  GET  /health       {"ok": true}
-/
import App
import Lasm.JS.Web
import Lean.Data.Json
open Lasm.JS Lasm.JS.Web Lean

namespace Handler

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

/-- A response with a status, a content type and a body. -/
def reply (status : Nat) (contentType : String) (body : ByteArray) : IO Response :=
  Response.new (some (.bufferSource body))
    (some { status := some status, headers := some (.record ⟨#[("content-type", contentType)]⟩) })

/-- A JSON body, escaped by `Lean.Json` (a name may contain `"` or `\`). -/
def json (fields : List (String × Json)) : IO Response :=
  reply 200 "application/json" (Json.mkObj fields).compress.toUTF8

def handle (request : Request) : Async Response := do
  -- The URL's path, as the runtime's URL parser resolved it (`/a/../b` is `/b`).
  let path ← (← URL.new (← request.url)).pathname
  let segments := (path.splitOn "/").filter (· ≠ "") |>.map percentDecode
  let method ← request.method
  match (if method == "HEAD" then "GET" else method), segments with
  | "GET", [] => json [("message", "Hello from Lean!")]
  | "GET", ["hello", name] => json [("message", App.greet name)]
  | "POST", ["echo"] =>
    let contentType := (← (← request.headers).get "content-type").getD "application/octet-stream"
    reply 200 contentType (← request.arrayBuffer)
  | "GET", ["health"] => json [("ok", true)]
  | _, _ => reply 404 "text/plain; charset=utf-8" "Not Found\n".toUTF8

end Handler
