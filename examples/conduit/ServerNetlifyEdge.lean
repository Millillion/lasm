/- Conduit on Netlify Edge Functions with Netlify Blobs: `npm run build:netlify-edge`
(deploy/netlify-edge/netlify.toml); locally `netlify dev`. JWT_SECRET as everywhere. -/
import Server.App
import Server.Embed
import Server.JsServe
import Server.Kv
import Server.NetlifyBlobs

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let kv ← Conduit.Server.NetlifyBlobs.open "conduit"
  Conduit.Server.JsServe.serveEdge (← Conduit.Server.storeHandler (Conduit.Server.Kv.store kv) assets)
