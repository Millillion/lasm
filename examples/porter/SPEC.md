# Porter's requirements, one by one

Each requirement of an OpenID Connect provider with the authorization code
flow and PKCE, and what covers it: a proposition of
[`Proofs/Spec.lean`](Proofs/Spec.lean) (proved; [PROOFS.md](PROOFS.md)
explains each one), a test, or a reason it is out of scope. `npm run proofs`
checks that every proposition named here is proved and that every proved
proposition is named here.

The sources of the requirements are
[RFC 6749](https://www.rfc-editor.org/rfc/rfc6749) (OAuth 2.0),
[RFC 6819](https://www.rfc-editor.org/rfc/rfc6819) (its threat model),
[RFC 7636](https://www.rfc-editor.org/rfc/rfc7636) (PKCE),
[RFC 9207](https://www.rfc-editor.org/rfc/rfc9207) (the `iss` parameter),
[RFC 9700](https://www.rfc-editor.org/rfc/rfc9700) (the OAuth 2.0 Security Best Current Practice),
[OpenID Connect Core 1.0](https://openid.net/specs/openid-connect-core-1_0.html),
[Discovery 1.0](https://openid.net/specs/openid-connect-discovery-1_0.html) and
[RP-Initiated Logout 1.0](https://openid.net/specs/openid-connect-rpinitiated-1_0.html),
and the proposal in [NEXT_EXAMPLE_APPS.md](../../docs/proposals/NEXT_EXAMPLE_APPS.md).

The tests are [`test/oracles.mjs`](test/oracles.mjs) (two client libraries
as oracles), [`test/attacks.mjs`](test/attacks.mjs) (the adversarial suite)
and [`test/fuzz.mjs`](test/fuzz.mjs) (the endpoint fuzzer).

## 1. Authorization codes

| Requirement | Covered by |
| --- | --- |
| A code is redeemed at most once (RFC 6749 §4.1.2, §10.5) | `Spec.code_redeemed_at_most_once`; concurrently, the adversarial suite (twelve parallel redemptions, exactly one succeeds) |
| A code presented again is refused and the tokens issued from it are revoked (RFC 6749 §4.1.2) | `Spec.code_replay_revokes`; the adversarial suite checks the access and refresh tokens stop working |
| Codes are short-lived (RFC 6749 §4.1.2: at most ten minutes; Porter: 60 seconds) and expired ones are refused, for every clock | `Spec.code_records_request` (expiry), `Spec.expired_code_refused` |
| Tokens are issued only by the token endpoint, to an authenticated client | `Spec.tokens_only_from_token_endpoint` |
| Codes are only for confidential clients that authenticate, or public clients with PKCE (RFC 6749 §4.1.3, RFC 9700 §2.1.1) | `Spec.code_bound` (`Authenticates`); the oracles, for `client_secret_basic`, `client_secret_post` and `none` |

## 2. A code is bound to its client, its redirect URI and its PKCE verifier

| Requirement | Covered by |
| --- | --- |
| The code was issued to the client that redeems it (RFC 6749 §4.1.3; code injection, RFC 9700 §4.5) | `Spec.code_bound` |
| The `redirect_uri` of the token request is the authorization request's, exactly (RFC 6749 §4.1.3) | `Spec.code_bound`, `Spec.code_records_request` |
| PKCE with S256 only: the hash of the `code_verifier` is the `code_challenge` (RFC 7636 §4.6); `plain` and missing challenges are refused (PKCE downgrade, RFC 9700 §4.8) | `Spec.code_bound` (for any hash), `Spec.code_records_request`; the adversarial suite (`plain`, no method, no challenge, the challenge as verifier) |
| The code records the request's nonce and the scopes granted | `Spec.code_records_request` |
| Granted scopes are among those requested and those the client may have | `Spec.granted_scopes_allowed`, `Spec.code_records_request` |

## 3. Redirects

| Requirement | Covered by |
| --- | --- |
| Redirects go only to a redirect URI registered for the client, compared exactly (RFC 6749 §3.1.2, RFC 9700 §4.1) | `Spec.redirect_registered`, `Spec.redirect_location_exact`; the adversarial suite (seventeen look-alike URIs) |
| An unknown client or an unregistered `redirect_uri` gets an error page, never a redirect (RFC 6749 §4.1.2.1: no open redirector) | `Spec.untrusted_redirect_uri_not_followed` |
| After logout, redirects go only to a post-logout URI registered for the named client (RP-Initiated Logout §3) | `Spec.logout_redirect_registered`; the adversarial suite |
| The authorization response names the issuer (`iss`, RFC 9207; mix-up, RFC 9700 §4.4) and carries only `code`, `state`, `iss` or `error` | `Spec.redirect_params`; oauth4webapi validates `iss` |
| A redirect carries `state` back unchanged (RFC 6749 §4.1.2), so `state` is bounded (2048 bytes; a longer one is an error page, never a redirect) and no request can make a `Location` header clients refuse | `Spec.redirect_state_bounded`; the adversarial suite; the fuzzer's regression corpus |
| A registered URI with a query keeps it (RFC 6749 §3.1.2) | `Spec.redirect_location_exact`; the adversarial suite |

## 4. Refresh tokens

| Requirement | Covered by |
| --- | --- |
| A refresh token is accepted only from its client, unrotated, unexpired and unrevoked (RFC 6749 §6) | `Spec.refresh_bound`, `Spec.dead_refresh_refused` |
| Refresh tokens rotate; a rotated token presented again revokes its whole family (RFC 9700 §4.14.2) | `Spec.refresh_bound`, `Spec.refresh_reuse_revokes`, `Spec.refresh_rotated_at_most_once`; the adversarial suite |
| A revoked family stays revoked | `Spec.revocation_permanent` |
| A refresh never widens the scope (RFC 6749 §6) | `Spec.refresh_bound`; the adversarial suite |
| Refresh tokens are issued only with `offline_access` (OpenID Connect Core §11) | The oracles (no `offline_access`, no refresh token) |

## 5. Tokens and claims

| Requirement | Covered by |
| --- | --- |
| The ID token names the issuer, the client as `aud`, the user as `sub`, echoes the `nonce`, and expires after it was issued (OpenID Connect Core §2, §3.1.3.6) | `Spec.id_token_for_code`; the oracles validate every ID token |
| On refresh, the same subject and `auth_time`, no nonce (OpenID Connect Core §12.2) | `Spec.id_token_for_refresh`; the oracles |
| The ID token is signed with the client's algorithm (ES256 or EdDSA) and a key in the JWK Set | `Spec.id_token_for_code` (the signing input and algorithm); the oracles verify the signatures with jose and oauth4webapi |
| No code without a sign-in: a live session or a password checked in the same request | `Spec.code_requires_signin` |
| No code without consent to every scope, by that user for that client | `Spec.code_requires_consent` |
| `/userinfo` answers only for a live access token, with that token's user and scopes (OpenID Connect Core §5.3) | `Spec.userinfo_claims`; the oracles |
| Access tokens only in the `Authorization` header (RFC 9700 §4.3.2) | The adversarial suite |

## 6. Errors reveal nothing

| Requirement | Covered by |
| --- | --- |
| No error reveals a secret, a token or its input | `Spec.errors_reveal_nothing`, `Spec.error_wire_fixed`; the adversarial suite (markup and secrets are not echoed) |
| A failed sign-in does not tell whether the username exists | `Spec.failed_signin_uniform`; the adversarial suite (identical pages) |
| Error codes and statuses of the token endpoint (RFC 6749 §5.2) | The adversarial suite (`invalid_client` with `WWW-Authenticate`, `invalid_grant`, `invalid_request`, `unsupported_grant_type`, `invalid_scope`) |

## 7. Every request gets an answer

| Requirement | Covered by |
| --- | --- |
| Every request, however malformed, gets one of Porter's statuses | `Spec.replies_well_formed`; the fuzzer, against the compiled server |
| The handlers are total: no `partial`, `unsafe` or opaque definition, no panic | test/Axioms.lean (part of `npm run proofs`) |
| Untrusted input cannot crash the program or make it hang (claim 5 of TESTING_STRATEGY.md) | The fuzzer: every endpoint's parsers, random and mutated requests, a time budget, the server still correct afterwards |

## 8. Sessions, consent and CSRF (tested)

| Requirement | Covered by |
| --- | --- |
| Login and consent forms are bound to the browser that started the interaction (CSRF, RFC 6749 §10.12) | The interaction cookie (`interactionOf`); the adversarial suite (login CSRF, consent CSRF) |
| Consent is given by the user who signed in during the interaction | `consent` checks the session (and `Spec.code_requires_signin`); the adversarial suite |
| Signing in makes a new session id (session fixation, RFC 6819 §4.4.1.13) | The adversarial suite |
| Pages cannot be framed (clickjacking, RFC 6749 §10.13); cookies are `HttpOnly` and `SameSite=Lax` | The adversarial suite |
| Token responses are not cached (RFC 6749 §5.1) | The adversarial suite |
| The sign-in and consent pages work in Chromium, Firefox and WebKit, with and without JavaScript, with no script error or CSP violation | The end-to-end tests ([`test/e2e`](test/e2e)) |

## Out of scope

- Dynamic client registration, the implicit and hybrid flows, the
  `client_credentials` and `password` grants, request objects (`request`,
  `request_uri`, which are refused with the standard errors), pushed
  authorization requests, DPoP, mTLS, `private_key_jwt`, token introspection
  and revocation endpoints, front- and back-channel logout, and pairwise
  subjects.
- Rate limiting of sign-in attempts (a deployment's reverse proxy can do it).
- The OpenID Foundation's conformance suite: running it needs an account or
  a hosted service. The two client libraries are the oracles instead.
