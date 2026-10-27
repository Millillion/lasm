# Conduit in Lean

**[Conduit](https://github.com/gothinkster/realworld), the RealWorld app, written entirely in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm): the REST API, the server-rendered browser app, and the proofs.**
The API passes RealWorld's official API suite unmodified (13/13 files, 154 requests) on Node, Cloudflare Workers and Bun; the browser app passes RealWorld's official Playwright suite (all 74 tests of its fullstack mode, no retries) on Chromium, Firefox and WebKit, served by Node, Workers or Bun.
More than 100 theorems, checked with no `sorry` and only Lean's standard axioms, prove properties of the code that actually runs: only authors can change their articles and comments, following is irreflexive, slugs never collide, pages never skip or repeat, the app never sends what the server would reject ([PROOFS.md](PROOFS.md)).
SQLite comes from JavaScript (`node:sqlite`, Cloudflare D1, `bun:sqlite`) through one small hand-written `@[js]` binding module per target; passwords and tokens use Web Crypto.
Start: `npm install && npm run build && npm start`, then open http://localhost:3000.

```sh
npm install          # Lasm (@lasm/cli), Hurl and Playwright (the official suites' runners)
npm run build        # the browser app (dist/public/client), then the Node server with it embedded (dist/server)
npm start            # http://localhost:3000 (PORT, HOST, DATABASE_PATH, JWT_SECRET)
npm run dev          # the same, rebuilt and reloaded on every edit
npm test             # the official RealWorld API suite against a fresh server and database
npx playwright install chromium && npm run test:e2e   # the official end-to-end suite (BROWSERS=chromium,firefox,webkit)
npm run proofs       # check every theorem

npm run build:workers && npx wrangler dev    # Cloudflare Workers with a local D1 database (wrangler.toml)
npm run build:bun && npm run start:bun       # Bun with bun:sqlite (needs Bun: Lasm runs on Bun to build it)
npm run test:workers                         # the API suite against wrangler dev (test:bun: against Bun)
```

Requirements: Node.js 24 or newer and npm. Lasm downloads Lean 4.35.0 and its WebAssembly
tools on the first build (a few hundred MB, cached); `node:sqlite` is part of Node. Bun is needed
only for the Bun target, and wrangler (`npx` fetches it) only for Workers.

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
| Targets | Node 24+ (`node:sqlite`), Cloudflare Workers (D1), Bun (`bun:sqlite`): the same Lean, one binding module each; every target serves the API, the pages and the app's files |
| Database | SQLite, parameterized statements only, tables created on first start |
| Passwords | PBKDF2-HMAC-SHA-256, 100,000 iterations, a random 16-byte salt per user (Web Crypto) |
| Tokens | JWT, HS256, 30 days, signed with `JWT_SECRET` (Web Crypto); kept in `localStorage` (`jwtToken`) by the app |
| Proofs | [PROOFS.md](PROOFS.md): authorization, following, favorites, slugs, pagination, validation, the browser app's requests, Markdown links, JSON round trips |
| Tests | [conduit.yml](../../.github/workflows/conduit.yml): the official API suite on Node 24 and 26, Workers (`wrangler dev`, local workerd and D1) and Bun 1.4; the official end-to-end suite on Node with Chromium, Firefox and WebKit and on Workers and Bun with Chromium, without retries; the proofs |

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
Server/               the server (Lasm.Fetch, Lasm.JS)
  Sql.lean            every SQL statement; Conduit's Store on a SQLite connection
  NodeSqlite.lean     node:sqlite (Node)        ┐
  D1.lean             Cloudflare D1 (Workers)   ├ the only target-specific code: each makes a `Sql`
  BunSqlite.lean      bun:sqlite (Bun)          ┘
  Crypto.lean         PBKDF2 and JWT with Web Crypto
  Pages.lean          server rendering: a URL's data from the API, `view` to HTML, flags
  App.lean            HTTP: /api/… → Conduit.Api.handle, other URLs → their page
ServerNode.lean       main for Node      ┐ open the database, embed dist/public, serve
ServerWorkers.lean    main for Workers   │
ServerBun.lean        main for Bun       ┘
Client.lean           main for the browser: hydrate, run, window.__conduit_debug__
Proofs/               the theorems (PROOFS.md); Model.lean is the database as Lean lists
public/               the RealWorld theme (styles.css), the default avatar, conduit.css
wrangler.toml         the Worker, its D1 binding and static assets
test/
  api.mjs             a fresh server and database, then upstream's run-api-tests-hurl.sh
  playwright.config.ts  upstream's playwright.base with our server and browsers
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
- Web Crypto needs no binding: `Server/Crypto.lean` reads `globalThis.crypto.subtle` and calls
  `importKey`, `deriveBits`, `sign` and `verify`.

Each target has its own entry file because Lasm bundles a program's bound modules: the Workers
build must not mention `node:sqlite`. The full guide is [docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md).

## Configuration

| Variable | Default | |
| --- | --- | --- |
| `PORT` | `3000` | |
| `HOST` | `0.0.0.0` | |
| `DATABASE_PATH` | `conduit.db` | SQLite file (Node, Bun), created with its tables on first start |
| `JWT_SECRET` | a development secret | **Set it in production.** Workers: `npx wrangler secret put JWT_SECRET` |

## Deploy

- **Node**: `npm run build` writes `dist/server` (the program, the Lean runtime, the browser
  app embedded, and `main.mjs`); run `node dist/server/main.mjs` on any machine with Node 24+,
  in a container or a VM. Keep `DATABASE_PATH` on a persistent disk.
- **Cloudflare Workers**: `npx wrangler d1 create conduit` and put its id in `wrangler.toml`,
  `npx wrangler secret put JWT_SECRET`, then `npm run build:workers` and `npx wrangler deploy`.
  Conduit creates its tables on first use. PBKDF2 with 100,000 iterations takes a few ms of
  CPU per login or registration: fine on the Paid plan, tight for the Free plan's 10 ms.
- **Bun**: `npm run build:bun` writes `bun/`; run `bun bun/main.mjs` (`DATABASE_PATH`, `PORT`,
  `JWT_SECRET`).

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
