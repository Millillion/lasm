/- Conduit on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT, JWT_SECRET). -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.BunSqlite

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  Conduit.Server.JsServe.serveBun (← Conduit.Server.sqlHandler (← Conduit.Server.BunSqlite.open path) assets)
