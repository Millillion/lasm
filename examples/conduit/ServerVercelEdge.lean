/- Conduit on Vercel Edge: `npm run build:vercel-edge` (deploy/vercel-edge/vercel.json). The store is
memory (Vercel Edge has none of its own): one copy per isolate. Vercel's edge runtime drops a
response's Content-Encoding, so this entry answers as if no request accepted Brotli (Lasm 0.3.6's
vercel-edge entry does this itself). JWT_SECRET as everywhere. -/
import Server.App
import Lasm.Fetch.Embed
import Server.Kv

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def main : IO Unit := do
  let kv ← Lasm.KV.memory
  -- The browser app's files uncompressed: Vercel compresses responses itself.
  let identity (h : Lasm.Fetch.Handler) : Lasm.Fetch.Handler := fun req =>
    h { req with headers := req.headers.filter (·.1.toLower != "accept-encoding") }
  Lasm.Fetch.serve (identity (assets.wrap (Conduit.Server.site (Conduit.Server.Kv.store kv) Conduit.Server.services)))
