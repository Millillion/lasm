/- Conduit on Fastly Compute: `npm run build:fastly`; locally `fastly compute serve` (Viceroy,
fastly.toml). The store is the KV Store `conduit`; JWT_SECRET comes from the secret store
`conduit`. Passwords and tokens are pure Lean (Server/LeanCrypto.lean): Fastly runs no JavaScript. -/
import Server.Http
import Server.Kv
import Server.LeanCrypto
import Lasm.Fastly
import Lasm.Fetch.Embed

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

/-- `JWT_SECRET` from the secret store `conduit` (Lasm.Fastly.SecretStore), else the development secret. -/
def secret : IO String := do
  try
    let store ← Lasm.Fastly.SecretStore.open "conduit"
    match ← Lasm.Fastly.found? (Lasm.Fastly.SecretStore.get store "JWT_SECRET") with
    | some s => Lasm.Fastly.SecretStore.plaintext s
    | none => return Conduit.Server.developmentSecret
  catch _ => return Conduit.Server.developmentSecret

def main : IO Unit := do
  let kv ← Lasm.KV.open "conduit"
  Conduit.Server.serveWith (Conduit.Server.Kv.store kv) (Conduit.Server.LeanCrypto.services secret) assets
