# Server-side package catalog for Lean (Millillion candidates)

**Measured:** 2026-10-22. This is read-only research; I built nothing.

**Sources:**
- **npm:** `api.npmjs.org/downloads/point/last-week/…` for the week 2026-10-12 to 2026-10-18.
- **crates.io:** `/api/v1/crates/<name>`. Cited numbers are `recent_downloads`, a 90-day window.
- **Go:** the "Imported by" counts on pkg.go.dev.
- **GitHub:** `gh api` and `gh search repos --language=Lean`.
- **Core Lean:** grep over the Lean 4.35 sources in the Lasm cache (`src/lean/{Init,Std,Lean/Data,lake}`).
- **Cloudflare docs:** pages for `node:crypto` and TCP sockets.
- **Prior research:** `lean-package-adoption-2026-10-21.md`, `lean-http-clients-2026-10-21.md` and `COMPATIBILITY.md`.

**Caveat on npm numbers.** npm counts include transitive installs. Packages such as `debug`, `ms`, `cookie`, `ws`, `js-yaml`, `lru-cache`, `mime-types` and `semver` are inflated because frameworks and tooling pull them in. The top-level indicators carry more weight: `express`, `hono`, `pg`, `zod`, `jose`, `dotenv`, `pino` and `nodemailer`.

## 0. Key findings

1. **Core Lean 4.35 already covers more than people assume.** It has the HTTP/1.1 server, TCP, UDP, DNS, timers and processes, sync primitives, time with time zones and ISO 8601/RFC 822 formats, JSON with deriving, collections, `IO.getRandomBytes`, `IO.getEnv`, and URI percent-encoding (`Std.Http.Data.URI.Encoding`).
2. **Core has no base64, hex codec, SHA or other cryptographic hash, HMAC, UUID, logging, TOML (outside Lake), YAML, CSV, XML or regex.** Each was verified by grep, with zero hits in `Init/`, `Std/` and `Lean/Data/`.
   - Lake's TOML parser imports `Lean.Parser`, so it is not a usable runtime library.
   - The only hex helpers are internal to `Std.Http` (`hexDigit` in URI/Encoding).
3. **The single most vital missing piece is a web framework layer above `Std.Http`.** That means routing, middleware, body parsing, cookies, CORS and errors.
   - It is the top-level package in every ecosystem: express 87.4M/wk, hono 45.2M/wk plus @hono/node-server 42.6M/wk, axum 137.9M per 90 days, gin with 191k Go importers.
   - Lean's candidates have 5–11★ each (leanio, lean-routing, leanapi).
   - Hono's growth shows that **runtime-portable request→response handlers** are what serverless needs. That matches the Lasm roadmap (Node, then Netlify, then Workers).
4. **Crypto plus encoding are the root dependency of most other gaps.** JWT, Postgres SCRAM auth, signed cookies and sessions, S3 SigV4, webhook verification, UUID, password hashing and TLS all need them.
   - Rust shows how vital these are. In the 90-day window, base64 had 420M downloads, sha2 318M, hmac 190M, ring 190M and rustls 243M, which is more than any web framework.
5. **Postgres is the vital database, and it needs TLS.**
   - Usage: pg 40.1M/wk plus postgres 14.3M plus pg-pool 37.7M; lib/pq has 57.7k Go importers and sqlx 48.6M per 90 days.
   - Every Lean Postgres driver binds libpq, except pg-lean (1★, Bazel-built, TLS through HACL* C).
   - A pure-Lean wire-protocol driver over `Std.Async.TCP` runs anywhere Lasm maps TCP, including Workers `connect()`, which supports `secureTransport: "starttls"`. It needs crypto (SCRAM) and a TLS socket.
6. **Several gaps already have adequate pure-Lean packages that pass under Lasm today:** Redis (lean-redis), SQLite (leansqlite), CLI (Cli), testing (LSpec, Plausible), Markdown (MD4Lean) and compression (lean-zip).
   - Several more have credible but zero-adoption pure-Lean packages from 2026: paulbutcher/leancrypto, lean-jose and lean-html, plus theoriclabs/leanws.
   - **Adopt-or-build is an explicit decision for each of these (see Open questions).**

## 1. Adoption data (raw)

### npm, weekly downloads (2026-10-12 to 2026-10-18), grouped

