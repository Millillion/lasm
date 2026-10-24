# Vercel Edge Functions (experimental)

Status: **experimental, unreleased** (Phase 7.3, planned for 0.2.0). It is not in
any candidate or in 0.1.0. Nothing is deployed to a Vercel account. For a full
Node process on Vercel, use [vercel.md](vercel.md). Vercel itself recommends its
Node runtime over the edge runtime. The design and limits are in
[EDGE.md](../EDGE.md).

## Build

```sh
npx lasm init my-app --template hono --deploy vercel-edge
cd my-app && npm install
npm run build:vercel-edge    # lasm build Main.lean --target vercel-edge
npx vercel deploy            # your account; Lasm never runs this
```

`--deploy vercel-edge` writes `vercel.json`. Vercel runs
`npm run build:vercel-edge`, and every path is routed to `/api/lasm`.
`public/lasm.txt` is there because Vercel refuses an empty output directory.
The same `Main.lean` serves Node and the edge (`Lasm.JS.onEdge`, as in
[workers.md](workers.md)).

## What the build writes

| Path | Contents |
| --- | --- |
| `api/lasm.mjs` | The generated function (`export const config = { runtime: 'edge' }`). It imports the Wasm with `?module` and the npm modules of your bindings. Lean starts on the first request, and a stopped instance is replaced. It is replaced only if Lasm generated it. |
| `api/_lasm/` | The program, the pure-JS host, `build-info.json` and notices. Lasm owns this directory. |

Modules work as on Workers: bindings are imported automatically, and
`"lasm": { "edge": { "modules": […], "exclude": […] } }` in `package.json`
adds or removes them.

## Testing without an account

CI ([`workers.yml`](../../.github/workflows/workers.yml)) runs `vercel build`
offline, which produces the function and its traced files. It then bundles the
built function with esbuild and serves it in Vercel's
[`edge-runtime`](https://www.npmjs.com/package/edge-runtime) package. **This is
not fully faithful:** Vercel bundles at deployment, and `vercel dev` needs a
login, so neither the deployed bundle nor Vercel's production V8 (JSPI) is
reproduced.

## Limits

| | This build | Vercel Edge |
| --- | --- | --- |
| Code (gzip) | Hono template 244 KiB; pure-Lean example 301 KiB | 1 MB Hobby, 2 MB Pro, 4 MB Enterprise |
| Memory | about 27 MiB of Wasm memory | not stated |

Lean features are those of the edge profile:
[EDGE.md: Edge profile](../EDGE.md#edge-profile-lean-features).
