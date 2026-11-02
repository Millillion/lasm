/-
An HTTP handler in pure Lean (Lasm.Fetch): the same Main.lean serves Node,
WASI and Spin, Fastly Compute, Cloudflare Workers and the other edge targets,
Bun and Deno.
  GET  /             {"message": "Hello from Lean!"}
  GET  /hello/NAME   {"message": "Hello, NAME, from Lean!"}
  POST /echo         the request body, with its content type
  GET  /health       {"ok": true}
On Node it listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.Fetch
import Lean.Data.Json
open Lasm.Fetch Lean

/-- A JSON body, escaped by `Lean.Json` (a name may contain `"` or `\`). -/
def json (fields : List (String × Json)) : Response := .json (Json.mkObj fields).compress

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", [] => return json [("message", "Hello from Lean!")]
  | "GET", ["hello", name] => return json [("message", App.greet name)]
  | "POST", ["echo"] => return .bytes req.body ((req.header? "content-type").getD "application/octet-stream")
  | "GET", ["health"] => return json [("ok", true)]
  | _, _ => return .notFound

def main : IO Unit := serve handle
