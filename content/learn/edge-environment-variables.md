---
title: Environment variables on the edge, found by differential testing
description: On Workers, Deno, Bun and the other edge targets, LEAN_BACKTRACE=0 had no effect. How differential testing found it, the cause, the fix and the test.
date: 2026-11-02
kind: bug-caught
sources:
  - https://github.com/Millillion/lasm/issues/26
  - https://github.com/Millillion/lasm/pull/36
  - https://github.com/Millillion/lasm/pull/45
  - https://github.com/Millillion/lasm/blob/main/docs/TESTING.md
  - https://github.com/Millillion/lasm/blob/main/test/differential/regressions/r_edge_env_backtrace.lean
aiGenerated: true
---

# Environment variables on the edge, found by differential testing

Lean's runtime reads two environment variables when a program panics:

- `LEAN_BACKTRACE=0` turns off the backtrace;
- `LEAN_ABORT_ON_PANIC=1` stops the program at the first panic.

Lasm builds one WebAssembly runtime for the edge targets: Cloudflare Workers,
Vercel and Netlify Edge, Deno Deploy, Supabase, Deno, Bun and the browser. On
that runtime, both variables had no effect.

## How it was found

Differential testing ([TESTING.md](../../docs/TESTING.md#differential-testing))
builds random Lean programs with upstream Lean 4.35.0 and with Lasm, and
compares stdout, stderr and the exit status. The harness sets
`LEAN_BACKTRACE=0` on every target, so that a panic prints the same message
everywhere.

The harness replays its regression corpus on every target. When it replayed
the case `r_wasi_env_backtrace` on the `deno` target, which runs the edge
runtime, panics still printed `backtrace:` and a JavaScript/WebAssembly stack.
Native Lean, Node and WASI printed the message alone. We filed
[issue #26](https://github.com/Millillion/lasm/issues/26).

## The smallest reproduction

```lean
def main : IO Unit := IO.println s!"{(#[1, 2, 3] : Array Nat)[7]!}"
```

Run with `LEAN_BACKTRACE=0`:

- native Lean, Node and WASI print the index-out-of-bounds error alone;
- the edge build, run by Deno, also printed a backtrace.

## The cause

There are two ways to read an environment variable, and they disagreed.

- `IO.getEnv` asks the host, so it saw the variables.
- Lean's C++ runtime reads `LEAN_BACKTRACE` and `LEAN_ABORT_ON_PANIC` with
  libc's `getenv`. In the edge runtime, libc's environment was Emscripten's
  defaults and none of the host's variables.

## The fix

When the edge runtime starts, the embedder's string variables are copied into
Emscripten's environment before libc reads it
([PR #36](https://github.com/Millillion/lasm/pull/36): `src/edge/edge-library.js`,
`src/edge/edge-start.mjs`). Now `LEAN_BACKTRACE=0` and `LEAN_ABORT_ON_PANIC=1`
work on Deno, Bun, Workers, Vercel and Netlify Edge, Deno Deploy and Supabase,
as they do on Node. A browser has no environment, so the defaults stay there
([EDGE.md](../../docs/EDGE.md#environment-variables)).

## The regression test

[`r_edge_env_backtrace.lean`](../../test/differential/regressions/r_edge_env_backtrace.lean)
is in the differential regression corpus, which CI replays on every pull
request. It panics twice and prints `IO.getEnv "LEAN_BACKTRACE"`, so libc and
`IO.getEnv` must agree. We checked it both ways: it diverges with 0.3.5 and
passes with the fix.

Differential testing had found a related bug earlier, in WASI. There, libc's
environment lost every variable after the third. That was fixed in
[PR #25](https://github.com/Millillion/lasm/pull/25), with the regression
`r_wasi_env_backtrace`. The harness always puts several variables ahead of the
ones Lean reads, which is how that bug was found.

## Where it ships

Coming in 0.3.8 ([PR #45](https://github.com/Millillion/lasm/pull/45)).
