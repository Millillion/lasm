/- Conduit on Netlify Edge Functions with Netlify Blobs: `npm run build:netlify-edge`
(deploy/netlify-edge/netlify.toml); locally `netlify dev`. The program's default export, which
Netlify's edge runtime calls. JWT_SECRET as everywhere. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.Kv
import Server.NetlifyBlobs
open Lasm.JS

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let handler ← Conduit.Server.storeHandler (Conduit.Server.Kv.store (← Conduit.Server.NetlifyBlobs.open "conduit")) assets
  exportDefault (Conduit.Server.JsServe.webHandler handler)
