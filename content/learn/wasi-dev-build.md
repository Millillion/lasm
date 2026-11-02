---
title: A WASI build bug found by differential testing
description: After a Node dev build, lasm build --target wasi --dev failed with duplicate symbols. How differential testing found it, the fix, and the regression check.
date: 2026-11-02
kind: bug-caught
sources:
  - https://github.com/Millillion/lasm/pull/34
  - https://github.com/Millillion/lasm/pull/45
  - https://github.com/Millillion/lasm/blob/main/docs/TESTING.md
  - https://github.com/Millillion/lasm/blob/main/.github/workflows/differential.yml
aiGenerated: true
---

# A WASI build bug found by differential testing

Lasm has two build profiles. A **release** build (`lasm build`) runs the full
size optimization and is the one to deploy. A **dev** build (`lasm build --dev`,
also `lasm Main.lean` and `lasm dev`) leaves those passes out and builds
faster. A dev rebuild starts from the project's previous build.

That last property hid a bug, which differential testing found.

## How it was found

Differential testing ([TESTING.md](../../docs/TESTING.md#differential-testing))
generates random, well-typed Lean programs. It builds each one with upstream
Lean 4.35.0, which is the oracle, and with Lasm for each target. Then it
compares stdout, stderr and the exit status.

The harness builds the targets of one program in the same project: Node first,
then WASI and the others. The first campaign in the dev profile (CI run
41241443151) failed before it could compare any output, because the WASI
build itself failed.

## The smallest reproduction

In any project, with Lasm 0.3.5:

```sh
npx lasm build Main.lean --dev
npx lasm build Main.lean --target wasi --dev
```

The second command failed with about 20 errors like
`wasm-ld: duplicate symbol: lean_uv_tcp_…`. The same happened with
`--target wasi-http` and `--target fastly`. A release build, or a WASI dev
build in a fresh project, was not affected.

## The cause

A Node dev build is a "seeded" link. Its link command lists two kinds of extra
input:

- `reachability.o`, a lookup marker;
- the Node runtime's archive members (`*.lasm-member.o`), in place of the
  archives themselves.

The WASI link starts from that command and links the edge runtime's archives.
It kept the Node members as well, so every host symbol was defined twice. The
edge link (`src/edge/edge-link.mjs`) already dropped those inputs. The WASI
link did not.

## The fix

`src/wasi/wasi-link.mjs` now drops `reachability.o` and every
`*.lasm-member.o` from the inputs, as the edge link does
([PR #34](https://github.com/Millillion/lasm/pull/34)). We checked the fix by
patching an installed 0.3.5 package: the reproduction above then builds.

## The regression check

On every pull request, the differential workflow
([differential.yml](../../.github/workflows/differential.yml)) now also replays
the regression corpus in the dev profile. It builds Node first, then the other
targets, in one project. That is exactly the sequence that failed.

The same campaign also showed `Float.pow` differing in the 17th digit between
native Lean (glibc) and WebAssembly (musl). That is expected, because libm
functions are not correctly rounded. The generator now rounds libm results to 9
significant digits, so they are compared fairly.

## Where it ships

Coming in 0.3.8 ([PR #45](https://github.com/Millillion/lasm/pull/45)).
