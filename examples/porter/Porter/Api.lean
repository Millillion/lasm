/-
The provider: every endpoint, written once against `Reads m` and `Crypto m`
for any monad `m`. The server runs it on SQLite or D1 with Web Crypto
(`Server/`); the proofs run it on the model (`Proofs/Model.lean`) with any
hash, password check and signature.

    GET  /.well-known/openid-configuration   discovery
    GET  /jwks                               the public keys
    GET|POST /authorize                      the authorization endpoint (code flow, PKCE S256)
    GET  /interaction/:id                    the sign-in or consent page of a pending request
    POST /interaction/:id/login              sign in
    POST /interaction/:id/consent            allow or deny
    POST /token                              authorization_code and refresh_token grants
    GET|POST /userinfo                       the user's claims, for an access token
    GET|POST /logout                         RP-initiated logout (with confirmation)

`handle` never writes: it returns the reply and the request's writes, which
the server commits in one transaction before it sends the reply.
-/
import Porter.Request
import Porter.Store

namespace Porter
open Text

/-! ## ID tokens -/

/-- The claims of an ID token. -/
structure Claims where
  iss : String
  sub : String
  aud : String
  exp : Nat
  iat : Nat
  authTime : Nat
  sid : String
  nonce : Option String
  deriving DecidableEq, Repr

def Claims.json (c : Claims) : String :=
  jsonObject ([("iss", .str c.iss), ("sub", .str c.sub), ("aud", .str c.aud), ("exp", .num c.exp),
    ("iat", .num c.iat), ("auth_time", .num c.authTime), ("sid", .str c.sid)] ++
    (c.nonce.map fun n => [("nonce", JV.str n)]).getD [])

/-- The claims of the ID token issued at `now` for a grant (OpenID Connect
Core §2). `withNonce`: false on a refresh (§12.2). -/
def idClaims (cfg : Config) (now : Nat) (g : Grant) (withNonce : Bool) : Claims :=
  { iss := cfg.issuer, sub := g.user, aud := g.client, exp := now + cfg.idTokenTtl, iat := now,
    authTime := g.authTime, sid := g.sid, nonce := if withNonce then g.nonce else none }

/-- The JWS header of an ID token. -/
def jwsHeader (alg : Alg) (kid : String) : String :=
  jsonObject [("alg", .str alg.name), ("kid", .str kid), ("typ", .str "JWT")]

/-- The JWS compact serialization: header, claims, signature. -/
def jwt (sig : String) (alg : Alg) (kid : String) (c : Claims) : String :=
  b64urlText (jwsHeader alg kid) ++ "." ++ b64urlText c.json ++ "." ++ sig

/-- The JWS signing input. -/
def signingInput (alg : Alg) (kid : String) (c : Claims) : String :=
  b64urlText (jwsHeader alg kid) ++ "." ++ b64urlText c.json

variable {m : Type → Type} [Monad m] (cfg : Config) (cr : Crypto m) (rd : Reads m) (ctx : Ctx)

/-- A signed ID token. -/
def signIdToken (alg : Alg) (c : Claims) : m String := do
  let sig ← cr.sign alg (signingInput alg (cfg.kid alg) c)
  pure (jwt sig alg (cfg.kid alg) c)

/-! ## Redirects and cookies -/

/-- The parameters of a successful authorization response (with `iss`, RFC 9207). -/
def codeParams (code : String) (state : Option String) : List (String × String) :=
  [("code", code)] ++ (state.map fun s => [("state", s)]).getD [] ++ [("iss", cfg.issuer)]

/-- The parameters of an error sent to the client. -/
def errorParams (e : AuthError) (state : Option String) : List (String × String) :=
  [("error", e.code)] ++ (state.map fun s => [("state", s)]).getD [] ++ [("iss", cfg.issuer)]

/-- An error sent to the client's redirect URI. -/
def errRedirect (uri : String) (state : Option String) (e : AuthError) : Reply :=
  Reply.redirect (.client uri (errorParams cfg e state))

def sessionSet (value : String) : SetCookie :=
  { name := sessionCookie, value, path := "/", maxAge := cfg.sessionTtl }
def sessionClear : SetCookie := { name := sessionCookie, value := "", path := "/", maxAge := 0 }
def interactionSet (value : String) : SetCookie :=
  { name := interactionCookie, value, path := "/interaction", maxAge := cfg.interactionTtl }
def interactionClear : SetCookie := { name := interactionCookie, value := "", path := "/interaction", maxAge := 0 }

/-! ## The authorization endpoint -/

