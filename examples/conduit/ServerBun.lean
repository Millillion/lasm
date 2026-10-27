/- Conduit on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT, JWT_SECRET). -/
import Server.App
import Lasm.Fetch.Embed
import Server.BunSqlite

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  Conduit.Server.run (← Conduit.Server.BunSqlite.open path) assets
