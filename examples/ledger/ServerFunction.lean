/-
Ledger on the function platforms (AWS Lambda .zip and container image, Vercel,
Netlify, Azure Functions, Google Cloud Functions) with node:sqlite: the handler
published with `exportDefault`, which the platform's generated file calls for
each request (no HTTP server inside the function). `npm run build:function`,
then `npm run build:lambda` (or `:vercel`, `:netlify`, `:azure`, `:gcf`).
-/
import Lasm.JS
import Server.App
import Server.NodeSqlite
import Server.Embed
import Server.JsServe
open Lasm.JS

/-- The browser page and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Ledger.Server.Web.Assets := embed_dir! "dist/public"

/-- `DATABASE_PATH`, else `ledger.db` in the temporary directory (a function's
working directory is read-only), which lasts as long as the function's instance. -/
def database : IO Ledger.Server.Sql := do
  if let some path ← IO.getEnv "DATABASE_PATH" then return ← Ledger.Server.NodeSqlite.open path
  let tmp := (← IO.getEnv "TMPDIR").getD "/tmp"
  Ledger.Server.NodeSqlite.open s!"{tmp}/ledger.db"

def main : IO Unit := do
  let handler ← Ledger.Server.handler (← database) assets
  exportDefault (Ledger.Server.JsServe.webHandler handler)
