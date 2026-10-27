# Conduit in Lean

**[Conduit](https://github.com/gothinkster/realworld), the RealWorld app, written in Lean 4 and compiled to WebAssembly by [Lasm](https://github.com/Millillion/lasm).**
The REST API follows the RealWorld spec exactly and passes its official API test suite, unmodified (13/13 files, 154 requests).
The rules (validation, slugs, pagination, authorization, every endpoint) are pure Lean, written once for any database, so they can be proved correct in Lean.
SQLite comes from JavaScript (Node's built-in `node:sqlite`) through a few hand-written `@[js]` bindings; passwords and tokens use Web Crypto.
`npm install && npm run build && npm start` serves it on http://localhost:3000; `npm test` runs the official suite against it.

```sh
npm install      # Lasm (@lasm/cli) and Hurl, the API suite's runner
npm run build    # dist/server: the Node server (Lasm downloads Lean on the first build)
npm start        # http://localhost:3000/api (DATABASE_PATH, PORT, HOST, JWT_SECRET)
npm test         # the official RealWorld API suite against a fresh server and database
```

Requirements: Node.js 24 or newer and npm. Nothing else: Lasm brings Lean 4.35.0 and its
WebAssembly tools on the first build (a few hundred MB, cached), and `node:sqlite` is part of Node.

## What it is

[RealWorld](https://github.com/gothinkster/realworld) specifies one app, Conduit (a Medium
clone): users and profiles, articles with tags, comments, favorites, following and a feed,
behind a JSON API ([`openapi.yml`](test/realworld/specs/api/openapi.yml)). Hundreds of
implementations exist in every language; this one is Lean.

| | |
| --- | --- |
| API | Every endpoint of the spec, under `/api`, with its status codes and error bodies (`{"errors": {"field": ["message"]}}`), `Authorization: Token <jwt>` |
| Database | SQLite through `node:sqlite` (Node 24+), parameterized SQL only |
| Passwords | PBKDF2-HMAC-SHA-256, 100,000 iterations, random 16-byte salt per user (Web Crypto) |
| Tokens | JWT, HS256, 30 days, signed with `JWT_SECRET` (Web Crypto) |
| Tests | The official [Hurl suite](test/realworld/specs/api/hurl), run by its own script, on Node 24 and 26 in CI ([conduit.yml](../../.github/workflows/conduit.yml)) |

## Layout

```
Conduit/              the app, pure Lean (no Lasm, no JavaScript): checked by `lake build`
  Types.lean          the API's data and its JSON encoding/decoding
  Validation.lean     request rules ("can't be blank", NIST passwords, …) → validated types
  Slug.lean           titles → slugs, and unique slugs
  Paging.lean         ?limit=&offset= and newest-first order
  Time.lean           ISO 8601 timestamps
  Rules.lean          who may edit what; rows → articles, comments, profiles
  Store.lean          what the endpoints need: Store (one function per SQL statement), Services
  Api.lean            every endpoint and the router, written once for any monad
Server/               the server (Lasm.Fetch and Lasm.JS)
  Sql.lean            every SQL statement; Conduit's Store on a SQLite connection
  NodeSqlite.lean     the node:sqlite binding (the only Node-specific file)
  Crypto.lean         PBKDF2 and JWT with Web Crypto
  App.lean            HTTP: /api/… → Conduit.Api.handle
ServerNode.lean       main for Node: open the database, serve
test/
  api.mjs             starts a server on a fresh database and runs the official suite
  realworld/          gothinkster/realworld's specs, unmodified, at the commit in PINNED
```

The endpoint code (`Conduit/Api.lean`) does not know about SQL or HTTP. It is written against
`Store m` and `Services m`, records of functions over any monad `m`. The server passes the
SQLite store in `Async`; a proof can pass a model of the tables in `StateM`, so theorems are
about the code the server runs, not a copy of it.

## How the JavaScript bindings are written

`Server/NodeSqlite.lean` is the whole database binding. One `@[js]` line declares the
constructor; everything else is ordinary method calls on the JavaScript object:

```lean
/-- `new DatabaseSync(path)` from node:sqlite. -/
@[js "node:sqlite" "new DatabaseSync"] opaque openDatabase : String → IO Value

let db ← openDatabase "conduit.db"
let st ← db.callMethod "prepare" #[toJS "SELECT id, username FROM users WHERE email = ?"]
let rows ← st.callMethod "all" #[toJS email] (Array Data)
```

It returns a `Sql` (three functions: `all`, `run`, `batch`), and `Server/Sql.lean` builds
Conduit's `Store` from that, so moving to another SQLite (Cloudflare D1, `bun:sqlite`) means
writing another `Sql`. Web Crypto needs no binding at all: `Server/Crypto.lean` reads
`globalThis.crypto.subtle` and calls `importKey`, `deriveBits`, `sign` and `verify`, awaiting
their promises in `Async` (no Lean thread is held while they run). The full guide is
[docs/JS_BINDINGS.md](../../docs/JS_BINDINGS.md).

## Configuration

| Variable | Default | |
| --- | --- | --- |
| `PORT` | `3000` | |
| `HOST` | `0.0.0.0` | |
| `DATABASE_PATH` | `conduit.db` | SQLite file, created with the tables on first start |
| `JWT_SECRET` | a development secret | **Set it in production.** Tokens signed with one secret do not verify with another. |

## Deploy

`npm run build` writes `dist/server` (the program, the Lean runtime and `main.mjs`); run it
with `node dist/server/main.mjs` on any machine with Node 24+, in a container or a VM. Keep
`DATABASE_PATH` on a persistent disk.

## Behaviour where the spec leaves a choice

- Blank means empty or whitespace only; usernames and emails are trimmed. Emails need one `@`
  with text on both sides, and are unique ignoring case.
- Passwords: 8 to 128 characters at registration and on update (NIST SP 800-63B; the suite
  checks the update rules). Login accepts any non-empty password.
- A token that does not verify is `401 {"errors": {"token": ["is invalid"]}}`, also on
  endpoints where authentication is optional; no token where one is required is `is missing`.
- Following yourself is `422 {"errors": {"profile": ["cannot follow yourself"]}}`.
- A new title gives the article a new slug; slugs are unique (`title`, `title-2`, …) and never
  `feed` (the feed's route).
- `limit` is 1–100 (default 20) and `offset` ≥ 0; other values are 422. Lists are newest first.
- `GET /api/tags` returns every tag in use, most used first.
- `updatedAt` changes on every update, even within one millisecond.
- The API sends `Access-Control-Allow-Origin: *` (it uses tokens, not cookies), so other
  RealWorld frontends can use it.
