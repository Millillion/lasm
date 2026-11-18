/- The live preview's server on Node (`npm run build:server`, then `npm start`): the browser page
(dist/public, embedded) and `POST /api/render` (`Server/Preview.lean`), which renders the request's
body with the same function the page runs (safe defaults), so a test can compare the two.
`Node.serve` (Lasm.JS.Node.Serve) serves it on $HOST (default every IPv4 address) and $PORT
(default 3000), and stops cleanly on SIGTERM and SIGINT. Bun runs `PreviewServerBun.lean`, Deno
`PreviewServerDeno.lean`. -/
import Server.Assets
import Server.Embed
import Server.JsServe
import Server.Preview
import Lasm.JS.Node.Serve
open Lasm.JS

/-- The browser page and its files, embedded in the program. -/
def assets : Folio.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  Node.serve { fetch := Folio.Server.JsServe.webHandler (assets.wrap Folio.Server.Preview.handle), hostname := ← IO.getEnv "HOST" }
