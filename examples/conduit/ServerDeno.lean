/- Conduit on Deno with node:sqlite (Deno runs Node's built-in modules): `npm run build:deno`, then
`npm run start:deno` (DATABASE_PATH, PORT, HOST, JWT_SECRET). `Deno.serve` (Lasm.JS.Deno.Serve) on
$HOST:$PORT (default 0.0.0.0:8000). Deno Deploy runs `ServerDenoDeploy.lean`, on Deno KV. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.NodeSqlite
import Lasm.JS.Deno.Serve
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let handler ← Conduit.Server.sqlHandler (← Conduit.Server.NodeSqlite.openDefault) assets
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 8000
  let serveHandler ← Deno.ServeHandler.ofFn fun request _ => Conduit.Server.JsServe.webHandler handler request
  let server ← Deno.serveWithOptions { port := some port, hostname := some ((← IO.getEnv "HOST").getD "0.0.0.0") }
    serveHandler
  server.finished.block
