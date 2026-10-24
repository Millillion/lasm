# Where Lasm applications run (Phase 5.1)

A Lasm application is the `dist/` directory written by `lasm build`: `main.mjs`,
`program.wasm`, its host code, native support and, with JS/npm interop, the
production `node_modules`. It needs only **Node.js 24 or newer**. This page lists
the platforms it is tested on and how. Every claim is backed by a local runtime,
container image or emulator in Lasm's own CI
([`platform-support.yml`](../.github/workflows/platform-support.yml), part of
every candidate's acceptance). **No claim here comes from a real cloud
deployment**: by project policy, CI uses no cloud accounts. Platform recipes:
[deploy/README.md](deploy/README.md).

Node 24 on Windows x64 and macOS x64 (apps on 24.0.0 and 24.22.1, the compiler
on 24.22.1) passed in [run 40069324836](https://github.com/Millillion/lasm/actions/runs/40069324836)
with candidate `.58`. Status: candidate `.39988013618` (source `d8484c4`) passed this whole matrix,
five-platform installed acceptance, the interop examples and the templates in
[run 39988013618](https://github.com/Millillion/lasm/actions/runs/39988013618);
it also passed the three-run cold-installation gate (runs 39994918847,
39994938810, 39994957491). The same matrix also passed for the
preceding candidate `.56` (run 39977543832).

## Requirements of a built application

| Requirement | Value | Why |
| --- | --- | --- |
| Node.js | **24.0.0 or newer** (24.x and 26.x tested) | The Wasm module uses memory64 and table64 without flags (V8 13.6, Node 24.0.0), shared memory, threads and Wasm exceptions. Node 22 and older stop with `This application requires Node 24.0.0 or newer; you are running Node 22.23.4. Install Node 24 or newer.` |
| OS and CPU | Linux x64 or arm64 with **glibc 2.28 or newer**; plus the build machine's own platform | Every build carries the Linux x64 and arm64 native pieces (koffi and two small helpers), so a build made on macOS, Windows or either Linux deploys to Linux. Another platform stops with `This application includes native support for linux-x64, linux-arm64, darwin-arm64; it is running on … Run it on one of those platforms, or rebuild the Lean source with Lasm on this platform.` |
| glibc | 2.28 (the floor of the official Node 24/26 binaries) | koffi needs 2.25 and Lasm's helpers 2.17. Alpine/musl stops with a message naming musl. |
| Memory | **512 MB or more** (1 GB for real traffic) | A small server uses about 140–200 MB resident. It reserves about 22 GB of *virtual* address space (the 8 GiB Wasm memory maximum, guard regions, worker stacks), which is not memory use; a host that limits virtual memory (`ulimit -v`, `vm.overcommit_memory=2`) will refuse it. |
| Files | read-only is fine | The application writes nothing next to itself; only what your Lean code writes (use `/tmp`). |
| `libatomic1` | needed by **Node 26**'s official binary | Official `node:26-*` images include it. On a minimal image with the Node 26 tarball, install it (`apt-get install -y libatomic1`). Node 24 does not need it. |
| Network | listen on `0.0.0.0` and `$PORT` | Containers and hosting platforms route to all interfaces. The examples and `lasm init` templates read `HOST` (default `0.0.0.0`) and `PORT`. |

A build made on Windows carries the Linux helpers without execute permission
(Windows file systems do not record it). `docker build` from Windows marks every
file executable, so container images work; other copies to Linux (for example a
zip) must restore it (`chmod 755 dist/host/native/process/linux-*`). Only Lean
programs that start subprocesses use that helper.

## Launch support list

| Platform | Tested in CI with | Recipe |
| --- | --- | --- |
| Linux x64 and arm64, Node 24+ | `actions/setup-node` Node 24.0.0, 24.22.1 and 26.12.1 on `ubuntu-24.04` and `ubuntu-24.04-arm`; Node 22.23.4 must refuse | `node dist/main.mjs` |
| macOS (x64, arm64) | the macOS x64 build on `macos-15-intel` with Node 24.0.0 and 24.22.1; the macOS arm64 build on `macos-15` (Node 24.22.1); five-platform installed acceptance on Node 26.12.1 | `node dist/main.mjs` |
| Windows x64 | the Windows build on `windows-2025` with Node 24.0.0 and 24.22.1; five-platform installed acceptance on Node 26.12.1 | `node dist/main.mjs` |
| Docker / Kubernetes | `node:24.22.1-bookworm-slim`, `node:26.12.1-bookworm-slim`, `node:24.20.0-bullseye-slim` (glibc 2.31), `ubuntu:22.04` and `ubuntu:24.04` with the official Node tarballs, all read-only with a 512 MB limit; `deploy/Dockerfile` built and reached over HTTP | [docker-kubernetes.md](deploy/docker-kubernetes.md), [`deploy/Dockerfile`](../deploy/Dockerfile) |
| Google Cloud Run (gen2), Fly.io, Railway, Render, Heroku (container stack) | the same container images (these platforms run your image on Linux x64; Cloud Run gen1's gVisor is untested) | [cloud-run.md](deploy/cloud-run.md), [fly.md](deploy/fly.md), [railway.md](deploy/railway.md), [render.md](deploy/render.md), [heroku.md](deploy/heroku.md) |
| AWS Lambda (container image, x86_64 and arm64) | `public.ecr.aws/lambda/nodejs:24` with the AWS Lambda Web Adapter 1.1.0, invoked through the image's Runtime Interface Emulator with API Gateway (HTTP API) events, read-only with 512 MB; `amazonlinux:2023` (glibc 2.34) with the Node 24 tarball | [lambda.md](deploy/lambda.md), [`deploy/lambda/Dockerfile`](../deploy/lambda/Dockerfile) |

Not yet supported (later phases, see [PLAN.md](PLAN.md)): Lambda zip packages,
Vercel, Netlify, Azure Functions, Google Cloud Functions, DigitalOcean App
Platform (gVisor), Alpine/musl, and isolate platforms (Cloudflare Workers, Vercel
and Netlify Edge, Fastly), which have no threads or native add-ons.

## What the CI matrix runs

Three sample applications, built with the installed candidate exactly as a user
builds them: [`examples/hello`](../examples/hello/Main.lean) (a program) and
[`examples/js-crud`](../examples/js-crud) on Express and on Hono (Postgres through
`pg`, JWT through `jose`; a Postgres 17 container or embedded-postgres supplies
the database). Each server run checks login, authorization failures, creating and
listing records, 404s and 2 seconds of 16 concurrent clients
([`check-crud.mjs`](../scripts/js-interop/check-crud.mjs)).

| Job | Builds run | Where |
| --- | --- | --- |
| build | Linux x64, Windows x64 and macOS x64 (compiler on Node 24.22.1), Linux arm64 (compiler on Node 24.0.0), macOS arm64 (compiler on Node 26.12.1) | native runners |
| native | each runner's own Linux build plus the macOS and Windows builds | Node 24.0.0, 24.22.1, 26.12.1 on x64 and arm64; Node 22.23.4 must refuse every build |
| containers | own Linux build in every image; macOS and Windows builds in Debian 12 and the recipe | Docker on x64 and arm64: `--read-only --tmpfs /tmp --memory=512m --memory-swap=512m`, default seccomp ([`images.json`](../scripts/platform/images.json)) |
| lambda | Linux and macOS builds | Lambda Node 24 image + Lambda Web Adapter through the Runtime Interface Emulator, x64 and arm64 |
| macOS | the macOS arm64 build; the Linux x64 build must refuse macOS clearly | `macos-15`, Node 24.22.1 |
| native-other | the Windows x64 and macOS x64 builds, with the same checks as native | `windows-2025` (the image's PostgreSQL service) and `macos-15-intel` (embedded-postgres), Node 24.0.0 and 24.22.1 |
| compiler-glibc | the compiler itself builds all three applications | `amazonlinux:2023` (glibc 2.34) with the official Node 24 |

Run it locally (Docker; no accounts): build the three applications with
`node scripts/platform/build-apps.mjs CANDIDATE.tgz WORK APPS`, then
`node scripts/platform/run-containers.mjs APPS result.json` and
`node scripts/platform/run-lambda.mjs APPS result.json`.

## The compiler's own requirements

The compiler (`npx lasm …`) runs on Node 24 or newer (candidates are tested on
Node 24.22.1 and 26.12.1; the platform matrix builds with 24.0.0 on Linux arm64 and
with 24.22.1 on Linux x64, Windows x64 and macOS x64) on the
five build platforms in the [README](../README.md#supported-environments). On
Linux it needs **glibc 2.34 or newer**. The floor was set by the formerly bundled
Git (dugite-native 2.53.0, GLIBC_2.34; Lasm now uses the system Git, needed only for
Lake projects with dependencies); Lean 4.35.0's LLVM libraries need GLIBC_2.30; every other
managed tool needs 2.27 or less (measured with `objdump -T` on the x64 and arm64
archives, 2026-10-23). Installed-package acceptance runs on Ubuntu 24.04
(glibc 2.39); the platform matrix also builds the three sample applications
inside `amazonlinux:2023` (glibc 2.34, the floor) with Node 24. Other older
distributions are untested as build machines.
