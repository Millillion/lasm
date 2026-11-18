/- Ledger on Node with node:sqlite: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST). Also the Docker image. -/
import Lasm.JS.Node.Serve
import Server.App
import Server.NodeSqlite
import Server.Embed
import Server.JsServe
open Lasm.JS

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Ledger.Server.Web.Assets := embed_dir! "dist/public"

/-- `DATABASE_PATH`, else `ledger.db` in the working directory. -/
def database : IO Ledger.Server.Sql := do
  Ledger.Server.NodeSqlite.open ((← IO.getEnv "DATABASE_PATH").getD "ledger.db")

/-- `Node.serve` on $HOST:$PORT (default 0.0.0.0:3000); returns when the
server stops (SIGTERM or SIGINT finish the requests in progress first). -/
def main : IO Unit := do
  let handler ← Ledger.Server.handler (← database) assets
  let (port, hostname) ← Ledger.Server.JsServe.address 3000
  Node.serve { fetch := Ledger.Server.JsServe.webHandler handler, port := some port, hostname := some hostname }