| Category | Packages (weekly downloads) |
|---|---|
| Web framework | express 87.4M · hono 45.2M (+@hono/node-server 42.6M) · fastify 9.3M · koa 4.2M |
| Framework pieces | cookie 139.3M* · qs 112.6M* · http-errors 104.9M* · mime-types 171.1M* · cors 52.5M · express-rate-limit 42.6M · compression 26.7M · busboy 18.7M · multer 12.9M · helmet 9.6M · cookie-parser 6.7M · express-session 2.5M · rate-limiter-flexible 1.8M |
| Validation | ajv 233.1M* · zod 207.0M · joi 14.6M · valibot 13.1M · yup 6.8M · validator 14.3M |
| Crypto / auth | jose 93.4M · @noble/hashes 59.8M · jsonwebtoken 34.8M · node-forge 23.1M · tweetnacl 21.5M · @noble/curves 21.0M · crypto-js 10.9M · bcryptjs 9.1M · passport 4.6M · bcrypt 3.6M · argon2 1.5M · @node-rs/argon2 1.2M |
| IDs | uuid 173.7M* · nanoid 166.7M* · ulid 6.8M |
| Config | dotenv 112.1M · ini 96.0M* |
| Logging / observability | debug 431.2M* · @opentelemetry/api 55.6M · pino 32.7M · @sentry/node 23.6M · winston 15.1M · prom-client 5.7M |
| HTTP client | undici 133.5M* · node-fetch 121.2M* · axios 66.6M · got 23.9M · ky 4.0M |
| Realtime | ws 173.4M* · socket.io 11.0M |
| Postgres | pg 40.1M · pg-pool 37.7M · postgres 14.3M · @neondatabase/serverless 3.0M |
| Other DBs | ioredis 17.7M · redis 8.6M · @upstash/redis 3.2M · mysql2 9.6M · mongodb 8.8M · mongoose 3.8M · better-sqlite3 7.2M · @libsql/client 2.3M · sqlite3 1.4M |
| ORM / query builder | drizzle-orm 18.3M · kysely 12.8M · prisma 11.7M (@prisma/client 11.1M) · knex 3.0M |
| Cloud / APIs | @grpc/grpc-js 34.8M · @aws-sdk/client-s3 29.3M · @anthropic-ai/sdk 28.3M · openai 25.3M · stripe 14.5M · nodemailer 15.6M |
| Formats | js-yaml 176.2M* · yaml 133.3M* · fast-xml-parser 47.0M · xml2js 26.6M · smol-toml 26.2M · toml 18.5M · csv-parse 11.6M · papaparse 9.9M · protobufjs 54.2M |
| Dates | date-fns 56.0M · dayjs 44.3M · luxon 24.2M · moment 22.6M |
| Templates / HTML | html-escaper 50.7M* · ejs 25.0M · handlebars 24.6M · mustache 10.3M · sanitize-html 7.1M · nunjucks 2.1M · pug 2.0M |
| Markdown | marked 51.2M · markdown-it 16.6M |
| Compression | pako 75.8M · fflate 60.6M · jszip 29.0M · archiver 27.6M |
| Misc | lru-cache 349.2M* · p-limit 201.7M* · sharp 71.4M · graphql 28.1M · bullmq 5.8M · cron 3.9M · node-cron 3.0M · kafkajs 2.0M · amqplib 1.6M |
| CLI / test | commander 313.6M* · yargs 159.7M* · vitest 77.5M · jest 25.8M · msw 12.9M · nock 3.2M |

\* Heavily transitive.

### crates.io, `recent_downloads` (90 days to 2026-10-22)

| Category | Crates (recent downloads) |
|---|---|
| Serialization | serde 374.8M · serde_json 374.6M · toml 269.8M · serde_yaml 96.5M · csv 58.2M · prost 151.0M |
| Async / HTTP | tokio 267.7M · hyper 243.9M · reqwest 225.7M · tower-http 184.1M · axum 137.9M · tonic 99.2M · tokio-tungstenite 94.6M · actix-web 12.1M |
| Crypto / TLS | base64 420.5M · sha2 318.7M · rustls 243.3M · hmac 190.5M · ring 190.4M · hex 176.3M · jsonwebtoken 61.5M · argon2 25.4M · bcrypt 7.0M |
| Basics | rand 537.6M · thiserror 446.7M · log 337.1M · regex 289.3M · clap 261.4M · anyhow 252.0M · percent-encoding 236.9M · tracing 231.3M · url 222.6M · uuid 221.7M · time 211.3M · chrono 208.2M · flate2 192.7M · mime 164.1M · env_logger 88.9M · dotenvy 57.3M · chrono-tz 44.9M |
| DB | sqlx 48.6M · rusqlite 47.2M · redis 31.1M · tokio-postgres 21.9M · diesel 9.9M · deadpool-postgres 7.1M |
| Other | aws-sdk-s3 26.1M · governor 19.7M · handlebars 15.7M · askama 15.0M · validator 14.6M · cron 9.3M · lettre 7.9M · tera 6.9M |

### Go, pkg.go.dev "Imported by" (2026-10-22)

| Kind | Packages (importers) |
|---|---|
| Standard library | net/http 1,776,917 · regexp 575,445 · encoding/base64 244,270 · database/sql 201,876 · crypto/sha256 143,338 · html/template 118,327 · log/slog 77,158 · encoding/csv 45,249 |
| Modules | google.golang.org/grpc 270,134 · sirupsen/logrus 239,958 · spf13/cobra 195,884 · gin-gonic/gin 191,418 · go.uber.org/zap 119,696 · google/uuid 113,457 · spf13/viper 103,320 · gorm 86,926 · prometheus client 71,745 · lib/pq 57,719 · go-sql-driver/mysql 55,215 · joho/godotenv 54,481 · gorilla/websocket 48,574 · x/crypto/bcrypt 46,492 · yaml.v3 44,731 · BurntSushi/toml 38,240 · zerolog 30,545 · mattn/go-sqlite3 25,646 · validator/v10 25,452 · golang-jwt/jwt/v5 18,004 · go-redis/v9 17,374 · chi/v5 17,309 · pgx/v5 12,050 · aws s3 v2 6,724 · robfig/cron/v3 5,585 · x/crypto/argon2 3,127 |

**What Go's standard library implies.** In Go, the things a server developer treats as standard are: HTTP server and client, TLS, crypto (hashes, HMAC, AES, ECDSA, Ed25519, RSA), base64, hex, JSON, CSV, templates, SQL interface, slog and regexp. Third-party modules fill in routers, Postgres and MySQL drivers, Redis, JWT, UUID, config, logging backends, validation and bcrypt. **That is roughly the gap list for Lean, minus JSON and time.**

## 2. Core Lean 4.35 coverage, verified against sources

