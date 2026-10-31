/- Conduit on Node and Deno with node:sqlite: `npm run build`, then `npm start` (DATABASE_PATH, PORT, HOST, JWT_SECRET).
The same file is the Deno build (`npm run build:deno`) and, packaged, the Node function platforms
(Lambda, Vercel, Netlify, Azure Functions, Google Cloud Functions: `npm run build:<platform>`). -/
import Server.App
import Lasm.Fetch.Embed
import Server.NodeSqlite

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

/-- `DATABASE_PATH`, else `conduit.db` in the working directory, else (where
that directory is read-only, as on function platforms) `conduit.db` in the
temporary directory, which lasts only as long as the function's instance. -/
def database : IO Conduit.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Conduit.Server.NodeSqlite.open path
  try Conduit.Server.NodeSqlite.open "conduit.db"
  catch e =>
    let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
    IO.eprintln s!"conduit.db cannot be opened here ({e}); using {tmp}/conduit.db"
    Conduit.Server.NodeSqlite.open s!"{tmp}/conduit.db"

def main : IO Unit := do
  Conduit.Server.run (← database) assets
