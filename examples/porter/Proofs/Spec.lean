/-
# What is proved about Porter

Every proposition proved about Porter, as a named `def … : Prop`, grouped by
requirement, with no proofs in this file. The proofs are in the other files
of `Proofs/`; each proposition `Spec.x` is proved by a theorem
`Porter.Proofs.x : Spec.x`, and `npm run proofs` fails unless every
proposition here has its theorem and every such theorem uses only Lean's
standard axioms. SPEC.md maps the requirements onto these names; PROOFS.md
is generated from this file.

Reading guide. The propositions talk about the code the server runs: the
provider (`Porter.handle` and the endpoints in `Porter/Api.lean`), its
request parsing (`Porter/Request.lean`) and its replies (`Porter/Reply.lean`,
`Porter/Render.lean`). Only the database and the platform are models
(`Proofs/Model.lean`): `D` is a database (its tables as lists); `e : Env` is
the configuration and *any* functions for SHA-256 (`e.H`), the password
check (`e.check`) and the signature (`e.S`), so every proposition holds
whatever those functions are; `ctx` is the request's clock reading
(`ctx.now`) and fresh random values. `reply e ctx r D` and `writes e ctx r D`
are what request `r` answers and changes; `after e ctx r D` is the database
after it; `trace e D rs` lists the writes of each request of a sequence.
-/
import Proofs.Model
import Porter.Render

namespace Porter.Spec
open Porter Porter.Proofs Text

/-! ## Vocabulary -/

/-- Token request `r`, with form `ps`, authenticates as client `c`: its
credentials name `c`, and either `c` is public and no secret was sent, or
the secret's hash is `c`'s. -/
def Authenticates (e : Env) (r : Request) (ps : List (String × String)) (c : Client) : Prop :=
  ∃ id secret, clientAuth r ps = .ok id secret ∧ e.cfg.client? id = some c ∧
    ((c.secretHash = none ∧ secret = none) ∨ (∃ s, secret = some s ∧ c.secretHash = some (e.H s)))

/-- `r` is a `POST /token` with form `ps`. -/
def TokenPost (r : Request) (ps : List (String × String)) : Prop :=
  r.method = "POST" ∧ r.path = ["token"] ∧ r.form? = some ps

/-- The ID token signed with algorithm `alg` over claims `c`, with `e`'s
signature function: `header.claims.signature`. -/
def signed (e : Env) (alg : Alg) (c : Claims) : String :=
  jwt (e.S alg (signingInput alg (e.cfg.kid alg) c)) alg (e.cfg.kid alg) c

/-- The statuses Porter answers with. -/
def statuses : List Nat := [200, 204, 303, 400, 401, 404, 405]

/-! ## A. An authorization code is redeemed at most once -/

/-- **At most once**: in any sequence of requests, from any database, at
most one request redeems a given code (marks it used, which every token
response for a code does, `Spec.code_bound`). -/
def code_redeemed_at_most_once : Prop :=
  ∀ e D rs h, (trace e D rs).countP (fun ws => decide (Write.useCode h ∈ ws)) ≤ 1

/-- **A replayed code revokes its tokens** (RFC 6749 §4.1.2): presenting a
used code, in an otherwise well-formed request from an authenticated client,
is `invalid_grant` and revokes the token family issued from the code, and
changes nothing else. -/
def code_replay_revokes : Prop :=
  ∀ e ctx r D ps cl code ru ver k, TokenPost r ps → Authenticates e r ps cl →
    param ps "grant_type" = .one "authorization_code" → (param ps "code").value? = some code →
    (param ps "redirect_uri").value? = some ru → (param ps "code_verifier").value? = some ver →
    validVerifier ver = true → code.length ≤ 512 →
    D.code? (e.H code) = some k → k.used = true →
    reply e ctx r D = Reply.err (.token .invalidGrant) ∧ writes e ctx r D = [.revoke k.family]

/-! ## B. A code is bound to its client, its redirect URI and its PKCE verifier -/

