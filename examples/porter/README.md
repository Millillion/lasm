# Porter in Lean

**An OpenID Connect provider written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm), with proofs.**
Users sign in with a password and approve an application; the application gets an authorization code, then ID, access and refresh tokens: the authorization code flow with PKCE (S256 only), ID tokens signed with ES256 or EdDSA by the platform's Web Crypto, refresh-token rotation with reuse detection, sessions, consent and RP-initiated logout.
196 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: a code is redeemed at most once and only by its client, for its exact redirect URI and with its PKCE verifier; Porter redirects only to registered URIs, compared exactly; a reused refresh token revokes its whole family; every ID token's claims are the session's and the client's; no error reveals a secret; and every request, however malformed, gets an answer ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps each requirement of OAuth 2.0, its security best current practice and OpenID Connect onto them).

Porter is an example of what Lasm can build, not a production identity
provider: it has no rate limiting, no account management, no key rotation,
and its users and clients are configured, not registered.

```sh
npm install          # Lasm (@lasm/cli) and the client libraries the tests use
npm run build        # the Node server (dist/server)
npm start            # http://localhost:3000 (PORT, HOST, ISSUER, DATABASE_PATH, PORTER_CONFIG)
npm test             # openid-client and oauth4webapi sign in, refresh and log out against a fresh server
npm run test:attacks # the adversarial suite
npm run test:fuzz    # the endpoint fuzzer (--seconds N, --seed N)
npx playwright install chromium && npm run test:e2e   # the sign-in pages in a browser (BROWSERS=chromium,firefox,webkit)
npm run proofs       # check every theorem
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its
WebAssembly tools on the first build (cached); `node:sqlite` and Web Crypto
are part of Node.

Without `PORTER_CONFIG`, Porter starts with a demo: a confidential client
`demo-app` (secret `demo-secret`, redirect URI `http://localhost:8080/callback`),
a public client `demo-spa` (`http://localhost:8080/spa/callback`), and two users,
`alice` / `wonderland` and `bob` / `builder`. [`Server/Config.lean`](Server/Config.lean)
documents the JSON configuration; [`test/config.mjs`](test/config.mjs) is the one the tests use.

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
| Redirects go only to registered URIs, exactly; never an open redirector | `redirect_registered`, `logout_redirect_registered`, `untrusted_redirect_uri_not_followed`, `redirect_params`, `redirect_state_bounded` |
| A reused refresh token revokes its family | `refresh_bound`, `refresh_reuse_revokes`, `refresh_rotated_at_most_once` |
| Every token's claims match the session and the client | `id_token_for_code`, `id_token_for_refresh`, `code_requires_signin`, `code_requires_consent`, `userinfo_claims` |
| No endpoint reveals secrets in errors | `errors_reveal_nothing`, `error_wire_fixed`, `failed_signin_uniform` |
| Request handlers are total | `replies_well_formed`, and the totality check of [`test/Axioms.lean`](test/Axioms.lean) |

## Platforms

