/- Conduit on Node with node:sqlite: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST, JWT_SECRET).
`Node.serve` (Lasm.JS.Node.Serve) serves it on $HOST (default every IPv4 address) and $PORT (default
3000), and stops cleanly on SIGTERM and SIGINT. The same build runs in Docker (Dockerfile). The function
platforms run `ServerFunction.lean`, Deno `ServerDeno.lean`. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.NodeSqlite
import Lasm.JS.Node.Serve
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let handler ← Conduit.Server.sqlHandler (← Conduit.Server.NodeSqlite.openDefault) assets
  Node.serve { fetch := Conduit.Server.JsServe.webHandler handler, hostname := ← IO.getEnv "HOST" }
