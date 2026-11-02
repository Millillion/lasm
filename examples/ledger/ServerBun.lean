/- Ledger on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun` (DATABASE_PATH, PORT, HOST). -/
import Server.App
import Server.BunSqlite
import Lasm.Fetch.Embed

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"


def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "ledger.db"
  Ledger.Server.run (← Ledger.Server.BunSqlite.open path) assets
