# Lasm.RPC: the whole stack in Lean

`Lasm.RPC` connects a Lean server ([Lasm.Fetch](FETCH.md)) and a Lean browser
app ([Lasm.UI](UI.md)) through typed endpoints declared once, in a module both
import. The request and response types, and the rules a request must satisfy,
exist in one place. A theorem about those rules holds on both sides:

- the browser checks a request before it sends it (an invalid one is never
  sent: `Endpoint.call_invalid`);
- the server checks it again, and the handler receives the proof that it
  passed (`Endpoint.serve`, `Endpoint.decodeRequest_valid`), so code that
  needs a validated value can demand the proof in its type.

`lasm init my-app --template fullstack` creates such an app: the server
renders the first page from the shared view, the browser app hydrates it, and
the same code runs on Node and on Cloudflare Workers.

Contents: [Endpoints](#endpoints) · [Server](#server) · [Client](#client) ·
[The fullstack template](#the-fullstack-template) · [Wire format](#wire-format) ·
[What is proved](#what-is-proved) · [API](#api)

## Endpoints

```lean
-- Shared.lean (imported by Server.lean and Client.lean)
import Lasm.RPC.Core
open Lean Lasm.RPC

structure Todo where
  id : Nat
  title : String
  done : Bool
  deriving ToJson, FromJson

structure NewTodo where
  title : String
  deriving ToJson, FromJson

def clean (title : String) : String := title.trimAscii.toString

@[irreducible] def checkTitle (title : String) : Except String Unit :=
  let n := (clean title).length
  if n = 0 then .error "Write something first."
  else if n > 80 then .error "Keep it under 80 characters."
  else .ok ()

theorem checkTitle_ok {title : String} (h : checkTitle title = .ok ()) :
    0 < (clean title).length ∧ (clean title).length ≤ 80 := by
  unfold checkTitle at h
  by_cases h0 : (clean title).length = 0
  · simp [h0] at h
  · by_cases h1 : (clean title).length > 80
    · simp [h0, h1] at h
    · omega

def addTodo : Endpoint NewTodo Todo := { name := "addTodo", validate := fun r => checkTitle r.title }
```

An `Endpoint Req Res` has a `name` (the URL is `POST /rpc/<name>`) and a
`validate : Req → Except String Unit` (default: everything passes). The types
need `ToJson`/`FromJson`; `deriving ToJson, FromJson` writes them
(`import Lasm.RPC.Core` makes the deriving handlers available; they run only
while Lean compiles). Marking a validation function `@[irreducible]` keeps
Lean from computing it when it compares types, so proofs and the server's
handler work with it by name.

## Server

```lean
-- Server.lean
import Lasm.Fetch
import Lasm.RPC.Server
import Shared
open Lasm.Fetch Lasm.RPC

def store (title : String) (_ : checkTitle title = .ok ()) : Todo := …   -- only validated titles

def main : IO Unit := do
  let routes := [
    addTodo.serve fun req ok => do            -- ok : addTodo.validate req = .ok ()
      return .ok (store req.title ok),
    listTodos.serve' fun _ => do return .ok #[] ]
  serve <| handler routes fun req => do       -- every other request
    return .notFound
```

- `Endpoint.serve e (fun req ok => …)`: the handler runs in `Async` (it can
  call databases and other services) and returns `.ok res` (status 200) or
  `.error message` (status 500). A body that is not JSON, does not decode, or
  fails `validate` answers status 400 without running it.
- `Endpoint.serve'`: the same, for handlers that do not need the proof.
- `handler routes fallback` is a `Lasm.Fetch` handler: `POST /rpc/<name>` goes
  to the route, `GET /rpc/…` answers 405, everything else to `fallback` (your
  pages, static files).
- `Lasm.Fetch.serve` runs it on every server target: Node (`lasm build`), the
  edge platforms (`--target workers`, `vercel-edge`, `netlify-edge`,
  `deno-deploy`), Bun and Deno, WASI and Fastly Compute ([FETCH.md](FETCH.md)).

## Client

```lean
-- Client.lean
import Lasm.UI
import Lasm.RPC.Client
import Shared

inductive Msg where
  | add (title : String)
  | added (r : Except Lasm.RPC.Error Todo)

def update : Msg → Model → Model × Cmd Msg
  | .add title, m => (m, addTodo.call { title } .added)
  | .added (.ok t), m => ({ m with todos := m.todos.push t }, .none)
  | .added (.error e), m => ({ m with error := some (toString e) }, .none)
```

`Endpoint.call e req handle` is a `Cmd`: it validates `req` (an invalid one
delivers `.error (.invalid message)` at once, without a request), then `POST`s
it to the page's own server (`base` changes the origin) and delivers the
answer: `.ok res`, or `Error.invalid` (the server refused it, 400),
`Error.failed status message`, `Error.decode`, `Error.network`.

## The fullstack template

```sh
lasm init my-app --template fullstack [--deploy fastly --deploy wasi-http …]
cd my-app && npm install
npm run dev          # one URL, http://localhost:3000: the server and the browser app, live reload
npm run build        # dist/public (the browser app), then dist/server (Node) with it embedded
npm start            # the release build on $PORT (3000)
npm run build:workers && npx wrangler deploy   # Cloudflare Workers (workers/; dist/public as assets)
```

| File | |
| --- | --- |
| `Shared.lean` | Data, endpoints, validation and its theorem (a Lake library: `lake build` checks it). |
| `View.lean` | The page (`Lasm.UI`), shared: the server renders it to HTML, the browser keeps it up to date. |
| `Server.lean` | `Lasm.Fetch.serve`: the endpoints, `GET /` rendering the view with the todos embedded as the app's flags (`data-lasm-flags`, `data-lasm-hydrate`), and `dist/public` (the browser app and `public/`) embedded with `embed_dir!`. The todos are kept with `Lasm.KV`. |
| `Client.lean` | The `Lasm.UI` app. It mounts on the server's markup and hydrates it (keeping its nodes), then calls the endpoints. |
| `wrangler.toml` | Workers: the server as a Worker (`workers/worker.mjs`), `dist/public` as static assets (served before the Worker), and a commented-out `TODOS` KV binding. |

### npm run dev: one URL

`npm run dev` is `lasm dev --target node=Server.lean,browser=Client.lean
--output dist/public/client`. It starts one URL (`$PORT`, default 3000): a
small proxy in front of the server program (which runs on a private port).
The server serves the page, the API and the browser app; the proxy adds the
live-reload script to HTML pages and reloads open pages after every rebuild.
There is no separate browser server.

An edit rebuilds only the outputs whose sources import the changed file: a
`Client.lean` edit rebuilds the browser app and keeps the server running
(dev servers read `dist/public` from disk instead of embedding it), a
`Server.lean` edit rebuilds and restarts the server only, and a `View.lean`
or `Shared.lean` edit rebuilds both. A build error keeps the last good build
running and shows the error in the page's console. CI times edit → reload on
linux-x64 ([`fullstack.yml`](../.github/workflows/fullstack.yml), job `dev`,
step summary).

### Static files on every target

```lean
def assets : Assets := embed_dir! "dist/public"   -- Lasm.Fetch.Embed

def main : IO Unit := serve <| assets.wrap <| handler routes fallback
```

`embed_dir! "dir"` (relative to the Lean file) reads the directory when the
server is compiled and puts every file in the program, with its content type
and its `.br` copy when the browser build wrote one (sent to clients that
accept Brotli). Hashed names (`app.1a2b3c4d5e6f.js`) are served as immutable,
the rest with `cache-control: no-cache`. `Assets.wrap` answers `GET`/`HEAD`
for those paths and passes everything else to the handler; `..` and dotfiles
are refused. So one server build serves the whole app on every `Lasm.Fetch`
target, including those without an asset mechanism (Fastly, wasi-http, Deno,
Bun). Workers also serve `dist/public` through `[assets]`, before the Worker
runs. Under `lasm dev` (`LASM_DEV_SERVER` set) nothing is embedded and the
files are read from disk on each request. Build the browser app first (`npm
run build` and every `build:<target>` script do).

| `--deploy` | Build | Run locally |
| --- | --- | --- |
| (Node) | `npm run build` | `npm start` |
| `workers` (always: `wrangler.toml`) | `npm run build:workers` | `npx wrangler dev` |
| Bun, Deno (always) | `npm run build:bun`, `npm run build:deno` | `npm run start:bun`, `npm run start:deno` |
| `vercel-edge` | `npm run build:vercel-edge` (Vercel runs it) | |
| `netlify-edge` | `npm run build:netlify-edge` (Netlify runs it) | |
| `deno-deploy` | `npm run build:deno-deploy` | `deno run -A --unstable-kv deno/main.mjs` |
| `fastly` | `npm run build:fastly` | `fastly compute serve` |
| `wasi-http`, `spin` | `npm run build:wasi-http` | `wasmtime serve wasi-http/main.wasm`, `spin up` |

### Persistence: Lasm.KV

```lean
let kv ← Lasm.KV.open "TODOS"      -- the best store the platform has
kv.put "state" json; let s ← kv.get "state"; kv.delete "state"
```

`Lasm.KV.Store` is three operations (`get`, `put`, `delete` on string keys
and values, in `Async`). `Lasm.KV.open name` picks:

| Platform | Store |
| --- | --- |
| Cloudflare Workers with a KV namespace bound as `name` | Workers KV (`Lasm.KV.workers`) |
| Deno with `--unstable-kv`, Deno Deploy | Deno KV (`Lasm.KV.deno`), keys `[name, key]` |
| Fastly with a KV Store named `name` (`fastly.toml` declares a local one for Viceroy) | Fastly KV Store (`Lasm.KV.fastly`) |
| everything else (Node, Bun, unbound Workers, Vercel and Netlify Edge, wasi-http) | memory (`Lasm.KV.memory`): one copy per process or isolate |

The template stores the whole todo list as one JSON document under the key
`state`, so every backend needs only those three operations. On wasi-http
(and WASI CGI) each request is a new instance, so the memory store does not
outlive a request there: bind a real store for those. Backends that need an
account to test (Vercel KV, Netlify Blobs, Upstash) are not included; call
them from the handlers through `Lasm.JS`.

## Wire format

JSON over HTTP, one `POST` per call: the request body is `toJson req`; the
answer is `{"ok": <toJson res>}` (200) or `{"error": "<message>"}` (400 for
invalid requests, 500 when the handler failed), with `cache-control:
no-store`. Any HTTP client can call an endpoint:

```sh
curl -X POST localhost:3000/rpc/addTodo -d '{"title":"Buy milk"}'
# {"ok":{"done":false,"id":3,"title":"Buy milk"}}
curl -X POST localhost:3000/rpc/addTodo -d '{"title":"   "}'
# {"error":"Write something first."}   (status 400)
```

## What is proved

In `Lasm.RPC`:

```lean
theorem Endpoint.decodeRequest_valid (e : Endpoint Req Res) (h : e.decodeRequest body = .ok r) :
    e.validate r = .ok ()
theorem Endpoint.call_invalid (h : e.validate req = .error m) :
    (e.call req handle base).effects = [.msg (handle (.error (.invalid m)))]
```

`Endpoint.serve` passes the first as the handler's `ok` argument. In the
template: `checkTitle_ok` (an accepted title is non-empty and at most 80
characters once cleaned), `Store.add` requires the proof (so the server can
only store such titles), and `add_invalid` (the browser never sends an invalid
title). The HTTP transport and JSON encoding between them are not proved;
CI tests them end to end.

## API

| Module | |
| --- | --- |
| `Lasm.RPC.Core` | `Endpoint` (`name`, `validate`, `path`, `encodeRequest`, `decodeRequest`, `encodeResponse`, `decodeResponse`), `Error`, `decodeRequest_valid` |
| `Lasm.RPC.Server` | `Endpoint.serve`, `Endpoint.serve'`, `Route`, `handler` |
| `Lasm.RPC.Client` | `Endpoint.call`, `call_invalid` |
| `Lasm.RPC` | all three |
| `Lasm.Fetch.Assets`, `Lasm.Fetch.Embed` | `Assets`, `Assets.serve`, `Assets.wrap`; `embed_dir!` |
| `Lasm.KV` | `Store`, `memory`, `workers`, `deno`, `fastly`, `open` |

CI: [`fullstack.yml`](../.github/workflows/fullstack.yml) builds the template
as `lasm init` writes it, for Node, Workers, Bun, Deno, Fastly and wasi-http,
and runs it end to end in Chromium, Firefox and WebKit against the Node
server and in Chromium against the Worker (`wrangler dev`, local KV), Bun,
Deno (Deno KV) and Fastly (Viceroy, local KV Store), with HTTP checks of the
embedded files and of persistence across restarts, and on `wasmtime serve`;
it also times `npm run dev`'s edit → reload; [`ui.yml`](../.github/workflows/ui.yml) checks that the
template and its theorems elaborate.