/-- The signed-in session of the request's cookie, if any and unexpired. -/
def currentSession (r : Request) : m (Option Session) :=
  match r.cookie? sessionCookie with
  | none => pure none
  | some v => do
    let s? ← rd.session (← cr.sha256 v)
    pure (match s? with
      | some s => if ctx.now < s.expires then some s else none
      | none => none)

/-- Issues a code for request `a`, signed in as `l`, with scopes `scope`:
the code is `code`, its token family `family`. The redirect goes to the
request's redirect URI. -/
def issueCode (a : AuthRequest) (l : Login) (scope : List String) (code family : String) :
    m (Reply × List Write) := do
  let h ← cr.sha256 code
  let g : Grant :=
    { client := a.client, user := l.user, scope := scope, authTime := l.authTime, sid := l.sid, nonce := a.nonce }
  let k : Code :=
    { hash := h, grant := g, redirectUri := a.redirectUri, challenge := a.challenge, family := family,
      expires := ctx.now + cfg.codeTtl }
  pure (Reply.redirect (.client a.redirectUri (codeParams cfg code a.state)), [.addCode k])

/-- Starts an interaction (sign-in or consent) for request `a`: its id is
the first fresh value, set as a cookie that binds it to this browser. -/
def startInteraction (a : AuthRequest) (login : Option Login) : m (Reply × List Write) := do
  let h ← cr.sha256 ctx.fresh.a
  pure (Reply.redirect (.interaction ctx.fresh.a) [interactionSet cfg ctx.fresh.a],
    [.addInteraction { hash := h, request := a, login, expires := ctx.now + cfg.interactionTtl }])

/-- Whether a session's sign-in is fresh enough for the request. -/
def freshEnough (a : AuthRequest) (s : Session) : Bool :=
  !a.promptLogin && (match a.maxAge with | some n => ctx.now ≤ s.authTime + n | none => true)

def Session.login (s : Session) : Login := { user := s.user, sid := s.sid, authTime := s.authTime }

/-- A valid authorization request from a browser with session `s?`. -/
def authorizeValid (c : Client) (a : AuthRequest) (s? : Option Session) : m (Reply × List Write) :=
  match s? with
  | some s =>
    if freshEnough ctx a s then do
      let consented ← rd.consent s.user a.client
      let scope := grantScope c a.scope
      if !a.promptConsent && scope.all (· ∈ consented) then
        issueCode cfg cr ctx a s.login scope ctx.fresh.a ctx.fresh.b
      else if a.promptNone then pure (errRedirect cfg a.redirectUri a.state .consentRequired, [])
      else startInteraction cfg cr ctx a (some s.login)
    else if a.promptNone then pure (errRedirect cfg a.redirectUri a.state .loginRequired, [])
    else startInteraction cfg cr ctx a none
  | none =>
    if a.promptNone then pure (errRedirect cfg a.redirectUri a.state .loginRequired, [])
    else startInteraction cfg cr ctx a none

/-- `GET|POST /authorize`. -/
def authorize (r : Request) : m (Reply × List Write) :=
  match r.params? with
  | none => pure (Reply.err (.page .badRequest), [])
  | some ps =>
    match checkAuth cfg ps with
    | .page e => pure (Reply.err (.page e), [])
    | .redirect uri state e => pure (errRedirect cfg uri state e, [])
    | .ok a =>
      match cfg.client? a.client with
      | none => pure (Reply.err (.page .unknownClient), [])
      | some c => do authorizeValid cfg cr rd ctx c a (← currentSession cr rd ctx r)

/-! ## Interactions: sign-in and consent -/

/-- The pending interaction `id`, if this browser started it (its cookie)
and it has not expired, with its client, whose redirect URI must still be
registered (and its `state` short enough to send back, as `checkAuth`
required). -/
def interactionOf (r : Request) (id : String) : m (Option (Interaction × Client)) :=
  if r.cookie? interactionCookie ≠ some id then pure none
  else do
    let i? ← rd.interaction (← cr.sha256 id)
    pure (match i? with
      | none => none
      | some i =>
        if ctx.now < i.expires then
          match cfg.client? i.request.client with
          | some c =>
            if i.request.redirectUri ∈ c.redirectUris then
              if shortState i.request.state then some (i, c) else none
            else none
          | none => none
        else none)

def userName (sub : String) : String := ((cfg.userBySub? sub).map (·.name)).getD sub

/-- `GET /interaction/:id`: the sign-in page, or the consent page once signed in. -/
def interactionPage (r : Request) (id : String) : m (Reply × List Write) := do
  match ← interactionOf cfg cr rd ctx r id with
  | none => pure (Reply.err (.page .interactionExpired), [])
  | some (i, c) =>
    match i.login with
    | none => pure (Reply.page (.login id c.name false), [])
    | some l => pure (Reply.page (.consent id c.name (grantScope c i.request.scope) (userName cfg l.user)), [])

