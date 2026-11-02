/-
A reply on the wire: status, headers and body text. Pure and total; every
value from a request or the database that reaches HTML is escaped, and JSON
strings are escaped too.
-/
import Porter.Api

namespace Porter
open Text

/-- What the server sends. -/
structure Wire where
  status : Nat
  headers : List (String × String)
  body : String
  deriving Repr, Inhabited

/-- The discovery document (OpenID Connect Discovery 1.0 §3). -/
def discoveryJson (cfg : Config) : String :=
  jsonObject [
    ("issuer", .str cfg.issuer),
    ("authorization_endpoint", .str (cfg.issuer ++ "/authorize")),
    ("token_endpoint", .str (cfg.issuer ++ "/token")),
    ("userinfo_endpoint", .str (cfg.issuer ++ "/userinfo")),
    ("jwks_uri", .str (cfg.issuer ++ "/jwks")),
    ("end_session_endpoint", .str (cfg.issuer ++ "/logout")),
    ("scopes_supported", .strs supportedScopes),
    ("response_types_supported", .strs ["code"]),
    ("response_modes_supported", .strs ["query"]),
    ("grant_types_supported", .strs ["authorization_code", "refresh_token"]),
    ("subject_types_supported", .strs ["public"]),
    ("id_token_signing_alg_values_supported", .strs ["ES256", "EdDSA"]),
    ("token_endpoint_auth_methods_supported", .strs ["client_secret_basic", "client_secret_post", "none"]),
    ("code_challenge_methods_supported", .strs ["S256"]),
    ("prompt_values_supported", .strs ["none", "login", "consent", "select_account"]),
    ("claims_supported", .strs ["sub", "iss", "aud", "exp", "iat", "auth_time", "nonce", "sid", "name",
      "preferred_username", "email", "email_verified"]),
    ("authorization_response_iss_parameter_supported", .bool true),
    ("claims_parameter_supported", .bool false),
    ("request_parameter_supported", .bool false),
    ("request_uri_parameter_supported", .bool false),
    ("require_request_uri_registration", .bool false)]

def tokensJson (t : Tokens) : String :=
  jsonObject ([("access_token", .str t.access), ("token_type", .str "Bearer"), ("expires_in", .num t.expiresIn),
    ("id_token", .str t.idToken), ("scope", .str (" ".intercalate t.scope))] ++
    (t.refresh.map fun r => [("refresh_token", JV.str r)]).getD [])

/-! ## Pages -/

def style : String :=
  "body{font-family:system-ui,sans-serif;max-width:26rem;margin:4rem auto;padding:0 1rem;color:#1d1d1f}" ++
  "h1{font-size:1.4rem}form{display:grid;gap:.75rem}label{display:grid;gap:.25rem}" ++
  "input{font:inherit;padding:.5rem;border:1px solid #888;border-radius:.4rem}" ++
  "button{font:inherit;padding:.55rem;border-radius:.4rem;border:0;background:#1d4ed8;color:#fff;cursor:pointer}" ++
  "button.secondary{background:#e5e7eb;color:#111}.error{color:#b91c1c}ul{padding-left:1.2rem}" ++
  "p.note{color:#555;font-size:.9rem}label.show{display:flex;gap:.4rem;align-items:center;font-size:.9rem}"

def layout (title : String) (body : String) : String :=
  "<!doctype html><html lang=\"en\"><head><meta charset=\"utf-8\">" ++
  "<meta name=\"viewport\" content=\"width=device-width,initial-scale=1\">" ++
  "<link rel=\"icon\" href=\"data:,\">" ++
  "<title>" ++ html title ++ "</title><style>" ++ style ++ "</style></head><body>" ++ body ++ "</body></html>"

def scopeText : String → String
  | "openid" => "Sign you in (your user id)"
  | "profile" => "Your name and username"
  | "email" => "Your email address"
  | "offline_access" => "Stay signed in to the application (a refresh token)"
  | s => s

def hidden (name value : String) : String :=
  "<input type=\"hidden\" name=\"" ++ html name ++ "\" value=\"" ++ html value ++ "\">"

/-- The page data the browser app (`Frontend/Ui.lean`) mounts with. -/
def loginFlags (id client : String) (failed : Bool) : String :=
  jsonObject [("kind", .str "login"), ("interaction", .str id), ("client", .str client), ("failed", .bool failed)]

def consentFlags (id client : String) (scopes : List String) (user : String) : String :=
  jsonObject [("kind", .str "consent"), ("interaction", .str id), ("client", .str client), ("user", .str user),
    ("scopes", .raw ("[" ++ ",".intercalate (scopes.map fun s =>
      jsonObject [("scope", .str s), ("text", .str (scopeText s))]) ++ "]"))]

/-- A page of the browser app (`/ui/app.js`, a `Lasm.UI` app mounted with
`flags`), with the same page as a plain form for browsers without scripts. -/
def app (flags : String) (noscript : String) (title : String) : String :=
  layout title ("<noscript>" ++ noscript ++ "</noscript>" ++
    "<div data-lasm-app data-lasm-flags=\"" ++ html flags ++ "\"></div>" ++
    "<script type=\"module\" src=\"/ui/app.js\"></script>")

