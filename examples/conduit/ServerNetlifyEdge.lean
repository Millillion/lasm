/- Conduit on Netlify Edge Functions with Netlify Blobs: `npm run build:netlify-edge`
(deploy/netlify-edge/netlify.toml); locally `netlify dev`. JWT_SECRET as everywhere. -/
import Server.App
import Lasm.Fetch.Embed
import Server.Kv
import Server.NetlifyBlobs

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  Conduit.Server.serveStore (Conduit.Server.Kv.store (← Conduit.Server.NetlifyBlobs.open "conduit")) assets
