/- Conduit as a wasi:http component (wasmtime serve, Spin): `npm run build:wasi-http`. The component
has no store and no environment of its own (the proxy world), so it keeps its data in Postgres through
PostgREST, over wasi:http's outgoing requests, and its settings are fixed at build time:
CONDUIT_STORE_URL (default http://127.0.0.1:3000), CONDUIT_STORE_KEY (a PostgREST JWT, if the server
needs one) and JWT_SECRET. Passwords and tokens are pure Lean (Server/LeanCrypto.lean). -/
import Server.Http
import Server.Kv
import Server.LeanCrypto
import Server.Postgrest
import Server.BuildEnv
import Lasm.Fetch.Embed

/-- The browser app and its files (dist/public, from npm run build:client),
embedded in the program so every target serves them. -/
def assets : Lasm.Fetch.Assets := embed_dir! "dist/public"

def storeUrl : String := (build_env! "CONDUIT_STORE_URL").getD "http://127.0.0.1:3000"
def storeKey : Option String := build_env! "CONDUIT_STORE_KEY"
def jwtSecret : String := (build_env! "JWT_SECRET").getD Conduit.Server.developmentSecret

def main : IO Unit := do
  let kv ← Conduit.Server.Postgrest.open storeUrl storeKey
  Conduit.Server.serveWith (Conduit.Server.Kv.store kv) (Conduit.Server.LeanCrypto.services (pure jwtSecret)) assets
