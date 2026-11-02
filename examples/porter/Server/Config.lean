/-
The provider's configuration: the issuer, the clients and the users. The
built-in demo configuration is used unless `PORTER_CONFIG` holds a JSON
configuration (the tests pass one):

    { "issuer": "https://id.example.com",
      "clients": [{ "client_id": "app", "client_name": "App", "client_secret": "…",
                    "redirect_uris": ["https://app.example.com/callback"],
                    "post_logout_redirect_uris": ["https://app.example.com/"],
                    "scope": "openid profile email offline_access",
                    "id_token_signed_response_alg": "ES256" }],
      "users": [{ "sub": "…", "username": "…", "password_hash": "pbkdf2_sha256$…",
                  "name": "…", "email": "…", "email_verified": true }] }

A client without `client_secret` is public (PKCE only). Secrets are hashed
(SHA-256) when the configuration is read; Porter never keeps them.
`ISSUER` overrides the issuer, which must be an origin (no path, query or
fragment), and redirect URIs must have no fragment (RFC 6749 §3.1.2).
-/
import Lean.Data.Json
import Porter.Types
import Porter.Request
open Lean

namespace Porter.Server.Config

/-- A configuration file's client, before its secret is hashed. -/
structure ClientSpec where
  client : Client
  secret : Option String

/-- The demo: a confidential web application and a public single-page
application on localhost:8080, and two users (alice / wonderland,
bob / builder). -/
def demoClients : List ClientSpec := [
  { client := { id := "demo-app", name := "Demo App", redirectUris := ["http://localhost:8080/callback"],
                postLogoutRedirectUris := ["http://localhost:8080/"], alg := .ES256 },
    secret := some "demo-secret" },
  { client := { id := "demo-spa", name := "Demo SPA", redirectUris := ["http://localhost:8080/spa/callback"],
                postLogoutRedirectUris := ["http://localhost:8080/spa/"], alg := .EdDSA },
    secret := none }]

def demoUsers : List User := [
  { sub := "248289761001", username := "alice", name := "Alice Liddell", email := "alice@example.com",
    passwordHash := "pbkdf2_sha256$100000$Z9Lb39PVjc0XhXF4-rCgZw$D3IvWcDmUaqRUX7Dp3NEV7KplZFT8_ABf_fPgeYtqK8" },
  { sub := "248289761002", username := "bob", name := "Bob Builder", email := "bob@example.com",
    passwordHash := "pbkdf2_sha256$100000$teh7M6LbD8Vsr4TVhzv2HQ$nd45VSmQAxdnU-tD8LDY6Fgjz_yL7fnzc-GmdqYzf_A" }]

/-- A PBKDF2 hash of a random password nobody knows. -/
def dummyHash : String := "pbkdf2_sha256$100000$BpK-e6hBgmEsDiVUYHNsbQ$M8mUh9U4EZy36jNu_hKLqPKIIe7o7kw7o0zw6eQoVHk"

def parseAlg : String → Except String Alg
  | "ES256" => .ok .ES256
  | "EdDSA" => .ok .EdDSA
  | a => .error s!"unsupported id_token_signed_response_alg {a} (ES256 or EdDSA)"

def strings (j : Json) (k : String) : Except String (List String) :=
  match j.getObjVal? k with
  | .ok v => do return (← v.getArr?).toList.mapM Json.getStr? |>.toOption.getD []
  | .error _ => return []

def parseClient (j : Json) : Except String ClientSpec := do
  let id ← j.getObjValAs? String "client_id"
  let redirectUris ← strings j "redirect_uris"
  if redirectUris.isEmpty then throw s!"client {id} has no redirect_uris"
  if redirectUris.any (fun u => u.toList.contains '#') then throw s!"client {id}: a redirect URI has a fragment"
  let scope := (j.getObjValAs? String "scope").toOption.map Porter.splitScope
  let alg ← match j.getObjValAs? String "id_token_signed_response_alg" with
    | .ok a => parseAlg a
    | .error _ => pure .ES256
  return { client := { id, name := (j.getObjValAs? String "client_name").toOption.getD id, redirectUris,
                       postLogoutRedirectUris := ← strings j "post_logout_redirect_uris",
                       scopes := scope.getD ["openid", "profile", "email", "offline_access"], alg },
           secret := (j.getObjValAs? String "client_secret").toOption }

def parseUser (j : Json) : Except String User := do
  return { sub := ← j.getObjValAs? String "sub", username := ← j.getObjValAs? String "username",
           passwordHash := ← j.getObjValAs? String "password_hash",
           name := (j.getObjValAs? String "name").toOption.getD "",
           email := (j.getObjValAs? String "email").toOption.getD "",
           emailVerified := (j.getObjValAs? Bool "email_verified").toOption.getD true }

/-- The issuer, clients and users of a JSON configuration. -/
def parse (text : String) : Except String (Option String × List ClientSpec × List User) := do
  let j ← Json.parse text
  let clients ← (← (← j.getObjVal? "clients").getArr?).toList.mapM parseClient
  let users ← (← (← j.getObjVal? "users").getArr?).toList.mapM parseUser
  return ((j.getObjValAs? String "issuer").toOption, clients, users)

/-- Whether an issuer is an origin: `http(s)://host[:port]`, nothing after. -/
def validIssuer (s : String) : Bool :=
  (s.startsWith "https://" || s.startsWith "http://") &&
  ((s.drop 8).toString.toList.all fun c => c != '/' && c != '?' && c != '#')

end Porter.Server.Config
