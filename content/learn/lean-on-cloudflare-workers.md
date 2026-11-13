---
title: From zero to Lean on Cloudflare Workers
description: Create a Lean HTTP handler with npm, run it on Node, then build it for Cloudflare Workers and serve it locally with wrangler dev.
date: 2026-11-02
kind: tutorial
order: 1
sources:
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/Millillion/lasm/blob/main/docs/EDGE.md
  - https://github.com/Millillion/lasm/blob/main/docs/JS_BINDINGS.md
  - https://github.com/Millillion/lasm/blob/main/templates/fetch/Main.lean
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/content.yml
aiGenerated: true
---

# From zero to Lean on Cloudflare Workers

In this tutorial you write no setup code. You create a Lean project with npm,
run its HTTP handler on Node, and then build the same handler for Cloudflare
Workers and serve it locally with `wrangler dev`.

You need Node.js 24 or newer and npm. You don't need Lean or elan: on the
first build, Lasm downloads Lean 4.35.0 and its build tools (a few hundred MB,
cached for later builds).

CI runs every command on this page, and checks every output it shows
([how](../README.md#tutorials)). The finished project is in
[`content/tutorials/lean-on-cloudflare-workers/project`](../tutorials/lean-on-cloudflare-workers/project/).

## 1. Create the project

```sh
npm create @lasm@latest hello-workers -- --template fetch --deploy workers
cd hello-workers
```

`npm create @lasm` runs `lasm init` from `@lasm/cli`:

- `--template fetch` picks a handler written in Lean on the web's own
  `Request` and `Response` (`Lasm.JS.Web`). The same handler serves Node,
  Cloudflare Workers and the other edge platforms, Bun and Deno.
- `--deploy workers` adds `wrangler.toml` and a `build:workers` script.

This is `Main.lean`, the program:

```lean
/-
An HTTP handler in Lean on the web's own `Request` and `Response`
(Lasm.JS.Web): the same Main.lean serves Bun, Deno, Cloudflare Workers and the
other edge targets, and Node (through Lasm.Fetch's Node server, for now).
  GET  /             {"message": "Hello from Lean!"}
  GET  /hello/NAME   {"message": "Hello, NAME, from Lean!"}
  POST /echo         the request body, with its content type
  GET  /health       {"ok": true}
On Node it listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.JS.Web
import Lasm.Fetch
import Lean.Data.Json
open Lasm.JS Lasm.JS.Web Lean

/-- Decodes `%XX` escapes; text that is not valid UTF-8 afterwards is kept as it was. -/
def percentDecode (s : String) : String := Id.run do
  let hex (b : UInt8) : Option UInt8 :=
    if 48 ≤ b && b ≤ 57 then some (b - 48) else if 65 ≤ b && b ≤ 70 then some (b - 55)
    else if 97 ≤ b && b ≤ 102 then some (b - 87) else none
  let bytes := s.toUTF8
  let mut out := ByteArray.empty
  let mut i := 0
  while i < bytes.size do
    if bytes[i]! == 37 && i + 2 < bytes.size then
      if let (some h, some l) := (hex bytes[i + 1]!, hex bytes[i + 2]!) then
        out := out.push (h * 16 + l); i := i + 3; continue
    out := out.push bytes[i]!
    i := i + 1
  return (String.fromUTF8? out).getD s

/-- A response with a status, a content type and a body. -/
def reply (status : Nat) (contentType : String) (body : ByteArray) : IO Response :=
  Response.new (some (.bufferSource body))
    (some { status := some status, headers := some (.record ⟨#[("content-type", contentType)]⟩) })

/-- A JSON body, escaped by `Lean.Json` (a name may contain `"` or `\`). -/
def json (fields : List (String × Json)) : IO Response :=
  reply 200 "application/json" (Json.mkObj fields).compress.toUTF8

def handle (request : Request) : Async Response := do
  -- The URL's path, as the runtime's URL parser resolved it (`/a/../b` is `/b`).
  let path ← (← URL.new (← request.url)).pathname
  let segments := (path.splitOn "/").filter (· ≠ "") |>.map percentDecode
  let method ← request.method
  match (if method == "HEAD" then "GET" else method), segments with
  | "GET", [] => json [("message", "Hello from Lean!")]
  | "GET", ["hello", name] => json [("message", App.greet name)]
  | "POST", ["echo"] =>
    let contentType := (← (← request.headers).get "content-type").getD "application/octet-stream"
    reply 200 contentType (← request.arrayBuffer)
  | "GET", ["health"] => json [("ok", true)]
  | _, _ => reply 404 "text/plain; charset=utf-8" "Not Found\n".toUTF8

/-- Node: `handle` on Lasm.Fetch's Node server ($HOST:$PORT, SIGTERM closes it),
until Lasm's own Node server (`Node.serve`) ships: the program's one use of
Lasm.Fetch. Each request and response is converted to and from the web's own. -/
def serveNode : IO Unit := Lasm.Fetch.serveNode fun req => do
  let headers : HeadersInit := .sequence (req.headers.map fun (k, v) => #[k, v])
  let body : Option BodyInit := if req.body.isEmpty then none else some (.bufferSource req.body)
  let r ← handle (← Request.new (.usvString req.url) (some { method := some req.method, headers := some headers, body }))
  return { status := (← r.status).toUInt16, headers := ← (← r.headers).entries, body := ← r.arrayBuffer }

def main : IO Unit := do
  -- Bun, Deno, Cloudflare Workers and the other edge targets serve the
  -- program's default export (Workers' `export default {fetch}`).
  if ← onEdge then
    exportDefault (← Function.ofFn1 handle)
  else serveNode
```

`handle` takes the web's `Request` and returns a `Response`, the types
`fetch` uses (their names and methods are the standards', so MDN documents
them). It matches on the method and the path's segments. On Workers and the
other edge platforms, `main` publishes it as the program's default export,
which the platform calls for each request; on Node, `serveNode` runs it on a
server listening on port 3000.

The pure logic lives in `App.lean`. It has no JavaScript in it, so Lean can
also check it natively:

```lean
/-! Pure Lean: no JavaScript, so `lake build` can also test it natively. -/

namespace App

def greet (name : String) : String :=
  s!"Hello, {name}, from Lean!"

end App
```

## 2. Run it on Node

```sh
npm install
npm run build
npm start
```

- `npm install` installs `@lasm/cli`, the only dependency. It is a dev
  dependency, so it isn't deployed.
- `npm run build` compiles the Lean to WebAssembly and writes `dist/`.
- `npm start` runs `node dist/main.mjs`, which listens on port 3000.

In another terminal:

```sh
curl http://localhost:3000/hello/Ada
```

```json
{"message":"Hello, Ada, from Lean!"}
```

Stop the server with Ctrl-C.

## 3. Build for Workers

`lasm init` wrote `wrangler.toml`:

```toml
# Cloudflare Workers (Lasm edge build): npm run build:workers
# writes workers/; test with npx wrangler dev, deploy with npx wrangler deploy.
name = "hello-workers"
main = "workers/worker.mjs"
compatibility_date = "2026-10-01"

# Lasm's program.wasm is imported as a precompiled module.
[[rules]]
type = "CompiledWasm"
globs = ["**/*.wasm"]
fallthrough = false
```

Build the Worker:

```sh
npm run build:workers
```

This runs `lasm build Main.lean --target workers`, which writes `workers/`.
That directory holds the Worker entry (`workers/worker.mjs`), the Lean program
as `program.wasm`, and its host. `wrangler.toml` points at the entry.

On Workers, Lean runs single-threaded, without files, sockets or processes.
The rest of Lean works, and the handler needs none of those. [EDGE.md](../../docs/EDGE.md) lists the exact limits.

## 4. Serve it with wrangler

```sh
npx wrangler dev
```

`wrangler dev` serves the Worker locally on port 8787, in workerd, the runtime
Cloudflare Workers use. In another terminal:

```sh
curl http://localhost:8787/
curl http://localhost:8787/hello/Ada
curl http://localhost:8787/health
```

```json
{"message":"Hello from Lean!"}
{"message":"Hello, Ada, from Lean!"}
{"ok":true}
```

These are the same answers as on Node, from the same `Main.lean`.

CI runs this step with wrangler 4.152.0, the version Lasm's other workflows
pin. It uses local workerd only, with no account and no deployment. To deploy,
`npx wrangler deploy` uploads `workers/` to your Cloudflare account. We don't
test deployments; Cloudflare's wrangler documentation covers that step.

## Next

- Add a route: add a case to `handle`, such as
  `| "GET", ["time"] => …`, and rebuild.
- The same `Main.lean` builds for the other edge platforms with
  `npm create @lasm@latest … -- --template fetch --deploy vercel-edge` (or
  `netlify-edge`, `deno-deploy`). `--deploy fastly`, `wasi-http` and `spin`
  add a program with the same routes on that platform's own interface
  (`Fastly.lean`, `WasiHttp.lean`). See the
  [README's platform table](../../README.md#where-it-runs-and-the-evidence).
- [Call an npm package from Lean with Lasm.JS](npm-package-from-lean.md) is
  the next tutorial.
