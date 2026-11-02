/- Porter on Bun with bun:sqlite: `npm run build:bun`, then `npm run start:bun`
(PORT, HOST, ISSUER, DATABASE_PATH, PORTER_CONFIG). -/
import Server.App
import Server.BunSqlite
import Lasm.Fetch.Embed

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "porter.db"
  Porter.Server.run (← Porter.Server.BunSqlite.open path) assets
