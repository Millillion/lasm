# Lasm documentation

Lasm compiles Lean 4 ahead of time to WebAssembly for Node, Bun, Deno, edge
isolates, WASI hosts and browsers. This page lists every document in the order a
newcomer needs them. Marks: **0.1.0** and **0.2.0** are on npm; **0.3.0** is the
`launch` branch, shipping in the next release.

## 1. Getting started

| Read | For |
| --- | --- |
| [README](../README.md) | What Lasm is, the 60-second start, where it runs, measured numbers, limitations, and the full reference |
| [Getting started](GETTING_STARTED.md) | A Hono server with Lean handlers, an npm package called from Lean, a container, a function platform |
| [The edit loop (`lasm dev`)](DEVELOPER_WORKFLOW.md) | Rebuild-and-restart on save, build errors, several outputs at once (0.3.0) |

## 2. Guides

| Guide | You want to… | Since |
| --- | --- | --- |
| [Servers and npm interop (`Lasm.JS`)](JS_BINDINGS.md) | Call npm packages and Node APIs from Lean; write Express, Hono and Fastify handlers in Lean | 0.1.0 (Fastify 0.3.0) |
| [Serverless and containers](deploy/README.md) | Deploy to AWS Lambda, Lambda@Edge, Vercel, Netlify, Azure Functions, Google Cloud Functions, Docker/Kubernetes, Cloud Run, Fly.io, Railway, Render, Heroku | 0.1.0 |
| [Edge functions](EDGE.md) | Cloudflare Workers, Vercel Edge, Netlify Edge, Deno Deploy, Supabase Edge Functions: the single-threaded profile and its limits | 0.2.0 |
| [Bun and Deno](BUN_DENO.md) | Run the compiler and your programs on Bun or Deno | 0.2.0 |
| [HTTP in pure Lean (`Lasm.Fetch`)](FETCH.md) | One request handler for Node, the edge, Bun, Deno, Fastly, wasi-http and WASI; outbound `fetch`; streaming | 0.3.0 |
| [WASI, wasi-http and Fastly Compute](WASI.md) | Standard WebAssembly with no JavaScript: wasmtime, wasmer, Spin, Fastly | 0.3.0 |
| [Browser apps](BROWSER.md) | `--target browser`, the loader and mount API, `Lasm.Web` (DOM and web APIs), the Vite plugin | 0.3.0 |
| [Frontends in Lean (`Lasm.UI`)](UI.md) | The Elm architecture, `html!` markup, commands, subscriptions, routing, SSR and hydration | 0.3.0 |
| [The whole stack (`Lasm.RPC`)](RPC.md) | A server and a browser app sharing typed endpoints and validation, proved once for both sides | 0.3.0 |
| Verification | What is proved and what is tested: [UI diff](UI.md#what-is-proved), [RPC](RPC.md#what-is-proved), [testing and proving your app](UI.md#testing-and-proving-your-app) | 0.3.0 |
| [Lean IO under Lasm](IO.md) | Files, processes, sockets, threads and their exact behavior on Node | 0.1.0 |
| [Lean packages that work](COMPATIBILITY.md) | Batteries, Aesop, Qq, LSpec, leansqlite and others, tested | 0.1.0 |

## 3. Reference

| Reference | Contents |
| --- | --- |
| [CLI reference](../README.md#cli-reference) | Every command, option and environment variable |
| [Lean support and restrictions](../README.md#lean-support-and-restrictions) | Exactly what a deployed program cannot do (ahead-of-time only) |
| [Where apps run](DEPLOYMENT.md) | Every platform and how CI tests it |
| [Supported build machines](../README.md#supported-environments) | Operating systems, architectures, Node/Bun/Deno versions |
| [Benchmarks](BENCHMARKS.md) | Cold start, size, memory, throughput, interop cost, build and rebuild times, with CI runs |
| [Language coverage](LANGUAGE_COVERAGE.md) | Per-platform language and library results |
| [Node support contract](NODE_SUPPORT.md) | Tool cache locations, requirements and recovery |
| [Installation hardening](INSTALLATION_HARDENING.md) | Retries, offline repair, proxies and private CAs |
| [System Git](MANAGED_GIT.md) | Git for Lake dependencies |
| [License audit](LICENSE_AUDIT.md) | Every distributed component and its license |
| Release notes | [0.1.0](release/0.1.0-notes.md), [0.2.0](release/0.2.0-notes.md) |

## 4. Deploy guides

Servers and functions: [Docker and Kubernetes](deploy/docker-kubernetes.md) ·
[AWS Lambda](deploy/lambda.md) · [Lambda@Edge](deploy/lambda-edge.md) ·
[Vercel](deploy/vercel.md) · [Netlify](deploy/netlify.md) ·
[Azure Functions](deploy/azure-functions.md) ·
[Google Cloud Functions](deploy/cloud-functions.md) ·
[Google Cloud Run](deploy/cloud-run.md) · [Fly.io](deploy/fly.md) ·
[Railway](deploy/railway.md) · [Render](deploy/render.md) ·
[Heroku](deploy/heroku.md) · [DigitalOcean](deploy/digitalocean.md)

Edge (0.2.0): [Cloudflare Workers](deploy/workers.md) ·
[Vercel Edge](deploy/vercel-edge.md) · [Netlify Edge](deploy/netlify-edge.md) ·
[Deno Deploy](deploy/deno-deploy.md) · [Supabase Edge Functions](deploy/supabase-edge.md)

WebAssembly hosts and browsers (0.3.0): [Fastly Compute](deploy/fastly.md) ·
[WASI and Spin](WASI.md) · [static hosting for browser apps](deploy/browser.md)

## 5. Project internals and history

For contributors; not needed to use Lasm. Some pages describe earlier phases
(for example "Node only" or Lean 4.32/4.34) and are kept as records.

- Decisions and plans: [DECISIONS.md](DECISIONS.md) (choices made during launch
  week, with how to undo each), [PLAN.md](PLAN.md), [PROGRESS.md](PROGRESS.md)
- Releasing: [RELEASING.md](RELEASING.md), [0.1.0 gate](release/0.1.0-gate.md),
  [NODE_ACCEPTANCE.md](NODE_ACCEPTANCE.md), [CI_STORAGE.md](CI_STORAGE.md)
- Architecture: [JS interop threading](JS_INTEROP.md),
  [application pipeline](APPLICATION_PIPELINE.md), [runtime](RUNTIME.md),
  [deployment size](BUNDLE_SIZE.md), [toolchain slimming](TOOLCHAIN_SLIMMING.md),
  [toolchain robustness](TOOLCHAIN_ROBUSTNESS.md), [Windows toolchains](WINDOWS_TOOLCHAINS.md)
- Testing: [upstream Lean tests](UPSTREAM_TESTS.md),
  [full suite results](FULL_SUITE_RESULTS.md), [server MVP](SERVER_MVP.md),
  [interop soak](INTEROP_SOAK.md)
- Launch material: [DX audit](launch/DX-AUDIT.md),
  [announcement draft](launch/ANNOUNCEMENT.md), [posts](launch/POSTS.md),
  [demo script](launch/DEMO.md)
