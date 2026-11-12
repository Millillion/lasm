/- Conduit on Fastly Compute: `npm run build:fastly`; locally `fastly compute serve` (Viceroy,
fastly.toml). The store is the KV Store `conduit`; JWT_SECRET comes from the secret store
`conduit`. Passwords and tokens are pure Lean (Server/LeanCrypto.lean): Fastly runs no JavaScript. -/
import Server.Http
import Server.Kv
import Server.LeanCrypto
import Lasm.Fastly
import Server.Embed
import Server.FastlyServe

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Conduit.Server.Web.Assets := embed_dir! "dist/public"

open Lasm.Fastly in
/-- `JWT_SECRET` from the secret store `conduit`, else the development secret. -/
def secret : IO String := do
  try
    match ← (found? (SecretStore.get (← SecretStore.open "conduit") "JWT_SECRET") : IO _) with
    | some s => return ← (SecretStore.plaintext s : IO _)
    | none => return Conduit.Server.developmentSecret
  catch _ => return Conduit.Server.developmentSecret

def main : IO Unit := do
  let kv ← Lasm.KV.open "conduit"
  Conduit.Server.FastlyServe.serve
    (← Conduit.Server.handlerWith (Conduit.Server.Kv.store kv) (Conduit.Server.LeanCrypto.services secret) assets)
