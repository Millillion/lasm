# Cloudflare Workers

Status: **supported from 0.2.0** (Phase 7.2). CI tests it with `wrangler dev`, which runs
workerd (Cloudflare's runtime) locally
([`workers.yml`](../../.github/workflows/workers.yml)). Nothing is deployed to a
Cloudflare account. The design, limits and measurements are in
[EDGE.md](../EDGE.md).

## Build

```sh
npx lasm init my-app --template hono --deploy workers
cd my-app && npm install
npm run build:workers        # lasm build Main.lean --target workers → workers/
npx wrangler dev             # serves workers/worker.mjs locally
npx wrangler deploy          # your account; Lasm never runs this
```

`--deploy workers` writes three things:

- `wrangler.toml`, with `main = "workers/worker.mjs"` and a `CompiledWasm` rule
  for `program.wasm`;
- the `build:workers` script;
- `"lasm": { "edge": { "exclude": ["@hono/node-server"] } }` in
  `package.json`.

The same `Main.lean` serves Node (`npm run dev`) and Workers. It builds the Hono
app, then branches on `Lasm.JS.onEdge`:

```lean
  if ← onEdge then
    exportDefault app   -- the Worker's fetch handler
    return
  -- Node: serve with @hono/node-server …
```

## What `lasm build --target workers` writes

| Path | Contents |
| --- | --- |
| `workers/worker.mjs` | Generated entry. It imports the program and the npm modules of your `Lasm.JS` bindings, starts Lean once per isolate in the global scope, and calls the handler `main` published with `Lasm.JS.exportDefault`. A stopped instance is replaced on the next request. |
| `workers/lasm/program.wasm`, `program.mjs` | The Lean program: no threads, 32-bit memory, JSPI. |
| `workers/lasm/edge-*.mjs` | The pure-JavaScript host (web-standard APIs only). |
| `workers/wrangler.toml` | Only when the project has no wrangler configuration. |
| `workers/build-info.json`, `THIRD_PARTY_NOTICES.txt` | Build record and notices. |

Lasm owns `workers/` and replaces it on every build. Requirements:

- **The edge runtime.** It ships inside `@lasm/cli` (`targets/lean-4.35.0-wasm64-edge/`,
  about 1.7 MB of the package), so edge builds download nothing more. A source
  checkout fetches the release archive pinned in `src/edge-runtimes.json`
  (tag `lean-4.35.0-edge-v2`, once that release is public), checked by SHA-256; `LASM_EDGE_RUNTIME` overrides
  both (CI uses the [`edge-runtime.yml`](../../.github/workflows/edge-runtime.yml) output).
- **No Emscripten SDK.** The edge link runs on the Node link driver with the
  link toolchain that Node builds already download. The linked program is
  cached, so an unchanged edge build takes seconds.

## Modules

- **Bindings.** Modules named in bindings (`@[js "hono" "new Hono"]`) are
  imported automatically. Wrangler resolves them from `node_modules` and
  bundles them.
- **Dynamic `require`.** Modules that Lean loads with
  `Lasm.JS.require "name"` must be listed in `"lasm": { "edge": { "modules":
  ["name"] } }`.
- **Excluded modules.** Modules in `"exclude"` are left out. An excluded
  module fails clearly if called.

## Limits (measured; [EDGE.md](../EDGE.md))

| | This build | Workers Free plan | Workers Paid plan |
| --- | --- | --- | --- |
| Bundle | Hono template: 1.4 MiB (245 KiB gzip); pure-Lean example: 1.7 MiB | 64 MiB uncompressed | 64 MiB uncompressed |
| Memory | about 27 MiB of Wasm memory | 128 MB per isolate | 128 MB per isolate |
| Startup (initializers + `main`) | 50–90 ms | 1 s | 1 s |
| CPU per request | 0.07–0.35 ms for the test routes | 10 ms | 30 s by default, up to 5 min |

Limits: [developers.cloudflare.com/workers/platform/limits](https://developers.cloudflare.com/workers/platform/limits/),
fetched 2026-10-24.

## What works and what does not

See [EDGE.md: Edge profile](../EDGE.md#edge-profile-lean-features).

- **Works:**
  - pure Lean, tasks and `Std.Async`;
  - blocking waits, which suspend with JSPI;
  - `Lasm.JS` interop, including `Async` handlers;
  - `IO.println` (to the Workers log) and `IO.getEnv` (string variables);
  - clocks, random bytes and `Std.Time`. The local zone is UTC, from a
    read-only in-memory file system.
- **Does not work:**
  - files beyond that file system;
  - sockets, `Std.Http` servers, processes and threads.
- **Recursion depth.** About 10,000 non-tail recursive frames fit, compared
  with Node's 1,000,000.
