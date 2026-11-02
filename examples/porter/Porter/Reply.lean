/-
Porter's replies, as data: a status, a body that says what it is (an error,
a page, the discovery document, tokens, …), a redirect target and cookies.
The theorems are about these values; `Reply.render` (in `Porter/Render.lean`)
turns one into the bytes on the wire, and is checked by the client libraries
used as oracles (test/oracles.mjs).

An error reply is `Reply.err e`: its status, body and headers depend on the
error code `e` alone, which is how the proofs show that no error reveals a
secret or echoes its input (`Spec.errors_reveal_nothing`).
-/
import Porter.Text

namespace Porter

/-- Errors shown to the user as a page, never redirected to the client
(RFC 6749 §4.1.2.1: an unknown client or redirect URI must not redirect). -/
inductive PageError where
  | unknownClient
  | badRedirectUri
  | badRequest
  | interactionExpired
  | badLogoutRequest
  | notFound
  | methodNotAllowed
  deriving DecidableEq, Repr

/-- Errors of the token endpoint (RFC 6749 §5.2), as JSON. -/
inductive TokenError where
  | invalidRequest
  | invalidClient
  | invalidGrant
  | unsupportedGrantType
  | invalidScope
  deriving DecidableEq, Repr

/-- Errors of the userinfo endpoint (RFC 6750 §3). -/
inductive BearerError where
  /-- No access token. -/
  | missing
  | invalidToken
  | invalidRequest
  deriving DecidableEq, Repr

/-- An error reply. -/
inductive Err where
  | page (e : PageError)
  | token (e : TokenError)
  | bearer (e : BearerError)
  deriving DecidableEq, Repr

/-- Errors sent back to the client in the redirect (RFC 6749 §4.1.2.1,
OpenID Connect Core §3.1.2.6). -/
inductive AuthError where
  | invalidRequest
  | unsupportedResponseType
  | invalidScope
  | accessDenied
  | loginRequired
  | consentRequired
  | requestNotSupported
  | requestUriNotSupported
  deriving DecidableEq, Repr

def AuthError.code : AuthError → String
  | .invalidRequest => "invalid_request"
  | .unsupportedResponseType => "unsupported_response_type"
  | .invalidScope => "invalid_scope"
  | .accessDenied => "access_denied"
  | .loginRequired => "login_required"
  | .consentRequired => "consent_required"
  | .requestNotSupported => "request_not_supported"
  | .requestUriNotSupported => "request_uri_not_supported"

def TokenError.code : TokenError → String
  | .invalidRequest => "invalid_request"
  | .invalidClient => "invalid_client"
  | .invalidGrant => "invalid_grant"
  | .unsupportedGrantType => "unsupported_grant_type"
  | .invalidScope => "invalid_scope"

def TokenError.description : TokenError → String
  | .invalidRequest => "The request is missing a parameter, repeats one, or is malformed."
  | .invalidClient => "Client authentication failed."
  | .invalidGrant => "The authorization code or refresh token is invalid, expired, revoked, or was issued to another client."
  | .unsupportedGrantType => "Only authorization_code and refresh_token are supported."
  | .invalidScope => "The requested scope exceeds the scope granted."

def BearerError.code : BearerError → String
  | .missing => ""
  | .invalidToken => "invalid_token"
  | .invalidRequest => "invalid_request"

def BearerError.description : BearerError → String
  | .missing => "An access token is required."
  | .invalidToken => "The access token is invalid, expired or revoked."
  | .invalidRequest => "The request is malformed."

def PageError.title : PageError → String
  | .unknownClient => "Unknown application"
  | .badRedirectUri => "Invalid redirect URI"
  | .badRequest => "Invalid request"
  | .interactionExpired => "This sign-in has expired"
  | .badLogoutRequest => "Invalid sign-out request"
  | .notFound => "Not found"
  | .methodNotAllowed => "Method not allowed"

def PageError.description : PageError → String
  | .unknownClient => "The application that sent you here is not registered with this provider."
  | .badRedirectUri => "The redirect URI is missing or is not registered, exactly, for this application."
  | .badRequest => "The request is malformed or repeats a parameter."
  | .interactionExpired => "This sign-in request has expired, was completed already, or was started in another browser. Go back to the application and try again."
  | .badLogoutRequest => "The post-logout redirect URI is not registered, exactly, for this application."
  | .notFound => "There is nothing here."
  | .methodNotAllowed => "This method is not allowed here."

def PageError.status : PageError → Nat
  | .notFound => 404
  | .methodNotAllowed => 405
  | _ => 400

def Err.status : Err → Nat
  | .page e => e.status
  | .token .invalidClient => 401
  | .token _ => 400
  | .bearer .invalidRequest => 400
  | .bearer _ => 401

/-- Where a reply redirects: one of Porter's own pages, or a client's URI
with parameters added to its query. -/
inductive Location where
  | interaction (id : String)
  | client (uri : String) (params : List (String × String))
  deriving DecidableEq, Repr

/-- A cookie to set (`maxAge` 0 deletes it). -/
structure SetCookie where
  name : String
  value : String
  path : String
  maxAge : Nat
  deriving DecidableEq, Repr

/-- The token response (RFC 6749 §5.1, OpenID Connect Core §3.1.3.3). -/
structure Tokens where
  access : String
  expiresIn : Nat
  refresh : Option String
  idToken : String
  scope : List String
  deriving DecidableEq, Repr

/-- The pages Porter shows. -/
inductive Page where
  | home
  /-- The sign-in form of an interaction, for a client (its name). -/
  | login (interaction : String) (client : String) (failed : Bool)
  /-- The consent form: client name, scopes, the signed-in user's name. -/
  | consent (interaction : String) (client : String) (scopes : List String) (user : String)
  /-- RP-initiated logout's confirmation form, carrying the request's parameters. -/
  | logout (clientId : Option String) (redirect : Option String) (state : Option String)
  | loggedOut
  deriving DecidableEq, Repr

inductive Body where
  | empty
  | error (e : Err)
  | page (p : Page)
  | discovery
  | jwks
  | tokens (t : Tokens)
  | userinfo (claims : List (String × Text.JV))
  deriving DecidableEq, Repr

structure Reply where
  status : Nat
  body : Body := .empty
  location : Option Location := none
  cookies : List SetCookie := []
  deriving DecidableEq, Repr

/-- The reply for an error: everything about it is determined by the error. -/
def Reply.err (e : Err) : Reply := { status := e.status, body := .error e }

/-- A redirect (303 See Other, as RFC 9700 §4.12 recommends). -/
def Reply.redirect (l : Location) (cookies : List SetCookie := []) : Reply :=
  { status := 303, location := some l, cookies }

def Reply.page (p : Page) (cookies : List SetCookie := []) : Reply := { status := 200, body := .page p, cookies }

/-- The `Location` header of a redirect to a client: the URI exactly as
registered, then `?` (or `&` if it has a query) and the parameters. -/
def Location.render (issuer : String) : Location → String
  | .interaction id => issuer ++ "/interaction/" ++ id
  | .client uri ps => uri ++ (if uri.toList.contains '?' then "&" else "?") ++ Text.encodeForm ps

end Porter