/-- Finishes an interaction signed in as `l`: issues the code if the user
has consented to every scope (and `prompt=consent` was not asked), else asks
for consent. -/
def afterLogin (i : Interaction) (c : Client) (id : String) (l : Login) (pre : List Write) (cookies : List SetCookie) :
    m (Reply × List Write) := do
  let consented ← rd.consent l.user c.id
  let scope := grantScope c i.request.scope
  if !i.request.promptConsent && scope.all (· ∈ consented) then do
    let (reply, w) ← issueCode cfg cr ctx i.request l scope ctx.fresh.c ctx.fresh.d
    pure ({ reply with cookies := cookies ++ [interactionClear] }, pre ++ [.endInteraction i.hash] ++ w)
  else pure (Reply.redirect (.interaction id) cookies, pre ++ [.signIn i.hash l])

/-- `POST /interaction/:id/login`. A failed sign-in answers the same page
whether or not the username exists. -/
def login (r : Request) (id : String) : m (Reply × List Write) := do
  match ← interactionOf cfg cr rd ctx r id with
  | none => pure (Reply.err (.page .interactionExpired), [])
  | some (i, c) =>
    match r.form? with
    | none => pure (Reply.err (.page .badRequest), [])
    | some ps =>
      let username := ((param ps "username").value?).getD ""
      let password := ((param ps "password").value?).getD ""
      let user? := cfg.userByName? username
      let ok ← cr.checkPassword password ((user?.map (·.passwordHash)).getD cfg.dummyHash)
      match user? with
      | some u =>
        if ok then do
          let sh ← cr.sha256 ctx.fresh.a
          let l : Login := { user := u.sub, sid := ctx.fresh.b, authTime := ctx.now }
          let s : Session := { hash := sh, user := u.sub, sid := ctx.fresh.b, authTime := ctx.now,
                               expires := ctx.now + cfg.sessionTtl }
          afterLogin cfg cr rd ctx i c id l [.addSession s] [sessionSet cfg ctx.fresh.a]
        else pure (Reply.page (.login id c.name true), [])
      | none => pure (Reply.page (.login id c.name true), [])

/-- `POST /interaction/:id/consent`: allowed only from the browser that
started the interaction (its cookie), signed in as the user who signed in
during it. -/
def consent (r : Request) (id : String) : m (Reply × List Write) := do
  match ← interactionOf cfg cr rd ctx r id with
  | none => pure (Reply.err (.page .interactionExpired), [])
  | some (i, c) =>
    match i.login with
    | none => pure (Reply.err (.page .interactionExpired), [])
    | some l =>
      match ← currentSession cr rd ctx r with
      | none => pure (Reply.err (.page .interactionExpired), [])
      | some s =>
        if s.user = l.user ∧ s.sid = l.sid then
          match r.form?.map (fun ps => (param ps "decision").value?) with
          | some (some "allow") => do
            let scope := grantScope c i.request.scope
            let (reply, w) ← issueCode cfg cr ctx i.request s.login scope ctx.fresh.a ctx.fresh.b
            pure ({ reply with cookies := [interactionClear] },
              [.consent l.user c.id scope, .endInteraction i.hash] ++ w)
          | some (some "deny") =>
            pure ({ errRedirect cfg i.request.redirectUri i.request.state .accessDenied with cookies := [interactionClear] },
              [.endInteraction i.hash])
          | _ => pure (Reply.err (.page .badRequest), [])
        else pure (Reply.err (.page .interactionExpired), [])

/-! ## The token endpoint -/

/-- The client a token request authenticates as, if it does. A public client
(no secret) must present no secret; a confidential one its secret. -/
def authenticate (ca : ClientAuth) : m (Option Client) :=
  match ca with
  | .ok id secret =>
    match cfg.client? id, secret with
    | some c, some s =>
      match c.secretHash with
      | some h => do pure (if (← cr.sha256 s) = h then some c else none)
      | none => pure none
    | some c, none => pure (if c.secretHash.isNone then some c else none)
    | none, _ => pure none
  | _ => pure none

def tokenErr (e : TokenError) : Reply × List Write := (Reply.err (.token e), [])

