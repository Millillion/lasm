/- Conduit on Node: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST, JWT_SECRET). -/
import Server.App
import Lasm.Fetch.Embed
import Server.NodeSqlite

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let path := (← IO.getEnv "DATABASE_PATH").getD "conduit.db"
  Conduit.Server.run (← Conduit.Server.NodeSqlite.open path) assets
