# Deno Deploy (experimental)

Status: **experimental, unreleased** (Phase 7.4, planned for 0.2.0). It is not in
any candidate or in 0.1.0. Nothing is deployed to a Deno Deploy account. The
design and limits are in [EDGE.md](../EDGE.md).

## Build

```sh
npx lasm init my-app --template hono --deploy deno-deploy
cd my-app && npm install
npm run build:deno-deploy    # lasm build Main.lean --target deno-deploy → deno/
deno task start:deno         # deno run -A deno/main.mjs (PORT, default 8000)
```

On Deno Deploy, set the entrypoint to `deno/main.mjs`. Either let Deploy run
`npm run build:deno-deploy` as the build command, or build locally and deploy
the project with `deno/` in it. Bare imports (`hono`) resolve from the
project's `package.json`, as with the Deno CLI.

## What the build writes

| Path | Contents |
| --- | --- |
| `deno/main.mjs` | The generated entrypoint. It reads `lasm/program.wasm`, starts Lean, and serves the handler published with `Lasm.JS.exportDefault` with `Deno.serve`. A stopped instance is replaced. |
| `deno/lasm/` | The program and the pure-JS host. |
| `deno/build-info.json`, `THIRD_PARTY_NOTICES.txt` | Build record and notices. |

Lasm owns `deno/` and replaces it on every build.

## Testing without an account

CI ([`workers.yml`](../../.github/workflows/workers.yml)) runs
`deno run -A deno/main.mjs` with the pinned Deno CLI and checks every route,
including stopping and replacing the instance. Deno Deploy runs the Deno
runtime, so this is close. It does not reproduce Deploy's Deno version or its
isolate limits.

Measured locally: the Hono template's `deno/` is 1.50 MiB. The first response
comes about 110 ms after process start, then about 0.8 ms per request over HTTP.

Lean features are those of the edge profile:
[EDGE.md: Edge profile](../EDGE.md#edge-profile-lean-features).

## Supabase Edge Functions

Not supported. Supabase's edge runtime (v1.77.8, V8 11.6) has no JSPI. See
[EDGE.md](../EDGE.md#phase-74-status-deno-deploy-supabase-edge-functions-not-supported).
