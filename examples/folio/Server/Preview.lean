/-
The live preview's server handler, which every preview entry serves
(`PreviewServer.lean` on Node, `PreviewServerBun.lean`, `PreviewServerDeno.lean`):
`POST /api/render` renders the request's body with the same function the page
runs (safe defaults), so a test can compare the two. The entries serve the
browser page's files (dist/public, embedded) before it.
-/
import Server.Web
import Folio
open Std.Async

namespace Folio.Server.Preview
open Folio.Server.Web

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "POST", ["api", "render"] =>
    return Response.withBody (Folio.render {} req.text).toUTF8 "text/html; charset=utf-8" 200
  | _, _ => return .notFound

end Folio.Server.Preview
