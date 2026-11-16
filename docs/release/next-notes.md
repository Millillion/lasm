# Lasm (next release)

Notes for the next release, collected as changes land. They move to
`docs/release/<version>-notes.md` when the version is cut.

## Breaking changes and migration

- **Generated bindings follow one set of rules** ([docs/BINDING_RULES.md](../BINDING_RULES.md), API decisions A9–A12):
  - `FormData.appendWithBlobValue` is now `FormData.appendBlob`, and `FormData.setWithBlobValue` is now `FormData.setBlob` (A9.1). Rename the calls.
  - In `Lasm.JS.Node`, a documented `{number}` that is an integer is now `Nat` (or `Int` for `pid`) instead of `Float` (A11.1):
    - `crypto.randomBytes`, `crypto.pbkdf2`, `crypto.hkdf` and `crypto.scrypt` (sizes, key lengths, iterations, and `ScryptOptions`);
    - `process.kill`'s `pid` (`Int`);
    - `FileHandle.fd`;
    - the `uid`, `gid`, `timeout` and `maxBuffer` options of `child_process`;
    - `highWaterMark` in the stream options.

    Pass whole numbers (`crypto.randomBytes 32`, not `32.0`).

## New

- **Checked downcasts:** `I.cast? (v : Value) : IO (Option I)` (`instanceof`) for every generated interface JavaScript can name (A12), for example `if let some input ← HTMLInputElement.cast? e.val then …`. The unchecked `{ val := v }` stays.
