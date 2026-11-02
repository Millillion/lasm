# What is proved about Porter

Porter's endpoints are ordinary Lean functions, and the server runs exactly
those functions. So instead of only testing them, we can prove things about
them for every possible request, every database, every clock and every
sequence of requests. This file lists each proved proposition in plain
English. [SPEC.md](SPEC.md) goes the other way: it takes each requirement of
OAuth 2.0, its security best current practice and OpenID Connect, and says
which proposition covers it, which test covers it, or why it is out of scope.

```sh
npm run proofs              # builds Porter/ and Proofs/, then test/Axioms.lean, then checks the documents
npm run proofs -- --write   # also regenerates the tables below from Proofs/Spec.lean
npm run proofs:paranoid     # replays the proofs through Lean's kernel and every external checker (Linux)
```

## How to review the propositions

Every proposition is a named `def … : Prop` in
[`Proofs/Spec.lean`](Proofs/Spec.lean), grouped by requirement, with a
plain-English doc comment, and with no proofs in that file. A reviewer can
read that one file and ignore the proofs: `npm run proofs` fails unless

- every proposition `Spec.x` has a theorem `Porter.Proofs.x` whose type is
  exactly `Spec.x` (so a proof cannot quietly prove something weaker);
- every theorem uses only Lean's three standard axioms (`propext`,
  `Classical.choice`, `Quot.sound`): a `sorry` anywhere would show up as the
  axiom `sorryAx`, and CI also rejects `sorry` and `native_decide` in the sources;
- no definition the request handlers reach is `partial`, `unsafe` or opaque,
  and none is a panic (the totality check, below);
- the tables below match the doc comments in `Proofs/Spec.lean`, every
  `Spec.x` that SPEC.md names exists and is proved, and every proposition is
  named in SPEC.md (each one answers a requirement);
- the theorem count stated in the README is the one just checked.

The propositions quantify over `e : Env`, which holds the configuration and
*any* functions for SHA-256 (`e.H`), the password check (`e.check`) and the
signature (`e.S`). So "the hash of the `code_verifier` is the challenge" is
proved for every hash function, not for SHA-256 in particular, and the
claims of an ID token are proved whatever the signature is. The cryptography
itself comes from the platform (Web Crypto) and is trusted, not proved.

<!-- BEGIN PROPOSITIONS -->
<!-- Generated from Proofs/Spec.lean by `npm run proofs -- --write`; do not edit by hand. -->

**26 propositions**, each proved by the theorem of the same name in `Proofs/` (175 theorems in all: the 26 below and the lemmas their proofs are built from). Every one uses only Lean's standard axioms.

