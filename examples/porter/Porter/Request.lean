/-
Reading requests: the HTTP request as Porter sees it, its parameters and
cookies, the validation of an authorization request, and the decoding of
HTTP Basic client credentials. All pure and total.
-/
import Porter.Reply
import Porter.Types

namespace Porter
open Text

/-- An HTTP request, as the provider sees it. -/
structure Request where
  method : String
  /-- The path's segments: `["interaction", "abc", "login"]`. -/
  path : List String
  /-- The raw query string, without `?`. -/
  query : String := ""
  headers : List (String × String) := []
  body : String := ""
  deriving Repr, Inhabited

/-- The largest form body Porter reads. -/
def maxBody : Nat := 16384

def Request.header? (r : Request) (name : String) : Option String := Text.header? r.headers name

/-- A cookie of the request. Lasm.Fetch delivers the request's cookies as one
`Cookie` header, joined with `; `, on every target. -/
def Request.cookie? (r : Request) (name : String) : Option String :=
  (r.header? "cookie").bind (Text.cookie? · name)

/-- Whether the body is a form (`application/x-www-form-urlencoded`,
parameters such as `charset` allowed). -/
def Request.isForm (r : Request) : Bool :=
  match r.header? "content-type" with
  | some ct => lower (String.ofList (trimList (splitFirst ';' ct.toList).1)) = "application/x-www-form-urlencoded"
  | none => false

/-- The form body's parameters, if the body is a form of acceptable size. -/
def Request.form? (r : Request) : Option (List (String × String)) :=
  if r.isForm ∧ r.body.utf8ByteSize ≤ maxBody then parseForm r.body else none

/-- The parameters of a request that may be a GET (the query) or a POST (the form). -/
def Request.params? (r : Request) : Option (List (String × String)) :=
  if r.method = "POST" then r.form? else if r.query.utf8ByteSize ≤ maxBody then parseForm r.query else none

/-- The names of the cookies Porter sets. -/
def sessionCookie : String := "porter_session"
def interactionCookie : String := "porter_interaction"

/-! ## Scopes -/

/-- A space-separated list of scopes. -/
def splitScope (s : String) : List String :=
  ((splitAll ' ' s.toList).filter (· ≠ [])).map String.ofList |>.eraseDups

/-- The scopes a client is granted for a request: those requested that the
client may have and Porter supports, without repeats. -/
def grantScope (c : Client) (requested : List String) : List String :=
  (requested.filter fun s => s ∈ c.scopes ∧ s ∈ supportedScopes).eraseDups

/-! ## Authorization requests -/

/-- The result of validating an authorization request: an error page (when
the client or the redirect URI cannot be trusted), an error to send to the
redirect URI, or the request. -/
inductive AuthCheck where
  | page (e : PageError)
  | redirect (uri : String) (state : Option String) (e : AuthError)
  | ok (a : AuthRequest)
  deriving DecidableEq, Repr

/-- The parameters an authorization request may carry, each at most once. -/
def authParams : List String :=
  ["response_type", "scope", "state", "nonce", "code_challenge", "code_challenge_method", "prompt", "max_age",
   "response_mode", "request", "request_uri", "login_hint", "id_token_hint", "ui_locales", "display",
   "acr_values", "claims", "registration"]

/-- A PKCE `code_challenge` for S256: base64url of a SHA-256 hash, 43 characters. -/
def validChallenge (s : String) : Bool := s.length = 43 ∧ isB64url s

/-- A PKCE `code_verifier`: 43 to 128 unreserved characters (RFC 7636 §4.1). -/
def validVerifier (s : String) : Bool := 43 ≤ s.length ∧ s.length ≤ 128 ∧ s.toList.all unreserved

/-- `max_age`: decimal digits, at most nine. -/
def parseMaxAge (s : String) : Option Nat :=
  if 0 < s.length ∧ s.length ≤ 9 ∧ s.toList.all Char.isDigit then
    some (s.toList.foldl (fun n c => n * 10 + (c.toNat - '0'.toNat)) 0)
  else none