/-- **Tokens only from the token endpoint**: a reply carrying tokens answers
a `POST /token` whose client authenticated, for the authorization code or
the refresh token grant. -/
def tokens_only_from_token_endpoint : Prop :=
  ∀ e ctx r D t, (reply e ctx r D).body = .tokens t →
    ∃ ps cl, TokenPost r ps ∧ Authenticates e r ps cl ∧
      (param ps "grant_type" = .one "authorization_code" ∨ param ps "grant_type" = .one "refresh_token")

/-- **The code is bound**: tokens for an authorization code are issued only
if the code is stored, unused and unexpired, was issued to the client that
authenticated, for exactly this `redirect_uri`, and the hash of this
`code_verifier` is its PKCE challenge (S256, for any hash function); the
reply marks the code used, and its access token carries the code's grant. -/
def code_bound : Prop :=
  ∀ e ctx r D t ps, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "authorization_code" →
    ∃ code ru ver k cl, (param ps "code").value? = some code ∧ (param ps "redirect_uri").value? = some ru ∧
      (param ps "code_verifier").value? = some ver ∧ D.code? (e.H code) = some k ∧ Authenticates e r ps cl ∧
      k.grant.client = cl.id ∧ k.redirectUri = ru ∧ e.H ver = k.challenge ∧ k.used = false ∧
      ctx.now < k.expires ∧ Write.useCode (e.H code) ∈ writes e ctx r D ∧
      ∀ a, Write.addAccess a ∈ writes e ctx r D → a.grant = k.grant ∧ a.family = k.family

/-- **A code records its request**: every code issued records the client,
the exact redirect URI, the PKCE challenge, the nonce and the scopes of an
authorization request that this request validated (`checkAuth`) or that an
interaction in the database holds; its client is configured, the redirect
URI is registered for it, the scopes are those requested that the client
may have; it is unused and expires `codeTtl` seconds from now. -/
def code_records_request : Prop :=
  ∀ e ctx r D k, Write.addCode k ∈ writes e ctx r D →
    ∃ a c, ((∃ ps, r.params? = some ps ∧ checkAuth e.cfg ps = .ok a) ∨ (∃ i ∈ D.interactions, i.request = a)) ∧
      e.cfg.client? a.client = some c ∧ a.redirectUri ∈ c.redirectUris ∧
      k.grant.client = a.client ∧ k.redirectUri = a.redirectUri ∧ k.challenge = a.challenge ∧
      k.grant.nonce = a.nonce ∧ k.grant.scope = grantScope c a.scope ∧ k.used = false ∧
      k.expires = ctx.now + e.cfg.codeTtl

/-- **Granted scopes are requested and allowed**: a code's scopes are among
those requested and those the client may have. -/
def granted_scopes_allowed : Prop :=
  ∀ (c : Client) requested s, s ∈ grantScope c requested → s ∈ requested ∧ s ∈ c.scopes ∧ s ∈ supportedScopes

/-! ## C. The redirect target is always a registered URI, exactly -/

/-- **Authorization redirects go to registered URIs**: whenever Porter
redirects to a client outside logout, the target is, exactly, one of the
redirect URIs registered for a configured client. -/
def redirect_registered : Prop :=
  ∀ e ctx r D u ps, r.path ≠ ["logout"] → (reply e ctx r D).location = some (.client u ps) →
    ∃ c ∈ e.cfg.clients, u ∈ c.redirectUris

/-- **Logout redirects go to registered URIs**: logout redirects only to a
post-logout redirect URI registered, exactly, for the client the request
names. -/
def logout_redirect_registered : Prop :=
  ∀ e ctx r D u ps, r.path = ["logout"] → (reply e ctx r D).location = some (.client u ps) →
    ∃ c ∈ e.cfg.clients, ∃ qs, r.params? = some qs ∧ (param qs "client_id").value? = some c.id ∧
      u ∈ c.postLogoutRedirectUris

