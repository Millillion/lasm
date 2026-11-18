/- Conduit on the function platforms with node:sqlite: AWS Lambda (.zip and container image), Vercel
Functions, Netlify Functions, Azure Functions and Google Cloud Functions (`npm run build:<platform>`).
The program publishes its handler as its default export (`Lasm.JS.exportDefault`), and the platform's
generated handler calls it in-process for every invocation: no HTTP server, no port. The database is
DATABASE_PATH, else conduit.db in the temporary directory (the function's directory is read-only): it
lasts as long as the function's instance. JWT_SECRET as everywhere. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.NodeSqlite
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let handler ← Conduit.Server.sqlHandler (← Conduit.Server.NodeSqlite.openDefault) assets
  exportDefault (Conduit.Server.JsServe.webHandler handler)
