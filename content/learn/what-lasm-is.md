---
title: What Lasm is and how it's tested
description: Lasm compiles Lean 4 to WebAssembly for servers, edge platforms, WASI and the browser. What it does, and the layers of testing behind it.
date: 2026-11-02
kind: overview
sources:
  - https://github.com/Millillion/lasm/blob/main/README.md
  - https://github.com/Millillion/lasm/blob/main/docs/TESTING.md
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/differential.yml
  - https://github.com/Millillion/lasm/pull/36
  - https://github.com/Millillion/lasm/pull/37
  - https://github.com/Millillion/lasm/blob/main/examples/conduit/PROOFS.md
aiGenerated: true
---

# What Lasm is and how it's tested

## What Lasm is

Lasm compiles [Lean 4](https://lean-lang.org) to WebAssembly. Lean is a
functional programming language and a proof assistant. You write an app in
Lean, prove what matters about it, and run the compiled program on Node.js,
Bun, Deno, Cloudflare Workers, Vercel, Netlify, Deno Deploy, Supabase, AWS
Lambda, Azure Functions, Google Cloud Functions, Fastly Compute, WASI
runtimes and the browser.

```sh
npm create @lasm@latest my-app -- --template hono
cd my-app && npm install && npm run dev
```

- **It ships on npm** as `@lasm/cli`, and runs on Node.js 24 or newer. Lasm installs exactly Lean 4.35.0 itself, so you need no elan to
  build.
- **Node builds have Lean's full runtime:** threads, files, processes and
  sockets. The other targets run Lean single-threaded, without sockets or
  processes, and without files except on WASI. The rest of Lean works.
- **Lean code can call JavaScript and npm packages** with `Lasm.JS`, one
  `@[js]` line per function. It also comes with libraries for HTTP handlers
  (`Lasm.Fetch`), browser apps (`Lasm.UI`), typed client/server APIs
  (`Lasm.RPC`) and more.
- **The flagship example is [Conduit](../../examples/conduit),** the RealWorld
  app written entirely in Lean. It comes with 294 theorems about the code
  that runs ([PROOFS.md](../../examples/conduit/PROOFS.md)), and it passes
  RealWorld's official API and browser suites on every platform above.

The [README](../../README.md) has the full platform table, with how each
platform is tested and the version that added it.

## How it's tested

The question that matters for a compiler is whether the compiled program
does what the Lean program means.
[TESTING.md](../../docs/TESTING.md) describes each layer of testing, what it
can catch, and what it can't. The main ones follow.

### Black box first

The strongest tests use Lasm only the way a user does. That means the packed
or published `@lasm/cli`, the templates `lasm init` writes, and what the
output does: a program's stdout, stderr and exit status, a server's HTTP
responses, and a browser app's DOM. A test like that survives refactoring.
It also can't be satisfied by the implementation's own assumptions.

### Differential testing against upstream Lean

For compiled Lean, there is an oracle: upstream Lean itself. A generator
writes random, well-typed Lean programs. They cover big numbers at the 2³²
and 2⁶⁴ boundaries, fixed-width integers, floats, Unicode strings, lists,
arrays, hash maps, recursion, `do`-notation with state and exceptions, tasks
and files. Each program is built twice:

- natively, with the untouched upstream Lean 4.35.0 release (the oracle);
- with Lasm, for Node, for WASI (on wasmtime and on `node:wasi`) and for the
  edge runtime (on Deno).

Stdout, stderr and the exit status must match exactly. Every divergence is
shrunk to a small program and kept as a regression test. Since
[PR #36](https://github.com/Millillion/lasm/pull/36), the same programs are
also checked three more ways:

- **against Lean's interpreter,** which is a second oracle;
- **against unoptimized (`-O0`) Lasm builds,** to catch an optimization that
  changes behaviour;
- **on three JavaScript engines:** the same edge `.wasm` on V8 (Node),
  JavaScriptCore (Bun) and SpiderMonkey.

On every pull request this is three seeded program pairs, 525 cases. Every
night it is a 60-minute campaign in each build profile
([differential.yml](../../.github/workflows/differential.yml)).

Differential testing has found real bugs. Each one is written up:

- [the edge runtime ignored `LEAN_BACKTRACE`](edge-environment-variables.md);
- [a WASI dev build failed after a Node dev build](wasi-dev-build.md).

### Target equivalence

One `Lasm.Fetch` server, built for Node, Deno, Bun, wasi-http and Workers,
must answer a recorded set of requests the same way on every target: the same
status, headers and body bytes. This found a request path that routed
differently on different platforms. Its fix comes with a theorem
([new in 0.3.9](segments-no-dot-segments.md)).

### Model checking the host bridge

On Node, Lean threads and JavaScript talk through shared memory. A Lean model
of that protocol is checked over every interleaving up to its bounds. Schedule
fuzzing then perturbs the real JavaScript, and the operations it records are
checked against the model ([PR #37](https://github.com/Millillion/lasm/pull/37)).
This work found [a real hang](host-bridge-hang.md).

### The scenario matrix

The templates, built for their `--target`s on Linux, macOS and Windows, from
a packed or published package, never from the source checkout. Each platform
is served by its own local tooling: workerd through `wrangler dev`, Viceroy
for Fastly Compute, AWS's Lambda images, wasmtime, Spin, and the others. CI
never deploys to a real cloud account, so "tested" means the platform's local
tooling, not production.

### Proofs and real apps

Lean theorems are checked in CI with `#print axioms`, so a `sorry` can't hide.
Conduit runs RealWorld's official suites on every platform
([Conduit on 18 platforms](conduit-on-18-platforms.md)).

### Upstream's own tests

Lean's own test suite runs through the installed package, nightly and before
each release.

## What testing can't show

Each layer in TESTING.md lists its blind spots. For example, differential
testing can't catch a bug that native Lean and Lasm share. Target equivalence
can't catch behaviour its requests don't exercise. And no layer tests a real
cloud account.

## Start

- [From zero to Lean on Cloudflare Workers](lean-on-cloudflare-workers.md)
- [Call an npm package from Lean with Lasm.JS](npm-package-from-lean.md)
- [A Lean function with a proof, deployed](proof-in-a-fetch-handler.md)