/-- **No open redirector** (RFC 6749 §4.1.2.1): an authorization request
whose `client_id` is not a configured client, or whose `redirect_uri` is
not exactly registered for it, gets an error page (400) and no redirect. -/
def untrusted_redirect_uri_not_followed : Prop :=
  ∀ e ctx r D ps, r.path = ["authorize"] → (r.method = "GET" ∨ r.method = "POST") → r.params? = some ps →
    (∀ cid c u, param ps "client_id" = .one cid → e.cfg.client? cid = some c → param ps "redirect_uri" = .one u →
      u ∉ c.redirectUris) →
    (reply e ctx r D).location = none ∧ (reply e ctx r D).status = 400

/-- **What a redirect to a client carries**: only `code`, `state`, `iss`
and `error`; `iss` is the issuer (RFC 9207, against mix-up), and an error is
one of the fixed error codes. -/
def redirect_params : Prop :=
  ∀ e ctx r D u ps, (reply e ctx r D).location = some (.client u ps) → ∀ p ∈ ps,
    (p.1 = "code" ∨ p.1 = "state" ∨ p.1 = "iss" ∨ p.1 = "error") ∧ (p.1 = "iss" → p.2 = e.cfg.issuer) ∧
    (p.1 = "error" → ∃ a : AuthError, p.2 = a.code)

/-- **The Location header starts with the URI exactly**: a redirect to a
client is the URI as registered, then `?` or `&`, then the parameters. -/
def redirect_location_exact : Prop :=
  ∀ iss u ps, ∃ rest, (Location.client u ps).render iss = u ++ rest ∧ (rest.startsWith "?" ∨ rest.startsWith "&")

/-- **Redirects reflect no unbounded input**: the `state` a redirect to a
client carries back, the only part of its `Location` header taken from the
request (`Spec.redirect_registered`, `Spec.redirect_params`), is at most
`maxState` (2048) bytes; a longer `state` gets an error page. So no request
can make Porter send a header section HTTP clients refuse (16 KiB in
Node). -/
def redirect_state_bounded : Prop :=
  ∀ e ctx r D u ps, (reply e ctx r D).location = some (.client u ps) → ∀ p ∈ ps,
    p.1 = "state" → p.2.utf8ByteSize ≤ maxState

/-! ## D. A reused refresh token revokes its family -/

/-- **Refresh tokens are bound**: tokens for a refresh token are issued only
if it is stored, not yet rotated, unexpired, its family not revoked, and it
was issued to the client that authenticated; the reply rotates it; the new
refresh token keeps the family and its grant, and the access token's scope
is within the grant's (a refresh never widens the scope). -/
def refresh_bound : Prop :=
  ∀ e ctx r D t ps, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "refresh_token" →
    ∃ tok x cl, (param ps "refresh_token").value? = some tok ∧ D.refresh? (e.H tok) = some x ∧
      Authenticates e r ps cl ∧ x.grant.client = cl.id ∧ x.rotated = false ∧ x.family ∉ D.revoked ∧
      ctx.now < x.expires ∧ Write.rotate (e.H tok) ∈ writes e ctx r D ∧
      (∀ s ∈ t.scope, s ∈ x.grant.scope) ∧
      (∀ a, Write.addAccess a ∈ writes e ctx r D → a.family = x.family ∧ ∀ s ∈ a.grant.scope, s ∈ x.grant.scope) ∧
      (∀ y, Write.addRefresh y ∈ writes e ctx r D → y.family = x.family ∧ y.grant = x.grant)

/-- **Reuse revokes the family** (RFC 9700 §4.14.2): presenting a refresh
token that was already rotated, from an authenticated client that may use
refresh tokens, is `invalid_grant` and revokes the token's whole family,
and changes nothing else. -/
def refresh_reuse_revokes : Prop :=
  ∀ e ctx r D ps cl tok x, TokenPost r ps → Authenticates e r ps cl → "offline_access" ∈ cl.scopes →
    param ps "grant_type" = .one "refresh_token" → (param ps "refresh_token").value? = some tok →
    param ps "scope" ≠ .repeated → tok.length ≤ 512 →
    D.refresh? (e.H tok) = some x → x.rotated = true →
    reply e ctx r D = Reply.err (.token .invalidGrant) ∧ writes e ctx r D = [.revoke x.family]