def Page.toHtml : Page → String
  | .home => layout "Porter" (
      "<h1>Porter</h1><p>An OpenID Connect provider written in Lean and compiled to WebAssembly by Lasm. " ++
      "Applications sign you in here; there is nothing to do on this page.</p>" ++
      "<p class=\"note\">Discovery: <a href=\"/.well-known/openid-configuration\">/.well-known/openid-configuration</a></p>")
  | .login id client failed => app (loginFlags id client failed) (
      "<h1>Sign in</h1><p>to continue to <strong>" ++ html client ++ "</strong></p>" ++
      (if failed then "<p class=\"error\" role=\"alert\">The username or password is incorrect.</p>" else "") ++
      "<form method=\"post\" action=\"/interaction/" ++ html (percentEncode id) ++ "/login\">" ++
      "<label>Username <input name=\"username\" autocomplete=\"username\" required autofocus></label>" ++
      "<label>Password <input name=\"password\" type=\"password\" autocomplete=\"current-password\" required></label>" ++
      "<button type=\"submit\">Sign in</button></form>") "Sign in"
  | .consent id client scopes user => app (consentFlags id client scopes user) (
      "<h1>Allow " ++ html client ++ "?</h1><p>Signed in as <strong>" ++ html user ++ "</strong>. " ++
      html client ++ " asks to:</p><ul>" ++
      String.join (scopes.map fun s => "<li>" ++ html (scopeText s) ++ "</li>") ++ "</ul>" ++
      "<form method=\"post\" action=\"/interaction/" ++ html (percentEncode id) ++ "/consent\">" ++
      "<button type=\"submit\" name=\"decision\" value=\"allow\">Allow</button>" ++
      "<button type=\"submit\" name=\"decision\" value=\"deny\" class=\"secondary\">Deny</button></form>") "Allow access"
  | .logout cid uri state => layout "Sign out" (
      "<h1>Sign out?</h1><p>You will be signed out of Porter.</p>" ++
      "<form method=\"post\" action=\"/logout\">" ++ hidden "confirm" "yes" ++
      (cid.map (hidden "client_id")).getD "" ++ (uri.map (hidden "post_logout_redirect_uri")).getD "" ++
      (state.map (hidden "state")).getD "" ++
      "<button type=\"submit\">Sign out</button></form>")
  | .loggedOut => layout "Signed out" "<h1>Signed out</h1><p>You are signed out of Porter.</p>"

def PageError.toHtml (e : PageError) : String :=
  layout e.title ("<h1>" ++ html e.title ++ "</h1><p>" ++ html e.description ++ "</p>")

/-! ## Headers -/

def cookieHeader (secure : Bool) (c : SetCookie) : String :=
  c.name ++ "=" ++ c.value ++ "; Path=" ++ c.path ++ "; Max-Age=" ++ toString c.maxAge ++
  "; HttpOnly; SameSite=Lax" ++ (if secure then "; Secure" else "")

/-- Headers for HTML: no framing (clickjacking on the consent page), only
Porter's own script and WebAssembly (the browser app), no referrer (the
interaction id is in the URL), not cached. -/
def htmlHeaders : List (String × String) :=
  [("content-type", "text/html; charset=utf-8"),
   ("content-security-policy", "default-src 'none'; script-src 'self' 'wasm-unsafe-eval'; connect-src 'self'; " ++
     "style-src 'unsafe-inline'; img-src data:; frame-ancestors 'none'; base-uri 'none'"),
   ("x-frame-options", "DENY"), ("referrer-policy", "no-referrer"), ("x-content-type-options", "nosniff"),
   ("cache-control", "no-store")]

def jsonHeaders (cache : String) : List (String × String) :=
  [("content-type", "application/json"), ("cache-control", cache), ("x-content-type-options", "nosniff")]

/-- Cross-origin access for the endpoints a browser application calls. -/
def corsHeaders : List (String × String) :=
  [("access-control-allow-origin", "*"), ("access-control-allow-headers", "authorization, content-type"),
   ("access-control-allow-methods", "GET, POST, OPTIONS")]

def errorJson (code description : String) : String :=
  jsonObject [("error", .str code), ("error_description", .str description)]

/-- An error reply's headers and body: a function of the error alone. -/
def Err.wire : Err → List (String × String) × String
  | .page e => (htmlHeaders, e.toHtml)
  | .token e =>
    (jsonHeaders "no-store" ++ [("pragma", "no-cache")] ++ corsHeaders ++
      (if e = .invalidClient then [("www-authenticate", "Basic realm=\"porter\"")] else []),
     errorJson e.code e.description)
  | .bearer e =>
    (jsonHeaders "no-store" ++ corsHeaders ++
      [("www-authenticate", if e = .missing then "Bearer realm=\"porter\""
        else "Bearer realm=\"porter\", error=\"" ++ e.code ++ "\"")],
     errorJson (if e = .missing then "invalid_request" else e.code) e.description)

def Body.wire (cfg : Config) : Body → List (String × String) × String
  | .empty => ([], "")
  | .error e => e.wire
  | .page p => (htmlHeaders, p.toHtml)
  | .discovery => (jsonHeaders "public, max-age=300" ++ corsHeaders, discoveryJson cfg)
  | .jwks => (jsonHeaders "public, max-age=300" ++ corsHeaders, cfg.jwks)
  | .tokens t => (jsonHeaders "no-store" ++ [("pragma", "no-cache")] ++ corsHeaders, tokensJson t)
  | .userinfo claims => (jsonHeaders "no-store" ++ corsHeaders, jsonObject claims)

/-- The reply on the wire. -/
def Reply.render (cfg : Config) (r : Reply) : Wire :=
  let (hs, body) := r.body.wire cfg
  let cors := if r.status = 204 then corsHeaders ++ [("access-control-max-age", "600")] else []
  { status := r.status, body,
    headers := hs ++ cors ++ ((r.location.map fun l => [("location", l.render cfg.issuer)]).getD []) ++
      (r.location.map (fun _ => [("cache-control", "no-store")])).getD [] ++
      r.cookies.map fun c => ("set-cookie", cookieHeader cfg.secure c) }

end Porter
