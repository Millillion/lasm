/- The live preview's server on Deno (`npm run build:deno`, then `deno run -A deno/main.mjs`): the
browser page (dist/public, embedded) and `POST /api/render` (`Server/Preview.lean`). `Deno.serve`
(Lasm.JS.Deno.Serve) on $HOST:$PORT (default 0.0.0.0:8000). -/
import Server.Assets
import Server.Embed
import Server.JsServe
import Server.Preview
import Lasm.JS.Deno.Serve
open Lasm.JS

/-- The browser page and its files, embedded in the program. -/
def assets : Folio.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 8000
  let handler ← Deno.ServeHandler.ofFn fun request _ => Folio.Server.JsServe.webHandler (assets.wrap Folio.Server.Preview.handle) request
  let server ← Deno.serveWithOptions { port := some port, hostname := some ((← IO.getEnv "HOST").getD "0.0.0.0") } handler
  server.finished.block
