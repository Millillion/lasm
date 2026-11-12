/- The live preview's server, for Node, Bun and Deno (`npm run build:server`,
`build:bun`, `build:deno`): the browser page (dist/public, embedded), and
`POST /api/render`, which renders the request's body with the same function
the page runs (safe defaults), so a test can compare the two. PORT, HOST.
Bun serves it with `Bun.serve`, Deno with `Deno.serve`, Node (for now) with
Lasm.Fetch's Node server (`Server/NodeServe.lean`). -/
import Server.Assets
import Server.Embed
import Server.NodeServe
import Folio
open Std.Async Folio.Server

/-- The browser page and its files, embedded in the program. -/
def assets : Web.Assets := embed_dir! "dist/public"

def handle (req : Web.Request) : Async Web.Response := do
  match req.method, req.segments with
  | "POST", ["api", "render"] =>
    return Web.Response.withBody (Folio.render {} req.text).toUTF8 "text/html; charset=utf-8" 200
  | _, _ => return .notFound

def main : IO Unit := NodeServe.serve (assets.wrap handle)
