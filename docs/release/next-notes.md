# Next release (unreleased)

Changes since 0.8.0, collected until the release's version bump turns this
file into `<version>-notes.md`.

## Lasm.JS

- **Functions made with `Function.ofFn` report their `length`** (A4,
  docs/API_DECISIONS.md). `ofFn`, `ofFnReply` and `ofSyncFn` take
  `(length := 0)`; `ofFn1` reports 1, `ofFn2` and `ofSyncFn2` report 2.
  APIs that read a function's `length` now work with Lean handlers:
  `Deno.serve` passes its request to an `ofFn1`/`ofFn2` handler, and
  `Function.ofFn (length := 4)` is an Express error handler.
  Migration: none. A program that relied on `ofFn1` or `ofFn2` reporting 0
  passes `Function.ofFn` instead.
- **The binding check only warns about a global the build's target provides**
  (A5). `@[js "globalThis" "Deno.serve"]` and other globals that Node lacks
  now build for `--target deno`, `bun`, the edge targets and `browser`, with a
  warning; a Node build still fails on them. Migration: none.
