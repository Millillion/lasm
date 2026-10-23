# Getting started: a Lean web server on Node

This guide goes from an empty machine with Node.js to a running web server whose
request handlers are written in Lean, then calls an npm package from Lean, then
deploys the server in a container. Every command and every file below is complete;
copy them as they are. CI runs these exact steps on Linux, macOS and Windows
([`scripts/templates/run-templates.mjs`](../scripts/templates/run-templates.mjs)).

**Status (current source, 2026-10-23).** `lasm init` is in current source and not yet
in an accepted candidate, and `@lasm/cli` is **not published to npm yet**. Until it
is, use a candidate tarball as shown in [Before npm publication](#before-npm-publication).

## 1. Prerequisites

- **Node.js 24 or newer, with npm.** Nothing else: Lasm downloads Lean and its own
  build tools on the first build (a few hundred MB; later builds reuse them).
- Linux or macOS on x86-64 or ARM64, or Windows on x86-64.
- For step 4, Docker.

```sh
node --version   # v24.0.0 or newer
```

## 2. Create and run a Hono server with Lean handlers

```sh
npx @lasm/cli init my-app --template hono
cd my-app
npm install
npm run dev
```

`npm run dev` builds the program and starts it (`lasm Main.lean`). The first build
takes a few minutes while Lasm downloads Lean; then it prints
`Listening on http://0.0.0.0:3000 (Hono)`. In another terminal:

```sh
curl http://localhost:3000/hello/Ada
# {"message":"Hello, Ada, from Lean!"}
curl -X POST http://localhost:3000/echo -H 'content-type: application/json' -d '{"n":1}'
# {"echo":{"n":1}}
```

Stop it with Ctrl+C. The project contains:

| File | What it is |
| --- | --- |
| `Main.lean` | The Hono app: routes and Lean request handlers. |
| `App.lean` | Pure Lean logic (`App.greet`). It does not use JavaScript, so `lake build App` checks it natively. |
| `lakefile.toml`, `lean-toolchain` | An ordinary Lake project, pinned to Lean 4.35.0. |
| `package.json` | `dev`, `build` and `start` scripts, Hono, and Lasm as a dev dependency. |
| `Dockerfile`, `.dockerignore`, `.gitignore`, `README.md` | Container build, ignores, and the project's own instructions. |

How a Lean handler works (`Main.lean` from the template):

- `@[js "hono" "new Hono"] opaque newHono : IO Value` binds a JavaScript export to a
  Lean name. Lasm generates the glue from the Lean type and checks at build time
  that the export exists.
- `Function.ofFnReply` turns a Lean function into a JavaScript function. Hono
  calls it with its context `c`; the Lean code reads the request
  (`c.req.param("name")`) and answers `Function.Reply.callMethod c "json" #[body]`: the host
  calls `c.json(body)` as part of the reply and Hono gets its `Response`. Each call
  runs as a Lean task, so handlers can block, await promises and make further
  JavaScript calls. Every JavaScript call from Lean is a round trip to Node's main
  thread, so handlers make as few as they can (see [performance](#which-http-server-to-use)).
- `waitForever` keeps `main` running while Node serves requests.

The full API (values, conversions, `deriving ToJS, FromJS`, callbacks, errors,
costs) is in [JS_BINDINGS.md](JS_BINDINGS.md).

**Prefer Express?** `npx @lasm/cli init my-app --template express` creates the same
server on Express 5 (`app.get(path, (req, res) => …)` with Lean handlers).
`--template std-http` creates it in pure Lean with `Std.Http`, and `--template plain`
a command-line program. See [which HTTP server to use](#which-http-server-to-use).

## 3. Call an npm package from Lean

Add [marked](https://www.npmjs.com/package/marked), a Markdown renderer:

```sh
npm install marked@18.0.14
```

Replace `Main.lean` with this complete file. It adds one binding (`renderMarkdown`)
and one route (`POST /render`) to the template:

<!-- guide:Main.lean -->
```lean
import App
import Lasm.JS
open Lasm.JS

/-- `new Hono()` -/
@[js "hono" "new Hono"] opaque newHono : IO Value
/-- `serve(options, listening)` from @hono/node-server; returns the Node server. -/
@[js "@hono/node-server" "serve"] opaque serve : Data → Value → IO Value
/-- `marked.parse(markdown)`: Markdown to HTML. -/
@[js "marked" "parse"] opaque renderMarkdown : String → IO String

/-- A Hono handler `(c) => Response` written in Lean. -/
def handler (f : Value → IO Function.Reply) : IO Value :=
  Function.ofFnReply fun args => do
    let .ref c _ := args[0]! | throw (IO.userError "expected a Hono context")
    f c

/-- `c.json(body, status)`: the `Response` the handler returns, made by the host
as the reply (one host round trip fewer than calling it from Lean). -/
def json (c : Value) (body : Data) (status : Nat := 200) : IO Function.Reply :=
  return .callMethod c "json" #[body, toJS status]

def main : IO Unit := do
  let app ← newHono
  let route (method path : String) (f : Value → IO Function.Reply) : IO Unit := do
    let _ : Value ← app.callMethod method #[toJS path, toJS (← handler f)]
  route "get" "/" fun c => json c (obj [("message", toJS "Hello from Lean on Hono!")])
  route "get" "/hello/:name" fun c => do
    let name ← (← c.get "req").callMethod "param" #[toJS "name"] String
    json c (obj [("message", toJS (App.greet name))])
  route "post" "/echo" fun c => do
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    json c (obj [("echo", body)])
  -- POST /render {"markdown": "# Hi"} → {"html": "<h1>Hi</h1>\n"}
  route "post" "/render" fun c => do
    let body ← (← c.get "req").callMethodAwait "json" #[] Data
    match body.field "markdown" with
    | .string markdown => json c (obj [("html", toJS (← renderMarkdown markdown))])
    | _ => json c (obj [("error", toJS "expected {\"markdown\": \"…\"}")]) 400
  route "get" "/health" fun c => json c (obj [("ok", toJS true)])

  let host := (← IO.getEnv "HOST").getD "0.0.0.0"
  let port := ((← IO.getEnv "PORT").bind String.toNat?).getD 3000
  let listening ← Function.ofFn fun _ => do
    IO.println s!"Listening on http://{host}:{port} (Hono)"
    (← IO.getStdout).flush
    return .undefined
  let server ← serve (obj [("fetch", toJS (← app.get "fetch")), ("port", toJS port), ("hostname", toJS host)]) listening

  -- Containers and platforms stop the app with SIGTERM: finish open requests, then exit.
  let process ← require "node:process"
  let exit ← Function.ofFn fun _ => do
    let _ : Value ← process.callMethod "exit" #[toJS 0]
    return .undefined
  let stop ← Function.ofFn fun _ => do
    let _ : Value ← server.callMethod "close" #[toJS exit]
    return .undefined
  for signal in ["SIGTERM", "SIGINT"] do
    let _ : Value ← process.callMethod "once" #[toJS signal, toJS stop]
  waitForever
```

Run it and try the new route:

```sh
npm run dev
curl -X POST http://localhost:3000/render -H 'content-type: application/json' -d '{"markdown":"# Hi from *Lean*"}'
# {"html":"<h1>Hi from <em>Lean</em></h1>\n"}
```

The pattern for any npm package: `npm install` it, declare one `@[js "package"
"export"]` line per function you call, and call it like a Lean function. A
returned promise is awaited; use a `Value` result for objects whose methods you
call (`callMethod`, `get`). `lasm build` copies the production dependencies into
`dist/node_modules`. A misspelled export stops the build with
`Lasm.JS binding check failed`.

## 4. Build and deploy in a container

```sh
npm run build        # writes dist/: the complete deployment
npm start            # runs it with Node only (node dist/main.mjs)
```

`dist/` contains the WebAssembly program, its Node launcher and the production
`node_modules`. Copy it to a machine with Node 24+ and the same OS and
architecture, or use the generated `Dockerfile`:

```sh
docker build -t my-app .
docker run --rm -p 8080:8080 my-app
curl http://localhost:8080/hello/Ada
```

The image builds with Lasm in a first stage and runs on `node:24-bookworm-slim`
as the unprivileged `node` user. It listens on `0.0.0.0` and `$PORT` (8080 in the
image; platforms that assign a port override it), and exits cleanly on SIGTERM. Give it at least 512 MB of memory. Build it
on the architecture you deploy to; for amd64-only platforms on an ARM Mac, use
`docker build --platform linux/amd64 -t my-app .`.

Recipes for each launch platform: [deployment guides](deploy/README.md)
(Docker and Kubernetes, Google Cloud Run, Fly.io, Railway, Render, Heroku, and
AWS Lambda as a container image: create the project with `--deploy lambda` to
get a `Dockerfile.lambda`, see [lambda.md](deploy/lambda.md)).

## Which HTTP server to use

| | Express or Hono with Lean handlers (`--template express`, `hono`) | `Std.Http` (`--template std-http`) |
| --- | --- | --- |
| Use for | **Production HTTP services on Node.** | Pure-Lean code that must also build natively, or that is shared with native Lean servers. |
| Throughput ([benchmark runner](BENCHMARKS.md), 4-CPU Linux x64; plain Node `http`: about 54,000 req/s) | about 9,700 (Hono, 0.18× plain Node) and 6,300 (Express, 0.12×) requests per second | about 660 requests per second (0.01×) |
| Node ecosystem (middleware, npm packages) | yes | through `Lasm.JS` calls only |
| Runs natively (`lake build`) | `App.lean` only | yes |

`Std.Http` under Lasm is supported and passes the same load, fault and soak tests as
native Lean, but each request costs about 29 host round trips between the Lean
thread and Node's main thread (sockets, timers, the `Date` header); with Express
or Hono, Node does the HTTP work and Lean runs only the handler (about 4 round
trips). Details: [Std.Http performance](SERVER_MVP.md#launch-position-2026-10-23).

## Before npm publication

`@lasm/cli` is not on npm yet. With a candidate tarball from a maintainer
(`lasm-compiler-<version>.tgz`; see the [acceptance report](NODE_ACCEPTANCE.md)):

```sh
npx --package ./lasm-compiler-<version>.tgz lasm init my-app --template hono
cd my-app
npm install -D ../lasm-compiler-<version>.tgz   # instead of plain npm install
npm run dev
```

For the Docker build, copy the tarball into the project first and install it from
there (`npm install -D ./lasm-compiler-<version>.tgz`), so that it is inside the
build context (the Dockerfile copies the whole project before `npm ci`).

## Next steps

- [JS_BINDINGS.md](JS_BINDINGS.md): every interop rule, with Express, Hono, `pg`,
  `jose` and `fetch` examples.
- [examples/js-crud](../examples/js-crud): a to-do API with Postgres and JWTs on
  Express and Hono.
- [COMPATIBILITY.md](COMPATIBILITY.md): Lean packages and npm packages tested with Lasm.
- [README](../README.md): every CLI command and option, supported environments and
  the exact Lean capabilities a deployed program cannot use.
