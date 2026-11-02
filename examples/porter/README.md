# Porter in Lean

**An OpenID Connect provider written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs.**
Users sign in with a password and approve an application; the application gets an authorization code, then ID, access and refresh tokens: the authorization code flow with PKCE (S256 only), ID tokens signed with ES256 or EdDSA by the platform's Web Crypto, refresh-token rotation with reuse detection, sessions, consent and RP-initiated logout.
175 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: a code is redeemed at most once and only by its client, for its exact redirect URI and with its PKCE verifier; Porter redirects only to registered URIs, compared exactly; a reused refresh token revokes its whole family; every ID token's claims are the session's and the client's; no error reveals a secret; and every request, however malformed, gets an answer ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement of OAuth 2.0, its security best current practice and OpenID Connect onto them).

Porter is an example of what Lasm can build, not a production identity
provider: it has no rate limiting, no account management, no key rotation,
and its users and clients are configured, not registered.

```sh
npm install          # Lasm (@lasm/cli)
npm run proofs       # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 on the
first run (cached).

## The proofs

The provider ([`Porter/`](Porter)) is pure Lean, written against two records
of functions: the database's queries (`Reads m`) and the platform's
cryptography (`Crypto m`: SHA-256, the password check, the signature). The
proofs run it on a model of the database ([`Proofs/Model.lean`](Proofs/Model.lean),
the tables as lists) with *any* hash, password check and signature, so every
theorem holds whatever those functions are: "the hash of the verifier is the
challenge" is proved for every hash function. A request never writes; it
returns its reply and its writes, and the theorems are about both.

Every proposition is a named `def … : Prop` with a plain-English comment in
[`Proofs/Spec.lean`](Proofs/Spec.lean), without proofs: that one file is what
to review. `npm run proofs` fails unless each has its theorem, no theorem
uses an axiom beyond Lean's three, and no definition the request handlers
reach is `partial`, `unsafe` or a panic. `npm run proofs:paranoid` (Linux)
replays the proofs through Lean's kernel and the external checkers Lean ships.

| Requirement | Propositions |
| --- | --- |
| A code is redeemed at most once; a replayed code revokes its tokens | `code_redeemed_at_most_once`, `code_replay_revokes` |
| A code is bound to its client, its redirect URI and its PKCE verifier | `code_bound`, `code_records_request` |
| Redirects go only to registered URIs, exactly; never an open redirector | `redirect_registered`, `logout_redirect_registered`, `untrusted_redirect_uri_not_followed`, `redirect_params` |
| A reused refresh token revokes its family | `refresh_bound`, `refresh_reuse_revokes`, `refresh_rotated_at_most_once` |
| Every token's claims match the session and the client | `id_token_for_code`, `id_token_for_refresh`, `code_requires_signin`, `code_requires_consent`, `userinfo_claims` |
| No endpoint reveals secrets in errors | `errors_reveal_nothing`, `error_wire_fixed`, `failed_signin_uniform` |
| Request handlers are total | `replies_well_formed`, and the totality check of [`test/Axioms.lean`](test/Axioms.lean) |

## The provider

| Endpoint | |
| --- | --- |
| `GET /.well-known/openid-configuration` | Discovery: the endpoints, `S256` only, `ES256` and `EdDSA`, `authorization_response_iss_parameter_supported` |
| `GET /jwks` | The public keys (one P-256 and one Ed25519), `kid` = RFC 7638 thumbprint |
| `GET` or `POST /authorize` | The authorization endpoint: `response_type=code`, PKCE S256 required, `prompt` (`none`, `login`, `consent`), `max_age`, `nonce`; the response carries `iss` (RFC 9207) |
| `GET /interaction/:id`, `POST /interaction/:id/login`, `POST /interaction/:id/consent` | The sign-in and consent pages of a pending request, bound to the browser that started it |
| `POST /token` | `authorization_code` and `refresh_token`; `client_secret_basic`, `client_secret_post`, or `none` for public clients |
| `GET` or `POST /userinfo` | The user's claims for an access token sent as `Authorization: Bearer` |
| `GET` or `POST /logout` | RP-initiated logout, with confirmation; returns only to a registered post-logout URI |

Codes, tokens, sessions and interactions are 32 random bytes from the
platform; Porter stores only their SHA-256. Codes last 60 seconds, access and
ID tokens 10 minutes, refresh tokens 30 days (rotated on every use), sessions
8 hours.

## Layout

| Path | What it is |
| --- | --- |
| [`Porter/Types.lean`](Porter/Types.lean) | Clients, users, the configuration, codes, tokens, sessions, interactions |
| [`Porter/Store.lean`](Porter/Store.lean) | `Reads m` (the queries), `Write` (the changes), `Crypto m`, `Ctx` (clock and random values) |
| [`Porter/Text.lean`](Porter/Text.lean) | Forms, percent-encoding, cookies, base64, HTML and JSON escaping: total parsers |
| [`Porter/Request.lean`](Porter/Request.lean) | Requests, authorization-request validation, client credentials |
| [`Porter/Api.lean`](Porter/Api.lean) | Every endpoint, and `handle` |
| [`Porter/Reply.lean`](Porter/Reply.lean), [`Porter/Render.lean`](Porter/Render.lean) | Replies as data, and on the wire (headers, pages, JSON) |
| [`Proofs/Spec.lean`](Proofs/Spec.lean) | Every proposition, in plain English, without proofs |
| [`Proofs/`](Proofs) | The model of the database and the proofs |
| [`test/`](test) | The proof checks |