/-- **At most one rotation**: in any sequence of requests, at most one
request rotates a given refresh token. -/
def refresh_rotated_at_most_once : Prop :=
  ∀ e D rs h, (trace e D rs).countP (fun ws => decide (Write.rotate h ∈ ws)) ≤ 1

/-- **Revocation is permanent**: a revoked family stays revoked after any request. -/
def revocation_permanent : Prop :=
  ∀ e ctx r D f, f ∈ D.revoked → f ∈ (after e ctx r D).revoked

/-! ## E. Every issued token's claims match the session and the client -/

/-- **ID tokens for a code**: the ID token issued for an authorization code
is signed with the client's algorithm and key, and its claims are exactly
the issuer, the client (`aud`), and the code's user, sign-in time, session
id and nonce, issued now and expiring `idTokenTtl` seconds later. -/
def id_token_for_code : Prop :=
  ∀ e ctx r D t ps, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "authorization_code" →
    ∃ code k cl c, (param ps "code").value? = some code ∧ D.code? (e.H code) = some k ∧ Authenticates e r ps cl ∧
      k.grant.client = cl.id ∧ t.idToken = signed e cl.alg c ∧
      c = { iss := e.cfg.issuer, aud := k.grant.client, sub := k.grant.user, authTime := k.grant.authTime, sid := k.grant.sid,
            nonce := k.grant.nonce, iat := ctx.now, exp := ctx.now + e.cfg.idTokenTtl }

/-- **ID tokens for a refresh**: likewise from the refresh token's grant,
without a nonce (OpenID Connect Core §12.2). -/
def id_token_for_refresh : Prop :=
  ∀ e ctx r D t ps, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "refresh_token" →
    ∃ tok x cl c, (param ps "refresh_token").value? = some tok ∧ D.refresh? (e.H tok) = some x ∧
      Authenticates e r ps cl ∧ x.grant.client = cl.id ∧ t.idToken = signed e cl.alg c ∧
      c = { iss := e.cfg.issuer, aud := x.grant.client, sub := x.grant.user, authTime := x.grant.authTime, sid := x.grant.sid,
            nonce := none, iat := ctx.now, exp := ctx.now + e.cfg.idTokenTtl }

/-- **A code needs a sign-in**: a code is issued only for the user, session
id and sign-in time of either a live session whose id is the request's
session cookie, or a sign-in in this very request (a password the check
accepts for that user, now). -/
def code_requires_signin : Prop :=
  ∀ e ctx r D k, Write.addCode k ∈ writes e ctx r D →
    (∃ v s, r.cookie? sessionCookie = some v ∧ D.session? (e.H v) = some s ∧ ctx.now < s.expires ∧
      s.user = k.grant.user ∧ s.sid = k.grant.sid ∧ s.authTime = k.grant.authTime) ∨
    (∃ u ∈ e.cfg.users, ∃ ps, r.form? = some ps ∧ ((param ps "username").value?).getD "" = u.username ∧
      e.check (((param ps "password").value?).getD "") u.passwordHash = true ∧
      k.grant.user = u.sub ∧ k.grant.authTime = ctx.now)

/-- **A code needs consent**: every scope of an issued code has been
consented to, by its user for its client, in the database after the request. -/
def code_requires_consent : Prop :=
  ∀ e ctx r D k, Write.addCode k ∈ writes e ctx r D →
    ∀ s ∈ k.grant.scope, s ∈ (after e ctx r D).consented k.grant.user k.grant.client

