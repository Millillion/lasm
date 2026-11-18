/- Porter on Node with node:sqlite and `Node.serve`: `npm run build`, then `npm start`
(PORT, HOST, ISSUER, DATABASE_PATH, PORTER_CONFIG). Deno and the function platforms
build ServerExport.lean (the default export). -/
import Server.App
import Server.NodeSqlite
import Server.Embed
import Server.NodeServe

/-- The sign-in and consent pages' browser app (dist/public/ui, from npm run
build:client), embedded in the program so every target serves it. -/
def assets : Porter.Server.Web.Assets := embed_dir! "dist/public"

/-- `DATABASE_PATH`, else `porter.db` in the working directory. -/
def database : IO Porter.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Porter.Server.NodeSqlite.open path
  Porter.Server.NodeSqlite.open "porter.db"

def main : IO Unit := do
  Porter.Server.NodeServe.serve (← Porter.Server.handler (← database) assets)