| Capability | In core? | Where / note |
|---|---|---|
| HTTP/1.1 server | yes | `Std.Http.Server` (`serve`, `Handler` class, `Config`). It has **no routing, no TLS by design (per Zulip 2025-11), and no Upgrade/101 hijack**: grep finds no upgrade handling, and `upgrade` is a rejected trailer. So WebSocket on the same server port needs core support or a separate listener (UNVERIFIED beyond grep). |
| HTTP client | no | Use Millillion/fetch. The core client PRs #14546–8 are still open. |
| TCP / UDP / DNS / timers / processes / signals | yes | `Std.Async.*` |
| Sync primitives, semaphore | yes | `Std.Sync` (covers p-limit-style concurrency limits) |
| Dates, times, time zones, formats | yes | `Std.Time`: `iso8601`, `rfc822`, `rfc850`. It loads time zones from **zoneinfo files on disk** (`Std/Time/Zoned/Database/TZdb.lean`, `TZDIR` and fallback paths). This **will not work on Workers (no fs)**, and Windows has no zoneinfo directory (UNVERIFIED whether Std.Time ships a Windows path). Lasm reads zoneinfo for every `Date` header (SERVER_MVP.md item 4). |
| JSON + deriving | yes | `Lean.Data.Json`, which passes under Lasm (COMPATIBILITY: json, json-import-lean) |
| Random bytes | yes | `IO.getRandomBytes` (`Init/System/IO.lean:428`). Under Lasm it maps to Node `crypto.randomBytes` (`src/node-host.mjs:258`). |
| Environment variables | yes | `IO.getEnv` (`Init/System/IO.lean:951`). There is **no `.env` parsing.** |
| URL percent-encoding / query parsing | yes | `Std.Http.Data.URI.Encoding` (`EncodedString`, `EncodedQueryString`, `decode`) |
| Cookie / Set-Cookie | header names only | `Header.Name.setCookie`. There is no parser or serializer. |
| Base64 / base64url / hex codec | **no** | Grep for `base64` in Init, Std and Lean/Data returns 0 hits. |
| SHA-1/2, HMAC, any cryptographic hash | **no** | Only non-cryptographic `hash`/`mixHash` |
| UUID | **no** | |
| Regex | **no** | |
| TOML | Lake only | `lake/Lake/Toml/Grammar.lean` imports `Lean.Parser`, so it is unsuitable at run time. |
| YAML / CSV / XML | **no** | |
| Logging | **no** | `Lean.Log` is elaborator-only. |
| Compression (gzip/deflate) | **no** | Use lean-zip. |
| Parser combinators | yes | `Std.Internal.Parsec` (it is marked Internal) |

## 3. Design patterns used throughout the catalog

**(P) Pure Lean.**
- Works identically natively, under Lasm on Node, and on Workers and Netlify.
- Use it for parsers, encoders, protocols over `Std.Async.TCP`, and hashes.
- Caveat: performance and **constant-time behaviour of pure-Lean crypto are not guaranteed.** Lean boxes values and the compiler can short-circuit, so pure-Lean secret-key operations carry a side-channel risk. This matters most for AEAD and signing, less for hashing public data.

**(B) Backend, fetch-style.** One Lean API with `@[extern]` entry points behind a small function table:
- **Lasm/Node:** Node built-ins through Lasm's host-call interface (`crypto`, `tls`, `zlib`).
- **Native:** a system library loaded at run time with `dlopen`, as fetch does with libcurl. For crypto and TLS that means OpenSSL 3 (`libcrypto.so.3`/`libssl.so.3`).
- **Workers:** `node:crypto` under `nodejs_compat`. Cloudflare documents all of `node:crypto` as supported except argon2, DSA/DH keygen, ed448/x448 and randomUUIDv7. TLS uses `connect({secureTransport})` or `startTls()`.
- **Native caveat (UNVERIFIED):** macOS ships no public OpenSSL. Dlopen of unversioned `/usr/lib/libcrypto.dylib` is known to abort, so native macOS would need Homebrew OpenSSL or a pure fallback. Windows has no OpenSSL unless installed. CNG/SChannel is the native option there.

**(H) Hybrid.** Pure Lean as the always-available fallback, plus a backend for speed or constant-time behaviour where one exists. This is the recommended design for crypto.

**Serverless rule of thumb.**
- Netlify, Vercel and Lambda are Node, so anything that works under Lasm on Node works there, apart from filesystem writes and long-lived sockets across invocations.
- Workers:
  - No filesystem.
  - No inbound TCP.
  - Outbound TCP only via `connect()`. Not to port 25, private IPs or Cloudflare IPs. Not from global scope, so there are no cross-request connection pools.
  - Only `fetch()` for HTTP.
  - A 128 MB memory limit.
- **Designs that keep working everywhere:**
  - Handlers shaped as `Request → Async Response`.
  - HTTP-API clients over fetch.
  - Pure codecs.
  - Database drivers whose transport is an abstract socket, so Lasm can map it to `connect()`.
  - Pools that tolerate per-request connections.

## 4. Catalog

Sizes: **S** ≈ under 1 week, **M** ≈ 1–3 weeks, **L** ≈ 1–2 months, **XL** ≈ more than 2 months, for one experienced engineer working with AI assistance. These are rough estimates.

### Tier 1: absolutely vital (almost every server needs it)