/-- **Userinfo answers for a live token**: the claims `/userinfo` returns
are those of the user of a stored, unexpired, unrevoked access token sent
as `Authorization: Bearer`, for that token's scopes. -/
def userinfo_claims : Prop :=
  ∀ e ctx r D cs, (reply e ctx r D).body = .userinfo cs →
    ∃ h tok a u, r.header? "authorization" = some h ∧ authorization? h "Bearer" = some tok ∧
      D.access? (e.H tok) = some a ∧ a.family ∉ D.revoked ∧ ctx.now < a.expires ∧
      u ∈ e.cfg.users ∧ u.sub = a.grant.user ∧ cs = userClaims u a.grant.scope

/-! ## F. No endpoint reveals secrets in errors -/

/-- **Errors are fixed replies**: every reply with an error status (400 and
up) is `Reply.err x` for an error code `x`, so its status, headers and body
are determined by `x` alone: no input, secret, token or password reaches
an error. -/
def errors_reveal_nothing : Prop :=
  ∀ e ctx r D, 400 ≤ (reply e ctx r D).status → ∃ x, reply e ctx r D = Reply.err x

/-- **An error's bytes depend on the error alone**: not even on the
configuration (issuer, keys, clients). -/
def error_wire_fixed : Prop :=
  ∀ x cfg cfg', (Reply.err x).render cfg = (Reply.err x).render cfg'

/-- **A failed sign-in tells nothing**: two sign-in attempts in the same
interaction that differ only in their forms (username, password) and both
fail get the same reply, and change nothing; so the reply does not tell
whether the username exists. -/
def failed_signin_uniform : Prop :=
  ∀ e ctx r b D id, r.path = ["interaction", id, "login"] → r.form?.isSome → ({ r with body := b } : Request).form?.isSome →
    (∀ s, Write.addSession s ∉ writes e ctx r D) → (∀ s, Write.addSession s ∉ writes e ctx { r with body := b } D) →
    reply e ctx r D = reply e ctx { r with body := b } D ∧ writes e ctx r D = [] ∧ writes e ctx { r with body := b } D = []

/-! ## G. Request handlers are total -/

/-- **Every request gets an answer**: whatever the request (any method,
path, headers and body, however malformed) and whatever the database, the
reply's status is one of 200, 204, 303, 400, 401, 404 and 405. (That the
handlers are total, with no `partial` definition and no panic on their path,
is checked separately by test/Axioms.lean.) -/
def replies_well_formed : Prop :=
  ∀ e ctx r D, (reply e ctx r D).status ∈ statuses

/-! ## H. Expiry, for every clock -/

/-- **Expired codes are refused** *(consequence)*: at any time at or after
a code's expiry, it gets no tokens. -/
def expired_code_refused : Prop :=
  ∀ e ctx r D t ps code k, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "authorization_code" → (param ps "code").value? = some code →
    D.code? (e.H code) = some k → ¬ k.expires ≤ ctx.now

/-- **Expired or revoked refresh tokens are refused** *(consequence)*. -/
def dead_refresh_refused : Prop :=
  ∀ e ctx r D t ps tok x, (reply e ctx r D).body = .tokens t → r.form? = some ps →
    param ps "grant_type" = .one "refresh_token" → (param ps "refresh_token").value? = some tok →
    D.refresh? (e.H tok) = some x → ¬ x.expires ≤ ctx.now ∧ x.family ∉ D.revoked

/-! ## I. A commit that landed is not run again -/

/-- **A landed commit stands** (issue #138): when a commit throws, the
server (`afterFailedCommit`) runs the request again only if its commit
receipt is not in the database (or could not be read) and another commit
came in between; if the receipt is there, the commit landed and the
request's reply stands, so a transient database error never makes a
request run against its own writes. -/
def landed_commit_stands : Prop :=
  ∀ landed moved, afterFailedCommit (some true) moved = .stand ∧
    (afterFailedCommit landed moved = .rerun ↔ landed ≠ some true ∧ moved = true)

end Porter.Spec
