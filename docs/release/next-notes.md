# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Fixes

- `Lasm.RPC.parseJson` (and so every `Lasm.RPC` request and answer) writes a parsed zero as `0`. Lean prints a zero with more than ten decimal places (`0e-11`, which `-0.0e-51` parses to) as `0.e-42`, which is not JSON, so an RPC answer that echoed such a number could not be decoded (#135). Other numbers print as before.

## Changes

- `Lasm.KV.memory` names the operations on its table (`Lasm.KV.Table.read`, `write`, `remove`), so its proofs are about the code it runs. No change in behavior.

## Documentation

- **What is proved about Lasm's library.** [library/PROOFS.md](../../library/PROOFS.md) lists 30 proved propositions in plain English: Lasm.UI's diff (the DOM always shows the view, over any sequence of frames) and commands, Lasm.RPC's validation, serving, dispatch and client (a handler only ever sees valid requests; an invalid request is never sent), Lasm.KV's memory store and Lasm.Fetch's request paths. Each library's `Spec.lean` states them, its `Theorems.lean` proves them, and the page lists the guarantees not yet proved.

## Testing (no change to how programs build or run)

- **The library's proofs are checked on every library change.** `node scripts/library-proofs.mjs` (CI: `library-proofs.yml`) checks that every proposition has its theorem of exactly that type, that every theorem in the library uses only Lean's standard axioms, and that library/PROOFS.md is current.

## Example apps

- **Porter keeps the reply of a commit that landed but reported an error (#138).** A token request whose commit succeeded and then threw (a lost reply from D1, a timeout after `COMMIT`) used to run again, find its own code used or its refresh token rotated, answer `invalid_grant` and revoke the tokens it had just issued: one transient database error signed a user out. Each commit now also inserts a commit receipt (`commits (id, at)`, the id a SHA-256 of the request's random values, the same on a rerun); after a failed commit the server looks it up, and if it is there the first reply stands. If the receipt cannot be read, the version decides as before, but the rerun's commit fails on the receipt's key, so nothing is revoked. Receipts older than a day are deleted in each commit. The table is created on start on SQLite and D1 alike. New proposition `Spec.landed_commit_stands` (28 propositions, 197 theorems); the deterministic simulation now fails on such a refusal instead of counting it.
- **The example apps build with 0.5.1 and parse untrusted JSON with `Lasm.RPC.parseJson` (#135).** Ledger, Porter, Tandem, Conduit and Folio pin `@lasm/cli` 0.5.1. Lean's `Json.parse` computes `10 ^ exponent`, so a 90-byte request body hung a server; the apps now use `Lasm.RPC.parseJson`, which refuses numbers whose exponent has more than four digits: Conduit's request bodies (422), its JWT header (read before the signature is checked; 401), its KV and PostgREST reads and its browser app's answers; Ledger's batches (400), its journal auditor and its page. Each app's `test/api.mjs` posts the body from #135 and requires an answer within 10 s, on every platform it runs on. Porter reads JSON only from its operator's configuration and keys, Tandem and Folio read none. The pure cores (`Conduit/`, `Ledger/`) now import `Lasm.RPC.Core`, so they are checked with Lasm's Lean (`npm run proofs`), as their proofs already were.