/-- The checks after the client and the redirect URI are known good, in
order; each failure is sent to the redirect URI. -/
def checkRest (c : Client) (ru : String) (ps : List (String × String)) : AuthCheck :=
  let state := (param ps "state").value?
  let fail := AuthCheck.redirect ru state
  if authParams.any (fun k => param ps k = .repeated) then fail .invalidRequest
  else if param ps "request" ≠ .absent then fail .requestNotSupported
  else if param ps "request_uri" ≠ .absent then fail .requestUriNotSupported
  else match param ps "response_type" with
  | .absent => fail .invalidRequest
  | .repeated => fail .invalidRequest
  | .one rt =>
    if rt ≠ "code" then fail .unsupportedResponseType
    else if (param ps "response_mode").value?.any (· ≠ "query") then fail .invalidRequest
    else
      let scope := splitScope ((param ps "scope").value?.getD "")
      if "openid" ∉ grantScope c scope then fail .invalidScope
      else if (param ps "code_challenge_method").value? ≠ some "S256" then fail .invalidRequest
      else match (param ps "code_challenge").value? with
      | none => fail .invalidRequest
      | some ch =>
        if !validChallenge ch then fail .invalidRequest
        else
          let prompt := splitScope ((param ps "prompt").value?.getD "")
          if prompt.any (fun p => p ∉ ["none", "login", "consent", "select_account"]) ∨
             ("none" ∈ prompt ∧ prompt.length > 1) then fail .invalidRequest
          else match (param ps "max_age").value? with
          | some s =>
            match parseMaxAge s with
            | none => fail .invalidRequest
            | some n => .ok { client := c.id, redirectUri := ru, scope, state, nonce := (param ps "nonce").value?,
                              challenge := ch, promptNone := "none" ∈ prompt, promptLogin := "login" ∈ prompt,
                              promptConsent := "consent" ∈ prompt, maxAge := some n }
          | none => .ok { client := c.id, redirectUri := ru, scope, state, nonce := (param ps "nonce").value?,
                          challenge := ch, promptNone := "none" ∈ prompt, promptLogin := "login" ∈ prompt,
                          promptConsent := "consent" ∈ prompt, maxAge := none }

/-- Validates an authorization request. The client and its redirect URI are
checked first: until both are known good, errors are pages, never redirects
(RFC 6749 §4.1.2.1), and the redirect URI must be registered exactly. -/
def checkAuth (cfg : Config) (ps : List (String × String)) : AuthCheck :=
  match param ps "client_id" with
  | .one cid =>
    match cfg.client? cid with
    | none => .page .unknownClient
    | some c =>
      match param ps "redirect_uri" with
      | .one ru => if ru ∈ c.redirectUris then checkRest c ru ps else .page .badRedirectUri
      | _ => .page .badRedirectUri
  | _ => .page .badRequest

/-! ## Client authentication -/

/-- How a token request authenticates its client: the client id and, unless
the client is public, its secret. -/
inductive ClientAuth where
  | ok (id : String) (secret : Option String)
  /-- Malformed: two methods at once, or a repeated parameter. -/
  | malformed
  /-- No client named at all, or unreadable Basic credentials. -/
  | none
  deriving DecidableEq, Repr

/-- `Basic base64(urlencode(id) ":" urlencode(secret))` (RFC 6749 §2.3.1). -/
def basicCredentials? (value : String) : Option (String × String) := do
  let bytes ← b64Decode? value
  let text ← utf8? bytes
  let (id, secret) := splitFirst ':' text.toList
  let secret ← secret
  let id ← percentDecode (String.ofList id)
  let secret ← percentDecode (String.ofList secret)
  pure (id, secret)

/-- The client credentials of a token request: HTTP Basic, or `client_id`
and `client_secret` in the form, or a public client's `client_id` alone. -/
def clientAuth (r : Request) (ps : List (String × String)) : ClientAuth :=
  match (r.header? "authorization").bind (authorization? · "Basic") with
  | some b =>
    if param ps "client_secret" ≠ .absent then .malformed
    else match basicCredentials? b with
      | none => .none
      | some (id, secret) =>
        match param ps "client_id" with
        | .absent => .ok id (some secret)
        | .one id' => if id' = id then .ok id (some secret) else .malformed
        | .repeated => .malformed
  | none =>
    match param ps "client_id", param ps "client_secret" with
    | .one id, .one secret => .ok id (some secret)
    | .one id, .absent => .ok id none
    | .absent, .absent => .none
    | _, _ => .malformed

end Porter