/-- Issues an access token for grant `g`, an ID token and, if the family's
grant `fg` has `offline_access`, a refresh token carrying `fg`, all in token
family `family`; `withNonce` as in `idClaims`. `pre`: the writes that
consume the code or the refresh token. -/
def issueTokens (c : Client) (g fg : Grant) (family : String) (withNonce : Bool) (pre : List Write) :
    m (Reply × List Write) := do
  let ah ← cr.sha256 ctx.fresh.a
  let rh ← cr.sha256 ctx.fresh.b
  let idt ← signIdToken cfg cr c.alg (idClaims cfg ctx.now g withNonce)
  let offline := "offline_access" ∈ fg.scope
  let tokens : Tokens := { access := ctx.fresh.a, expiresIn := cfg.accessTtl,
                           refresh := (if offline then some ctx.fresh.b else none), idToken := idt, scope := g.scope }
  let access : Access := { hash := ah, family := family, grant := g, expires := ctx.now + cfg.accessTtl }
  let refresh : Refresh := { hash := rh, family := family, grant := fg, expires := ctx.now + cfg.refreshTtl }
  pure ({ status := 200, body := .tokens tokens },
        pre ++ [.addAccess access] ++ (if offline then [.addRefresh refresh] else []))

/-- `grant_type=authorization_code`. -/
def codeGrant (c : Client) (ps : List (String × String)) : m (Reply × List Write) :=
  match (param ps "code").value?, (param ps "redirect_uri").value?, (param ps "code_verifier").value? with
  | some code, some ru, some ver =>
    if !validVerifier ver ∨ code.length > 512 then pure (tokenErr .invalidRequest)
    else do
      let h ← cr.sha256 code
      let k? ← rd.code h
      let vh ← cr.sha256 ver
      match k? with
      | none => pure (tokenErr .invalidGrant)
      | some k =>
        if k.used then pure (Reply.err (.token .invalidGrant), [.revoke k.family])
        else if k.grant.client ≠ c.id ∨ ctx.now ≥ k.expires ∨ k.redirectUri ≠ ru ∨ vh ≠ k.challenge then
          pure (tokenErr .invalidGrant)
        else issueTokens cfg cr ctx c k.grant k.grant k.family true [.useCode h]
  | _, _, _ => pure (tokenErr .invalidRequest)

/-- `grant_type=refresh_token`: rotation, and reuse detection. -/
def refreshGrant (c : Client) (ps : List (String × String)) : m (Reply × List Write) :=
  match (param ps "refresh_token").value?, param ps "scope" with
  | some tok, scopeParam =>
    if scopeParam = .repeated ∨ tok.length > 512 then pure (tokenErr .invalidRequest)
    else do
      let h ← cr.sha256 tok
      match ← rd.refresh h with
      | none => pure (tokenErr .invalidGrant)
      | some t =>
        let revoked ← rd.revoked t.family
        if t.rotated then pure (Reply.err (.token .invalidGrant), [.revoke t.family])
        else if revoked ∨ t.grant.client ≠ c.id ∨ ctx.now ≥ t.expires then pure (tokenErr .invalidGrant)
        else
          let scope := match scopeParam with
            | .one s => splitScope s
            | _ => t.grant.scope
          if !(scope.all (· ∈ t.grant.scope)) ∨ "openid" ∉ scope then pure (tokenErr .invalidScope)
          -- The new refresh token keeps the family's whole grant; only this
          -- access token is narrowed.
          else issueTokens cfg cr ctx c { t.grant with scope } t.grant t.family false [.rotate h]
  | none, _ => pure (tokenErr .invalidRequest)

/-- `POST /token`. -/
def token (r : Request) : m (Reply × List Write) :=
  match r.form? with
  | none => pure (tokenErr .invalidRequest)
  | some ps =>
    match clientAuth r ps with
    | .malformed => pure (tokenErr .invalidRequest)
    | ca => do
      match ← authenticate cfg cr ca with
      | none => pure (tokenErr .invalidClient)
      | some c =>
        match param ps "grant_type" with
        | .one "authorization_code" => codeGrant cfg cr rd ctx c ps
        | .one "refresh_token" =>
          if "offline_access" ∈ c.scopes then refreshGrant cfg cr rd ctx c ps else pure (tokenErr .unsupportedGrantType)
        | .one _ => pure (tokenErr .unsupportedGrantType)
        | _ => pure (tokenErr .invalidRequest)

/-! ## The userinfo endpoint -/

/-- The claims of a user for the scopes of a token. -/
def userClaims (u : User) (scope : List String) : List (String × JV) :=
  [("sub", .str u.sub)] ++
  (if "profile" ∈ scope then [("name", .str u.name), ("preferred_username", .str u.username)] else []) ++
  (if "email" ∈ scope then [("email", .str u.email), ("email_verified", .bool u.emailVerified)] else [])

