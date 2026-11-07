# Lasm next (unreleased)

## Changes

- `Lasm.KV.memory` names the operations on its table (`Lasm.KV.Table.read`, `write`, `remove`), so its proofs are about the code it runs. No change in behavior.

## Documentation

- **What is proved about Lasm's library.** [library/PROOFS.md](../../library/PROOFS.md) lists 30 proved propositions in plain English: Lasm.UI's diff (the DOM always shows the view, over any sequence of frames) and commands, Lasm.RPC's validation, serving, dispatch and client (a handler only ever sees valid requests; an invalid request is never sent), Lasm.KV's memory store and Lasm.Fetch's request paths. Each library's `Spec.lean` states them, its `Theorems.lean` proves them, and the page lists the guarantees not yet proved.

## Testing (no change to how programs build or run)

- **The library's proofs are checked on every library change.** `node scripts/library-proofs.mjs` (CI: `library-proofs.yml`) checks that every proposition has its theorem of exactly that type, that every theorem in the library uses only Lean's standard axioms, and that library/PROOFS.md is current.
- **CI in four tiers** ([CI.md](../CI.md)): PR, nightly, weekly and release. Pull requests run Linux-first checks filtered by path, and use macOS only when macOS-specific code changes, so they wait less for scarce macOS runners. The unit suite now runs on every pull request. The release suites (browser, edge and Bun/Deno, WASI and Fastly, Lasm.UI, fullstack, the dev loop and the Lasm.JS stress test), which used to run only for a release, now run on `main` every night. A weekly tier adds 100-minute differential campaigns and a 200-run Lasm.JS soak. The release checks themselves are unchanged.
