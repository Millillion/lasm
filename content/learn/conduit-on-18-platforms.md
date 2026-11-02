---
title: Conduit on 18 platforms, tested with each platform's local tooling
description: One Lean app, the RealWorld Conduit, built for 18 platforms. How CI serves each one locally and runs RealWorld's official API and browser suites.
date: 2026-11-02
kind: platform
sources:
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/README.md
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/Millillion/lasm/blob/main/ROADMAP.md
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/conduit.yml
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/conduit-platforms.yml
  - https://github.com/Millillion/lasm/pull/24
  - https://github.com/Millillion/lasm/pull/29
  - https://github.com/Millillion/lasm/pull/39
aiGenerated: true
---

# Conduit on 18 platforms, tested with each platform's local tooling

[Conduit](../../examples/conduit) is the RealWorld app, a Medium clone,
written entirely in Lean. The REST API, the server-rendered browser app and
the proofs are all Lean. The same Lean runs on 18 platforms. On each one, CI
checks it with RealWorld's own test suites.

## The rule: local tooling, no accounts

CI never deploys to a real cloud account. "Tested on a platform" means CI
built Conduit the way that platform builds it, and served it with the
platform's own runtime, container image or local emulator. Then it ran two
official suites against it:

- **The API suite:** RealWorld's Hurl suite, unmodified, 13 files and 154
  requests.
- **The end-to-end suite:** RealWorld's Playwright suite, in its `fullstack`
  mode, which drives everything through the UI. That is 74 tests, with no
  retries. On Node it runs on Chromium, Firefox and WebKit. On every other
  platform it runs on Chromium.

`test/realworld` holds RealWorld's `specs/` at a pinned commit, byte for byte,
and CI checks it against upstream. Each platform is one CI job, in
[conduit.yml](../../.github/workflows/conduit.yml) (Node, Bun and Workers) or
[conduit-platforms.yml](../../.github/workflows/conduit-platforms.yml) (the
other 15).

## The 18 platforms

| Platform | Build | Served in CI by | Store |
| --- | --- | --- | --- |
| Node 24 and 26 | `npm run build` | `node dist/server/main.mjs` | `node:sqlite`, a file |
| Bun 1.4.4 | `npm run build:bun` | `bun bun/main.mjs` | `bun:sqlite`, a file |
| Deno 2.9.6 | `npm run build:deno` | `deno run -A deno/main.mjs` | `node:sqlite`, a file |
| Docker | `npm run build:docker` | `docker run`, read-only, 512 MB | `node:sqlite` on a volume |
| AWS Lambda (.zip) | `npm run build:lambda` | AWS SAM CLI `sam local start-api` | `node:sqlite` in `/tmp` |
| AWS Lambda (container image) | `npm run build:lambda-image` | `sam local start-api` | `node:sqlite` in `/tmp` |
| Vercel Functions | `vercel build` | Vercel's Node launcher in AWS's Lambda Node 24 image | `node:sqlite` in `/tmp` |
| Netlify Functions | `netlify build --offline` | the bundled function in AWS's Lambda Node 24 image | `node:sqlite` in `/tmp` |
| Azure Functions | `npm run build:azure` | Azure Functions Core Tools `func start` | `node:sqlite`, temporary directory |
| Google Cloud Functions | `npm run build:gcf` | the Functions Framework | `node:sqlite`, temporary directory |
| Cloudflare Workers | `npm run build:workers` | `wrangler dev` (workerd) | Cloudflare D1 (local) |
| Vercel Edge | `vercel build` | Vercel's `edge-runtime` package | memory |
| Netlify Edge | `netlify build --offline` | the edge function in Deno, with Netlify Blobs' local server | Netlify Blobs (local) |
| Deno Deploy | `npm run build:deno-deploy` | `deno run -A --unstable-kv deno/main.mjs` | Deno KV (local) |
| Supabase Edge Functions | `npm run build:supabase-edge` | the Supabase CLI, `supabase functions serve` | Postgres |
| Fastly Compute | `npm run build:fastly` | Viceroy 0.21.1 | Fastly KV Store (local) |
| wasi-http on wasmtime | `npm run build:wasi-http` | `wasmtime serve` 49.0.4 | Postgres through PostgREST |
| wasi-http on Spin | `npm run build:wasi-http` | `spin up` 4.2.2 | Postgres through PostgREST |

The full table, with the exact files and versions, is in
[Conduit's README](../../examples/conduit/README.md#platforms).

## What changes between platforms

The Lean code is the same everywhere: the endpoints, the validation, the page
rendering and the browser app. Only two things change:

- **The store binding.** Each platform has one small module that runs the
  app's SQL statements on that platform's store. That is SQLite where the
  platform has it (`node:sqlite`, D1, `bun:sqlite`). Otherwise it is the
  platform's key-value store (Deno KV, Netlify Blobs, Fastly KV) or Postgres
  (Supabase, wasi-http).
- **Where the data lives.** The Node function platforms (Lambda, Vercel,
  Netlify Functions, Azure, Google Cloud Functions) give a function a
  temporary directory. So in this example each instance there has its own
  database, which the platform may discard. Vercel Edge keeps the data in
  memory, per isolate. For lasting data on those platforms, the README
  describes writing a store over a hosted database.

## Why test this way

Local tooling runs the build output that would be deployed, on the
platform's own runtime. For example, workerd runs the Worker, Viceroy runs the
Fastly Compute module, and AWS's Lambda image runs the Lambda function. Running the official suites there catches mistakes in
how Lasm packages an app for each platform. It needs no cloud account, so it
can run on every change.

It does not test production: a real account's limits, networking or
deployment. That is the line Lasm's README draws for every platform
([Where it runs, and the evidence](../../README.md#where-it-runs-and-the-evidence)).

Conduit reached all 18 platforms in pull requests
[#24](https://github.com/Millillion/lasm/pull/24),
[#29](https://github.com/Millillion/lasm/pull/29) and
[#39](https://github.com/Millillion/lasm/pull/39).