Totality (checked by test/Axioms.lean, not a theorem): the request handlers reach 1182 definitions (355 of them Porter's); none is `partial`, `unsafe` or opaque, and none is a panic.

### A. An authorization code is redeemed at most once

| Proposition | In plain English |
| --- | --- |
| [`code_redeemed_at_most_once`](Proofs/Spec.lean#L53) | **At most once**: in any sequence of requests, from any database, at most one request redeems a given code (marks it used, which every token response for a code does, `Spec.code_bound`). |
| [`code_replay_revokes`](Proofs/Spec.lean#L59) | **A replayed code revokes its tokens** (RFC 6749 §4.1.2): presenting a used code, in an otherwise well-formed request from an authenticated client, is `invalid_grant` and revokes the token family issued from the code, and changes nothing else. |

### B. A code is bound to its client, its redirect URI and its PKCE verifier

| Proposition | In plain English |
| --- | --- |
| [`tokens_only_from_token_endpoint`](Proofs/Spec.lean#L73) | **Tokens only from the token endpoint**: a reply carrying tokens answers a `POST /token` whose client authenticated, for the authorization code or the refresh token grant. |
| [`code_bound`](Proofs/Spec.lean#L81) | **The code is bound**: tokens for an authorization code are issued only if the code is stored, unused and unexpired, was issued to the client that authenticated, for exactly this `redirect_uri`, and the hash of this `code_verifier` is its PKCE challenge (S256, for any hash function); the reply marks the code used, and its access token carries the code's grant. |
| [`code_records_request`](Proofs/Spec.lean#L95) | **A code records its request**: every code issued records the client, the exact redirect URI, the PKCE challenge, the nonce and the scopes of an authorization request that this request validated (`checkAuth`) or that an interaction in the database holds; its client is configured, the redirect URI is registered for it, the scopes are those requested that the client may have; it is unused and expires `codeTtl` seconds from now. |
| [`granted_scopes_allowed`](Proofs/Spec.lean#L109) | **Granted scopes are requested and allowed**: a code's scopes are among those requested and those the client may have. |

### C. The redirect target is always a registered URI, exactly

| Proposition | In plain English |
| --- | --- |
| [`redirect_registered`](Proofs/Spec.lean#L116) | **Authorization redirects go to registered URIs**: whenever Porter redirects to a client outside logout, the target is, exactly, one of the redirect URIs registered for a configured client. |
| [`logout_redirect_registered`](Proofs/Spec.lean#L123) | **Logout redirects go to registered URIs**: logout redirects only to a post-logout redirect URI registered, exactly, for the client the request names. |
| [`untrusted_redirect_uri_not_followed`](Proofs/Spec.lean#L131) | **No open redirector** (RFC 6749 §4.1.2.1): an authorization request whose `client_id` is not a configured client, or whose `redirect_uri` is not exactly registered for it, gets an error page (400) and no redirect. |
| [`redirect_params`](Proofs/Spec.lean#L140) | **What a redirect to a client carries**: only `code`, `state`, `iss` and `error`; `iss` is the issuer (RFC 9207, against mix-up), and an error is one of the fixed error codes. |
| [`redirect_location_exact`](Proofs/Spec.lean#L148) | **The Location header starts with the URI exactly**: a redirect to a client is the URI as registered, then `?` or `&`, then the parameters. |

### D. A reused refresh token revokes its family

| Proposition | In plain English |
| --- | --- |
| [`refresh_bound`](Proofs/Spec.lean#L155) | **Refresh tokens are bound**: tokens for a refresh token are issued only if it is stored, not yet rotated, unexpired, its family not revoked, and it was issued to the client that authenticated; the reply rotates it; the new refresh token keeps the family and its grant, and the access token's scope is within the grant's (a refresh never widens the scope). |
| [`refresh_reuse_revokes`](Proofs/Spec.lean#L170) | **Reuse revokes the family** (RFC 9700 §4.14.2): presenting a refresh token that was already rotated, from an authenticated client that may use refresh tokens, is `invalid_grant` and revokes the token's whole family, and changes nothing else. |
| [`refresh_rotated_at_most_once`](Proofs/Spec.lean#L181) | **At most one rotation**: in any sequence of requests, at most one request rotates a given refresh token. |
| [`revocation_permanent`](Proofs/Spec.lean#L186) | **Revocation is permanent**: a revoked family stays revoked after any request. |

### E. Every issued token's claims match the session and the client

| Proposition | In plain English |
| --- | --- |
| [`id_token_for_code`](Proofs/Spec.lean#L192) | **ID tokens for a code**: the ID token issued for an authorization code is signed with the client's algorithm and key, and its claims are exactly the issuer, the client (`aud`), and the code's user, sign-in time, session id and nonce, issued now and expiring `idTokenTtl` seconds later. |
| [`id_token_for_refresh`](Proofs/Spec.lean#L204) | **ID tokens for a refresh**: likewise from the refresh token's grant, without a nonce (OpenID Connect Core §12.2). |
| [`code_requires_signin`](Proofs/Spec.lean#L214) | **A code needs a sign-in**: a code is issued only for the user, session id and sign-in time of either a live session whose id is the request's session cookie, or a sign-in in this very request (a password the check accepts for that user, now). |
| [`code_requires_consent`](Proofs/Spec.lean#L226) | **A code needs consent**: every scope of an issued code has been consented to, by its user for its client, in the database after the request. |
| [`userinfo_claims`](Proofs/Spec.lean#L232) | **Userinfo answers for a live token**: the claims `/userinfo` returns are those of the user of a stored, unexpired, unrevoked access token sent as `Authorization: Bearer`, for that token's scopes. |

### F. No endpoint reveals secrets in errors

| Proposition | In plain English |
| --- | --- |
| [`errors_reveal_nothing`](Proofs/Spec.lean#L243) | **Errors are fixed replies**: every reply with an error status (400 and up) is `Reply.err x` for an error code `x`, so its status, headers and body are determined by `x` alone: no input, secret, token or password reaches an error. |
| [`error_wire_fixed`](Proofs/Spec.lean#L250) | **An error's bytes depend on the error alone**: not even on the configuration (issuer, keys, clients). |
| [`failed_signin_uniform`](Proofs/Spec.lean#L255) | **A failed sign-in tells nothing**: two sign-in attempts in the same interaction that differ only in their forms (username, password) and both fail get the same reply, and change nothing; so the reply does not tell whether the username exists. |

### G. Request handlers are total

| Proposition | In plain English |
| --- | --- |
| [`replies_well_formed`](Proofs/Spec.lean#L266) | **Every request gets an answer**: whatever the request (any method, path, headers and body, however malformed) and whatever the database, the reply's status is one of 200, 204, 303, 400, 401, 404 and 405. (That the handlers are total, with no `partial` definition and no panic on their path, is checked separately by test/Axioms.lean.) |

### H. Expiry, for every clock

| Proposition | In plain English |
| --- | --- |
| [`expired_code_refused`](Proofs/Spec.lean#L276) | **Expired codes are refused** *(consequence)*: at any time at or after a code's expiry, it gets no tokens. |
| [`dead_refresh_refused`](Proofs/Spec.lean#L283) | **Expired or revoked refresh tokens are refused** *(consequence)*. |
<!-- END PROPOSITIONS -->

## What is trusted, not proved

- **The SQL.** Each query in [`Server/Sql.lean`](Server/Sql.lean) is assumed
  to return what its model in [`Proofs/Model.lean`](Proofs/Model.lean)
  returns, and each write's statement to do what `DB.write` does. The schema
  backs the important ones up: every table is keyed by the hash it is looked
  up by, inserts are `INSERT OR IGNORE`, and no statement ever sets a code
  back to unused or a refresh token back to unrotated.
- **Isolation.** The propositions are about one request at a time: between a
  request's reads and its commit, no other write happens. The server makes
  that true with a version check on every commit (a request that finds the
  database changed is run again) and, within a process, one writer at a
  time. The adversarial suite's concurrent redemptions of one code and
  concurrent refreshes of one token are the evidence.
- **The cryptography.** SHA-256, PBKDF2, ECDSA P-256 and Ed25519 come from
  the platform's Web Crypto ([`Server/Crypto.lean`](Server/Crypto.lean)), and
  random values from `crypto.getRandomValues`. The proofs hold for any hash
  and any signature; that Web Crypto computes the real ones, and that random
  values do not repeat, is trusted. The client libraries used as oracles
  verify every signature against the published keys.
- **The wire format.** The propositions are about Porter's replies as data
  (`Reply`, `Body`, `Location`). `Reply.render` turns them into headers and
  bytes; that rendering is total (the totality check covers it) and that it
  is what clients expect is tested by the oracles (openid-client,
  oauth4webapi and jose parse every response), not proved.
- **The HTTP layer.** That `Lasm.Fetch` and the platform give Porter the
  request's method, path segments, query, headers and body as sent.
- **Lean, Lasm and the JavaScript runtime**: that Lean's kernel is sound, that
  Lasm compiles the Lean faithfully to WebAssembly, and that SQLite, D1 and
  the HTTP layer behave as documented. The externally implemented primitives
  the handlers use (string and array operations of Lean's runtime) are
  trusted to match their Lean definitions.
