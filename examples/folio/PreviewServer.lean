/- The live preview's server, for Node, Bun and Deno (`npm run build:server`,
`build:bun`, `build:deno`): the browser page (dist/public, embedded), and
`POST /api/render`, which renders the request's body with the same function
the page runs (safe defaults), so a test can compare the two. PORT, HOST. -/
import Lasm.Fetch
import Lasm.Fetch.Assets
import Lasm.Fetch.Embed
import Folio
open Std.Async

/-- The browser page and its files, embedded in the program. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def handle (req : Lasm.Fetch.Request) : Async Lasm.Fetch.Response := do
  match req.method, req.segments with
  | "POST", ["api", "render"] =>
    return Lasm.Fetch.Response.withBody (Folio.render {} req.text).toUTF8 "text/html; charset=utf-8" 200
  | _, _ => return .notFound

def main : IO Unit := Lasm.Fetch.serve (assets.wrap handle)
