/-
Porter's data: the configured clients and users, and the records the
provider keeps (authorization codes, refresh and access tokens, sessions,
interactions and consents).

Every secret value Porter hands out (a code, a token, a session or an
interaction id) is 32 random bytes from the platform, base64url; Porter
stores only its SHA-256 (`hash`), so a copy of the database does not reveal
a usable code or token.
-/
namespace Porter

/-- The algorithms Porter signs ID tokens with: ECDSA P-256 with SHA-256, and
Ed25519. -/
inductive Alg where
  | ES256
  | EdDSA
  deriving DecidableEq, Repr, Inhabited

def Alg.name : Alg → String
  | .ES256 => "ES256"
  | .EdDSA => "EdDSA"

/-- A client (relying party), configured, not registered dynamically. -/
structure Client where
  id : String
  name : String
  /-- The SHA-256 (base64url) of the client secret; `none` for a public
  client, which authenticates with nothing but PKCE (`none`). -/
  secretHash : Option String := none
  /-- The redirect URIs, compared exactly. -/
  redirectUris : List String
  /-- Where RP-initiated logout may send the user back, compared exactly. -/
  postLogoutRedirectUris : List String := []
  /-- The scopes the client may be granted. -/
  scopes : List String := ["openid", "profile", "email", "offline_access"]
  /-- The ID token signing algorithm (`id_token_signed_response_alg`). -/
  alg : Alg := .ES256
  deriving Repr, Inhabited

/-- A user who can sign in. -/
structure User where
  /-- The subject identifier (`sub`), stable and never reassigned. -/
  sub : String
  username : String
  /-- The password hash, in the platform's format (PBKDF2). -/
  passwordHash : String
  name : String
  email : String
  emailVerified : Bool := true
  deriving Repr, Inhabited

/-- The provider's configuration. Lifetimes are in seconds. -/
structure Config where
  /-- The issuer identifier (`iss`): an `https` URL in production. -/
  issuer : String
  clients : List Client
  users : List User
  /-- The public keys, as JWK Set JSON text (`/jwks`). -/
  jwks : String
  /-- The key ids (`kid`) of the two signing keys. -/
  kidES256 : String
  kidEdDSA : String
  /-- A password hash that matches no password, checked when the username is
  unknown so that a sign-in takes as long either way. -/
  dummyHash : String
  codeTtl : Nat := 60
  accessTtl : Nat := 600
  idTokenTtl : Nat := 600
  refreshTtl : Nat := 30 * 24 * 3600
  sessionTtl : Nat := 8 * 3600
  interactionTtl : Nat := 600
  deriving Repr, Inhabited

def Config.kid (cfg : Config) : Alg → String
  | .ES256 => cfg.kidES256
  | .EdDSA => cfg.kidEdDSA

def Config.client? (cfg : Config) (id : String) : Option Client := cfg.clients.find? (·.id = id)

def Config.userBySub? (cfg : Config) (sub : String) : Option User := cfg.users.find? (·.sub = sub)

def Config.userByName? (cfg : Config) (username : String) : Option User := cfg.users.find? (·.username = username)

/-- Session cookies are `Secure` when the issuer is `https`. -/
def Config.secure (cfg : Config) : Bool := "https://".toList.isPrefixOf cfg.issuer.toList

/-- The scopes Porter knows. Others are ignored. -/
def supportedScopes : List String := ["openid", "profile", "email", "offline_access"]

/-- What an authorization grants: the subject, the client, the scopes, and
the sign-in it rests on. Codes and token families carry one. -/
structure Grant where
  client : String
  user : String
  scope : List String
  /-- When the user signed in (`auth_time`). -/
  authTime : Nat
  /-- The session's public id (the `sid` claim). -/
  sid : String
  /-- The authorization request's `nonce`, echoed in the ID token. -/
  nonce : Option String
  deriving DecidableEq, Repr, Inhabited

/-- An authorization code. -/
structure Code where
  hash : String
  grant : Grant
  /-- The `redirect_uri` of the authorization request. -/
  redirectUri : String
  /-- The PKCE `code_challenge` (S256). -/
  challenge : String
  /-- The token family the code's tokens belong to; revoked if the code is
  presented again. -/
  family : String
  expires : Nat
  used : Bool := false
  deriving DecidableEq, Repr, Inhabited

/-- A refresh token. -/
structure Refresh where
  hash : String
  family : String
  grant : Grant
  expires : Nat
  /-- Exchanged already: presenting it again revokes the family. -/
  rotated : Bool := false
  deriving DecidableEq, Repr, Inhabited

/-- An access token (opaque; `/userinfo` looks it up). -/
structure Access where
  hash : String
  family : String
  grant : Grant
  expires : Nat
  deriving DecidableEq, Repr, Inhabited

/-- A signed-in browser. -/
structure Session where
  hash : String
  user : String
  /-- The public session id (`sid`). -/
  sid : String
  authTime : Nat
  expires : Nat
  deriving DecidableEq, Repr, Inhabited

/-- A validated authorization request. -/
structure AuthRequest where
  client : String
  redirectUri : String
  /-- The scopes requested, as given. -/
  scope : List String
  state : Option String
  nonce : Option String
  challenge : String
  /-- `prompt=none`: answer without showing the user anything. -/
  promptNone : Bool := false
  /-- `prompt=login`: ask the user to sign in again. -/
  promptLogin : Bool := false
  /-- `prompt=consent`: ask the user to consent again. -/
  promptConsent : Bool := false
  /-- `max_age`: a sign-in older than this many seconds is not enough. -/
  maxAge : Option Nat := none
  deriving DecidableEq, Repr, Inhabited

/-- Who signed in during an interaction. -/
structure Login where
  user : String
  sid : String
  authTime : Nat
  deriving DecidableEq, Repr, Inhabited

/-- An authorization request waiting for the user to sign in or consent. -/
structure Interaction where
  hash : String
  request : AuthRequest
  login : Option Login := none
  expires : Nat
  deriving DecidableEq, Repr, Inhabited

end Porter
