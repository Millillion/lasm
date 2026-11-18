/- Ledger on Deno with node:sqlite: `npm run build:deno`, then `npm run start:deno` (DATABASE_PATH, PORT, HOST). -/
import Server.App
import Server.NodeSqlite
import Server.Embed
import Server.JsServe

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Ledger.Server.Web.Assets := embed_dir! "dist/public"

/-- `Deno.serve` on $HOST:$PORT (default 8000); returns when the server closes. -/
def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "ledger.db"
  Ledger.Server.JsServe.serveDeno (← Ledger.Server.handler (← Ledger.Server.NodeSqlite.open path) assets)
