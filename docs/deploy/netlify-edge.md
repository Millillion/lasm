# Netlify Edge Functions

Status: **supported from 0.2.0** (Phase 7.3). Nothing is deployed to a Netlify account. For a full
Node process on Netlify, use [netlify.md](netlify.md). The design and limits
are in [EDGE.md](../EDGE.md).

## Build

```sh
npx lasm init my-app --template hono --deploy netlify-edge
cd my-app && npm install
npm run build:netlify-edge   # lasm build Main.lean --target netlify-edge
npx netlify dev --offline    # Netlify's local edge runtime (Deno)
npx netlify deploy --build   # your account; Lasm never runs this
```

`--deploy netlify-edge` writes `netlify.toml`, which makes Netlify run
`npm run build:netlify-edge`, and an empty `public/`. The same `Main.lean`
serves Node and the edge (`Lasm.JS.onEdge`).

## What the build writes

| Path | Contents |
| --- | --- |
| `netlify/edge-functions/lasm.mjs` | The generated edge function, serving every path (`export const config = { path: '/*' }`). It is replaced only if Lasm generated it. |
| `netlify/lasm/` | The program, with the Wasm embedded as a JavaScript module (`program.wasm.mjs`) because Netlify's Deno bundler carries only JavaScript, plus the host, `build-info.json` and notices. Lasm owns this directory. |

## Testing without an account

CI ([`workers.yml`](../../.github/workflows/workers.yml)) runs
`netlify build --offline`, which makes the eszip that Netlify deploys with
Netlify's own bundler. It then runs `netlify dev --offline --no-open`, which
serves the function in Netlify's local edge runtime (the Deno CLI), and checks
every route. This is close to production, but it is not Netlify's hosted Deno.

`netlify dev` opens a browser unless it gets `--no-open`. Keep the flag in
scripts and CI.

## Limits

| | This build | Netlify Edge |
| --- | --- | --- |
| Code | eszip: Hono template 1.82 MiB; pure-Lean example 2.20 MiB | 20 MB compressed |
| Memory | about 27 MiB of Wasm memory | 512 MB |
| CPU per request | well under 1 ms for the test routes | 50 ms |

Lean features are those of the edge profile:
[EDGE.md: Edge profile](../EDGE.md#edge-profile-lean-features).