| # | Category | Why vital (evidence) | Lean status today | Proposed Millillion package and scope | Approach | Depends on | Size | Serverless notes |
|---|---|---|---|---|---|---|---|---|
| 1.1 | **Web framework: router + middleware + context** | express 87.4M/wk; hono 45.2M plus @hono/node-server 42.6M; gin 191k Go importers; axum 137.9M and tower-http 184.1M per 90 days. Every server has one. | Core `Std.Http.Server` has no routing. Packages: ecyrbe/leanio 11★, paulbutcher/lean-routing 5★ plus lean-middleware 1★, theoriclabs/leanapi 5★. **No established choice.** | **`Millillion/web`** (Hono-like). Typed router with path params and wildcards; middleware chain; `Context` (params, query, headers, typed state); JSON, text and HTML responses; body parsers (JSON via `Lean.Json`, urlencoded, raw/stream); error-to-response mapping; built-in middleware for CORS (cors 52.5M), security headers (helmet 9.6M), request-id, body-size limit, static files with MIME table (mime-types 171M) and ETag; in-process test client (supertest/msw role). **Runtime adapters:** `Std.Http.serve` (native and Node), a Netlify/Lambda event adapter and a Workers `fetch` adapter. | P | Std.Http (core), Lean.Json (core). Optional: 1.5 log, 1.2 encoding (ETag), 2.6 compression via lean-zip | L | Built for portability. The handler type is `Std.Http.Request Body → Async (Response Body)`, and per-platform adapters live outside the core. Coordinate with Lasm's planned "Lasm-internal glue" for Netlify (PLAN.md step 2). |
| 1.2 | **Encoding: base64, base64url, hex, base32** | Rust base64 420.5M and hex 176.3M (90 days), the most downloaded crypto-adjacent crates; Go encoding/base64 244k importers. Needed by JWT, Basic auth, SCRAM, data URLs, ETags and S3. | **Gap in core** (verified). predictable-machines/lean4-base64 3★; base64/hex/base32 inside paulbutcher/leancrypto 0★ and theoriclabs/leancrypto 0★. | **`Millillion/encoding`**. RFC 4648 base64 and base64url (padded and unpadded, strict and lenient decoding), hex (lower and upper), base32 (RFC 4648 and Crockford). `ByteArray`↔`String` with no allocation blow-up. Proofs of round-tripping are optional. | P | none | S | Works everywhere. |
| 1.3 | **Crypto primitives** | jose 93.4M; @noble/hashes 59.8M; @noble/curves 21.0M; node-forge 23.1M; crypto-js 10.9M; Rust sha2 318.7M, hmac 190.5M, ring 190.4M; Go crypto/sha256 143k. | **Gap in core.** paulbutcher/leancrypto 0★ is pure (SHA-2, HMAC, RSA PKCS#1/PSS verify, DER). theoriclabs/leancrypto 0★ uses static OpenSSL. Blake3.lean 9★ uses C and Rust. | **`Millillion/crypto`**. **Hashes:** SHA-1 (legacy, needed for WebSocket and MySQL), SHA-256/384/512. **MACs and KDFs:** HMAC, HKDF, PBKDF2. **Utilities:** constant-time compare; CSPRNG helpers over `IO.getRandomBytes`. **Ciphers and signatures:** AES-256-GCM and ChaCha20-Poly1305; Ed25519 and ECDSA P-256 sign/verify; RSA verify plus sign; JWK/PEM/DER key import. | **H.** Pure Lean for hashes, HMAC, HKDF and PBKDF2 (deterministic and synchronous, so the same everywhere). **B** for AEAD and signing: Node `crypto`, native libcrypto via dlopen, Workers `node:crypto`. A pure fallback for verify-only paths. | 1.2 | L (hashes and HMAC: M) | Workers `node:crypto` covers it (nodejs_compat). Web Crypto is async-only; avoid depending on it. |
| 1.4 | **Environment and config** | dotenv 112.1M; godotenv 54.5k; viper 103.3k; dotenvy 57.3M. Every deploy reads config. | Core has `IO.getEnv` only. No package found (`gh search` "dotenv" in Lean returned 0). | **`Millillion/env`**. `.env` parser (dotenv syntax: quotes, escapes, `export`, comments); typed config decoding (`FromEnv` deriving or a combinator) with aggregated errors ("PORT must be Nat; DATABASE_URL missing"); secrets kept out of `Repr`. | P | none (1.3 optional for secret redaction) | S | **Workers has no `process.env`.** Bindings arrive as the handler's `env` argument, so the API must accept an injected map. Netlify uses ordinary env vars. |
| 1.5 | **Structured logging** | pino 32.7M; winston 15.1M; logrus 240k, zap 119.7k and slog 77k Go importers; Rust log 337.1M and tracing 231.3M. | **Gap in core** (no Logger). No package with adoption (lean-telemetry and zlogLean are tiny or C). | **`Millillion/log`**. Leveled, structured (JSON lines and pretty dev output) logging with fields, child loggers with bound context, a sink abstraction (stdout/stderr, custom), level filtering from env, and access-log plus request-id middleware for `web`. A cheap no-op when filtered out. | P | Lean.Json (core), Std.Time (core). Integrates with 1.1. | S | stdout to the platform log works on Netlify and Workers (console). Avoid async file sinks. |
| 1.6 | **Postgres driver** | pg 40.1M plus pg-pool 37.7M plus postgres 14.3M plus @neondatabase/serverless 3.0M; lib/pq 57.7k and pgx 12k Go importers; sqlx 48.6M, tokio-postgres 21.9M. **The default SQL database for new servers.** | All of these bind libpq (FWuermse/lean-postgres 15★, typednotes/lean-pq 11★, paulbutcher/leanpostgres 4★), so none works under Lasm. pb64-lean/pg-lean (1★) is a pure wire protocol, but it is Bazel-built and its TLS is HACL* C. **Gap.** | **`Millillion/postgres`**. Wire protocol v3 over `Std.Async.TCP`. Auth: SCRAM-SHA-256 (plus md5 and cleartext). Extended query protocol with typed parameters, prepared statements, text and binary decoding of common types (int, numeric, text, bool, bytea, uuid, timestamptz→`Std.Time`, json/jsonb→`Lean.Json`, arrays). Transactions, connection pool, cancellation, LISTEN/NOTIFY, `sslmode` handling via 1.7. Later: COPY and pipelining. Connection-string parsing. | P (protocol). TLS through 1.7. | 1.2, 1.3 (SHA-256, HMAC, PBKDF2 for SCRAM), 1.7, 2.2 uuid (optional), Lean.Json, Std.Time | L | Netlify/Lambda: works, but pools die with the instance (recommend an external pooler). Workers: needs Lasm to map `Std.Async.TCP` to `connect()`. Postgres's SSLRequest→TLS upgrade maps to `secureTransport:"starttls"` plus `startTls()`. Sockets are per request, so no global pool (Hyperdrive is the CF answer). The Neon HTTP/WebSocket driver is a later option. |
| 1.7 | **TLS client sockets** | rustls 243.3M (90 days). Go's `crypto/tls` is in the standard library. Hosted Postgres, Redis (Upstash) and SMTP submission require TLS. Core Std.Http has no TLS by design. | **Gap.** pb64-lean/tls13-lean 2★ (HACL* C). lean-grpc and hale use system OpenSSL. | **`Millillion/tls`**. A client `TlsSocket` with the same read/write interface as `Std.Async.TCP.Socket.Client` (and a `Std.Http.Transport` instance). Supports `connect` and `upgrade(tcpSocket)` (STARTTLS), SNI, system roots or a custom CA, ALPN, and an insecure mode for dev. No server-side TLS: deploy behind a proxy, matching core's stance. | **B.** Node `tls.connect`/`new TLSSocket(socket)`; native `libssl.so.3` via dlopen (Linux; macOS/Windows **open question**); Workers `connect({secureTransport})`/`startTls()`. A pure-Lean TLS 1.3 would be XL and is not recommended now. | none at the Lean level (backends supply crypto) | M (Node + Linux-native); L if macOS/Windows native are required | Works on Netlify (Node `tls`) and on Workers via `connect()`. **A Lasm runtime change** is required: Lasm must expose a TLS host primitive alongside TCP. |
| 1.8 | **JWT / JOSE** | jose 93.4M, jsonwebtoken 34.8M; jsonwebtoken (Rust) 61.5M; golang-jwt 18k. Auth for APIs, OAuth/OIDC, Supabase/Auth0/Clerk tokens. | paulbutcher/lean-jose 0★: pure, HS* sign and verify, RS/PS verify, **no ES/EdDSA**, uses `paulbutcher/lean-json` rather than `Lean.Json`. **Effectively a gap.** | **`Millillion/jwt`**. JWS compact; JWT claims (exp/nbf/iat/aud/iss with clock skew, from `Std.Time`); algorithms HS256/384/512, RS256, PS256, ES256 and EdDSA; algorithm allow-list policy (the token never chooses the algorithm); JWK and JWKS parsing; JWKS fetch-and-cache over fetch; `web` middleware (bearer auth). | P (over 1.3) | 1.2, 1.3, Lean.Json, Std.Time, Millillion/fetch (JWKS) | M | Works everywhere that 1.3 does. JWKS caching must be per instance on serverless. |

### Tier 2: most used (many servers need it)

| # | Category | Why vital (evidence) | Lean status today | Proposed package and scope | Approach | Depends on | Size | Serverless notes |
|---|---|---|---|---|---|---|---|---|
| 2.1 | **Password hashing** | bcryptjs 9.1M plus bcrypt 3.6M plus argon2 1.5M plus @node-rs/argon2 1.2M; x/crypto/bcrypt 46.5k; Rust argon2 25.4M. Every app with its own logins. | **Gap.** theoriclabs/leancrypto has scrypt (via OpenSSL), 0★. | **`Millillion/password`**. argon2id (default), scrypt and bcrypt (verify, for migrating users); PHC-string encode/parse; `needsRehash`; parameter presets. | **H.** Node `crypto.argon2` (Node ≥ 24.7; UNVERIFIED version) and `crypto.scrypt`; native libcrypto (OpenSSL 3.2+ has Argon2, 3.0 has scrypt); a pure-Lean fallback, which is slow but correct. | 1.2, 1.3 | M | **Workers `node:crypto` lacks argon2**, so use scrypt or a pure fallback there. Watch the 128 MB memory limit (argon2 m=64 MiB). |
| 2.2 | **UUID / IDs** | uuid 173.7M*, nanoid 166.7M*; Rust uuid 221.7M; google/uuid 113k. Primary keys, request IDs. | **Gap in core.** vsinha/uuid 0★. | **`Millillion/uuid`**. UUID v4 and v7 (time-ordered, for DB keys), parse/format, `ToJson`/`FromJson`; nanoid and ULID-style short IDs. | P over `IO.getRandomBytes` and the clock | 1.2 | S | Works everywhere. On Workers, `getRandomBytes` must map to `crypto.getRandomValues` (a Lasm concern). |
| 2.3 | **Validation and typed decoding** | zod 207.0M, ajv 233.1M*, joi 14.6M, valibot 13.1M; go-playground/validator 25.5k; Rust validator 14.6M. | Core `FromJson` deriving gives structure but **stops at the first error and has no refinements** (UNVERIFIED depth). predictable-machines/lean4-json-schema 30★ (proofs, Lean.Json). | **`Millillion/schema`**. A decoder combinator library on `Lean.Json` with path-tracked aggregated errors and refinements (ranges, regex/format, email/url/uuid), deriving support, an error→400 response for `web`, and **JSON Schema/OpenAPI export** (feeds docs and client generation). | P | Lean.Json, 1.1 (integration), 2.2 | M | Works everywhere. |
| 2.4 | **Cookies and sessions** | cookie 139.3M*, cookie-parser 6.7M, express-session 2.5M, @fastify/cookie 2.2M. | Core has header names only. | Part of **`web`**: cookie parse/serialize (RFC 6265bis attributes), signed and encrypted cookies; **`Millillion/web-session`**: session middleware with cookie, memory and Redis stores, plus CSRF tokens. | P | 1.1, 1.2, 1.3 (HMAC, AEAD), lean-redis (optional) | S (cookies) + M (sessions) | Use stateless cookie sessions for serverless and Workers. |
| 2.5 | **WebSocket** | ws 173.4M*, socket.io 11.0M; tokio-tungstenite 94.6M; gorilla/websocket 48.6k. | theoriclabs/leanws 0★ (pure RFC 6455 over `Std.Http.Transport`; server, `ws://` client, Autobahn harness); cleissonbarbosa/websocket.lean 1★. **Core `Std.Http.Server` has no Upgrade hijack** (grep). | **Adopt or fork leanws** as `Millillion/websocket`. Integrate with `web`, which **needs core Std.Http upgrade support or a server-side hook**. Add a `wss://` client via 1.7. | P (+1.7 for wss) | 1.2, 1.3 (SHA-1 for the handshake), 1.7, 1.1 | M (+ an upstream Std.Http change) | Netlify functions cannot hold WebSockets. Workers use `WebSocketPair` and Durable Objects, which need a separate adapter. Node full server only at first. |
| 2.6 | **Multipart / file uploads** | busboy 18.7M, multer 12.9M, form-data 101.1M* (client side). | **Gap** (no multipart in core; grep). | Part of **`web`**, or **`Millillion/multipart`**: a streaming `multipart/form-data` parser over `Std.Http` body streams with size limits, plus an encoder (for fetch uploads). | P | 1.1 | S–M | Platform body-size limits apply (Netlify about 6 MB sync; UNVERIFIED). |
| 2.7 | **Rate limiting** | express-rate-limit 42.6M, rate-limiter-flexible 1.8M; Rust governor 19.7M. | **Gap** (rafneves/provable-rate-limit 1★ is a proof, not a library). | Middleware in **`web`**: token-bucket and sliding-window algorithms; in-memory store (Std.Sync); Redis store via lean-redis. | P | 1.1, lean-redis (optional) | S | In-memory state is per instance on serverless, so recommend the Redis/Upstash store or the platform's native limiter. |
| 2.8 | **S3-compatible object storage** | @aws-sdk/client-s3 29.3M; Rust aws-sdk-s3 26.1M; Go aws s3 6.7k. Also covers R2, MinIO, GCS (interop) and Backblaze. | **Gap.** | **`Millillion/s3`**. AWS SigV4 signing (reusable for any AWS API); Get/Put/Delete/Head/List; multipart upload; presigned URLs. | P over fetch | 1.2, 1.3 (SHA-256, HMAC), Millillion/fetch, a **minimal XML reader** (3.6) | M | Fetch-based, so it works everywhere. Workers can also use the R2 binding. |
| 2.9 | **Email sending (SMTP + MIME)** | nodemailer 15.6M; lettre 7.9M; Go net/smtp (stdlib). | **Gap.** | **`Millillion/mail`**. A MIME message builder (text/html alternatives, attachments, RFC 2047 headers) and an SMTP client (EHLO, STARTTLS, AUTH PLAIN/LOGIN, port 465 implicit TLS). Provider HTTP APIs are left to fetch. | P (+1.7) | 1.2, 1.7, 2.2 (Message-ID), Std.Time | M | **Workers blocks port 25** (587 and 465 are allowed per the docs). Most serverless users call HTTP email APIs, which fetch already enables. |
| 2.10 | **SQL toolkit: migrations + query interface** | drizzle-orm 18.3M, kysely 12.8M, prisma 11.7M, knex 3.0M; gorm 86.9k; sqlx (compile-time-checked queries). | theoriclabs/LeanDB 32★ (typed SQL, SQLite only); palladin/lean-linq 27★ (libpq and other C). | **`Millillion/sql`**. A driver-agnostic `Connection`/`Row` interface implemented by `postgres` and leansqlite; a typed parameterized-query macro (`sql!"… {x}"` with no string injection); a row-decoding derive; a migrations runner (versioned files, lock table). An ORM is **out of scope** (Tier 3). | P | 1.6, leansqlite | M | Works wherever the driver works. Workers D1 needs an adapter (Tier 3). |
| 2.11 | **Server-Sent Events + streaming** | Used by every LLM API (openai 25.3M, @anthropic-ai/sdk 28.3M), plus live dashboards. | **Gap.** | **`Millillion/sse`**. An SSE parser (for fetch response streams) and an SSE writer (for `web` streaming responses), with keep-alive comments and reconnect IDs. Small, but it unlocks LLM clients. | P | Millillion/fetch, 1.1 | S | Works on Node and Workers (streaming responses). Netlify needs streaming functions (UNVERIFIED support details). |
| 2.12 | **In-memory cache (LRU/TTL)** | lru-cache 349.2M*. A building block for JWKS, sessions, rate limits and memoization. | Core has HashMap/TreeMap but **no LRU/TTL** (UNVERIFIED that Batteries lacks one; I saw none in Batteries' data list). | **`Millillion/cache`**. LRU with max entries or bytes, TTL, single-flight `getOrCompute` (Std.Sync). | P | Std.Sync, Std.Time | S | Per instance on serverless. |
| 2.13 | **HTML rendering** | ejs 25.0M, handlebars 24.6M, mustache 10.3M, html-escaper 50.7M*; Go html/template 118k; askama 15.0M. | paulbutcher/lean-html 1★ (typed HTML5); nathanial/stencil 0★ (Mustache-style). **No established choice.** | **`Millillion/html`**: a typed, auto-escaping HTML builder with a JSX-like `html!` macro (Lean syntax extensions are a real advantage here), checked at compile time, fragments, and an htmx-friendly design. The alternative is to adopt lean-html. | P (macro is compile-time only, so nothing extra is linked) | 1.1 | M | Works everywhere. |

### Tier 3: valuable later

| # | Category | Evidence | Lean status | Proposed scope | Approach | Depends on | Size | Serverless |
|---|---|---|---|---|---|---|---|---|
| 3.1 | MySQL / MariaDB driver | mysql2 9.6M; go-sql-driver 55.2k | LeanMySQL 20★, stale since 2022, libmysqlclient | `Millillion/mysql`: wire protocol, `caching_sha2_password` (SHA-256 + RSA, or TLS), prepared statements | P (+1.7) | 1.3, 1.7, 2.10 | L | Workers via `connect()` |
| 3.2 | MongoDB | mongodb 8.8M, mongoose 3.8M | none | BSON + OP_MSG + SCRAM | P (+1.7) | 1.3, 1.7 | XL | Workers via `connect()` |
| 3.3 | Metrics and tracing | @opentelemetry/api 55.6M, prom-client 5.7M, @sentry/node 23.6M; prometheus client 71.7k | lean-telemetry and otel-lean (tiny) | `Millillion/metrics`: Prometheus exposition; OTLP/HTTP-JSON trace exporter over fetch; `web` middleware | P | 1.1, 1.5, fetch | M | Push (OTLP) works on serverless; pull (Prometheus) does not |
| 3.4 | Cron / scheduled jobs / queues | node-cron 3.0M, cron 3.9M, bullmq 5.8M; robfig/cron 5.6k; Rust cron 9.3M | none | `Millillion/cron`: cron-expression parser and scheduler on Std.Async timers; later a Postgres/Redis-backed job queue | P | Std.Time, 1.6 / lean-redis | S (cron), L (queue) | Use platform cron triggers (Workers Cron, Netlify Scheduled Functions); the parser is still useful |
| 3.5 | YAML | js-yaml 176.2M*, yaml 133.3M*; serde_yaml 96.5M; yaml.v3 44.7k | nasa-jpl/L4YAML 12★, very active, optional C/Rust shims | **Evaluate L4YAML under Lasm first**; build only if it fails | P | — | (L if built) | — |
| 3.6 | XML (minimal reader/writer) | fast-xml-parser 47.0M, xml2js 26.6M. Needed for S3, SAML, RSS and SOAP | none | `Millillion/xml`: a non-validating pull parser and writer; no DTD (XXE-safe) | P | — | S–M | everywhere |
| 3.7 | TOML | smol-toml 26.2M, toml 18.5M; Rust toml 269.8M (Cargo-driven); BurntSushi/toml 38.2k | Lake.Toml (needs `Lean.Parser`); nathanial/totem 0★ | `Millillion/toml`: TOML 1.0 parse/serialize without `Lean.Parser` | P | — | M | everywhere |
| 3.8 | CSV | csv-parse 11.6M, papaparse 9.9M; Rust csv 58.2M; Go encoding/csv 45.2k (stdlib) | xubaiw/csv 3★ (2022); nathanial/tabular 0★ | `Millillion/csv`: RFC 4180 streaming reader/writer, typed row decoding | P | — | S | everywhere |
| 3.9 | API SDKs (LLM, Stripe) | @anthropic-ai/sdk 28.3M, openai 25.3M, stripe 14.5M | frenzymath/openai_client (curl); paulbutcher/lean-llmclient (libcurl) | Thin typed clients over fetch, SSE and schema; **Stripe/GitHub/Slack webhook-signature verifiers** (small HMAC helpers; could go into `crypto`) | P | fetch, 2.11, 2.3, 1.3 | M each | everywhere |
| 3.10 | gRPC / protobuf / Connect | @grpc/grpc-js 34.8M, protobufjs 54.2M; grpc 270k Go importers; prost 151.0M | Lean-zh/protobuf 14★; RileyBetts/lean-grpc 6★ (OpenSSL); i2y/connect-lean 2★ | Evaluate connect-lean (Connect works over HTTP/1.1); do not build gRPC/HTTP/2 now | P | 1.1, fetch | — | Connect-over-HTTP/1.1 is serverless-friendly |
| 3.11 | Embedded tz database | chrono-tz 44.9M; date-fns-tz/luxon pattern | Std.Time reads zoneinfo from disk | `Millillion/tzdata`: embedded compact TZif data registered with Std.Time's database interface | P | Std.Time | S–M | **Required for time zones on Workers** (no fs) and possibly on Windows |
| 3.12 | GraphQL | graphql 28.1M | duckki/graphql-lean 8★ (formalization) | parser, executor, schema derive | P | 1.1, 2.3 | XL | everywhere |
| 3.13 | HTML sanitizing | sanitize-html 7.1M | none | allow-list sanitizer | P | an HTML parser | M | everywhere |
| 3.14 | Workers platform bindings | — | none | KV, D1, R2, Queues and Durable Objects bindings for the Workers phase | B (JS host) | Lasm Workers support | M | Workers-only |
| 3.15 | Images | sharp 71.4M | none | Node-only backend (sharp/libvips) or skip | B | — | — | Native libvips is not portable; skip |

## 5. Dependency-ordered build sequence (Tiers 1–2)

```
Wave 0 (no dependencies; can run in parallel)
  1.2 encoding (S)    1.5 log (S)    1.4 env (S)    2.12 cache (S)
Wave 1
  1.3 crypto: hashes, HMAC, HKDF, PBKDF2, constant-time compare, pure (M)   ← 1.2
  2.2 uuid (S)                                                               ← 1.2
  1.1 web: router, middleware, context, body parsers, CORS/headers,
      static files, cookies, test client, Std.Http adapter (L)               ← log, encoding
Wave 2
  1.7 tls: Node + Linux-native backends; Lasm TLS host primitive (M)         (in parallel with Wave 1)
  1.3b crypto backends: AEAD, Ed25519/ECDSA/RSA sign and verify (M)          ← 1.3
  1.8 jwt (M)                                                                ← 1.3(b), Lean.Json, fetch
  2.3 schema / validation (M)                                                ← web, uuid
  2.6 multipart, 2.7 rate limit, 2.11 sse (S each)                           ← web, fetch
Wave 3
  1.6 postgres (L)                                                           ← crypto (SCRAM), tls, encoding, uuid
  2.1 password (M)                                                           ← crypto backends
  2.4 sessions (M)                                                           ← web, crypto(b), cache, lean-redis
  2.13 html (M)                                                              ← web
Wave 4
  2.10 sql toolkit + migrations (M)                                          ← postgres, leansqlite
  2.8 s3 (M)                                                                 ← crypto, fetch, 3.6 xml (pull the minimal XML reader forward)
  2.9 mail (M)                                                               ← tls, uuid, encoding
  2.5 websocket (M)                                                          ← crypto (SHA-1), tls, web, plus core Std.Http upgrade support
Then: Netlify adapter for web (with Lasm serverless phase 2); Workers adapter, tzdata, and Workers TCP/TLS mapping (Lasm phase 3).
```

**Critical path:** encoding → crypto → TLS → Postgres. The `web` framework is the parallel critical path. The two meet at the "hello CRUD API" milestone: web, schema, postgres, jwt, log and env together cover a typical JSON API.

## 6. Do NOT build (core or an adequate package exists)

| Need | Use instead | Evidence |
|---|---|---|
| HTTP server / HTTP/1.1 protocol | core `Std.Http` | v4.35.0 source |
| HTTP client | **Millillion/fetch** (done) | passes five platforms (COMPATIBILITY.md) |
| JSON + deriving | core `Lean.Data.Json` | passes under Lasm |
| Dates, times, formatting | core `Std.Time` | only tzdata embedding (3.11) is missing, for Workers |
| TCP/UDP/DNS/timers/processes | core `Std.Async` | — |
| Concurrency limits, mutexes, channels | core `Std.Sync` (Semaphore and others) | — |
| URL encoding and query strings | core `Std.Http.Data.URI.Encoding` | verified |
| Random bytes | core `IO.getRandomBytes` | verified; Lasm maps it to Node crypto |
| Collections | core `Std.Data`, Batteries | Batteries 74 Reservoir dependents |
| CLI arguments | `Cli` (leanprover/lean4-cli) | 30 Reservoir dependents; passes under Lasm |
| Testing | `LSpec`, `Plausible`, `lake test` | pass under Lasm; HTTP test client goes into `web`, mock transport is fetch's `transport` option |
| Redis | `ecyrbe/lean-redis` (pure, 7★) | passes under Lasm over TCP. **Contribute** TLS (via 1.7) rather than fork. |
| SQLite | `leanprover/leansqlite` | FRO-maintained; passes under Lasm |
| Markdown | `MD4Lean` | passes under Lasm |
| Compression | `kim-em/lean-zip` (133★) | passes under Lasm (native Windows fails upstream). Measure throughput before using it for response compression. |
| Parsing | core `Std.Internal.Parsec`, `lean4-parser` | passes under Lasm |
| Regex | `bergmannjg/regex` (PCRE2-compatible, v4.35.0) or `pandaman64/lean-regex` (111★, but **fails natively on 4.35**) | **Not fully adequate today.** Test bergmannjg/regex under Lasm before deciding; upstreaming a lean-regex fix is cheaper than a new engine. |
| YAML (initially) | `nasa-jpl/L4YAML` | Evaluate first (3.5). |

## 7. Open questions for the user

1. **Adopt, fork or build?** Credible 2026 pure-Lean packages exist with 0–5★ each: paulbutcher/leancrypto, lean-jose, lean-html and lean-routing/lean-middleware; theoriclabs/leanws; pb64-lean/pg-lean.
   - "Creating the standard" can mean building Millillion versions, or contributing to these and promoting them.
   - Note that paulbutcher's packages use his own `lean-json` rather than core `Lean.Json`, which splits the ecosystem. Should Millillion standardize on `Lean.Json`? I recommend yes.
2. **Native-platform scope for backends (crypto, TLS).**
   - Is native support required on macOS and Windows, or only as Lasm's oracle on Linux, with Node as the product?
   - Native macOS/Windows TLS means SChannel and Network.framework, or requiring a Homebrew/installed OpenSSL. That roughly doubles the size of 1.7.
3. **Is pure-Lean crypto acceptable for secret-key operations?** Constant-time behaviour cannot be guaranteed in pure Lean. The recommendation is pure Lean for hashes and HMAC, and backends for AEAD, signing and password hashing.
4. **Where does the platform adapter live?** PLAN.md puts Netlify/Workers request glue inside Lasm. Should `Millillion/web` own the adapters (Hono's model), or consume a Lasm-provided `Request → Response` entry point?
5. **Core Lean upstreaming.**
   - WebSocket needs an Upgrade/connection-hijack hook in `Std.Http.Server`.
   - base64/hex arguably belong in core.
   - Do you want to propose these upstream (Lean FRO), or keep everything in Millillion?
6. **Workers TCP mapping.** Postgres, Redis and SMTP on Workers depend on Lasm mapping `Std.Async.TCP` (and the new TLS primitive) to `cloudflare:sockets` `connect()`. Should that be committed to the Workers phase?
7. **Naming:** single packages (`Millillion/web`, `Millillion/crypto`, …), or one umbrella repo with multiple Lake libraries? Fetch set the single-repo-per-package precedent.
8. **Is the scope limited to API servers?** HTML rendering (2.13), sessions (2.4) and WebSocket (2.5) matter mainly for full-stack apps. Confirm whether those are in scope.

## 8. Unverified items

- npm counts include transitive and CI installs (marked \*). No dependent counts were pulled for npm.
- Netlify body and streaming limits; Node's version for `crypto.argon2`; macOS dlopen of libcrypto; Std.Time on Windows zoneinfo.
- The Std.Http Upgrade gap is based on grep only.
- Whether Batteries has an LRU.
- Whether `FromJson` deriving aggregates errors.
- Size estimates are judgement, not measurement.
- None of the candidate packages (leanws, leancrypto, lean-jose, L4YAML, bergmannjg/regex) was built under Lasm for this report.
