/- Conduit on Vercel Edge Functions: `npm run build:vercel-edge` (deploy/vercel-edge/vercel.json). Vercel
Edge has no store of its own, so the data is in the isolate's memory (`KvStore.memory`): one copy per
isolate, lost when it ends. A demonstration of the platform, not a place to keep data. The program's
default export, which Vercel's edge runtime calls. JWT_SECRET as everywhere. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.Kv
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let handler ← Conduit.Server.storeHandler (Conduit.Server.Kv.store (← Conduit.Server.KvStore.memory)) assets
  exportDefault (Conduit.Server.JsServe.webHandler handler)