The same Lean runs on each platform below; only the SQLite binding module differs
([`Server/NodeSqlite.lean`](Server/NodeSqlite.lean), [`Server/BunSqlite.lean`](Server/BunSqlite.lean),
[`Server/D1.lean`](Server/D1.lean)), and every one signs with its own Web Crypto. Each row is a
CI job ([porter.yml](../../.github/workflows/porter.yml) for Node,
[porter-platforms.yml](../../.github/workflows/porter-platforms.yml) for the rest) that builds
Porter, serves it with the platform's own local tooling ([`test/platforms.mjs`](test/platforms.mjs))
and runs the oracle tests and the adversarial suite against it (and a minute of fuzzing where
Porter's own server takes the HTTP requests). No account, nothing deployed.

| Platform | Build | Served in CI by | Store |
| --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/server/main.mjs` | `node:sqlite`, a file |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | `bun:sqlite`, a file |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | `node:sqlite` in Deno, a file |
| Cloudflare Workers | `npm run build:workers` | `wrangler dev` | D1 (local), whose `batch` is one transaction |
| Docker | `npm run build:docker` | `docker run --read-only` | `node:sqlite` on the `/data` volume |
| AWS Lambda (.zip and container image) | `npm run build:lambda`, `build:lambda-image` | `sam local start-api` | `node:sqlite` in `/tmp`, per instance |
| Vercel Functions | `vercel build` | Vercel's Node launcher | `node:sqlite` in `/tmp`, per instance |
| Netlify Functions | `netlify build` | Netlify's bootstrap in the Lambda image | `node:sqlite` in `/tmp`, per instance |
| Azure Functions | `npm run build:azure` | `func start` | `node:sqlite` in the temporary directory, per instance |
| Google Cloud Functions | `npm run build:gcf` | Functions Framework | `node:sqlite` in the temporary directory, per instance |

Each platform takes `ISSUER` (the provider's origin) and `PORTER_CONFIG` (the clients and
users) its own way: the environment, `docker run -e`, the Lambda template's variables, or the
Worker's variables (`wrangler.toml` `[vars]`, `.dev.vars`). On the function platforms the
database, and the signing keys in it, live as long as the function's instance: enough to run
and test Porter there, but a real deployment needs a durable database (a container with a
volume, or Workers with D1), or every instance would sign with its own keys.

**Not offered: Fastly Compute and WASI.** Lasm's WASI targets have no Web Crypto, and Porter
does not implement ECDSA or Ed25519 in Lean (docs/DECISIONS.md).

## The sign-in and consent pages

The pages a person sees ([`Frontend/Ui.lean`](Frontend/Ui.lean), started by
[`Client.lean`](Client.lean)) are a `Lasm.UI` app: the server sends each page
as a plain HTML form inside `<noscript>`, with the page's data as the app's
flags, and the app mounts beside it and renders the same form, with a
show-password switch and a busy label once pressed. The form still submits
natively, so the server's answers, and every proposition about them, are the
same with or without JavaScript. The pages allow only Porter's own script and
WebAssembly (`script-src 'self' 'wasm-unsafe-eval'`) and cannot be framed.

The end-to-end tests ([`test/e2e`](test/e2e), Playwright 1.63.0) run in
Chromium, Firefox and WebKit in CI, with no retries: sign in and consent
through the app (oauth4webapi then redeems the code the browser brought back
and validates the ID token), a wrong password, denial (`access_denied`),
the same flow with JavaScript disabled, and no script error or Content
Security Policy violation on the way.

## The oracles

There is no way to run the OpenID Foundation's conformance suite without an
account or a hosted service, so two independent, widely used client
libraries, both by Filip Skokan, are the oracles, run locally in CI against a
fresh server ([`test/oracles.mjs`](test/oracles.mjs), [porter.yml](../../.github/workflows/porter.yml)):

- **openid-client 6.8.8**: discovery, the authorization URL, the code grant
  with PKCE, state and nonce checks, ID token validation including its
  signature against `/jwks` (`enableNonRepudiationChecks`), userinfo, refresh
  (rotation, a narrower scope), `prompt=none` and `prompt=consent`, denial, and
  RP-initiated logout;
- **oauth4webapi 3.8.8**: the same flow through its lower-level functions,
  with RFC 9207 `iss` validation and `validateApplicationLevelSignature`;
- **jose 6.2.12**: `jwtVerify` of every ID token against the JWK Set, and the
  RFC 7638 thumbprints of the keys.

Every client kind is exercised: `client_secret_basic` with ES256,
`client_secret_post` with EdDSA, a public client with EdDSA, and a client that
may not have refresh tokens.

## The adversarial suite

[`test/attacks.mjs`](test/attacks.mjs) sends 31 attacks over raw HTTP, each
named after its section of RFC 6749, RFC 6819, RFC 9700 or OpenID Connect
Core, and checks the answer a safe provider must give: code replay (and the
revocation of its tokens), twelve concurrent redemptions of one code (exactly
one succeeds), code injection by another client, redirect_uri mismatch at the
token endpoint, PKCE downgrade (`plain`, no method, no challenge, the challenge
as verifier) and malformed verifiers, seventeen redirect_uri look-alikes
(trailing slash, case, dot segments, fragments, userinfo, another client's
URI, …), open redirects through logout, mix-up (`iss`), token substitution,
tokens of one kind used as another, access tokens in the query, refresh token
reuse (the whole family revoked), concurrent refreshes, scope widening, every
kind of bad client authentication, login and consent CSRF, replayed
interactions, session fixation, user enumeration, clickjacking headers,
cookie flags, injected markup in errors, and caching of token responses.

## The fuzzer

[`test/fuzz.mjs`](test/fuzz.mjs) aims random and mutated requests at every
endpoint's parsers through the compiled server: query strings and forms
(broken escapes, invalid UTF-8, repeated and empty parameters, huge values),
cookies, `Authorization` (Basic with broken base64, Bearer), content types,
path segments and methods; half start from a valid authorization request or
token request and mutate it. Every request must get one of Porter's statuses
within a time budget, JSON errors must have only a known `error` and
`error_description`, no random marker may come back unescaped in HTML, and
every redirect must go to Porter itself or a registered URI; afterwards a full
sign-in must still work. On pull requests it runs for three minutes (about
150,000 requests), and nightly for forty ([porter-nightly.yml](../../.github/workflows/porter-nightly.yml),
when Porter changed that day); the seed is printed first and `--seed` replays a run.

## Concurrency

The proofs are about one request at a time; the server makes that true. A
request reads, then commits its writes in one transaction that first checks
the database's version (a `CHECK` constraint rolls the transaction back if
another commit came first, and the request runs again), so two requests can
never both redeem one code or rotate one refresh token. Within one process,
requests that may write also take turns. The adversarial suite's concurrent
redemptions and refreshes check it.

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
| [`Frontend/Ui.lean`](Frontend/Ui.lean), [`Client.lean`](Client.lean) | The sign-in and consent pages' browser app (Lasm.UI) |
| [`Server/`](Server), [`ServerNode.lean`](ServerNode.lean) | Web Crypto, the SQL, the configuration, the HTTP glue and one SQLite binding per target; the Node program |
| [`ServerBun.lean`](ServerBun.lean), [`ServerWorkers.lean`](ServerWorkers.lean), [`deploy/`](deploy), `Dockerfile`, `wrangler.toml`, `vercel.json`, `netlify.toml` | The other platforms |
| [`test/`](test) | The oracle tests, the adversarial suite, the fuzzer, the end-to-end tests, the proof checks |