/-- `GET|POST /userinfo`, with the access token in the `Authorization` header. -/
def userinfo (r : Request) : m (Reply × List Write) :=
  match (r.header? "authorization").bind (authorization? · "Bearer") with
  | none => pure (Reply.err (.bearer .missing), [])
  | some tok =>
    if tok.length > 512 then pure (Reply.err (.bearer .invalidToken), [])
    else do
      match ← rd.access (← cr.sha256 tok) with
      | none => pure (Reply.err (.bearer .invalidToken), [])
      | some a =>
        let revoked ← rd.revoked a.family
        if revoked ∨ ctx.now ≥ a.expires then pure (Reply.err (.bearer .invalidToken), [])
        else match cfg.userBySub? a.grant.user with
          | none => pure (Reply.err (.bearer .invalidToken), [])
          | some u => pure ({ status := 200, body := .userinfo (userClaims u a.grant.scope) }, [])

/-! ## RP-initiated logout -/

/-- The parameters of a logout request: `client_id`, `post_logout_redirect_uri`
(registered exactly for that client), `state` (at most `maxState` bytes: the
redirect carries it back). -/
def logoutParams (ps : List (String × String)) : Option (Option String × Option String × Option String) :=
  if ["client_id", "post_logout_redirect_uri", "state", "id_token_hint", "confirm"].any
      (fun k => param ps k = .repeated) then none
  else if shortState (param ps "state").value? then
    let cid := (param ps "client_id").value?
    let uri := (param ps "post_logout_redirect_uri").value?
    let state := (param ps "state").value?
    match uri with
    | none => some (cid, none, state)
    | some u =>
      match cid.bind cfg.client? with
      | some c => if u ∈ c.postLogoutRedirectUris then some (cid, some u, state) else none
      | none => none
  else none

/-- `GET|POST /logout`: a confirmation page; the confirmed POST ends the
session and returns to the client's registered post-logout URI, if given. -/
def logout (r : Request) : m (Reply × List Write) :=
  match r.params? with
  | none => pure (Reply.err (.page .badRequest), [])
  | some ps =>
    match logoutParams cfg ps with
    | none => pure (Reply.err (.page .badLogoutRequest), [])
    | some (cid, uri, state) =>
      if r.method = "POST" ∧ (param ps "confirm").value? = some "yes" then do
        let ends ← match r.cookie? sessionCookie with
          | some v => do pure [Write.endSession (← cr.sha256 v)]
          | none => pure []
        match uri with
        | some u => pure (Reply.redirect (.client u ((state.map fun s => [("state", s)]).getD [])) [sessionClear], ends)
        | none => pure (Reply.page .loggedOut [sessionClear], ends)
      else pure (Reply.page (.logout cid uri state), [])

/-! ## Routing -/

def methodNotAllowed : Reply × List Write := (Reply.err (.page .methodNotAllowed), [])

/-- Every request. -/
def handle (r : Request) : m (Reply × List Write) :=
  if r.body.utf8ByteSize > maxBody then pure (Reply.err (.page .badRequest), []) else
  match r.path with
  | [] => if r.method = "GET" then pure (Reply.page .home, []) else pure methodNotAllowed
  | [".well-known", "openid-configuration"] =>
    if r.method = "GET" then pure ({ status := 200, body := .discovery }, []) else pure methodNotAllowed
  | ["jwks"] => if r.method = "GET" then pure ({ status := 200, body := .jwks }, []) else pure methodNotAllowed
  | ["authorize"] =>
    if r.method = "GET" ∨ r.method = "POST" then authorize cfg cr rd ctx r else pure methodNotAllowed
  | ["token"] =>
    if r.method = "POST" then token cfg cr rd ctx r
    else if r.method = "OPTIONS" then pure ({ status := 204 }, []) else pure methodNotAllowed
  | ["userinfo"] =>
    if r.method = "GET" ∨ r.method = "POST" then userinfo cfg cr rd ctx r
    else if r.method = "OPTIONS" then pure ({ status := 204 }, []) else pure methodNotAllowed
  | ["logout"] => if r.method = "GET" ∨ r.method = "POST" then logout cfg cr r else pure methodNotAllowed
  | ["interaction", id] => if r.method = "GET" then interactionPage cfg cr rd ctx r id else pure methodNotAllowed
  | ["interaction", id, "login"] => if r.method = "POST" then login cfg cr rd ctx r id else pure methodNotAllowed
  | ["interaction", id, "consent"] => if r.method = "POST" then consent cfg cr rd ctx r id else pure methodNotAllowed
  | _ => pure (Reply.err (.page .notFound), [])

end Porter
