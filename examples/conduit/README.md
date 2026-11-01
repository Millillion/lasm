# Conduit in Lean

**[Conduit](https://github.com/gothinkster/realworld), the RealWorld app, written entirely in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm): the REST API, the server-rendered browser app, and the proofs.**
The same Lean runs on every platform Lasm supports: Node, Bun, Deno, Docker, AWS Lambda (.zip and container image), Vercel, Netlify, Azure Functions, Google Cloud Functions, Cloudflare Workers, Vercel Edge, Netlify Edge, Deno Deploy, Supabase Edge Functions, Fastly Compute, and wasi-http on wasmtime and Spin ([the platform table](#platforms)).
On each one, CI serves it with that platform's own local tooling and runs RealWorld's official API suite unmodified (13 files, 154 requests) and its official Playwright suite (the 74 tests of its fullstack mode, no retries).
294 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: only authors can change their articles and comments, following is irreflexive, slugs never collide, pages never skip or repeat, the app never sends what the server would reject ([PROOFS.md](PROOFS.md); [SPEC.md](SPEC.md) maps the RealWorld specification onto them).
The data goes to each platform's own store through one small binding module per platform (SQLite where the platform has it, else its key-value store or Postgres); passwords and tokens use Web Crypto, or pure Lean where there is no JavaScript.
Start: `npm install && npm run build && npm start`, then open http://localhost:3000.

```sh
npm install          # Lasm (@lasm/cli), Hurl and Playwright (the official suites' runners)
npm run build        # the browser app (dist/public/client), then the Node server with it embedded (dist/server)
npm start            # http://localhost:3000 (PORT, HOST, DATABASE_PATH, JWT_SECRET)
npm run dev          # the same, rebuilt and reloaded on every edit
npm test             # the official RealWorld API suite against a fresh server and database
npx playwright install chromium && npm run test:e2e   # the official end-to-end suite (BROWSERS=chromium,firefox,webkit)
npm run proofs       # check every theorem

npm run build:<platform>                 # any platform below, e.g. build:deno, build:lambda, build:fastly
npm run test:platform -- <platform>      # the API suite against that platform's local tooling (on PATH)
E2E_PLATFORM=<platform> npm run test:e2e # the end-to-end suite against it
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its WebAssembly
tools on the first build (a few hundred MB, cached); `node:sqlite` is part of Node. Each other
platform needs only its own tool, to serve or deploy the build (Bun, Deno, Docker, wrangler,
the AWS SAM CLI, the Vercel, Netlify and Supabase CLIs, Azure Functions Core Tools, Viceroy,
wasmtime, Spin); none of them is needed to build.

## What it is

[RealWorld](https://github.com/gothinkster/realworld) specifies one app, Conduit (a Medium
clone): users and profiles, articles with tags and Markdown bodies, comments, favorites,
following and a feed, behind a JSON API ([`openapi.yml`](test/realworld/specs/api/openapi.yml))
and a set of HTML templates. Hundreds of implementations exist; this one is Lean from the
database query to the DOM.

| | |
| --- | --- |
| API | Every endpoint of the spec under `/api`, its status codes and error bodies (`{"errors": {"field": ["message"]}}`), `Authorization: Token <jwt>`, CORS for other frontends |
| Browser app | The RealWorld templates' markup and theme, in `Lasm.UI` (the Elm architecture). The server renders the first page of every URL from its own API; the app hydrates it, then routes, fetches and renders in the browser. Markdown is parsed in Lean into elements, never `innerHTML` |
| Targets | Every platform in [the table below](#platforms): the same Lean, one small store binding each; every target serves the API, the pages and the app's files |
| Database | SQLite (`node:sqlite`, D1, `bun:sqlite`), parameterized statements only, tables created on first start; or a key-value store (Deno KV, Netlify Blobs, Fastly KV, Postgres through PostgREST) holding the same rows ([`Server/Kv.lean`](Server/Kv.lean)) |
| Passwords | PBKDF2-HMAC-SHA-256, 100,000 iterations, a random 16-byte salt per user (Web Crypto; pure Lean on Fastly and wasi-http) |
| Tokens | JWT, HS256, 30 days, signed with `JWT_SECRET`; kept in `localStorage` (`jwtToken`) by the app |
| Proofs | [PROOFS.md](PROOFS.md): authorization, following, favorites, slugs, pagination, validation, the browser app's requests, Markdown links, JSON round trips |
| Tests | [conduit.yml](../../.github/workflows/conduit.yml) and [conduit-platforms.yml](../../.github/workflows/conduit-platforms.yml): on every platform, the official API suite and the official end-to-end suite (Chromium; on Node also Firefox and WebKit), without retries; the proofs |

## Platforms

Each row is one CI job in [conduit.yml](../../.github/workflows/conduit.yml) (Node, Bun, Workers) or [conduit-platforms.yml](../../.github/workflows/conduit-platforms.yml) (the others): it builds
Conduit as the row says, serves it with the platform's local tooling (column 3, from
[`test/platforms.mjs`](test/platforms.mjs)), and runs both official suites against it. No
account, nothing deployed.

| Platform | Build | Served in CI by | Store |
| --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/server/main.mjs` | `node:sqlite`, a file |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | `bun:sqlite`, a file |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | `node:sqlite` (Deno's Node compatibility), a file |
| Docker | `npm run build:docker` | `docker run` of the image ([`Dockerfile`](Dockerfile)), read-only, 512 MB | `node:sqlite` on the `/data` volume |
| AWS Lambda (.zip, `nodejs24.x`) | `npm run build:lambda` | AWS SAM CLI 1.170 `sam local start-api` ([`deploy/lambda/template.yaml`](deploy/lambda/template.yaml)) | `node:sqlite` in `/tmp` (per instance) |
| AWS Lambda (container image) | `npm run build:lambda-image` | `sam local start-api` ([`deploy/lambda-image/`](deploy/lambda-image/)) | `node:sqlite` in `/tmp` (per instance) |
| Vercel Functions | `vercel build` ([`vercel.json`](vercel.json)) | Vercel's Node launcher (`@vercel/node`, what `vercel dev` runs) in AWS's Lambda Node 24 image | `node:sqlite` in `/tmp` (per instance) |
| Netlify Functions | `netlify build --offline` ([`netlify.toml`](netlify.toml)) | the zip it bundles, with Netlify's bootstrap, in AWS's Lambda Node 24 image (Netlify Functions run on Lambda) | `node:sqlite` in `/tmp` (per instance) |
| Azure Functions | `npm run build:azure` | Azure Functions Core Tools 4.16 `func start` | `node:sqlite` in the temporary directory (per instance) |
| Google Cloud Functions | `npm run build:gcf` | the Functions Framework | `node:sqlite` in the temporary directory (per instance) |
| Cloudflare Workers | `npm run build:workers` | `wrangler dev` (workerd) | Cloudflare D1 (local) |
| Vercel Edge | `vercel build` ([`deploy/vercel-edge/vercel.json`](deploy/vercel-edge/vercel.json)) | Vercel's `edge-runtime` package | memory (per isolate) |
| Netlify Edge | `netlify build --offline` ([`deploy/netlify-edge/netlify.toml`](deploy/netlify-edge/netlify.toml)) | the edge function in Deno with `@netlify/blobs`' local server, as `netlify dev` runs it | Netlify Blobs (local) |
| Deno Deploy | `npm run build:deno-deploy` | `deno run -A --unstable-kv deno/main.mjs` | Deno KV (local) |
| Supabase Edge Functions | `npm run build:supabase-edge` | the Supabase CLI: `supabase start`, `supabase functions serve` | Postgres ([`supabase/migrations/`](supabase/migrations/)) through Supabase's REST API |
| Fastly Compute | `npm run build:fastly` | Viceroy 0.21.1, what `fastly compute serve` runs ([`fastly.toml`](fastly.toml)) | Fastly KV Store (local) |
| wasi-http: wasmtime | `npm run build:wasi-http` | `wasmtime serve` 49.0.4 | Postgres through PostgREST |
| wasi-http: Spin | `npm run build:wasi-http` | `spin up` 4.2.2 ([`spin.toml`](spin.toml)) | Postgres through PostgREST |

What differs between platforms, honestly:

- **Where the data lives.** Node, Bun, Deno, Docker, Workers, Deno Deploy, Netlify Edge,
  Supabase, Fastly and wasi-http keep it as long as the store does. The Node function
  platforms (Lambda, Vercel, Netlify Functions, Azure, Google) give a function only a
  temporary directory, so there each instance has its own database, lost when the platform
  recycles the instance: fine for a demo, not for a site. For real data there, write a `Sql`
  over a hosted database (Turso, D1 over HTTP) or a `Lasm.KV.Store` over a hosted key-value
  store, as the other bindings do. Vercel Edge has no store of its own: memory, per isolate.
- **The key-value stores** (Deno KV, Netlify Blobs, Fastly KV, PostgREST) hold the same rows
  as the SQL tables, one key per row and index ([`Server/Kv.lean`](Server/Kv.lean)). A list
  reads every article's keys, and one request's writes are not one transaction (no
  compare-and-set in `Lasm.KV`): right for an example, slow and racy for a large, busy site.
- **No JavaScript** on Fastly and wasi-http: passwords and tokens are SHA-256, HMAC and PBKDF2
  written in Lean ([`Server/LeanCrypto.lean`](Server/LeanCrypto.lean), checked against Node's
  crypto by [`test/crypto-check.mjs`](test/crypto-check.mjs)). PBKDF2's 100,000 iterations
  take about a second there (Web Crypto: a few milliseconds), so registering and logging in
  are slow.
- **wasi-http has no store and no environment** (the proxy world): Conduit keeps its data in
  Postgres through PostgREST over outgoing requests, and its settings are fixed when it is
  built (`CONDUIT_STORE_URL`, default `http://127.0.0.1:3000`; `CONDUIT_STORE_KEY`;
  `JWT_SECRET`), so keep the built component private. CI runs Postgres 17 and PostgREST 13 in
  Docker ([`test/postgrest.mjs`](test/postgrest.mjs)).
- **Supabase serves functions under `/functions/v1/conduit`.** The API works there as is; the
  browser app uses absolute paths, so CI puts it at the root with a small proxy
  ([`test/supabase-serve.mjs`](test/supabase-serve.mjs)), as a custom domain would. Hosted
  Supabase also sends a function's HTML as plain text unless the project has a custom domain.
- **Vercel and Netlify's dev servers are not used.** `vercel dev` needs a login, so CI serves
  `vercel build`'s output with the launchers Vercel's own tools use; Vercel's production
  bundling is not reproduced. `netlify dev` re-requests every 403 and 404 response as
  `/path.html`, `/path.htm`, `/path/index.html` and `/path/index.htm` (to mimic static pretty
  URLs), so the API's error responses come back as the last of those; CI runs what
  `netlify build` bundled with Netlify's own runtime pieces instead (above).
- **Lambda@Edge** is not a Conduit target: it has no environment variables (no `JWT_SECRET`)
  and its instances run in many regions, each with its own temporary directory, so there
  would be a database per instance and region.

## Layout

```
Conduit/              the app's rules, pure Lean (no Lasm, no JavaScript)
  Types.lean          the API's data and its JSON encoding and decoding
  Validation.lean     request rules ("can't be blank", NIST passwords, …) → validated types
  Slug.lean           titles → slugs, and unique slugs
  Paging.lean         ?limit=&offset= and newest-first order
  Time.lean           ISO 8601 timestamps
  Rules.lean          who may edit what; rows → articles, comments, profiles
  Store.lean          what the endpoints need: Store (one function per SQL statement), Services
  Api.lean            every endpoint and the router, written once for any monad
  Markdown.lean       article bodies → a tree of blocks and inlines
Frontend/             the browser app (Lasm.UI), also rendered by the server
  Route.lean          the RealWorld routes: URL ↔ page
  Model.lean          the app's state and messages; the flags the server hands over
  View.lean           every page, with the templates' markup
  Update.lean         what the app does: API calls, forms (validated as the server validates)
Server/               the server (Lasm.Fetch; Lasm.JS where there is JavaScript)
  Http.lean           HTTP: /api/… → Conduit.Api.handle, other URLs → their page (no JavaScript)
  Pages.lean          server rendering: a URL's data from the API, `view` to HTML, flags
  Sql.lean            every SQL statement; Conduit's Store on a SQLite connection
  Kv.lean             Conduit's Store on a key-value store (Lasm.KV.Store), the same rows as keys
  NodeSqlite.lean     node:sqlite (Node, Deno, the Node function platforms) ┐
  D1.lean             Cloudflare D1 (Workers)                               │ the only
  BunSqlite.lean      bun:sqlite (Bun)                                      │ platform-specific
  NetlifyBlobs.lean   Netlify Blobs (Netlify Edge), as a Lasm.KV.Store      │ code: a `Sql` or a
  Postgrest.lean      Postgres through PostgREST (Supabase, wasi-http)      ┘ key-value store
  Crypto.lean         PBKDF2 and JWT with Web Crypto
  LeanCrypto.lean     SHA-256, HMAC, PBKDF2 and JWT in pure Lean (Fastly, wasi-http)
  Base64.lean         base64url
  App.lean            the services (Web Crypto, the clock, JWT_SECRET) for the JavaScript targets
  BuildEnv.lean       build_env!: a build-time setting (wasi-http has no environment)
ServerNode.lean       main for Node, Deno and the Node function platforms (node:sqlite) ┐ open the
ServerWorkers.lean    main for Workers (D1)                                             │ store, embed
ServerBun.lean        main for Bun (bun:sqlite)                                         │ dist/public,
ServerEdge.lean       main for Deno Deploy and Vercel Edge (Lasm.KV: Deno KV, memory)   │ serve
ServerNetlifyEdge.lean  main for Netlify Edge (Netlify Blobs)                           │
ServerSupabase.lean   main for Supabase Edge Functions (Postgres)                       │
ServerFastly.lean     main for Fastly Compute (Fastly KV; Lean crypto)                  │
ServerWasiHttp.lean   main for wasi-http (Postgres through PostgREST; Lean crypto)      ┘
Client.lean           main for the browser: hydrate, run, window.__conduit_debug__
Proofs/               the theorems (PROOFS.md); Model.lean is the database as Lean lists
public/               the RealWorld theme (styles.css), the default avatar, conduit.css
Dockerfile            the Node server's image; deploy/ the other platforms' files:
deploy/               lambda/ and lambda-image/ (SAM templates, the Lambda image), vercel-edge/,
                      netlify-edge/, package-hosted.mjs (Azure, Google)
wrangler.toml, vercel.json, netlify.toml, fastly.toml, spin.toml, supabase/
                      each platform's own configuration
test/
  platforms.mjs       every platform: its build, the command that serves it locally, its store
  api.mjs             a fresh server and database (--platform NAME), then upstream's run-api-tests-hurl.sh
  e2e-server.mjs      the end-to-end suite's server (E2E_PLATFORM)
  playwright.config.ts  upstream's playwright.base with our server and browsers
  vercel-serve.mjs, vercel-edge-serve.mjs, supabase-serve.mjs, postgrest.mjs
                      what serves the platforms whose tools need a wrapper
  crypto-check.mjs    Server/LeanCrypto.lean against Node's crypto
  proofs.mjs          npm run proofs: lake build, then Axioms.lean
  realworld/          gothinkster/realworld's specs, unmodified, at the commit in PINNED
```

### One codebase, proved where it runs

The endpoint code (`Conduit/Api.lean`) does not know about SQL or HTTP. It is written against
`Store m` and `Services m`, records of functions over any monad `m`. The server passes the
SQLite store in `Async`; the proofs pass a model of the tables in `StateM`
([`Proofs/Model.lean`](Proofs/Model.lean)). So `deleteArticle_forbidden` ("deleting someone
else's article is 403 and changes nothing") is a theorem about the very function that answers
`DELETE /api/articles/:slug`.

The browser app shares `Conduit/` with the server: it validates a form with the server's
`validateNewUser`, encodes the request with the encoder whose decoder the server uses, and
`Proofs/Client.lean` proves it never sends what the server would reject.

### Server rendering and hydration

For any URL outside `/api`, `Server/Pages.lean` asks Conduit's API (in process) for the data
the page shows, builds the app's model with `Model.ofFlags`, renders `view` to HTML, and puts
the data in the page as the app's flags. The app starts with `Model.ofFlags` of the same flags,
so its first view is the server's and it adopts the HTML instead of redrawing it. The server
renders as a logged-out visitor (the token lives in the browser), so controls stay disabled
until the app has started and knows the viewer; then it reloads what depends on the viewer
(`favorited`, `following`).

## How the JavaScript bindings are written

`Server/NodeSqlite.lean` is the whole Node database binding. One `@[js]` line declares the
constructor; everything else is ordinary method calls on the JavaScript object:

```lean
/-- `new DatabaseSync(path)` from node:sqlite. -/
@[js "node:sqlite" "new DatabaseSync"] opaque openDatabase : String → IO Value

let db ← openDatabase "conduit.db"
let st ← db.callMethod "prepare" #[toJS "SELECT id, username FROM users WHERE email = ?"]
let rows ← st.callMethod "all" #[toJS email] (Array Data)
```

It returns a `Sql` (three functions: `all`, `run`, `batch`), and `Server/Sql.lean` builds
Conduit's `Store` from it, so another SQLite is another `Sql`:

- `Server/D1.lean` imports nothing: D1 is an object in the Worker's `env`
  (`Lasm.Fetch.platformEnv`), its methods return promises that `callMethodAwait` awaits in
  `Async` (no Lean thread held), and `batch` is D1's `db.batch` (one transaction).
- `Server/BunSqlite.lean` binds `@[js "bun:sqlite" "new Database"]`. Lasm checks every binding
  against the real module at build time, so this one is built with Lasm running on Bun
  (`bunx --bun lasm build …`, as `npm run build:bun` does).
- Deno runs the same `Server/NodeSqlite.lean`: Deno implements `node:sqlite`.
- Web Crypto needs no binding: `Server/Crypto.lean` reads `globalThis.crypto.subtle` and calls
  `importKey`, `deriveBits`, `sign` and `verify`.

Where there is no SQL, the store is `Server/Kv.lean` on a `Lasm.KV.Store` (get, put, delete):

- `Lasm.KV.open "conduit"` is Deno KV on Deno Deploy, the KV Store `conduit` on Fastly, and
  memory elsewhere (Vercel Edge): no binding at all.
- `Server/NetlifyBlobs.lean` binds `@[js "@netlify/blobs" "getStore"]` and calls `get`, `set`
  and `delete` on the store.
- `Server/Postgrest.lean` is plain HTTP (`Lasm.Fetch.fetch`) to PostgREST, so it also works where
  there is no JavaScript (wasi-http).

Each target has its own entry file because Lasm bundles a program's bound modules: the Workers
build must not mention `node:sqlite`. The full guide is [docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md).

## Configuration

| Variable | Default | |
| --- | --- | --- |
| `PORT` | `3000` | |
| `HOST` | `0.0.0.0` | |
| `DATABASE_PATH` | `conduit.db` | SQLite file (Node, Bun, Deno, the Node function platforms), created with its tables on first start; where the working directory is read-only (function platforms), `conduit.db` in the temporary directory |
| `JWT_SECRET` | a development secret | **Set it in production.** Workers: `npx wrangler secret put JWT_SECRET`; Lambda: the templates' `JwtSecret` parameter; Fastly: the secret store `conduit` ([`fastly.toml`](fastly.toml)); wasi-http: in the build's environment |

## Deploy

- **Node**: `npm run build` writes `dist/server` (the program, the Lean runtime, the browser
  app embedded, and `main.mjs`); run `node dist/server/main.mjs` on any machine with Node 24+,
  in a container or a VM. Keep `DATABASE_PATH` on a persistent disk.
- **Cloudflare Workers**: `npx wrangler d1 create conduit` and put its id in `wrangler.toml`,
  `npx wrangler secret put JWT_SECRET`, then `npm run build:workers` and `npx wrangler deploy`.
  Conduit creates its tables on first use. PBKDF2 with 100,000 iterations takes a few ms of
  CPU per login or registration: fine on the Paid plan, tight for the Free plan's 10 ms.
- **Bun**: `npm run build:bun` writes `bun/`; run `bun bun/main.mjs` (`DATABASE_PATH`, `PORT`,
  `JWT_SECRET`). **Deno**: `npm run build:deno` writes `deno/`; run `deno run -A deno/main.mjs`.
- **Docker**: `npm run build:docker`, then `docker run -p 3000:3000 -v conduit-data:/data -e
  JWT_SECRET=… conduit`.
- **AWS Lambda**: `npm run build:lambda`, then `sam deploy --guided -t
  deploy/lambda/template.yaml` (.zip); or `npm run build:lambda-image`, push the image to ECR and
  set `ImageUri` in `deploy/lambda-image/template.yaml`.
- **Vercel / Netlify**: connect the repository; [`vercel.json`](vercel.json) and
  [`netlify.toml`](netlify.toml) run the build. For their edge runtimes use
  `deploy/vercel-edge/vercel.json` and `deploy/netlify-edge/netlify.toml` instead.
- **Azure Functions / Google Cloud Functions**: `npm run build:azure` writes `azure-functions/`
  (`func azure functionapp publish APP` there); `npm run build:gcf` writes `gcf/` (`gcloud
  functions deploy conduit --gen2 --runtime nodejs24 --trigger-http --entry-point lasm --source gcf`).
- **Deno Deploy**: `npm run build:deno-deploy`; the entrypoint is `deno/main.mjs`.
- **Supabase**: `npx supabase link`, `npx supabase db push` (the table), `npm run
  build:supabase-edge`, then `npx supabase functions deploy conduit`.
- **Fastly**: create a KV Store and a secret store named `conduit` (with `JWT_SECRET`), link
  them to the service, then `npm run build:fastly` and `fastly compute deploy`.
- **wasi-http**: `CONDUIT_STORE_URL=… JWT_SECRET=… npm run build:wasi-http`, then `wasmtime
  serve wasi-http/main.wasm` or `spin up` (add the store's host to `allowed_outbound_hosts`).

## The official tests

`test/realworld` holds gothinkster/realworld's `specs/` at the commit in
[`PINNED`](test/realworld/PINNED), byte for byte (CI checks it against upstream).

- **API**: `npm test` starts a server on a fresh database and runs upstream's
  `run-api-tests-hurl.sh` (Hurl is upstream's source of truth; the Bruno collection is
  generated from it).
- **End to end**: `npm run test:e2e` runs upstream's Playwright suite with upstream's
  `playwright.base`, overriding only the base URL, the server and the browsers. Conduit owns
  its whole stack, so the suite runs in its `fullstack` mode, which drives everything through
  the UI; the 65 tests that need the `spa` mode's interception of `api.realworld.show` or its
  seeded demo users are skipped by the suite itself.

## Behaviour where the spec leaves a choice

- Blank means empty or whitespace only; usernames and emails are trimmed. Emails need one `@`
  with text on both sides, and are unique ignoring case.
- Passwords: 8 to 128 characters at registration and on update (NIST SP 800-63B; the suite
  checks the update rules). Login accepts any non-empty password.
- A token that does not verify is `401 {"errors": {"token": ["is invalid"]}}`, also where
  authentication is optional; no token where one is required is `is missing`.
- Following yourself is `422 {"errors": {"profile": ["cannot follow yourself"]}}`.
- A new title gives the article a new slug; slugs are unique (`title`, `title-2`, …) and never
  `feed` (the feed's route).
- `limit` is 1–100 (default 20) and `offset` ≥ 0; other values are 422. Lists are newest
  first; the app shows 10 per page.
- `GET /api/tags` returns every tag in use, most used first; the app shows 20.
- `updatedAt` changes on every update, even within one millisecond.
- Markdown: paragraphs, headings (one level below the page title), lists, quotes, code,
  rules, `**strong**`, `*emphasis*`, `` `code` `` and links; anything else, HTML included,
  is shown as text.
