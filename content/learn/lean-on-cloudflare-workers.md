---
title: From zero to Lean on Cloudflare Workers
description: Create a Lean HTTP handler with npm, run it on Node, then build it for Cloudflare Workers and serve it locally with wrangler dev.
date: 2026-11-02
kind: tutorial
order: 1
sources:
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/Millillion/lasm/blob/main/docs/EDGE.md
  - https://github.com/Millillion/lasm/blob/main/docs/FETCH.md
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

- `--template fetch` picks a handler written in pure Lean with `Lasm.Fetch`.
  The same handler serves Node, WASI, Fastly Compute, the edge platforms, Bun
  and Deno.
- `--deploy workers` adds `wrangler.toml` and a `build:workers` script.

This is `Main.lean`, the program:

```lean
/-
An HTTP handler in pure Lean (Lasm.Fetch): the same Main.lean serves Node,
WASI and Spin, Fastly Compute, Cloudflare Workers and the other edge targets,
Bun and Deno.
  GET  /             {"message": "Hello from Lean!"}
  GET  /hello/NAME   {"message": "Hello, NAME, from Lean!"}
  POST /echo         the request body, with its content type
  GET  /health       {"ok": true}
On Node it listens on $HOST (default 0.0.0.0) and $PORT (default 3000).
-/
import App
import Lasm.Fetch
import Lean.Data.Json
open Lasm.Fetch Lean

/-- A JSON body, escaped by `Lean.Json` (a name may contain `"` or `\`). -/
def json (fields : List (String × Json)) : Response := .json (Json.mkObj fields).compress

def handle (req : Request) : Async Response := do
  match req.method, req.segments with
  | "GET", [] => return json [("message", "Hello from Lean!")]
  | "GET", ["hello", name] => return json [("message", App.greet name)]
  | "POST", ["echo"] => return .bytes req.body ((req.header? "content-type").getD "application/octet-stream")
  | "GET", ["health"] => return json [("ok", true)]
  | _, _ => return .notFound

def main : IO Unit := serve handle
```

`handle` takes a `Request` and returns a `Response`. It matches on the method
and the path's segments. `serve handle` runs it on whichever platform the
program was built for.

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
The rest of Lean works. A handler written with `Lasm.Fetch` needs none of
those. [EDGE.md](../../docs/EDGE.md) lists the exact limits.

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
- The same `Main.lean` builds for other platforms with
  `npm create @lasm@latest … -- --template fetch --deploy fastly` (or `vercel-edge`,
  `netlify-edge`, `deno-deploy`, `wasi-http`, `spin`). See the
  [README's platform table](../../README.md#where-it-runs-and-the-evidence).
- [Call an npm package from Lean with Lasm.JS](npm-package-from-lean.md) is
  the next tutorial.
